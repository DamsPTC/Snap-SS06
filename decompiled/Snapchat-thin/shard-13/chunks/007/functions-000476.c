/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab3fbd8; end: 10ab3fc2f;  */

ulong FUN_10ab3fbd8(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010ab5b3a0(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ab3fc30; end: 10ab3fd8f;  */

undefined8 * FUN_10ab3fc30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c494c8;
  FUN_10a29f714(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ab3fd90; end: 10ab3fd93;  */

undefined8 * FUN_10ab3fd90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c49578;
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ab3fd94; end: 10ab3fda7;  */

void FUN_10ab3fd94(void)

{
  func_0x00010ab3fd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab3fda8; end: 10ab3fe33;  */

undefined8 * FUN_10ab3fda8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c495d0;
  func_0x00010a05a86c(param_1 + 0x11);
  if (param_1[0x10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xe] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ab3fe34; end: 10ab3fe37;  */

undefined8 * FUN_10ab3fe34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c495d0;
  func_0x00010a05a86c(param_1 + 0x11);
  if (param_1[0x10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0xe] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ab3fe38; end: 10ab3fe4b;  */

void FUN_10ab3fe38(void)

{
  FUN_10ab3fda8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab3fe4c; end: 10ab3febb;  */

void FUN_10ab3fe4c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c49628;
  param_1[2] = &PTR_DAT_110c496c8;
  param_1[7] = &PTR_DAT_110c49720;
  func_0x00010a53f258(param_1 + 0x23);
  FUN_10a29f714(param_1 + 0x21);
  puStack_28 = param_1 + 0x1e;
  FUN_10ab5462c(&puStack_28);
  func_0x00010a004e5c(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab3febc; end: 10ab3fecf;  */

void FUN_10ab3febc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c49628;
  param_1[2] = &PTR_DAT_110c496c8;
  param_1[7] = &PTR_DAT_110c49720;
  func_0x00010a53f258(param_1 + 0x23);
  FUN_10a29f714(param_1 + 0x21);
  puStack_28 = param_1 + 0x1e;
  FUN_10ab5462c(&puStack_28);
  func_0x00010a004e5c(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab3fed0; end: 10ab3ff13;  */

void FUN_10ab3fed0(void)

{
  FUN_10ab3fe4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab3ff14; end: 10ab403b3;  */

undefined ***
FUN_10ab3ff14(long param_1,long *param_2,undefined **UNRECOVERED_JUMPTABLE,undefined **param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puStack_310;
  long *plStack_308;
  undefined *puStack_300;
  long *plStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  long *plStack_2d8;
  undefined *puStack_2d0;
  long *plStack_2c8;
  long lStack_2b8;
  undefined8 uStack_250;
  undefined8 uStack_248;
  uint uStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  uint uStack_218;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined ***pppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  code **ppcStack_1b0;
  undefined **ppuStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  undefined8 *puStack_170;
  undefined ***pppuStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined ***pppuStack_150;
  undefined *puStack_148;
  undefined ***pppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long alStack_128 [8];
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  int5 iStack_68;
  int3 iStack_63;
  int iStack_60;
  uint uStack_5c;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_150 = (undefined ***)UNRECOVERED_JUMPTABLE[1];
  puStack_158 = *UNRECOVERED_JUMPTABLE;
  if (UNRECOVERED_JUMPTABLE[1] != (undefined *)0x0) {
    plVar19 = (long *)(UNRECOVERED_JUMPTABLE[1] + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  pppuStack_140 = (undefined ***)param_4[1];
  puStack_148 = *param_4;
  if (param_4[1] != (undefined *)0x0) {
    plVar19 = (long *)(param_4[1] + 8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  puStack_170 = (undefined8 *)0x0;
  pppuStack_168 = (undefined ***)0x0;
  pppuVar9 = *(undefined ****)(param_1 + 0x70);
  lStack_160 = param_1;
  if (((pppuVar9 == (undefined ***)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_168 = pppuVar9,
      pppuVar9 == (undefined ***)0x0)) ||
     (puVar18 = *(undefined8 **)(param_1 + 0x68), puStack_170 = puVar18,
     puVar18 == (undefined8 *)0x0)) {
    pppuVar9 = pppuStack_168;
    if ((bRam000000011330a9e8 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = (undefined **)&UNK_10f69231b;
      func_0x00010ae06f08(0,1,&UNK_10f69231b,&UNK_10f692358,0x83,&UNK_10f6923fc);
    }
    pppuVar10 = (undefined ***)*param_4;
    ppuStack_a8 = (undefined **)CONCAT44(ppuStack_a8._4_4_,1);
    pppuVar13 = &ppuStack_a8;
    FUN_10ab403b4();
  }
  else {
    uStack_98 = 0;
    uStack_a0 = 0;
    ppuStack_a8 = &PTR_FUN_110c77dd8;
    puStack_90 = &DAT_11383d918;
    puStack_88 = &DAT_11383d918;
    puStack_80 = &DAT_11383d918;
    uStack_78 = 0;
    plStack_70 = (long *)0x0;
    iStack_68 = 0;
    iStack_63 = 0;
    iStack_60 = 0;
    uStack_5c = uStack_5c & 0xffffff00;
    func_0x000107c30248(&puStack_90,param_1 + 0x30,0);
    iVar3 = *(int *)(param_1 + 0x4c);
    iStack_68 = (int5)*(int *)(param_1 + 0x48);
    iStack_63 = (int3)(*(int *)(param_1 + 0x48) >> 0x1f);
    iStack_60 = iVar3;
    if (iVar3 != 2) {
      iStack_60 = 0;
    }
    if (iVar3 == 1) {
      iStack_60 = 1;
    }
    plStack_70 = param_2;
    FUN_10a3bf4bc(&ppuStack_138,&ppuStack_a8);
    FUN_10ae09734(&ppuStack_a8);
    FUN_10ab40554(&uStack_198,*(undefined8 *)(param_1 + 0x88),&lStack_160);
    param_2 = (long *)0x138;
    __Znwm();
    ppuStack_a8 = ppuStack_138;
    plVar19 = param_2 + 1;
    *plVar19 = 0;
    param_2[2] = 0;
    *param_2 = (long)&PTR_FUN_110b9f3b0;
    param_4 = (undefined **)(param_2 + 3);
    ppuStack_138 = (undefined **)0x0;
    uStack_a0 = uStack_130;
    (**(code **)(alStack_128[0] + 0x10))(&uStack_98,alStack_128);
    iStack_60 = (int)alStack_128[7];
    uStack_5c = (uint)((ulong)alStack_128[7] >> 0x20);
    uStack_1b8 = *(ulong *)(param_1 + 0x58);
    puStack_1c0 = *(undefined8 **)(param_1 + 0x50);
    if (-1 < (char)*(byte *)(param_1 + 0x67)) {
      uStack_1b8 = (ulong)*(byte *)(param_1 + 0x67);
      puStack_1c0 = (undefined8 *)(param_1 + 0x50);
    }
    ppcStack_1b0 = &pcStack_e8;
    pcStack_e8 = FUN_10ab5b7ac;
    ppuStack_e0 = &PTR_FUN_110c4b0f0;
    uStack_d8 = uStack_198;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    UNRECOVERED_JUMPTABLE = (undefined **)0x1e;
    FUN_10a23708c(param_4,&UNK_10e4f6bfc,0x1e,&UNK_10f647b45,3,&ppuStack_a8,0);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    FUN_10a042634(&ppuStack_a8);
    ppuStack_180 = param_4;
    plStack_178 = param_2;
    FUN_10ab40804(&uStack_198);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    pppuVar13 = &ppuStack_1a8;
    ppuStack_1a8 = param_4;
    plStack_1a0 = param_2;
    (**(code **)*puVar18)(puVar18);
    plVar19 = plStack_1a0;
    if (plStack_1a0 != (long *)0x0) {
      plVar6 = plStack_1a0 + 1;
      do {
        lVar15 = *plVar6;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar8) {
          *plVar6 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    plVar19 = plStack_178;
    if (plStack_178 != (long *)0x0) {
      plVar6 = plStack_178 + 1;
      do {
        lVar15 = *plVar6;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar8) {
          *plVar6 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_178 + 0x10))(plStack_178);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
      }
    }
    pppuVar10 = &ppuStack_138;
    FUN_10a042634();
    pppuVar9 = pppuStack_168;
  }
  if (pppuVar9 != (undefined ***)0x0) {
    pppuVar12 = pppuVar9 + 1;
    do {
      ppuVar16 = *pppuVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
      if (bVar8) {
        *pppuVar12 = (undefined **)((long)ppuVar16 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar16 == (undefined **)0x0) {
      (*(code *)(*pppuVar9)[2])(pppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar10 = pppuVar9;
    }
  }
  pppuVar9 = pppuStack_140;
  if (pppuStack_140 != (undefined ***)0x0) {
    pppuVar12 = pppuStack_140 + 1;
    do {
      ppuVar16 = *pppuVar12;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
      if (bVar8) {
        *pppuVar12 = (undefined **)((long)ppuVar16 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar16 == (undefined **)0x0) {
      (*(code *)(*pppuStack_140)[2])(pppuStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar10 = pppuVar9;
    }
  }
  pppuVar9 = pppuStack_150;
  pppuStack_1d8 = pppuVar10;
  if (pppuStack_150 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_150 + 1;
    do {
      ppuVar16 = *pppuVar10;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar8) {
        *pppuVar10 = (undefined **)((long)ppuVar16 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar16 == (undefined **)0x0) {
      (*(code *)(*pppuStack_150)[2])(pppuStack_150);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_1d8 = pppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuStack_1d8;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&ppuStack_1a8);
  FUN_10a05bd88(&ppuStack_180);
  FUN_10a042634(&ppuStack_138);
  func_0x00010a05a8c4(&puStack_170);
  FUN_10ab54778(&puStack_148);
  FUN_10ab5b754(&puStack_158);
  pppuVar9 = pppuStack_1d8;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10ab403b4;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1f0 = param_4;
  plStack_1e8 = param_2;
  plStack_1e0 = &lStack_160;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if ((pppuVar9 == (undefined ***)0x0) || (*(char *)(pppuVar9 + 8) != '\x02')) {
    pppuVar12 = pppuVar9;
    pppuVar10 = pppuVar13;
    if ((pppuVar9 != (undefined ***)0x0) && (*(char *)(pppuVar9 + 8) == '\x01')) {
      UNRECOVERED_JUMPTABLE = *pppuVar9;
      pppuVar12 = (undefined ***)(ulong)*(uint *)pppuVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
                    /* WARNING: Could not recover jumptable at 0x00010ab40474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(pppuVar12,pppuVar9);
        return pppuVar12;
      }
      goto LAB_10ab40510;
    }
  }
  else {
    pppuVar11 = pppuVar9;
    pppuVar14 = pppuVar13;
    FUN_10a688b40();
    if (pppuVar11 == (undefined ***)0x0) {
      pppuVar12 = (undefined ***)0x0;
      pppuVar10 = (undefined ***)0x0;
      if (pppuVar14 != (undefined ***)0x0) {
        ppuStack_220 = pppuVar9[1];
        ppuStack_228 = *pppuVar9;
        if (pppuVar9[1] != (undefined **)0x0) {
          ppuVar16 = pppuVar9[1] + 1;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
            if (bVar8) {
              *ppuVar16 = *ppuVar16 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        uStack_240 = *(uint *)pppuVar13;
        pppuVar9 = &ppuStack_238;
        ppuStack_238 = (undefined **)FUN_10ab5b718;
        ppuStack_230 = &PTR_DAT_110c4b070;
        uStack_250 = 0;
        uStack_248 = 0;
        pppuVar10 = &ppuStack_238;
        uStack_218 = uStack_240;
        FUN_10a4634ec();
        pppuVar12 = &ppuStack_230;
        (*(code *)*ppuStack_230)();
      }
    }
    else {
      *pppuVar11 = (undefined **)CONCAT44((int)((ulong)*pppuVar11 >> 0x20) + 1,(int)*pppuVar11 + 1);
      pppuVar12 = (undefined ***)*pppuVar9;
      FUN_10ab5b584();
      iVar3 = *(int *)((long)pppuVar11 + 4) + -1;
      *(int *)((long)pppuVar11 + 4) = iVar3;
      pppuVar10 = pppuVar13;
      if (iVar3 == 0) {
        *(undefined4 *)pppuVar11 = 0;
      }
    }
  }
  pppuVar13 = pppuVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return pppuVar12;
  }
LAB_10ab40510:
  ___stack_chk_fail();
  (*(code *)*ppuStack_230)(pppuVar9 + 1);
  func_0x00010a004dac(&uStack_250);
  __Unwind_Resume();
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(pppuVar13 + 2);
  puVar17 = *UNRECOVERED_JUMPTABLE;
  puVar5 = UNRECOVERED_JUMPTABLE[1];
  plVar19 = (long *)UNRECOVERED_JUMPTABLE[2];
  if (plVar19 != (long *)0x0) {
    plVar6 = plVar19 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = *plVar6 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  puVar4 = UNRECOVERED_JUMPTABLE[3];
  plVar6 = (long *)UNRECOVERED_JUMPTABLE[4];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppuStack_2f0 = &PTR_DAT_110c4a920;
  if (plVar19 != (long *)0x0) {
    plVar1 = plVar19 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppuVar16 = (undefined **)0x48;
  puStack_310 = puVar5;
  plStack_308 = plVar19;
  puStack_300 = puVar4;
  plStack_2f8 = plVar6;
  puStack_2e8 = puVar17;
  puStack_2e0 = puVar5;
  plStack_2d8 = plVar19;
  puStack_2d0 = puVar4;
  plStack_2c8 = plVar6;
  __Znwm();
  ppuVar16[2] = (undefined *)&PTR_DAT_110c4a920;
  ppuVar16[3] = puVar17;
  ppuVar16[4] = puVar5;
  ppuVar16[5] = (undefined *)plVar19;
  if (plVar19 != (long *)0x0) {
    plVar19 = plVar19 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppuVar16[6] = puVar4;
  ppuVar16[7] = (undefined *)plVar6;
  if (plVar6 != (long *)0x0) {
    plVar19 = plVar6 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppuVar20 = pppuVar13[0xb];
  ppuVar21 = pppuVar13[0xc];
  *ppuVar16 = (undefined *)(pppuVar13 + 10);
  ppuVar16[1] = (undefined *)ppuVar20;
  *ppuVar20 = (undefined *)ppuVar16;
  pppuVar13[0xb] = ppuVar16;
  pppuVar13[0xc] = (undefined **)((long)ppuVar21 + 1);
  if (plVar6 != (long *)0x0) {
    plVar19 = plVar6 + 1;
    do {
      lVar15 = *plVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar19 = plStack_2d8;
  if (plStack_2d8 != (long *)0x0) {
    plVar1 = plStack_2d8 + 1;
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
      (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  if (plVar6 != (long *)0x0) {
    plVar19 = plVar6 + 1;
    do {
      lVar15 = *plVar19;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar19 = plStack_308;
  if (plStack_308 != (long *)0x0) {
    plVar6 = plStack_308 + 1;
    do {
      lVar15 = *plVar6;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = lVar15 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_308 + 0x10))(plStack_308);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  ppuVar16 = pppuVar13[0xb];
  pppuVar9 = pppuVar13 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  ppuVar21 = pppuVar13[1];
  ppuVar20 = *pppuVar13;
  if (pppuVar13[1] != (undefined **)0x0) {
    ppuVar2 = pppuVar13[1] + 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar8) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *pppuVar12 = ppuVar16;
  pppuVar12[2] = ppuVar21;
  pppuVar12[1] = ppuVar20;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  FUN_10ab54778(&puStack_2d0);
  FUN_10ab5b754(&puStack_2e0);
  FUN_10ab54778(&puStack_300);
  FUN_10ab5b754(&puStack_310);
  __ZNSt3__115recursive_mutex6unlockEv(pppuVar13 + 2);
  __Unwind_Resume();
  ppuVar16 = pppuVar9[2];
  if (ppuVar16 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar16 != (undefined **)0x0) {
      if (pppuVar9[1] != (undefined **)0x0) {
        FUN_10a05c0fc(pppuVar9[1],*pppuVar9);
      }
      ppuVar20 = ppuVar16 + 1;
      do {
        puVar17 = *ppuVar20;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar20,0x10);
        if (bVar8) {
          *ppuVar20 = puVar17 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuVar16 + 0x10))(ppuVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
      }
    }
    if (pppuVar9[2] != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return pppuVar9;
}



/* Entry: 10ab403b4; end: 10ab40553;  */

undefined ***
FUN_10ab403b4(undefined ***param_1,undefined ***param_2,undefined **UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long *plStack_118;
  undefined *puStack_110;
  long *plStack_108;
  long lStack_f8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  uint uStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar10 = param_1;
    pppuVar12 = param_2;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      UNRECOVERED_JUMPTABLE = *param_1;
      pppuVar10 = (undefined ***)(ulong)*(uint *)param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010ab40474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(pppuVar10,param_1);
        return pppuVar10;
      }
      goto LAB_10ab40510;
    }
  }
  else {
    pppuVar9 = param_1;
    pppuVar13 = param_2;
    FUN_10a688b40();
    if (pppuVar9 == (undefined ***)0x0) {
      pppuVar10 = (undefined ***)0x0;
      pppuVar12 = (undefined ***)0x0;
      if (pppuVar13 != (undefined ***)0x0) {
        ppuStack_60 = param_1[1];
        ppuStack_68 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar11 = param_1[1] + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
            if (bVar7) {
              *ppuVar11 = *ppuVar11 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        uStack_80 = *(uint *)param_2;
        param_1 = &ppuStack_78;
        ppuStack_78 = (undefined **)FUN_10ab5b718;
        ppuStack_70 = &PTR_DAT_110c4b070;
        uStack_90 = 0;
        uStack_88 = 0;
        pppuVar12 = &ppuStack_78;
        uStack_58 = uStack_80;
        FUN_10a4634ec();
        pppuVar10 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
      }
    }
    else {
      *pppuVar9 = (undefined **)CONCAT44((int)((ulong)*pppuVar9 >> 0x20) + 1,(int)*pppuVar9 + 1);
      pppuVar10 = (undefined ***)*param_1;
      FUN_10ab5b584();
      iVar8 = *(int *)((long)pppuVar9 + 4) + -1;
      *(int *)((long)pppuVar9 + 4) = iVar8;
      pppuVar12 = param_2;
      if (iVar8 == 0) {
        *(undefined4 *)pppuVar9 = 0;
      }
    }
  }
  param_2 = pppuVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar10;
  }
LAB_10ab40510:
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a004dac(&uStack_90);
  __Unwind_Resume();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  puVar15 = *UNRECOVERED_JUMPTABLE;
  puVar4 = UNRECOVERED_JUMPTABLE[1];
  plVar16 = (long *)UNRECOVERED_JUMPTABLE[2];
  if (plVar16 != (long *)0x0) {
    plVar5 = plVar16 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = *plVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  puVar3 = UNRECOVERED_JUMPTABLE[3];
  plVar5 = (long *)UNRECOVERED_JUMPTABLE[4];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppuStack_130 = &PTR_DAT_110c4a920;
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppuVar11 = (undefined **)0x48;
  puStack_150 = puVar4;
  plStack_148 = plVar16;
  puStack_140 = puVar3;
  plStack_138 = plVar5;
  puStack_128 = puVar15;
  puStack_120 = puVar4;
  plStack_118 = plVar16;
  puStack_110 = puVar3;
  plStack_108 = plVar5;
  __Znwm();
  ppuVar11[2] = (undefined *)&PTR_DAT_110c4a920;
  ppuVar11[3] = puVar15;
  ppuVar11[4] = puVar4;
  ppuVar11[5] = (undefined *)plVar16;
  if (plVar16 != (long *)0x0) {
    plVar16 = plVar16 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppuVar11[6] = puVar3;
  ppuVar11[7] = (undefined *)plVar5;
  if (plVar5 != (long *)0x0) {
    plVar16 = plVar5 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = *plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppuVar17 = param_2[0xb];
  ppuVar18 = param_2[0xc];
  *ppuVar11 = (undefined *)(param_2 + 10);
  ppuVar11[1] = (undefined *)ppuVar17;
  *ppuVar17 = (undefined *)ppuVar11;
  param_2[0xb] = ppuVar11;
  param_2[0xc] = (undefined **)((long)ppuVar18 + 1);
  if (plVar5 != (long *)0x0) {
    plVar16 = plVar5 + 1;
    do {
      lVar14 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar16 = plStack_118;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  if (plVar5 != (long *)0x0) {
    plVar16 = plVar5 + 1;
    do {
      lVar14 = *plVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar16 = plStack_148;
  if (plStack_148 != (long *)0x0) {
    plVar5 = plStack_148 + 1;
    do {
      lVar14 = *plVar5;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar7) {
        *plVar5 = lVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  ppuVar11 = param_2[0xb];
  pppuVar12 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  ppuVar18 = param_2[1];
  ppuVar17 = *param_2;
  if (param_2[1] != (undefined **)0x0) {
    ppuVar2 = param_2[1] + 2;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar7) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *pppuVar10 = ppuVar11;
  pppuVar10[2] = ppuVar18;
  pppuVar10[1] = ppuVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pppuVar12;
  }
  ___stack_chk_fail();
  FUN_10ab54778(&puStack_110);
  FUN_10ab5b754(&puStack_120);
  FUN_10ab54778(&puStack_140);
  FUN_10ab5b754(&puStack_150);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  ppuVar11 = pppuVar12[2];
  if (ppuVar11 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar11 != (undefined **)0x0) {
      if (pppuVar12[1] != (undefined **)0x0) {
        FUN_10a05c0fc(pppuVar12[1],*pppuVar12);
      }
      ppuVar17 = ppuVar11 + 1;
      do {
        puVar15 = *ppuVar17;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar7) {
          *ppuVar17 = puVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar11);
      }
    }
    if (pppuVar12[2] != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return pppuVar12;
}



/* Entry: 10ab40554; end: 10ab40803;  */

undefined8 * FUN_10ab40554(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar8 = *param_3;
  lVar2 = param_3[1];
  plVar10 = (long *)param_3[2];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar1 = param_3[3];
  plVar3 = (long *)param_3[4];
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_a0 = &PTR_DAT_110c4a920;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6 = (long *)0x48;
  lStack_c0 = lVar2;
  plStack_b8 = plVar10;
  lStack_b0 = lVar1;
  plStack_a8 = plVar3;
  lStack_98 = lVar8;
  lStack_90 = lVar2;
  plStack_88 = plVar10;
  lStack_80 = lVar1;
  plStack_78 = plVar3;
  __Znwm();
  plVar6[2] = (long)&PTR_DAT_110c4a920;
  plVar6[3] = lVar8;
  plVar6[4] = lVar2;
  plVar6[5] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6[6] = lVar1;
  plVar6[7] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)param_2[0xb];
  lVar8 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar7;
  *puVar7 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar8 + 1;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar3 = plStack_b8 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  uVar9 = param_2[0xb];
  puVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar12 = param_2[1];
  uVar11 = *param_2;
  if (param_2[1] != 0) {
    plVar10 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar12;
  param_1[1] = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10ab54778(&lStack_80);
  FUN_10ab5b754(&lStack_90);
  FUN_10ab54778(&lStack_b0);
  FUN_10ab5b754(&lStack_c0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar10 = (long *)puVar7[2];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar10 != (long *)0x0) {
      if (puVar7[1] != 0) {
        FUN_10a05c0fc(puVar7[1],*puVar7);
      }
      plVar3 = plVar10 + 1;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (puVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar7;
}



/* Entry: 10ab40804; end: 10ab40883;  */

undefined8 * FUN_10ab40804(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10ab40884; end: 10ab40b33;  */

undefined8 * FUN_10ab40884(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar8 = *param_3;
  lVar2 = param_3[1];
  plVar10 = (long *)param_3[2];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar1 = param_3[3];
  plVar3 = (long *)param_3[4];
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_a0 = &PTR_DAT_110c4a938;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6 = (long *)0x48;
  lStack_c0 = lVar2;
  plStack_b8 = plVar10;
  lStack_b0 = lVar1;
  plStack_a8 = plVar3;
  lStack_98 = lVar8;
  lStack_90 = lVar2;
  plStack_88 = plVar10;
  lStack_80 = lVar1;
  plStack_78 = plVar3;
  __Znwm();
  plVar6[2] = (long)&PTR_DAT_110c4a938;
  plVar6[3] = lVar8;
  plVar6[4] = lVar2;
  plVar6[5] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6[6] = lVar1;
  plVar6[7] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)param_2[0xb];
  lVar8 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar7;
  *puVar7 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar8 + 1;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar3 = plStack_b8 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  uVar9 = param_2[0xb];
  puVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar12 = param_2[1];
  uVar11 = *param_2;
  if (param_2[1] != 0) {
    plVar10 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar12;
  param_1[1] = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10ab54778(&lStack_80);
  FUN_10ab548ac(&lStack_90);
  FUN_10ab54778(&lStack_b0);
  FUN_10ab548ac(&lStack_c0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar10 = (long *)puVar7[2];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar10 != (long *)0x0) {
      if (puVar7[1] != 0) {
        FUN_10a05c0fc(puVar7[1],*puVar7);
      }
      plVar3 = plVar10 + 1;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (puVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar7;
}



/* Entry: 10ab40b34; end: 10ab40bb3;  */

undefined8 * FUN_10ab40b34(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10ab40bb4; end: 10ab40e63;  */

undefined8 * FUN_10ab40bb4(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar8 = *param_3;
  lVar2 = param_3[1];
  plVar10 = (long *)param_3[2];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar1 = param_3[3];
  plVar3 = (long *)param_3[4];
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  ppuStack_a0 = &PTR_DAT_110c4a950;
  if (plVar10 != (long *)0x0) {
    plVar6 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6 = (long *)0x48;
  lStack_c0 = lVar2;
  plStack_b8 = plVar10;
  lStack_b0 = lVar1;
  plStack_a8 = plVar3;
  lStack_98 = lVar8;
  lStack_90 = lVar2;
  plStack_88 = plVar10;
  lStack_80 = lVar1;
  plStack_78 = plVar3;
  __Znwm();
  plVar6[2] = (long)&PTR_DAT_110c4a950;
  plVar6[3] = lVar8;
  plVar6[4] = lVar2;
  plVar6[5] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    plVar10 = plVar10 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar6[6] = lVar1;
  plVar6[7] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar7 = (undefined8 *)param_2[0xb];
  lVar8 = param_2[0xc];
  *plVar6 = (long)(param_2 + 10);
  plVar6[1] = (long)puVar7;
  *puVar7 = plVar6;
  param_2[0xb] = plVar6;
  param_2[0xc] = lVar8 + 1;
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  if (plVar3 != (long *)0x0) {
    plVar10 = plVar3 + 1;
    do {
      lVar8 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  plVar10 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar3 = plStack_b8 + 1;
    do {
      lVar8 = *plVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
    }
  }
  uVar9 = param_2[0xb];
  puVar7 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar12 = param_2[1];
  uVar11 = *param_2;
  if (param_2[1] != 0) {
    plVar10 = (long *)(param_2[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *param_1 = uVar9;
  param_1[2] = uVar12;
  param_1[1] = uVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10ab54778(&lStack_80);
  FUN_10ab548ac(&lStack_90);
  FUN_10ab54778(&lStack_b0);
  FUN_10ab548ac(&lStack_c0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar10 = (long *)puVar7[2];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar10 != (long *)0x0) {
      if (puVar7[1] != 0) {
        FUN_10a05c0fc(puVar7[1],*puVar7);
      }
      plVar3 = plVar10 + 1;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (puVar7[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar7;
}



/* Entry: 10ab40e64; end: 10ab40ee3;  */

undefined8 * FUN_10ab40e64(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
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
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10ab40ee4; end: 10ab40fef;  */

undefined8 * FUN_10ab40ee4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c49628;
  puVar1[2] = &PTR_DAT_110c496c8;
  puVar1[7] = &PTR_DAT_110c49720;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x1c] = puVar1 + 3;
  param_1[0x1d] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x1c);
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  FUN_10a5ae998(param_1[0x1c],&PTR_DAT_110c4a770,param_2,param_1);
  return param_1;
}



/* Entry: 10ab40ff0; end: 10ab41027;  */

long FUN_10ab40ff0(long param_1)

{
  func_0x00010a07a8a8(param_1 + 0x30);
  FUN_10ab54f24(param_1 + 0x20);
  func_0x00010ab54f7c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ab41028; end: 10ab417cb;  */

void FUN_10ab41028(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  undefined8 ******ppppppuVar6;
  code *pcVar7;
  bool bVar8;
  long **pplVar9;
  undefined8 *******pppppppuVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  undefined8 ******ppppppuVar23;
  undefined8 ******ppppppuVar24;
  long *plStack_b8;
  long *plStack_b0;
  char cStack_a1;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 ******ppppppuStack_80;
  long *plStack_78;
  long *plStack_70;
  
  lVar14 = param_1[1];
  if (*(char *)(lVar14 + 0x2f) < '\0') {
    if (*(long *)(lVar14 + 0x20) == 0) goto LAB_10ab41260;
  }
  else if (*(char *)(lVar14 + 0x2f) == '\0') goto LAB_10ab41260;
  if (*(long *)(lVar14 + 0x30) < 1) {
LAB_10ab41260:
    puVar17 = (undefined8 *)param_1[5];
    func_0x000107c2b054(&ppppppuStack_80,&UNK_10f6930f8);
    if ((puVar17 == (undefined8 *)0x0) || (*(char *)(puVar17 + 8) != '\x02')) {
      if ((puVar17 != (undefined8 *)0x0) && (*(char *)(puVar17 + 8) == '\x01')) {
        (*(code *)*puVar17)(&ppppppuStack_80,puVar17);
      }
    }
    else {
      FUN_10a05aad0(puVar17,&ppppppuStack_80);
    }
LAB_10ab41668:
    if ((long)plStack_70 < 0) {
      __ZdlPv(ppppppuStack_80);
    }
    return;
  }
  plVar18 = (long *)*param_1;
  lVar22 = *(long *)(plVar18[10] + 0x100);
  plVar19 = (long *)(lVar22 + 0x208);
  plVar20 = (long *)plVar18[0x1e];
  plVar11 = (long *)plVar18[0x1f];
  lVar14 = lVar22;
  if (plVar20 != plVar11) {
    do {
      cStack_a1 = '\x01';
      plStack_b8 = (long *)CONCAT62(plStack_b8._2_6_,0x23);
      uVar1 = *(ulong *)(lVar22 + 0x210);
      plVar2 = *(long **)(lVar22 + 0x208);
      if (-1 < (char)*(byte *)(lVar22 + 0x21f)) {
        uVar1 = (ulong)*(byte *)(lVar22 + 0x21f);
        plVar2 = plVar19;
      }
      pplVar9 = &plStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pplVar9,0,plVar2,uVar1);
      plStack_98 = pplVar9[1];
      plStack_a0 = *pplVar9;
      uStack_90 = pplVar9[2];
      pplVar9[1] = (long *)0x0;
      pplVar9[2] = (long *)0x0;
      *pplVar9 = (long *)0x0;
      lVar14 = param_1[1];
      uVar1 = *(ulong *)(lVar14 + 0x20);
      plVar2 = (long *)*(long *)(lVar14 + 0x18);
      if (-1 < (char)*(byte *)(lVar14 + 0x2f)) {
        uVar1 = (ulong)*(byte *)(lVar14 + 0x2f);
        plVar2 = (long *)(lVar14 + 0x18);
      }
      pplVar9 = &plStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pplVar9,plVar2,uVar1);
      plStack_70 = pplVar9[2];
      plStack_78 = pplVar9[1];
      ppppppuStack_80 = (undefined8 ******)*pplVar9;
      pplVar9[1] = (long *)0x0;
      pplVar9[2] = (long *)0x0;
      *pplVar9 = (long *)0x0;
      plVar12 = plStack_70;
      lVar14 = *plVar20;
      plVar2 = plStack_78;
      if (-1 < (long)plStack_70) {
        plVar2 = (long *)((ulong)plStack_70 >> 0x38);
      }
      bVar4 = *(byte *)(lVar14 + 0x47);
      plVar3 = *(long **)(lVar14 + 0x38);
      if (-1 < (char)bVar4) {
        plVar3 = (long *)(ulong)bVar4;
      }
      if (plVar2 == plVar3) {
        pppppppuVar10 = (undefined8 *******)ppppppuStack_80;
        if (-1 < (long)plStack_70) {
          pppppppuVar10 = &ppppppuStack_80;
        }
        plVar2 = (long *)*(long *)(lVar14 + 0x30);
        if (-1 < (char)bVar4) {
          plVar2 = (long *)(lVar14 + 0x30);
        }
        _memcmp(pppppppuVar10,plVar2);
        bVar8 = (int)pppppppuVar10 == 0;
      }
      else {
        bVar8 = false;
      }
      if ((long)plVar12 < 0) {
        __ZdlPv(ppppppuStack_80);
      }
      if ((long)uStack_90 < 0) {
        __ZdlPv(plStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(plStack_b8);
      }
      if (bVar8) {
        if ((*(long *)(param_1[1] + 0x30) == (long)*(int *)(*plVar20 + 0x48)) &&
           (*(int *)(param_1[1] + 0x38) == *(int *)(*plVar20 + 0x4c))) {
          FUN_10ab54988(param_1[3],plVar20);
          return;
        }
        puVar17 = (undefined8 *)param_1[5];
        func_0x000107c2b054(&ppppppuStack_80,&UNK_10f693138);
        if ((puVar17 == (undefined8 *)0x0) || (*(char *)(puVar17 + 8) != '\x02')) {
          if ((puVar17 != (undefined8 *)0x0) && (*(char *)(puVar17 + 8) == '\x01')) {
            (*(code *)*puVar17)(&ppppppuStack_80,puVar17);
          }
        }
        else {
          FUN_10a05aad0(puVar17,&ppppppuStack_80);
        }
        goto LAB_10ab41668;
      }
      plVar20 = plVar20 + 2;
    } while (plVar20 != plVar11);
    lVar14 = *(long *)(plVar18[10] + 0x100);
  }
  plVar11 = *(long **)(lVar14 + 0x1c8);
  (**(code **)(*plVar11 + 0x60))();
  (**(code **)(*plVar18 + 0x50))(&ppppppuStack_80,plVar18);
  plVar20 = plStack_78;
  ppppppuVar6 = ppppppuStack_80;
  if (plStack_78 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar2 = plStack_78 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        lVar14 = *plVar2;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
  }
  plVar12 = (long *)0xb0;
  __Znwm();
  plVar12[1] = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_DAT_110c4a990;
  plVar2 = plVar12 + 3;
  if (plVar20 != (long *)0x0) {
    plVar3 = plVar20 + 2;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = *plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[3] = (long)&PTR_FUN_110c495d0;
  lVar14 = param_1[1];
  if (*(char *)(lVar14 + 0x2f) < '\0') {
    func_0x000107c3192c(plVar12 + 6,*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)(lVar14 + 0x20));
  }
  else {
    lVar13 = *(long *)(lVar14 + 0x20);
    lVar21 = *(long *)(lVar14 + 0x18);
    plVar12[8] = *(long *)(lVar14 + 0x28);
    plVar12[7] = lVar13;
    plVar12[6] = lVar21;
  }
  uStack_90 = (long *)CONCAT17(1,(undefined7)uStack_90);
  plStack_a0 = (long *)CONCAT62(plStack_a0._2_6_,0x23);
  uVar1 = *(ulong *)(lVar22 + 0x210);
  plVar3 = *(long **)(lVar22 + 0x208);
  if (-1 < (char)*(byte *)(lVar22 + 0x21f)) {
    uVar1 = (ulong)*(byte *)(lVar22 + 0x21f);
    plVar3 = plVar19;
  }
  pplVar9 = &plStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pplVar9,0,plVar3,uVar1);
  plStack_78 = pplVar9[1];
  ppppppuStack_80 = (undefined8 ******)*pplVar9;
  plStack_70 = pplVar9[2];
  pplVar9[1] = (long *)0x0;
  pplVar9[2] = (long *)0x0;
  *pplVar9 = (long *)0x0;
  lVar14 = param_1[1];
  uVar1 = *(ulong *)(lVar14 + 0x20);
  plVar3 = (long *)*(long *)(lVar14 + 0x18);
  if (-1 < (char)*(byte *)(lVar14 + 0x2f)) {
    uVar1 = (ulong)*(byte *)(lVar14 + 0x2f);
    plVar3 = (long *)(lVar14 + 0x18);
  }
  pppppppuVar10 = &ppppppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar10,plVar3,uVar1);
  ppppppuVar24 = pppppppuVar10[1];
  ppppppuVar23 = *pppppppuVar10;
  plVar12[0xb] = (long)pppppppuVar10[2];
  plVar12[10] = (long)ppppppuVar24;
  plVar12[9] = (long)ppppppuVar23;
  pppppppuVar10[1] = (undefined8 ******)0x0;
  pppppppuVar10[2] = (undefined8 ******)0x0;
  *pppppppuVar10 = (undefined8 ******)0x0;
  if ((long)plStack_70 < 0) {
    __ZdlPv(ppppppuStack_80);
  }
  if ((long)uStack_90 < 0) {
    __ZdlPv(plStack_a0);
  }
  lVar14 = param_1[1];
  *(int *)(plVar12 + 0xc) = (int)*(undefined8 *)(lVar14 + 0x30);
  *(undefined4 *)((long)plVar12 + 100) = *(undefined4 *)(lVar14 + 0x38);
  if (*(char *)(lVar22 + 0x21f) < '\0') {
    func_0x000107c3192c(plVar12 + 0xd,*(undefined8 *)(lVar22 + 0x208),
                        *(undefined8 *)(lVar22 + 0x210));
  }
  else {
    lVar21 = *(long *)(lVar22 + 0x210);
    lVar14 = *plVar19;
    plVar12[0xf] = *(long *)(lVar22 + 0x218);
    plVar12[0xe] = lVar21;
    plVar12[0xd] = lVar14;
  }
  lVar14 = plVar11[1];
  lVar22 = *plVar11;
  plVar12[0x11] = plVar11[1];
  plVar12[0x10] = lVar22;
  if (lVar14 != 0) {
    plVar19 = (long *)(lVar14 + 0x10);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12[0x12] = (long)ppppppuVar6;
  plVar12[0x13] = (long)plVar20;
  if (plVar20 != (long *)0x0) {
    plVar19 = plVar20 + 2;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = *plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a05a5d4(plVar12 + 0x14,&ppppppuStack_80);
  plStack_b0 = plVar12;
  if (plVar20 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    plVar19 = plVar20 + 1;
    do {
      lVar14 = *plVar19;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar8) {
        *plVar19 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 == 0) {
      plStack_b8 = plVar2;
      (**(code **)(*plVar20 + 0x10))(plVar20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      plVar2 = plStack_b8;
    }
  }
  plStack_b8 = plVar2;
  plVar20 = plStack_b0;
  plVar11 = plStack_b8;
  plVar19 = (long *)plVar18[0x1f];
  if (plVar19 < (long *)plVar18[0x20]) {
    *plVar19 = (long)plStack_b8;
    plVar19[1] = (long)plStack_b0;
    if (plStack_b0 != (long *)0x0) {
      plVar20 = plStack_b0 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar8) {
          *plVar20 = *plVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar19 = plVar19 + 2;
LAB_10ab415cc:
    plVar18[0x1f] = (long)plVar19;
    FUN_10ab54988(param_1[3],&plStack_b8);
    plVar19 = plStack_b0;
    if (plStack_b0 == (long *)0x0) {
      return;
    }
    plVar20 = plStack_b0 + 1;
    do {
      lVar14 = *plVar20;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar8) {
        *plVar20 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar14 != 0) {
      return;
    }
    (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    return;
  }
  lVar14 = plVar18[0x1e];
  lVar22 = (long)plVar19 - lVar14;
  lVar21 = lVar22 >> 4;
  uVar1 = lVar21 + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar15 = plVar18[0x20] - lVar14;
    uVar16 = (long)uVar15 >> 3;
    if (uVar16 <= uVar1) {
      uVar16 = uVar1;
    }
    if (0x7fffffffffffffef < uVar15) {
      uVar16 = 0xfffffffffffffff;
    }
    if (uVar16 >> 0x3c == 0) {
      lVar13 = uVar16 << 4;
      __Znwm();
      plVar2 = (long *)(lVar13 + lVar22);
      *plVar2 = (long)plVar11;
      plVar2[1] = (long)plVar20;
      if (plVar20 != (long *)0x0) {
        plVar20 = plVar20 + 1;
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar14 = plVar18[0x1e];
        lVar22 = plVar18[0x1f] - lVar14;
        lVar21 = lVar22 >> 4;
      }
      plVar19 = plVar2 + 2;
      _memcpy(plVar2 + lVar21 * -2,lVar14,lVar22);
      plVar18[0x1e] = (long)(plVar2 + lVar21 * -2);
      plVar18[0x1f] = (long)plVar19;
      plVar18[0x20] = lVar13 + uVar16 * 0x10;
      if (lVar14 != 0) {
        __ZdlPv(lVar14);
      }
      goto LAB_10ab415cc;
    }
    func_0x000109ffded8();
  }
  else {
    FUN_10ab54f10();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab416a8);
  (*pcVar7)();
}



/* Entry: 10ab417cc; end: 10ab41803;  */

long FUN_10ab417cc(long param_1)

{
  func_0x00010a07a8a8(param_1 + 0x28);
  FUN_10ab54f24(param_1 + 0x18);
  func_0x00010ab54f7c(param_1 + 8);
  return param_1;
}



/* Entry: 10ab41804; end: 10ab4189f;  */

undefined1  [16] FUN_10ab41804(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1b;
  auVar1._0_8_ = &UNK_10f693174;
  return auVar1;
}



/* Entry: 10ab418a0; end: 10ab41903;  */

void FUN_10ab418a0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_50 = 0xffffffff00000001;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f692150;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x98;
  uStack_18 = 0xffffffff;
  FUN_10ab41904(param_1,&uStack_58);
  FUN_10ab5f038();
  return;
}



/* Entry: 10ab41904; end: 10ab419db;  */

/* WARNING: Removing unreachable block (ram,0x00010ab4199c) */

undefined1  [16] FUN_10ab41904(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f693174,0x1b);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab5ef3c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab419dc; end: 10ab41b77;  */

undefined8 * FUN_10ab419dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c46238;
  param_1[2] = &PTR_DAT_110c462d8;
  param_1[7] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab41b78; end: 10ab41b7b;  */

void FUN_10ab41b78(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c44818);
  FUN_10a7f02bc(auStack_30,param_2,0);
  FUN_10a7f03b4(param_1 + 0xe0,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10ab41b7c; end: 10ab41bb7;  */

void FUN_10ab41b7c(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010ab41bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c44818,*(undefined8 *)(param_1 + 0xe0));
  return;
}



/* Entry: 10ab41bb8; end: 10ab41fd7;  */

void FUN_10ab41bb8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x108;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c4b248;
    plVar5 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar5,0,plVar4,param_3);
    plVar3[3] = (long)&PTR_DAT_110c46238;
    plVar3[5] = (long)&PTR_DAT_110c462d8;
    plVar3[10] = (long)&PTR_DAT_110c46330;
    lVar6 = *(long *)(param_2 + 0xe8);
    lVar7 = *(long *)(param_2 + 0xe0);
    plVar3[0x20] = *(long *)(param_2 + 0xe8);
    plVar3[0x1f] = lVar7;
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3[3] = (long)&PTR_FUN_110c497a8;
    plVar3[5] = (long)&PTR_DAT_110c49848;
    plVar3[10] = (long)&PTR_DAT_110c498a0;
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    FUN_10ab5f258(&plStack_50,plVar3 + 8,plVar5);
    FUN_10ab5f0f4(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10ab41f0c;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0xf0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,lVar6,plVar4,param_3);
    *plVar3 = (long)&PTR_DAT_110c46238;
    plVar3[2] = (long)&PTR_DAT_110c462d8;
    plVar3[7] = (long)&PTR_DAT_110c46330;
    lVar6 = *(long *)(param_2 + 0xe8);
    lVar8 = *(long *)(param_2 + 0xe0);
    plVar3[0x1d] = *(long *)(param_2 + 0xe8);
    plVar3[0x1c] = lVar8;
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *plVar3 = (long)&PTR_FUN_110c497a8;
    plVar3[2] = (long)&PTR_DAT_110c49848;
    plVar3[7] = (long)&PTR_DAT_110c498a0;
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c4b1e8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    FUN_10ab5f258(&plStack_50,plVar3 + 5,plVar3);
    FUN_10ab5f0f4(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar4 = plStack_68 + 1;
      do {
        lVar6 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar6 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10ab41f0c;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10ab41f0c:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10ab41fd8; end: 10ab42077;  */

void FUN_10ab41fd8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x1b;
  puVar1[1] = 0x6f437465736c6576;
  *puVar1 = 0x654c2e7465737341;
  *(undefined8 *)((long)puVar1 + 0x13) = 0x7465737341726564;
  *(undefined8 *)((long)puVar1 + 0xb) = 0x696c6c6f43746573;
  *(undefined1 *)((long)puVar1 + 0x1b) = 0;
  return;
}



/* Entry: 10ab42078; end: 10ab42113;  */

undefined1  [16] FUN_10ab42078(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f693190;
  return auVar1;
}



/* Entry: 10ab42114; end: 10ab4221f;  */

void FUN_10ab42114(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x129;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ab42220(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6925a7;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f692150;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 299;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab5f534();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6925bc;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x12a;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab5f6e8(param_1,&puStack_98);
  FUN_10ab5f868(param_1);
  return;
}



/* Entry: 10ab42220; end: 10ab422f7;  */

/* WARNING: Removing unreachable block (ram,0x00010ab422b8) */

undefined1  [16] FUN_10ab42220(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f693190,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab5f438(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab422f8; end: 10ab4241b;  */

undefined8 *
FUN_10ab422f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10aa8a690();
  *puVar1 = &PTR_DAT_110c498c0;
  puVar1[2] = &PTR_DAT_110c49968;
  puVar1[7] = &PTR_DAT_110c499c0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x1e,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    param_1[0x20] = param_4[2];
    param_1[0x1f] = uVar3;
    param_1[0x1e] = uVar2;
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x21,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    param_1[0x23] = param_5[2];
    param_1[0x22] = uVar3;
    param_1[0x21] = uVar2;
  }
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x24,*param_6,param_6[1]);
  }
  else {
    uVar3 = param_6[1];
    uVar2 = *param_6;
    param_1[0x26] = param_6[2];
    param_1[0x25] = uVar3;
    param_1[0x24] = uVar2;
  }
  *(undefined1 *)(param_1 + 0x27) = param_7;
  return param_1;
}



/* Entry: 10ab4241c; end: 10ab4245f;  */

undefined8 * FUN_10ab4241c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c41b28;
  param_1[2] = &PTR_DAT_110c41bd0;
  param_1[7] = &PTR_DAT_110c41c28;
  FUN_10a37e7d4(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab42460; end: 10ab428f3;  */

void FUN_10ab42460(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar7 = *(long *)(param_2 + 0x50);
  plStack_a8 = *(long **)(param_2 + 0xe8);
  uStack_b0 = *(undefined8 *)(param_2 + 0xe0);
  if (*(long *)(param_2 + 0xe8) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0xe8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)(param_2 + 0x11f) < '\0') {
    func_0x000107c3192c(&uStack_d0,*(undefined8 *)(param_2 + 0x108),*(undefined8 *)(param_2 + 0x110)
                       );
  }
  else {
    uStack_c8 = *(undefined8 *)(param_2 + 0x110);
    uStack_d0 = *(undefined8 *)(param_2 + 0x108);
    lStack_c0 = *(long *)(param_2 + 0x118);
  }
  if (*(char *)(param_2 + 0x137) < '\0') {
    func_0x000107c3192c(&uStack_f0,*(undefined8 *)(param_2 + 0x120),*(undefined8 *)(param_2 + 0x128)
                       );
  }
  else {
    uStack_e8 = *(undefined8 *)(param_2 + 0x128);
    uStack_f0 = *(undefined8 *)(param_2 + 0x120);
    lStack_e0 = *(long *)(param_2 + 0x130);
  }
  uVar1 = *(undefined1 *)(param_2 + 0x138);
  if (lVar7 == 0) {
    plVar4 = (long *)0x158;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110c4b2f8;
    plVar6 = plVar4 + 3;
    FUN_10ab422f8(plVar6,0,&uStack_b0,param_2 + 0xf0,&uStack_d0,&uStack_f0,uVar1);
    plStack_60 = plVar6;
    plStack_58 = plVar4;
    FUN_10ab5fa88(&plStack_60,plVar4 + 8,plVar6);
    FUN_10ab5f924(&plStack_a0,&plStack_60);
    if (plStack_58 == (long *)0x0) goto LAB_10ab42788;
    plVar6 = plStack_58 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_58;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(lVar7 + 0x858);
    plVar6 = *(long **)(lVar7 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar4 = (long *)0x140;
    lStack_90 = lVar8;
    plStack_88 = plVar6;
    __Znwm();
    FUN_10ab422f8();
    lStack_80 = lVar8;
    plStack_78 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar5 = (long *)0x30;
    lStack_70 = lVar8;
    plStack_68 = plVar6;
    plStack_60 = plVar4;
    __Znwm();
    lStack_70 = 0;
    plStack_68 = (long *)0x0;
    *plVar5 = (long)&PTR_DAT_110c4b298;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = (long)plVar4;
    plVar5[4] = lVar8;
    plVar5[5] = (long)plVar6;
    plStack_58 = plVar5;
    FUN_10ab5fa88(&plStack_60,plVar4 + 5,plVar4);
    FUN_10ab5f924(&plStack_a0,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar4 = plStack_58 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar4 = plStack_78 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lStack_90 != 0) && (plStack_a0 != (long *)0x0)) {
      plStack_60 = plStack_a0;
      plStack_58 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar6 = plStack_98 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_90,&plStack_60);
      plVar6 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar4 = plStack_58 + 1;
        do {
          lVar7 = *plVar4;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plStack_88 == (long *)0x0) goto LAB_10ab42788;
    plVar6 = plStack_88 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar4 = plStack_88;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10ab42788:
  param_1[1] = plStack_98;
  *param_1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  if (lStack_e0 < 0) {
    __ZdlPv(uStack_f0);
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  plVar6 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    plVar4 = plStack_a8 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10ab428f4; end: 10ab42a23;  */

void FUN_10ab428f4(long param_1,long *param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10aa8aa24();
  (**(code **)(*param_2 + 0xa8))(&uStack_48,param_2,&PTR_DAT_110c499d0,&UNK_10f692150,0);
  if (*(char *)(param_1 + 0x107) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf0));
  }
  *(undefined8 *)(param_1 + 0xf8) = uStack_40;
  *(undefined8 *)(param_1 + 0xf0) = uStack_48;
  *(undefined8 *)(param_1 + 0x100) = uStack_38;
  (**(code **)(*param_2 + 0xa8))(&uStack_48,param_2,&PTR_DAT_110c499f0,&UNK_10f692150,0);
  if (*(char *)(param_1 + 0x11f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x108));
  }
  *(undefined8 *)(param_1 + 0x110) = uStack_40;
  *(undefined8 *)(param_1 + 0x108) = uStack_48;
  *(undefined8 *)(param_1 + 0x118) = uStack_38;
  (**(code **)(*param_2 + 0xa8))(&uStack_48,param_2,&PTR_DAT_110c49a10,&UNK_10f692150,0);
  if (*(char *)(param_1 + 0x137) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x120));
  }
  *(undefined8 *)(param_1 + 0x128) = uStack_40;
  *(undefined8 *)(param_1 + 0x120) = uStack_48;
  *(undefined8 *)(param_1 + 0x130) = uStack_38;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110c49a30,1);
  *(char *)(param_1 + 0x138) = (char)param_2;
  return;
}



/* Entry: 10ab42a24; end: 10ab42bab;  */

void FUN_10ab42a24(long param_1,long *param_2)

{
  code *pcVar1;
  undefined1 *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_30;
  long lStack_28;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3ef18,*(undefined8 *)(param_1 + 0xe0));
  FUN_10a00d760(param_2,&PTR_DAT_110c499d0,param_1 + 0xf0);
  if (*(char *)(param_1 + 0x11f) < '\0') {
    func_0x000107c3192c(&puStack_50,*(undefined8 *)(param_1 + 0x108),
                        *(undefined8 *)(param_1 + 0x110));
  }
  else {
    lStack_48 = *(long *)(param_1 + 0x110);
    puStack_50 = *(undefined1 **)(param_1 + 0x108);
    uStack_40 = *(long *)(param_1 + 0x118);
  }
  lStack_28 = (long)uStack_40._7_1_;
  puStack_30 = (undefined1 *)&puStack_50;
  if (lStack_28 < 0) {
    puStack_30 = puStack_50;
    lStack_28 = lStack_48;
    if (lStack_48 < 0) goto LAB_10ab42b88;
  }
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c499f0,&puStack_30);
  if (uStack_40 < 0) {
    __ZdlPv(puStack_50);
  }
  if (*(char *)(param_1 + 0x137) < '\0') {
    func_0x000107c3192c(&puStack_50,*(undefined8 *)(param_1 + 0x120),
                        *(undefined8 *)(param_1 + 0x128));
  }
  else {
    lStack_48 = *(long *)(param_1 + 0x128);
    puStack_50 = *(undefined1 **)(param_1 + 0x120);
    uStack_40 = *(long *)(param_1 + 0x130);
  }
  lStack_28 = (long)uStack_40._7_1_;
  puStack_30 = (undefined1 *)&puStack_50;
  if (lStack_28 < 0) {
    puStack_30 = puStack_50;
    lStack_28 = lStack_48;
    if (lStack_48 < 0) {
LAB_10ab42b88:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab42b8c);
      puStack_30 = puStack_50;
      lStack_28 = lStack_48;
      (*pcVar1)();
    }
  }
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c49a10,&puStack_30);
  if (uStack_40 < 0) {
    __ZdlPv(puStack_50);
  }
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c49a30,*(undefined1 *)(param_1 + 0x138));
  return;
}



/* Entry: 10ab42bac; end: 10ab42beb;  */

undefined1  [16] FUN_10ab42bac(long param_1)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uStack_11;
  
  if (*(char *)(param_1 + 0x138) != '\x01') {
    puVar1 = &uStack_11;
    param_1 = param_1 + 0xf0;
    FUN_10a994b84(puVar1,param_1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = puVar1;
    return auVar2;
  }
  FUN_10a00946c(&UNK_10f6925c4);
  auVar3._8_8_ = 0x17;
  auVar3._0_8_ = &UNK_10f6931c0;
  return auVar3;
}



/* Entry: 10ab42bec; end: 10ab42c6f;  */

undefined1  [16] FUN_10ab42bec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f6931c0;
  return auVar1;
}



/* Entry: 10ab42c70; end: 10ab42d47;  */

void FUN_10ab42c70(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x124;
  uStack_48 = 0xffffffff;
  FUN_10ab42d48(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6925fe;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10ab5fdbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f692610;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010ab5ff80(param_1,&puStack_88);
  FUN_10ab60204(param_1);
  return;
}



/* Entry: 10ab42d48; end: 10ab42e1f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab42de0) */

undefined1  [16] FUN_10ab42d48(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6931c0,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab5fcc0(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab42e20; end: 10ab43097;  */

void FUN_10ab42e20(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 **ppuVar8;
  long *plStack_c8;
  long *plStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_67;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined8 **ppuStack_40;
  long *plStack_38;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0xa8))(&ppuStack_58,param_2,&PTR_s_map_110c4a9d0,&UNK_10f692150,0);
  uVar6 = (uint)(char)bStack_41;
  if (-1 < (int)uVar6) {
    uStack_50 = (ulong)bStack_41;
  }
  if (uStack_50 != 0) {
    ppuStack_b8 = &PTR_DAT_110af0078;
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_67 = 0;
    uStack_6f = 0;
    uStack_68 = 0;
    ppuStack_40 = ppuStack_58;
    if (-1 < (int)uVar6) {
      ppuStack_40 = &ppuStack_58;
    }
    plStack_38 = (long *)uStack_50;
    func_0x000107c30348(&ppuStack_b8,&ppuStack_40);
    plVar4 = (long *)0x120;
    __Znwm();
    plVar7 = plVar4 + 1;
    *plVar7 = 0;
    plVar4[2] = 0;
    ppuVar8 = (undefined8 **)(plVar4 + 4);
    plVar4[5] = 0;
    *ppuVar8 = (undefined8 *)0x0;
    *plVar4 = (long)&PTR_DAT_110af6bf0;
    plVar4[7] = 0;
    plVar4[6] = 0;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    plVar4[0x13] = 0;
    plVar4[0x12] = 0;
    plVar4[0x15] = 0;
    plVar4[0x14] = 0;
    plVar4[0x17] = 0;
    plVar4[0x16] = 0;
    plVar4[0x19] = 0;
    plVar4[0x18] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1d] = 0;
    plVar4[0x1c] = 0;
    plVar4[0x1f] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x21] = 0;
    plVar4[0x20] = 0;
    plVar4[0x23] = 0;
    plVar4[0x22] = 0;
    plVar4[9] = 0x3ff0000000000000;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    plVar4[0xe] = 0x3ff0000000000000;
    plVar4[0xf] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 0x3ff0000000000000;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    plVar4[0x16] = 0x3ff0000000000000;
    plVar4[0x18] = 0x3ff0000000000000;
    *ppuVar8 = &PTR_DAT_110af6b38;
    ppuStack_40 = ppuVar8;
    plStack_38 = plVar4;
    func_0x000109456e5c(&plStack_c8,&ppuStack_b8);
    plVar3 = plStack_c8;
    plStack_c8 = (long *)0x0;
    lVar5 = plVar4[0x22];
    plVar4[0x22] = (long)plVar3;
    if (lVar5 != 0) {
      FUN_10a7d2a4c(plVar4 + 0x22);
      plVar3 = plStack_c8;
      plStack_c8 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        FUN_10a7d2a4c(&plStack_c8);
      }
    }
    func_0x000109454824(plVar4[0x22]);
    func_0x000109494cfc(plVar4[0x22]);
    *(undefined4 *)(plVar4 + 5) = *(undefined4 *)plVar4[0x22];
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_c8 = (long *)ppuVar8;
    plStack_c0 = plVar4;
    func_0x00010a23175c(param_1 + 0xe0,&plStack_c8);
    plVar3 = plStack_c0;
    if (plStack_c0 != (long *)0x0) {
      plVar4 = plStack_c0 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    plVar3 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar4 = plStack_38 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    func_0x000109343234(&ppuStack_b8);
    uVar6 = (uint)bStack_41;
  }
  if ((uVar6 >> 7 & 1) != 0) {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10ab43098; end: 10ab431bf;  */

/* WARNING: Removing unreachable block (ram,0x00010ab43148) */
/* WARNING: Removing unreachable block (ram,0x00010ab43190) */
/* WARNING: Removing unreachable block (ram,0x00010ab43110) */
/* WARNING: Removing unreachable block (ram,0x00010ab43178) */

void FUN_10ab43098(long param_1,long *param_2)

{
  uint uVar1;
  undefined1 uStack_99;
  undefined **ppuStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  undefined *puStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  func_0x00010aa70b70();
  puStack_38 = (undefined *)0x0;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    ppuStack_98 = &PTR_DAT_110af0078;
    lStack_90 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    uStack_47 = 0;
    uStack_4f = 0;
    uStack_48 = 0;
    uStack_99 = 0;
    func_0x000109458d54(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 0xf0),&uStack_99,&ppuStack_98);
    puStack_38 = (undefined *)((ulong)puStack_38 & 0xffffffffffffff00);
    uStack_28 = uStack_28 & 0xffffffffffffff;
    func_0x000107c30360(&ppuStack_98,&puStack_38);
    func_0x000109343234(&ppuStack_98);
    uVar1 = (uint)(byte)(uStack_28 >> 0x38);
  }
  lStack_90 = (long)(int)uVar1;
  ppuStack_98 = &puStack_38;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_s_map_110c4a9d0,&ppuStack_98);
  return;
}



/* Entry: 10ab431c0; end: 10ab431df;  */

ulong * FUN_10ab431c0(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f692616;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f692616,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10ab431e0; end: 10ab4329b;  */

void FUN_10ab431e0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  
  if ((*(long *)(param_2 + 0xe0) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_2 + 0xe0) + 0xf0), lVar7 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_10a1322a0(param_1,*(long *)(lVar7 + 0x28) - *(long *)(lVar7 + 0x20) >> 3);
    lVar5 = *(long *)(lVar7 + 0x20);
    if (*(long *)(lVar7 + 0x28) != lVar5) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        uVar6 = (param_1[1] - *param_1 >> 2) * -0x5555555555555555;
        if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab4329c);
          (*pcVar2)();
        }
        lVar5 = *(long *)(lVar5 + uVar4 * 8);
        dVar8 = *(double *)(lVar5 + 0x18);
        puVar1 = (undefined8 *)(*param_1 + lVar3);
        *puVar1 = CONCAT44((float)*(double *)(lVar5 + 0x10),(float)*(double *)(lVar5 + 8));
        *(float *)(puVar1 + 1) = (float)dVar8;
        uVar4 = uVar4 + 1;
        lVar5 = *(long *)(lVar7 + 0x20);
        lVar3 = lVar3 + 0xc;
      } while (uVar4 < (ulong)(*(long *)(lVar7 + 0x28) - lVar5 >> 3));
    }
  }
  return;
}



/* Entry: 10ab4329c; end: 10ab43543;  */

void FUN_10ab4329c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auStack_19c [28];
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((*(long *)(param_2 + 0xe0) == 0) || (*(long *)(*(long *)(param_2 + 0xe0) + 0xf0) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(param_2 + 0x50) + 0x8c0) + 0x18);
    puStack_b0 = &UNK_10f69262c;
    puStack_a8 = (undefined *)0x11;
    if (lVar8 == 0) {
      FUN_10a0edfc4(&puStack_b0);
LAB_10ab434f8:
      FUN_10ab54fd4();
LAB_10ab434fc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab43500);
      (*pcVar4)();
    }
    uVar5 = lVar8 + 0x198;
    FUN_10a0ec6f0(uVar5);
    FUN_10a4cac0c(&puStack_f0,uVar5 & 0xffffffff);
    puStack_a8 = puStack_e8;
    puStack_b0 = puStack_f0;
    lStack_98 = lStack_d8;
    puStack_a0 = puStack_e0;
    uStack_88 = uStack_c8;
    plStack_90 = plStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    lVar8 = *(long *)(*(long *)(param_2 + 0xe0) + 0xf0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    plVar3 = *(long **)(lVar8 + 8);
    plVar13 = *(long **)(lVar8 + 0x10);
    if ((long)plVar13 - (long)plVar3 != 0) {
      uVar5 = (long)plVar13 - (long)plVar3 >> 3;
      if (uVar5 >> 0x3c != 0) goto LAB_10ab434f8;
      plStack_d0 = param_1;
      FUN_10ab54fe8();
      lVar11 = uVar5 - (param_1[1] - *param_1);
      _memcpy(lVar11);
      puStack_f0 = (undefined *)*param_1;
      *param_1 = lVar11;
      param_1[1] = uVar5;
      lStack_d8 = param_1[2];
      param_1[2] = uVar5 + param_3 * 0x10;
      puStack_e8 = puStack_f0;
      puStack_e0 = puStack_f0;
      func_0x00010ab5501c(&puStack_f0);
      plVar3 = *(long **)(lVar8 + 8);
      plVar13 = *(long **)(lVar8 + 0x10);
    }
    for (; plVar3 != plVar13; plVar3 = plVar3 + 1) {
      func_0x00010937f874(&lStack_170,*plVar3 + 0x2b0);
      lStack_128 = lStack_168;
      lStack_130 = lStack_170;
      lStack_118 = lStack_158;
      lStack_120 = lStack_160;
      uStack_108 = uStack_148;
      plStack_110 = plStack_150;
      uStack_f8 = uStack_138;
      uStack_100 = uStack_140;
      func_0x000109519fd0(&puStack_f0,&puStack_b0,&lStack_130);
      FUN_10a05181c(auStack_19c,&puStack_f0);
      FUN_10a4a5ec8(&lStack_170,auStack_19c);
      puVar6 = (undefined8 *)0xd0;
      __Znwm();
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar1 = puVar6 + 3;
      *puVar6 = &PTR_FUN_110c4b348;
      plVar7 = &lStack_170;
      FUN_10a3c513c(puVar1);
      plVar12 = (long *)param_1[1];
      puStack_180 = puVar1;
      puStack_178 = puVar6;
      if (plVar12 < (long *)param_1[2]) {
        *plVar12 = (long)puVar1;
        plVar12[1] = (long)puVar6;
        plVar12 = plVar12 + 2;
      }
      else {
        lVar8 = (long)plVar12 - *param_1;
        uVar5 = (lVar8 >> 4) + 1;
        if (uVar5 >> 0x3c != 0) {
          FUN_10ab54fd4();
          goto LAB_10ab434fc;
        }
        uVar9 = param_1[2] - *param_1;
        uVar10 = (long)uVar9 >> 3;
        if (uVar10 <= uVar5) {
          uVar10 = uVar5;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_110 = param_1;
        FUN_10ab54fe8();
        plVar2 = (long *)(uVar10 + lVar8);
        *plVar2 = (long)puVar1;
        plVar2[1] = (long)puVar6;
        plVar12 = plVar2 + 2;
        lVar8 = (long)plVar2 - (param_1[1] - *param_1);
        _memcpy(lVar8);
        lStack_130 = *param_1;
        *param_1 = lVar8;
        param_1[1] = (long)plVar12;
        lStack_118 = param_1[2];
        param_1[2] = uVar10 + (long)plVar7 * 0x10;
        lStack_128 = lStack_130;
        lStack_120 = lStack_130;
        func_0x00010ab5501c(&lStack_130);
      }
      param_1[1] = (long)plVar12;
    }
  }
  return;
}



/* Entry: 10ab43544; end: 10ab435c7;  */

undefined1  [16] FUN_10ab43544(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x18;
  auVar1._0_8_ = &UNK_10f6931d8;
  return auVar1;
}



/* Entry: 10ab435c8; end: 10ab43697;  */

void FUN_10ab435c8(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_90 = (undefined1 *)0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f692150;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_60 = (undefined *)0x98;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ab43698(param_1,&puStack_98);
  puStack_a0 = &DAT_10f692647;
  puStack_98 = &UNK_10f69263e;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x10000000064;
  puStack_70 = &UNK_10f692150;
  uStack_68 = 0;
  puStack_60 = &UNK_10f692150;
  uStack_58 = 0;
  uStack_50 = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  FUN_10ab6045c();
  FUN_10ab6066c(param_1);
  return;
}



/* Entry: 10ab43698; end: 10ab4376f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab43730) */

undefined1  [16] FUN_10ab43698(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6931d8,0x18);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab60360(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab43770; end: 10ab43807;  */

void FUN_10ab43770(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x900);
  FUN_10ab43808(auStack_30,param_1);
  FUN_10a597f08(uVar5,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ab43808; end: 10ab4389b;  */

void FUN_10ab43808(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10ab4389c; end: 10ab43a17;  */

/* WARNING: Possible PIC construction at 0x00010ab439e0: Changing call to branch */

void FUN_10ab4389c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 uStack_41;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar4 = param_2 + 0xe0;
  FUN_10a5c4524();
  if (lVar4 == 0) {
    if (-1 < *(char *)((long)param_3 + 0x17)) goto LAB_10ab4396c;
    uVar8 = *param_3;
    uVar6 = param_3[1];
  }
  else {
    lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x900);
    lVar2 = *(long *)(lVar7 + 0x78);
    for (unaff_x22 = *(long *)(lVar7 + 0x70); unaff_x22 != lVar2; unaff_x22 = unaff_x22 + 0x18) {
      lVar7 = lVar4 + 0x28;
      func_0x000104c5e210(lVar7,unaff_x22);
      unaff_x21 = lVar4;
      if (lVar7 != 0) {
        if (-1 < *(char *)(lVar7 + 0x3f)) {
          uVar10 = *(undefined8 *)(lVar7 + 0x30);
          uVar9 = *(undefined8 *)(lVar7 + 0x28);
          uVar8 = *(undefined8 *)(lVar7 + 0x38);
LAB_10ab439c4:
          param_1[2] = uVar8;
          param_1[1] = uVar10;
          *param_1 = uVar9;
          return;
        }
        uVar8 = *(undefined8 *)(lVar7 + 0x28);
        uVar6 = *(ulong *)(lVar7 + 0x30);
        goto LAB_10ab439dc;
      }
      lVar7 = unaff_x22;
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(unaff_x22,0x2d,0);
      if (lVar7 != -1) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (auStack_60,unaff_x22,0,lVar7,&uStack_41);
        lVar7 = lVar4 + 0x28;
        func_0x000104c5e210(lVar7,auStack_60);
        if (cStack_49 < '\0') {
          __ZdlPv(auStack_60[0]);
        }
        if (lVar7 != 0) {
          if (-1 < *(char *)(lVar7 + 0x3f)) {
            uVar10 = *(undefined8 *)(lVar7 + 0x30);
            uVar9 = *(undefined8 *)(lVar7 + 0x28);
            uVar8 = *(undefined8 *)(lVar7 + 0x38);
            goto LAB_10ab439c4;
          }
          uVar8 = *(undefined8 *)(lVar7 + 0x28);
          uVar6 = *(ulong *)(lVar7 + 0x30);
          goto LAB_10ab439dc;
        }
      }
    }
    if (-1 < *(char *)((long)param_3 + 0x17)) {
LAB_10ab4396c:
      uVar8 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar8;
      param_1[2] = param_3[2];
      return;
    }
    uVar8 = *param_3;
    uVar6 = param_3[1];
LAB_10ab439dc:
    unaff_x30 = 0x10ab439e4;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    unaff_x19 = param_1;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar3 = param_1;
  if (uVar6 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar6;
  }
  else {
    if (0x7ffffffffffffff6 < uVar6) {
      uVar9 = uVar8;
      func_0x000104bd47d4();
      *(ulong *)((long)register0x00000008 + -0x50) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0x48) = uVar8;
      *(undefined1 **)((long)register0x00000008 + -0x40) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x38) = &UNK_100033e30;
      func_0x000107c60e20(uVar9);
      return;
    }
    uVar5 = 0x19;
    if ((uVar6 | 7) != 0x17) {
      uVar5 = (uVar6 | 7) + 1;
    }
    func_0x000100033e30();
    param_1[1] = uVar6;
    param_1[2] = uVar5 | 0x8000000000000000;
    *param_1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(puVar3,uVar8,uVar6 + 1);
  return;
}



/* Entry: 10ab43a18; end: 10ab43f5b;  */

/* WARNING: Removing unreachable block (ram,0x00010ab43bc8) */

void FUN_10ab43a18(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *unaff_x22;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined7 uStack_80;
  char cStack_79;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  func_0x00010aa70acc();
  plVar1 = (long *)(param_1 + 0xe0);
  if (*(long *)(param_1 + 0xf8) != 0) {
    func_0x00010a5c3f20(plVar1,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    lVar6 = *(long *)(param_1 + 0xe8);
    if (lVar6 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*plVar1 + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar6 != lVar9);
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c49c80);
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar5 != 0) {
    iVar12 = 0;
    plVar2 = (long *)(param_1 + 0xf0);
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar12);
      (**(code **)(*param_2 + 0xa0))(&lStack_90,param_2,&PTR_DAT_110c4a9f0);
      plStack_b8 = (long *)0x0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_a0 = 0x3f800000;
      (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_entries_110c49ca0);
      plVar11 = param_2;
      (**(code **)(*param_2 + 0x208))();
      if ((int)plVar11 != 0) {
        iVar13 = 0;
        do {
          (**(code **)(*param_2 + 0x218))(param_2,iVar13);
          (**(code **)(*param_2 + 0xa0))(&plStack_78,param_2,&PTR_DAT_110c4aa10);
          (**(code **)(*param_2 + 0xa0))(auStack_d8,param_2,&PTR_s_value_110c4aa30);
          FUN_109d003fc(&uStack_c0,&plStack_78,&plStack_78,auStack_d8);
          (**(code **)(*param_2 + 0x220))(param_2);
          if (cStack_c1 < '\0') {
            __ZdlPv(auStack_d8[0]);
          }
          iVar13 = iVar13 + 1;
        } while ((int)plVar11 != iVar13);
      }
      plVar11 = plVar1;
      func_0x000107c2b05c(plVar1,&lStack_90);
      plVar15 = *(long **)(param_1 + 0xe8);
      if (plVar15 != (long *)0x0) {
        uVar14 = (long)plVar15 - 1;
        if (((ulong)plVar15 & uVar14) == 0) {
          unaff_x22 = (long *)(uVar14 & (ulong)plVar11);
        }
        else {
          unaff_x22 = plVar11;
          if (plVar15 <= plVar11) {
            uVar10 = 0;
            if (plVar15 != (long *)0x0) {
              uVar10 = (ulong)plVar11 / (ulong)plVar15;
            }
            unaff_x22 = (long *)((long)plVar11 - uVar10 * (long)plVar15);
          }
        }
        plVar7 = *(long **)(*plVar1 + (long)unaff_x22 * 8);
        if (plVar7 != (long *)0x0) {
          for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            plVar8 = (long *)plVar7[1];
            if (plVar8 == plVar11) {
              plVar8 = plVar1;
              func_0x000107c2b068(plVar1,plVar7 + 2,&lStack_90);
              if (((ulong)plVar8 & 1) != 0) goto LAB_10ab43de4;
            }
            else {
              if (((ulong)plVar15 & uVar14) == 0) {
                plVar8 = (long *)((ulong)plVar8 & uVar14);
              }
              else if (plVar15 <= plVar8) {
                uVar10 = 0;
                if (plVar15 != (long *)0x0) {
                  uVar10 = (ulong)plVar8 / (ulong)plVar15;
                }
                plVar8 = (long *)((long)plVar8 - uVar10 * (long)plVar15);
              }
              if (plVar8 != unaff_x22) break;
            }
          }
        }
      }
      plVar7 = (long *)0x50;
      __Znwm();
      uStack_68 = 0;
      *plVar7 = 0;
      plVar7[1] = (long)plVar11;
      plStack_78 = plVar7;
      plStack_70 = plVar1;
      if (cStack_79 < '\0') {
        func_0x000107c3192c(plVar7 + 2,lStack_90,lStack_88);
      }
      else {
        plVar7[3] = lStack_88;
        plVar7[2] = lStack_90;
        plVar7[4] = CONCAT17(cStack_79,uStack_80);
      }
      func_0x000107c2791c(plVar7 + 5,&uStack_c0);
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      fVar16 = (float)(*(long *)(param_1 + 0xf8) + 1);
      if ((plVar15 == (long *)0x0) || (*(float *)(param_1 + 0x100) * (float)plVar15 < fVar16)) {
        uVar14 = 1;
        if ((long *)0x2 < plVar15) {
          uVar14 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
        }
        uVar14 = uVar14 | (long)plVar15 << 1;
        uVar10 = (ulong)(fVar16 / *(float *)(param_1 + 0x100));
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        FUN_10a5c42d0(plVar1,uVar14);
        plVar15 = *(long **)(param_1 + 0xe8);
        if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
          unaff_x22 = (long *)((long)plVar15 - 1U & (ulong)plVar11);
        }
        else {
          unaff_x22 = plVar11;
          if (plVar15 <= plVar11) {
            uVar14 = 0;
            if (plVar15 != (long *)0x0) {
              uVar14 = (ulong)plVar11 / (ulong)plVar15;
            }
            unaff_x22 = (long *)((long)plVar11 - uVar14 * (long)plVar15);
          }
        }
      }
      lVar6 = *plVar1;
      plVar11 = *(long **)(lVar6 + (long)unaff_x22 * 8);
      if (plVar11 == (long *)0x0) {
        *plStack_78 = *plVar2;
        *plVar2 = (long)plStack_78;
        *(long **)(lVar6 + (long)unaff_x22 * 8) = plVar2;
        if (*plStack_78 != 0) {
          plVar11 = *(long **)(*plStack_78 + 8);
          if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar15 - 1U);
          }
          else if (plVar15 <= plVar11) {
            uVar14 = 0;
            if (plVar15 != (long *)0x0) {
              uVar14 = (ulong)plVar11 / (ulong)plVar15;
            }
            plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar15);
          }
          *(long **)(*plVar1 + (long)plVar11 * 8) = plStack_78;
        }
      }
      else {
        *plStack_78 = *plVar11;
        *plVar11 = (long)plStack_78;
      }
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 1;
LAB_10ab43de4:
      (**(code **)(*param_2 + 0x220))(param_2);
      (**(code **)(*param_2 + 0x220))(param_2);
      func_0x000104c4f944(&uStack_c0);
      if (cStack_79 < '\0') {
        __ZdlPv(lStack_90);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != (int)plVar5);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x900);
  FUN_10ab43808(&uStack_c0,param_1);
  FUN_10a5c4608(lVar6 + 0x48,&uStack_c0,&uStack_c0);
  plVar1 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar5 = plStack_b8 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10ab43f5c; end: 10ab4408f;  */

void FUN_10ab43f5c(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c49c80);
  for (plVar1 = *(long **)(param_1 + 0xf0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c4a9f0,plVar1 + 2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_s_entries_110c49ca0);
    for (plVar2 = (long *)plVar1[7]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110c4aa10,plVar2 + 2);
      FUN_10a00d760(param_2,&PTR_s_value_110c4aa30,plVar2 + 5);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab4408c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab44090; end: 10ab4410f;  */

undefined8 FUN_10ab44090(void)

{
  return 0x10000;
}



/* Entry: 10ab44110; end: 10ab4446f;  */

void FUN_10ab44110(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64c77d,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a6a8;
  pppuVar2 = (undefined8 ***)&UNK_10f692150;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4a6a8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab44450;
    FUN_10a054dac(param_1,&UNK_10f69264b,FUN_10ab60728,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab44450;
    FUN_10a054dac(param_1,&UNK_10f69265a,FUN_10ab60880,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab44450;
    FUN_10a054dac(param_1,&UNK_10f69267b,FUN_10ab60a6c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"height",FUN_10ab60b68,FUN_10ab60c24);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f692692,FUN_10ab60d28,FUN_10ab60e1c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6926a8,FUN_10ab60ee4,FUN_10ab60fd4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64c77d,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ab44450:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab44454);
  (*pcVar6)();
}



/* Entry: 10ab44470; end: 10ab4457f;  */

undefined8 * FUN_10ab44470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c49cd0;
  param_1[2] = &PTR_DAT_110c49d70;
  param_1[7] = &PTR_DAT_110c49dc8;
  FUN_10a574034(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab44580; end: 10ab4458f;  */

void FUN_10ab44580(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c49cd0;
  *param_1 = &PTR_DAT_110c49d70;
  param_1[5] = &PTR_DAT_110c49dc8;
  FUN_10a574034(param_1 + 0x1a);
  func_0x00010aa71c88(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab44590; end: 10ab4478f;  */

void FUN_10ab44590(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x00010aa70acc();
  uVar6 = *(undefined4 *)(param_1 + 0xf0);
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c49dd8);
  *(undefined4 *)(param_1 + 0xf0) = uVar6;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_provider_110c49160);
  if ((int)plVar3 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110c49160);
    (**(code **)(*param_2 + 600))(&lStack_40,param_2,0);
    plVar3 = &lStack_50;
    if ((lStack_40 != 0) &&
       (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110c67cb0,0), plVar3 = &lStack_50,
       lStack_40 != 0)) {
      plStack_48 = plStack_38;
      plVar3 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    if (plStack_38 != (long *)0x0) {
      plVar3 = plStack_38 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
      }
    }
    plVar3 = plStack_48;
    lVar4 = lStack_50;
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    plVar5 = *(long **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xe8) = plVar3;
    *(long *)(param_1 + 0xe0) = lVar4;
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar5 = plStack_48 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    (**(code **)(*param_2 + 0x220))(param_2);
    (**(code **)(**(long **)(param_1 + 0xe0) + 0xc0))(*(undefined4 *)(param_1 + 0xf0));
  }
  return;
}



/* Entry: 10ab44790; end: 10ab447e7;  */

void FUN_10ab44790(long param_1,long *param_2)

{
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xf0),param_2,&PTR_DAT_110c49dd8);
                    /* WARNING: Could not recover jumptable at 0x00010ab447e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_provider_110c49160,*(undefined8 *)(param_1 + 0xe0))
  ;
  return;
}



/* Entry: 10ab447e8; end: 10ab448df;  */

void FUN_10ab447e8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined8 *puStack_60;
  ulong uStack_58;
  undefined1 **ppuStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar6 = &puStack_20;
  if ((int)param_2 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0xe0);
  puStack_20 = &UNK_10f6926ed;
  uStack_18 = 0x2f;
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab44824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x98))(plVar5,1);
    return;
  }
  FUN_10a0edfc4();
  ppuVar7 = &puStack_40;
  uStack_28 = 0x10ab4483c;
  puStack_40 = &UNK_10f6926ed;
  uStack_38 = 0x2f;
  puStack_30 = &stack0xfffffffffffffff0;
  if (*(long **)((long)ppuVar6 + 0xe0) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ab44870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)((long)ppuVar6 + 0xe0) + 0x98))();
    return;
  }
  FUN_10a0edfc4();
  ppuVar8 = &puStack_60;
  uStack_48 = 0x10ab4487c;
  plVar5 = *(long **)((long)ppuVar7 + 0xe0);
  puStack_60 = (undefined8 *)&UNK_10f692755;
  uStack_58 = 0x33;
  ppuStack_50 = &puStack_30;
  if (plVar5 != (long *)0x0) {
    uStack_58 = param_2[1];
    puStack_60 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uStack_58 = (ulong)*(byte *)((long)param_2 + 0x17);
      puStack_60 = param_2;
    }
    (**(code **)(*plVar5 + 0xb8))(plVar5,&puStack_60);
    return;
  }
  FUN_10a0edfc4();
  lVar11 = *(long *)((long)ppuVar8 + 0x50);
  if (lVar11 == 0) {
    plVar10 = (long *)0x110;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_DAT_110c23648;
    plVar5 = plVar10 + 3;
    plStack_a8 = *(long **)((long)ppuVar8 + 0xe8);
    lStack_b0 = *(long *)((long)ppuVar8 + 0xe0);
    if (*(long *)((long)ppuVar8 + 0xe8) != 0) {
      plVar1 = (long *)(*(long *)((long)ppuVar8 + 0xe8) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a84d124(plVar5,0,&lStack_b0);
    plVar1 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
      do {
        lVar11 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plStack_c0 = plVar5;
    plStack_b8 = plVar10;
    FUN_10a84d2c0(&plStack_c0,plVar10 + 8,plVar5);
    FUN_10a84cfc0(&plStack_f0,&plStack_c0);
    if (plStack_b8 == (long *)0x0) goto LAB_10ab44c08;
    plVar5 = plStack_b8 + 1;
    do {
      lVar11 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_b8;
    } while (cVar3 != '\0');
  }
  else {
    lStack_e0 = *(long *)(lVar11 + 0x858);
    plStack_d8 = *(long **)(lVar11 + 0x860);
    if (plStack_d8 != (long *)0x0) {
      plVar5 = plStack_d8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar12 = *(long *)((long)ppuVar8 + 0xe8);
    plVar5 = *(long **)((long)ppuVar8 + 0xe8);
    lVar13 = *(long *)((long)ppuVar8 + 0xe0);
    uVar9 = 0xf8;
    __Znwm(0xf8);
    if (lVar12 != 0) {
      plVar10 = (long *)(lVar12 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_b0 = lVar13;
    plStack_a8 = plVar5;
    FUN_10a84d124(uVar9,lVar11,&lStack_b0);
    plVar5 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar10 = plStack_a8 + 1;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_d8;
    lVar11 = lStack_e0;
    lStack_d0 = lStack_e0;
    plStack_c8 = plStack_d8;
    if (plStack_d8 != (long *)0x0) {
      plVar10 = plStack_d8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = plStack_d8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
    lStack_b0 = lVar11;
    plStack_a8 = plVar5;
    FUN_10a84d220(&plStack_c0,uVar9,&lStack_b0);
    FUN_10a84cfc0(&plStack_f0,&plStack_c0);
    plVar5 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar10 = plStack_b8 + 1;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_a8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar10 = plStack_c8 + 1;
      do {
        lVar11 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_e0 != 0) && (plStack_f0 != (long *)0x0)) {
      plStack_c0 = plStack_f0;
      plStack_b8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar5 = plStack_e8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar4) {
            *plVar5 = *plVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10aa88c30(lStack_e0,&plStack_c0);
      plVar5 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar10 = plStack_b8 + 1;
        do {
          lVar11 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_d8 == (long *)0x0) goto LAB_10ab44c08;
    plVar5 = plStack_d8 + 1;
    do {
      lVar11 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_d8;
    } while (cVar3 != '\0');
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
LAB_10ab44c08:
  extraout_x8[1] = plStack_e8;
  *extraout_x8 = plStack_f0;
  return;
}



/* Entry: 10ab448e0; end: 10ab44cc3;  */

void FUN_10ab448e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar7 = *(long *)(param_2 + 0x50);
  if (lVar7 == 0) {
    plVar6 = (long *)0x110;
    __Znwm();
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_DAT_110c23648;
    plVar10 = plVar6 + 3;
    plStack_48 = *(long **)(param_2 + 0xe8);
    lStack_50 = *(long *)(param_2 + 0xe0);
    if (*(long *)(param_2 + 0xe8) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0xe8) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a84d124(plVar10,0,&lStack_50);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plStack_60 = plVar10;
    plStack_58 = plVar6;
    FUN_10a84d2c0(&plStack_60,plVar6 + 8,plVar10);
    FUN_10a84cfc0(&plStack_90,&plStack_60);
    if (plStack_58 == (long *)0x0) goto LAB_10ab44c08;
    plVar10 = plStack_58 + 1;
    do {
      lVar7 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_58;
    } while (cVar3 != '\0');
  }
  else {
    lStack_80 = *(long *)(lVar7 + 0x858);
    plStack_78 = *(long **)(lVar7 + 0x860);
    if (plStack_78 != (long *)0x0) {
      plVar10 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar8 = *(long *)(param_2 + 0xe8);
    plVar10 = *(long **)(param_2 + 0xe8);
    lVar9 = *(long *)(param_2 + 0xe0);
    uVar5 = 0xf8;
    __Znwm(0xf8);
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_50 = lVar9;
    plStack_48 = plVar10;
    FUN_10a84d124(uVar5,lVar7,&lStack_50);
    plVar10 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar10 = plStack_78;
    lVar7 = lStack_80;
    lStack_70 = lStack_80;
    plStack_68 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = plStack_78 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
    lStack_50 = lVar7;
    plStack_48 = plVar10;
    FUN_10a84d220(&plStack_60,uVar5,&lStack_50);
    FUN_10a84cfc0(&plStack_90,&plStack_60);
    plVar10 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar10 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_60 = plStack_90;
      plStack_58 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar10 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_60);
      plVar10 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar6 = plStack_58 + 1;
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
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10ab44c08;
    plVar10 = plStack_78 + 1;
    do {
      lVar7 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_78;
    } while (cVar3 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10ab44c08:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10ab44cc4; end: 10ab44d33;  */

undefined1  [16] FUN_10ab44cc4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f633eab;
  return auVar1;
}



/* Entry: 10ab44d34; end: 10ab45013;  */

void FUN_10ab44d34(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f633eab,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4dad8;
  pppuVar2 = (undefined8 ***)&UNK_10f692150;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4dad8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x20,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab44ff4;
    FUN_10a054dac(param_1,&UNK_10f64f5cc,FUN_10ab610c0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab44ff4;
    FUN_10a054dac(param_1,&UNK_10f6927b4,FUN_10ab6122c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab44ff4;
    FUN_10a054dac(param_1,&UNK_10f6927c1,FUN_10ab612f4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f64bfaa,FUN_10ab613e0,FUN_10ab61514);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f633eab,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ab44ff4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab44ff8);
  (*pcVar6)();
}



/* Entry: 10ab45014; end: 10ab45117;  */

undefined8 * FUN_10ab45014(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  param_1[0x1e] = &UNK_10e52b660;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xfe00;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = &UNK_10e52b660;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = &UNK_10e52b660;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(ushort *)((long)param_1 + 0x1c9) = *(ushort *)((long)param_1 + 0x1c9) & 0xfc00 | 1;
  param_1[0x44] = 0;
  *param_1 = &PTR_DAT_110c49e08;
  param_1[2] = &PTR_FUN_110c49eb0;
  param_1[7] = &PTR_DAT_110c49f08;
  param_1[0x1c] = &PTR_DAT_110c49f28;
  param_1[0x1d] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = &PTR_FUN_110c49f58;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  if (sRam00000001133006e0 == -1) {
    sRam00000001133006e0 = 0x228;
  }
  return param_1;
}



/* Entry: 10ab45118; end: 10ab451f3;  */

void FUN_10ab45118(undefined8 *param_1)

{
  FUN_10aa7093c();
  param_1[0x1e] = &UNK_10e52b660;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xfe00;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = &UNK_10e52b660;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = &UNK_10e52b660;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(ushort *)((long)param_1 + 0x1c9) = *(ushort *)((long)param_1 + 0x1c9) & 0xfc00 | 1;
  param_1[0x44] = 0;
  *param_1 = &PTR_DAT_110c49e08;
  param_1[2] = &PTR_FUN_110c49eb0;
  param_1[7] = &PTR_DAT_110c49f08;
  param_1[0x1c] = &PTR_DAT_110c49f28;
  param_1[0x1d] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = &PTR_FUN_110c49f58;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  if (sRam00000001133006e0 == -1) {
    sRam00000001133006e0 = 0x228;
  }
  return;
}



/* Entry: 10ab451f4; end: 10ab457eb;  */

undefined ***
FUN_10ab451f4(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6,undefined8 param_7,undefined **param_8,undefined4 param_9)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined8 ****ppppuVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined ***pppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 ***pppuStack_240;
  ulong uStack_238;
  undefined8 uStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined8 ***pppuStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined ***pppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1b0;
  undefined **appuStack_1a8 [7];
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 **ppuStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  long lStack_118;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a38fbbc(&lStack_200);
  lVar12 = lStack_200;
  lStack_e0 = lStack_200 + 0xe0;
  uVar4 = *(ushort *)(lStack_200 + 0x1c9);
  *(ushort *)(lStack_200 + 0x1c9) = uVar4 & 0xff80 | uVar4 + 1 & 0x7f;
  *(ushort *)(lStack_200 + 0x110) =
       *(ushort *)(lStack_200 + 0x110) & 0xff80 | *(ushort *)(lStack_200 + 0x110) + 1 & 0x7f;
  uStack_d8 = 1;
  pcStack_f0 = FUN_10a1d3648;
  ppuStack_e8 = &PTR_FUN_110bad818;
  if (0x7ffffffffffffff7 < param_4) {
    func_0x000109ffde50();
    goto LAB_10ab45744;
  }
  if (param_4 < 0x17) {
    uStack_208 = CONCAT17((char)param_4,(undefined7)uStack_208);
    ppppuVar8 = &pppuStack_218;
    if (param_4 != 0) goto LAB_10ab452f4;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if ((param_4 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)((param_4 | 7) + 1);
    }
    ppppuVar8 = ppppuVar3;
    __Znwm();
    uStack_208 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_218 = ppppuVar8;
    uStack_210 = param_4;
LAB_10ab452f4:
    _memmove(ppppuVar8,param_3,param_4);
  }
  *(undefined1 *)((long)ppppuVar8 + param_4) = 0;
  if (*(char *)(lVar12 + 0x6f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar12 + 0x58));
  }
  *(ulong *)(lVar12 + 0x60) = uStack_210;
  *(undefined8 ****)(lVar12 + 0x58) = pppuStack_218;
  *(ulong *)(lVar12 + 0x68) = uStack_208;
  uStack_208 = uStack_208 & 0xffffffffffffff;
  pppuStack_218 = (undefined8 ***)((ulong)pppuStack_218 & 0xffffffffffffff00);
  if ((undefined **)0x7ffffffffffffff7 < param_8) {
    func_0x000109ffde50();
    goto LAB_10ab45744;
  }
  if (param_8 < (undefined **)0x17) {
    uStack_1e0 = CONCAT17((char)param_8,(undefined7)uStack_1e0);
    ppppuVar8 = &pppuStack_1f0;
    if (param_8 != (undefined **)0x0) goto LAB_10ab45380;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if (((ulong)param_8 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)(((ulong)param_8 | 7) + 1);
    }
    ppppuVar8 = ppppuVar3;
    __Znwm();
    uStack_1e0 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_1f0 = ppppuVar8;
    ppuStack_1e8 = param_8;
LAB_10ab45380:
    _memmove(ppppuVar8,param_7,param_8);
  }
  *(undefined1 *)((long)ppppuVar8 + (long)param_8) = 0;
  plVar9 = (long *)0x300;
  __Znwm();
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110baa060;
  plVar1 = plVar9 + 3;
  FUN_10a330b88(plVar1,param_2,&pppuStack_1f0,param_9);
  plStack_228 = plVar1;
  plStack_220 = plVar9;
  FUN_10a190d60(&plStack_228,plVar9 + 9,plVar1);
  if ((long)uStack_1e0 < 0) {
    __ZdlPv(pppuStack_1f0);
  }
  plVar1 = plStack_228;
  lStack_118 = plStack_228[7];
  lStack_120 = plStack_228[6];
  if (plStack_228[7] != 0) {
    plVar9 = (long *)(plStack_228[7] + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_130 = (undefined8 ***)0x10a3635a8;
  ppuStack_128 = &PTR_FUN_110bc68e8;
  if (0x7ffffffffffffff7 < param_6) {
    func_0x000109ffde50();
LAB_10ab45744:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab45748);
    (*pcVar7)();
  }
  if (param_6 < 0x17) {
    uStack_230 = CONCAT17((char)param_6,(undefined7)uStack_230);
    ppppuVar8 = &pppuStack_240;
    if (param_6 == 0) goto LAB_10ab45484;
  }
  else {
    ppppuVar3 = (undefined8 ****)0x19;
    if ((param_6 | 7) != 0x17) {
      ppppuVar3 = (undefined8 ****)((param_6 | 7) + 1);
    }
    ppppuVar8 = ppppuVar3;
    __Znwm();
    uStack_230 = (ulong)ppppuVar3 | 0x8000000000000000;
    pppuStack_240 = ppppuVar8;
    uStack_238 = param_6;
  }
  _memmove(ppppuVar8,param_5,param_6);
LAB_10ab45484:
  *(undefined1 *)((long)ppppuVar8 + param_6) = 0;
  if (*(char *)((long)plVar1 + 0x1b7) < '\0') {
    __ZdlPv(plVar1[0x34]);
  }
  plVar1[0x35] = uStack_238;
  plVar1[0x34] = (long)pppuStack_240;
  plVar1[0x36] = uStack_230;
  uStack_230 = uStack_230 & 0xffffffffffffff;
  pppuStack_240 = (undefined8 ***)((ulong)pppuStack_240 & 0xffffffffffffff00);
  FUN_10ab46914(lStack_200 + 0x228,&plStack_228);
  pppuStack_1f0 = (undefined8 ***)ppuStack_130;
  (*(code *)ppuStack_128[2])(&ppuStack_1e8,&ppuStack_128);
  ppuStack_130 = (undefined8 **)&UNK_1053a6a3c;
  (*(code *)*ppuStack_128)(&ppuStack_128);
  ppuStack_128 = &PTR_DAT_110ae9180;
  pcStack_1b0 = pcStack_f0;
  (*(code *)ppuStack_e8[2])(appuStack_1a8,&ppuStack_e8);
  pcStack_f0 = (code *)&UNK_1053a6a3c;
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  ppuStack_e8 = &PTR_DAT_110ae9180;
  pcStack_b0 = FUN_10ab616ec;
  ppuStack_a8 = &PTR_FUN_110c4b388;
  puVar10 = (undefined8 *)0x80;
  __Znwm();
  *puVar10 = pppuStack_1f0;
  (*(code *)ppuStack_1e8[2])(puVar10 + 1,&ppuStack_1e8);
  pppuStack_1f0 = (undefined8 ***)&UNK_1053a6a3c;
  (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
  ppuStack_1e8 = &PTR_DAT_110ae9180;
  puVar10[8] = pcStack_1b0;
  (*(code *)appuStack_1a8[0][2])(puVar10 + 9,appuStack_1a8);
  pcStack_1b0 = (code *)&UNK_1053a6a3c;
  (*(code *)*appuStack_1a8[0])(appuStack_1a8);
  appuStack_1a8[0] = &PTR_DAT_110ae9180;
  ppuStack_168 = &PTR_FUN_110c4b388;
  uStack_a0 = 0;
  FUN_10ab616f0(&ppuStack_a8);
  FUN_10a044790(&pcStack_1b0);
  (*(code *)*appuStack_1a8[0])(appuStack_1a8);
  FUN_10a044790(&pppuStack_1f0);
  (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
  param_1[1] = (long)pppuStack_1f8;
  *param_1 = lStack_200;
  if (pppuStack_1f8 != (undefined ***)0x0) {
    pppuVar11 = pppuStack_1f8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
      if (bVar6) {
        *pppuVar11 = (undefined **)((long)*pppuVar11 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  param_1[2] = (long)FUN_10ab616ec;
  param_1[3] = (long)&PTR_FUN_110c4b388;
  param_1[4] = (long)puVar10;
  uStack_160 = 0;
  puStack_170 = &UNK_1053a6a3c;
  FUN_10ab616f0(&ppuStack_168);
  ppuStack_168 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_170);
  (*(code *)*ppuStack_168)(&ppuStack_168);
  FUN_10a044790(&ppuStack_130);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  plVar1 = plStack_220;
  if (plStack_220 != (long *)0x0) {
    plVar9 = plStack_220 + 1;
    do {
      lVar12 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_220 + 0x10))(plStack_220);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  FUN_10a044790(&pcStack_f0);
  pppuVar11 = &ppuStack_e8;
  (*(code *)*ppuStack_e8)();
  if (pppuStack_1f8 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_1f8 + 1;
    do {
      ppuVar13 = *pppuVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar6) {
        *pppuVar2 = (undefined **)((long)ppuVar13 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar13 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1f8)[2])(pppuStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar11 = pppuStack_1f8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10ab457ec(&pppuStack_1f0);
    FUN_10a044790(&ppuStack_130);
    (*(code *)*ppuStack_128)(&ppuStack_128);
    func_0x00010a190e10(&plStack_228);
    FUN_10a044790(&pcStack_f0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    FUN_10a0617bc(&lStack_200);
    __Unwind_Resume();
    FUN_10a044790(pppuVar11 + 8);
    (*(code *)*pppuVar11[9])();
    FUN_10a044790(pppuVar11);
    (*(code *)*pppuVar11[1])();
    return pppuVar11;
  }
  return pppuVar11;
}



/* Entry: 10ab457ec; end: 10ab4583b;  */

long FUN_10ab457ec(long param_1)

{
  FUN_10a044790(param_1 + 0x40);
  (*(code *)**(undefined8 **)(param_1 + 0x48))();
  FUN_10a044790(param_1);
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10ab4583c; end: 10ab4583f;  */

long FUN_10ab4583c(long param_1)

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



/* Entry: 10ab45840; end: 10ab458ff;  */

void FUN_10ab45840(undefined8 *param_1)

{
  undefined8 **ppuVar1;
  long ****pppplVar2;
  char cVar3;
  bool bVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  code *pcVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  long ****pppplVar10;
  int iVar11;
  ulong uVar12;
  long *extraout_x8;
  undefined8 *puVar13;
  long ***ppplVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long ***ppplStack_1b0;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 uStack_190;
  undefined7 uStack_188;
  undefined1 uStack_181;
  long lStack_180;
  long *plStack_178;
  long ***ppplStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long ***ppplStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long lStack_d8;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar11 = 0;
  FUN_10ab45900(&uStack_80);
  param_1[1] = ppuStack_78;
  *param_1 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a044790(auStack_70);
  ppuVar8 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  ppuVar9 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar13 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar13 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar13 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar8 = ppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a38fbbc(&lStack_180,ppuVar8[10]);
  lVar15 = lStack_180;
  if (lStack_180 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_198,&UNK_10f6927c9,ppuVar8 + 0xb);
    if (*(char *)(lVar15 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar15 + 0x58));
    }
    *(undefined8 *)(lVar15 + 0x60) = uStack_190;
    *(ulong *)(lVar15 + 0x58) = CONCAT71(uStack_197,uStack_198);
    *(ulong *)(lVar15 + 0x68) = CONCAT17(uStack_181,uStack_188);
    uStack_181 = 0;
    uStack_198 = 0;
  }
  ppplStack_1b0 = (long ***)0x0;
  ppplStack_1a8 = (long ***)0x0;
  ppplStack_1a0 = (long ***)0x0;
  plVar17 = ppuVar8[0x46];
  plVar16 = ppuVar8[0x45];
  pppplVar10 = (long ****)ppplStack_1b0;
  pppplVar2 = (long ****)ppplStack_1a8;
  pppplVar5 = (long ****)ppplStack_1a0;
  if ((long)plVar17 - (long)plVar16 != 0) {
    uVar12 = (long)plVar17 - (long)plVar16 >> 4;
    if (uVar12 >> 0x3a != 0) goto LAB_10ab45c94;
    ppplStack_108 = (long ***)&ppplStack_1b0;
    pppplVar10 = &ppplStack_1b0;
    FUN_10a3a8554();
    pppplVar2 = (long ****)((long)pppplVar10 + ((long)ppplStack_1b0 - (long)ppplStack_1a8));
    ppplStack_128 = (long ***)pppplVar10;
    ppplStack_120 = (long ***)pppplVar10;
    ppplStack_118 = (long ***)pppplVar10;
    ppplStack_110 = (long ***)(pppplVar10 + uVar12 * 8);
    FUN_10a3a8588(&ppplStack_1b0,ppplStack_1b0,ppplStack_1a8,pppplVar2);
    ppplStack_118 = ppplStack_1b0;
    ppplStack_110 = ppplStack_1a0;
    ppplStack_128 = ppplStack_1b0;
    ppplStack_120 = ppplStack_1b0;
    ppplStack_1b0 = (long ***)pppplVar2;
    ppplStack_1a8 = (long ***)pppplVar10;
    ppplStack_1a0 = (long ***)(pppplVar10 + uVar12 * 8);
    func_0x00010a3a8704(&ppplStack_128);
    plVar16 = ppuVar8[0x45];
    plVar17 = ppuVar8[0x46];
    pppplVar10 = (long ****)ppplStack_1b0;
    pppplVar2 = (long ****)ppplStack_1a8;
    pppplVar5 = (long ****)ppplStack_1a0;
  }
  for (; plVar16 != plVar17; plVar16 = plVar16 + 2) {
    ppplStack_1b0 = (long ***)pppplVar10;
    ppplStack_1a8 = (long ***)pppplVar2;
    ppplStack_1a0 = (long ***)pppplVar5;
    if (*plVar16 == 0) {
      ppplStack_128 = (long ***)0x0;
      ppplStack_120 = (long ***)0x0;
      FUN_10ab46914(lStack_180 + 0x228,&ppplStack_128);
      if ((long ****)ppplStack_120 != (long ****)0x0) {
        pppplVar10 = (long ****)(ppplStack_120 + 1);
        do {
          ppplVar14 = *pppplVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
          if (bVar4) {
            *pppplVar10 = (long ***)((long)ppplVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_10ab45b0c;
      }
    }
    else if (iVar11 == 0) {
      FUN_10a332b78(&ppplStack_128);
      FUN_10ab46914(lStack_180 + 0x228,&ppplStack_128);
      func_0x00010a39bd3c(&ppplStack_1b0,&ppplStack_118);
      FUN_10a044790(&ppplStack_118);
      (*(code *)*ppplStack_110)(&ppplStack_110);
      if ((long ****)ppplStack_120 != (long ****)0x0) {
        pppplVar10 = (long ****)(ppplStack_120 + 1);
        do {
          ppplVar14 = *pppplVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
          if (bVar4) {
            *pppplVar10 = (long ***)((long)ppplVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_10ab45b0c;
      }
    }
    else {
      FUN_10a334dec(&ppplStack_128);
      FUN_10ab46914(lStack_180 + 0x228,&ppplStack_128);
      func_0x00010a39bd3c(&ppplStack_1b0,&ppplStack_118);
      FUN_10a044790(&ppplStack_118);
      (*(code *)*ppplStack_110)(&ppplStack_110);
      if ((long ****)ppplStack_120 != (long ****)0x0) {
        pppplVar10 = (long ****)(ppplStack_120 + 1);
        do {
          ppplVar14 = *pppplVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppplVar10,0x10);
          if (bVar4) {
            *pppplVar10 = (long ***)((long)ppplVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_10ab45b0c:
        ppplVar6 = ppplStack_120;
        if (ppplVar14 == (long ***)0x0) {
          (*(code *)(*ppplStack_120)[2])(ppplStack_120);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar6);
        }
      }
    }
    pppplVar10 = (long ****)ppplStack_1b0;
    pppplVar2 = (long ****)ppplStack_1a8;
    pppplVar5 = (long ****)ppplStack_1a0;
  }
  ppplStack_1b0 = (long ***)0x0;
  ppplStack_1a8 = (long ***)0x0;
  ppplStack_1a0 = (long ***)0x0;
  ppplStack_128 = (long ***)0x10ab61768;
  ppplStack_120 = (long ***)&PTR_FUN_110c4b3a0;
  ppplStack_170 = (long ***)&ppplStack_118;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  plStack_1c8 = (long *)0x0;
  ppuStack_160 = &PTR_FUN_110c4b3a0;
  ppplStack_110 = (long ***)0x0;
  ppplStack_108 = (long ***)0x0;
  ppplStack_118 = (long ***)0x0;
  FUN_10a3a7a08(&ppplStack_170);
  ppplStack_128 = (long ***)&plStack_1c8;
  FUN_10a3a7a08(&ppplStack_128);
  extraout_x8[1] = (long)plStack_178;
  *extraout_x8 = lStack_180;
  if (plStack_178 != (long *)0x0) {
    plVar16 = plStack_178 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = *plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  extraout_x8[2] = 0x10ab61768;
  extraout_x8[3] = (long)&PTR_FUN_110c4b3a0;
  extraout_x8[5] = (long)pppplVar2;
  extraout_x8[4] = (long)pppplVar10;
  extraout_x8[6] = (long)pppplVar5;
  uStack_150 = 0;
  uStack_148 = 0;
  plStack_158 = (long *)0x0;
  puStack_168 = &UNK_1053a6a3c;
  ppplStack_128 = (long ***)&plStack_158;
  FUN_10a3a7a08(&ppplStack_128);
  ppuStack_160 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_168);
  (*(code *)*ppuStack_160)(&ppuStack_160);
  ppplStack_128 = (long ***)&ppplStack_1b0;
  FUN_10a3a7a08(&ppplStack_128);
  if (plStack_178 != (long *)0x0) {
    plVar16 = plStack_178 + 1;
    do {
      lVar15 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_178 + 0x10))(plStack_178);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_178);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
LAB_10ab45c94:
  FUN_10a3a8540();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab45c9c);
  (*pcVar7)();
}



/* Entry: 10ab45900; end: 10ab45d0b;  */

void FUN_10ab45900(long *param_1,long param_2,int param_3)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  code *pcVar6;
  long ****pppplVar7;
  ulong uVar8;
  long ***ppplVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  long lStack_100;
  long *plStack_f8;
  long ***ppplStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a38fbbc(&lStack_100,*(undefined8 *)(param_2 + 0x50));
  lVar10 = lStack_100;
  if (lStack_100 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_118,&UNK_10f6927c9,param_2 + 0x58);
    if (*(char *)(lVar10 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar10 + 0x58));
    }
    *(undefined8 *)(lVar10 + 0x60) = uStack_110;
    *(ulong *)(lVar10 + 0x58) = CONCAT71(uStack_117,uStack_118);
    *(ulong *)(lVar10 + 0x68) = CONCAT17(uStack_101,uStack_108);
    uStack_101 = 0;
    uStack_118 = 0;
  }
  ppplStack_130 = (long ***)0x0;
  ppplStack_128 = (long ***)0x0;
  ppplStack_120 = (long ***)0x0;
  plVar12 = *(long **)(param_2 + 0x230);
  plVar11 = *(long **)(param_2 + 0x228);
  pppplVar7 = (long ****)ppplStack_130;
  pppplVar1 = (long ****)ppplStack_128;
  pppplVar4 = (long ****)ppplStack_120;
  if ((long)plVar12 - (long)plVar11 != 0) {
    uVar8 = (long)plVar12 - (long)plVar11 >> 4;
    if (uVar8 >> 0x3a != 0) goto LAB_10ab45c94;
    ppplStack_88 = (long ***)&ppplStack_130;
    pppplVar7 = &ppplStack_130;
    FUN_10a3a8554();
    pppplVar1 = (long ****)((long)pppplVar7 + ((long)ppplStack_130 - (long)ppplStack_128));
    ppplStack_a8 = (long ***)pppplVar7;
    ppplStack_a0 = (long ***)pppplVar7;
    ppplStack_98 = (long ***)pppplVar7;
    ppplStack_90 = (long ***)(pppplVar7 + uVar8 * 8);
    FUN_10a3a8588(&ppplStack_130,ppplStack_130,ppplStack_128,pppplVar1);
    ppplStack_98 = ppplStack_130;
    ppplStack_90 = ppplStack_120;
    ppplStack_a8 = ppplStack_130;
    ppplStack_a0 = ppplStack_130;
    ppplStack_130 = (long ***)pppplVar1;
    ppplStack_128 = (long ***)pppplVar7;
    ppplStack_120 = (long ***)(pppplVar7 + uVar8 * 8);
    func_0x00010a3a8704(&ppplStack_a8);
    plVar11 = *(long **)(param_2 + 0x228);
    plVar12 = *(long **)(param_2 + 0x230);
    pppplVar7 = (long ****)ppplStack_130;
    pppplVar1 = (long ****)ppplStack_128;
    pppplVar4 = (long ****)ppplStack_120;
  }
  for (; plVar11 != plVar12; plVar11 = plVar11 + 2) {
    ppplStack_130 = (long ***)pppplVar7;
    ppplStack_128 = (long ***)pppplVar1;
    ppplStack_120 = (long ***)pppplVar4;
    if (*plVar11 == 0) {
      ppplStack_a8 = (long ***)0x0;
      ppplStack_a0 = (long ***)0x0;
      FUN_10ab46914(lStack_100 + 0x228,&ppplStack_a8);
      if ((long ****)ppplStack_a0 != (long ****)0x0) {
        pppplVar7 = (long ****)(ppplStack_a0 + 1);
        do {
          ppplVar9 = *pppplVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
          if (bVar3) {
            *pppplVar7 = (long ***)((long)ppplVar9 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_10ab45b0c;
      }
    }
    else if (param_3 == 0) {
      FUN_10a332b78(&ppplStack_a8);
      FUN_10ab46914(lStack_100 + 0x228,&ppplStack_a8);
      func_0x00010a39bd3c(&ppplStack_130,&ppplStack_98);
      FUN_10a044790(&ppplStack_98);
      (*(code *)*ppplStack_90)(&ppplStack_90);
      if ((long ****)ppplStack_a0 != (long ****)0x0) {
        pppplVar7 = (long ****)(ppplStack_a0 + 1);
        do {
          ppplVar9 = *pppplVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
          if (bVar3) {
            *pppplVar7 = (long ***)((long)ppplVar9 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_10ab45b0c;
      }
    }
    else {
      FUN_10a334dec(&ppplStack_a8);
      FUN_10ab46914(lStack_100 + 0x228,&ppplStack_a8);
      func_0x00010a39bd3c(&ppplStack_130,&ppplStack_98);
      FUN_10a044790(&ppplStack_98);
      (*(code *)*ppplStack_90)(&ppplStack_90);
      if ((long ****)ppplStack_a0 != (long ****)0x0) {
        pppplVar7 = (long ****)(ppplStack_a0 + 1);
        do {
          ppplVar9 = *pppplVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppplVar7,0x10);
          if (bVar3) {
            *pppplVar7 = (long ***)((long)ppplVar9 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_10ab45b0c:
        ppplVar5 = ppplStack_a0;
        if (ppplVar9 == (long ***)0x0) {
          (*(code *)(*ppplStack_a0)[2])(ppplStack_a0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar5);
        }
      }
    }
    pppplVar7 = (long ****)ppplStack_130;
    pppplVar1 = (long ****)ppplStack_128;
    pppplVar4 = (long ****)ppplStack_120;
  }
  ppplStack_130 = (long ***)0x0;
  ppplStack_128 = (long ***)0x0;
  ppplStack_120 = (long ***)0x0;
  ppplStack_a8 = (long ***)0x10ab61768;
  ppplStack_a0 = (long ***)&PTR_FUN_110c4b3a0;
  ppplStack_f0 = (long ***)&ppplStack_98;
  uStack_140 = 0;
  uStack_138 = 0;
  plStack_148 = (long *)0x0;
  ppuStack_e0 = &PTR_FUN_110c4b3a0;
  ppplStack_90 = (long ***)0x0;
  ppplStack_88 = (long ***)0x0;
  ppplStack_98 = (long ***)0x0;
  FUN_10a3a7a08(&ppplStack_f0);
  ppplStack_a8 = (long ***)&plStack_148;
  FUN_10a3a7a08(&ppplStack_a8);
  param_1[1] = (long)plStack_f8;
  *param_1 = lStack_100;
  if (plStack_f8 != (long *)0x0) {
    plVar11 = plStack_f8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = 0x10ab61768;
  param_1[3] = (long)&PTR_FUN_110c4b3a0;
  param_1[5] = (long)pppplVar1;
  param_1[4] = (long)pppplVar7;
  param_1[6] = (long)pppplVar4;
  uStack_d0 = 0;
  uStack_c8 = 0;
  plStack_d8 = (long *)0x0;
  puStack_e8 = &UNK_1053a6a3c;
  ppplStack_a8 = (long ***)&plStack_d8;
  FUN_10a3a7a08(&ppplStack_a8);
  ppuStack_e0 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_e8);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  ppplStack_a8 = (long ***)&ppplStack_130;
  FUN_10a3a7a08(&ppplStack_a8);
  if (plStack_f8 != (long *)0x0) {
    plVar11 = plStack_f8 + 1;
    do {
      lVar10 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10ab45c94:
  FUN_10a3a8540();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab45c9c);
  (*pcVar6)();
}



/* Entry: 10ab45d0c; end: 10ab45dcb;  */

void FUN_10ab45d0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 **ppuVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **unaff_x22;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined8 auStack_140 [2];
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  long lStack_d8;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar10 = (undefined ***)0x1;
  FUN_10ab45900(&uStack_80);
  param_1[1] = ppuStack_78;
  *param_1 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a044790(auStack_70);
  ppuVar6 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  ppuVar7 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar11 = *ppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = (undefined8 *)((long)puVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar11 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = pppuVar10[1];
  if (-1 < (char)*(byte *)((long)pppuVar10 + 0x17)) {
    ppuVar12 = (undefined **)(ulong)*(byte *)((long)pppuVar10 + 0x17);
  }
  if (ppuVar12 == (undefined **)0x0) {
    pppuVar9 = (undefined ***)&UNK_10f6927d3;
    FUN_10a00946c();
  }
  else {
    puVar11 = ppuVar6[10];
    pppuVar8 = (undefined ***)0x300;
    __Znwm();
    pppuVar8[1] = (undefined **)0x0;
    pppuVar8[2] = (undefined **)0x0;
    *pppuVar8 = &PTR_FUN_110baa060;
    pppuVar9 = pppuVar8 + 3;
    FUN_10a330b88(pppuVar9,puVar11,pppuVar10,param_4);
    pppuStack_150 = pppuVar9;
    pppuStack_148 = pppuVar8;
    FUN_10a190d60(&pppuStack_150,pppuVar8 + 9,pppuVar9);
    pppuVar9 = pppuStack_150;
    ppuStack_118 = pppuStack_150[7];
    ppuStack_120 = pppuStack_150[6];
    if (pppuStack_150[7] != (undefined **)0x0) {
      ppuVar12 = pppuStack_150[7] + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar4) {
          *ppuVar12 = *ppuVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x22 = &puStack_130;
    puStack_130 = (undefined *)0x10a3635a8;
    ppuStack_128 = &PTR_FUN_110bc68e8;
    if (*(char *)((long)pppuVar10 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_170,*pppuVar10,pppuVar10[1]);
    }
    else {
      ppuStack_168 = pppuVar10[1];
      ppuStack_170 = *pppuVar10;
      ppuStack_160 = pppuVar10[2];
    }
    if (*(char *)((long)pppuVar9 + 0x1b7) < '\0') {
      __ZdlPv(pppuVar9[0x34]);
    }
    pppuVar9[0x35] = ppuStack_168;
    pppuVar9[0x34] = ppuStack_170;
    pppuVar9[0x36] = ppuStack_160;
    ppuStack_160 = (undefined **)((ulong)ppuStack_160 & 0xffffffffffffff);
    ppuStack_170 = (undefined **)((ulong)ppuStack_170 & 0xffffffffffffff00);
    iVar5 = (int)auStack_140;
    func_0x00010a1bd170();
    if (iVar5 == 0) {
      pppuStack_e8 = pppuStack_148;
      pppuStack_f0 = pppuStack_150;
      if (pppuStack_148 != (undefined ***)0x0) {
        pppuVar10 = pppuStack_148 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
          if (bVar4) {
            *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10ab46a5c(auStack_140,ppuVar6 + 0x45,&pppuStack_f0,1,0,0);
      FUN_10a90f550(auStack_140[0],&pppuStack_150);
      FUN_10ab61860(auStack_140);
      pppuVar10 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar9 = pppuStack_e8 + 1;
        do {
          ppuVar12 = *pppuVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
          if (bVar4) {
            *pppuVar9 = (undefined **)((long)ppuVar12 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar12 == (undefined **)0x0) {
          (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
        }
      }
    }
    else {
      FUN_10a90f550(ppuVar6 + 0x45,&pppuStack_150);
    }
    *extraout_x8 = pppuStack_150;
    extraout_x8[1] = puStack_130;
    pppuVar10 = &ppuStack_128;
    (*(code *)ppuStack_128[2])(extraout_x8 + 2);
    puStack_130 = &UNK_1053a6a3c;
    (*(code *)*ppuStack_128)(&ppuStack_128);
    ppuStack_128 = &PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_130);
    pppuVar9 = &ppuStack_128;
    (*(code *)*ppuStack_128)();
    pppuVar8 = pppuStack_148;
    if (pppuStack_148 != (undefined ***)0x0) {
      pppuVar2 = pppuStack_148 + 1;
      do {
        ppuVar12 = *pppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar4) {
          *pppuVar2 = (undefined **)((long)ppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar12 == (undefined **)0x0) {
        (*(code *)(*pppuStack_148)[2])(pppuStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar9 = pppuVar8;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return;
    }
  }
  ___stack_chk_fail();
  FUN_10ab61860(auStack_140);
  func_0x00010a190e10(&pppuStack_f0);
  FUN_10a044790(&puStack_130);
  (*(code *)*ppuStack_128)(unaff_x22 + 1);
  func_0x00010a190e10(&pppuStack_150);
  __Unwind_Resume();
  func_0x00010aa70b70();
  (*(code *)(*pppuVar10)[3])(pppuVar10,&PTR_DAT_110c49f68);
  ppuVar12 = pppuVar9[0x46];
  for (ppuVar13 = pppuVar9[0x45]; ppuVar13 != ppuVar12; ppuVar13 = ppuVar13 + 2) {
    (*(code *)(*pppuVar10)[0x25])(pppuVar10,*ppuVar13,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab46154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*pppuVar10)[4])(pppuVar10);
  return;
}



/* Entry: 10ab45dcc; end: 10ab460db;  */

void FUN_10ab45dcc(undefined8 *param_1,long param_2,undefined ***param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **unaff_x22;
  undefined8 uVar9;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined8 auStack_c0 [2];
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined ***pppuStack_70;
  undefined ***pppuStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    ppuVar7 = (undefined **)(ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (ppuVar7 == (undefined **)0x0) {
    pppuVar6 = (undefined ***)&UNK_10f6927d3;
    FUN_10a00946c();
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x50);
    pppuVar5 = (undefined ***)0x300;
    __Znwm();
    pppuVar5[1] = (undefined **)0x0;
    pppuVar5[2] = (undefined **)0x0;
    *pppuVar5 = &PTR_FUN_110baa060;
    pppuVar6 = pppuVar5 + 3;
    FUN_10a330b88(pppuVar6,uVar9,param_3,param_4);
    pppuStack_d0 = pppuVar6;
    pppuStack_c8 = pppuVar5;
    FUN_10a190d60(&pppuStack_d0,pppuVar5 + 9,pppuVar6);
    pppuVar6 = pppuStack_d0;
    ppuStack_98 = pppuStack_d0[7];
    ppuStack_a0 = pppuStack_d0[6];
    if (pppuStack_d0[7] != (undefined **)0x0) {
      ppuVar7 = pppuStack_d0[7] + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
        if (bVar3) {
          *ppuVar7 = *ppuVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x22 = &puStack_b0;
    puStack_b0 = (undefined *)0x10a3635a8;
    ppuStack_a8 = &PTR_FUN_110bc68e8;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(&ppuStack_f0,*param_3,param_3[1]);
    }
    else {
      ppuStack_e8 = param_3[1];
      ppuStack_f0 = *param_3;
      ppuStack_e0 = param_3[2];
    }
    if (*(char *)((long)pppuVar6 + 0x1b7) < '\0') {
      __ZdlPv(pppuVar6[0x34]);
    }
    pppuVar6[0x35] = ppuStack_e8;
    pppuVar6[0x34] = ppuStack_f0;
    pppuVar6[0x36] = ppuStack_e0;
    ppuStack_e0 = (undefined **)((ulong)ppuStack_e0 & 0xffffffffffffff);
    ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
    iVar4 = (int)auStack_c0;
    func_0x00010a1bd170();
    if (iVar4 == 0) {
      pppuStack_68 = pppuStack_c8;
      pppuStack_70 = pppuStack_d0;
      if (pppuStack_c8 != (undefined ***)0x0) {
        pppuVar6 = pppuStack_c8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar3) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10ab46a5c(auStack_c0,param_2 + 0x228,&pppuStack_70,1,0,0);
      FUN_10a90f550(auStack_c0[0],&pppuStack_d0);
      FUN_10ab61860(auStack_c0);
      pppuVar6 = pppuStack_68;
      if (pppuStack_68 != (undefined ***)0x0) {
        pppuVar5 = pppuStack_68 + 1;
        do {
          ppuVar7 = *pppuVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
          if (bVar3) {
            *pppuVar5 = (undefined **)((long)ppuVar7 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar7 == (undefined **)0x0) {
          (*(code *)(*pppuStack_68)[2])(pppuStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
        }
      }
    }
    else {
      FUN_10a90f550(param_2 + 0x228,&pppuStack_d0);
    }
    *param_1 = pppuStack_d0;
    param_1[1] = puStack_b0;
    param_3 = &ppuStack_a8;
    (*(code *)ppuStack_a8[2])(param_1 + 2);
    puStack_b0 = &UNK_1053a6a3c;
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    ppuStack_a8 = &PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_b0);
    pppuVar6 = &ppuStack_a8;
    (*(code *)*ppuStack_a8)();
    pppuVar5 = pppuStack_c8;
    if (pppuStack_c8 != (undefined ***)0x0) {
      pppuVar1 = pppuStack_c8 + 1;
      do {
        ppuVar7 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppuVar7 == (undefined **)0x0) {
        (*(code *)(*pppuStack_c8)[2])(pppuStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar6 = pppuVar5;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  FUN_10ab61860(auStack_c0);
  func_0x00010a190e10(&pppuStack_70);
  FUN_10a044790(&puStack_b0);
  (*(code *)*ppuStack_a8)(unaff_x22 + 1);
  func_0x00010a190e10(&pppuStack_d0);
  __Unwind_Resume();
  func_0x00010aa70b70();
  (*(code *)(*param_3)[3])(param_3,&PTR_DAT_110c49f68);
  ppuVar7 = pppuVar6[0x46];
  for (ppuVar8 = pppuVar6[0x45]; ppuVar8 != ppuVar7; ppuVar8 = ppuVar8 + 2) {
    (*(code *)(*param_3)[0x25])(param_3,*ppuVar8,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab46154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*param_3)[4])(param_3);
  return;
}



/* Entry: 10ab460dc; end: 10ab46157;  */

void FUN_10ab460dc(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c49f68);
  puVar1 = *(undefined8 **)(param_1 + 0x230);
  for (puVar2 = *(undefined8 **)(param_1 + 0x228); puVar2 != puVar1; puVar2 = puVar2 + 2) {
    (**(code **)(*param_2 + 0x128))(param_2,*puVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010ab46154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ab46158; end: 10ab4665f;  */

void FUN_10ab46158(long *param_1,long *param_2)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  undefined **ppuVar14;
  long lVar15;
  long *plVar16;
  undefined **ppuVar17;
  long *plStack_f0;
  long *plStack_e8;
  undefined **appuStack_e0 [2];
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_1;
  func_0x00010aa70acc();
  plVar13 = (long *)param_1[0x45];
  plVar11 = (long *)param_1[0x46];
  if (plVar13 != plVar11) {
    do {
      if (*plVar13 != 0) {
        plVar10 = (long *)(*plVar13 + 0xd0);
        func_0x00010a1bf190(plVar10,(long)param_1 + (0x308 - (ulong)uRam00000001133006e0));
      }
      plVar13 = plVar13 + 2;
    } while (plVar13 != plVar11);
    plVar11 = (long *)param_1[0x46];
    plVar13 = (long *)param_1[0x45];
  }
  plVar4 = param_1 + 0x45;
  while (plVar11 != plVar13) {
    plVar11 = plVar11 + -2;
    plVar10 = plVar11;
    func_0x00010a190e10();
  }
  param_1[0x46] = (long)plVar13;
  uVar3 = uRam00000001133006e0;
  uVar1 = *(ushort *)((long)plVar4 + (0x1c9 - (ulong)uRam00000001133006e0));
  if ((uVar1 >> 8 & 1) == 0) {
    if ((((*(long *)((long)plVar4 + (0x1a0 - (ulong)uRam00000001133006e0)) != 0) ||
         ((uVar1 >> 9 & 1) != 0)) ||
        (*(long *)((long)plVar4 + (0x1c0 - (ulong)uRam00000001133006e0)) != 0)) ||
       ((*(ushort *)((long)plVar4 + (0x110 - (ulong)uRam00000001133006e0)) >> 8 & 1) == 0)) {
LAB_10ab46240:
      uVar8 = 0;
      func_0x00010a1bd170();
      if ((uVar8 & 1) == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_b8 = 0;
        lStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        ppuStack_c8 = (undefined **)0x0;
        uStack_d0 = 0;
        appuStack_e0[0] = &PTR_DAT_110bd9ed0;
        uVar8 = (ulong)&uStack_d0 | 8;
        FUN_10a0dad0c(uVar8,appuStack_e0);
        uVar3 = uRam00000001133006e0;
        uVar1 = *(ushort *)((long)plVar4 + (0x110 - (ulong)uRam00000001133006e0));
        if (((uVar1 & 0x7f) == 0) &&
           ((*(ushort *)((long)plVar4 + (0x1c9 - (ulong)uRam00000001133006e0)) & 0x7f) == 0)) {
          if ((uVar1 >> 8 & 1) == 0) {
            uVar8 = (long)plVar4 + (0xe0 - (ulong)uRam00000001133006e0);
            FUN_10a1bfe94(uVar8,&uStack_d0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar8 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar1 >> 7 & 1) == 0) {
            *(undefined8 *)((long)plVar4 + (0x120 - (ulong)uRam00000001133006e0)) = uStack_d0;
            *(ushort *)((long)plVar4 + (0x110 - (ulong)uVar3)) = uVar1 | 0x80;
          }
          uVar8 = (long)plVar4 + (0x120 - (ulong)uVar3);
          FUN_10a1bd398(uVar8,&uStack_d0);
        }
        uVar9 = (ulong)uRam00000001133006e0;
        if ((*(ushort *)((long)plVar4 + (0x1c9 - uVar9)) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          uVar9 = (ulong)uRam00000001133006e0;
          if (uVar8 != 0) {
            FUN_10a1bd648();
            uVar9 = (ulong)uRam00000001133006e0;
          }
        }
        FUN_10a1c054c((long)plVar4 + (0x170 - uVar9),&uStack_d0);
      }
      goto LAB_10ab4636c;
    }
    *(long *)((long)plVar4 + (0x180 - (ulong)uRam00000001133006e0)) =
         *(long *)((long)plVar4 + (0x180 - (ulong)uRam00000001133006e0)) + 1;
  }
  else if ((*(ushort *)((long)plVar4 + (0x110 - (ulong)uRam00000001133006e0)) >> 8 & 1) == 0)
  goto LAB_10ab46240;
  ppuVar17 = *(undefined ***)((long)plVar4 + (0x1d0 - (ulong)uVar3));
  ppuVar14 = *(undefined ***)((long)plVar4 + (0x118 - (ulong)uVar3));
  if ((ppuVar17 != &PTR_DAT_110bd9ed0 || ppuVar14 != &PTR_DAT_110bd9ed0) &&
     (FUN_10a1bd5e0(), plVar10 != (long *)0x0)) {
    if (ppuVar17 != &PTR_DAT_110bd9ed0) {
      FUN_10a1bd648(plVar10,(long)plVar4 + (0x170 - (ulong)uVar3),&PTR_DAT_110bd9ed0);
      *(undefined ***)((long)plVar4 + (0x1d0 - (ulong)uVar3)) = &PTR_DAT_110bd9ed0;
    }
    if (ppuVar14 != &PTR_DAT_110bd9ed0) {
      FUN_10a1bd7d8(plVar10,(long)plVar4 + (0xe0 - (ulong)uVar3),&PTR_DAT_110bd9ed0);
      *(undefined ***)((long)plVar4 + (0x118 - (ulong)uVar3)) = &PTR_DAT_110bd9ed0;
    }
  }
LAB_10ab4636c:
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c49f68);
  if ((int)plVar10 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c49f68);
    plVar10 = param_2;
    (**(code **)(*param_2 + 0x208))();
    if ((int)plVar10 != 0) {
      iVar12 = 0;
      do {
        lVar15 = param_1[10];
        plVar11 = (long *)0x300;
        __Znwm();
        plVar11[1] = 0;
        plVar11[2] = 0;
        plVar13 = plVar11 + 3;
        *plVar11 = (long)&PTR_FUN_110baa060;
        FUN_10a331aec(plVar13,lVar15);
        plStack_f0 = plVar13;
        plStack_e8 = plVar11;
        func_0x00010a190d60(&plStack_f0,plVar11 + 9,plVar13);
        lStack_b8 = plStack_f0[7];
        lStack_c0 = plStack_f0[6];
        if (plStack_f0[7] != 0) {
          plVar13 = (long *)(plStack_f0[7] + 0x10);
          do {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar6) {
              *plVar13 = *plVar13 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_d0 = 0x10a3635a8;
        ppuStack_c8 = &PTR_FUN_110bc68e8;
        iVar7 = (int)appuStack_e0;
        func_0x00010a1bd170();
        if (iVar7 == 0) {
          plStack_78 = plStack_e8;
          plStack_80 = plStack_f0;
          if (plStack_e8 != (long *)0x0) {
            plVar13 = plStack_e8 + 1;
            do {
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *plVar13 = *plVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_10ab46a5c(appuStack_e0,plVar4,&plStack_80,1,0,0);
          FUN_10ab61a5c(appuStack_e0[0],&plStack_f0);
          FUN_10ab61860(appuStack_e0);
          plVar13 = plStack_78;
          if (plStack_78 != (long *)0x0) {
            plVar11 = plStack_78 + 1;
            do {
              lVar15 = *plVar11;
              cVar2 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar6) {
                *plVar11 = lVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_78 + 0x10))(plStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
            }
          }
        }
        else {
          FUN_10ab61a5c(plVar4,&plStack_f0);
        }
        if (param_1[0x45] == param_1[0x46]) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab465f0);
          (*pcVar5)();
        }
        (**(code **)(*param_2 + 0x1e8))(param_2,iVar12,*(undefined8 *)(param_1[0x46] + -0x10));
        FUN_10a044790(&uStack_d0);
        (*(code *)*ppuStack_c8)(&ppuStack_c8);
        plVar13 = plStack_e8;
        if (plStack_e8 != (long *)0x0) {
          plVar11 = plStack_e8 + 1;
          do {
            lVar15 = *plVar11;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar6) {
              *plVar11 = lVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != (int)plVar10);
    }
    (**(code **)(*param_2 + 0x220))();
    plVar10 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  FUN_10ab61860(appuStack_e0);
  func_0x00010a190e10(&plStack_80);
  FUN_10a044790(&uStack_d0);
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  func_0x00010a190e10(&plStack_f0);
  __Unwind_Resume();
  plVar13 = (long *)plVar10[0x46];
  for (plVar10 = (long *)plVar10[0x45]; plVar10 != plVar13; plVar10 = plVar10 + 2) {
    lVar15 = *plVar10;
    if (lVar15 != 0) {
      plVar11 = *(long **)(lVar15 + 0x290);
      while (plVar11 != (long *)(lVar15 + 0x298)) {
        FUN_10a5ae998(*(undefined8 *)(plVar11[8] + 0x100),&PTR_DAT_110bc8358,
                      *(undefined8 *)(lVar15 + 0x198));
        plVar4 = (long *)plVar11[1];
        plVar16 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar16[2];
            bVar6 = (long *)*plVar11 != plVar16;
            plVar16 = plVar11;
          } while (bVar6);
        }
        else {
          do {
            plVar11 = plVar4;
            plVar4 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
      plVar11 = *(long **)(lVar15 + 0x2a8);
      while (plVar11 != (long *)(lVar15 + 0x2b0)) {
        FUN_10a5ae998(*(undefined8 *)(plVar11[8] + 0x100),&PTR_DAT_110bc5cf0,
                      *(undefined8 *)(lVar15 + 0x198));
        plVar4 = (long *)plVar11[1];
        plVar16 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar16[2];
            bVar6 = (long *)*plVar11 != plVar16;
            plVar16 = plVar11;
          } while (bVar6);
        }
        else {
          do {
            plVar11 = plVar4;
            plVar4 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
      FUN_10a3350bc(*plVar10);
    }
  }
  return;
}



/* Entry: 10ab46660; end: 10ab46783;  */

void FUN_10ab46660(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = *(long **)(param_1 + 0x230);
  for (plVar3 = *(long **)(param_1 + 0x228); plVar3 != plVar4; plVar3 = plVar3 + 2) {
    lVar5 = *plVar3;
    if (lVar5 != 0) {
      plVar6 = *(long **)(lVar5 + 0x290);
      while (plVar6 != (long *)(lVar5 + 0x298)) {
        FUN_10a5ae998(*(undefined8 *)(plVar6[8] + 0x100),&PTR_DAT_110bc8358,
                      *(undefined8 *)(lVar5 + 0x198));
        plVar1 = (long *)plVar6[1];
        plVar7 = plVar6;
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar2 = (long *)*plVar6 != plVar7;
            plVar7 = plVar6;
          } while (bVar2);
        }
        else {
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
      plVar6 = *(long **)(lVar5 + 0x2a8);
      while (plVar6 != (long *)(lVar5 + 0x2b0)) {
        FUN_10a5ae998(*(undefined8 *)(plVar6[8] + 0x100),&PTR_DAT_110bc5cf0,
                      *(undefined8 *)(lVar5 + 0x198));
        plVar1 = (long *)plVar6[1];
        plVar7 = plVar6;
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar2 = (long *)*plVar6 != plVar7;
            plVar7 = plVar6;
          } while (bVar2);
        }
        else {
          do {
            plVar6 = plVar1;
            plVar1 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      }
      FUN_10a3350bc(*plVar3);
    }
  }
  return;
}



/* Entry: 10ab46784; end: 10ab4690b;  */

void FUN_10ab46784(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10aa88ae4(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0xf,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  *puVar1 = 0x736573736170202c;
  *(undefined8 *)((long)puVar1 + 7) = 0x203a746e756f4373;
  *(undefined1 *)((long)puVar1 + 0xf) = 0;
  __ZNSt3__19to_stringEm(&ppuStack_88,*(long *)(param_2 + 0x230) - *(long *)(param_2 + 0x228) >> 4);
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10ab4690c; end: 10ab46913;  */

void FUN_10ab4690c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **appuStack_70 [2];
  char cStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10aa88ae4(&ppuStack_58);
  uVar2 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar2 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_70,uVar2 + 0xf,&ppuStack_88);
  pppuVar3 = (undefined8 ***)appuStack_70[0];
  if (-1 < cStack_59) {
    pppuVar3 = appuStack_70;
  }
  if (uVar2 != 0) {
    pppuVar4 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar4 = &ppuStack_58;
    }
    _memmove(pppuVar3,pppuVar4,uVar2);
  }
  puVar1 = (undefined8 *)((long)pppuVar3 + uVar2);
  *puVar1 = 0x736573736170202c;
  *(undefined8 *)((long)puVar1 + 7) = 0x203a746e756f4373;
  *(undefined1 *)((long)puVar1 + 0xf) = 0;
  __ZNSt3__19to_stringEm(&ppuStack_88,*(long *)(param_2 + 0x220) - *(long *)(param_2 + 0x218) >> 4);
  pppuVar3 = (undefined8 ***)ppuStack_88;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    pppuVar3 = &ppuStack_88;
  }
  pppuVar4 = appuStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,pppuVar3,uStack_80);
  ppuVar5 = *pppuVar4;
  param_1[1] = pppuVar4[1];
  *param_1 = ppuVar5;
  param_1[2] = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if ((char)bStack_71 < '\0') {
    __ZdlPv(ppuStack_88);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(appuStack_70[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10ab46914; end: 10ab46a5b;  */

void FUN_10ab46914(long *param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  code **ppcVar7;
  code **ppcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *extraout_x8;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_98 [8];
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  long lStack_40;
  long *plStack_38;
  
  ppcVar7 = &pcStack_50;
  ppcVar8 = &pcStack_50;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = param_2;
  func_0x00010a1bd170();
  if ((int)ppcVar7 == 0) {
    plStack_38 = (long *)param_2[1];
    lStack_40 = *param_2;
    if (param_2[1] != 0) {
      plVar9 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_3 = 1;
    param_4 = (long *)0x0;
    param_5 = 0;
    FUN_10ab46a5c(&pcStack_50,param_1,&lStack_40);
    FUN_10a90f550(pcStack_50);
    FUN_10ab61860();
    plVar9 = plStack_38;
    ppcVar7 = ppcVar8;
    if (plStack_38 != (long *)0x0) {
      plVar10 = plStack_38 + 1;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppcVar7 = (code **)plVar9;
      }
    }
    plVar9 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    plVar9 = (long *)param_1[1];
    if (plVar9 < (long *)param_1[2]) {
      lVar12 = param_2[1];
      lVar11 = *param_2;
      plVar9[1] = param_2[1];
      *plVar9 = lVar11;
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = plVar9 + 2;
    }
    else {
      lVar12 = (long)plVar9 - *param_1;
      uVar1 = (lVar12 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_10a4afcc4();
        lVar12 = *param_1;
        if (lVar12 == 0) {
          return;
        }
        lVar6 = param_1[1];
        lVar11 = lVar12;
        if (lVar6 != lVar12) {
          do {
            lVar6 = lVar6 + -0x90;
            FUN_10a8fdc18();
          } while (lVar6 != lVar12);
          lVar11 = *param_1;
        }
        param_1[1] = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar11);
        return;
      }
      uVar13 = param_1[2] - *param_1;
      uVar14 = (long)uVar13 >> 3;
      if (uVar14 <= uVar1) {
        uVar14 = uVar1;
      }
      if (0x7fffffffffffffef < uVar13) {
        uVar14 = 0xfffffffffffffff;
      }
      plVar5 = param_1;
      plStack_38 = param_1;
      FUN_10a4afcd8();
      plVar10 = (long *)((long)plVar5 + lVar12);
      lVar12 = param_2[1];
      lVar11 = *param_2;
      plVar10[1] = param_2[1];
      *plVar10 = lVar11;
      if (lVar12 != 0) {
        plVar9 = (long *)(lVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = plVar10 + 2;
      lVar12 = (long)plVar10 - (param_1[1] - *param_1);
      _memcpy(lVar12);
      pcStack_58 = (code *)*param_1;
      *param_1 = lVar12;
      param_1[1] = (long)plVar9;
      lStack_40 = param_1[2];
      param_1[2] = (long)(plVar5 + uVar14 * 2);
      pcStack_50 = pcStack_58;
      pcStack_48 = pcStack_58;
      func_0x00010a4afd0c(&pcStack_58);
    }
    param_1[1] = (long)plVar9;
    return;
  }
  ___stack_chk_fail();
  FUN_10ab61860(&pcStack_50);
  func_0x00010a190e10(&lStack_40);
  __Unwind_Resume();
  pcStack_58 = FUN_10ab46a5c;
  iVar4 = (int)auStack_98;
  func_0x00010a1bd170();
  if (iVar4 == 0) {
    *extraout_x8 = (long)ppcVar7;
    *(undefined1 *)(extraout_x8 + 1) = 0;
    iVar4 = (int)auStack_98;
    func_0x00010a1bd170();
    plVar10 = (long *)0x0;
    if (iVar4 == 0) {
      plVar10 = plVar9;
    }
    lVar12 = 0;
    if (iVar4 == 0) {
      lVar12 = param_3;
    }
  }
  else {
    *extraout_x8 = (long)ppcVar7;
    *(undefined1 *)(extraout_x8 + 1) = 0;
    func_0x00010a1bd170(auStack_98);
    plVar10 = (long *)0x0;
    lVar12 = 0;
  }
  lVar11 = *extraout_x8 - (ulong)uRam00000001133006e0;
  if (param_5 != 0) {
    lVar6 = 0;
    if (*extraout_x8 != 0) {
      lVar6 = lVar11 + 0xe0;
    }
    param_5 = param_5 << 4;
    do {
      if (*param_4 != 0) {
        func_0x00010a1bf190(*param_4 + 0xd0,lVar6);
      }
      param_4 = param_4 + 2;
      param_5 = param_5 + -0x10;
    } while (param_5 != 0);
  }
  if (lVar12 != 0) {
    lVar12 = lVar12 << 4;
    do {
      if (*plVar10 != 0) {
        func_0x00010a1bf34c(*plVar10 + 0xd0,lVar11 + 0xe0);
      }
      plVar10 = plVar10 + 2;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
  }
  return;
}



/* Entry: 10ab46a5c; end: 10ab46af3;  */

void FUN_10ab46a5c(long *param_1,long param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  
  iVar2 = (int)auStack_48;
  func_0x00010a1bd170();
  if (iVar2 == 0) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = (int)auStack_48;
    func_0x00010a1bd170();
    plVar3 = (long *)0x0;
    if (iVar2 == 0) {
      plVar3 = param_3;
    }
    lVar4 = 0;
    if (iVar2 == 0) {
      lVar4 = param_4;
    }
  }
  else {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    func_0x00010a1bd170(auStack_48);
    plVar3 = (long *)0x0;
    lVar4 = 0;
  }
  lVar5 = *param_1 - (ulong)uRam00000001133006e0;
  if (param_6 != 0) {
    lVar1 = 0;
    if (*param_1 != 0) {
      lVar1 = lVar5 + 0xe0;
    }
    param_6 = param_6 << 4;
    do {
      if (*param_5 != 0) {
        func_0x00010a1bf190(*param_5 + 0xd0,lVar1);
      }
      param_5 = param_5 + 2;
      param_6 = param_6 + -0x10;
    } while (param_6 != 0);
  }
  if (lVar4 != 0) {
    lVar4 = lVar4 << 4;
    do {
      if (*plVar3 != 0) {
        func_0x00010a1bf34c(*plVar3 + 0xd0,lVar5 + 0xe0);
      }
      plVar3 = plVar3 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10ab46af4; end: 10ab46b83;  */

long FUN_10ab46af4(long param_1)

{
  long lVar1;
  int iVar2;
  
  if ((bRam00000001138356b8 & 1) == 0) {
    iVar2 = 0x138356b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      ___cxa_atexit(FUN_10ab4583c,0x1138356a8,0x100000000);
      ___cxa_guard_release(0x1138356b8);
    }
  }
  lVar1 = 0x1138356a8;
  if (*(long *)(param_1 + 0x228) != *(long *)(param_1 + 0x230)) {
    lVar1 = *(long *)(param_1 + 0x228);
  }
  return lVar1;
}



/* Entry: 10ab46b84; end: 10ab46d7b;  */

code ***** FUN_10ab46b84(code *****param_1,long *param_2,long param_3,long *param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  code *pcVar5;
  int iVar6;
  code *****pppppcVar7;
  code *****pppppcVar8;
  long *plVar9;
  long *plVar10;
  code *****pppppcVar11;
  code *****extraout_x8;
  long lVar12;
  ulong uVar13;
  code ****ppppcVar14;
  ulong uVar15;
  code ****ppppcVar16;
  code *****pppppcVar17;
  code ***pppcVar18;
  long lVar19;
  undefined1 auStack_98 [8];
  code ****ppppcStack_70;
  code ****ppppcStack_68;
  code ***pppcStack_60;
  code ****ppppcStack_58;
  code ***pppcStack_50;
  code ****ppppcStack_48;
  code ***pppcStack_40;
  code ****ppppcStack_38;
  
  pppppcVar8 = &ppppcStack_70;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppcVar14 = param_1[0x45];
  if (ppppcVar14 == param_1[0x46]) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pppppcVar8 = param_1 + 0x45;
      pppppcVar17 = (code *****)&pppcStack_50;
      pppppcVar11 = (code *****)&pppcStack_50;
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar9 = param_2;
      func_0x00010a1bd170();
      if ((int)pppppcVar17 == 0) {
        ppppcStack_38 = (code ****)param_2[1];
        pppcStack_40 = (code ***)*param_2;
        if (param_2[1] != 0) {
          plVar9 = (long *)(param_2[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        param_3 = 1;
        param_4 = (long *)0x0;
        param_5 = 0;
        FUN_10ab46a5c(&pppcStack_50,pppppcVar8,&pppcStack_40);
        FUN_10a90f550(pppcStack_50);
        FUN_10ab61860();
        pppppcVar7 = (code *****)ppppcStack_38;
        pppppcVar17 = pppppcVar11;
        if ((code *****)ppppcStack_38 != (code *****)0x0) {
          pppppcVar11 = (code *****)(ppppcStack_38 + 1);
          do {
            ppppcVar14 = *pppppcVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppppcVar11,0x10);
            if (bVar3) {
              *pppppcVar11 = (code ****)((long)ppppcVar14 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppcVar14 == (code ****)0x0) {
            (*(code *)(*ppppcStack_38)[2])(ppppcStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppcVar17 = pppppcVar7;
          }
        }
        plVar9 = param_2;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
          return pppppcVar17;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        ppppcVar14 = param_1[0x46];
        if (ppppcVar14 < param_1[0x47]) {
          lVar12 = param_2[1];
          pppcVar18 = (code ***)*param_2;
          ppppcVar14[1] = (code ***)param_2[1];
          *ppppcVar14 = pppcVar18;
          if (lVar12 != 0) {
            plVar9 = (long *)(lVar12 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *plVar9 = *plVar9 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppcVar14 = ppppcVar14 + 2;
        }
        else {
          lVar12 = (long)ppppcVar14 - (long)*pppppcVar8;
          uVar1 = (lVar12 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a4afcc4();
            ppppcStack_68 = (code ****)FUN_10a90f668;
            pppppcVar17 = (code *****)*pppppcVar8;
            if (pppppcVar17 == (code *****)0x0) {
              return pppppcVar8;
            }
            pppppcVar7 = (code *****)pppppcVar8[1];
            pppppcVar11 = pppppcVar17;
            ppppcStack_70 = (code ****)&stack0xfffffffffffffff0;
            if (pppppcVar7 != pppppcVar17) {
              do {
                pppppcVar7 = pppppcVar7 + -0x12;
                FUN_10a8fdc18();
              } while (pppppcVar7 != pppppcVar17);
              pppppcVar11 = (code *****)*pppppcVar8;
            }
            pppppcVar8[1] = (code ****)pppppcVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(pppppcVar11);
            return pppppcVar11;
          }
          uVar13 = (long)param_1[0x47] - (long)*pppppcVar8;
          uVar15 = (long)uVar13 >> 3;
          if (uVar15 <= uVar1) {
            uVar15 = uVar1;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar15 = 0xfffffffffffffff;
          }
          pppppcVar17 = pppppcVar8;
          ppppcStack_38 = (code ****)pppppcVar8;
          FUN_10a4afcd8();
          plVar9 = (long *)((long)pppppcVar17 + lVar12);
          lVar12 = param_2[1];
          lVar19 = *param_2;
          plVar9[1] = param_2[1];
          *plVar9 = lVar19;
          if (lVar12 != 0) {
            plVar10 = (long *)(lVar12 + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *plVar10 = *plVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppppcVar14 = (code ****)(plVar9 + 2);
          ppppcVar16 = (code ****)((long)plVar9 - ((long)param_1[0x46] - (long)*pppppcVar8));
          _memcpy(ppppcVar16);
          ppppcStack_58 = *pppppcVar8;
          *pppppcVar8 = ppppcVar16;
          param_1[0x46] = ppppcVar14;
          pppcStack_40 = (code ***)param_1[0x47];
          param_1[0x47] = (code ****)(pppppcVar17 + uVar15 * 2);
          pppppcVar8 = &ppppcStack_58;
          pppcStack_50 = (code ***)ppppcStack_58;
          ppppcStack_48 = ppppcStack_58;
          func_0x00010a4afd0c(pppppcVar8);
        }
        param_1[0x46] = ppppcVar14;
        return pppppcVar8;
      }
      ___stack_chk_fail();
      FUN_10ab61860(&pppcStack_50);
      func_0x00010a190e10(&pppcStack_40);
      pppppcVar11 = pppppcVar17;
      __Unwind_Resume();
      ppppcStack_58 = (code ****)FUN_10ab46a5c;
      iVar6 = (int)auStack_98;
      ppppcStack_70 = (code ****)pppppcVar8;
      ppppcStack_68 = (code ****)pppppcVar17;
      pppcStack_60 = (code ***)&stack0xfffffffffffffff0;
      func_0x00010a1bd170();
      if (iVar6 == 0) {
        *extraout_x8 = (code ****)pppppcVar11;
        *(undefined1 *)(extraout_x8 + 1) = 0;
        iVar6 = (int)auStack_98;
        func_0x00010a1bd170();
        plVar10 = (long *)0x0;
        if (iVar6 == 0) {
          plVar10 = plVar9;
        }
        lVar12 = 0;
        if (iVar6 == 0) {
          lVar12 = param_3;
        }
      }
      else {
        *extraout_x8 = (code ****)pppppcVar11;
        *(undefined1 *)(extraout_x8 + 1) = 0;
        func_0x00010a1bd170(auStack_98);
        plVar10 = (long *)0x0;
        lVar12 = 0;
      }
      uVar4 = uRam00000001133006e0;
      ppppcVar14 = *extraout_x8;
      pppppcVar8 = extraout_x8;
      if (param_5 != 0) {
        lVar19 = 0;
        if (ppppcVar14 != (code ****)0x0) {
          lVar19 = (long)ppppcVar14 + (0xe0 - (ulong)uRam00000001133006e0);
        }
        param_5 = param_5 << 4;
        do {
          if (*param_4 != 0) {
            pppppcVar8 = (code *****)(*param_4 + 0xd0);
            func_0x00010a1bf190(pppppcVar8,lVar19);
          }
          param_4 = param_4 + 2;
          param_5 = param_5 + -0x10;
        } while (param_5 != 0);
      }
      if (lVar12 != 0) {
        lVar12 = lVar12 << 4;
        do {
          if (*plVar10 != 0) {
            pppppcVar8 = (code *****)(*plVar10 + 0xd0);
            func_0x00010a1bf34c(pppppcVar8,(long)ppppcVar14 + (0xe0 - (ulong)uVar4));
          }
          plVar10 = plVar10 + 2;
          lVar12 = lVar12 + -0x10;
        } while (lVar12 != 0);
      }
      return pppppcVar8;
    }
  }
  else {
    pppcStack_60 = *ppppcVar14;
    pppppcVar17 = (code *****)ppppcVar14[1];
    if (pppppcVar17 != (code *****)0x0) {
      pppppcVar11 = pppppcVar17 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar11,0x10);
        if (bVar3) {
          *pppppcVar11 = (code ****)((long)*pppppcVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppcStack_38 = (code ****)param_2[1];
    pppcStack_40 = (code ***)*param_2;
    if (param_2[1] != 0) {
      plVar9 = (long *)(param_2[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (pppppcVar17 != (code *****)0x0) {
      pppppcVar11 = pppppcVar17 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar11,0x10);
        if (bVar3) {
          *pppppcVar11 = (code ****)((long)*pppppcVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppcStack_58 = (code ****)pppppcVar17;
    pppcStack_50 = pppcStack_60;
    ppppcStack_48 = (code ****)pppppcVar17;
    FUN_10ab46a5c(&ppppcStack_70,param_1 + 0x45,&pppcStack_40,1,&pppcStack_50,1);
    if (*ppppcStack_70 == ppppcStack_70[1]) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab46d54);
      (*pcVar5)();
    }
    func_0x00010a4afc48(*ppppcStack_70,param_2);
    FUN_10ab61860();
    pppppcVar11 = (code *****)ppppcStack_48;
    if ((code *****)ppppcStack_48 != (code *****)0x0) {
      pppppcVar7 = (code *****)(ppppcStack_48 + 1);
      do {
        ppppcVar14 = *pppppcVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar7,0x10);
        if (bVar3) {
          *pppppcVar7 = (code ****)((long)ppppcVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppcVar14 == (code ****)0x0) {
        (*(code *)(*ppppcStack_48)[2])(ppppcStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppcVar8 = pppppcVar11;
      }
    }
    pppppcVar11 = (code *****)ppppcStack_38;
    if ((code *****)ppppcStack_38 != (code *****)0x0) {
      pppppcVar7 = (code *****)(ppppcStack_38 + 1);
      do {
        ppppcVar14 = *pppppcVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar7,0x10);
        if (bVar3) {
          *pppppcVar7 = (code ****)((long)ppppcVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppcVar14 == (code ****)0x0) {
        (*(code *)(*ppppcStack_38)[2])(ppppcStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppcVar8 = pppppcVar11;
      }
    }
    param_1 = pppppcVar8;
    if (pppppcVar17 != (code *****)0x0) {
      pppppcVar8 = pppppcVar17 + 1;
      do {
        ppppcVar14 = *pppppcVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppcVar8,0x10);
        if (bVar3) {
          *pppppcVar8 = (code ****)((long)ppppcVar14 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppcVar14 == (code ****)0x0) {
        (*(code *)(*pppppcVar17)[2])(pppppcVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = pppppcVar17;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  func_0x00010a190e10(&pppcStack_50);
  func_0x00010a190e10(&pppcStack_40);
  func_0x00010a190e10(&pppcStack_60);
  __Unwind_Resume();
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (code ****)&PTR_FUN_110c49f98;
  param_1[0x20] = (code ****)0x0;
  param_1[0x1f] = (code ****)0x0;
  param_1[0x22] = (code ****)0x0;
  param_1[0x21] = (code ****)0x0;
  param_1[0x24] = (code ****)0x0;
  param_1[0x23] = (code ****)0x0;
  param_1[0x26] = (code ****)0x0;
  param_1[0x25] = (code ****)0x0;
  param_1[3] = (code ****)0x0;
  param_1[2] = (code ****)0x0;
  param_1[5] = (code ****)0x0;
  param_1[4] = (code ****)0x0;
  param_1[7] = (code ****)0x0;
  param_1[6] = (code ****)0x0;
  param_1[9] = (code ****)0x0;
  param_1[8] = (code ****)0x0;
  param_1[0xb] = (code ****)0x0;
  param_1[10] = (code ****)0x0;
  param_1[0xd] = (code ****)0x0;
  param_1[0xc] = (code ****)0x0;
  param_1[0xf] = (code ****)0x0;
  param_1[0xe] = (code ****)0x0;
  param_1[0x11] = (code ****)0x0;
  param_1[0x10] = (code ****)0x0;
  param_1[0x13] = (code ****)0x0;
  param_1[0x12] = (code ****)0x0;
  param_1[0x15] = (code ****)0x0;
  param_1[0x14] = (code ****)0x0;
  param_1[0x17] = (code ****)0x0;
  param_1[0x16] = (code ****)0x0;
  param_1[0x19] = (code ****)0x0;
  param_1[0x18] = (code ****)0x0;
  param_1[0x1b] = (code ****)0x0;
  param_1[0x1a] = (code ****)0x0;
  param_1[0x1d] = (code ****)0x0;
  param_1[0x1c] = (code ****)0x0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_10a19079c();
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x23] = (code ****)0xffffffffffffffff;
  param_1[0x22] = (code ****)0xffffffffffffffff;
  param_1[0x25] = (code ****)0xffffffffffffffff;
  param_1[0x24] = (code ****)0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  param_1[0x2b] = (code ****)0x0;
  param_1[0x2a] = (code ****)0x0;
  param_1[0x2c] = (code ****)&PTR_DAT_110c4a7c8;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = (code ****)0x0;
  param_1[0x2f] = (code ****)0x0;
  param_1[0x32] = (code ****)0x0;
  param_1[0x31] = (code ****)0x0;
  param_1[0x33] = (code ****)0xffffffffffffffff;
  param_1[0x34] = (code ****)0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x35) = 2;
  return param_1;
}



/* Entry: 10ab46d7c; end: 10ab46f77;  */

undefined8 * FUN_10ab46d7c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c49f98;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_10a19079c();
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = &PTR_DAT_110c4a7c8;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x34] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x35) = 2;
  return param_1;
}



/* Entry: 10ab46f78; end: 10ab46f7b;  */

undefined8 * FUN_10ab46f78(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c49f98;
  plVar1 = (long *)param_1[0x32];
  param_1[0x32] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x2c] = &PTR_DAT_110c4a7c8;
  if (param_1[0x2f] != 0) {
    param_1[0x30] = param_1[0x2f];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x1f;
  func_0x00010a190844(&puStack_28);
  if (param_1[0x1a] != 0) {
    param_1[0x1b] = param_1[0x1a];
    __ZdlPv();
  }
  if (param_1[0x17] != 0) {
    param_1[0x18] = param_1[0x17];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x14;
  FUN_10ab550c4(&puStack_28);
  puStack_28 = param_1 + 0x11;
  func_0x00010ab55134(&puStack_28);
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0xb;
  FUN_10a0d89d4(&puStack_28);
  puStack_28 = param_1 + 8;
  func_0x00010ab551a4(&puStack_28);
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  if (param_1[2] != 0) {
    param_1[3] = param_1[2];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab46f7c; end: 10ab46f8f;  */

void FUN_10ab46f7c(void)

{
  func_0x00010ab46e34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab46f90; end: 10ab49f0b;  */

/* WARNING: Removing unreachable block (ram,0x00010ab48d40) */
/* WARNING: Removing unreachable block (ram,0x00010ab48e6c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10ab46f90(long *******param_1,long *******param_2,long ******param_3,ulong param_4,
                  long *param_5)

{
  undefined8 *puVar1;
  long *******ppppppplVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  uint3 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  byte *pbVar12;
  long *******ppppppplVar13;
  long ******pppppplVar14;
  long *plVar15;
  uint *puVar16;
  ushort *puVar17;
  undefined *puVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined4 *puVar23;
  float *pfVar24;
  uint uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  undefined4 *puVar30;
  long lVar31;
  long *****ppppplVar32;
  long lVar33;
  undefined8 uVar34;
  uint *puVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  undefined4 *puVar39;
  long *******ppppppplVar40;
  long *plVar41;
  undefined8 *puVar42;
  ulong uVar43;
  long ******pppppplVar44;
  undefined8 *puVar45;
  long lVar46;
  long *****ppppplVar47;
  ulong uVar48;
  long lVar49;
  long *plVar50;
  long lVar51;
  float fVar52;
  undefined4 uVar53;
  long *******ppppppplVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  long *******ppppppplVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  undefined4 uStack_164;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long lStack_140;
  long ******pppppplStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_100;
  undefined8 uStack_f8;
  long *******ppppppplStack_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = param_5;
  (**(code **)(*param_5 + 0x30))(param_5,&PTR_DAT_110c49fd0);
  *(int *)(param_4 + 0xe8) = (int)plVar11;
  plVar11 = param_5;
  (**(code **)(*param_5 + 0x30))(param_5,&PTR_DAT_110c49ff0);
  *(int *)(param_4 + 0xec) = (int)plVar11;
  (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a010);
  FUN_10ab6fed4(param_4 + 0xf0,param_5);
  (**(code **)(*param_5 + 0x220))(param_5);
  plVar11 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a030);
  if ((int)plVar11 == 0) {
    plVar11 = param_5;
    (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c4a050,1);
    if (((ulong)plVar11 & 1) != 0) {
      FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_DAT_110c4a070);
      lVar31 = *(long *)(param_4 + 0x10);
      if (lVar31 != 0) {
        *(long *)(param_4 + 0x18) = lVar31;
        __ZdlPv();
        *(long *)(param_4 + 0x10) = 0;
        *(undefined8 *)(param_4 + 0x18) = 0;
        *(undefined8 *)(param_4 + 0x20) = 0;
      }
      *(long ********)(param_4 + 0x18) = uStack_f8;
      *(long ********)(param_4 + 0x10) = ppppppplStack_100;
      *(long ********)(param_4 + 0x20) = ppppppplStack_f0;
LAB_10ab473e0:
      FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_DAT_110c4a090);
      lVar31 = *(long *)(param_4 + 0x28);
      if (lVar31 != 0) {
        *(long *)(param_4 + 0x30) = lVar31;
        __ZdlPv();
        *(long *)(param_4 + 0x28) = 0;
        *(undefined8 *)(param_4 + 0x30) = 0;
        *(undefined8 *)(param_4 + 0x38) = 0;
      }
      pbVar12 = (byte *)0x0;
      *(long ********)(param_4 + 0x30) = uStack_f8;
      *(long ********)(param_4 + 0x28) = ppppppplStack_100;
      *(long ********)(param_4 + 0x38) = ppppppplStack_f0;
      param_1 = ppppppplStack_100;
      goto LAB_10ab47424;
    }
    FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_DAT_110c4a070);
    FUN_10ab55260(&uStack_1a8,
                  (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) * 0x6db6db6db6db6db7
                 );
    FUN_10ab55260(&ppppppplStack_118,
                  (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) * 0x6db6db6db6db6db7
                 );
    ppppppplVar54 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
    lVar31 = *(long *)(param_4 + 0xf8);
    lVar22 = *(long *)(param_4 + 0x100) - lVar31;
    if (lVar22 == 0) {
      uVar20 = 0;
      uVar48 = 0;
    }
    else {
      uVar48 = 0;
      uVar20 = 0;
      uVar29 = (lVar22 >> 3) * 0x6db6db6db6db6db7;
      uVar21 = 0;
      uVar27 = 1;
      do {
        lVar22 = lVar31 + uVar21 * 0x38;
        uVar19 = *(int *)(lVar22 + 0x24) - 1;
        if (uVar19 < 7) {
          iVar10 = *(int *)(&UNK_10e4fda1c + (ulong)uVar19 * 4);
        }
        else {
          iVar10 = 0;
        }
        uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
        if ((ulong)((long)ppppppplStack_110 - (long)ppppppplStack_118 >> 3) <= uVar21)
        goto LAB_10ab49c48;
        iVar5 = *(int *)(lVar22 + 0x28);
        ppppppplStack_118[uVar21] = (long ******)(ulong)(iVar5 * iVar10 + 3U & 0xfffffffc);
        if (uVar19 < 7) {
          iVar10 = *(int *)(&UNK_10e4fda1c + (ulong)uVar19 * 4);
        }
        else {
          iVar10 = 0;
        }
        uStack_1a8 = ppppppplVar54;
        if ((ulong)(CONCAT44(uStack_19c,uStack_1a0) -
                    CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8) >> 3) <= uVar21)
        goto LAB_10ab49c48;
        uVar43 = (ulong)(uint)(iVar10 * iVar5);
        *(ulong *)(CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8) + uVar21 * 8) = uVar43;
        uVar48 = (long)ppppppplStack_118[uVar21] + uVar48;
        uVar20 = uVar20 + uVar43;
        bVar9 = uVar27 <= uVar29;
        lVar22 = uVar29 - uVar27;
        uVar21 = uVar27;
        uVar27 = (ulong)((int)uVar27 + 1);
      } while (bVar9 && lVar22 != 0);
    }
    pppppplStack_130 = (long ******)&UNK_10f6927fc;
    uStack_128 = 0x1b;
    if (uVar48 == *(uint *)(param_4 + 0xf0)) {
      if (((long)ppppppplStack_110 - (long)ppppppplStack_118 ==
           CONCAT44(uStack_19c,uStack_1a0) - CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8)) &&
         (ppppppplVar54 = ppppppplStack_118, _memcmp(), (int)ppppppplVar54 == 0)) {
        ppppppplVar59 = *(long ********)(param_4 + 0x18);
        param_2 = *(long ********)(param_4 + 0x10);
        *(long ********)(param_4 + 0x18) = uStack_f8;
        *(long ********)(param_4 + 0x10) = ppppppplStack_100;
        ppppppplVar54 = *(long ********)(param_4 + 0x20);
        *(long ********)(param_4 + 0x20) = ppppppplStack_f0;
        ppppppplStack_100 = param_2;
        uStack_f8 = ppppppplVar59;
        ppppppplStack_f0 = ppppppplVar54;
      }
      else {
        uVar48 = 0;
        if (uVar20 != 0) {
          uVar48 = 0;
          if (uVar20 != 0) {
            uVar48 = (ulong)((long)uStack_f8 - (long)ppppppplStack_100) / uVar20;
          }
        }
        FUN_10ab4a154(param_4,uVar48);
        if (uVar48 != 0) {
          uVar20 = 0;
          lVar31 = *(long *)(param_4 + 0x10);
          lVar22 = *(long *)(param_4 + 0xf8);
          lVar46 = *(long *)(param_4 + 0x100);
          ppppppplVar54 = ppppppplStack_100;
          do {
            bVar9 = lVar46 != lVar22;
            lVar46 = lVar22;
            if (bVar9) {
              lVar49 = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              lVar51 = CONCAT44(uStack_19c,uStack_1a0);
              uVar21 = 0;
              uVar27 = 1;
              do {
                uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                if ((ulong)(lVar51 - lVar49 >> 3) <= uVar21) goto LAB_10ab49c48;
                _memcpy(lVar31,ppppppplVar54,*(undefined8 *)(lVar49 + uVar21 * 8));
                uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                if ((ulong)((long)ppppppplStack_110 - (long)ppppppplStack_118 >> 3) <= uVar21)
                goto LAB_10ab49c48;
                lVar49 = CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                lVar51 = CONCAT44(uStack_19c,uStack_1a0);
                uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                if ((ulong)(lVar51 - lVar49 >> 3) <= uVar21) goto LAB_10ab49c48;
                lVar31 = lVar31 + (long)ppppppplStack_118[uVar21];
                ppppppplVar54 = (long *******)((long)ppppppplVar54 + *(long *)(lVar49 + uVar21 * 8))
                ;
                lVar22 = *(long *)(param_4 + 0xf8);
                uVar21 = (*(long *)(param_4 + 0x100) - lVar22 >> 3) * 0x6db6db6db6db6db7;
                bVar9 = uVar27 <= uVar21;
                lVar33 = uVar21 - uVar27;
                lVar46 = *(long *)(param_4 + 0x100);
                uVar21 = uVar27;
                uVar27 = (ulong)((int)uVar27 + 1);
              } while (bVar9 && lVar33 != 0);
            }
            uVar20 = (ulong)((int)uVar20 + 1);
          } while (uVar20 < uVar48);
        }
      }
      if (ppppppplStack_118 != (long *******)0x0) {
        ppppppplStack_110 = ppppppplStack_118;
        __ZdlPv();
      }
      if (CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8) != 0) {
        uStack_1a0 = (undefined4)uStack_1a8;
        uStack_19c = uStack_1a8._4_4_;
        __ZdlPv();
      }
      if (ppppppplStack_100 != (long *******)0x0) {
        uStack_f8 = ppppppplStack_100;
        __ZdlPv();
      }
      goto LAB_10ab473e0;
    }
LAB_10ab49c28:
    uStack_1a8 = ppppppplVar54;
    FUN_10a0edfc4(&pppppplStack_130);
  }
  else {
    pbVar12 = (byte *)0x1;
    __Znwm();
    *pbVar12 = 0;
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a030);
    plVar11 = param_5;
    (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110c4ab10,0);
    if ((int)plVar11 == 0) {
      FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_DAT_110c4a5b0);
      FUN_10ab15b0c(&ppppppplStack_100,param_4);
      *pbVar12 = 1;
      if (ppppppplStack_100 != (long *******)0x0) {
        uStack_f8 = ppppppplStack_100;
        __ZdlPv();
      }
    }
    (**(code **)(*param_5 + 0x220))(param_5);
LAB_10ab47424:
    FUN_10ab4a18c(param_4);
    plVar11 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a0b0);
    if ((int)plVar11 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a0b0);
      plVar11 = param_5;
      (**(code **)(*param_5 + 0x208))();
      FUN_10a0d2960(param_4 + 0x40,(ulong)plVar11 & 0xffffffff);
      if ((int)plVar11 != 0) {
        uVar48 = 0;
        do {
          (**(code **)(*param_5 + 0x218))(param_5,uVar48);
          lVar31 = *(long *)(param_4 + 0x40);
          uVar20 = (*(long *)(param_4 + 0x48) - lVar31 >> 3) * -0x71c71c71c71c71c7;
          uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
          if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
          (**(code **)(*param_5 + 0xa0))(&ppppppplStack_100,param_5,&PTR_DAT_110c4aad0);
          puVar26 = (undefined8 *)(lVar31 + uVar48 * 0x48);
          if (*(char *)((long)puVar26 + 0x17) < '\0') {
            __ZdlPv(*puVar26);
          }
          puVar26[2] = ppppppplStack_f0;
          puVar26[1] = uStack_f8;
          *puVar26 = ppppppplStack_100;
          param_1 = ppppppplStack_100;
          (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c4a3d0);
          *(int *)(puVar26 + 3) = (int)param_1;
          plVar41 = param_5;
          (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a3f0);
          uVar19 = *(uint *)(param_4 + 0xf0);
          uVar25 = 0;
          if (uVar19 != 0) {
            uVar25 = 0;
            if ((ulong)uVar19 != 0) {
              uVar25 = (uint)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                             (ulong)uVar19);
            }
          }
          ppppppplStack_100 = (long *******)&UNK_10f6928f0;
          uStack_f8 = (long *******)0x33;
          if (uVar25 < (uint)plVar41) {
            FUN_10a0edfc4(&ppppppplStack_100);
            uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            goto LAB_10ab49c48;
          }
          ppppppplStack_100 = (long *******)&UNK_10f692800;
          FUN_10a0cf3f0(&lStack_148,
                        (((ulong)plVar41 & 0xffffffff) * 2 + ((ulong)plVar41 & 0xffffffff)) * 8,
                        &ppppppplStack_100);
          lVar31 = lStack_148;
          plVar50 = param_5;
          (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a090);
          uVar20 = (ulong)plVar41 & 0xffffffff;
          if ((int)plVar50 != 0) {
            lStack_160 = 0;
            lStack_158 = 0;
            uStack_150 = 0;
            (**(code **)(*param_5 + 0x1d8))(&ppppppplStack_100,param_5,&PTR_DAT_110c4a090);
            if (((ulong)ppppppplStack_f0 & 1) == 0) {
              uStack_119 = 7;
              pppppplStack_130 = (long ******)0x73656369646e69;
              __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                        (&ppppppplStack_118,&UNK_10f63b9fc,&pppppplStack_130);
              FUN_10a012db0(&uStack_1a8,&ppppppplStack_118,&UNK_10f63ba05);
              FUN_10a0029c0(&uStack_1a8);
              uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
              goto LAB_10ab49c48;
            }
            func_0x000108262984(&lStack_160,(long)uStack_f8 - ((ulong)uStack_f8 >> 1));
            uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            if (((ulong)ppppppplStack_f0 & 1) == 0) goto LAB_10ab49c48;
            _memcpy(lStack_160,ppppppplStack_100,uStack_f8);
            uVar19 = *(uint *)(param_4 + 0x114);
            if (uVar19 == 0xffffffff) {
LAB_10ab47878:
              plVar50 = param_5;
              (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a070);
              if ((int)plVar50 != 0) {
                ppppppplStack_100 = (long *******)0x0;
                uStack_f8 = (long *******)0x0;
                ppppppplStack_f0 = (long *******)0x0;
                FUN_10a0ff254(param_5,&PTR_DAT_110c4a070,&ppppppplStack_100,FUN_10ab61f18);
                uVar27 = ((long)uStack_f8 - (long)ppppppplStack_100 >> 2) * -0x5555555555555555;
                uStack_1a8._0_4_ = 0xf692924;
                uStack_1a8._4_4_ = 1;
                uStack_1a0 = 0x32;
                uStack_19c = 0;
                uVar21 = lStack_158 - lStack_160 >> 1;
                if (uVar21 <= uVar27 && uVar27 - uVar21 != 0) {
                  FUN_10a0edfc4(&uStack_1a8);
                  uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                  goto LAB_10ab49c48;
                }
                if (ppppppplStack_100 != uStack_f8) {
                  uVar21 = 0;
                  ppppppplVar54 = ppppppplStack_100;
                  do {
                    uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                    if ((ulong)(lStack_158 - lStack_160 >> 1) <= uVar21) goto LAB_10ab49c48;
                    uVar27 = (ulong)*(ushort *)(lStack_160 + uVar21 * 2);
                    uStack_1a8._0_4_ = 0xf692957;
                    uStack_1a8._4_4_ = 1;
                    uStack_1a0 = 0x32;
                    uStack_19c = 0;
                    if (uVar20 <= uVar27) {
                      FUN_10a0edfc4(&uStack_1a8);
                      uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                      goto LAB_10ab49c48;
                    }
                    lVar22 = 0;
                    uVar21 = uVar21 + 1;
                    uStack_1a8._0_4_ = 0;
                    ppppppplStack_118 =
                         (long *******)((ulong)ppppppplStack_118 & 0xffffffff00000000);
                    fVar56 = 0.0;
                    param_2 = (long *******)0x0;
                    param_3 = (long ******)0x0;
                    pppppplStack_130 = (long ******)((ulong)pppppplStack_130 & 0xffffffff00000000);
                    do {
                      fVar52 = (float)*(float2 *)((long)ppppppplVar54 + lVar22 * 2);
                      iVar10 = (int)lVar22;
                      ppppppplVar59 = (long *******)&uStack_1a8;
                      fVar60 = fVar56;
                      fVar57 = fVar52;
                      if (iVar10 == 1) {
                        ppppppplVar59 = (long *******)&ppppppplStack_118;
                        fVar60 = fVar52;
                        fVar57 = SUB84(param_3,0);
                      }
                      if (iVar10 != 2) {
                        param_3 = (long ******)(ulong)(uint)fVar57;
                      }
                      ppppppplVar40 = &pppppplStack_130;
                      ppppppplVar13 = (long *******)(ulong)(uint)fVar52;
                      if (iVar10 != 2) {
                        ppppppplVar40 = ppppppplVar59;
                        fVar56 = fVar60;
                        ppppppplVar13 = param_2;
                      }
                      param_2 = ppppppplVar13;
                      *(float *)ppppppplVar40 =
                           (float)*(float2 *)((long)ppppppplVar54 + lVar22 * 2 + 6);
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 3);
                    puVar23 = (undefined4 *)(lVar31 + uVar27 * 0x18);
                    *puVar23 = (int)param_3;
                    puVar23[1] = fVar56;
                    puVar23[2] = (int)param_2;
                    puVar23[3] = (undefined4)uStack_1a8;
                    puVar23[4] = ppppppplStack_118._0_4_;
                    param_1 = (long *******)((ulong)pppppplStack_130 & 0xffffffff);
                    puVar23[5] = pppppplStack_130._0_4_;
                    ppppppplVar54 = (long *******)((long)ppppppplVar54 + 0xc);
                  } while (ppppppplVar54 != uStack_f8);
                }
                if (ppppppplStack_100 != (long *******)0x0) {
                  uStack_f8 = ppppppplStack_100;
                  __ZdlPv();
                }
              }
            }
            else {
              lVar22 = *(long *)(param_4 + 0xf8);
              uVar21 = (*(long *)(param_4 + 0x100) - lVar22 >> 3) * 0x6db6db6db6db6db7;
              if (uVar21 < uVar19 || uVar21 - uVar19 == 0) {
                FUN_10ab725fc();
                uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                goto LAB_10ab49c48;
              }
              if ((lVar22 == 0) ||
                 (plVar50 = param_5, (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a410),
                 (int)plVar50 == 0)) goto LAB_10ab47878;
              ppppppplStack_100 = (long *******)0x0;
              uStack_f8 = (long *******)0x0;
              ppppppplStack_f0 = (long *******)0x0;
              FUN_10a0ff254(param_5,&PTR_DAT_110c4a410,&ppppppplStack_100,0x10ab61d94);
              uVar27 = ((long)uStack_f8 - (long)ppppppplStack_100) * -0x71c71c71c71c71c7;
              uStack_1a8._0_4_ = 0xf692924;
              uStack_1a8._4_4_ = 1;
              uStack_1a0 = 0x32;
              uStack_19c = 0;
              uVar21 = lStack_158 - lStack_160 >> 1;
              if (uVar21 <= uVar27 && uVar27 - uVar21 != 0) {
                FUN_10a0edfc4(&uStack_1a8);
                uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                goto LAB_10ab49c48;
              }
              FUN_10ab4c544(&ppppppplStack_118,param_4,lVar22 + (ulong)uVar19 * 0x38);
              ppppppplVar59 = uStack_f8;
              ppppppplVar54 = ppppppplStack_118;
              if (ppppppplStack_100 == uStack_f8) {
                if (ppppppplStack_118 != (long *******)0x0) goto LAB_10ab479f0;
              }
              else {
                uVar21 = 0;
                ppppppplVar40 = ppppppplStack_100;
                do {
                  fVar56 = SUB84(param_2,0);
                  fVar60 = SUB84(param_3,0);
                  uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                  if ((ulong)(lStack_158 - lStack_160 >> 1) <= uVar21) goto LAB_10ab49c48;
                  uVar27 = (ulong)*(ushort *)(lStack_160 + uVar21 * 2);
                  uStack_1a8._0_4_ = 0xf692957;
                  uStack_1a8._4_4_ = 1;
                  uStack_1a0 = 0x32;
                  uStack_19c = 0;
                  if (uVar20 <= uVar27) {
                    FUN_10a0edfc4(&uStack_1a8);
                    uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                    goto LAB_10ab49c48;
                  }
                  lVar22 = 0;
                  uStack_1a8._0_4_ = 0;
                  uVar21 = uVar21 + 1;
                  pppppplStack_130 = (long ******)((ulong)pppppplStack_130 & 0xffffffff00000000);
                  uStack_164 = 0;
                  do {
                    ppppppplVar13 = (long *******)&uStack_1a8;
                    if ((int)lVar22 == 1) {
                      ppppppplVar13 = &pppppplStack_130;
                    }
                    ppppppplVar2 = (long *******)&uStack_164;
                    if ((int)lVar22 != 2) {
                      ppppppplVar2 = ppppppplVar13;
                    }
                    *(float *)ppppppplVar2 = (float)*(float2 *)((long)ppppppplVar40 + lVar22 * 2);
                    lVar22 = lVar22 + 1;
                  } while (lVar22 != 3);
                  uVar7 = *(uint3 *)((long)ppppppplVar40 + 6);
                  fVar63 = ((float)(uVar7 & 0x7ff) / 2047.0) * 2.0 + -1.0;
                  fVar64 = ((float)(uVar7 >> 0xb & 0x7ff) / 2047.0) * 2.0 + -1.0;
                  fVar52 = fVar64 * fVar64 + fVar63 * fVar63;
                  fVar57 = 0.0;
                  if (fVar52 < 1.0) {
                    fVar52 = SQRT(1.0 - fVar52);
                    fVar56 = -fVar52;
                    fVar57 = fVar52;
                    if ((uVar7 & 0x400000) != 0) {
                      fVar57 = fVar56;
                    }
                  }
                  (*(code *)(*ppppppplVar54)[2])(ppppppplVar54,uVar27);
                  fVar62 = 1.0 / SQRT(fVar63 * fVar63 + fVar64 * fVar64 + fVar57 * fVar57);
                  fVar52 = fVar63 * fVar62 - fVar52;
                  param_1 = (long *******)(ulong)(uint)fVar52;
                  fVar56 = fVar64 * fVar62 - fVar56;
                  param_2 = (long *******)(ulong)(uint)fVar56;
                  puVar23 = (undefined4 *)(lVar31 + uVar27 * 0x18);
                  *puVar23 = (undefined4)uStack_1a8;
                  fVar60 = fVar57 * fVar62 - fVar60;
                  param_3 = (long ******)(ulong)(uint)fVar60;
                  puVar23[1] = pppppplStack_130._0_4_;
                  puVar23[2] = uStack_164;
                  puVar23[3] = fVar52;
                  puVar23[4] = fVar56;
                  puVar23[5] = fVar60;
                  ppppppplVar40 = (long *******)((long)ppppppplVar40 + 9);
                } while (ppppppplVar40 != ppppppplVar59);
LAB_10ab479f0:
                (*(code *)(*ppppppplVar54)[1])();
              }
              if (ppppppplStack_100 != (long *******)0x0) {
                uStack_f8 = ppppppplStack_100;
                __ZdlPv(ppppppplStack_100);
              }
            }
            if (lStack_160 != 0) {
              lStack_158 = lStack_160;
              __ZdlPv();
            }
          }
          plVar50 = param_5;
          (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a430);
          if ((int)plVar50 == 0) {
            if ((uint)plVar41 == 0) {
              uVar20 = 0;
              uVar19 = 0;
              param_1 = (long *******)0x0;
              param_3 = (long ******)0x0;
              fVar56 = 0.0;
            }
            else {
              pfVar24 = (float *)(lVar31 + 8);
              lVar31 = uVar20 * 0x18;
              uVar20 = 0;
              param_1 = (long *******)0x0;
              pppppplVar44 = (long ******)0x0;
              fVar60 = 0.0;
              do {
                fVar57 = *pfVar24;
                uVar21 = *(ulong *)(pfVar24 + -2);
                fVar52 = (float)(uVar21 >> 0x20);
                uVar20 = uVar20 ^ (uVar20 ^ uVar21) &
                                  CONCAT44(-(uint)(fVar52 < (float)(uVar20 >> 0x20)),
                                           -(uint)((float)uVar21 < (float)uVar20));
                fVar56 = fVar57;
                if (fVar60 <= fVar57) {
                  fVar56 = fVar60;
                }
                param_1 = (long *******)
                          ((ulong)param_1 ^
                          ((ulong)param_1 ^ uVar21) &
                          CONCAT44(-(uint)((float)((ulong)param_1 >> 0x20) < fVar52),
                                   -(uint)(SUB84(param_1,0) < (float)uVar21)));
                param_3 = (long ******)(ulong)(uint)fVar57;
                if (fVar57 <= SUB84(pppppplVar44,0)) {
                  param_3 = pppppplVar44;
                }
                pfVar24 = pfVar24 + 6;
                lVar31 = lVar31 + -0x18;
                pppppplVar44 = param_3;
                fVar60 = fVar56;
              } while (lVar31 != 0);
              uVar19 = (uint)((ulong)param_1 >> 0x20);
            }
            param_2 = (long *******)(ulong)uVar19;
            *(ulong *)((long)puVar26 + 0x1c) = uVar20;
            *(float *)((long)puVar26 + 0x24) = fVar56;
          }
          else {
            (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a430);
            *(int *)((long)puVar26 + 0x1c) = (int)param_1;
            *(int *)(puVar26 + 4) = (int)param_2;
            *(int *)((long)puVar26 + 0x24) = (int)param_3;
            (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a450);
          }
          *(int *)(puVar26 + 5) = (int)param_1;
          *(int *)((long)puVar26 + 0x2c) = (int)param_2;
          *(int *)(puVar26 + 6) = (int)param_3;
          FUN_10a0d3194(puVar26,&lStack_148);
          if (lStack_148 != 0) {
            lStack_140 = lStack_148;
            __ZdlPv();
          }
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar48 = uVar48 + 1;
        } while (uVar48 != ((ulong)plVar11 & 0xffffffff));
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    plVar11 = param_5;
    (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110c4a0d0,0);
    *(int *)(param_4 + 0x1a8) = (int)plVar11;
    plVar11 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a0f0);
    if ((int)plVar11 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a0f0);
      plVar11 = param_5;
      (**(code **)(*param_5 + 0x208))();
      plVar41 = (long *)(param_4 + 0xa0);
      lVar31 = *plVar41;
      puVar26 = *(undefined8 **)(param_4 + 0xa8);
      iVar10 = (int)plVar11;
      uVar20 = (ulong)iVar10;
      lVar22 = (long)puVar26 - lVar31 >> 3;
      bVar9 = (ulong)(lVar22 * 0x2e8ba2e8ba2e8ba3) <= uVar20;
      uVar48 = uVar20 + lVar22 * -0x2e8ba2e8ba2e8ba3;
      if (bVar9 && uVar48 != 0) {
        if ((ulong)((*(long *)(param_4 + 0xb0) - (long)puVar26 >> 3) * 0x2e8ba2e8ba2e8ba3) < uVar48)
        {
          if (iVar10 < 0) {
            FUN_10a5599e4();
            uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            goto LAB_10ab49c48;
          }
          lVar22 = *(long *)(param_4 + 0xb0) - lVar31 >> 3;
          uVar21 = lVar22 * 0x5d1745d1745d1746;
          if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
            uVar21 = uVar20;
          }
          if (0x1745d1745d1745c < (ulong)(lVar22 * 0x2e8ba2e8ba2e8ba3)) {
            uVar21 = 0x2e8ba2e8ba2e8ba;
          }
          plVar50 = plVar41;
          FUN_10a5599f8();
          puVar42 = (undefined8 *)((long)plVar50 + ((long)puVar26 - lVar31));
          param_1 = (long *******)0x0;
          puVar26 = puVar42;
          do {
            puVar26[1] = 0;
            *puVar26 = 0;
            puVar26[3] = 0;
            puVar26[2] = 0;
            puVar26[4] = 0;
            puVar26[5] = 0x28cd94bfde;
            puVar26[7] = 0;
            puVar26[6] = 0;
            puVar26[9] = 0;
            puVar26[8] = 0;
            puVar26[10] = 0;
            puVar26 = puVar26 + 0xb;
          } while (puVar26 != puVar42 + uVar48 * 0xb);
          puVar45 = *(undefined8 **)(param_4 + 0xa0);
          puVar3 = *(undefined8 **)(param_4 + 0xa8);
          puVar1 = (undefined8 *)((long)puVar42 + ((long)puVar45 - (long)puVar3));
          puVar26 = puVar45;
          puVar28 = puVar1;
          if (puVar3 != puVar45) {
            do {
              uVar34 = *puVar26;
              *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(puVar26 + 1);
              *puVar28 = uVar34;
              uVar55 = puVar26[3];
              uVar34 = puVar26[2];
              puVar28[4] = puVar26[4];
              puVar28[3] = uVar55;
              puVar28[2] = uVar34;
              puVar26[3] = 0;
              puVar26[4] = 0;
              puVar26[2] = 0;
              puVar28[5] = puVar26[5];
              puVar28[6] = 0;
              puVar28[7] = 0;
              puVar28[8] = 0;
              uVar34 = puVar26[6];
              puVar28[7] = puVar26[7];
              puVar28[6] = uVar34;
              puVar28[8] = puVar26[8];
              puVar26[6] = 0;
              puVar26[7] = 0;
              puVar26[8] = 0;
              param_1 = (long *******)puVar26[9];
              puVar28[10] = puVar26[10];
              puVar28[9] = param_1;
              puVar26[9] = 0;
              puVar26[10] = 0;
              puVar26 = puVar26 + 0xb;
              puVar28 = puVar28 + 0xb;
            } while (puVar26 != puVar3);
            do {
              FUN_10a559634(puVar45);
              puVar45 = puVar45 + 0xb;
            } while (puVar45 != puVar3);
            puVar45 = (undefined8 *)*plVar41;
          }
          *(undefined8 **)(param_4 + 0xa0) = puVar1;
          *(undefined8 **)(param_4 + 0xa8) = puVar42 + uVar48 * 0xb;
          *(long **)(param_4 + 0xb0) = plVar50 + uVar21 * 0xb;
          if (puVar45 != (undefined8 *)0x0) {
            __ZdlPv(puVar45);
            uVar53 = (undefined4)uStack_1a8;
            uVar58 = uStack_1a8._4_4_;
            goto joined_r0x00010ab47dbc;
          }
        }
        else {
          puVar42 = puVar26 + uVar48 * 0xb;
          param_1 = (long *******)0x0;
          do {
            puVar26[1] = 0;
            *puVar26 = 0;
            puVar26[3] = 0;
            puVar26[2] = 0;
            puVar26[4] = 0;
            puVar26[5] = 0x28cd94bfde;
            puVar26[7] = 0;
            puVar26[6] = 0;
            puVar26[9] = 0;
            puVar26[8] = 0;
            puVar26[10] = 0;
            puVar26 = puVar26 + 0xb;
          } while (puVar26 != puVar42);
          *(undefined8 **)(param_4 + 0xa8) = puVar42;
        }
LAB_10ab47db0:
        uVar53 = (undefined4)uStack_1a8;
        uVar58 = uStack_1a8._4_4_;
      }
      else {
        if (bVar9) goto LAB_10ab47db0;
        puVar42 = (undefined8 *)(lVar31 + (long)iVar10 * 0x58);
        while (puVar26 != puVar42) {
          puVar26 = puVar26 + -0xb;
          FUN_10a559634(puVar26);
        }
        *(undefined8 **)(param_4 + 0xa8) = puVar42;
        uVar53 = (undefined4)uStack_1a8;
        uVar58 = uStack_1a8._4_4_;
      }
joined_r0x00010ab47dbc:
      if (iVar10 != 0) {
        uStack_1a8 = (long *******)CONCAT44(uVar58,uVar53);
        uVar48 = 0;
        do {
          uVar53 = SUB84(param_1,0);
          (**(code **)(*param_5 + 0x218))(param_5);
          lVar31 = *(long *)(param_4 + 0xa0);
          uVar20 = (*(long *)(param_4 + 0xa8) - lVar31 >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
          (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c4a470);
          puVar23 = (undefined4 *)(lVar31 + uVar48 * 0x58);
          *puVar23 = uVar53;
          (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c4a490);
          puVar23[1] = uVar53;
          plVar41 = param_5;
          (**(code **)(*param_5 + 0x30))(param_5,&PTR_DAT_110c4a4b0);
          puVar23[2] = (int)plVar41;
          (**(code **)(*param_5 + 0xa0))(&uStack_1a8,param_5,&PTR_DAT_110c4a4d0);
          uStack_f8 = (long *******)CONCAT44(uStack_19c,uStack_1a0);
          ppppppplStack_100 = uStack_1a8;
          ppppppplStack_f0 = (long *******)CONCAT44(iStack_194,uStack_198);
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_198 = 0;
          iStack_194 = 0;
          uStack_1a8._0_4_ = 0;
          uStack_1a8._4_4_ = 0;
          pppppplStack_e8 = (long ******)0x0;
          func_0x000107c2b080(&ppppppplStack_100);
          if (*(char *)((long)puVar23 + 0x27) < '\0') {
            __ZdlPv(*(undefined8 *)(puVar23 + 4));
          }
          ppppppplVar54 = ppppppplStack_100;
          *(long ********)(puVar23 + 8) = ppppppplStack_f0;
          *(long ********)(puVar23 + 6) = uStack_f8;
          *(long ********)(puVar23 + 4) = ppppppplStack_100;
          ppppppplStack_f0 = (long *******)((ulong)ppppppplStack_f0 & 0xffffffffffffff);
          ppppppplStack_100 = (long *******)((ulong)ppppppplStack_100 & 0xffffffffffffff00);
          *(long *******)(puVar23 + 10) = pppppplStack_e8;
          if (iStack_194 < 0) {
            __ZdlPv(CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8));
          }
          uVar19 = *(uint *)(param_4 + 0x110);
          if (uVar19 != 0xffffffff) {
            uVar20 = (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar19 <= uVar20 && uVar20 - uVar19 != 0) {
              bVar9 = *(long *)(param_4 + 0xf8) == 0;
              goto LAB_10ab47f44;
            }
LAB_10ab49b34:
            FUN_10ab725fc();
            uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
            goto LAB_10ab49c48;
          }
          bVar9 = true;
LAB_10ab47f44:
          uVar19 = *(uint *)(param_4 + 0x118);
          if (uVar19 == 0xffffffff) {
            lStack_1c0 = 0;
          }
          else {
            uVar20 = (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar20 < uVar19 || uVar20 - uVar19 == 0) goto LAB_10ab49b34;
            lStack_1c0 = *(long *)(param_4 + 0xf8) + (ulong)uVar19 * 0x38;
          }
          uVar19 = *(uint *)(param_4 + 0x114);
          if (uVar19 == 0xffffffff) {
            lStack_1c8 = 0;
          }
          else {
            uVar20 = (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) *
                     0x6db6db6db6db6db7;
            if (uVar20 < uVar19 || uVar20 - uVar19 == 0) goto LAB_10ab49b34;
            lStack_1c8 = *(long *)(param_4 + 0xf8) + (ulong)uVar19 * 0x38;
          }
          plVar41 = param_5;
          (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a4f0);
          if ((int)plVar41 != 0) {
            (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a4f0);
            plVar41 = param_5;
            (**(code **)(*param_5 + 0x208))();
            ppppppplVar59 = (long *******)(puVar23 + 0xc);
            pppppplVar44 = *ppppppplVar59;
            pppppplVar14 = *(long *******)(puVar23 + 0xe);
            iVar10 = (int)plVar41;
            uVar20 = (ulong)iVar10;
            uVar21 = (long)pppppplVar14 - (long)pppppplVar44 >> 5;
            if (uVar21 < uVar20) {
              uVar21 = uVar20 - uVar21;
              if ((ulong)(*(long *)(puVar23 + 0x10) - (long)pppppplVar14 >> 5) < uVar21) {
                if (iVar10 < 0) {
                  FUN_10a559434();
                  uStack_1a8 = (long *******)CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8);
                  goto LAB_10ab49c48;
                }
                uVar29 = *(long *)(puVar23 + 0x10) - (long)pppppplVar44;
                uVar27 = (long)uVar29 >> 4;
                if (uVar27 <= uVar20) {
                  uVar27 = uVar20;
                }
                if (0x7fffffffffffffdf < uVar29) {
                  uVar27 = 0x7ffffffffffffff;
                }
                ppppppplVar13 = ppppppplVar59;
                FUN_10a559448();
                puVar18 = (undefined *)
                          ((long)ppppppplVar13 + ((long)pppppplVar14 - (long)pppppplVar44));
                _bzero(puVar18,uVar21 * 0x20);
                puVar39 = *(undefined4 **)(puVar23 + 0xc);
                puVar4 = *(undefined4 **)(puVar23 + 0xe);
                ppppppplVar40 = (long *******)((long)puVar39 + ((long)puVar18 - (long)puVar4));
                uStack_f8 = (long *******)&ppppppplStack_118;
                ppppppplStack_f0 = (long *******)&uStack_1a8;
                uStack_1a8 = ppppppplVar40;
                puVar30 = puVar39;
                ppppppplStack_118 = ppppppplVar40;
                ppppppplStack_100 = ppppppplVar59;
                if (puVar4 == puVar39) {
                  pppppplStack_e8 = (long ******)CONCAT71(pppppplStack_e8._1_7_,1);
                }
                else {
                  do {
                    *(undefined4 *)uStack_1a8 = *puVar30;
                    uStack_1a8[2] = (long ******)0x0;
                    uStack_1a8[3] = (long ******)0x0;
                    uStack_1a8[1] = (long ******)0x0;
                    ppppppplVar54 = *(long ********)(puVar30 + 2);
                    uStack_1a8[2] = *(long *******)(puVar30 + 4);
                    uStack_1a8[1] = (long ******)ppppppplVar54;
                    uStack_1a8[3] = *(long *******)(puVar30 + 6);
                    *(undefined8 *)(puVar30 + 2) = 0;
                    *(undefined8 *)(puVar30 + 4) = 0;
                    *(undefined8 *)(puVar30 + 6) = 0;
                    puVar30 = puVar30 + 8;
                    uStack_1a8 = uStack_1a8 + 4;
                  } while (puVar30 != puVar4);
                  pppppplStack_e8 = (long ******)CONCAT71(pppppplStack_e8._1_7_,1);
                  do {
                    if (*(long *)(puVar39 + 2) != 0) {
                      *(long *)(puVar39 + 4) = *(long *)(puVar39 + 2);
                      __ZdlPv();
                    }
                    puVar39 = puVar39 + 8;
                  } while (puVar39 != puVar4);
                }
                FUN_10a559530(&ppppppplStack_100);
                lVar31 = *(long *)(puVar23 + 0xc);
                *(long ********)(puVar23 + 0xc) = ppppppplVar40;
                *(undefined **)(puVar23 + 0xe) = puVar18 + uVar21 * 0x20;
                *(long ********)(puVar23 + 0x10) = ppppppplVar13 + uVar27 * 4;
                if (lVar31 != 0) {
                  __ZdlPv();
                }
              }
              else {
                _bzero(pppppplVar14,uVar21 * 0x20);
                *(long *******)(puVar23 + 0xe) = pppppplVar14 + uVar21 * 4;
              }
            }
            else if (uVar20 < uVar21) {
              for (; pppppplVar14 != pppppplVar44 + uVar20 * 4; pppppplVar14 = pppppplVar14 + -4) {
                if (pppppplVar14[-3] != (long *****)0x0) {
                  pppppplVar14[-2] = pppppplVar14[-3];
                  __ZdlPv();
                }
              }
              *(long *******)(puVar23 + 0xe) = pppppplVar44 + uVar20 * 4;
            }
            if (iVar10 != 0) {
              uVar20 = 0;
              do {
                (**(code **)(*param_5 + 0x218))(param_5,uVar20);
                (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c4aa50);
                if ((ulong)(*(long *)(puVar23 + 0xe) - *(long *)(puVar23 + 0xc) >> 5) <= uVar20)
                goto LAB_10ab49c48;
                *(int *)(*(long *)(puVar23 + 0xc) + uVar20 * 0x20) = (int)ppppppplVar54;
                if (*(uint *)(param_4 + 0x1a8) < 2) {
                  FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_s_attributes_110c4a510);
                  if ((ulong)(*(long *)(puVar23 + 0xe) - *(long *)(puVar23 + 0xc) >> 5) <= uVar20)
                  goto LAB_10ab49c48;
                  lVar31 = *(long *)(puVar23 + 0xc) + uVar20 * 0x20;
                  plVar50 = (long *)(lVar31 + 8);
                  if (*plVar50 != 0) {
                    *(long *)(lVar31 + 0x10) = *plVar50;
                    __ZdlPv();
                    *plVar50 = 0;
                    *(undefined8 *)(lVar31 + 0x10) = 0;
                    *(undefined8 *)(lVar31 + 0x18) = 0;
                  }
                  *(long ********)(lVar31 + 0x10) = uStack_f8;
                  *plVar50 = (long)ppppppplStack_100;
                  *(long ********)(lVar31 + 0x18) = ppppppplStack_f0;
                  ppppppplVar54 = ppppppplStack_100;
                }
                else {
                  if (!bVar9) {
                    FUN_10ab6e728();
                    if (*(long *)(puVar23 + 10) == lRam00000001138356d8) {
                      lVar31 = *(long *)(puVar23 + 0xc);
                      if (uVar20 < (ulong)(*(long *)(puVar23 + 0xe) - lVar31 >> 5)) {
                        FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_s_attributes_110c4a510);
                        ppppppplVar59 = ppppppplStack_100;
                        lVar31 = lVar31 + uVar20 * 0x20;
                        uVar43 = (long)uStack_f8 - (long)ppppppplStack_100;
                        uVar21 = uVar43 / 6;
                        uVar27 = (uVar21 * 2 + uVar43 / 6) * 4;
                        lVar22 = *(long *)(lVar31 + 8);
                        uVar29 = *(long *)(lVar31 + 0x10) - lVar22;
                        if (uVar27 < uVar29 || uVar27 - uVar29 == 0) {
                          if (uVar27 < uVar29) {
                            *(ulong *)(lVar31 + 0x10) = lVar22 + uVar27;
                          }
                        }
                        else {
                          func_0x000107c27d58(lVar31 + 8,uVar27 - uVar29);
                          lVar22 = *(long *)(lVar31 + 8);
                        }
                        if (5 < uVar43) {
                          if (uVar21 < 2) {
                            uVar21 = 1;
                          }
                          puVar30 = (undefined4 *)(lVar22 + 8);
                          do {
                            FUN_10ab620b8(ppppppplVar59);
                            puVar30[-2] = (int)ppppppplVar54;
                            puVar30[-1] = (int)param_2;
                            *puVar30 = (int)param_3;
                            ppppppplVar59 = (long *******)((long)ppppppplVar59 + 6);
                            uVar21 = uVar21 - 1;
                            puVar30 = puVar30 + 3;
                          } while (uVar21 != 0);
                        }
                        if (ppppppplStack_100 != (long *******)0x0) {
                          uStack_f8 = ppppppplStack_100;
                          __ZdlPv();
                        }
                        goto LAB_10ab48698;
                      }
                      goto LAB_10ab49c48;
                    }
                  }
                  if (lStack_1c0 == 0) {
LAB_10ab4835c:
                    if (lStack_1c8 != 0) {
                      FUN_10ab6e9d8();
                      if (*(long *)(puVar23 + 10) == lRam0000000113835758) {
                        FUN_10ab4c544(&uStack_1a8,param_4,lStack_1c8);
                        ppppppplVar59 = uStack_1a8;
                        uVar19 = *(uint *)(param_4 + 0xf0);
                        if (uVar19 == 0) {
                          uVar21 = 0;
                        }
                        else {
                          uVar21 = 0;
                          if ((ulong)uVar19 != 0) {
                            uVar21 = (ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10))
                                     / (ulong)uVar19;
                          }
                          uVar21 = uVar21 & 0xffffffff;
                        }
                        lVar31 = *(long *)(puVar23 + 0xc);
                        if (uVar20 < (ulong)(*(long *)(puVar23 + 0xe) - lVar31 >> 5)) {
                          FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_s_attributes_110c4a510);
                          ppppppplVar40 = ppppppplStack_100;
                          uVar29 = (long)uStack_f8 - (long)ppppppplStack_100;
                          uVar27 = uVar29 >> 2;
                          if ((ppppppplVar59 == (long *******)0x0) || (uVar27 <= uVar21)) {
                            lVar31 = lVar31 + uVar20 * 0x20;
                            uVar21 = uVar27 * 0xc;
                            lVar22 = *(long *)(lVar31 + 8);
                            uVar43 = *(long *)(lVar31 + 0x10) - lVar22;
                            if (uVar21 < uVar43 || uVar21 - uVar43 == 0) {
                              if (uVar21 < uVar43) {
                                *(ulong *)(lVar31 + 0x10) = lVar22 + uVar21;
                              }
                            }
                            else {
                              func_0x000107c27d58(lVar31 + 8,uVar21 - uVar43);
                              lVar22 = *(long *)(lVar31 + 8);
                            }
                            if (3 < uVar29) {
                              uVar21 = 0;
                              if (uVar27 < 2) {
                                uVar27 = 1;
                              }
                              pfVar24 = (float *)(lVar22 + 8);
                              do {
                                fVar57 = SUB84(param_3,0);
                                uVar19 = *(uint *)((long)ppppppplVar40 + uVar21 * 4);
                                fVar52 = ((float)(uVar19 & 0x7fff) / 32767.0) * 2.0 + -1.0;
                                fVar63 = ((float)(uVar19 >> 0xf & 0x7fff) / 32767.0) * 2.0 + -1.0;
                                fVar60 = fVar63 * fVar63 + fVar52 * fVar52;
                                ppppppplVar54 = (long *******)(ulong)(uint)fVar60;
                                fVar56 = 0.0;
                                if (fVar60 < 1.0) {
                                  fVar60 = SQRT(1.0 - fVar60);
                                  ppppppplVar54 = (long *******)(ulong)(uint)fVar60;
                                  param_2 = (long *******)(ulong)(uint)-fVar60;
                                  fVar56 = -fVar60;
                                  if ((uVar19 & 0x40000000) != 0) {
                                    fVar56 = fVar60;
                                  }
                                }
                                fVar60 = SUB84(ppppppplVar54,0);
                                fVar64 = SUB84(param_2,0);
                                if (ppppppplVar59 == (long *******)0x0) {
                                  pfVar24[-2] = fVar52;
                                  pfVar24[-1] = fVar63;
                                  *pfVar24 = fVar56;
                                }
                                else {
                                  (*(code *)(*ppppppplVar59)[2])(ppppppplVar59,uVar21);
                                  param_2 = (long *******)(ulong)(uint)(fVar63 - fVar64);
                                  param_3 = (long ******)(ulong)(uint)(fVar56 - fVar57);
                                  ppppppplVar54 = (long *******)(ulong)(uint)(fVar52 - fVar60);
                                  pfVar24[-2] = fVar52 - fVar60;
                                  pfVar24[-1] = fVar63 - fVar64;
                                  *pfVar24 = fVar56 - fVar57;
                                }
                                uVar21 = uVar21 + 1;
                                pfVar24 = pfVar24 + 3;
                              } while (uVar27 != uVar21);
                            }
                            goto LAB_10ab48664;
                          }
                          FUN_10a00946c(&UNK_10f6921f0);
                        }
                        goto LAB_10ab49c48;
                      }
                    }
                  }
                  else {
                    FUN_10ab6eb18();
                    if (*(long *)(puVar23 + 10) != lRam0000000113835798) goto LAB_10ab4835c;
                    func_0x00010ab4c84c(&uStack_1a8,param_4,lStack_1c0);
                    ppppppplVar59 = uStack_1a8;
                    uVar19 = *(uint *)(param_4 + 0xf0);
                    if (uVar19 == 0) {
                      uVar21 = 0;
                    }
                    else {
                      uVar21 = 0;
                      if ((ulong)uVar19 != 0) {
                        uVar21 = (ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                                 (ulong)uVar19;
                      }
                      uVar21 = uVar21 & 0xffffffff;
                    }
                    lVar31 = *(long *)(puVar23 + 0xc);
                    if ((ulong)(*(long *)(puVar23 + 0xe) - lVar31 >> 5) <= uVar20)
                    goto LAB_10ab49c48;
                    FUN_10ab4a104(&ppppppplStack_100,param_5,&PTR_s_attributes_110c4a510);
                    ppppppplVar40 = ppppppplStack_100;
                    uVar29 = (long)uStack_f8 - (long)ppppppplStack_100;
                    uVar27 = uVar29 >> 2;
                    if ((ppppppplVar59 != (long *******)0x0) && (uVar21 < uVar27)) {
                      FUN_10a00946c(&UNK_10f6921f0);
                      goto LAB_10ab49c48;
                    }
                    lVar31 = lVar31 + uVar20 * 0x20;
                    uVar21 = uVar27 * 0x10;
                    lVar22 = *(long *)(lVar31 + 8);
                    uVar43 = *(long *)(lVar31 + 0x10) - lVar22;
                    if (uVar21 < uVar43 || uVar21 - uVar43 == 0) {
                      if (uVar21 < uVar43) {
                        *(ulong *)(lVar31 + 0x10) = lVar22 + uVar21;
                      }
                    }
                    else {
                      func_0x000107c27d58(lVar31 + 8,uVar21 - uVar43);
                      lVar22 = *(long *)(lVar31 + 8);
                    }
                    if (3 < uVar29) {
                      uVar21 = 0;
                      if (uVar27 < 2) {
                        uVar27 = 1;
                      }
                      pfVar24 = (float *)(lVar22 + 8);
                      do {
                        fVar57 = SUB84(param_3,0);
                        uVar19 = *(uint *)((long)ppppppplVar40 + uVar21 * 4);
                        fVar52 = ((float)(uVar19 & 0x7fff) / 32767.0) * 2.0 + -1.0;
                        fVar63 = ((float)(uVar19 >> 0xf & 0x7fff) / 32767.0) * 2.0 + -1.0;
                        fVar56 = fVar63 * fVar63 + fVar52 * fVar52;
                        fVar60 = 0.0;
                        if (fVar56 < 1.0) {
                          fVar56 = SQRT(1.0 - fVar56);
                          param_2 = (long *******)(ulong)(uint)-fVar56;
                          fVar60 = -fVar56;
                          if ((uVar19 & 0x40000000) != 0) {
                            fVar60 = fVar56;
                          }
                        }
                        fVar64 = SUB84(param_2,0);
                        if (ppppppplVar59 == (long *******)0x0) {
                          fVar56 = -1.0;
                          if (0x7fffffff < uVar19) {
                            fVar56 = 1.0;
                          }
                          pfVar24[-2] = fVar52;
                          pfVar24[-1] = fVar63;
                          *pfVar24 = fVar60;
                          pfVar24[1] = fVar56;
                        }
                        else {
                          (*(code *)(*ppppppplVar59)[2])(ppppppplVar59,uVar21);
                          param_2 = (long *******)(ulong)(uint)(fVar63 - fVar64);
                          param_3 = (long ******)(ulong)(uint)(fVar60 - fVar57);
                          fVar56 = fVar52 - fVar56;
                          pfVar24[-2] = fVar56;
                          pfVar24[-1] = fVar63 - fVar64;
                          *pfVar24 = fVar60 - fVar57;
                        }
                        ppppppplVar54 = (long *******)(ulong)(uint)fVar56;
                        uVar21 = uVar21 + 1;
                        pfVar24 = pfVar24 + 4;
                      } while (uVar27 != uVar21);
                    }
LAB_10ab48664:
                    if (ppppppplStack_100 != (long *******)0x0) {
                      uStack_f8 = ppppppplStack_100;
                      __ZdlPv();
                    }
                    if (ppppppplVar59 != (long *******)0x0) {
                      (*(code *)(*ppppppplVar59)[1])(ppppppplVar59);
                    }
                  }
                }
LAB_10ab48698:
                (**(code **)(*param_5 + 0x220))(param_5);
                uVar20 = uVar20 + 1;
              } while (uVar20 != ((ulong)plVar41 & 0xffffffff));
            }
            (**(code **)(*param_5 + 0x220))(param_5);
          }
          ppppppplStack_100 = (long *******)0x0;
          uStack_f8 = (long *******)0x0;
          ppppppplStack_f0 = (long *******)0x0;
          lVar31 = *(long *)(puVar23 + 0xc);
          if (*(long *)(puVar23 + 0xe) != lVar31) {
            lVar22 = 0;
            uVar20 = 0;
            do {
              uVar53 = *(undefined4 *)(lVar31 + lVar22);
              if (uStack_f8 < ppppppplStack_f0) {
                ppppppplVar59 = uStack_f8 + 1;
                *(undefined4 *)uStack_f8 = uVar53;
                *(int *)((long)uStack_f8 + 4) = (int)uVar20;
              }
              else {
                lVar31 = (long)uStack_f8 - (long)ppppppplStack_100;
                uVar21 = (lVar31 >> 3) + 1;
                if (uVar21 >> 0x3d != 0) {
                  FUN_10a107b28();
                  goto LAB_10ab49c48;
                }
                uVar27 = (long)ppppppplStack_f0 - (long)ppppppplStack_100 >> 2;
                if (uVar27 <= uVar21) {
                  uVar27 = uVar21;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)ppppppplStack_f0 - (long)ppppppplStack_100))
                {
                  uVar27 = 0x1fffffffffffffff;
                }
                ppppppplVar54 = (long *******)&ppppppplStack_100;
                FUN_10a107b3c();
                puVar30 = (undefined4 *)((long)ppppppplVar54 + lVar31);
                *puVar30 = uVar53;
                puVar30[1] = (int)uVar20;
                ppppppplVar59 = (long *******)(puVar30 + 2);
                ppppppplVar40 =
                     (long *******)((long)puVar30 - ((long)uStack_f8 - (long)ppppppplStack_100));
                _memcpy(ppppppplVar40);
                bVar9 = ppppppplStack_100 != (long *******)0x0;
                ppppppplStack_100 = ppppppplVar40;
                ppppppplStack_f0 = ppppppplVar54 + uVar27;
                if (bVar9) {
                  uStack_f8 = ppppppplVar59;
                  __ZdlPv();
                }
              }
              uVar20 = uVar20 + 1;
              lVar31 = *(long *)(puVar23 + 0xc);
              lVar22 = lVar22 + 0x20;
              uStack_f8 = ppppppplVar59;
            } while (uVar20 < (ulong)(*(long *)(puVar23 + 0xe) - lVar31 >> 5));
          }
          puVar26 = (undefined8 *)0x50;
          __Znwm();
          puVar26[1] = 0;
          puVar26[2] = 0;
          *puVar26 = &PTR_DAT_110c4b3c8;
          param_1 = (long *******)0x0;
          puVar26[5] = 0;
          puVar26[4] = 0;
          puVar26[7] = 0;
          puVar26[6] = 0;
          puVar26[9] = 0;
          puVar26[8] = 0;
          puVar26[3] = &PTR_SUB_110c4b418;
          plVar41 = *(long **)(puVar23 + 0x14);
          *(undefined8 **)(puVar23 + 0x12) = puVar26 + 3;
          *(undefined8 **)(puVar23 + 0x14) = puVar26;
          if (plVar41 != (long *)0x0) {
            plVar50 = plVar41 + 1;
            do {
              lVar31 = *plVar50;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar50,0x10);
              if (bVar9) {
                *plVar50 = lVar31 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plVar41 + 0x10))(plVar41);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
            }
          }
          (**(code **)(**(long **)(puVar23 + 0x12) + 0x18))
                    (*(long **)(puVar23 + 0x12),&ppppppplStack_100);
          if (ppppppplStack_100 != (long *******)0x0) {
            uStack_f8 = ppppppplStack_100;
            __ZdlPv();
          }
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar48 = uVar48 + 1;
        } while (uVar48 != ((ulong)plVar11 & 0xffffffff));
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    plVar11 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a110);
    uVar53 = SUB84(param_1,0);
    if ((int)plVar11 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a110);
      plVar11 = param_5;
      (**(code **)(*param_5 + 0x208))();
      iVar10 = (int)plVar11;
      uVar20 = (ulong)iVar10;
      lVar22 = *(long *)(param_4 + 0xb8);
      lVar31 = *(long *)(param_4 + 0xc0);
      lVar46 = lVar31 - lVar22;
      bVar9 = uVar20 < (ulong)((lVar46 >> 2) * 0x6db6db6db6db6db7);
      uVar48 = uVar20 + (lVar46 >> 2) * -0x6db6db6db6db6db7;
      if (bVar9 || uVar48 == 0) {
        if (bVar9) {
          lVar31 = lVar22 + (long)iVar10 * 0x1c;
          goto LAB_10ab48a08;
        }
      }
      else if ((ulong)((*(long *)(param_4 + 200) - lVar31 >> 2) * 0x6db6db6db6db6db7) < uVar48) {
        if (iVar10 < 0) {
          FUN_10ab552d4();
          goto LAB_10ab49c48;
        }
        lVar31 = *(long *)(param_4 + 200) - lVar22 >> 2;
        uVar21 = lVar31 * -0x2492492492492492;
        if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
          uVar21 = uVar20;
        }
        if (0x492492492492491 < (ulong)(lVar31 * 0x6db6db6db6db6db7)) {
          uVar21 = 0x924924924924924;
        }
        if (0x924924924924924 < uVar21) {
          func_0x000109ffded8();
          goto LAB_10ab49c48;
        }
        lVar31 = uVar21 * 0x1c;
        __Znwm();
        lVar49 = ((uVar48 * 0x1c - 0x1c) / 0x1c) * 0x1c + 0x1c;
        _bzero(lVar31 + lVar46,lVar49);
        _memcpy(lVar31,lVar22,lVar46);
        *(long *)(param_4 + 0xb8) = lVar31;
        *(long *)(param_4 + 0xc0) = lVar31 + lVar46 + lVar49;
        *(ulong *)(param_4 + 200) = lVar31 + uVar21 * 0x1c;
        if (lVar22 != 0) {
          __ZdlPv(lVar22);
        }
      }
      else {
        lVar22 = ((uVar48 * 0x1c - 0x1c) / 0x1c) * 0x1c + 0x1c;
        _bzero(lVar31,lVar22);
        lVar31 = lVar31 + lVar22;
LAB_10ab48a08:
        *(long *)(param_4 + 0xc0) = lVar31;
      }
      uVar53 = SUB84(param_1,0);
      if (iVar10 != 0) {
        lVar31 = 0;
        uVar48 = 0;
        do {
          (**(code **)(*param_5 + 0x218))(param_5,uVar48);
          (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c4aa50);
          uVar20 = (*(long *)(param_4 + 0xc0) - *(long *)(param_4 + 0xb8) >> 2) * 0x6db6db6db6db6db7
          ;
          if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
          *(int *)(*(long *)(param_4 + 0xb8) + lVar31) = (int)param_1;
          (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a130);
          uVar20 = (*(long *)(param_4 + 0xc0) - *(long *)(param_4 + 0xb8) >> 2) * 0x6db6db6db6db6db7
          ;
          if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
          lVar22 = *(long *)(param_4 + 0xb8) + lVar31;
          *(int *)(lVar22 + 4) = (int)param_1;
          *(int *)(lVar22 + 8) = (int)param_2;
          *(int *)(lVar22 + 0xc) = (int)param_3;
          (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a150);
          uVar20 = (*(long *)(param_4 + 0xc0) - *(long *)(param_4 + 0xb8) >> 2) * 0x6db6db6db6db6db7
          ;
          if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
          lVar22 = *(long *)(param_4 + 0xb8) + lVar31;
          *(int *)(lVar22 + 0x10) = (int)param_1;
          *(int *)(lVar22 + 0x14) = (int)param_2;
          *(int *)(lVar22 + 0x18) = (int)param_3;
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar53 = SUB84(param_1,0);
          uVar48 = uVar48 + 1;
          lVar31 = lVar31 + 0x1c;
        } while (((ulong)plVar11 & 0xffffffff) * 0x1c - lVar31 != 0);
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4aa70);
    *(undefined4 *)(param_4 + 0x144) = uVar53;
    *(int *)(param_4 + 0x148) = (int)param_2;
    *(int *)(param_4 + 0x14c) = (int)param_3;
    (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4aa90);
    *(undefined4 *)(param_4 + 0x138) = uVar53;
    *(int *)(param_4 + 0x13c) = (int)param_2;
    *(int *)(param_4 + 0x140) = (int)param_3;
    ppppppplStack_100 = (long *******)0x0;
    (**(code **)(*param_5 + 0xe0))(param_5,&PTR_DAT_110c4a170,&ppppppplStack_100);
    *(undefined4 *)(param_4 + 0x150) = uVar53;
    *(int *)(param_4 + 0x154) = (int)param_2;
    ppppppplVar54 = (long *******)NEON_fmov(0x3f800000,4);
    ppppppplStack_100 = ppppppplVar54;
    (**(code **)(*param_5 + 0xe0))(param_5,&PTR_DAT_110c4a190,&ppppppplStack_100);
    *(int *)(param_4 + 0x158) = (int)ppppppplVar54;
    *(int *)(param_4 + 0x15c) = (int)param_2;
    plVar11 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a1b0);
    if ((int)plVar11 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a1b0);
      plVar11 = param_5;
      (**(code **)(*param_5 + 0x208))();
      pppppplVar44 = (long ******)(param_4 + 0x58);
      ppppplVar32 = *pppppplVar44;
      ppppplVar47 = *(long ******)(param_4 + 0x60);
      uVar20 = (ulong)plVar11 & 0xffffffff;
      lVar31 = (long)ppppplVar47 - (long)ppppplVar32 >> 5;
      bVar9 = uVar20 < (ulong)(lVar31 * -0x5555555555555555);
      uVar48 = uVar20 + lVar31 * 0x5555555555555555;
      if (bVar9 || uVar48 == 0) {
        if (bVar9) {
          for (; ppppplVar47 != ppppplVar32 + uVar20 * 0xc; ppppplVar47 = ppppplVar47 + -0xc) {
          }
          *(long ******)(param_4 + 0x60) = ppppplVar32 + uVar20 * 0xc;
        }
      }
      else if ((ulong)((*(long *)(param_4 + 0x68) - (long)ppppplVar47 >> 5) * -0x5555555555555555) <
               uVar48) {
        lVar31 = *(long *)(param_4 + 0x68) - (long)ppppplVar32 >> 5;
        uVar21 = lVar31 * 0x5555555555555556;
        if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
          uVar21 = uVar20;
        }
        if (0x155555555555554 < (ulong)(lVar31 * -0x5555555555555555)) {
          uVar21 = 0x2aaaaaaaaaaaaaa;
        }
        pppppplVar14 = pppppplVar44;
        pppppplStack_e0 = pppppplVar44;
        FUN_10a0d8280();
        uStack_f8 = (long *******)((long)pppppplVar14 + ((long)ppppplVar47 - (long)ppppplVar32));
        puVar42 = uStack_f8 + (uVar48 & 0xffffffff) * 0xc;
        ppppppplVar54 = (long *******)0x3f800000;
        param_2 = (long *******)0x0;
        param_3 = (long ******)0x0;
        puVar26 = uStack_f8;
        do {
          *puVar26 = 0;
          puVar26[1] = 0;
          puVar26[2] = 0;
          puVar26[3] = 0x28cd94bfde;
          puVar26[5] = 0;
          puVar26[4] = 0x3f800000;
          puVar26[7] = 0;
          puVar26[6] = 0x3f80000000000000;
          puVar26[9] = 0x3f800000;
          puVar26[8] = 0;
          puVar26[0xb] = 0x3f80000000000000;
          puVar26[10] = 0;
          puVar26 = puVar26 + 0xc;
        } while (puVar26 != puVar42);
        lVar31 = (long)uStack_f8 + (*(long *)(param_4 + 0x58) - *(long *)(param_4 + 0x60));
        ppppppplStack_100 = (long *******)pppppplVar14;
        ppppppplStack_f0 = (long *******)puVar42;
        pppppplStack_e8 = pppppplVar14 + uVar21 * 0xc;
        func_0x00010a0d82c4(pppppplVar44,*(long *)(param_4 + 0x58),*(long *)(param_4 + 0x60),lVar31)
        ;
        ppppppplStack_100 = *(long ********)(param_4 + 0x58);
        *(long *)(param_4 + 0x58) = lVar31;
        *(undefined8 **)(param_4 + 0x60) = puVar42;
        pppppplStack_e8 = *(long *******)(param_4 + 0x68);
        *(long *******)(param_4 + 0x68) = pppppplVar14 + uVar21 * 0xc;
        uStack_f8 = ppppppplStack_100;
        ppppppplStack_f0 = ppppppplStack_100;
        func_0x00010a0d8404(&ppppppplStack_100);
      }
      else {
        ppppplVar32 = ppppplVar47 + (uVar48 & 0xffffffff) * 0xc;
        ppppppplVar54 = (long *******)0x3f800000;
        param_2 = (long *******)0x0;
        param_3 = (long ******)0x0;
        do {
          *ppppplVar47 = (long ****)0x0;
          ppppplVar47[1] = (long ****)0x0;
          ppppplVar47[2] = (long ****)0x0;
          ppppplVar47[3] = (long ****)0x28cd94bfde;
          ppppplVar47[5] = (long ****)0x0;
          ppppplVar47[4] = (long ****)0x3f800000;
          ppppplVar47[7] = (long ****)0x0;
          ppppplVar47[6] = (long ****)0x3f80000000000000;
          ppppplVar47[9] = (long ****)0x3f800000;
          ppppplVar47[8] = (long ****)0x0;
          ppppplVar47[0xb] = (long ****)0x3f80000000000000;
          ppppplVar47[10] = (long ****)0x0;
          ppppplVar47 = ppppplVar47 + 0xc;
        } while (ppppplVar47 != ppppplVar32);
        *(long ******)(param_4 + 0x60) = ppppplVar32;
      }
      if ((int)plVar11 != 0) {
        lVar31 = 0;
        uVar48 = 0;
        do {
          (**(code **)(*param_5 + 0x218))(param_5,uVar48);
          lVar22 = *(long *)(param_4 + 0x58);
          uVar21 = (*(long *)(param_4 + 0x60) - lVar22 >> 5) * -0x5555555555555555;
          if (uVar21 < uVar48 || uVar21 - uVar48 == 0) goto LAB_10ab49c48;
          (**(code **)(*param_5 + 0xa0))(&uStack_1a8,param_5,&PTR_DAT_110c4a1d0);
          puVar26 = (undefined8 *)(lVar22 + lVar31);
          uStack_f8 = (long *******)CONCAT44(uStack_19c,uStack_1a0);
          ppppppplStack_100 = uStack_1a8;
          ppppppplStack_f0 = (long *******)CONCAT44(iStack_194,uStack_198);
          uStack_1a0 = 0;
          uStack_19c = 0;
          uStack_198 = 0;
          iStack_194 = 0;
          uStack_1a8._0_4_ = 0;
          uStack_1a8._4_4_ = 0;
          pppppplStack_e8 = (long ******)0x0;
          func_0x000107c2b080(&ppppppplStack_100);
          if (*(char *)((long)puVar26 + 0x17) < '\0') {
            __ZdlPv(*puVar26);
          }
          puVar26[2] = ppppppplStack_f0;
          puVar26[1] = uStack_f8;
          *puVar26 = ppppppplStack_100;
          ppppppplStack_f0 = (long *******)((ulong)ppppppplStack_f0 & 0xffffffffffffff);
          ppppppplStack_100 = (long *******)((ulong)ppppppplStack_100 & 0xffffffffffffff00);
          *(long *******)(lVar22 + lVar31 + 0x18) = pppppplStack_e8;
          if (iStack_194 < 0) {
            __ZdlPv(CONCAT44(uStack_1a8._4_4_,(undefined4)uStack_1a8));
          }
          uStack_19c = 0;
          uStack_198 = 0;
          uStack_1a8._4_4_ = 0;
          uStack_1a0 = 0;
          uStack_1a8._0_4_ = 0x3f800000;
          iStack_194 = 0x3f800000;
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_174 = 0;
          uStack_17c = 0;
          uStack_180 = 0x3f800000;
          uStack_16c = 0x3f800000;
          (**(code **)(*param_5 + 0x1b0))(&ppppppplStack_100,param_5,&PTR_DAT_110c4aab0,&uStack_1a8)
          ;
          lVar22 = lVar22 + lVar31;
          *(undefined8 *)(lVar22 + 0x48) = uStack_d8;
          *(long *******)(lVar22 + 0x40) = pppppplStack_e0;
          *(undefined8 *)(lVar22 + 0x58) = uStack_c8;
          *(undefined8 *)(lVar22 + 0x50) = uStack_d0;
          *(long ********)(lVar22 + 0x28) = uStack_f8;
          *(long ********)(lVar22 + 0x20) = ppppppplStack_100;
          *(long *******)(lVar22 + 0x38) = pppppplStack_e8;
          *(long ********)(lVar22 + 0x30) = ppppppplStack_f0;
          ppppppplVar54 = ppppppplStack_100;
          param_2 = ppppppplStack_f0;
          param_3 = pppppplStack_e0;
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar48 = uVar48 + 1;
          lVar31 = lVar31 + 0x60;
        } while (uVar20 * 0x60 - lVar31 != 0);
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    plVar11 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a1f0);
    if ((int)plVar11 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a1f0);
      plVar11 = param_5;
      (**(code **)(*param_5 + 0x208))();
      FUN_10ab4a274(param_4 + 0x70,(ulong)plVar11 & 0xffffffff);
      if ((int)plVar11 != 0) {
        lVar31 = 0;
        uVar48 = 0;
        do {
          (**(code **)(*param_5 + 0x218))(param_5,uVar48);
          lVar22 = *(long *)(param_4 + 0x70);
          uVar20 = (*(long *)(param_4 + 0x78) - lVar22 >> 3) * -0x5555555555555555;
          if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
          (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a210);
          puVar23 = (undefined4 *)(lVar22 + lVar31);
          *puVar23 = (int)ppppppplVar54;
          puVar23[1] = (int)param_2;
          puVar23[2] = (int)param_3;
          (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a230);
          puVar23[3] = (int)ppppppplVar54;
          puVar23[4] = (int)param_2;
          puVar23[5] = (int)param_3;
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar48 = uVar48 + 1;
          lVar31 = lVar31 + 0x18;
        } while (((ulong)plVar11 & 0xffffffff) * 0x18 - lVar31 != 0);
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    plVar11 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a250);
    if ((int)plVar11 != 0) {
      (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a250);
      plVar11 = param_5;
      (**(code **)(*param_5 + 0x208))();
      FUN_10ab4a3d8(param_4 + 0x88,(ulong)plVar11 & 0xffffffff);
      if ((int)plVar11 != 0) {
        uVar48 = 0;
        do {
          lVar31 = *(long *)(param_4 + 0x88);
          uVar20 = (*(long *)(param_4 + 0x90) - lVar31 >> 4) * -0x5555555555555555;
          if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
          (**(code **)(*param_5 + 0x218))(param_5,uVar48);
          plVar41 = param_5;
          (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a270);
          plVar50 = (long *)(lVar31 + uVar48 * 0x30);
          if ((int)plVar41 == 0) {
            plVar41 = param_5;
            (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a290);
            plVar15 = param_5;
            (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a2b0);
            ppppppplStack_100 = (long *******)CONCAT44((int)plVar15,(int)plVar41);
            uStack_f8 = (long *******)((ulong)uStack_f8 & 0xffffffff00000000);
            FUN_10a0d3a24(plVar50 + 3,&ppppppplStack_100,(long)&uStack_f8 + 4,1);
          }
          else {
            (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a270);
            plVar41 = param_5;
            (**(code **)(*param_5 + 0x208))();
            FUN_10ab4a45c(plVar50 + 3,(ulong)plVar41 & 0xffffffff);
            if ((int)plVar41 != 0) {
              lVar31 = 0;
              uVar20 = 0;
              do {
                (**(code **)(*param_5 + 0x218))(param_5,uVar20);
                plVar15 = param_5;
                (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a290);
                uVar21 = (plVar50[4] - plVar50[3] >> 2) * -0x5555555555555555;
                if (uVar21 < uVar20 || uVar21 - uVar20 == 0) goto LAB_10ab49c48;
                *(int *)(plVar50[3] + lVar31) = (int)plVar15;
                plVar15 = param_5;
                (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a2b0);
                uVar21 = (plVar50[4] - plVar50[3] >> 2) * -0x5555555555555555;
                if (uVar21 < uVar20 || uVar21 - uVar20 == 0) goto LAB_10ab49c48;
                *(int *)(plVar50[3] + lVar31 + 4) = (int)plVar15;
                plVar15 = param_5;
                (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a2d0);
                uVar21 = (plVar50[4] - plVar50[3] >> 2) * -0x5555555555555555;
                if (uVar21 < uVar20 || uVar21 - uVar20 == 0) goto LAB_10ab49c48;
                *(int *)(plVar50[3] + lVar31 + 8) = (int)plVar15;
                (**(code **)(*param_5 + 0x220))(param_5);
                uVar20 = uVar20 + 1;
                lVar31 = lVar31 + 0xc;
              } while (((ulong)plVar41 & 0xffffffff) * 0xc - lVar31 != 0);
            }
            (**(code **)(*param_5 + 0x220))(param_5);
          }
          (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a2f0);
          plVar41 = param_5;
          (**(code **)(*param_5 + 0x208))();
          if (((int)plVar41 == 0) && (0x71 < (int)param_5[0xd])) {
            FUN_10a00946c(&UNK_10f692818);
            goto LAB_10ab49c48;
          }
          func_0x0001074287b0(plVar50,(ulong)plVar41 & 0xffffffff);
          if ((int)plVar41 != 0) {
            uVar20 = 0;
            do {
              (**(code **)(*param_5 + 0x218))(param_5,uVar20);
              plVar15 = param_5;
              (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a310);
              if ((ulong)(plVar50[1] - *plVar50 >> 2) <= uVar20) goto LAB_10ab49c48;
              *(int *)(*plVar50 + uVar20 * 4) = (int)plVar15;
              (**(code **)(*param_5 + 0x220))(param_5);
              uVar20 = uVar20 + 1;
            } while (((ulong)plVar41 & 0xffffffff) != uVar20);
          }
          (**(code **)(*param_5 + 0x220))(param_5);
          (**(code **)(*param_5 + 0x220))(param_5);
          uVar48 = uVar48 + 1;
        } while (uVar48 != ((ulong)plVar11 & 0xffffffff));
      }
      (**(code **)(*param_5 + 0x220))(param_5);
    }
    if ((pbVar12 == (byte *)0x0) || ((*pbVar12 & 1) == 0)) {
      plVar11 = param_5;
      (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a330);
      if ((int)plVar11 != 0) {
        (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a330);
        plVar11 = param_5;
        (**(code **)(*param_5 + 0x208))();
        FUN_10ab4aef8(param_4 + 0xd0,(ulong)plVar11 & 0xffffffff);
        if ((int)plVar11 != 0) {
          lVar31 = 0;
          uVar48 = 0;
          do {
            uVar61 = SUB84(param_3,0);
            uVar58 = SUB84(param_2,0);
            uVar53 = SUB84(ppppppplVar54,0);
            lVar22 = *(long *)(param_4 + 0xd0);
            uVar20 = (*(long *)(param_4 + 0xd8) - lVar22 >> 3) * 0x4ec4ec4ec4ec4ec5;
            if (uVar20 < uVar48 || uVar20 - uVar48 == 0) goto LAB_10ab49c48;
            (**(code **)(*param_5 + 0x218))(param_5,uVar48);
            plVar41 = param_5;
            (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a290);
            *(int *)(lVar22 + lVar31) = (int)plVar41;
            plVar41 = param_5;
            (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a2b0);
            lVar46 = lVar22 + lVar31;
            *(int *)(lVar46 + 4) = (int)plVar41;
            plVar41 = param_5;
            (**(code **)(*param_5 + 200))(param_5,&PTR_DAT_110c4a350);
            *(int *)(lVar46 + 8) = (int)plVar41;
            plVar41 = param_5;
            (**(code **)(*param_5 + 0x58))(param_5,&PTR_DAT_110c4a370,*(undefined1 *)(lVar46 + 0xc))
            ;
            *(char *)(lVar46 + 0xc) = (char)plVar41;
            plVar41 = param_5;
            (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c4a390);
            if ((int)plVar41 != 0) {
              (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c4a390);
              (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a210);
              lVar46 = lVar22 + lVar31;
              *(undefined4 *)(lVar46 + 0x10) = uVar53;
              *(undefined4 *)(lVar46 + 0x14) = uVar58;
              *(undefined4 *)(lVar46 + 0x18) = uVar61;
              (**(code **)(*param_5 + 0xe8))(param_5,&PTR_DAT_110c4a230);
              *(undefined4 *)(lVar46 + 0x1c) = uVar53;
              *(undefined4 *)(lVar46 + 0x20) = uVar58;
              *(undefined4 *)(lVar46 + 0x24) = uVar61;
              (**(code **)(*param_5 + 0x220))(param_5);
            }
            lVar22 = lVar22 + lVar31;
            (**(code **)(*param_5 + 0x1b0))
                      (&ppppppplStack_100,param_5,&PTR_DAT_110c4a3b0,lVar22 + 0x28);
            *(undefined8 *)(lVar22 + 0x60) = uStack_c8;
            *(undefined8 *)(lVar22 + 0x58) = uStack_d0;
            *(undefined8 *)(lVar22 + 0x50) = uStack_d8;
            *(long *******)(lVar22 + 0x48) = pppppplStack_e0;
            *(long *******)(lVar22 + 0x40) = pppppplStack_e8;
            *(long ********)(lVar22 + 0x38) = ppppppplStack_f0;
            *(long ********)(lVar22 + 0x30) = uStack_f8;
            *(long ********)(lVar22 + 0x28) = ppppppplStack_100;
            ppppppplVar54 = ppppppplStack_100;
            param_2 = ppppppplStack_f0;
            param_3 = pppppplStack_e0;
            (**(code **)(*param_5 + 0x220))(param_5);
            uVar48 = uVar48 + 1;
            lVar31 = lVar31 + 0x68;
          } while (((ulong)plVar11 & 0xffffffff) * 0x68 - lVar31 != 0);
        }
        (**(code **)(*param_5 + 0x220))(param_5);
        uVar19 = *(uint *)(param_4 + 0xf0);
        uVar48 = (ulong)uVar19;
        if (uVar19 == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          if (uVar48 != 0) {
            uVar25 = (uint)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) / uVar48)
            ;
          }
        }
        puVar35 = *(uint **)(param_4 + 0xd0);
        if (puVar35 == *(uint **)(param_4 + 0xd8)) {
          uVar38 = 0;
        }
        else {
          uVar37 = 0;
          do {
            if (*(int *)(param_4 + 0xe8) == 1) {
              uVar21 = *(long *)(param_4 + 0x30) - *(long *)(param_4 + 0x28);
              uVar20 = 0;
              if (uVar21 != 0) {
                uVar20 = uVar21 >> 1;
              }
              uVar21 = (ulong)(*puVar35 >> 1);
              uVar38 = puVar35[2];
              if (uVar25 <= uVar38 || uVar20 <= uVar21) goto LAB_10ab49b0c;
              uVar20 = uVar20 - uVar21;
              uVar27 = (ulong)puVar35[1];
              if (uVar20 < uVar27) goto LAB_10ab49b0c;
              if (puVar35[1] != 0) {
                puVar17 = (ushort *)(*(long *)(param_4 + 0x28) + uVar21 * 2);
                do {
                  if (uVar20 == 0) goto LAB_10ab49c48;
                  if (uVar25 - uVar38 <= (uint)*puVar17) goto LAB_10ab49b0c;
                  uVar20 = uVar20 - 1;
                  uVar27 = uVar27 - 1;
                  puVar17 = puVar17 + 1;
                } while (uVar27 != 0);
              }
            }
            else if (*(int *)(param_4 + 0xe8) == 2) {
              uVar21 = *(long *)(param_4 + 0x30) - *(long *)(param_4 + 0x28);
              uVar20 = 0;
              if (uVar21 != 0) {
                uVar20 = uVar21 >> 2;
              }
              uVar21 = (ulong)(*puVar35 >> 2);
              uVar38 = puVar35[2];
              if (uVar25 <= uVar38 || uVar20 <= uVar21) goto LAB_10ab49b0c;
              uVar20 = uVar20 - uVar21;
              uVar27 = (ulong)puVar35[1];
              if (uVar20 < uVar27) goto LAB_10ab49b0c;
              if (puVar35[1] != 0) {
                puVar16 = (uint *)(*(long *)(param_4 + 0x28) + uVar21 * 4);
                do {
                  if (uVar20 == 0) goto LAB_10ab49c48;
                  if (uVar25 - uVar38 <= *puVar16) goto LAB_10ab49b0c;
                  uVar20 = uVar20 - 1;
                  uVar27 = uVar27 - 1;
                  puVar16 = puVar16 + 1;
                } while (uVar27 != 0);
              }
            }
            else {
              uVar38 = puVar35[2];
            }
            if (uVar38 < uVar37) goto LAB_10ab49b0c;
            puVar35 = puVar35 + 0x1a;
            uVar37 = uVar38;
          } while (puVar35 != *(uint **)(param_4 + 0xd8));
        }
        uVar25 = 0;
        if (uVar19 != 0) {
          uVar25 = 0;
          if (uVar48 != 0) {
            uVar25 = (uint)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) / uVar48)
            ;
          }
        }
        if (uVar25 <= uVar38) {
LAB_10ab49b0c:
          FUN_10a00946c(&UNK_10f6921f0);
          goto LAB_10ab49c48;
        }
      }
    }
    uVar48 = param_4;
    FUN_10ab4a5b4();
    uVar19 = (uint)uVar48;
    if ((*(int *)(param_4 + 0xec) == 0) && (uVar19 + (int)((uVar48 & 0xffffffff) / 3) * -3 != 0)) {
      puVar18 = &UNK_10f692856;
    }
    else {
      for (lVar31 = *(long *)(param_4 + 0x88); lVar31 != *(long *)(param_4 + 0x90);
          lVar31 = lVar31 + 0x30) {
        if (*(uint **)(lVar31 + 0x18) != *(uint **)(lVar31 + 0x20)) {
          puVar35 = *(uint **)(lVar31 + 0x18) + 2;
          do {
            if ((uVar19 <= puVar35[-2]) || (uVar19 - puVar35[-2] < puVar35[-1])) {
LAB_10ab49ad4:
              FUN_10a00946c(&UNK_10f6921f0);
              goto LAB_10ab49c48;
            }
            if ((*(long *)(param_4 + 0xd0) != *(long *)(param_4 + 0xd8)) &&
               (uVar48 = (*(long *)(param_4 + 0xd8) - *(long *)(param_4 + 0xd0) >> 3) *
                         0x4ec4ec4ec4ec4ec5, uVar48 < *puVar35 || uVar48 - *puVar35 == 0))
            goto LAB_10ab49ad4;
            puVar16 = puVar35 + 1;
            puVar35 = puVar35 + 3;
          } while (puVar16 != *(uint **)(lVar31 + 0x20));
        }
      }
      lVar31 = *(long *)(param_4 + 0x70);
      lVar22 = *(long *)(param_4 + 0x78);
      if ((lVar31 == *(long *)(param_4 + 0x78)) &&
         (lVar22 = lVar31, *(long *)(param_4 + 0x58) != *(long *)(param_4 + 0x60))) {
        FUN_10ab4a600(param_4);
        lVar31 = *(long *)(param_4 + 0x70);
        lVar22 = *(long *)(param_4 + 0x78);
      }
      if ((ulong)((*(long *)(param_4 + 0x60) - *(long *)(param_4 + 0x58) >> 5) * -0x5555555555555555
                 ) <= (ulong)((lVar22 - lVar31 >> 3) * -0x5555555555555555)) {
        if (*(uint *)(param_4 + 0x1a8) < 2) {
          lVar22 = *(long *)(param_4 + 0xa8);
          for (lVar31 = *(long *)(param_4 + 0xa0); lVar31 != lVar22; lVar31 = lVar31 + 0x58) {
            if (*(int *)(lVar31 + 8) == 4) {
              lVar46 = *(long *)(param_4 + 0xf8);
              lVar49 = *(long *)(param_4 + 0x100);
              lVar51 = lVar46;
              if (lVar46 != lVar49) {
                do {
                  lVar51 = lVar46;
                  if (*(long *)(lVar46 + 0x18) == *(long *)(lVar31 + 0x28)) break;
                  lVar46 = lVar46 + 0x38;
                  lVar51 = lVar49;
                } while (lVar46 != lVar49);
              }
              func_0x00010ab4dae0(&ppppppplStack_100,param_4,lVar51);
              ppppppplVar59 = ppppppplStack_100;
              lVar49 = *(long *)(lVar31 + 0x38);
              for (lVar46 = *(long *)(lVar31 + 0x30); lVar46 != lVar49; lVar46 = lVar46 + 0x20) {
                uVar19 = *(uint *)(param_4 + 0xf0);
                if (uVar19 == 0) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = 0;
                  if ((ulong)uVar19 != 0) {
                    uVar25 = (uint)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                                   (ulong)uVar19);
                  }
                }
                lVar51 = *(long *)(lVar46 + 8);
                uVar38 = *(int *)(lVar46 + 0x10) - (int)lVar51;
                uVar19 = uVar38 >> 4;
                if (uVar25 < uVar19) {
                  FUN_10a00946c(&UNK_10f6921f0);
                  goto LAB_10ab49c48;
                }
                if (0xf < uVar38) {
                  uVar48 = 0;
                  if (uVar19 < 2) {
                    uVar19 = 1;
                  }
LAB_10ab499c8:
                  fVar56 = SUB84(ppppppplVar54,0);
                  (*(code *)(*ppppppplVar59)[2])(ppppppplVar59,uVar48);
                  iVar10 = 0;
                  lVar33 = uVar48 * 0x10;
                  do {
                    if (iVar10 == 1) {
                      fVar60 = SUB84(param_2,0);
                      lVar36 = lVar51 + 4;
                    }
                    else {
                      lVar36 = lVar51;
                      fVar60 = fVar56;
                      if (iVar10 == 2) goto LAB_10ab49a1c;
                    }
                    *(float *)(lVar36 + lVar33) = *(float *)(lVar36 + lVar33) - fVar60;
                    iVar10 = iVar10 + 1;
                  } while( true );
                }
LAB_10ab49a34:
              }
            }
            else {
              if (*(int *)(lVar31 + 8) != 3) {
                puVar18 = &UNK_10f692eb4;
                goto LAB_10ab49bc8;
              }
              lVar46 = *(long *)(param_4 + 0xf8);
              lVar49 = *(long *)(param_4 + 0x100);
              lVar51 = lVar46;
              if (lVar46 != lVar49) {
                do {
                  lVar51 = lVar46;
                  if (*(long *)(lVar46 + 0x18) == *(long *)(lVar31 + 0x28)) break;
                  lVar46 = lVar46 + 0x38;
                  lVar51 = lVar49;
                } while (lVar46 != lVar49);
              }
              func_0x00010ab4d7d8(&ppppppplStack_100,param_4,lVar51);
              ppppppplVar59 = ppppppplStack_100;
              lVar49 = *(long *)(lVar31 + 0x38);
              for (lVar46 = *(long *)(lVar31 + 0x30); lVar46 != lVar49; lVar46 = lVar46 + 0x20) {
                uVar19 = *(uint *)(param_4 + 0xf0);
                if (uVar19 == 0) {
                  uVar25 = 0;
                }
                else {
                  uVar25 = 0;
                  if ((ulong)uVar19 != 0) {
                    uVar25 = (uint)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                                   (ulong)uVar19);
                  }
                }
                lVar51 = *(long *)(lVar46 + 8);
                uVar19 = *(int *)(lVar46 + 0x10) - (int)lVar51;
                if (uVar25 < uVar19 / 0xc) {
                  FUN_10a00946c(&UNK_10f6921f0);
                  goto LAB_10ab49c48;
                }
                if (0xb < uVar19) {
                  uVar48 = 0;
                  uVar19 = uVar19 / 0xc;
                  if (uVar19 < 2) {
                    uVar19 = 1;
                  }
LAB_10ab498b8:
                  fVar56 = SUB84(ppppppplVar54,0);
                  (*(code *)(*ppppppplVar59)[2])(ppppppplVar59,uVar48);
                  iVar10 = 0;
                  lVar33 = uVar48 * 0xc;
                  do {
                    if (iVar10 == 1) {
                      fVar60 = SUB84(param_2,0);
                      lVar36 = lVar51 + 4;
                    }
                    else {
                      lVar36 = lVar51;
                      fVar60 = fVar56;
                      if (iVar10 == 2) goto LAB_10ab49910;
                    }
                    *(float *)(lVar36 + lVar33) = *(float *)(lVar36 + lVar33) - fVar60;
                    iVar10 = iVar10 + 1;
                  } while( true );
                }
LAB_10ab49928:
              }
            }
            if (ppppppplVar59 != (long *******)0x0) {
              (*(code *)(*ppppppplVar59)[1])(ppppppplVar59);
            }
          }
          *(undefined4 *)(param_4 + 0x1a8) = 2;
        }
        FUN_10ab4ace0(param_4 + 0x160,param_5);
        if (pbVar12 != (byte *)0x0) {
          __ZdlPv(pbVar12);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
          return;
        }
        ___stack_chk_fail();
        ppppppplVar54 = uStack_1a8;
        goto LAB_10ab49c28;
      }
      puVar18 = &UNK_10f6928ad;
    }
LAB_10ab49bc8:
    FUN_10a00946c(puVar18);
  }
LAB_10ab49c48:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ab49c4c);
  (*pcVar8)();
LAB_10ab49a1c:
  fVar56 = *(float *)(lVar51 + 8 + lVar33) - SUB84(param_3,0);
  ppppppplVar54 = (long *******)(ulong)(uint)fVar56;
  *(float *)(lVar51 + 8 + lVar33) = fVar56;
  uVar48 = uVar48 + 1;
  if (uVar48 == uVar19) goto LAB_10ab49a34;
  goto LAB_10ab499c8;
LAB_10ab49910:
  fVar56 = *(float *)(lVar51 + 8 + lVar33) - SUB84(param_3,0);
  ppppppplVar54 = (long *******)(ulong)(uint)fVar56;
  *(float *)(lVar51 + 8 + lVar33) = fVar56;
  uVar48 = uVar48 + 1;
  if (uVar48 == uVar19) goto LAB_10ab49928;
  goto LAB_10ab498b8;
}



/* Entry: 10ab49f0c; end: 10ab4a103;  */

undefined8 * FUN_10ab49f0c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_190 [320];
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c49f98;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_10a19079c(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 0x14c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = &PTR_DAT_110c4a7c8;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x34] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x35) = 2;
  FUN_10a0f6d8c(auStack_190,param_2,0);
  FUN_10ab46f90(param_1,auStack_190);
  func_0x00010a0f618c(auStack_190);
  return param_1;
}



/* Entry: 10ab4a104; end: 10ab4a153;  */

void FUN_10ab4a104(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a0ff254(param_2,param_3,param_1,FUN_10ab55214);
  return;
}



/* Entry: 10ab4a154; end: 10ab4a18b;  */

ulong FUN_10ab4a154(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lStack_a8;
  
  puVar3 = (ulong *)(param_1 + 0x10);
  uVar4 = param_2 * (ulong)*(uint *)(param_1 + 0xf0);
  uVar5 = *(long *)(param_1 + 0x18) - *puVar3;
  plVar1 = (long *)(uVar4 - uVar5);
  if (uVar4 < uVar5 || plVar1 == (long *)0x0) {
    if (uVar4 < uVar5) {
      *(ulong *)(param_1 + 0x18) = *puVar3 + uVar4;
    }
    return param_1;
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  if ((long *)(*(long *)(param_1 + 0x20) - uVar4) < plVar1) {
    uVar6 = *puVar3;
    lVar7 = uVar4 - uVar6;
    uVar5 = lVar7 + (long)plVar1;
    if ((long)uVar5 < 0) {
      func_0x000104c591bc();
      *plVar1 = 0;
      if ((param_5 & 3) != 0) {
        return 0;
      }
      if (param_3 < (param_5 >> 1) + (param_5 >> 2)) {
code_r0x000100651ecc:
        uVar4 = 0;
      }
      else {
        if (param_5 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          uVar5 = 0;
          do {
            uVar6 = uVar4;
            func_0x0001004cc780(uVar4,&lStack_a8,param_4 + uVar5);
            if ((int)uVar6 == 0) {
              return uVar6;
            }
            if ((param_5 - 4 != uVar5) && (lStack_a8 != 3)) goto code_r0x000100651ecc;
            uVar4 = uVar4 + lStack_a8;
            lVar7 = lStack_a8 + lVar7;
            uVar5 = uVar5 + 4;
          } while (uVar5 < param_5);
        }
        *plVar1 = lVar7;
        uVar4 = 1;
      }
      return uVar4;
    }
    uVar2 = *(long *)(param_1 + 0x20) - uVar6;
    uVar4 = uVar2 * 2;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = uVar5;
    }
    if (0x3ffffffffffffffe < uVar2) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar4;
      func_0x000107c60e20();
    }
    func_0x000107c60ee4(uVar2 + lVar7,plVar1);
    uVar5 = uVar2;
    func_0x000107c610b4(uVar2,uVar6,lVar7);
    *puVar3 = uVar2;
    *(ulong *)(param_1 + 0x18) = uVar2 + lVar7 + (long)plVar1;
    *(ulong *)(param_1 + 0x20) = uVar2 + uVar4;
    if (uVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(uVar6);
      return uVar6;
    }
  }
  else {
    uVar5 = uVar4;
    if (plVar1 != (long *)0x0) {
      uVar5 = uVar4 + (long)plVar1;
      func_0x000107c60ee4(uVar4,plVar1);
    }
    *(ulong *)(param_1 + 0x18) = uVar5;
  }
  return uVar5;
}



/* Entry: 10ab4a18c; end: 10ab4a273;  */

undefined1  [16] FUN_10ab4a18c(undefined *param_1,ulong ****param_2,ulong param_3)

{
  ulong ***pppuVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong ****ppppuVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong *****pppppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  ulong ****ppppuVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong ****ppppuVar17;
  ulong *****pppppuVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  ulong **ppuStack_1ac;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong **ppuStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  ulong ***pppuStack_140;
  ulong ****ppppuStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  ulong ***pppuStack_120;
  ulong ****ppppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 ****ppppuStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong ***pppuStack_e0;
  ulong ****ppppuStack_d8;
  undefined1 ***pppuStack_d0;
  code *pcStack_c8;
  ulong ****ppppuStack_b8;
  ulong ***pppuStack_b0;
  ulong ***pppuStack_a8;
  ulong ****ppppuStack_a0;
  ulong ****ppppuStack_98;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  uVar2 = *(uint *)(param_1 + 0xf0);
  uVar11 = (ulong)uVar2;
  if (uVar2 == 0) {
LAB_10ab4a23c:
    if ((*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) &&
       (*(long *)(param_1 + 0x100) == *(long *)(param_1 + 0xf8))) {
LAB_10ab4a254:
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = param_1;
      return auVar20;
    }
    FUN_10a00946c(&UNK_10f69321b);
  }
  else {
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) / uVar11;
    }
    if (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) == uVar14 * uVar11) {
      uVar14 = 0;
      uVar11 = (*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
      do {
        if (uVar11 < uVar14 || uVar11 - uVar14 == 0) goto LAB_10ab4a254;
        lVar15 = *(long *)(param_1 + 0xf8) + uVar14 * 0x38;
        uVar3 = *(int *)(lVar15 + 0x24) - 1;
        if (uVar3 < 7) {
          iVar16 = *(int *)(&UNK_10e4fda1c + (ulong)uVar3 * 4);
        }
        else {
          iVar16 = 0;
        }
        uVar14 = (ulong)((int)uVar14 + 1);
      } while (*(uint *)(lVar15 + 0x30) <= uVar2 &&
               (*(int *)(lVar15 + 0x28) * iVar16 + 3U & 0xfffffffc) <=
               uVar2 - *(uint *)(lVar15 + 0x30));
      param_1 = &UNK_10f693254;
      FUN_10a00946c();
      goto LAB_10ab4a23c;
    }
  }
  pppppuVar8 = (ulong *****)&UNK_10f693234;
  FUN_10a00946c();
  pcStack_18 = FUN_10ab4a274;
  ppppuVar5 = *pppppuVar8;
  pppppuVar7 = (ulong *****)pppppuVar8[1];
  lVar15 = (long)pppppuVar7 - (long)ppppuVar5;
  bVar4 = (ulong ****)((lVar15 >> 3) * -0x5555555555555555) <= param_2;
  uVar11 = (long)param_2 + (lVar15 >> 3) * 0x5555555555555555;
  if (bVar4 && uVar11 != 0) {
    if ((ulong)(((long)pppppuVar8[2] - (long)pppppuVar7 >> 3) * -0x5555555555555555) < uVar11) {
      if ((ulong ****)0xaaaaaaaaaaaaaaa < param_2) {
        puStack_20 = &stack0xfffffffffffffff0;
        FUN_10a559bb0();
        pcStack_58 = FUN_10ab4a3d8;
        pppppuVar7 = (ulong *****)pppppuVar8[1];
        lVar12 = (long)pppppuVar7 - (long)*pppppuVar8 >> 4;
        bVar4 = param_2 < (ulong ****)(lVar12 * -0x5555555555555555);
        ppppuVar5 = (ulong ****)((long)param_2 + lVar12 * 0x5555555555555555);
        ppuStack_60 = &puStack_20;
        if (bVar4 || ppppuVar5 == (ulong ****)0x0) {
          pppppuVar6 = pppppuVar8;
          if (bVar4) {
            pppppuVar18 = (ulong *****)(*pppppuVar8 + (long)param_2 * 6);
            while (pppppuVar7 != pppppuVar18) {
              pppppuVar7 = pppppuVar7 + -6;
              pppppuVar6 = pppppuVar7;
              func_0x00010a0d3994(pppppuVar7);
            }
            pppppuVar8[1] = (ulong ****)pppppuVar18;
          }
          auVar22._8_8_ = param_2;
          auVar22._0_8_ = pppppuVar6;
          return auVar22;
        }
        pcStack_58 = FUN_10ab4a3d8;
        pppppuVar7 = (ulong *****)pppppuVar8[1];
        if ((ulong ****)(((long)pppppuVar8[2] - (long)pppppuVar7 >> 4) * -0x5555555555555555) <
            ppppuVar5) {
          lVar12 = (long)pppppuVar7 - (long)*pppppuVar8;
          uVar11 = (long)ppppuVar5 + (lVar12 >> 4) * -0x5555555555555555;
          if (0x555555555555555 < uVar11) {
            param_2 = ppppuVar5;
            FUN_10a0d38ac();
            func_0x00010a0d39d8(&ppppuStack_b8);
            pppppuVar7 = pppppuVar8;
            __Unwind_Resume();
            pcStack_c8 = FUN_10ab55470;
            ppppuStack_100 = &pppuStack_d0;
            ppppuVar13 = pppppuVar7[1];
            if ((ulong ****)(((long)pppppuVar7[2] - (long)ppppuVar13 >> 3) * 0x4ec4ec4ec4ec4ec5) <
                param_2) {
              lVar19 = (long)ppppuVar13 - (long)*pppppuVar7;
              uVar11 = (long)param_2 + (lVar19 >> 3) * 0x4ec4ec4ec4ec4ec5;
              lStack_f0 = lVar15;
              lStack_e8 = lVar12;
              pppuStack_e0 = (ulong ***)ppppuVar5;
              ppppuStack_d8 = (ulong ****)pppppuVar8;
              pppuStack_d0 = &ppuStack_60;
              if (0x276276276276276 < uVar11) {
                ppppuVar5 = param_2;
                FUN_10a18d150();
                pcStack_f8 = FUN_10ab55604;
                puVar9 = &DAT_10f62a4d8;
                FUN_109ffde64();
                pcStack_108 = FUN_10ab55618;
                ppuStack_130 = &puStack_110;
                pppuStack_120 = (ulong ***)param_2;
                ppppuStack_118 = (ulong ****)pppppuVar7;
                if (puVar9 < (undefined *)0x1c71c71c71c71c72) {
                  lVar15 = (long)puVar9 * 9;
                  puStack_110 = (undefined1 *)&ppppuStack_100;
                  __Znwm(lVar15);
                  auVar25._8_8_ = puVar9;
                  auVar25._0_8_ = lVar15;
                  return auVar25;
                }
                puStack_110 = (undefined1 *)&ppppuStack_100;
                func_0x000109ffded8();
                pcStack_128 = FUN_10ab5565c;
                *(undefined ***)(puVar9 + 0x1b0) = &PTR_DAT_110c4a690;
                pppuVar1 = (ulong ***)&UNK_10f692150;
                if (*ppppuVar5 != (ulong ***)0x0) {
                  pppuVar1 = *ppppuVar5;
                }
                lStack_150 = lVar15;
                lStack_148 = lVar19;
                pppuStack_140 = (ulong ***)param_2;
                ppppuStack_138 = (ulong ****)pppppuVar7;
                func_0x000107c2c4dc(puVar9 + 0x1b8,pppuVar1);
                ppuStack_1c8 = (ulong **)*ppppuVar5;
                uStack_1c0 = 0;
                uStack_1b8 = 0;
                uStack_1b0 = (undefined4)param_3;
                ppuStack_1ac = (ulong **)ppppuVar5[1];
                uStack_1a4 = *(undefined4 *)(ppppuVar5 + 2);
                uStack_198 = 0;
                uStack_1a0 = 0;
                uStack_188 = 0;
                uStack_190 = 0;
                ppuStack_180 = (ulong **)ppppuVar5[7];
                uStack_178 = *(undefined4 *)(ppppuVar5 + 8);
                uStack_170 = 0;
                uStack_168 = 0;
                func_0x00010a052690(puVar9 + 0x168,&ppuStack_1c8);
                puVar10 = puVar9;
                FUN_10a0051e8(puVar9,param_3,*(undefined4 *)(ppppuVar5 + 1),
                              *(undefined4 *)(ppppuVar5 + 8),*(undefined4 *)((long)ppppuVar5 + 0xc),
                              *(undefined4 *)(ppppuVar5 + 2));
                if (((ulong)puVar10 & 1) == 0) {
                  ppuStack_160 = &PTR_DAT_110c4a690;
                  uStack_158 = 0;
                  ppuStack_1c8 = (ulong **)&PTR_DAT_110c42c58;
                  uStack_1c0 = 0;
                  uStack_1b8 = CONCAT71(uStack_1b8._1_7_,1);
                  func_0x0001098949cc(puVar9,*ppppuVar5,&ppuStack_160,&ppuStack_1c8);
                }
                auVar26._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(ppppuVar5 + 1) << 0x20;
                auVar26._0_8_ = puVar9;
                return auVar26;
              }
              lVar15 = (long)pppppuVar7[2] - (long)*pppppuVar7 >> 3;
              uVar14 = lVar15 * -0x6276276276276276;
              if (uVar14 < uVar11 || uVar14 - uVar11 == 0) {
                uVar14 = uVar11;
              }
              if (0x13b13b13b13b13a < (ulong)(lVar15 * 0x4ec4ec4ec4ec4ec5)) {
                uVar14 = 0x276276276276276;
              }
              if (uVar14 == 0) {
                pppppuVar8 = (ulong *****)0x0;
              }
              else {
                pppppuVar8 = pppppuVar7;
                FUN_10a18d164();
              }
              ppppuVar13 = (ulong ****)((long)pppppuVar8 + lVar19);
              lVar15 = (long)param_2 * 0xd;
              ppppuVar5 = ppppuVar13;
              do {
                ppppuVar5[4] = (ulong ***)0x0;
                ppppuVar5[1] = (ulong ***)0x0;
                *ppppuVar5 = (ulong ***)0x0;
                ppppuVar5[3] = (ulong ***)0x0;
                ppppuVar5[2] = (ulong ***)0x0;
                ppppuVar5[6] = (ulong ***)0x0;
                ppppuVar5[5] = (ulong ***)0x3f800000;
                ppppuVar5[8] = (ulong ***)0x0;
                ppppuVar5[7] = (ulong ***)0x3f80000000000000;
                ppppuVar5[10] = (ulong ***)0x3f800000;
                ppppuVar5[9] = (ulong ***)0x0;
                ppppuVar5[0xc] = (ulong ***)0x3f80000000000000;
                ppppuVar5[0xb] = (ulong ***)0x0;
                ppppuVar5 = ppppuVar5 + 0xd;
              } while (ppppuVar5 != ppppuVar13 + lVar15);
              param_2 = *pppppuVar7;
              ppppuVar17 = (ulong ****)((long)ppppuVar13 - ((long)pppppuVar7[1] - (long)param_2));
              _memcpy(ppppuVar17);
              ppppuVar5 = *pppppuVar7;
              *pppppuVar7 = ppppuVar17;
              pppppuVar7[1] = ppppuVar13 + lVar15;
              pppppuVar7[2] = (ulong ****)(pppppuVar8 + uVar14 * 0xd);
              pppppuVar7 = (ulong *****)0x0;
              if (ppppuVar5 != (ulong ****)0x0) goto __ZdlPv;
            }
            else {
              ppppuVar5 = ppppuVar13;
              if (param_2 != (ulong ****)0x0) {
                ppppuVar5 = ppppuVar13 + (long)param_2 * 0xd;
                do {
                  ppppuVar13[4] = (ulong ***)0x0;
                  ppppuVar13[1] = (ulong ***)0x0;
                  *ppppuVar13 = (ulong ***)0x0;
                  ppppuVar13[3] = (ulong ***)0x0;
                  ppppuVar13[2] = (ulong ***)0x0;
                  ppppuVar13[6] = (ulong ***)0x0;
                  ppppuVar13[5] = (ulong ***)0x3f800000;
                  ppppuVar13[8] = (ulong ***)0x0;
                  ppppuVar13[7] = (ulong ***)0x3f80000000000000;
                  ppppuVar13[10] = (ulong ***)0x3f800000;
                  ppppuVar13[9] = (ulong ***)0x0;
                  ppppuVar13[0xc] = (ulong ***)0x3f80000000000000;
                  ppppuVar13[0xb] = (ulong ***)0x0;
                  ppppuVar13 = ppppuVar13 + 0xd;
                } while (ppppuVar13 != ppppuVar5);
              }
              pppppuVar7[1] = ppppuVar5;
            }
            auVar24._8_8_ = param_2;
            auVar24._0_8_ = pppppuVar7;
            return auVar24;
          }
          lVar15 = (long)pppppuVar8[2] - (long)*pppppuVar8 >> 4;
          uVar14 = lVar15 * 0x5555555555555556;
          if (uVar14 < uVar11 || uVar14 - uVar11 == 0) {
            uVar14 = uVar11;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar14 = 0x555555555555555;
          }
          ppppuStack_98 = (ulong ****)pppppuVar8;
          if (uVar14 == 0) {
            pppppuVar7 = (ulong *****)0x0;
          }
          else {
            pppppuVar7 = pppppuVar8;
            FUN_10a0d38c0();
          }
          lVar12 = (long)pppppuVar7 + lVar12;
          lVar15 = (((long)ppppuVar5 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30;
          ppppuStack_b8 = (ulong ****)pppppuVar7;
          pppuStack_b0 = (ulong ***)lVar12;
          ppppuStack_a0 = (ulong ****)(pppppuVar7 + uVar14 * 6);
          _bzero(lVar12,lVar15);
          ppppuVar5 = (ulong ****)(lVar12 + lVar15);
          ppppuVar13 = *pppppuVar8;
          ppppuVar17 = (ulong ****)((long)ppppuVar13 + (lVar12 - (long)pppppuVar8[1]));
          pppuStack_a8 = (ulong ***)ppppuVar5;
          func_0x00010a0d3904(pppppuVar8,ppppuVar13,pppppuVar8[1],ppppuVar17);
          ppppuStack_b8 = *pppppuVar8;
          *pppppuVar8 = ppppuVar17;
          pppppuVar8[1] = ppppuVar5;
          ppppuStack_a0 = pppppuVar8[2];
          pppppuVar8[2] = (ulong ****)(pppppuVar7 + uVar14 * 6);
          pppppuVar6 = &ppppuStack_b8;
          pppuStack_b0 = (ulong ***)ppppuStack_b8;
          pppuStack_a8 = (ulong ***)ppppuStack_b8;
          func_0x00010a0d39d8(pppppuVar6);
        }
        else {
          ppppuVar13 = (ulong ****)0x0;
          pppppuVar6 = pppppuVar8;
          if (ppppuVar5 != (ulong ****)0x0) {
            uVar11 = ((long)ppppuVar5 * 0x30 - 0x30U) / 0x30;
            ppppuVar13 = (ulong ****)(uVar11 * 0x30 + 0x30);
            pppppuVar6 = pppppuVar7;
            _bzero(pppppuVar7,ppppuVar13);
            pppppuVar7 = pppppuVar7 + uVar11 * 6 + 6;
          }
          pppppuVar8[1] = (ulong ****)pppppuVar7;
        }
        auVar23._8_8_ = ppppuVar13;
        auVar23._0_8_ = pppppuVar6;
        return auVar23;
      }
      lVar12 = (long)pppppuVar8[2] - (long)ppppuVar5 >> 3;
      ppppuVar13 = (ulong ****)(lVar12 * 0x5555555555555556);
      if (ppppuVar13 < param_2 || (long)ppppuVar13 - (long)param_2 == 0) {
        ppppuVar13 = param_2;
      }
      if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
        ppppuVar13 = (ulong ****)0xaaaaaaaaaaaaaaa;
      }
      pppppuVar7 = pppppuVar8;
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_10a559bc4();
      lVar15 = (long)pppppuVar7 + lVar15;
      lVar12 = ((uVar11 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar15,lVar12);
      param_2 = *pppppuVar8;
      ppppuVar17 = (ulong ****)(lVar15 - ((long)pppppuVar8[1] - (long)param_2));
      _memcpy(ppppuVar17);
      ppppuVar5 = *pppppuVar8;
      *pppppuVar8 = ppppuVar17;
      pppppuVar8[1] = (ulong ****)(lVar15 + lVar12);
      pppppuVar8[2] = (ulong ****)(pppppuVar7 + (long)ppppuVar13 * 3);
      pppppuVar8 = (ulong *****)0x0;
      if (ppppuVar5 != (ulong ****)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        auVar27._8_8_ = param_2;
        auVar27._0_8_ = ppppuVar5;
        return auVar27;
      }
      goto LAB_10ab4a3c0;
    }
    uVar11 = (uVar11 * 0x18 - 0x18) / 0x18;
    param_2 = (ulong ****)(uVar11 * 0x18 + 0x18);
    pppppuVar6 = pppppuVar7;
    puStack_20 = &stack0xfffffffffffffff0;
    _bzero(pppppuVar7,param_2);
    pppppuVar7 = pppppuVar7 + uVar11 * 3 + 3;
  }
  else {
    if (bVar4) goto LAB_10ab4a3c0;
    pppppuVar7 = (ulong *****)(ppppuVar5 + (long)param_2 * 3);
    pppppuVar6 = pppppuVar8;
  }
  pppppuVar8[1] = (ulong ****)pppppuVar7;
  pppppuVar8 = pppppuVar6;
LAB_10ab4a3c0:
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = pppppuVar8;
  return auVar21;
}



/* Entry: 10ab4a274; end: 10ab4a3d7;  */

undefined1  [16] FUN_10ab4a274(ulong ****param_1,ulong ***param_2,ulong param_3)

{
  ulong **ppuVar1;
  bool bVar2;
  ulong ***pppuVar3;
  ulong ****ppppuVar4;
  ulong ****ppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong ***pppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  ulong ****ppppuVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  ulong *puStack_19c;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong *puStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  ulong **ppuStack_130;
  ulong ***pppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  ulong **ppuStack_110;
  ulong ***pppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong **ppuStack_d0;
  ulong ***pppuStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  ulong ***pppuStack_a8;
  ulong **ppuStack_a0;
  ulong **ppuStack_98;
  ulong ***pppuStack_90;
  ulong ***pppuStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  pppuVar3 = *param_1;
  ppppuVar4 = (ulong ****)param_1[1];
  lVar15 = (long)ppppuVar4 - (long)pppuVar3;
  bVar2 = (ulong ***)((lVar15 >> 3) * -0x5555555555555555) <= param_2;
  uVar10 = (long)param_2 + (lVar15 >> 3) * 0x5555555555555555;
  if (bVar2 && uVar10 != 0) {
    if ((ulong)(((long)param_1[2] - (long)ppppuVar4 >> 3) * -0x5555555555555555) < uVar10) {
      if ((ulong ***)0xaaaaaaaaaaaaaaa < param_2) {
        FUN_10a559bb0();
        pcStack_48 = FUN_10ab4a3d8;
        ppppuVar4 = (ulong ****)param_1[1];
        lVar8 = (long)ppppuVar4 - (long)*param_1 >> 4;
        bVar2 = param_2 < (ulong ***)(lVar8 * -0x5555555555555555);
        pppuVar3 = (ulong ***)((long)param_2 + lVar8 * 0x5555555555555555);
        puStack_50 = &stack0xfffffffffffffff0;
        if (bVar2 || pppuVar3 == (ulong ***)0x0) {
          ppppuVar5 = param_1;
          if (bVar2) {
            ppppuVar13 = (ulong ****)(*param_1 + (long)param_2 * 6);
            while (ppppuVar4 != ppppuVar13) {
              ppppuVar4 = ppppuVar4 + -6;
              ppppuVar5 = ppppuVar4;
              func_0x00010a0d3994(ppppuVar4);
            }
            param_1[1] = (ulong ***)ppppuVar13;
          }
          auVar17._8_8_ = param_2;
          auVar17._0_8_ = ppppuVar5;
          return auVar17;
        }
        pcStack_48 = FUN_10ab4a3d8;
        ppppuVar4 = (ulong ****)param_1[1];
        if ((ulong ***)(((long)param_1[2] - (long)ppppuVar4 >> 4) * -0x5555555555555555) < pppuVar3)
        {
          lVar8 = (long)ppppuVar4 - (long)*param_1;
          uVar10 = (long)pppuVar3 + (lVar8 >> 4) * -0x5555555555555555;
          if (0x555555555555555 < uVar10) {
            param_2 = pppuVar3;
            FUN_10a0d38ac();
            func_0x00010a0d39d8(&pppuStack_a8);
            ppppuVar4 = param_1;
            __Unwind_Resume();
            pcStack_b8 = FUN_10ab55470;
            pppuStack_f0 = &ppuStack_c0;
            pppuVar9 = ppppuVar4[1];
            if ((ulong ***)(((long)ppppuVar4[2] - (long)pppuVar9 >> 3) * 0x4ec4ec4ec4ec4ec5) <
                param_2) {
              lVar14 = (long)pppuVar9 - (long)*ppppuVar4;
              uVar10 = (long)param_2 + (lVar14 >> 3) * 0x4ec4ec4ec4ec4ec5;
              lStack_e0 = lVar15;
              lStack_d8 = lVar8;
              ppuStack_d0 = (ulong **)pppuVar3;
              pppuStack_c8 = (ulong ***)param_1;
              ppuStack_c0 = &puStack_50;
              if (0x276276276276276 < uVar10) {
                pppuVar3 = param_2;
                FUN_10a18d150();
                pcStack_e8 = FUN_10ab55604;
                puVar6 = &DAT_10f62a4d8;
                FUN_109ffde64();
                pcStack_f8 = FUN_10ab55618;
                ppuStack_110 = (ulong **)param_2;
                pppuStack_108 = (ulong ***)ppppuVar4;
                if ((undefined *)0x1c71c71c71c71c71 < puVar6) {
                  puStack_100 = (undefined1 *)&pppuStack_f0;
                  func_0x000109ffded8();
                  pcStack_118 = FUN_10ab5565c;
                  *(undefined ***)(puVar6 + 0x1b0) = &PTR_DAT_110c4a690;
                  ppuVar1 = (ulong **)&UNK_10f692150;
                  if (*pppuVar3 != (ulong **)0x0) {
                    ppuVar1 = *pppuVar3;
                  }
                  lStack_140 = lVar15;
                  lStack_138 = lVar14;
                  ppuStack_130 = (ulong **)param_2;
                  pppuStack_128 = (ulong ***)ppppuVar4;
                  ppuStack_120 = &puStack_100;
                  func_0x000107c2c4dc(puVar6 + 0x1b8,ppuVar1);
                  ppuStack_1b8 = (undefined **)*pppuVar3;
                  uStack_1b0 = 0;
                  uStack_1a8 = 0;
                  uStack_1a0 = (undefined4)param_3;
                  puStack_19c = (ulong *)pppuVar3[1];
                  uStack_194 = *(undefined4 *)(pppuVar3 + 2);
                  uStack_188 = 0;
                  uStack_190 = 0;
                  uStack_178 = 0;
                  uStack_180 = 0;
                  puStack_170 = (ulong *)pppuVar3[7];
                  uStack_168 = *(undefined4 *)(pppuVar3 + 8);
                  uStack_160 = 0;
                  uStack_158 = 0;
                  func_0x00010a052690(puVar6 + 0x168,&ppuStack_1b8);
                  puVar7 = puVar6;
                  FUN_10a0051e8(puVar6,param_3,*(undefined4 *)(pppuVar3 + 1),
                                *(undefined4 *)(pppuVar3 + 8),*(undefined4 *)((long)pppuVar3 + 0xc),
                                *(undefined4 *)(pppuVar3 + 2));
                  if (((ulong)puVar7 & 1) == 0) {
                    ppuStack_150 = &PTR_DAT_110c4a690;
                    uStack_148 = 0;
                    ppuStack_1b8 = &PTR_DAT_110c42c58;
                    uStack_1b0 = 0;
                    uStack_1a8 = CONCAT71(uStack_1a8._1_7_,1);
                    func_0x0001098949cc(puVar6,*pppuVar3,&ppuStack_150,&ppuStack_1b8);
                  }
                  auVar21._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(pppuVar3 + 1) << 0x20;
                  auVar21._0_8_ = puVar6;
                  return auVar21;
                }
                lVar15 = (long)puVar6 * 9;
                puStack_100 = (undefined1 *)&pppuStack_f0;
                __Znwm(lVar15);
                auVar20._8_8_ = puVar6;
                auVar20._0_8_ = lVar15;
                return auVar20;
              }
              lVar15 = (long)ppppuVar4[2] - (long)*ppppuVar4 >> 3;
              uVar11 = lVar15 * -0x6276276276276276;
              if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
                uVar11 = uVar10;
              }
              if (0x13b13b13b13b13a < (ulong)(lVar15 * 0x4ec4ec4ec4ec4ec5)) {
                uVar11 = 0x276276276276276;
              }
              if (uVar11 == 0) {
                ppppuVar5 = (ulong ****)0x0;
              }
              else {
                ppppuVar5 = ppppuVar4;
                FUN_10a18d164();
              }
              pppuVar9 = (ulong ***)((long)ppppuVar5 + lVar14);
              lVar15 = (long)param_2 * 0xd;
              pppuVar3 = pppuVar9;
              do {
                pppuVar3[4] = (ulong **)0x0;
                pppuVar3[1] = (ulong **)0x0;
                *pppuVar3 = (ulong **)0x0;
                pppuVar3[3] = (ulong **)0x0;
                pppuVar3[2] = (ulong **)0x0;
                pppuVar3[6] = (ulong **)0x0;
                pppuVar3[5] = (ulong **)0x3f800000;
                pppuVar3[8] = (ulong **)0x0;
                pppuVar3[7] = (ulong **)0x3f80000000000000;
                pppuVar3[10] = (ulong **)0x3f800000;
                pppuVar3[9] = (ulong **)0x0;
                pppuVar3[0xc] = (ulong **)0x3f80000000000000;
                pppuVar3[0xb] = (ulong **)0x0;
                pppuVar3 = pppuVar3 + 0xd;
              } while (pppuVar3 != pppuVar9 + lVar15);
              param_2 = *ppppuVar4;
              pppuVar12 = (ulong ***)((long)pppuVar9 - ((long)ppppuVar4[1] - (long)param_2));
              _memcpy(pppuVar12);
              pppuVar3 = *ppppuVar4;
              *ppppuVar4 = pppuVar12;
              ppppuVar4[1] = pppuVar9 + lVar15;
              ppppuVar4[2] = (ulong ***)(ppppuVar5 + uVar11 * 0xd);
              ppppuVar4 = (ulong ****)0x0;
              if (pppuVar3 != (ulong ***)0x0) goto __ZdlPv;
            }
            else {
              pppuVar3 = pppuVar9;
              if (param_2 != (ulong ***)0x0) {
                pppuVar3 = pppuVar9 + (long)param_2 * 0xd;
                do {
                  pppuVar9[4] = (ulong **)0x0;
                  pppuVar9[1] = (ulong **)0x0;
                  *pppuVar9 = (ulong **)0x0;
                  pppuVar9[3] = (ulong **)0x0;
                  pppuVar9[2] = (ulong **)0x0;
                  pppuVar9[6] = (ulong **)0x0;
                  pppuVar9[5] = (ulong **)0x3f800000;
                  pppuVar9[8] = (ulong **)0x0;
                  pppuVar9[7] = (ulong **)0x3f80000000000000;
                  pppuVar9[10] = (ulong **)0x3f800000;
                  pppuVar9[9] = (ulong **)0x0;
                  pppuVar9[0xc] = (ulong **)0x3f80000000000000;
                  pppuVar9[0xb] = (ulong **)0x0;
                  pppuVar9 = pppuVar9 + 0xd;
                } while (pppuVar9 != pppuVar3);
              }
              ppppuVar4[1] = pppuVar3;
            }
            auVar19._8_8_ = param_2;
            auVar19._0_8_ = ppppuVar4;
            return auVar19;
          }
          lVar15 = (long)param_1[2] - (long)*param_1 >> 4;
          uVar11 = lVar15 * 0x5555555555555556;
          if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
            uVar11 = uVar10;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
            uVar11 = 0x555555555555555;
          }
          pppuStack_88 = (ulong ***)param_1;
          if (uVar11 == 0) {
            ppppuVar4 = (ulong ****)0x0;
          }
          else {
            ppppuVar4 = param_1;
            FUN_10a0d38c0();
          }
          lVar8 = (long)ppppuVar4 + lVar8;
          lVar15 = (((long)pppuVar3 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30;
          pppuStack_a8 = (ulong ***)ppppuVar4;
          ppuStack_a0 = (ulong **)lVar8;
          pppuStack_90 = (ulong ***)(ppppuVar4 + uVar11 * 6);
          _bzero(lVar8,lVar15);
          pppuVar3 = (ulong ***)(lVar8 + lVar15);
          pppuVar9 = *param_1;
          pppuVar12 = (ulong ***)((long)pppuVar9 + (lVar8 - (long)param_1[1]));
          ppuStack_98 = (ulong **)pppuVar3;
          func_0x00010a0d3904(param_1,pppuVar9,param_1[1],pppuVar12);
          pppuStack_a8 = *param_1;
          *param_1 = pppuVar12;
          param_1[1] = pppuVar3;
          pppuStack_90 = param_1[2];
          param_1[2] = (ulong ***)(ppppuVar4 + uVar11 * 6);
          ppppuVar5 = &pppuStack_a8;
          ppuStack_a0 = (ulong **)pppuStack_a8;
          ppuStack_98 = (ulong **)pppuStack_a8;
          func_0x00010a0d39d8(ppppuVar5);
        }
        else {
          pppuVar9 = (ulong ***)0x0;
          ppppuVar5 = param_1;
          if (pppuVar3 != (ulong ***)0x0) {
            uVar10 = ((long)pppuVar3 * 0x30 - 0x30U) / 0x30;
            pppuVar9 = (ulong ***)(uVar10 * 0x30 + 0x30);
            ppppuVar5 = ppppuVar4;
            _bzero(ppppuVar4,pppuVar9);
            ppppuVar4 = ppppuVar4 + uVar10 * 6 + 6;
          }
          param_1[1] = (ulong ***)ppppuVar4;
        }
        auVar18._8_8_ = pppuVar9;
        auVar18._0_8_ = ppppuVar5;
        return auVar18;
      }
      lVar8 = (long)param_1[2] - (long)pppuVar3 >> 3;
      pppuVar9 = (ulong ***)(lVar8 * 0x5555555555555556);
      if (pppuVar9 < param_2 || (long)pppuVar9 - (long)param_2 == 0) {
        pppuVar9 = param_2;
      }
      if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        pppuVar9 = (ulong ***)0xaaaaaaaaaaaaaaa;
      }
      ppppuVar4 = param_1;
      FUN_10a559bc4();
      lVar15 = (long)ppppuVar4 + lVar15;
      lVar8 = ((uVar10 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar15,lVar8);
      param_2 = *param_1;
      pppuVar12 = (ulong ***)(lVar15 - ((long)param_1[1] - (long)param_2));
      _memcpy(pppuVar12);
      pppuVar3 = *param_1;
      *param_1 = pppuVar12;
      param_1[1] = (ulong ***)(lVar15 + lVar8);
      param_1[2] = (ulong ***)(ppppuVar4 + (long)pppuVar9 * 3);
      param_1 = (ulong ****)0x0;
      if (pppuVar3 != (ulong ***)0x0) {
__ZdlPv:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)();
        auVar22._8_8_ = param_2;
        auVar22._0_8_ = pppuVar3;
        return auVar22;
      }
      goto LAB_10ab4a3c0;
    }
    uVar10 = (uVar10 * 0x18 - 0x18) / 0x18;
    param_2 = (ulong ***)(uVar10 * 0x18 + 0x18);
    ppppuVar5 = ppppuVar4;
    _bzero(ppppuVar4,param_2);
    ppppuVar4 = ppppuVar4 + uVar10 * 3 + 3;
  }
  else {
    if (bVar2) goto LAB_10ab4a3c0;
    ppppuVar4 = (ulong ****)(pppuVar3 + (long)param_2 * 3);
    ppppuVar5 = param_1;
  }
  param_1[1] = (ulong ***)ppppuVar4;
  param_1 = ppppuVar5;
LAB_10ab4a3c0:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 10ab4a3d8; end: 10ab4a45b;  */

undefined1  [16] FUN_10ab4a3d8(ulong ****param_1,ulong param_2,ulong param_3)

{
  ulong **ppuVar1;
  bool bVar2;
  ulong ****ppppuVar3;
  ulong ****ppppuVar4;
  ulong ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong ***pppuVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong ***pppuVar13;
  ulong ***pppuVar14;
  ulong ****ppppuVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  ulong *puStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong *puStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  ulong **ppuStack_f0;
  ulong ***pppuStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  ulong **ppuStack_d0;
  ulong ***pppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_98;
  ulong **ppuStack_90;
  ulong ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong ***pppuStack_68;
  ulong **ppuStack_60;
  ulong **ppuStack_58;
  ulong ***pppuStack_50;
  ulong ***pppuStack_48;
  
  ppppuVar3 = (ulong ****)param_1[1];
  lVar9 = (long)ppppuVar3 - (long)*param_1 >> 4;
  bVar2 = param_2 < (ulong)(lVar9 * -0x5555555555555555);
  pppuVar5 = (ulong ***)(param_2 + lVar9 * 0x5555555555555555);
  if (bVar2 || pppuVar5 == (ulong ***)0x0) {
    ppppuVar4 = param_1;
    if (bVar2) {
      ppppuVar15 = (ulong ****)(*param_1 + param_2 * 6);
      while (ppppuVar3 != ppppuVar15) {
        ppppuVar3 = ppppuVar3 + -6;
        ppppuVar4 = ppppuVar3;
        func_0x00010a0d3994(ppppuVar3);
      }
      param_1[1] = (ulong ***)ppppuVar15;
    }
    auVar16._8_8_ = param_2;
    auVar16._0_8_ = ppppuVar4;
    return auVar16;
  }
  ppppuVar3 = (ulong ****)param_1[1];
  if ((ulong ***)(((long)param_1[2] - (long)ppppuVar3 >> 4) * -0x5555555555555555) < pppuVar5) {
    lVar9 = (long)ppppuVar3 - (long)*param_1;
    uVar11 = (long)pppuVar5 + (lVar9 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar11) {
      pppuVar8 = pppuVar5;
      FUN_10a0d38ac();
      func_0x00010a0d39d8(&pppuStack_68);
      ppppuVar3 = param_1;
      __Unwind_Resume();
      pcStack_78 = FUN_10ab55470;
      ppuStack_b0 = &puStack_80;
      pppuVar13 = ppppuVar3[1];
      if ((ulong ***)(((long)ppppuVar3[2] - (long)pppuVar13 >> 3) * 0x4ec4ec4ec4ec4ec5) < pppuVar8)
      {
        lVar10 = (long)pppuVar13 - (long)*ppppuVar3;
        uVar11 = (long)pppuVar8 + (lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
        lStack_98 = lVar9;
        ppuStack_90 = (ulong **)pppuVar5;
        pppuStack_88 = (ulong ***)param_1;
        puStack_80 = &stack0xfffffffffffffff0;
        if (0x276276276276276 < uVar11) {
          pppuVar5 = pppuVar8;
          FUN_10a18d150();
          pcStack_a8 = FUN_10ab55604;
          puVar6 = &DAT_10f62a4d8;
          FUN_109ffde64();
          pcStack_b8 = FUN_10ab55618;
          ppuStack_d0 = (ulong **)pppuVar8;
          pppuStack_c8 = (ulong ***)ppppuVar3;
          if ((undefined *)0x1c71c71c71c71c71 < puVar6) {
            puStack_c0 = (undefined1 *)&ppuStack_b0;
            func_0x000109ffded8();
            pcStack_d8 = FUN_10ab5565c;
            *(undefined ***)(puVar6 + 0x1b0) = &PTR_DAT_110c4a690;
            ppuVar1 = (ulong **)&UNK_10f692150;
            if (*pppuVar5 != (ulong **)0x0) {
              ppuVar1 = *pppuVar5;
            }
            lStack_f8 = lVar10;
            ppuStack_f0 = (ulong **)pppuVar8;
            pppuStack_e8 = (ulong ***)ppppuVar3;
            ppuStack_e0 = &puStack_c0;
            func_0x000107c2c4dc(puVar6 + 0x1b8,ppuVar1);
            ppuStack_178 = (undefined **)*pppuVar5;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_160 = (undefined4)param_3;
            puStack_15c = (ulong *)pppuVar5[1];
            uStack_154 = *(undefined4 *)(pppuVar5 + 2);
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            puStack_130 = (ulong *)pppuVar5[7];
            uStack_128 = *(undefined4 *)(pppuVar5 + 8);
            uStack_120 = 0;
            uStack_118 = 0;
            func_0x00010a052690(puVar6 + 0x168,&ppuStack_178);
            puVar7 = puVar6;
            FUN_10a0051e8(puVar6,param_3,*(undefined4 *)(pppuVar5 + 1),*(undefined4 *)(pppuVar5 + 8)
                          ,*(undefined4 *)((long)pppuVar5 + 0xc),*(undefined4 *)(pppuVar5 + 2));
            if (((ulong)puVar7 & 1) == 0) {
              ppuStack_110 = &PTR_DAT_110c4a690;
              uStack_108 = 0;
              ppuStack_178 = &PTR_DAT_110c42c58;
              uStack_170 = 0;
              uStack_168 = CONCAT71(uStack_168._1_7_,1);
              func_0x0001098949cc(puVar6,*pppuVar5,&ppuStack_110,&ppuStack_178);
            }
            auVar20._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(pppuVar5 + 1) << 0x20;
            auVar20._0_8_ = puVar6;
            return auVar20;
          }
          lVar9 = (long)puVar6 * 9;
          puStack_c0 = (undefined1 *)&ppuStack_b0;
          __Znwm(lVar9);
          auVar19._8_8_ = puVar6;
          auVar19._0_8_ = lVar9;
          return auVar19;
        }
        lVar9 = (long)ppppuVar3[2] - (long)*ppppuVar3 >> 3;
        uVar12 = lVar9 * -0x6276276276276276;
        if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
          uVar12 = uVar11;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5)) {
          uVar12 = 0x276276276276276;
        }
        if (uVar12 == 0) {
          ppppuVar4 = (ulong ****)0x0;
        }
        else {
          ppppuVar4 = ppppuVar3;
          FUN_10a18d164();
        }
        pppuVar13 = (ulong ***)((long)ppppuVar4 + lVar10);
        lVar9 = (long)pppuVar8 * 0xd;
        pppuVar5 = pppuVar13;
        do {
          pppuVar5[4] = (ulong **)0x0;
          pppuVar5[1] = (ulong **)0x0;
          *pppuVar5 = (ulong **)0x0;
          pppuVar5[3] = (ulong **)0x0;
          pppuVar5[2] = (ulong **)0x0;
          pppuVar5[6] = (ulong **)0x0;
          pppuVar5[5] = (ulong **)0x3f800000;
          pppuVar5[8] = (ulong **)0x0;
          pppuVar5[7] = (ulong **)0x3f80000000000000;
          pppuVar5[10] = (ulong **)0x3f800000;
          pppuVar5[9] = (ulong **)0x0;
          pppuVar5[0xc] = (ulong **)0x3f80000000000000;
          pppuVar5[0xb] = (ulong **)0x0;
          pppuVar5 = pppuVar5 + 0xd;
        } while (pppuVar5 != pppuVar13 + lVar9);
        pppuVar8 = *ppppuVar3;
        pppuVar14 = (ulong ***)((long)pppuVar13 - ((long)ppppuVar3[1] - (long)pppuVar8));
        _memcpy(pppuVar14);
        pppuVar5 = *ppppuVar3;
        *ppppuVar3 = pppuVar14;
        ppppuVar3[1] = pppuVar13 + lVar9;
        ppppuVar3[2] = (ulong ***)(ppppuVar4 + uVar12 * 0xd);
        ppppuVar3 = (ulong ****)0x0;
        if (pppuVar5 != (ulong ***)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          auVar21._8_8_ = pppuVar8;
          auVar21._0_8_ = pppuVar5;
          return auVar21;
        }
      }
      else {
        pppuVar5 = pppuVar13;
        if (pppuVar8 != (ulong ***)0x0) {
          pppuVar5 = pppuVar13 + (long)pppuVar8 * 0xd;
          do {
            pppuVar13[4] = (ulong **)0x0;
            pppuVar13[1] = (ulong **)0x0;
            *pppuVar13 = (ulong **)0x0;
            pppuVar13[3] = (ulong **)0x0;
            pppuVar13[2] = (ulong **)0x0;
            pppuVar13[6] = (ulong **)0x0;
            pppuVar13[5] = (ulong **)0x3f800000;
            pppuVar13[8] = (ulong **)0x0;
            pppuVar13[7] = (ulong **)0x3f80000000000000;
            pppuVar13[10] = (ulong **)0x3f800000;
            pppuVar13[9] = (ulong **)0x0;
            pppuVar13[0xc] = (ulong **)0x3f80000000000000;
            pppuVar13[0xb] = (ulong **)0x0;
            pppuVar13 = pppuVar13 + 0xd;
          } while (pppuVar13 != pppuVar5);
        }
        ppppuVar3[1] = pppuVar5;
      }
      auVar18._8_8_ = pppuVar8;
      auVar18._0_8_ = ppppuVar3;
      return auVar18;
    }
    lVar10 = (long)param_1[2] - (long)*param_1 >> 4;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
      uVar12 = uVar11;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar12 = 0x555555555555555;
    }
    pppuStack_48 = (ulong ***)param_1;
    if (uVar12 == 0) {
      ppppuVar3 = (ulong ****)0x0;
    }
    else {
      ppppuVar3 = param_1;
      FUN_10a0d38c0();
    }
    lVar9 = (long)ppppuVar3 + lVar9;
    lVar10 = (((long)pppuVar5 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30;
    pppuStack_68 = (ulong ***)ppppuVar3;
    ppuStack_60 = (ulong **)lVar9;
    pppuStack_50 = (ulong ***)(ppppuVar3 + uVar12 * 6);
    _bzero(lVar9,lVar10);
    pppuVar5 = (ulong ***)(lVar9 + lVar10);
    pppuVar13 = *param_1;
    pppuVar8 = (ulong ***)((long)pppuVar13 + (lVar9 - (long)param_1[1]));
    ppuStack_58 = (ulong **)pppuVar5;
    func_0x00010a0d3904(param_1,pppuVar13,param_1[1],pppuVar8);
    pppuStack_68 = *param_1;
    *param_1 = pppuVar8;
    param_1[1] = pppuVar5;
    pppuStack_50 = param_1[2];
    param_1[2] = (ulong ***)(ppppuVar3 + uVar12 * 6);
    ppppuVar4 = &pppuStack_68;
    ppuStack_60 = (ulong **)pppuStack_68;
    ppuStack_58 = (ulong **)pppuStack_68;
    func_0x00010a0d39d8(ppppuVar4);
  }
  else {
    pppuVar13 = (ulong ***)0x0;
    ppppuVar4 = param_1;
    if (pppuVar5 != (ulong ***)0x0) {
      uVar11 = ((long)pppuVar5 * 0x30 - 0x30U) / 0x30;
      pppuVar13 = (ulong ***)(uVar11 * 0x30 + 0x30);
      ppppuVar4 = ppppuVar3;
      _bzero(ppppuVar3,pppuVar13);
      ppppuVar3 = ppppuVar3 + uVar11 * 6 + 6;
    }
    param_1[1] = (ulong ***)ppppuVar3;
  }
  auVar17._8_8_ = pppuVar13;
  auVar17._0_8_ = ppppuVar4;
  return auVar17;
}



/* Entry: 10ab4a45c; end: 10ab4a5b3;  */

void FUN_10ab4a45c(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  lVar7 = lVar5 - lVar4 >> 2;
  bVar2 = (ulong)(lVar7 * -0x5555555555555555) <= param_2;
  uVar1 = param_2 + lVar7 * 0x5555555555555555;
  if (bVar2 && uVar1 != 0) {
    if ((ulong)((param_1[2] - lVar5 >> 2) * -0x5555555555555555) < uVar1) {
      lVar7 = param_1[2] - lVar4 >> 2;
      uVar6 = lVar7 * 0x5555555555555556;
      if (uVar6 < param_2 || uVar6 - param_2 == 0) {
        uVar6 = param_2;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
        uVar6 = 0x1555555555555555;
      }
      plVar3 = param_1;
      FUN_10a0d3bf8();
      lVar5 = (long)plVar3 + (lVar5 - lVar4);
      lVar8 = ((uVar1 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
      _bzero(lVar5,lVar8);
      lVar7 = lVar5 - (param_1[1] - *param_1);
      _memcpy(lVar7);
      lVar4 = *param_1;
      *param_1 = lVar7;
      param_1[1] = lVar5 + lVar8;
      param_1[2] = (long)plVar3 + uVar6 * 0xc;
      if (lVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    lVar4 = ((uVar1 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar5,lVar4);
    lVar5 = lVar5 + lVar4;
  }
  else {
    if (bVar2) {
      return;
    }
    lVar5 = lVar4 + param_2 * 0xc;
  }
  param_1[1] = lVar5;
  return;
}



/* Entry: 10ab4a5b4; end: 10ab4a5ff;  */

long * FUN_10ab4a5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  int iVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined4 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uStack_118;
  int iStack_10c;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  long *plStack_a8;
  long *aplStack_a0 [2];
  
  iVar5 = *(int *)(param_5 + 0xe8);
  if (iVar5 - 1U < 2) {
    lVar25 = 1;
    if (iVar5 == 2) {
      lVar25 = 2;
    }
    return (long *)((ulong)(*(long *)(param_5 + 0x30) - *(long *)(param_5 + 0x28)) >> lVar25);
  }
  if (iVar5 == 0) {
    return (long *)0x0;
  }
  puVar7 = &UNK_10f6929cf;
  FUN_10a00946c();
  uVar12 = *(uint *)(puVar7 + 0x110);
  if (uVar12 != 0xffffffff) {
    uVar19 = (*(long *)(puVar7 + 0x100) - *(long *)(puVar7 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar12 <= uVar19 && uVar19 - uVar12 != 0) {
      lVar25 = *(long *)(puVar7 + 0xf8) + (ulong)uVar12 * 0x38;
      goto LAB_10ab4a670;
    }
LAB_10ab4ac48:
    FUN_10ab725fc();
LAB_10ab4ac4c:
    FUN_10a00946c(&UNK_10f6921f0);
    goto LAB_10ab4ac60;
  }
  lVar25 = 0;
LAB_10ab4a670:
  uVar12 = *(uint *)(puVar7 + 0x130);
  if (uVar12 == 0xffffffff) {
    lVar26 = 0;
    if (lVar25 == 0) goto LAB_10ab4a728;
LAB_10ab4a6ac:
    if (((*(int *)(lVar25 + 0x28) != 3 || lVar26 == 0) || (*(int *)(lVar26 + 0x28) != 4)) ||
       (1 < *(int *)(puVar7 + 0xe8) - 1U)) goto LAB_10ab4a728;
    FUN_10ab4c544(aplStack_a0,puVar7,lVar25);
    func_0x00010ab4c84c(&plStack_a8,puVar7,lVar26);
    plVar10 = aplStack_a0[0];
    plVar9 = plStack_a8;
    if ((aplStack_a0[0] != (long *)0x0) && (plStack_a8 != (long *)0x0)) {
      uVar12 = *(uint *)(puVar7 + 0xf0);
      if (uVar12 == 0) {
        uStack_118 = 0;
      }
      else {
        uStack_118 = 0;
        if ((ulong)uVar12 != 0) {
          uStack_118 = (uint)((ulong)(*(long *)(puVar7 + 0x18) - *(long *)(puVar7 + 0x10)) /
                             (ulong)uVar12);
        }
      }
      lVar25 = *(long *)(puVar7 + 0x28);
      iVar5 = *(int *)(puVar7 + 0xe8);
      FUN_10ab4a274(puVar7 + 0x70,
                    (*(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) >> 5) * -0x5555555555555555
                   );
      puVar13 = *(undefined8 **)(puVar7 + 0x70);
      if (0 < *(long *)(puVar7 + 0x78) - (long)puVar13) {
        uVar19 = (ulong)(*(long *)(puVar7 + 0x78) - (long)puVar13) / 0x18 + 1;
        param_1 = 0;
        do {
          puVar13[1] = 0xff7fffff00000000;
          *puVar13 = 0;
          puVar13[2] = 0xff7fffffff7fffff;
          puVar13 = puVar13 + 3;
          uVar19 = uVar19 - 1;
        } while (1 < uVar19);
      }
      plVar3 = *(long **)(puVar7 + 0x90);
      for (plVar1 = *(long **)(puVar7 + 0x88); plVar1 != plVar3; plVar1 = plVar1 + 6) {
        if (*plVar1 != plVar1[1]) {
          puVar4 = (uint *)plVar1[4];
          for (puVar2 = (uint *)plVar1[3]; puVar2 != puVar4; puVar2 = puVar2 + 3) {
            uVar19 = (ulong)*puVar2;
            lVar26 = *(long *)(puVar7 + 0xd0);
            if (lVar26 == *(long *)(puVar7 + 0xd8)) {
              iStack_10c = 0;
            }
            else {
              uVar21 = (ulong)puVar2[2];
              uVar17 = (*(long *)(puVar7 + 0xd8) - lVar26 >> 3) * 0x4ec4ec4ec4ec4ec5;
              if (uVar17 < uVar21 || uVar17 - uVar21 == 0) goto LAB_10ab4ac60;
              iStack_10c = *(int *)(lVar26 + uVar21 * 0x68 + 8);
            }
            uVar21 = puVar2[1] + uVar19;
            uVar27 = param_1;
            uVar29 = param_2;
            uVar32 = param_3;
            if (puVar2[1] != 0) {
LAB_10ab4aa48:
              if (iVar5 == 1) {
                uVar12 = (uint)*(ushort *)(lVar25 + uVar19 * 2);
              }
              else {
                uVar12 = *(uint *)(lVar25 + uVar19 * 4);
              }
              uVar12 = uVar12 + iStack_10c;
              if (uVar12 < uStack_118) {
                (**(code **)(*plVar10 + 0x10))(plVar10,uVar12);
                param_1 = uVar27;
                param_2 = uVar29;
                param_3 = uVar32;
                (**(code **)(*plVar9 + 0x10))(plVar9,uVar12);
                fVar34 = (float)param_4;
                fVar30 = (float)param_3;
                fVar28 = (float)param_2;
                iVar24 = 0;
                do {
                  if (iVar24 < 3) {
                    fVar31 = fVar28;
                    if ((iVar24 != 1) && (fVar31 = (float)param_1, iVar24 == 2)) {
                      fVar31 = fVar30;
                    }
                  }
                  else {
                    fVar31 = fVar34;
                    if ((iVar24 != 3) && (fVar31 = (float)param_1, iVar24 == 4)) goto LAB_10ab4abf8;
                  }
                  if ((ulong)(plVar1[1] - *plVar1 >> 2) <= (ulong)(long)(int)fVar31) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  uVar23 = (ulong)*(uint *)(*plVar1 + (long)(int)fVar31 * 4);
                  uVar17 = (*(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) >> 5) *
                           -0x5555555555555555;
                  if (uVar17 < uVar23 || uVar17 - uVar23 == 0) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  lVar26 = *(long *)(puVar7 + 0x58) + uVar23 * 0x60;
                  fVar35 = (float)uVar27;
                  fVar36 = (float)uVar29;
                  fVar33 = (float)uVar32;
                  fStack_b0 = fVar35 * *(float *)(lVar26 + 0x28) +
                              fVar36 * *(float *)(lVar26 + 0x38) +
                              fVar33 * *(float *)(lVar26 + 0x48) + *(float *)(lVar26 + 0x58);
                  param_4 = *(undefined8 *)(lVar26 + 0x50);
                  fVar31 = (float)*(undefined8 *)(lVar26 + 0x40) * fVar33 + (float)param_4;
                  fVar33 = (float)((ulong)*(undefined8 *)(lVar26 + 0x40) >> 0x20) * fVar33 +
                           (float)((ulong)param_4 >> 0x20);
                  param_3 = CONCAT44(fVar33,fVar31);
                  param_2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) * fVar35
                                     + (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20) *
                                       fVar36 + fVar33,
                                     (float)*(undefined8 *)(lVar26 + 0x20) * fVar35 +
                                     (float)*(undefined8 *)(lVar26 + 0x30) * fVar36 + fVar31);
                  uVar17 = (*(long *)(puVar7 + 0x78) - *(long *)(puVar7 + 0x70) >> 3) *
                           -0x5555555555555555;
                  uStack_b8 = param_2;
                  if (uVar17 < uVar23 || uVar17 - uVar23 == 0) goto LAB_10ab4ac60;
                  func_0x00010a01069c(&uStack_d0,*(long *)(puVar7 + 0x70) + uVar23 * 0x18,&uStack_b8
                                     );
                  uVar17 = (*(long *)(puVar7 + 0x78) - *(long *)(puVar7 + 0x70) >> 3) *
                           -0x5555555555555555;
                  if (uVar17 < uVar23 || uVar17 - uVar23 == 0) goto LAB_10ab4ac60;
                  puVar13 = (undefined8 *)(*(long *)(puVar7 + 0x70) + uVar23 * 0x18);
                  puVar13[2] = uStack_c0;
                  puVar13[1] = uStack_c8;
                  *puVar13 = uStack_d0;
                  iVar24 = iVar24 + 1;
                } while( true );
              }
              goto LAB_10ab4ac4c;
            }
LAB_10ab4ac08:
          }
        }
      }
      goto LAB_10ab4a8dc;
    }
  }
  else {
    uVar19 = (*(long *)(puVar7 + 0x100) - *(long *)(puVar7 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar19 < uVar12 || uVar19 - uVar12 == 0) goto LAB_10ab4ac48;
    lVar26 = *(long *)(puVar7 + 0xf8) + (ulong)uVar12 * 0x38;
    if (lVar25 != 0) goto LAB_10ab4a6ac;
LAB_10ab4a728:
    plStack_a8 = (long *)0x0;
    aplStack_a0[0] = (long *)0x0;
  }
  plVar10 = aplStack_a0[0];
  puVar8 = (undefined8 *)(puVar7 + 0x70);
  puVar13 = *(undefined8 **)(puVar7 + 0x78);
  if (((undefined8 *)*puVar8 == puVar13) &&
     (*(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) != 0)) {
    lVar16 = *(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) >> 5;
    uVar21 = lVar16 * -0x5555555555555555;
    lVar15 = *(long *)(puVar7 + 0x80) - (long)*puVar8 >> 3;
    uVar19 = lVar15 * -0x5555555555555555;
    if (uVar19 < uVar21) {
      if (0xaaaaaaaaaaaaaaa < uVar21) {
        FUN_10a559bb0();
LAB_10ab4ac60:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab4ac64);
        (*pcVar6)();
      }
      uVar17 = lVar15 * 0x5555555555555556;
      if (uVar17 < uVar21 || uVar17 + lVar16 * 0x5555555555555555 == 0) {
        uVar17 = uVar21;
      }
      if (0x555555555555554 < uVar19) {
        uVar17 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a559bc4();
      lVar15 = lVar16 * 8;
      puVar13 = puVar8;
      do {
        puVar13[1] = 0xff7fffff00000000;
        *puVar13 = 0;
        puVar13[2] = 0xff7fffffff7fffff;
        puVar13 = puVar13 + 3;
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != 0);
      lVar22 = (long)puVar8 - (*(long *)(puVar7 + 0x78) - *(long *)(puVar7 + 0x70));
      _memcpy(lVar22);
      lVar15 = *(long *)(puVar7 + 0x70);
      *(long *)(puVar7 + 0x70) = lVar22;
      *(undefined8 **)(puVar7 + 0x78) = puVar8 + lVar16;
      *(undefined8 **)(puVar7 + 0x80) = puVar8 + uVar17 * 3;
      if (lVar15 != 0) {
        __ZdlPv();
      }
    }
    else {
      puVar8 = puVar13 + lVar16;
      lVar16 = lVar16 * 8;
      do {
        puVar13[1] = 0xff7fffff00000000;
        *puVar13 = 0;
        puVar13[2] = 0xff7fffffff7fffff;
        puVar13 = puVar13 + 3;
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != 0);
      *(undefined8 **)(puVar7 + 0x78) = puVar8;
    }
  }
  if (((bRam00000001137ec498 & 1) == 0) &&
     (bRam00000001137ec498 = 1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
    if (lVar25 == 0) {
      uVar11 = 0;
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = *(undefined4 *)(lVar25 + 0x24);
      uVar11 = *(undefined4 *)(lVar25 + 0x28);
    }
    if (lVar26 == 0) {
      uVar18 = 0;
      uVar20 = 0xffffffff;
    }
    else {
      uVar20 = *(undefined4 *)(lVar26 + 0x24);
      uVar18 = *(undefined4 *)(lVar26 + 0x28);
    }
    func_0x00010ae06f08(1,2,&UNK_10f692aff,&UNK_10f692b2b,0x4df,&UNK_10f692b65,in_x6,in_x7,
                        (*(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) >> 5) *
                        -0x5555555555555555,uVar11,uVar14,uVar18,uVar20,
                        *(undefined4 *)(puVar7 + 0xe8));
  }
LAB_10ab4a8dc:
  plVar9 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    (**(code **)(*plStack_a8 + 8))();
  }
  aplStack_a0[0] = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
    plVar9 = plVar10;
  }
  return plVar9;
LAB_10ab4abf8:
  uVar19 = uVar19 + 1;
  uVar27 = param_1;
  uVar29 = param_2;
  uVar32 = param_3;
  if (uVar19 == uVar21) goto LAB_10ab4ac08;
  goto LAB_10ab4aa48;
}



/* Entry: 10ab4a600; end: 10ab4acdf;  */

void FUN_10ab4a600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined4 uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uStack_108;
  int iStack_fc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  long *plStack_98;
  long *aplStack_90 [2];
  
  uVar10 = *(uint *)(param_5 + 0x110);
  if (uVar10 != 0xffffffff) {
    uVar17 = (*(long *)(param_5 + 0x100) - *(long *)(param_5 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar10 <= uVar17 && uVar17 - uVar10 != 0) {
      lVar24 = *(long *)(param_5 + 0xf8) + (ulong)uVar10 * 0x38;
      goto LAB_10ab4a670;
    }
LAB_10ab4ac48:
    FUN_10ab725fc();
LAB_10ab4ac4c:
    FUN_10a00946c(&UNK_10f6921f0);
    goto LAB_10ab4ac60;
  }
  lVar24 = 0;
LAB_10ab4a670:
  uVar10 = *(uint *)(param_5 + 0x130);
  if (uVar10 == 0xffffffff) {
    lVar25 = 0;
    if (lVar24 == 0) goto LAB_10ab4a728;
LAB_10ab4a6ac:
    if (((*(int *)(lVar24 + 0x28) != 3 || lVar25 == 0) || (*(int *)(lVar25 + 0x28) != 4)) ||
       (1 < *(int *)(param_5 + 0xe8) - 1U)) goto LAB_10ab4a728;
    FUN_10ab4c544(aplStack_90,param_5,lVar24);
    func_0x00010ab4c84c(&plStack_98,param_5,lVar25);
    plVar19 = aplStack_90[0];
    plVar6 = plStack_98;
    if ((aplStack_90[0] != (long *)0x0) && (plStack_98 != (long *)0x0)) {
      uVar10 = *(uint *)(param_5 + 0xf0);
      if (uVar10 == 0) {
        uStack_108 = 0;
      }
      else {
        uStack_108 = 0;
        if ((ulong)uVar10 != 0) {
          uStack_108 = (uint)((ulong)(*(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10)) /
                             (ulong)uVar10);
        }
      }
      lVar24 = *(long *)(param_5 + 0x28);
      iVar5 = *(int *)(param_5 + 0xe8);
      FUN_10ab4a274(param_5 + 0x70,
                    (*(long *)(param_5 + 0x60) - *(long *)(param_5 + 0x58) >> 5) *
                    -0x5555555555555555);
      puVar11 = *(undefined8 **)(param_5 + 0x70);
      uVar17 = *(long *)(param_5 + 0x78) - (long)puVar11;
      if (0 < (long)uVar17) {
        uVar17 = uVar17 / 0x18 + 1;
        param_1 = 0;
        do {
          puVar11[1] = 0xff7fffff00000000;
          *puVar11 = 0;
          puVar11[2] = 0xff7fffffff7fffff;
          puVar11 = puVar11 + 3;
          uVar17 = uVar17 - 1;
        } while (1 < uVar17);
      }
      plVar3 = *(long **)(param_5 + 0x90);
      for (plVar1 = *(long **)(param_5 + 0x88); plVar1 != plVar3; plVar1 = plVar1 + 6) {
        if (*plVar1 != plVar1[1]) {
          puVar4 = (uint *)plVar1[4];
          for (puVar2 = (uint *)plVar1[3]; puVar2 != puVar4; puVar2 = puVar2 + 3) {
            uVar17 = (ulong)*puVar2;
            lVar25 = *(long *)(param_5 + 0xd0);
            if (lVar25 == *(long *)(param_5 + 0xd8)) {
              iStack_fc = 0;
            }
            else {
              uVar20 = (ulong)puVar2[2];
              uVar15 = (*(long *)(param_5 + 0xd8) - lVar25 >> 3) * 0x4ec4ec4ec4ec4ec5;
              if (uVar15 < uVar20 || uVar15 - uVar20 == 0) goto LAB_10ab4ac60;
              iStack_fc = *(int *)(lVar25 + uVar20 * 0x68 + 8);
            }
            uVar20 = puVar2[1] + uVar17;
            uVar26 = param_1;
            uVar28 = param_2;
            uVar31 = param_3;
            if (puVar2[1] != 0) {
LAB_10ab4aa48:
              if (iVar5 == 1) {
                uVar10 = (uint)*(ushort *)(lVar24 + uVar17 * 2);
              }
              else {
                uVar10 = *(uint *)(lVar24 + uVar17 * 4);
              }
              uVar10 = uVar10 + iStack_fc;
              if (uVar10 < uStack_108) {
                (**(code **)(*plVar19 + 0x10))(plVar19,uVar10);
                param_1 = uVar26;
                param_2 = uVar28;
                param_3 = uVar31;
                (**(code **)(*plVar6 + 0x10))(plVar6,uVar10);
                fVar33 = (float)param_4;
                fVar29 = (float)param_3;
                fVar27 = (float)param_2;
                iVar23 = 0;
                do {
                  if (iVar23 < 3) {
                    fVar30 = fVar27;
                    if ((iVar23 != 1) && (fVar30 = (float)param_1, iVar23 == 2)) {
                      fVar30 = fVar29;
                    }
                  }
                  else {
                    fVar30 = fVar33;
                    if ((iVar23 != 3) && (fVar30 = (float)param_1, iVar23 == 4)) goto LAB_10ab4abf8;
                  }
                  if ((ulong)(plVar1[1] - *plVar1 >> 2) <= (ulong)(long)(int)fVar30) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  uVar22 = (ulong)*(uint *)(*plVar1 + (long)(int)fVar30 * 4);
                  uVar15 = (*(long *)(param_5 + 0x60) - *(long *)(param_5 + 0x58) >> 5) *
                           -0x5555555555555555;
                  if (uVar15 < uVar22 || uVar15 - uVar22 == 0) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  lVar25 = *(long *)(param_5 + 0x58) + uVar22 * 0x60;
                  fVar34 = (float)uVar26;
                  fVar35 = (float)uVar28;
                  fVar32 = (float)uVar31;
                  fStack_a0 = fVar34 * *(float *)(lVar25 + 0x28) +
                              fVar35 * *(float *)(lVar25 + 0x38) +
                              fVar32 * *(float *)(lVar25 + 0x48) + *(float *)(lVar25 + 0x58);
                  param_4 = *(undefined8 *)(lVar25 + 0x50);
                  fVar30 = (float)*(undefined8 *)(lVar25 + 0x40) * fVar32 + (float)param_4;
                  fVar32 = (float)((ulong)*(undefined8 *)(lVar25 + 0x40) >> 0x20) * fVar32 +
                           (float)((ulong)param_4 >> 0x20);
                  param_3 = CONCAT44(fVar32,fVar30);
                  param_2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar25 + 0x20) >> 0x20) * fVar34
                                     + (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20) *
                                       fVar35 + fVar32,
                                     (float)*(undefined8 *)(lVar25 + 0x20) * fVar34 +
                                     (float)*(undefined8 *)(lVar25 + 0x30) * fVar35 + fVar30);
                  uVar15 = (*(long *)(param_5 + 0x78) - *(long *)(param_5 + 0x70) >> 3) *
                           -0x5555555555555555;
                  uStack_a8 = param_2;
                  if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_10ab4ac60;
                  func_0x00010a01069c(&uStack_c0,*(long *)(param_5 + 0x70) + uVar22 * 0x18,
                                      &uStack_a8);
                  uVar15 = (*(long *)(param_5 + 0x78) - *(long *)(param_5 + 0x70) >> 3) *
                           -0x5555555555555555;
                  if (uVar15 < uVar22 || uVar15 - uVar22 == 0) goto LAB_10ab4ac60;
                  puVar11 = (undefined8 *)(*(long *)(param_5 + 0x70) + uVar22 * 0x18);
                  puVar11[2] = uStack_b0;
                  puVar11[1] = uStack_b8;
                  *puVar11 = uStack_c0;
                  iVar23 = iVar23 + 1;
                } while( true );
              }
              goto LAB_10ab4ac4c;
            }
LAB_10ab4ac08:
          }
        }
      }
      goto LAB_10ab4a8dc;
    }
  }
  else {
    uVar17 = (*(long *)(param_5 + 0x100) - *(long *)(param_5 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar17 < uVar10 || uVar17 - uVar10 == 0) goto LAB_10ab4ac48;
    lVar25 = *(long *)(param_5 + 0xf8) + (ulong)uVar10 * 0x38;
    if (lVar24 != 0) goto LAB_10ab4a6ac;
LAB_10ab4a728:
    plStack_98 = (long *)0x0;
    aplStack_90[0] = (long *)0x0;
  }
  plVar19 = aplStack_90[0];
  puVar8 = (undefined8 *)(param_5 + 0x70);
  puVar11 = *(undefined8 **)(param_5 + 0x78);
  if (((undefined8 *)*puVar8 == puVar11) &&
     (lVar14 = *(long *)(param_5 + 0x60) - *(long *)(param_5 + 0x58), lVar14 != 0)) {
    lVar14 = lVar14 >> 5;
    uVar20 = lVar14 * -0x5555555555555555;
    lVar13 = *(long *)(param_5 + 0x80) - (long)*puVar8 >> 3;
    uVar17 = lVar13 * -0x5555555555555555;
    if (uVar17 < uVar20) {
      if (0xaaaaaaaaaaaaaaa < uVar20) {
        FUN_10a559bb0();
LAB_10ab4ac60:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ab4ac64);
        (*pcVar7)();
      }
      uVar15 = lVar13 * 0x5555555555555556;
      if (uVar15 < uVar20 || uVar15 + lVar14 * 0x5555555555555555 == 0) {
        uVar15 = uVar20;
      }
      if (0x555555555555554 < uVar17) {
        uVar15 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a559bc4();
      lVar13 = lVar14 * 8;
      puVar11 = puVar8;
      do {
        puVar11[1] = 0xff7fffff00000000;
        *puVar11 = 0;
        puVar11[2] = 0xff7fffffff7fffff;
        puVar11 = puVar11 + 3;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != 0);
      lVar21 = (long)puVar8 - (*(long *)(param_5 + 0x78) - *(long *)(param_5 + 0x70));
      _memcpy(lVar21);
      lVar13 = *(long *)(param_5 + 0x70);
      *(long *)(param_5 + 0x70) = lVar21;
      *(undefined8 **)(param_5 + 0x78) = puVar8 + lVar14;
      *(undefined8 **)(param_5 + 0x80) = puVar8 + uVar15 * 3;
      if (lVar13 != 0) {
        __ZdlPv();
      }
    }
    else {
      puVar8 = puVar11 + lVar14;
      lVar14 = lVar14 * 8;
      do {
        puVar11[1] = 0xff7fffff00000000;
        *puVar11 = 0;
        puVar11[2] = 0xff7fffffff7fffff;
        puVar11 = puVar11 + 3;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != 0);
      *(undefined8 **)(param_5 + 0x78) = puVar8;
    }
  }
  if (((bRam00000001137ec498 & 1) == 0) &&
     (bRam00000001137ec498 = 1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
    if (lVar24 == 0) {
      uVar9 = 0;
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = *(undefined4 *)(lVar24 + 0x24);
      uVar9 = *(undefined4 *)(lVar24 + 0x28);
    }
    if (lVar25 == 0) {
      uVar16 = 0;
      uVar18 = 0xffffffff;
    }
    else {
      uVar18 = *(undefined4 *)(lVar25 + 0x24);
      uVar16 = *(undefined4 *)(lVar25 + 0x28);
    }
    func_0x00010ae06f08(1,2,&UNK_10f692aff,&UNK_10f692b2b,0x4df,&UNK_10f692b65,in_x6,in_x7,
                        (*(long *)(param_5 + 0x60) - *(long *)(param_5 + 0x58) >> 5) *
                        -0x5555555555555555,uVar9,uVar12,uVar16,uVar18,
                        *(undefined4 *)(param_5 + 0xe8));
  }
LAB_10ab4a8dc:
  if (plStack_98 != (long *)0x0) {
    (**(code **)(*plStack_98 + 8))();
  }
  aplStack_90[0] = (long *)0x0;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 8))(plVar19);
  }
  return;
LAB_10ab4abf8:
  uVar17 = uVar17 + 1;
  uVar26 = param_1;
  uVar28 = param_2;
  uVar31 = param_3;
  if (uVar17 == uVar20) goto LAB_10ab4ac08;
  goto LAB_10ab4aa48;
}



/* Entry: 10ab4ace0; end: 10ab4aef7;  */

undefined1  [16] FUN_10ab4ace0(long param_1,long *param_2,ulong param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  char cStack_58;
  
  ppuVar12 = &PTR_DAT_110c4a530;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c4a530);
  if ((int)plVar9 == 0) goto LAB_10ab4aed8;
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c4a530);
  ppuVar12 = &PTR_s_hash_110c4aaf0;
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_s_hash_110c4aaf0);
  if ((int)plVar9 != 0) {
    ppuVar12 = &PTR_s_hash_110c4aaf0;
    plVar9 = param_2;
    (**(code **)(*param_2 + 0x20))(param_2,&PTR_s_hash_110c4aaf0);
    plVar20 = plVar9;
    FUN_10ab50de0();
    if (plVar9 == plVar20) {
      plVar9 = param_2;
      (**(code **)(*param_2 + 200))(param_2,&PTR_s_version_110c4a550);
      *(int *)(param_1 + 0xc) = (int)plVar9;
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c4a570);
      *(char *)(param_1 + 0x10) = (char)plVar9;
      ppuVar12 = &PTR_DAT_110c4a590;
      plVar9 = param_2;
      (**(code **)(*param_2 + 0x1d8))(&ppuStack_68);
      ppuVar18 = ppuStack_68;
      ppuVar17 = ppuStack_60;
      if (cStack_58 == '\0') {
        ppuVar17 = (undefined **)0x0;
        ppuVar18 = (undefined **)0x0;
      }
      puVar19 = (undefined8 *)(param_1 + 0x18);
      plVar20 = (long *)*puVar19;
      ppuVar1 = (undefined **)((long)ppuVar18 + (long)ppuVar17);
      uVar6 = *(ulong *)(param_1 + 0x28);
      if ((undefined **)(uVar6 - (long)plVar20) < ppuVar17) {
        if (plVar20 != (long *)0x0) {
          *(long **)(param_1 + 0x20) = plVar20;
          __ZdlPv();
          uVar6 = 0;
          *puVar19 = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          plVar9 = plVar20;
        }
        if ((long)ppuVar17 < 0) {
          FUN_10a044fe8();
          lVar10 = plVar9[1] - *plVar9 >> 3;
          bVar2 = ppuVar12 < (undefined **)(lVar10 * 0x4ec4ec4ec4ec4ec5);
          puVar19 = (undefined8 *)((long)ppuVar12 + lVar10 * -0x4ec4ec4ec4ec4ec5);
          if (bVar2 || puVar19 == (undefined8 *)0x0) {
            if (bVar2) {
              plVar9[1] = *plVar9 + (long)ppuVar12 * 0x68;
            }
            auVar22._8_8_ = ppuVar12;
            auVar22._0_8_ = plVar9;
            return auVar22;
          }
          pcStack_78 = FUN_10ab4aef8;
          puVar5 = (undefined8 *)plVar9[1];
          if ((undefined8 *)((plVar9[2] - (long)puVar5 >> 3) * 0x4ec4ec4ec4ec4ec5) < puVar19) {
            lVar10 = (long)puVar5 - *plVar9;
            uVar6 = (long)puVar19 + (lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
            ppuStack_a0 = ppuVar17;
            ppuStack_98 = ppuVar18;
            lStack_90 = param_1;
            plStack_88 = param_2;
            puStack_80 = &stack0xfffffffffffffff0;
            if (0x276276276276276 < uVar6) {
              puVar5 = puVar19;
              FUN_10a18d150();
              pcStack_a8 = FUN_10ab55604;
              puVar3 = &DAT_10f62a4d8;
              ppuStack_b0 = &puStack_80;
              FUN_109ffde64();
              pcStack_b8 = FUN_10ab55618;
              ppuStack_e0 = &puStack_c0;
              puStack_d0 = puVar19;
              plStack_c8 = plVar9;
              if (puVar3 < (undefined *)0x1c71c71c71c71c72) {
                lVar10 = (long)puVar3 * 9;
                puStack_c0 = (undefined1 *)&ppuStack_b0;
                __Znwm(lVar10);
                auVar24._8_8_ = puVar3;
                auVar24._0_8_ = lVar10;
                return auVar24;
              }
              puStack_c0 = (undefined1 *)&ppuStack_b0;
              func_0x000109ffded8();
              pcStack_d8 = FUN_10ab5565c;
              *(undefined ***)(puVar3 + 0x1b0) = &PTR_DAT_110c4a690;
              puVar4 = &UNK_10f692150;
              if ((undefined *)*puVar5 != (undefined *)0x0) {
                puVar4 = (undefined *)*puVar5;
              }
              ppuStack_100 = ppuVar17;
              lStack_f8 = lVar10;
              puStack_f0 = puVar19;
              plStack_e8 = plVar9;
              func_0x000107c2c4dc(puVar3 + 0x1b8,puVar4);
              ppuStack_178 = (undefined **)*puVar5;
              uStack_170 = 0;
              uStack_168 = 0;
              uStack_160 = (undefined4)param_3;
              uStack_15c = puVar5[1];
              uStack_154 = *(undefined4 *)(puVar5 + 2);
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              uStack_130 = puVar5[7];
              uStack_128 = *(undefined4 *)(puVar5 + 8);
              uStack_120 = 0;
              uStack_118 = 0;
              func_0x00010a052690(puVar3 + 0x168,&ppuStack_178);
              puVar4 = puVar3;
              FUN_10a0051e8(puVar3,param_3,*(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 8),
                            *(undefined4 *)((long)puVar5 + 0xc),*(undefined4 *)(puVar5 + 2));
              if (((ulong)puVar4 & 1) == 0) {
                ppuStack_110 = &PTR_DAT_110c4a690;
                uStack_108 = 0;
                ppuStack_178 = &PTR_DAT_110c42c58;
                uStack_170 = 0;
                uStack_168 = CONCAT71(uStack_168._1_7_,1);
                func_0x0001098949cc(puVar3,*puVar5,&ppuStack_110,&ppuStack_178);
              }
              auVar25._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(puVar5 + 1) << 0x20;
              auVar25._0_8_ = puVar3;
              return auVar25;
            }
            lVar14 = plVar9[2] - *plVar9 >> 3;
            uVar15 = lVar14 * -0x6276276276276276;
            if (uVar15 < uVar6 || uVar15 - uVar6 == 0) {
              uVar15 = uVar6;
            }
            if (0x13b13b13b13b13a < (ulong)(lVar14 * 0x4ec4ec4ec4ec4ec5)) {
              uVar15 = 0x276276276276276;
            }
            if (uVar15 == 0) {
              plVar20 = (long *)0x0;
            }
            else {
              plVar20 = plVar9;
              FUN_10a18d164();
            }
            puVar5 = (undefined8 *)((long)plVar20 + lVar10);
            lVar10 = (long)puVar19 * 0xd;
            puVar19 = puVar5;
            do {
              puVar19[4] = 0;
              puVar19[1] = 0;
              *puVar19 = 0;
              puVar19[3] = 0;
              puVar19[2] = 0;
              puVar19[6] = 0;
              puVar19[5] = 0x3f800000;
              puVar19[8] = 0;
              puVar19[7] = 0x3f80000000000000;
              puVar19[10] = 0x3f800000;
              puVar19[9] = 0;
              puVar19[0xc] = 0x3f80000000000000;
              puVar19[0xb] = 0;
              puVar19 = puVar19 + 0xd;
            } while (puVar19 != puVar5 + lVar10);
            puVar19 = (undefined8 *)*plVar9;
            lVar16 = (long)puVar5 - (plVar9[1] - (long)puVar19);
            _memcpy(lVar16);
            lVar14 = *plVar9;
            *plVar9 = lVar16;
            plVar9[1] = (long)(puVar5 + lVar10);
            plVar9[2] = (long)(plVar20 + uVar15 * 0xd);
            plVar9 = (long *)0x0;
            if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)();
              auVar26._8_8_ = puVar19;
              auVar26._0_8_ = lVar14;
              return auVar26;
            }
          }
          else {
            puVar11 = puVar5;
            if (puVar19 != (undefined8 *)0x0) {
              puVar11 = puVar5 + (long)puVar19 * 0xd;
              do {
                puVar5[4] = 0;
                puVar5[1] = 0;
                *puVar5 = 0;
                puVar5[3] = 0;
                puVar5[2] = 0;
                puVar5[6] = 0;
                puVar5[5] = 0x3f800000;
                puVar5[8] = 0;
                puVar5[7] = 0x3f80000000000000;
                puVar5[10] = 0x3f800000;
                puVar5[9] = 0;
                puVar5[0xc] = 0x3f80000000000000;
                puVar5[0xb] = 0;
                puVar5 = puVar5 + 0xd;
              } while (puVar5 != puVar11);
            }
            plVar9[1] = (long)puVar11;
          }
          auVar23._8_8_ = puVar19;
          auVar23._0_8_ = plVar9;
          return auVar23;
        }
        ppuVar12 = (undefined **)(uVar6 * 2);
        if (ppuVar12 < ppuVar17 || (long)ppuVar12 - (long)ppuVar17 == 0) {
          ppuVar12 = ppuVar17;
        }
        if (0x3ffffffffffffffe < uVar6) {
          ppuVar12 = (undefined **)0x7fffffffffffffff;
        }
        FUN_10a044fac(puVar19,ppuVar12);
        puVar7 = *(undefined1 **)(param_1 + 0x20);
        do {
          ppuVar17 = (undefined **)((long)ppuVar18 + 1);
          puVar8 = puVar7 + 1;
          *puVar7 = *(undefined1 *)ppuVar18;
          puVar7 = puVar8;
          ppuVar18 = ppuVar17;
        } while (ppuVar17 != ppuVar1);
      }
      else {
        plVar9 = *(long **)(param_1 + 0x20);
        if ((undefined **)((long)plVar9 - (long)plVar20) < ppuVar17) {
          ppuVar17 = (undefined **)(((long)plVar9 - (long)plVar20) + (long)ppuVar18);
          plVar13 = plVar9;
          if (plVar9 != plVar20) {
            _memmove(plVar20,ppuVar18);
            plVar9 = *(long **)(param_1 + 0x20);
            plVar13 = plVar9;
            ppuVar12 = ppuVar18;
          }
          do {
            ppuVar18 = (undefined **)((long)ppuVar17 + 1);
            *(undefined1 *)plVar9 = *(undefined1 *)ppuVar17;
            plVar13 = (long *)((long)plVar13 + 1);
            plVar9 = (long *)((long)plVar9 + 1);
            ppuVar17 = ppuVar18;
          } while (ppuVar18 != ppuVar1);
          *(long **)(param_1 + 0x20) = plVar13;
          goto LAB_10ab4aec8;
        }
        if (ppuVar17 != (undefined **)0x0) {
          _memmove(plVar20,ppuVar18,ppuVar17);
          ppuVar12 = ppuVar18;
        }
        puVar8 = (undefined1 *)((long)plVar20 + (long)ppuVar17);
      }
      *(undefined1 **)(param_1 + 0x20) = puVar8;
    }
  }
LAB_10ab4aec8:
  (**(code **)(*param_2 + 0x220))(param_2);
  plVar9 = param_2;
LAB_10ab4aed8:
  auVar21._8_8_ = ppuVar12;
  auVar21._0_8_ = plVar9;
  return auVar21;
}



/* Entry: 10ab4aef8; end: 10ab4af3b;  */

undefined1  [16] FUN_10ab4aef8(long *param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  
  lVar6 = param_1[1] - *param_1 >> 3;
  bVar1 = param_2 < (ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5);
  puVar5 = (undefined8 *)(param_2 + lVar6 * -0x4ec4ec4ec4ec4ec5);
  if (bVar1 || puVar5 == (undefined8 *)0x0) {
    if (bVar1) {
      param_1[1] = *param_1 + param_2 * 0x68;
    }
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = param_1;
    return auVar13;
  }
  puVar8 = (undefined8 *)param_1[1];
  if ((undefined8 *)((param_1[2] - (long)puVar8 >> 3) * 0x4ec4ec4ec4ec4ec5) < puVar5) {
    lVar6 = (long)puVar8 - *param_1;
    uVar7 = (long)puVar5 + (lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5;
    if (0x276276276276276 < uVar7) {
      FUN_10a18d150();
      puVar3 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if ((undefined *)0x1c71c71c71c71c71 < puVar3) {
        func_0x000109ffded8();
        *(undefined ***)(puVar3 + 0x1b0) = &PTR_DAT_110c4a690;
        puVar4 = &UNK_10f692150;
        if ((undefined *)*puVar5 != (undefined *)0x0) {
          puVar4 = (undefined *)*puVar5;
        }
        func_0x000107c2c4dc(puVar3 + 0x1b8,puVar4);
        ppuStack_108 = (undefined **)*puVar5;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = (undefined4)param_3;
        uStack_ec = puVar5[1];
        uStack_e4 = *(undefined4 *)(puVar5 + 2);
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_c0 = puVar5[7];
        uStack_b8 = *(undefined4 *)(puVar5 + 8);
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x00010a052690(puVar3 + 0x168,&ppuStack_108);
        puVar4 = puVar3;
        FUN_10a0051e8(puVar3,param_3,*(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 8),
                      *(undefined4 *)((long)puVar5 + 0xc),*(undefined4 *)(puVar5 + 2));
        if (((ulong)puVar4 & 1) == 0) {
          ppuStack_a0 = &PTR_DAT_110c4a690;
          uStack_98 = 0;
          ppuStack_108 = &PTR_DAT_110c42c58;
          uStack_100 = 0;
          uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
          func_0x0001098949cc(puVar3,*puVar5,&ppuStack_a0,&ppuStack_108);
        }
        auVar16._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(puVar5 + 1) << 0x20;
        auVar16._0_8_ = puVar3;
        return auVar16;
      }
      lVar6 = (long)puVar3 * 9;
      __Znwm(lVar6);
      auVar15._8_8_ = puVar3;
      auVar15._0_8_ = lVar6;
      return auVar15;
    }
    lVar10 = param_1[2] - *param_1 >> 3;
    uVar11 = lVar10 * -0x6276276276276276;
    if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
      uVar11 = uVar7;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar10 * 0x4ec4ec4ec4ec4ec5)) {
      uVar11 = 0x276276276276276;
    }
    if (uVar11 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a18d164();
    }
    puVar8 = (undefined8 *)((long)plVar2 + lVar6);
    lVar6 = (long)puVar5 * 0xd;
    puVar5 = puVar8;
    do {
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[6] = 0;
      puVar5[5] = 0x3f800000;
      puVar5[8] = 0;
      puVar5[7] = 0x3f80000000000000;
      puVar5[10] = 0x3f800000;
      puVar5[9] = 0;
      puVar5[0xc] = 0x3f80000000000000;
      puVar5[0xb] = 0;
      puVar5 = puVar5 + 0xd;
    } while (puVar5 != puVar8 + lVar6);
    puVar5 = (undefined8 *)*param_1;
    lVar12 = (long)puVar8 - (param_1[1] - (long)puVar5);
    _memcpy(lVar12);
    lVar10 = *param_1;
    *param_1 = lVar12;
    param_1[1] = (long)(puVar8 + lVar6);
    param_1[2] = (long)(plVar2 + uVar11 * 0xd);
    param_1 = (long *)0x0;
    if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar17._8_8_ = puVar5;
      auVar17._0_8_ = lVar10;
      return auVar17;
    }
  }
  else {
    puVar9 = puVar8;
    if (puVar5 != (undefined8 *)0x0) {
      puVar9 = puVar8 + (long)puVar5 * 0xd;
      do {
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[6] = 0;
        puVar8[5] = 0x3f800000;
        puVar8[8] = 0;
        puVar8[7] = 0x3f80000000000000;
        puVar8[10] = 0x3f800000;
        puVar8[9] = 0;
        puVar8[0xc] = 0x3f80000000000000;
        puVar8[0xb] = 0;
        puVar8 = puVar8 + 0xd;
      } while (puVar8 != puVar9);
    }
    param_1[1] = (long)puVar9;
  }
  auVar14._8_8_ = puVar5;
  auVar14._0_8_ = param_1;
  return auVar14;
}



/* Entry: 10ab4af3c; end: 10ab4c543;  */

void FUN_10ab4af3c(undefined8 param_1,float param_2,float param_3,long param_4,long *param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  byte bVar21;
  long lVar20;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong *puVar25;
  undefined4 *puVar26;
  ulong uVar27;
  long *plVar28;
  undefined4 *puVar29;
  ulong uVar30;
  long lVar31;
  float *pfVar32;
  ulong *puVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long lStack_100;
  long lStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined2 uStack_b2;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  
  (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c49fd0,*(undefined4 *)(param_4 + 0xe8));
  (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c49ff0,*(undefined4 *)(param_4 + 0xec));
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a010);
  FUN_10ab70850(param_4 + 0xf0,param_5);
  (**(code **)(*param_5 + 0x20))(param_5);
  if (*(long *)(param_4 + 400) != 0) {
    (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a030);
    plVar28 = *(long **)(param_4 + 400);
    plVar13 = plVar28;
    (**(code **)(*plVar28 + 0x18))(plVar28);
    (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4ab10,plVar13);
    (**(code **)(*plVar28 + 0x10))(plVar28,param_5,param_4);
    (**(code **)(*param_5 + 0x20))(param_5);
    goto LAB_10ab4b108;
  }
  for (lVar31 = *(long *)(param_4 + 0xf8); lVar31 != *(long *)(param_4 + 0x100);
      lVar31 = lVar31 + 0x38) {
    uVar24 = *(int *)(lVar31 + 0x24) - 1;
    if (uVar24 < 7) {
      iVar12 = *(int *)(&UNK_10e4fda1c + (ulong)uVar24 * 4);
    }
    else {
      iVar12 = 0;
    }
    uVar24 = *(int *)(lVar31 + 0x28) * iVar12;
    if ((uVar24 + 3 & 0xfffffffc) != uVar24) {
      (**(code **)(*param_5 + 0x70))(param_5,&PTR_DAT_110c4a050,0);
      FUN_10ab55260(&puStack_b0,
                    (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) *
                    0x6db6db6db6db6db7);
      FUN_10ab55260(&uStack_d0,
                    (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) *
                    0x6db6db6db6db6db7);
      lVar31 = *(long *)(param_4 + 0xf8);
      lVar15 = *(long *)(param_4 + 0x100) - lVar31;
      if (lVar15 == 0) {
        iVar12 = 0;
        goto LAB_10ab4c2b0;
      }
      iVar12 = 0;
      uVar27 = (lVar15 >> 3) * 0x6db6db6db6db6db7;
      uVar22 = 0;
      uVar30 = 1;
      goto LAB_10ab4c238;
    }
  }
  (**(code **)(*param_5 + 0x70))(param_5,&PTR_DAT_110c4a050,1);
  (**(code **)(*param_5 + 0x28))
            (param_5,&PTR_DAT_110c4a070,*(long *)(param_4 + 0x10),
             *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10));
  goto LAB_10ab4b0e8;
LAB_10ab4baf8:
  uVar22 = (ulong)(uint)(param_3 + (float)uStack_c8);
  uStack_c8 = CONCAT44(uStack_c8._4_4_,param_3 + (float)uStack_c8);
  iVar12 = (int)&uStack_d0;
LAB_10ab4bb14:
  func_0x00010ab62604();
  puVar26[uVar30] = iVar12;
  uVar30 = uVar30 + 1;
  if (uVar30 == uVar27) goto LAB_10ab4bb3c;
  goto LAB_10ab4ba90;
LAB_10ab4b9cc:
  uStack_c8 = CONCAT44(uStack_c8._4_4_,param_3 + (float)uStack_c8);
  iVar12 = (int)&uStack_d0;
LAB_10ab4b9e4:
  FUN_10ab62580();
  puVar26[uVar22] = iVar12;
  uVar22 = uVar22 + 1;
  if (uVar22 == uVar30) goto LAB_10ab4ba0c;
  goto LAB_10ab4b974;
  while( true ) {
    iVar8 = *(int *)(lVar15 + 0x28);
    *(ulong *)(puStack_b0 + uVar22 * 2) = (ulong)(iVar8 * iVar16 + 3U & 0xfffffffc);
    if (uVar24 < 7) {
      iVar16 = *(int *)(&UNK_10e4fda1c + (ulong)uVar24 * 4);
    }
    else {
      iVar16 = 0;
    }
    if ((ulong)((long)(uStack_c8 - uStack_d0) >> 3) <= uVar22) goto LAB_10ab4c434;
    uVar24 = iVar16 * iVar8;
    *(ulong *)(uStack_d0 + uVar22 * 8) = (ulong)uVar24;
    iVar12 = uVar24 + iVar12;
    bVar11 = uVar27 < uVar30;
    lVar15 = uVar27 - uVar30;
    uVar22 = uVar30;
    uVar30 = (ulong)((int)uVar30 + 1);
    if (bVar11 || lVar15 == 0) break;
LAB_10ab4c238:
    lVar15 = lVar31 + uVar22 * 0x38;
    uVar24 = *(int *)(lVar15 + 0x24) - 1;
    if (uVar24 < 7) {
      iVar16 = *(int *)(&UNK_10e4fda1c + (ulong)uVar24 * 4);
    }
    else {
      iVar16 = 0;
    }
    if ((ulong)((long)puStack_a8 - (long)puStack_b0 >> 3) <= uVar22) goto LAB_10ab4c434;
  }
LAB_10ab4c2b0:
  uVar24 = *(uint *)(param_4 + 0xf0);
  iVar16 = 0;
  if (uVar24 != 0) {
    iVar16 = 0;
    if ((ulong)uVar24 != 0) {
      iVar16 = (int)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) / (ulong)uVar24)
      ;
    }
  }
  FUN_10a0dc020(&plStack_e8,iVar16 * iVar12);
  uVar24 = 0;
  lVar31 = *(long *)(param_4 + 0x10);
  plVar13 = plStack_e8;
  while( true ) {
    uVar9 = *(uint *)(param_4 + 0xf0);
    uVar17 = 0;
    if (uVar9 != 0) {
      uVar17 = 0;
      if ((ulong)uVar9 != 0) {
        uVar17 = (uint)((ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                       (ulong)uVar9);
      }
    }
    if (uVar17 <= uVar24) break;
    if (*(long *)(param_4 + 0x100) != *(long *)(param_4 + 0xf8)) {
      uVar22 = 0;
      uVar30 = 1;
      do {
        if ((((ulong)((long)(uStack_c8 - uStack_d0) >> 3) <= uVar22) ||
            (_memcpy(plVar13,lVar31,*(undefined8 *)(uStack_d0 + uVar22 * 8)),
            (ulong)((long)(uStack_c8 - uStack_d0) >> 3) <= uVar22)) ||
           ((ulong)((long)puStack_a8 - (long)puStack_b0 >> 3) <= uVar22)) goto LAB_10ab4c434;
        plVar13 = (long *)((long)plVar13 + *(long *)(uStack_d0 + uVar22 * 8));
        lVar31 = lVar31 + *(long *)(puStack_b0 + uVar22 * 2);
        uVar22 = (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        bVar11 = uVar30 <= uVar22;
        lVar15 = uVar22 - uVar30;
        uVar22 = uVar30;
        uVar30 = (ulong)((int)uVar30 + 1);
      } while (bVar11 && lVar15 != 0);
    }
    uVar24 = uVar24 + 1;
  }
  (**(code **)(*param_5 + 0x28))
            (param_5,&PTR_DAT_110c4a070,plStack_e8,(long)plStack_e0 - (long)plStack_e8);
  if (plStack_e8 != (long *)0x0) {
    plStack_e0 = plStack_e8;
    __ZdlPv();
  }
  if (uStack_d0 != 0) {
    uStack_c8 = uStack_d0;
    __ZdlPv();
  }
  if (puStack_b0 != (undefined4 *)0x0) {
    puStack_a8 = puStack_b0;
    __ZdlPv();
  }
LAB_10ab4b0e8:
  (**(code **)(*param_5 + 0x28))
            (param_5,&PTR_DAT_110c4a090,*(long *)(param_4 + 0x28),
             *(long *)(param_4 + 0x30) - *(long *)(param_4 + 0x28));
LAB_10ab4b108:
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a0b0);
  lVar31 = *(long *)(param_4 + 0x40);
  lVar15 = *(long *)(param_4 + 0x48);
  if (lVar31 != lVar15) {
    do {
      (**(code **)(*param_5 + 0x10))(param_5);
      lVar14 = **(long **)(lVar31 + 0x38);
      lVar18 = (*(long **)(lVar31 + 0x38))[1];
      puStack_b0 = (undefined4 *)0x0;
      puStack_a8 = (undefined4 *)0x0;
      uStack_a0 = 0;
      uVar24 = *(uint *)(param_4 + 0x114);
      if (uVar24 == 0xffffffff) {
LAB_10ab4c41c:
        FUN_10a00946c(&UNK_10f69298a);
        goto LAB_10ab4c434;
      }
      lVar20 = *(long *)(param_4 + 0xf8);
      uVar22 = (*(long *)(param_4 + 0x100) - lVar20 >> 3) * 0x6db6db6db6db6db7;
      if (uVar22 < uVar24 || uVar22 - uVar24 == 0) goto LAB_10ab4c430;
      if (lVar20 == 0) goto LAB_10ab4c41c;
      FUN_10ab4c544(&plStack_e8,param_4,lVar20 + (ulong)uVar24 * 0x38);
      plVar13 = plStack_e8;
      uVar22 = (ulong)(lVar18 - lVar14) / 0x18;
      if ((int)uVar22 == 0) {
        lStack_100 = 0;
        puVar33 = (ulong *)0x0;
      }
      else {
        puVar33 = (ulong *)0x0;
        puVar25 = (ulong *)0x0;
        uVar30 = 0;
        lStack_100 = 0;
        do {
          pfVar32 = (float *)(lVar14 + uVar30 * 0x18);
          if (((0.002 <= ABS(*pfVar32)) || (0.002 <= ABS(pfVar32[1]))) || (0.002 <= ABS(pfVar32[2]))
             ) {
            lVar18 = 0;
            uStack_c8 = uStack_c8 & 0xffffffffffffff00;
            uStack_d0 = 0;
            do {
              pfVar1 = pfVar32;
              if ((int)lVar18 == 1) {
                pfVar1 = pfVar32 + 1;
              }
              pfVar2 = pfVar32 + 2;
              if ((int)lVar18 != 2) {
                pfVar2 = pfVar1;
              }
              fVar34 = (float)(uint)(ushort)(float2)*pfVar2;
              *(float2 *)((long)&uStack_d0 + lVar18 * 2) = (float2)*pfVar2;
              lVar18 = lVar18 + 1;
            } while (lVar18 != 3);
            uVar27 = uVar30;
            (**(code **)(*plVar13 + 0x10))();
            fVar34 = fVar34 + pfVar32[3];
            param_2 = param_2 + pfVar32[4];
            fVar35 = param_3 + pfVar32[5];
            fVar36 = 1.0 / SQRT(fVar34 * fVar34 + param_2 * param_2 + fVar35 * fVar35);
            param_3 = fVar34 * fVar36;
            param_2 = param_2 * fVar36;
            fVar35 = fVar35 * fVar36;
            if (ABS(1.0 - SQRT(fVar35 * fVar35 + param_3 * param_3 + param_2 * param_2)) <= 0.001) {
              param_3 = (param_3 * 0.5 + 0.5) * 2047.0;
              param_2 = (param_2 * 0.5 + 0.5) * 2047.0;
              iVar12 = ((int)param_2 & 0x7ffU) << 0xb;
              bVar21 = 0x40;
              if (0.0 <= fVar35) {
                bVar21 = 0;
              }
              uStack_d0 = CONCAT26((ushort)(int)param_3 & 0x7ff | (ushort)iVar12,
                                   (undefined6)uStack_d0);
              uStack_c8 = CONCAT71(uStack_c8._1_7_,(byte)((uint)iVar12 >> 0x10) | bVar21);
            }
            else {
              uStack_d0 = uStack_d0 & 0xffffffffffff;
              uStack_c8 = (ulong)uStack_c8._1_7_ << 8;
            }
            if (puVar33 < puVar25) {
              *(undefined1 *)(puVar33 + 1) = (undefined1)uStack_c8;
              *puVar33 = uStack_d0;
              lVar20 = lStack_100;
            }
            else {
              lVar18 = (long)puVar33 - lStack_100;
              uVar19 = lVar18 * -0x71c71c71c71c71c7 + 1;
              if (0x1c71c71c71c71c71 < uVar19) {
                FUN_10ab55604();
                goto LAB_10ab4c434;
              }
              uVar23 = ((long)puVar25 - lStack_100) * 0x1c71c71c71c71c72;
              if (uVar23 < uVar19 || uVar23 - uVar19 == 0) {
                uVar23 = uVar19;
              }
              if (0xe38e38e38e38e37 < (ulong)(((long)puVar25 - lStack_100) * -0x71c71c71c71c71c7)) {
                uVar23 = 0x1c71c71c71c71c71;
              }
              FUN_10ab55618();
              puVar33 = (ulong *)(uVar23 + lVar18);
              puVar25 = (ulong *)(uVar23 + uVar27 * 9);
              *puVar33 = uStack_d0;
              *(undefined1 *)(puVar33 + 1) = (undefined1)uStack_c8;
              lVar20 = SUB168(SEXT816(lVar18) * SEXT816(0x1c71c71c71c71c71),8) - lVar18;
              lVar20 = (long)puVar33 + ((lVar20 >> 3) - (lVar20 >> 0x3f)) * 9;
              _memcpy(lVar20,lStack_100,lVar18);
              if (lStack_100 != 0) {
                __ZdlPv(lStack_100);
              }
            }
            lStack_100 = lVar20;
            puVar33 = (ulong *)((long)puVar33 + 9);
            uStack_b2 = (undefined2)uVar30;
            FUN_10a14f5d0(&puStack_b0,&uStack_b2);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 != (uVar22 & 0xffffffff));
      }
      FUN_10a00d760(param_5,&PTR_DAT_110c4aad0,lVar31);
      (**(code **)(*param_5 + 0x60))(*(undefined4 *)(lVar31 + 0x18),param_5,&PTR_DAT_110c4a3d0);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a3f0,uVar22);
      (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a430,lVar31 + 0x1c);
      (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a450,lVar31 + 0x28);
      if ((long)puVar33 - lStack_100 != 0) {
        (**(code **)(*param_5 + 0x28))
                  (param_5,&PTR_DAT_110c4a410,lStack_100,(long)puVar33 - lStack_100);
        (**(code **)(*param_5 + 0x28))
                  (param_5,&PTR_DAT_110c4a090,puStack_b0,(long)puStack_a8 - (long)puStack_b0);
      }
      if (plStack_e8 != (long *)0x0) {
        (**(code **)(*plStack_e8 + 8))();
      }
      if (puStack_b0 != (undefined4 *)0x0) {
        puStack_a8 = puStack_b0;
        __ZdlPv();
      }
      if (lStack_100 != 0) {
        __ZdlPv(lStack_100);
      }
      (**(code **)(*param_5 + 0x20))(param_5);
      lVar31 = lVar31 + 0x48;
    } while (lVar31 != lVar15);
  }
  (**(code **)(*param_5 + 0x20))(param_5);
  (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a0d0,2);
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a0f0);
  puVar29 = *(undefined4 **)(param_4 + 0xa0);
  puVar5 = *(undefined4 **)(param_4 + 0xa8);
  if (puVar29 != puVar5) {
    do {
      (**(code **)(*param_5 + 0x10))(param_5);
      (**(code **)(*param_5 + 0x60))(*puVar29,param_5,&PTR_DAT_110c4a470);
      (**(code **)(*param_5 + 0x60))(puVar29[1],param_5,&PTR_DAT_110c4a490);
      (**(code **)(*param_5 + 0x40))(param_5,&PTR_DAT_110c4a4b0,puVar29[2]);
      FUN_10a00d760(param_5,&PTR_DAT_110c4a4d0,puVar29 + 4);
      (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a4f0);
      uVar24 = *(uint *)(param_4 + 0x110);
      if (uVar24 == 0xffffffff) {
        bVar11 = true;
      }
      else {
        uVar22 = (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar22 < uVar24 || uVar22 - uVar24 == 0) goto LAB_10ab4c42c;
        bVar11 = *(long *)(param_4 + 0xf8) == 0;
      }
      uVar24 = *(uint *)(param_4 + 0x118);
      if (uVar24 == 0xffffffff) {
        lVar31 = 0;
      }
      else {
        uVar22 = (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar22 < uVar24 || uVar22 - uVar24 == 0) goto LAB_10ab4c42c;
        lVar31 = *(long *)(param_4 + 0xf8) + (ulong)uVar24 * 0x38;
      }
      uVar24 = *(uint *)(param_4 + 0x114);
      if (uVar24 == 0xffffffff) {
        lStack_f8 = 0;
      }
      else {
        uVar22 = (*(long *)(param_4 + 0x100) - *(long *)(param_4 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar22 < uVar24 || uVar22 - uVar24 == 0) {
LAB_10ab4c42c:
          FUN_10ab725fc();
LAB_10ab4c430:
          FUN_10ab725fc();
LAB_10ab4c434:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10ab4c438);
          (*pcVar10)();
        }
        lStack_f8 = *(long *)(param_4 + 0xf8) + (ulong)uVar24 * 0x38;
      }
      puVar6 = *(uint **)(puVar29 + 0xe);
      for (puVar3 = *(uint **)(puVar29 + 0xc); puVar3 != puVar6; puVar3 = puVar3 + 8) {
        (**(code **)(*param_5 + 0x10))(param_5);
        uVar22 = (ulong)*puVar3;
        (**(code **)(*param_5 + 0x60))(param_5,&PTR_DAT_110c4aa50);
        if ((bVar11) || (FUN_10ab6e728(), *(long *)(puVar29 + 10) != lRam00000001138356d8)) {
          if ((lVar31 == 0) || (FUN_10ab6eb18(), *(long *)(puVar29 + 10) != lRam0000000113835798)) {
            if ((lStack_f8 == 0) ||
               (FUN_10ab6e9d8(), *(long *)(puVar29 + 10) != lRam0000000113835758))
            goto LAB_10ab4bb80;
            FUN_10ab4c544(&plStack_e8,param_4,lStack_f8);
            plVar13 = plStack_e8;
            uVar24 = *(uint *)(param_4 + 0xf0);
            if (uVar24 == 0) {
              uVar30 = 0;
            }
            else {
              uVar30 = 0;
              if ((ulong)uVar24 != 0) {
                uVar30 = (ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                         (ulong)uVar24;
              }
              uVar30 = uVar30 & 0xffffffff;
            }
            lVar15 = *(long *)(puVar3 + 2);
            uVar27 = (ulong)(*(long *)(puVar3 + 4) - lVar15) / 0xc;
            if (uVar30 < uVar27) {
              FUN_10a00946c(&UNK_10f6921f0);
              goto LAB_10ab4c434;
            }
            puStack_b0 = (undefined4 *)0x0;
            puStack_a8 = (undefined4 *)0x0;
            uStack_a0 = 0;
            if (0xb < (ulong)(*(long *)(puVar3 + 4) - lVar15)) {
              func_0x000107c27d58(&puStack_b0,uVar27 << 2);
              puVar26 = puStack_b0;
              uVar30 = 0;
              if (uVar27 < 2) {
                uVar27 = 1;
              }
LAB_10ab4ba90:
              if (plVar13 != (long *)0x0) {
                iVar12 = 0;
                puVar33 = (ulong *)(lVar15 + uVar30 * 0xc);
                uStack_d0 = *puVar33;
                uStack_c8._0_4_ = *(float *)(puVar33 + 1);
                do {
                  fVar35 = (float)uVar22;
                  (**(code **)(*plVar13 + 0x10))(plVar13,uVar30);
                  pfVar32 = (float *)((long)&uStack_d0 + 4);
                  fVar34 = param_2;
                  if (iVar12 != 1) {
                    if (iVar12 == 2) goto LAB_10ab4baf8;
                    pfVar32 = (float *)&uStack_d0;
                    fVar34 = fVar35;
                  }
                  param_2 = *pfVar32;
                  uVar22 = (ulong)(uint)(fVar34 + param_2);
                  *pfVar32 = fVar34 + param_2;
                  iVar12 = iVar12 + 1;
                } while( true );
              }
              iVar12 = (int)lVar15 + (int)uVar30 * 0xc;
              goto LAB_10ab4bb14;
            }
LAB_10ab4bb3c:
            (**(code **)(*param_5 + 0x28))
                      (param_5,&PTR_s_attributes_110c4a510,puStack_b0,
                       (long)puStack_a8 - (long)puStack_b0);
          }
          else {
            func_0x00010ab4c84c(&plStack_e8,param_4,lVar31);
            plVar13 = plStack_e8;
            uVar24 = *(uint *)(param_4 + 0xf0);
            if (uVar24 == 0) {
              uVar22 = 0;
            }
            else {
              uVar22 = 0;
              if ((ulong)uVar24 != 0) {
                uVar22 = (ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                         (ulong)uVar24;
              }
              uVar22 = uVar22 & 0xffffffff;
            }
            lVar15 = *(long *)(puVar3 + 2);
            uVar30 = (ulong)(*(long *)(puVar3 + 4) - lVar15) >> 4;
            if (uVar22 < uVar30) goto LAB_10ab4c3fc;
            puStack_b0 = (undefined4 *)0x0;
            puStack_a8 = (undefined4 *)0x0;
            uStack_a0 = 0;
            if (0xf < (ulong)(*(long *)(puVar3 + 4) - lVar15)) {
              func_0x000107c27d58(&puStack_b0,uVar30 << 2);
              puVar26 = puStack_b0;
              uVar22 = 0;
              if (uVar30 < 2) {
                uVar30 = 1;
              }
LAB_10ab4b974:
              if (plVar13 != (long *)0x0) {
                iVar12 = 0;
                puVar33 = (ulong *)(lVar15 + uVar22 * 0x10);
                uStack_c8 = puVar33[1];
                uVar27 = *puVar33;
                uStack_d0 = uVar27;
                do {
                  fVar35 = (float)uVar27;
                  (**(code **)(*plVar13 + 0x10))(plVar13,uVar22);
                  pfVar32 = (float *)((long)&uStack_d0 + 4);
                  fVar34 = param_2;
                  if (iVar12 != 1) {
                    if (iVar12 == 2) goto LAB_10ab4b9cc;
                    pfVar32 = (float *)&uStack_d0;
                    fVar34 = fVar35;
                  }
                  param_2 = *pfVar32;
                  uVar27 = (ulong)(uint)(fVar34 + param_2);
                  *pfVar32 = fVar34 + param_2;
                  iVar12 = iVar12 + 1;
                } while( true );
              }
              iVar12 = (int)lVar15 + (int)uVar22 * 0x10;
              goto LAB_10ab4b9e4;
            }
LAB_10ab4ba0c:
            (**(code **)(*param_5 + 0x28))
                      (param_5,&PTR_s_attributes_110c4a510,puStack_b0,
                       (long)puStack_a8 - (long)puStack_b0);
          }
          if (puStack_b0 != (undefined4 *)0x0) {
            puStack_a8 = puStack_b0;
            __ZdlPv();
          }
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
        else {
          uVar24 = *(uint *)(param_4 + 0xf0);
          if (uVar24 == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            if ((ulong)uVar24 != 0) {
              uVar22 = (ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) /
                       (ulong)uVar24;
            }
            uVar22 = uVar22 & 0xffffffff;
          }
          lVar15 = *(long *)(puVar3 + 2);
          uVar30 = (ulong)(*(long *)(puVar3 + 4) - lVar15) / 0xc;
          if (uVar22 < uVar30) {
            FUN_10a00946c(&UNK_10f6921f0);
LAB_10ab4c3fc:
            FUN_10a00946c(&UNK_10f6921f0);
            goto LAB_10ab4c434;
          }
          puStack_b0 = (undefined4 *)0x0;
          puStack_a8 = (undefined4 *)0x0;
          uStack_a0 = 0;
          if (0xb < (ulong)(*(long *)(puVar3 + 4) - lVar15)) {
            func_0x000107c27d58(&puStack_b0,uVar30 * 6);
            puVar26 = puStack_b0;
            if (uVar30 < 2) {
              uVar30 = 1;
            }
            do {
              lVar14 = lVar15;
              FUN_10ab622e8();
              *puVar26 = (int)lVar14;
              *(short *)(puVar26 + 1) = (short)((ulong)lVar14 >> 0x20);
              lVar15 = lVar15 + 0xc;
              uVar30 = uVar30 - 1;
              puVar26 = (undefined4 *)((long)puVar26 + 6);
            } while (uVar30 != 0);
          }
          (**(code **)(*param_5 + 0x28))
                    (param_5,&PTR_s_attributes_110c4a510,puStack_b0,
                     (long)puStack_a8 - (long)puStack_b0);
          if (puStack_b0 != (undefined4 *)0x0) {
            puStack_a8 = puStack_b0;
            __ZdlPv();
          }
        }
LAB_10ab4bb80:
        (**(code **)(*param_5 + 0x20))(param_5);
      }
      (**(code **)(*param_5 + 0x20))(param_5);
      (**(code **)(*param_5 + 0x20))(param_5);
      puVar29 = puVar29 + 0x16;
    } while (puVar29 != puVar5);
  }
  (**(code **)(*param_5 + 0x20))(param_5);
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a110);
  puVar5 = *(undefined4 **)(param_4 + 0xc0);
  for (puVar29 = *(undefined4 **)(param_4 + 0xb8); puVar29 != puVar5; puVar29 = puVar29 + 7) {
    (**(code **)(*param_5 + 0x10))(param_5);
    (**(code **)(*param_5 + 0x60))(*puVar29,param_5,&PTR_DAT_110c4aa50);
    (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a130,puVar29 + 1);
    (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a150,puVar29 + 4);
    (**(code **)(*param_5 + 0x20))(param_5);
  }
  (**(code **)(*param_5 + 0x20))(param_5);
  (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4aa70,param_4 + 0x144);
  (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4aa90,param_4 + 0x138);
  (**(code **)(*param_5 + 0x78))(param_5,&PTR_DAT_110c4a170,param_4 + 0x150);
  (**(code **)(*param_5 + 0x78))(param_5,&PTR_DAT_110c4a190,param_4 + 0x158);
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a1b0);
  lVar15 = *(long *)(param_4 + 0x60);
  for (lVar31 = *(long *)(param_4 + 0x58); lVar31 != lVar15; lVar31 = lVar31 + 0x60) {
    (**(code **)(*param_5 + 0x10))(param_5);
    FUN_10a00d760(param_5,&PTR_DAT_110c4a1d0,lVar31);
    (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c4aab0,lVar31 + 0x20);
    (**(code **)(*param_5 + 0x20))(param_5);
  }
  (**(code **)(*param_5 + 0x20))(param_5);
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a1f0);
  lVar15 = *(long *)(param_4 + 0x78);
  for (lVar31 = *(long *)(param_4 + 0x70); lVar31 != lVar15; lVar31 = lVar31 + 0x18) {
    (**(code **)(*param_5 + 0x10))(param_5);
    (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a210,lVar31);
    (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a230,lVar31 + 0xc);
    (**(code **)(*param_5 + 0x20))(param_5);
  }
  (**(code **)(*param_5 + 0x20))(param_5);
  (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a250);
  puVar7 = *(undefined8 **)(param_4 + 0x90);
  for (puVar4 = *(undefined8 **)(param_4 + 0x88); puVar4 != puVar7; puVar4 = puVar4 + 6) {
    (**(code **)(*param_5 + 0x10))(param_5);
    (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a270);
    puVar5 = (undefined4 *)puVar4[4];
    for (puVar29 = (undefined4 *)puVar4[3]; puVar29 != puVar5; puVar29 = puVar29 + 3) {
      (**(code **)(*param_5 + 0x10))(param_5);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a290,*puVar29);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a2b0,puVar29[1]);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a2d0,puVar29[2]);
      (**(code **)(*param_5 + 0x20))(param_5);
    }
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a2f0);
    puVar5 = (undefined4 *)puVar4[1];
    for (puVar29 = (undefined4 *)*puVar4; puVar29 != puVar5; puVar29 = puVar29 + 1) {
      (**(code **)(*param_5 + 0x10))(param_5);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a310,*puVar29);
      (**(code **)(*param_5 + 0x20))(param_5);
    }
    (**(code **)(*param_5 + 0x20))(param_5);
    (**(code **)(*param_5 + 0x20))(param_5);
  }
  (**(code **)(*param_5 + 0x20))(param_5);
  if ((*(long *)(param_4 + 400) == 0) || ((*(byte *)(*(long *)(param_4 + 400) + 8) & 1) == 0)) {
    (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a330);
    puVar5 = *(undefined4 **)(param_4 + 0xd8);
    for (puVar29 = *(undefined4 **)(param_4 + 0xd0); puVar29 != puVar5; puVar29 = puVar29 + 0x1a) {
      (**(code **)(*param_5 + 0x10))(param_5);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a290,*puVar29);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a2b0,puVar29[1]);
      (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110c4a350,puVar29[2]);
      (**(code **)(*param_5 + 0x70))(param_5,&PTR_DAT_110c4a370,*(undefined1 *)(puVar29 + 3));
      (**(code **)(*param_5 + 0x18))(param_5,&PTR_DAT_110c4a390);
      (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a210,puVar29 + 4);
      (**(code **)(*param_5 + 0x80))(param_5,&PTR_DAT_110c4a230,puVar29 + 7);
      (**(code **)(*param_5 + 0x20))(param_5);
      (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c4a3b0,puVar29 + 10);
      (**(code **)(*param_5 + 0x20))(param_5);
    }
    (**(code **)(*param_5 + 0x20))(param_5);
  }
  return;
}



/* Entry: 10ab4c544; end: 10ab4cb53;  */

void FUN_10ab4c544(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = *(int *)(param_3 + 0x24);
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      if (*(int *)(param_3 + 0x28) == 3) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4c6c8;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4c6c8:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4be40;
      puVar5 = &UNK_110c4bdb8;
    }
    else if (iVar1 == 2) {
      if (*(int *)(param_3 + 0x28) == 3) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4c764;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4c764:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4bf30;
      puVar5 = &UNK_110c4beb8;
    }
    else {
      if (iVar1 != 3) goto LAB_10ab4c7a4;
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 3) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4c730;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4c730:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4c020;
      puVar5 = &UNK_110c4bfa8;
    }
LAB_10ab4c790:
    puVar2[4] = 0;
    if (cVar9 == '\0') {
      puVar5 = puVar3;
    }
    ppuVar4 = (undefined **)(puVar5 + 0x10);
  }
  else {
    if (iVar1 == 4) {
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 3) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4c6fc;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4c6fc:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4c110;
      puVar5 = &UNK_110c4c098;
      goto LAB_10ab4c790;
    }
    if (iVar1 == 5) {
      if ((*(byte *)(param_3 + 0x2c) & 1) != 0) {
LAB_10ab4c6bc:
        puVar2 = (undefined8 *)0x0;
        goto LAB_10ab4c7a4;
      }
      if ((*(uint *)(param_3 + 0x28) & 0x3fffffff) == 3) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4c824;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4c824:
        uVar8 = 0;
        uVar7 = 0;
      }
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar2[4] = 0;
      ppuVar4 = &PTR_DAT_110c4c198;
    }
    else {
      if (iVar1 != 6) goto LAB_10ab4c7a4;
      if ((*(byte *)(param_3 + 0x2c) & 1) != 0) goto LAB_10ab4c6bc;
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 3) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4c7f8;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4c7f8:
        uVar8 = 0;
        uVar7 = 0;
      }
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar2[4] = 0;
      ppuVar4 = &PTR_DAT_110c4c210;
    }
  }
  *puVar2 = ppuVar4;
  puVar2[1] = lVar6;
LAB_10ab4c7a4:
  *param_1 = puVar2;
  return;
}


