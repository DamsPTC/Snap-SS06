/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1092bcb38; end: 1092bcb8f;  */

long FUN_1092bcb38(long param_1)

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



/* Entry: 1092bcb90; end: 1092bccf7;  */

undefined *** FUN_1092bcb90(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lStack_98;
  undefined ***pppuStack_90;
  long lStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar17 = *(long **)(param_1 + 0x10);
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  lVar15 = *plVar17;
  FUN_1092bac68();
  uVar16 = uVar6 & -param_1;
  FUN_1092bac68();
  lVar4 = uVar6 + lVar7 + param_1;
  FUN_1092bac68();
  uVar12 = lVar4 - 1U & -param_1;
  uVar5 = plVar17[1];
  if (uVar12 <= (ulong)plVar17[1]) {
    uVar5 = uVar12;
  }
  if (uVar16 <= uVar5 && uVar5 - uVar16 != 0) {
    _msync(lVar15 + uVar16,uVar5 - uVar16,1);
  }
  pppuVar10 = (undefined ***)plVar17[7];
  pppuVar11 = pppuVar10;
  if (pppuVar10 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuVar11 = pppuVar10;
    pppuStack_90 = pppuVar10;
    if (pppuVar10 != (undefined ***)0x0) {
      lStack_98 = plVar17[6];
      pppuVar11 = (undefined ***)0x0;
      if (lStack_98 != 0) {
        plVar1 = plVar17 + 1;
        plVar17 = &lStack_88;
        lStack_88 = 0x1092bc7f8;
        appuStack_80[0] = &PTR_DAT_110ae92c0;
        FUN_1092b7378(lStack_98,lVar15,*plVar1,uVar6,lVar7,&lStack_88);
        pppuVar11 = appuStack_80;
        (*(code *)*appuStack_80[0])();
      }
      pppuVar3 = pppuVar10 + 1;
      do {
        ppuVar14 = *pppuVar3;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
        if (bVar9) {
          *pppuVar3 = (undefined **)((long)ppuVar14 + -1);
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (ppuVar14 == (undefined **)0x0) {
        (*(code *)(*pppuVar10)[2])(pppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar11 = pppuVar10;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_80[0])(plVar17 + 1);
  FUN_1092ba470(&lStack_98);
  __Unwind_Resume();
  ppuVar14 = pppuVar11[2];
  if (ppuVar14 != (undefined **)0x0) {
    ppuVar2 = ppuVar14 + 1;
    do {
      puVar13 = *ppuVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar9) {
        *ppuVar2 = puVar13 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
    }
  }
  return pppuVar11 + 1;
}



/* Entry: 1092bccf8; end: 1092bcd23;  */

long FUN_1092bccf8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 1092bcd24; end: 1092bcda7;  */

undefined8 * FUN_1092bcd24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uVar3 = *param_2;
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_1[3] = 0;
  FUN_1092a9c2c(&uStack_28,param_2);
  plVar1 = (long *)param_1[3];
  param_1[3] = uStack_28;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}



/* Entry: 1092bcda8; end: 1092bce57;  */

undefined8 * FUN_1092bcda8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    param_1[2] = &PTR_PTR_1132cee78;
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_DAT_110ae93e8;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = &PTR_PTR_1132cee78;
    param_1[3] = puVar1;
  }
  else {
    lVar2 = param_2[1];
    param_1[2] = *param_2;
    param_1[3] = lVar2;
    *param_2 = 0;
    param_2[1] = 0;
  }
  lVar2 = param_2[2];
  param_1[5] = param_2[3];
  param_1[4] = lVar2;
  *(int *)(param_1 + 6) = (int)param_2[4];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  return param_1;
}



/* Entry: 1092bce58; end: 1092bce8f;  */

long FUN_1092bce58(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  func_0x0001092ab60c(param_1 + 0x10);
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



/* Entry: 1092bce90; end: 1092bcf03;  */

void FUN_1092bce90(long *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  uVar1 = SUB84(auStack_40,0);
  if (*param_1 == 0) {
    func_0x000107c31940(auStack_40,&UNK_10f564146);
    __ZSt19uncaught_exceptionsv();
    uStack_28 = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_40,&UNK_10f563e80,0x1d);
    FUN_1092a22e8(auStack_40);
  }
  return;
}



/* Entry: 1092bcf04; end: 1092bcfc3;  */

void FUN_1092bcf04(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_1092bf1d4(param_1);
  uVar1 = *param_2;
  _ftell(uVar1);
  _fseek(*param_2,0,0);
  uVar2 = *param_1;
  _fread(uVar2,1,param_1[1] - uVar2,*param_2);
  uVar3 = param_1[1] - *param_1;
  if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
    if (uVar2 < uVar3) {
      param_1[1] = *param_1 + uVar2;
    }
  }
  else {
    FUN_1092bf294(param_1,uVar2 - uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fseek_11034c350)(*param_2,uVar1,0);
  return;
}



/* Entry: 1092bcfc4; end: 1092bd02f;  */

bool FUN_1092bcfc4(undefined8 param_1)

{
  bool bVar1;
  int *piStack_38;
  int *piStack_30;
  
  FUN_1092bcf04(&piStack_38,param_1,4);
  if ((ulong)((long)piStack_30 - (long)piStack_38) < 4) {
    bVar1 = false;
    if (piStack_38 == (int *)0x0) {
      return false;
    }
  }
  else {
    bVar1 = *piStack_38 == 0x435a4c;
  }
  piStack_30 = piStack_38;
  __ZdlPv();
  return bVar1;
}



/* Entry: 1092bd030; end: 1092bd0ab;  */

undefined4 FUN_1092bd030(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  uVar1 = SUB84(auStack_40,0);
  if (param_2 < 8) {
    func_0x000107c31940(auStack_40,&UNK_10f564146);
    __ZSt19uncaught_exceptionsv();
    uStack_28 = uVar1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_40,&UNK_10f563e9e,0x1e);
    FUN_1092a22e8(auStack_40);
  }
  return *(undefined4 *)(param_1 + 4);
}



/* Entry: 1092bd0ac; end: 1092bd117;  */

long FUN_1092bd0ac(undefined8 param_1)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  
  FUN_1092bcf04(&lStack_38,param_1,8);
  lVar1 = lStack_38;
  FUN_1092bd030(lStack_38,lStack_30 - lStack_38);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return lVar1;
}



/* Entry: 1092bd118; end: 1092bd243;  */

undefined8 * FUN_1092bd118(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 1092bd244; end: 1092be2f3;  */

/* WARNING: Removing unreachable block (ram,0x0001092bd630) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1092bd244(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  long ****pppplVar2;
  undefined8 *****pppppuVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined4 uVar8;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long *****ppppplVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *****pppppuVar15;
  long *******ppppppplVar16;
  long **pplVar17;
  long *plVar18;
  long ******pppppplVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined **appuStack_530 [2];
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined1 auStack_510 [8];
  undefined8 auStack_508 [6];
  undefined8 uStack_4d8;
  char cStack_4c1;
  undefined **appuStack_4b0 [19];
  undefined1 uStack_411;
  undefined8 *******pppppppuStack_3a8;
  long ******pppppplStack_3a0;
  byte bStack_391;
  undefined8 *******pppppppuStack_390;
  ulong uStack_388;
  byte bStack_379;
  long *plStack_378;
  code *pcStack_370;
  undefined **ppuStack_368;
  undefined4 uStack_360;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long *******ppppppplStack_300;
  long *******ppppppplStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined8 *****pppppuStack_2d0;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  byte bStack_2b9;
  long *plStack_2b0;
  long *plStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  ulong uStack_290;
  byte bStack_281;
  long ******pppppplStack_280;
  long ******pppppplStack_278;
  long ******pppppplStack_270;
  undefined8 *******pppppppuStack_260;
  long ****pppplStack_258;
  long ****pppplStack_250;
  undefined8 ******ppppppuStack_240;
  undefined8 ******ppppppuStack_238;
  undefined8 ******ppppppuStack_230;
  undefined8 *******pppppppuStack_220;
  ulong uStack_218;
  byte bStack_209;
  long lStack_208;
  undefined8 uStack_200;
  undefined7 uStack_1f8;
  long *****ppppplStack_1f0;
  long *****ppppplStack_1e8;
  long *****ppppplStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined8 *****pppppuStack_190;
  undefined8 *****pppppuStack_188;
  undefined7 uStack_180;
  byte bStack_179;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined4 uStack_b8;
  undefined8 *puStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 *puVar9;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(char *)(param_1 + 5) == '\x01') && (*(char *)(param_3[1] + 8) == '\x01')) {
    puVar9 = &uStack_d0;
    func_0x000107c31940(puVar9,&UNK_10f564146);
    uVar8 = SUB84(puVar9,0);
    __ZSt19uncaught_exceptionsv();
    uStack_b8 = uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_d0,&UNK_10f563ebd,0x3e);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_d0,&UNK_10f563efc,0x48);
    FUN_1092a22e8(&uStack_d0);
  }
  ppppppplVar10 = (long *******)0x78;
  __Znwm();
  func_0x000107c31940(&pppppuStack_190,&UNK_10f432965);
  uStack_d0 = *param_3;
  plVar23 = param_3 + 1;
  (**(code **)(*plVar23 + 0x18))(&pcStack_c8,plVar23);
  FUN_1092b17dc(ppppppplVar10,param_2,&pppppuStack_190,&uStack_d0);
  ppppppplStack_2a0 = ppppppplVar10;
  (**(code **)pcStack_c8)(&pcStack_c8);
  if ((char)bStack_179 < '\0') {
    __ZdlPv(pppppuStack_190);
  }
  if (*ppppppplVar10 == (long ******)0x0) {
    puVar9 = &uStack_d0;
    func_0x000107c31940(puVar9,&UNK_10f564146);
    uVar8 = SUB84(puVar9,0);
    __ZSt19uncaught_exceptionsv();
    uStack_b8 = uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_d0,&UNK_10f563f45,0x14);
    uVar1 = param_2[1];
    plVar22 = (long *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      plVar22 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_d0,plVar22,uVar1);
    FUN_1092a22e8(&uStack_d0);
  }
  ppppppplVar11 = ppppppplVar10;
  FUN_1092b1af4(ppppppplVar10,&lStack_208,8);
  if ((ppppppplVar11 == (long *******)0x8) && (lStack_208 == 0x300435a4c)) {
    FUN_1092bf580(&pppppuStack_190,param_1[2],param_1[3],param_1 + 6);
    if (*(char *)(param_1 + 5) == '\x01') {
      ppppppplStack_2a0 = (long *******)0x0;
      FUN_1092b2248(ppppppplVar10);
      __ZdlPv();
      plVar22 = (long *)param_1[4];
      FUN_1092b2830(&uStack_d0,param_2,0);
      (**(code **)(*plVar22 + 0x10))(&plStack_120,plVar22,&uStack_d0);
      plStack_2a8 = plStack_118;
      plStack_2b0 = plStack_120;
      plStack_120 = (long *)0x0;
      plStack_118 = (long *)0x0;
      pppppplVar19 = (long ******)param_1[4];
      FUN_1092ad850(pppppuStack_190,&plStack_2b0);
      plVar22 = plStack_2a8;
      if (plStack_2a8 != (long *)0x0) {
        plVar18 = plStack_2a8 + 1;
        do {
          lVar21 = *plVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      plVar22 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        plVar18 = plStack_118 + 1;
        do {
          lVar21 = *plVar18;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
    }
    else {
      pppppplVar19 = (long ******)(param_4 & 0xffff);
      (*(code *)(*pppppuStack_190)[3])(pppppuStack_190,&ppppppplStack_2a0);
    }
    func_0x0001092bd118(param_1,&pppppuStack_190);
    pppppuVar15 = pppppuStack_188;
    if (pppppuStack_188 == (undefined8 *****)0x0) goto LAB_1092bd57c;
    pppppuVar3 = pppppuStack_188 + 1;
    do {
      ppppuVar20 = *pppppuVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
      if (bVar6) {
        *pppppuVar3 = (undefined8 ****)((long)ppppuVar20 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar20 != (undefined8 ****)0x0) goto LAB_1092bd57c;
    (*(code *)(*pppppuStack_188)[2])(pppppuStack_188);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar15);
    goto LAB_1092bd57c;
  }
  pppppuStack_2d0 = (undefined8 *****)0x0;
  uStack_2c8 = 0;
  uStack_2c1 = 0;
  uStack_2c0 = 0;
  bStack_2b9 = 0;
  ppppppplStack_2a0 = (long *******)0x0;
  FUN_1092b2248(ppppppplVar10);
  __ZdlPv();
  uStack_d0 = 0;
  pcStack_c8 = FUN_1092bf430;
  uStack_80 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  ppuStack_c0 = &PTR_DAT_110ae93a8;
  uStack_68 = 0;
  plVar22 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar22 = param_2;
  }
  plVar18 = plVar22;
  _strlen(plVar22);
  pppppplVar19 = (long ******)0x3;
  func_0x00010b0adfa4(plVar22,plVar18);
  plStack_118 = (long *)0x1092bf448;
  ppuStack_110 = &PTR_DAT_110ae93c0;
  puStack_108 = PTR__fclose_11034c270;
  if (plVar22 == (long *)0x0) {
    plStack_120 = plVar22;
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&pppppuStack_190,&UNK_10f5640d1,param_2);
LAB_1092bd50c:
    uStack_2c8 = SUB87(pppppuStack_188,0);
    uStack_2c1 = (undefined1)((ulong)pppppuStack_188 >> 0x38);
    pppppuStack_2d0 = pppppuStack_190;
    uStack_2c0 = uStack_180;
    bStack_2b9 = bStack_179;
  }
  else {
    plStack_120 = (long *)0x0;
    uStack_1d0 = 0x1092bf448;
    ppuStack_1c8 = &PTR_DAT_110ae93c0;
    puStack_1c0 = PTR__fclose_11034c270;
    plStack_1d8 = plVar22;
    FUN_1092bfe70(&pppppuStack_190,&plStack_1d8);
    FUN_1092bff80(&uStack_d0,&pppppuStack_190);
    func_0x0001092bffbc(&pppppuStack_190);
    FUN_1092bf46c(&plStack_1d8);
    if ((uStack_80 == 0 || puStack_88 == (undefined8 *)0x0) &&
       (puStack_78 == (undefined8 *)0x0 || puStack_70 == puStack_78)) {
LAB_1092bd4e0:
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pppppuStack_190,&UNK_10f5640d1,param_2);
      goto LAB_1092bd50c;
    }
    uVar1 = (long)puStack_70 - (long)puStack_78;
    if (uStack_80 != 0) {
      uVar1 = uStack_80;
    }
    if (uVar1 < 8) goto LAB_1092bd4e0;
    plVar23 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar23 != (long *)0x0) {
      plVar22 = plVar23 + 1;
      do {
        lVar21 = *plVar22;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar6) {
          *plVar22 = lVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
      }
    }
    plVar23 = &uStack_200;
    puVar9 = puStack_78;
    if (puStack_88 != (undefined8 *)0x0) {
      puVar9 = puStack_88;
    }
    uStack_60 = *puVar9;
    if ((int)uStack_60 == 0x435a4c) {
      func_0x0001092bf6fc(&pppppuStack_190);
      func_0x0001092bd17c(param_1,&pppppuStack_190);
      pppppuVar15 = pppppuStack_188;
      if (pppppuStack_188 != (undefined8 *****)0x0) {
        pppppuVar3 = pppppuStack_188 + 1;
        do {
          ppppuVar20 = *pppppuVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
          if (bVar6) {
            *pppppuVar3 = (undefined8 ****)((long)ppppuVar20 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppuVar20 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuStack_188)[2])(pppppuStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar15);
        }
      }
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_d0);
LAB_1092bda68:
      FUN_1092bf46c(&plStack_120);
      func_0x0001092bffbc(&uStack_d0);
      goto LAB_1092bd56c;
    }
    if ((short)uStack_60 == 0x4b50) {
      pppppuVar15 = (undefined8 *****)0x80;
      __Znwm();
      pppppuVar15[1] = (undefined8 ****)0x0;
      pppppuVar15[2] = (undefined8 ****)0x0;
      *pppppuVar15 = (undefined8 ****)&PTR_DAT_110ae94e8;
      pppppuVar15[9] = (undefined8 ****)0x0;
      pppppuVar15[8] = (undefined8 ****)0x0;
      pppppuVar15[0xb] = (undefined8 ****)0x0;
      pppppuVar15[10] = (undefined8 ****)0x0;
      pppppuVar15[5] = (undefined8 ****)0x0;
      pppppuVar15[4] = (undefined8 ****)0x0;
      pppppuVar15[7] = (undefined8 ****)0x0;
      pppppuVar15[6] = (undefined8 ****)0x0;
      pppppuStack_190 = pppppuVar15 + 3;
      *pppppuStack_190 = (undefined8 ****)&PTR_FUN_110ae8600;
      pppppuVar15[10] = (undefined8 ****)0x0;
      pppppuVar15[9] = (undefined8 ****)0x0;
      pppppuVar15[8] = (undefined8 ****)0x0;
      pppppuVar15[7] = (undefined8 ****)0x0;
      *(undefined4 *)(pppppuVar15 + 0xb) = 0x3f800000;
      pppppuVar15[0xd] = (undefined8 ****)0x0;
      pppppuVar15[0xc] = (undefined8 ****)0x0;
      pppppuVar15[0xf] = (undefined8 ****)0x0;
      pppppuVar15[0xe] = (undefined8 ****)0x0;
      pppppuStack_188 = pppppuVar15;
      func_0x0001092bd1e0(param_1,&pppppuStack_190);
      pppppuVar15 = pppppuStack_188;
      if (pppppuStack_188 != (undefined8 *****)0x0) {
        pppppuVar3 = pppppuStack_188 + 1;
        do {
          ppppuVar20 = *pppppuVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppuVar3,0x10);
          if (bVar6) {
            *pppppuVar3 = (undefined8 ****)((long)ppppuVar20 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppuVar20 == (undefined8 ****)0x0) {
          (*(code *)(*pppppuStack_188)[2])(pppppuStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar15);
        }
      }
      (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&uStack_d0);
      goto LAB_1092bda68;
    }
    FUN_1092c0068(&pppppuStack_190,&uStack_d0);
    FUN_1092c3638(&pppppppuStack_220,pppppuStack_190,(long)pppppuStack_188 - (long)pppppuStack_190);
    FUN_1092be780(&ppppppplStack_298,&uStack_60,8);
    ppppppplVar10 = (long *******)&ppppppplStack_298;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppppppplVar10,0,&UNK_10f56411a,0x14);
    pppppplStack_278 = ppppppplVar10[1];
    pppppplStack_280 = *ppppppplVar10;
    pppppplStack_270 = ppppppplVar10[2];
    ppppppplVar10[1] = (long ******)0x0;
    ppppppplVar10[2] = (long ******)0x0;
    *ppppppplVar10 = (long ******)0x0;
    pppppplVar19 = (long ******)&pppppplStack_280;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppplVar19,&UNK_10f56412f,0x16);
    ppppplStack_1e8 = pppppplVar19[1];
    ppppplStack_1f0 = *pppppplVar19;
    ppppplStack_1e0 = pppppplVar19[2];
    pppppplVar19[1] = (long *****)0x0;
    pppppplVar19[2] = (long *****)0x0;
    *pppppplVar19 = (long *****)0x0;
    uVar1 = param_2[1];
    plVar22 = (long *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      plVar22 = param_2;
    }
    ppppplVar12 = (long *****)&ppppplStack_1f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppplVar12,plVar22,uVar1);
    pppplStack_258 = ppppplVar12[1];
    pppppppuStack_260 = (undefined8 *******)*ppppplVar12;
    pppplStack_250 = ppppplVar12[2];
    ppppplVar12[1] = (long ****)0x0;
    ppppplVar12[2] = (long ****)0x0;
    *ppppplVar12 = (long ****)0x0;
    pppppppuVar13 = &pppppppuStack_260;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar13,&UNK_10f5640c4,0xc);
    ppppppuStack_238 = pppppppuVar13[1];
    ppppppuStack_240 = *pppppppuVar13;
    ppppppuStack_230 = pppppppuVar13[2];
    pppppppuVar13[1] = (undefined8 ******)0x0;
    pppppppuVar13[2] = (undefined8 ******)0x0;
    *pppppppuVar13 = (undefined8 ******)0x0;
    pppppppuVar13 = pppppppuStack_220;
    if (-1 < (char)bStack_209) {
      uStack_218 = (ulong)bStack_209;
      pppppppuVar13 = &pppppppuStack_220;
    }
    ppppppuVar14 = &ppppppuStack_240;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppppuVar14,pppppppuVar13,uStack_218);
    pppppuVar15 = *ppppppuVar14;
    uStack_200._0_7_ = SUB87(ppppppuVar14[1],0);
    uStack_200._7_1_ = (undefined1)*(undefined8 *)((long)ppppppuVar14 + 0xf);
    uStack_1f8 = (undefined7)((ulong)*(undefined8 *)((long)ppppppuVar14 + 0xf) >> 8);
    bVar4 = *(byte *)((long)ppppppuVar14 + 0x17);
    ppppppplVar10 = (long *******)(ulong)bVar4;
    ppppppuVar14[1] = (undefined8 *****)0x0;
    ppppppuVar14[2] = (undefined8 *****)0x0;
    *ppppppuVar14 = (undefined8 *****)0x0;
    if ((char)bStack_2b9 < '\0') {
      __ZdlPv(pppppuStack_2d0);
    }
    uStack_2c8 = (undefined7)uStack_200;
    uStack_2c1 = uStack_200._7_1_;
    uStack_2c0 = uStack_1f8;
    pppppuStack_2d0 = pppppuVar15;
    bStack_2b9 = bVar4;
    if ((long)ppppppuStack_230 < 0) {
      __ZdlPv(ppppppuStack_240);
    }
    if ((long)pppplStack_250 < 0) {
      __ZdlPv(pppppppuStack_260);
    }
    if ((long)ppppplStack_1e0 < 0) {
      __ZdlPv(ppppplStack_1f0);
    }
    if ((long)pppppplStack_270 < 0) {
      __ZdlPv(pppppplStack_280);
    }
    if ((char)bStack_281 < '\0') {
      __ZdlPv(ppppppplStack_298);
    }
    if ((char)bStack_209 < '\0') {
      __ZdlPv(pppppppuStack_220);
    }
    if (pppppuStack_190 != (undefined8 *****)0x0) {
      pppppuStack_188 = pppppuStack_190;
      __ZdlPv();
    }
  }
  while( true ) {
    FUN_1092bf46c(&plStack_120);
    uVar8 = SUB84(&uStack_d0,0);
    func_0x0001092bffbc();
    func_0x000107c31940();
    __ZSt19uncaught_exceptionsv();
    pppppplVar19 = (long ******)CONCAT17(uStack_2c1,uStack_2c8);
    pppppuVar15 = pppppuStack_2d0;
    if (-1 < (char)bStack_2b9) {
      pppppplVar19 = (long ******)(ulong)bStack_2b9;
      pppppuVar15 = &pppppuStack_2d0;
    }
    uStack_b8 = uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_d0,pppppuVar15);
    FUN_1092a22e8(&uStack_d0);
LAB_1092bd56c:
    if ((char)bStack_2b9 < '\0') {
      __ZdlPv(pppppuStack_2d0);
    }
LAB_1092bd57c:
    plVar22 = param_2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 7);
    ppppppplVar11 = ppppppplStack_2a0;
    ppppppplStack_2a0 = (long *******)0x0;
    if (ppppppplVar11 != (long *******)0x0) {
      FUN_1092b2248();
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
    if ((int)plVar22 == 0) break;
    ___cxa_begin_catch();
    if ((int)plVar22 == 2) {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&pppppplStack_280,&UNK_10f5640ef,param_2);
      FUN_109259240(&ppppplStack_1f0,&pppppplStack_280,"; ");
      FUN_109259240(&pppppppuStack_260,&ppppplStack_1f0,&UNK_10f56410f);
      ppppppplVar10 = (long *******)&ppppppplStack_298;
      (**(code **)(*(long *)*param_1 + 0x48))(&ppppppplStack_298);
      uVar1 = uStack_290;
      ppppppplVar16 = ppppppplStack_298;
      if (-1 < (char)bStack_281) {
        uVar1 = (ulong)bStack_281;
        ppppppplVar16 = ppppppplVar10;
      }
      pppppppuVar13 = &pppppppuStack_260;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar13,ppppppplVar16,uVar1);
      ppppppuStack_238 = pppppppuVar13[1];
      ppppppuStack_240 = *pppppppuVar13;
      ppppppuStack_230 = pppppppuVar13[2];
      pppppppuVar13[1] = (undefined8 ******)0x0;
      pppppppuVar13[2] = (undefined8 ******)0x0;
      *pppppppuVar13 = (undefined8 ******)0x0;
      FUN_109259240(&pppppppuStack_220,&ppppppuStack_240,"; ");
      (*(code *)(*ppppppplVar11)[2])(ppppppplVar11);
      FUN_109259240(&pppppuStack_190,&pppppppuStack_220,ppppppplVar11);
      if ((char)bStack_2b9 < '\0') {
        __ZdlPv(pppppuStack_2d0);
      }
      uStack_2c8 = SUB87(pppppuStack_188,0);
      uStack_2c1 = (undefined1)((ulong)pppppuStack_188 >> 0x38);
      pppppuStack_2d0 = pppppuStack_190;
      uStack_2c0 = uStack_180;
      bStack_2b9 = bStack_179;
      bStack_179 = 0;
      pppppuStack_190 = (undefined8 *****)((ulong)pppppuStack_190 & 0xffffffffffffff00);
      if ((char)bStack_209 < '\0') {
        __ZdlPv(pppppppuStack_220);
      }
      if ((long)ppppppuStack_230 < 0) {
        __ZdlPv(ppppppuStack_240);
      }
      if ((char)bStack_281 < '\0') {
        __ZdlPv(ppppppplStack_298);
      }
      if ((long)pppplStack_250 < 0) {
        __ZdlPv(pppppppuStack_260);
      }
      if ((long)ppppplStack_1e0 < 0) {
        __ZdlPv(ppppplStack_1f0);
      }
      if ((long)pppppplStack_270 < 0) {
        __ZdlPv(pppppplStack_280);
      }
      ___cxa_end_catch();
    }
    else {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppppppuStack_240,&UNK_10f5640ef,param_2);
      FUN_109259240(&pppppppuStack_220,&ppppppuStack_240,"; ");
      FUN_109259240(&pppppuStack_190,&pppppppuStack_220,&UNK_10f56410f);
      (**(code **)(*(long *)*param_1 + 0x48))(&pppppppuStack_260);
      pppplVar2 = pppplStack_258;
      pppppppuVar13 = pppppppuStack_260;
      if (-1 < (long)pppplStack_250) {
        pppplVar2 = (long ****)((ulong)pppplStack_250 >> 0x38);
        pppppppuVar13 = &pppppppuStack_260;
      }
      pppppuVar15 = &pppppuStack_190;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar15,pppppppuVar13,pppplVar2);
      pppppuVar3 = (undefined8 *****)*pppppuVar15;
      ppppplStack_1f0 = (long *****)pppppuVar15[1];
      *(undefined8 *)((long)plVar23 + 0x17) = *(undefined8 *)((long)pppppuVar15 + 0xf);
      bVar4 = *(byte *)((long)pppppuVar15 + 0x17);
      ppppppplVar10 = (long *******)(ulong)bVar4;
      pppppuVar15[1] = (undefined8 ****)0x0;
      pppppuVar15[2] = (undefined8 ****)0x0;
      *pppppuVar15 = (undefined8 ****)0x0;
      if ((char)bStack_2b9 < '\0') {
        __ZdlPv(pppppuStack_2d0);
      }
      pppppuStack_2d0 = pppppuVar3;
      uStack_2c8 = SUB87(ppppplStack_1f0,0);
      uStack_2c1 = (undefined1)((ulong)ppppplStack_1f0 >> 0x38);
      uStack_2c1 = (undefined1)*(undefined8 *)((long)plVar23 + 0x17);
      uStack_2c0 = (undefined7)((ulong)*(undefined8 *)((long)plVar23 + 0x17) >> 8);
      bStack_2b9 = bVar4;
      if ((long)pppplStack_250 < 0) {
        __ZdlPv(pppppppuStack_260);
      }
      if ((char)bStack_179 < '\0') {
        __ZdlPv(pppppuStack_190);
      }
      if ((char)bStack_209 < '\0') {
        __ZdlPv(pppppppuStack_220);
      }
      if ((long)ppppppuStack_230 < 0) {
        __ZdlPv(ppppppuStack_240);
      }
      ___cxa_end_catch();
    }
  }
  ppppppplVar16 = ppppppplVar11;
  __Unwind_Resume();
  pcStack_2d8 = FUN_1092be2f4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar23 = (long *)*plVar22;
  ppppppplStack_300 = ppppppplVar10;
  ppppppplStack_2f8 = ppppppplVar11;
  puStack_2f0 = param_1;
  plStack_2e8 = param_2;
  puStack_2e0 = &stack0xfffffffffffffff0;
  if ((ulong)(plVar22[1] - (long)plVar23) < 8) {
    pplVar17 = &plStack_378;
    func_0x000107c31940(pplVar17,&UNK_10f564146);
    uVar8 = SUB84(pplVar17,0);
    __ZSt19uncaught_exceptionsv();
    pppppplVar19 = (long ******)0x17;
    uStack_360 = uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_378,&UNK_10f563f5a);
    FUN_1092a22e8(&plStack_378);
    plVar23 = (long *)*plVar22;
  }
  if (*plVar23 == 0x300435a4c) {
    pppppplVar19 = ppppppplVar16[3];
    FUN_1092bf580(&plStack_378,ppppppplVar16[2],pppppplVar19,ppppppplVar16 + 6);
    func_0x0001092bd118(ppppppplVar16,&plStack_378);
    if (pcStack_370 == (code *)0x0) goto LAB_1092be4a0;
    plVar18 = (long *)((long)pcStack_370 + 8);
    do {
      lVar21 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else if ((int)*plVar23 == 0x435a4c) {
    func_0x0001092bf6fc(&plStack_378);
    func_0x0001092bd17c(ppppppplVar16,&plStack_378);
    if (pcStack_370 == (code *)0x0) goto LAB_1092be4a0;
    plVar18 = (long *)((long)pcStack_370 + 8);
    do {
      lVar21 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  else {
    if ((short)*plVar23 != 0x4b50) goto LAB_1092be4a0;
    plVar18 = (long *)0x80;
    __Znwm();
    plVar18[1] = 0;
    plVar18[2] = 0;
    *plVar18 = (long)&PTR_DAT_110ae94e8;
    plVar18[9] = 0;
    plVar18[8] = 0;
    plVar18[0xb] = 0;
    plVar18[10] = 0;
    plVar18[5] = 0;
    plVar18[4] = 0;
    plVar18[7] = 0;
    plVar18[6] = 0;
    plStack_378 = plVar18 + 3;
    *plStack_378 = (long)&PTR_FUN_110ae8600;
    plVar18[10] = 0;
    plVar18[9] = 0;
    plVar18[8] = 0;
    plVar18[7] = 0;
    *(undefined4 *)(plVar18 + 0xb) = 0x3f800000;
    plVar18[0xd] = 0;
    plVar18[0xc] = 0;
    plVar18[0xf] = 0;
    plVar18[0xe] = 0;
    pcStack_370 = (code *)plVar18;
    func_0x0001092bd1e0(ppppppplVar16,&plStack_378);
    if (pcStack_370 == (code *)0x0) goto LAB_1092be4a0;
    plVar18 = (long *)((long)pcStack_370 + 8);
    do {
      lVar21 = *plVar18;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *plVar18 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pcVar7 = pcStack_370;
  if (lVar21 == 0) {
    (**(code **)(*(long *)pcStack_370 + 0x10))(pcStack_370);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar7);
  }
LAB_1092be4a0:
  if (*ppppppplVar16 == (long ******)0x0) {
    pplVar17 = &plStack_378;
    func_0x000107c31940(pplVar17,&UNK_10f564146);
    uVar8 = SUB84(pplVar17,0);
    __ZSt19uncaught_exceptionsv();
    uStack_360 = uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_378,&UNK_10f563f72,0x14);
    FUN_1092be780(&pppppppuStack_390,plVar23,8);
    pppppppuVar13 = pppppppuStack_390;
    if (-1 < (char)bStack_379) {
      uStack_388 = (ulong)bStack_379;
      pppppppuVar13 = &pppppppuStack_390;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_378,pppppppuVar13,uStack_388);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_378,&UNK_10f563f87,0x11);
    pppppplVar19 = (long ******)(long)*(char *)((long)ppppppplVar16 + 0x4f);
    if ((long)pppppplVar19 < 0) {
      ppppppplVar10 = (long *******)ppppppplVar16[7];
      pppppplVar19 = ppppppplVar16[8];
    }
    else {
      ppppppplVar10 = ppppppplVar16 + 7;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_378,ppppppplVar10,pppppplVar19);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_378,&UNK_10f563f99,0x11);
    FUN_1092c3638(&pppppppuStack_3a8,*plVar22,plVar22[1] - *plVar22);
    pppppplVar19 = pppppplStack_3a0;
    pppppppuVar13 = pppppppuStack_3a8;
    if (-1 < (char)bStack_391) {
      pppppplVar19 = (long ******)(ulong)bStack_391;
      pppppppuVar13 = &pppppppuStack_3a8;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_378,pppppppuVar13);
    if ((char)bStack_391 < '\0') {
      __ZdlPv(pppppppuStack_3a8);
    }
    if ((char)bStack_379 < '\0') {
      __ZdlPv(pppppppuStack_390);
    }
    FUN_1092a22e8(&plStack_378);
  }
  plStack_378 = (long *)0x0;
  pcStack_370 = FUN_1092bf4b8;
  uStack_330 = 0;
  uStack_328 = 0;
  ppuStack_368 = &PTR_DAT_110ae9528;
  lStack_318 = plVar22[1];
  lStack_320 = *plVar22;
  lStack_310 = plVar22[2];
  *plVar22 = 0;
  plVar22[1] = 0;
  plVar22[2] = 0;
  (*(code *)(**ppppppplVar16)[2])();
  pplVar17 = &plStack_378;
  func_0x0001092bffbc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
    ___stack_chk_fail();
    if ((char)bStack_391 < '\0') {
      __ZdlPv(pppppppuStack_3a8);
    }
    if ((char)bStack_379 < '\0') {
      __ZdlPv(pppppppuStack_390);
    }
    FUN_1092a22e8(&plStack_378);
    __Unwind_Resume(pplVar17);
    FUN_1092a988c(appuStack_530);
    *(uint *)(auStack_510 + (long)(ppuStack_520[-3] + -8)) =
         *(uint *)(auStack_510 + (long)(ppuStack_520[-3] + -8)) & 0xffffffb5 | 8;
    for (; pppppplVar19 != (long ******)0x0; pppppplVar19 = (long ******)((long)pppppplVar19 + -1))
    {
      *(undefined8 *)((long)auStack_508 + (long)ppuStack_520[-3]) = 2;
      uStack_411 = 0x30;
      FUN_1092bf390(&ppuStack_520,&uStack_411);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
    }
    FUN_10926dc5c(pplVar17,&ppuStack_518,&uStack_411);
    appuStack_530[0] = &PTR_SUB_1108a5a38;
    ppuStack_520 = &PTR_DAT_1108a5a60;
    appuStack_4b0[0] = &PTR_DAT_1108a5a88;
    ppuStack_518 = &PTR_DAT_11088d7b0;
    if (cStack_4c1 < '\0') {
      __ZdlPv(uStack_4d8);
    }
    ppuStack_518 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(auStack_510);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_530,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_4b0);
    return;
  }
  return;
}



/* Entry: 1092be2f4; end: 1092be77f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1092be2f4(long *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  code *pcVar4;
  undefined4 uVar5;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined **appuStack_260 [2];
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined1 auStack_240 [8];
  undefined8 auStack_238 [6];
  undefined8 uStack_208;
  char cStack_1f1;
  undefined **appuStack_1e0 [19];
  undefined1 uStack_141;
  undefined8 *******pppppppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 *******pppppppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  long *plStack_a8;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined4 uStack_90;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long **pplVar6;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*param_2;
  if ((ulong)(param_2[1] - (long)plVar9) < 8) {
    pplVar6 = &plStack_a8;
    func_0x000107c31940(pplVar6,&UNK_10f564146);
    uVar5 = SUB84(pplVar6,0);
    __ZSt19uncaught_exceptionsv();
    param_3 = 0x17;
    uStack_90 = uVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_a8,&UNK_10f563f5a);
    FUN_1092a22e8(&plStack_a8);
    plVar9 = (long *)*param_2;
  }
  if (*plVar9 == 0x300435a4c) {
    param_3 = param_1[3];
    FUN_1092bf580(&plStack_a8,param_1[2],param_3,param_1 + 6);
    func_0x0001092bd118(param_1,&plStack_a8);
    if (pcStack_a0 == (code *)0x0) goto LAB_1092be4a0;
    plVar7 = (long *)((long)pcStack_a0 + 8);
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else if ((int)*plVar9 == 0x435a4c) {
    func_0x0001092bf6fc(&plStack_a8);
    func_0x0001092bd17c(param_1,&plStack_a8);
    if (pcStack_a0 == (code *)0x0) goto LAB_1092be4a0;
    plVar7 = (long *)((long)pcStack_a0 + 8);
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    if ((short)*plVar9 != 0x4b50) goto LAB_1092be4a0;
    plVar7 = (long *)0x80;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_DAT_110ae94e8;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[0xb] = 0;
    plVar7[10] = 0;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plStack_a8 = plVar7 + 3;
    *plStack_a8 = (long)&PTR_FUN_110ae8600;
    plVar7[10] = 0;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    *(undefined4 *)(plVar7 + 0xb) = 0x3f800000;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    plVar7[0xf] = 0;
    plVar7[0xe] = 0;
    pcStack_a0 = (code *)plVar7;
    func_0x0001092bd1e0(param_1,&plStack_a8);
    if (pcStack_a0 == (code *)0x0) goto LAB_1092be4a0;
    plVar7 = (long *)((long)pcStack_a0 + 8);
    do {
      lVar8 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcVar4 = pcStack_a0;
  if (lVar8 == 0) {
    (**(code **)(*(long *)pcStack_a0 + 0x10))(pcStack_a0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar4);
  }
LAB_1092be4a0:
  if (*param_1 == 0) {
    pplVar6 = &plStack_a8;
    func_0x000107c31940(pplVar6,&UNK_10f564146);
    uVar5 = SUB84(pplVar6,0);
    __ZSt19uncaught_exceptionsv();
    uStack_90 = uVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_a8,&UNK_10f563f72,0x14);
    FUN_1092be780(&pppppppuStack_c0,plVar9,8);
    pppppppuVar3 = pppppppuStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      pppppppuVar3 = &pppppppuStack_c0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_a8,pppppppuVar3,uStack_b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_a8,&UNK_10f563f87,0x11);
    lVar8 = (long)*(char *)((long)param_1 + 0x4f);
    if (lVar8 < 0) {
      plVar9 = (long *)param_1[7];
      lVar8 = param_1[8];
    }
    else {
      plVar9 = param_1 + 7;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_a8,plVar9,lVar8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_a8,&UNK_10f563f99,0x11);
    FUN_1092c3638(&pppppppuStack_d8,*param_2,param_2[1] - *param_2);
    param_3 = uStack_d0;
    pppppppuVar3 = pppppppuStack_d8;
    if (-1 < (char)bStack_c1) {
      param_3 = (ulong)bStack_c1;
      pppppppuVar3 = &pppppppuStack_d8;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&plStack_a8,pppppppuVar3);
    if ((char)bStack_c1 < '\0') {
      __ZdlPv(pppppppuStack_d8);
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(pppppppuStack_c0);
    }
    FUN_1092a22e8(&plStack_a8);
  }
  plStack_a8 = (long *)0x0;
  pcStack_a0 = FUN_1092bf4b8;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_98 = &PTR_DAT_110ae9528;
  lStack_48 = param_2[1];
  lStack_50 = *param_2;
  lStack_40 = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  (**(code **)(*(long *)*param_1 + 0x10))();
  pplVar6 = &plStack_a8;
  func_0x0001092bffbc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(pppppppuStack_d8);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(pppppppuStack_c0);
  }
  FUN_1092a22e8(&plStack_a8);
  __Unwind_Resume(pplVar6);
  FUN_1092a988c(appuStack_260);
  *(uint *)(auStack_240 + (long)(ppuStack_250[-3] + -8)) =
       *(uint *)(auStack_240 + (long)(ppuStack_250[-3] + -8)) & 0xffffffb5 | 8;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *(undefined8 *)((long)auStack_238 + (long)ppuStack_250[-3]) = 2;
    uStack_141 = 0x30;
    FUN_1092bf390(&ppuStack_250,&uStack_141);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  FUN_10926dc5c(pplVar6,&ppuStack_248,&uStack_141);
  appuStack_260[0] = &PTR_SUB_1108a5a38;
  ppuStack_250 = &PTR_DAT_1108a5a60;
  appuStack_1e0[0] = &PTR_DAT_1108a5a88;
  ppuStack_248 = &PTR_DAT_11088d7b0;
  if (cStack_1f1 < '\0') {
    __ZdlPv(uStack_208);
  }
  ppuStack_248 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_240);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_260,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_1e0);
  return;
}



/* Entry: 1092be780; end: 1092be8db;  */

void FUN_1092be780(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **appuStack_180 [2];
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [8];
  undefined8 auStack_158 [6];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined1 uStack_61;
  
  FUN_1092a988c(appuStack_180);
  *(uint *)(auStack_160 + (long)(ppuStack_170[-3] + -8)) =
       *(uint *)(auStack_160 + (long)(ppuStack_170[-3] + -8)) & 0xffffffb5 | 8;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((long)auStack_158 + (long)ppuStack_170[-3]) = 2;
    uStack_61 = 0x30;
    FUN_1092bf390(&ppuStack_170,&uStack_61);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  }
  FUN_10926dc5c(param_1,&ppuStack_168,&uStack_61);
  appuStack_180[0] = &PTR_SUB_1108a5a38;
  ppuStack_170 = &PTR_DAT_1108a5a60;
  appuStack_100[0] = &PTR_DAT_1108a5a88;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_180,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 1092be8dc; end: 1092bea6f;  */

void FUN_1092be8dc(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined4 uVar4;
  long *plVar6;
  long lVar7;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined1 *puVar5;
  
  if (*param_1 == 0) {
    puVar5 = auStack_40;
    func_0x000107c31940(puVar5,&UNK_10f564146);
    uVar4 = SUB84(puVar5,0);
    __ZSt19uncaught_exceptionsv();
    uStack_28 = uVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_40,&UNK_10f56408e,0x2c);
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_40,puVar2,uVar1);
    FUN_1092a22e8(auStack_40);
  }
  puVar5 = auStack_40;
  func_0x000107c31940(puVar5,&UNK_10f564146);
  uVar4 = SUB84(puVar5,0);
  __ZSt19uncaught_exceptionsv();
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  uStack_28 = uVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (auStack_40,puVar2,uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (auStack_40,&UNK_10f5640bb,8);
  lVar7 = (long)*(char *)((long)param_1 + 0x4f);
  if (lVar7 < 0) {
    plVar6 = (long *)param_1[7];
    lVar7 = param_1[8];
  }
  else {
    plVar6 = param_1 + 7;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (auStack_40,plVar6,lVar7);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (auStack_40,&UNK_10f5640c4,0xc);
  (**(code **)(*(long *)*param_1 + 0x48))(&ppuStack_58);
  pppuVar3 = (undefined8 ***)ppuStack_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar3 = &ppuStack_58;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (auStack_40,pppuVar3,uStack_50);
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  FUN_1092a22e8(auStack_40);
  return;
}



/* Entry: 1092bea70; end: 1092beb87;  */

void FUN_1092bea70(undefined8 *param_1)

{
  FUN_1092bce90();
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}



/* Entry: 1092beb88; end: 1092bec9f;  */

void FUN_1092beb88(undefined8 *param_1)

{
  FUN_1092bce90();
  (**(code **)(*(long *)*param_1 + 0x28))();
  return;
}



/* Entry: 1092beca0; end: 1092bee63;  */

void FUN_1092beca0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *aplStack_48 [3];
  
  FUN_1092bce90();
  *param_1 = 0;
  (**(code **)(*(long *)*param_2 + 0x40))(aplStack_48,(long *)*param_2,param_3);
  plVar1 = aplStack_48[0];
  aplStack_48[0] = (long *)0x0;
  FUN_1092ab7c0(param_1,plVar1);
  plVar1 = aplStack_48[0];
  aplStack_48[0] = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x40))();
    }
    __ZdlPv(plVar1);
  }
  return;
}



/* Entry: 1092bee64; end: 1092bf1d3;  */

void FUN_1092bee64(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  undefined8 ***pppuVar6;
  bool bVar7;
  undefined4 uVar8;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined1 auStack_70 [24];
  undefined4 uStack_58;
  undefined1 *puVar9;
  
  FUN_1092bce90();
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    puVar9 = auStack_70;
    func_0x000107c31940(puVar9,&UNK_10f564146);
    uVar8 = SUB84(puVar9,0);
    __ZSt19uncaught_exceptionsv();
    uStack_58 = uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,&UNK_10f564030,0x2d);
    FUN_1092a22e8(auStack_70);
  }
  plVar10 = (long *)*param_1;
  (**(code **)(*plVar10 + 0x50))();
  puVar14 = (undefined8 *)*plVar10;
  puVar13 = (undefined8 *)plVar10[1];
  if (puVar14 == puVar13) {
LAB_1092bef48:
    bVar7 = puVar14 != puVar13;
    puVar13 = puVar14;
    if (bVar7) goto LAB_1092befa8;
  }
  else {
    uVar3 = param_2[1];
    puVar1 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar1 = param_2;
    }
    do {
      bVar4 = *(byte *)((long)puVar14 + 0x17);
      uVar2 = puVar14[1];
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
      }
      if (uVar2 == uVar3) {
        puVar11 = (undefined8 *)*puVar14;
        if (-1 < (char)bVar4) {
          puVar11 = puVar14;
        }
        _memcmp(puVar11,puVar1,uVar3);
        if ((int)puVar11 == 0) goto LAB_1092bef48;
      }
      puVar14 = puVar14 + 5;
    } while (puVar14 != puVar13);
  }
  puVar9 = auStack_70;
  func_0x000107c31940(puVar9,&UNK_10f564146);
  uVar8 = SUB84(puVar9,0);
  __ZSt19uncaught_exceptionsv();
  uStack_58 = uVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (auStack_70,&UNK_10f563769,0x20);
  uVar3 = param_2[1];
  puVar14 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar14 = param_2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (auStack_70,puVar14,uVar3);
  FUN_1092a22e8(auStack_70);
  puVar14 = puVar13;
LAB_1092befa8:
  uVar8 = *(undefined4 *)(puVar14 + 4);
  FUN_1092ac3b8(&uStack_88,param_3);
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
  }
  if (uStack_80 != 0) {
    __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE(&uStack_88,0);
  }
  (**(code **)(*(long *)param_1[4] + 0x18))(&lStack_98,(long *)param_1[4],&uStack_88,uVar8);
  if (lStack_98 == 0) {
    puVar9 = auStack_70;
    func_0x000107c31940(puVar9,&UNK_10f564146);
    uVar8 = SUB84(puVar9,0);
    __ZSt19uncaught_exceptionsv();
    uStack_58 = uVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,&UNK_10f56405e,0x2f);
    FUN_1092ac3b8(&ppuStack_c8,param_3);
    if ((char)bStack_b1 < '\0') {
      func_0x000107c3192c(&ppuStack_b0,ppuStack_c8,uStack_c0);
    }
    else {
      uStack_a8 = uStack_c0;
      ppuStack_b0 = ppuStack_c8;
      uStack_a0 = (ulong)bStack_b1 << 0x38;
    }
    uVar3 = uStack_a8;
    pppuVar6 = (undefined8 ***)ppuStack_b0;
    if (-1 < uStack_a0) {
      uVar3 = (ulong)uStack_a0._7_1_;
      pppuVar6 = &ppuStack_b0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (auStack_70,pppuVar6,uVar3);
    if ((char)uStack_a0._7_1_ < '\0') {
      __ZdlPv(ppuStack_b0);
    }
    if ((char)bStack_b1 < '\0') {
      __ZdlPv(ppuStack_c8);
    }
    FUN_1092a22e8(auStack_70);
  }
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,puVar14,lStack_98);
  FUN_1092b8b78(*(undefined8 *)(lStack_98 + 0x18),param_3);
  if (plStack_90 != (long *)0x0) {
    plVar10 = plStack_90 + 1;
    do {
      lVar12 = *plVar10;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  if ((char)bStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  return;
}



/* Entry: 1092bf1d4; end: 1092bf243;  */

undefined8 * FUN_1092bf1d4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1092bf244(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 1092bf244; end: 1092bf27f;  */

long * FUN_1092bf244(undefined8 *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  ulong *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (-1 < (long)param_2) {
    plVar6 = param_2;
    __Znwm();
    *param_1 = plVar6;
    param_1[1] = plVar6;
    param_1[2] = (char *)((long)plVar6 + (long)param_2);
    return plVar6;
  }
  FUN_1092bf280();
  pcStack_28 = FUN_1092bf280;
  puVar3 = (ulong *)&UNK_10f564158;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x000104c4f6cc();
  pcStack_38 = FUN_1092bf294;
  plVar6 = (long *)puVar3[1];
  if ((long *)(puVar3[2] - (long)plVar6) < param_2) {
    plVar7 = (long *)*puVar3;
    lVar8 = (long)plVar6 - (long)plVar7;
    plVar4 = (long *)(lVar8 + (long)param_2);
    if ((long)plVar4 < 0) {
      plVar4 = param_2;
      puStack_40 = (undefined1 *)&puStack_30;
      FUN_1092bf280();
      pcStack_88 = FUN_1092bf390;
      pcVar1 = (char *)((long)plVar6 + *(long *)(*plVar6 + -0x18));
      lVar2 = *plVar4;
      if (*(int *)(pcVar1 + 0x90) == -1) {
        lStack_b0 = lVar8;
        plStack_a8 = plVar7;
        plStack_a0 = param_2;
        puStack_98 = puVar3;
        ppuStack_90 = &puStack_40;
        __ZNKSt3__18ios_base6getlocEv(&lStack_b8,pcVar1);
        plVar4 = &lStack_b8;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar4 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_b8);
        *(int *)(pcVar1 + 0x90) = (int)plVar4;
      }
      *(int *)(pcVar1 + 0x90) = (int)(char)lVar2;
      return plVar6;
    }
    uVar5 = puVar3[2] - (long)plVar7;
    plVar6 = (long *)(uVar5 * 2);
    if (plVar6 < plVar4 || (long)plVar6 - (long)plVar4 == 0) {
      plVar6 = plVar4;
    }
    if (0x3ffffffffffffffe < uVar5) {
      plVar6 = (long *)0x7fffffffffffffff;
    }
    if (plVar6 == (long *)0x0) {
      plVar9 = (long *)0x0;
      puStack_40 = (undefined1 *)&puStack_30;
    }
    else {
      plVar9 = plVar6;
      puStack_40 = (undefined1 *)&puStack_30;
      __Znwm();
    }
    _bzero((char *)((long)plVar9 + lVar8),param_2);
    plVar4 = plVar9;
    _memcpy(plVar9,plVar7,lVar8);
    *puVar3 = (ulong)plVar9;
    puVar3[1] = (ulong)((char *)((long)plVar9 + lVar8) + (long)param_2);
    puVar3[2] = (ulong)((long)plVar9 + (long)plVar6);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar7);
      return plVar7;
    }
  }
  else {
    plVar4 = plVar6;
    if (param_2 != (long *)0x0) {
      plVar4 = (long *)((long)plVar6 + (long)param_2);
      puStack_40 = (undefined1 *)&puStack_30;
      _bzero(plVar6,param_2);
    }
    puVar3[1] = (ulong)plVar4;
  }
  return plVar4;
}



/* Entry: 1092bf280; end: 1092bf293;  */

long * FUN_1092bf280(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  ulong *puVar3;
  long *plVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  char *pcStack_80;
  ulong *puStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  puVar3 = (ulong *)&UNK_10f564158;
  func_0x000104c4f6cc();
  pcStack_18 = FUN_1092bf294;
  plVar7 = (long *)puVar3[1];
  if ((char *)(puVar3[2] - (long)plVar7) < param_2) {
    plVar8 = (long *)*puVar3;
    lVar9 = (long)plVar7 - (long)plVar8;
    plVar4 = (long *)(param_2 + lVar9);
    if ((long)plVar4 < 0) {
      pcVar5 = param_2;
      puStack_20 = &stack0xfffffffffffffff0;
      FUN_1092bf280();
      pcStack_68 = FUN_1092bf390;
      pcVar1 = (char *)((long)plVar7 + *(long *)(*plVar7 + -0x18));
      cVar2 = *pcVar5;
      if (*(int *)(pcVar1 + 0x90) == -1) {
        lStack_90 = lVar9;
        plStack_88 = plVar8;
        pcStack_80 = param_2;
        puStack_78 = puVar3;
        ppuStack_70 = &puStack_20;
        __ZNKSt3__18ios_base6getlocEv(&lStack_98,pcVar1);
        plVar4 = &lStack_98;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar4 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_98);
        *(int *)(pcVar1 + 0x90) = (int)plVar4;
      }
      *(int *)(pcVar1 + 0x90) = (int)cVar2;
      return plVar7;
    }
    uVar6 = puVar3[2] - (long)plVar8;
    plVar7 = (long *)(uVar6 * 2);
    if (plVar7 < plVar4 || (long)plVar7 - (long)plVar4 == 0) {
      plVar7 = plVar4;
    }
    if (0x3ffffffffffffffe < uVar6) {
      plVar7 = (long *)0x7fffffffffffffff;
    }
    if (plVar7 == (long *)0x0) {
      plVar10 = (long *)0x0;
      puStack_20 = &stack0xfffffffffffffff0;
    }
    else {
      plVar10 = plVar7;
      puStack_20 = &stack0xfffffffffffffff0;
      __Znwm();
    }
    _bzero((char *)((long)plVar10 + lVar9),param_2);
    plVar4 = plVar10;
    _memcpy(plVar10,plVar8,lVar9);
    *puVar3 = (ulong)plVar10;
    puVar3[1] = (ulong)((char *)((long)plVar10 + lVar9) + (long)param_2);
    puVar3[2] = (ulong)((long)plVar10 + (long)plVar7);
    if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar8);
      return plVar8;
    }
  }
  else {
    plVar4 = plVar7;
    if (param_2 != (char *)0x0) {
      plVar4 = (long *)((long)plVar7 + (long)param_2);
      puStack_20 = &stack0xfffffffffffffff0;
      _bzero(plVar7,param_2);
    }
    puVar3[1] = (ulong)plVar4;
  }
  return plVar4;
}



/* Entry: 1092bf294; end: 1092bf38f;  */

long * FUN_1092bf294(ulong *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  char *pcStack_70;
  ulong *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar6 = (long *)param_1[1];
  if ((char *)(param_1[2] - (long)plVar6) < param_2) {
    plVar7 = (long *)*param_1;
    lVar8 = (long)plVar6 - (long)plVar7;
    plVar3 = (long *)(param_2 + lVar8);
    if ((long)plVar3 < 0) {
      pcVar4 = param_2;
      FUN_1092bf280();
      pcStack_58 = FUN_1092bf390;
      pcVar1 = (char *)((long)plVar6 + *(long *)(*plVar6 + -0x18));
      cVar2 = *pcVar4;
      if (*(int *)(pcVar1 + 0x90) == -1) {
        lStack_80 = lVar8;
        plStack_78 = plVar7;
        pcStack_70 = param_2;
        puStack_68 = param_1;
        puStack_60 = &stack0xfffffffffffffff0;
        __ZNKSt3__18ios_base6getlocEv(&lStack_88,pcVar1);
        plVar3 = &lStack_88;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar3,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar3 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_88);
        *(int *)(pcVar1 + 0x90) = (int)plVar3;
      }
      *(int *)(pcVar1 + 0x90) = (int)cVar2;
      return plVar6;
    }
    uVar5 = param_1[2] - (long)plVar7;
    plVar6 = (long *)(uVar5 * 2);
    if (plVar6 < plVar3 || (long)plVar6 - (long)plVar3 == 0) {
      plVar6 = plVar3;
    }
    if (0x3ffffffffffffffe < uVar5) {
      plVar6 = (long *)0x7fffffffffffffff;
    }
    if (plVar6 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = plVar6;
      __Znwm();
    }
    _bzero((char *)((long)plVar9 + lVar8),param_2);
    plVar3 = plVar9;
    _memcpy(plVar9,plVar7,lVar8);
    *param_1 = (ulong)plVar9;
    param_1[1] = (ulong)((char *)((long)plVar9 + lVar8) + (long)param_2);
    param_1[2] = (ulong)((long)plVar9 + (long)plVar6);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar7);
      return plVar7;
    }
  }
  else {
    plVar3 = plVar6;
    if (param_2 != (char *)0x0) {
      plVar3 = (long *)((long)plVar6 + (long)param_2);
      _bzero(plVar6,param_2);
    }
    param_1[1] = (ulong)plVar3;
  }
  return plVar3;
}



/* Entry: 1092bf390; end: 1092bf42f;  */

long * FUN_1092bf390(long *param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lStack_38;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  cVar2 = *param_2;
  if (*(int *)(lVar1 + 0x90) == -1) {
    __ZNKSt3__18ios_base6getlocEv(&lStack_38,lVar1);
    plVar3 = &lStack_38;
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar3,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar3 + 0x38))();
    __ZNSt3__16localeD1Ev(&lStack_38);
    *(int *)(lVar1 + 0x90) = (int)plVar3;
  }
  *(int *)(lVar1 + 0x90) = (int)cVar2;
  return param_1;
}



/* Entry: 1092bf430; end: 1092bf46b;  */

void FUN_1092bf430(void)

{
  return;
}



/* Entry: 1092bf46c; end: 1092bf4b7;  */

long * FUN_1092bf46c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 1092bf4b8; end: 1092bf4d3;  */

void FUN_1092bf4b8(void)

{
  return;
}



/* Entry: 1092bf4d4; end: 1092bf4e7;  */

void FUN_1092bf4d4(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bf4e8; end: 1092bf4eb;  */

void FUN_1092bf4e8(void)

{
  return;
}



/* Entry: 1092bf4ec; end: 1092bf523;  */

undefined8 FUN_1092bf4ec(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110ae9428);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1092bf524; end: 1092bf527;  */

void FUN_1092bf524(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bf528; end: 1092bf57f;  */

long FUN_1092bf528(long param_1)

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



/* Entry: 1092bf580; end: 1092bf663;  */

void FUN_1092bf580(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110ae9448;
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_50 = param_2;
  plStack_48 = param_3;
  FUN_1092ad378(puVar4 + 3,&uStack_50,*param_4);
  if (param_3 != (long *)0x0) {
    plVar1 = param_3 + 1;
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
      (**(code **)(*param_3 + 0x10))(param_3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
  }
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  return;
}



/* Entry: 1092bf664; end: 1092bf673;  */

void FUN_1092bf664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092bf674; end: 1092bf693;  */

void FUN_1092bf674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9448;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bf694; end: 1092bf6a3;  */

void FUN_1092bf694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092bf69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092bf6a4; end: 1092bf80f;  */

long FUN_1092bf6a4(long param_1)

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



/* Entry: 1092bf810; end: 1092bf81f;  */

void FUN_1092bf810(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9498;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1092bf820; end: 1092bf83f;  */

void FUN_1092bf820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9498;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bf840; end: 1092bf85f;  */

void FUN_1092bf840(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092bf848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092bf860; end: 1092bf87f;  */

void FUN_1092bf860(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ae94e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bf880; end: 1092bf88f;  */

void FUN_1092bf880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092bf888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1092bf890; end: 1092bf8ff;  */

undefined8 * FUN_1092bf890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9550;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  func_0x000107c31950(param_1 + 1,0x400);
  return param_1;
}



/* Entry: 1092bf900; end: 1092bf953;  */

ulong FUN_1092bf900(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 8);
  uVar2 = *(long *)(param_1 + 0x10) - lVar1;
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  _memcpy(param_2,lVar1,uVar2);
  *(ulong *)(param_1 + 0x28) = uVar2 + *(long *)(param_1 + 0x28);
  return uVar2;
}



/* Entry: 1092bf954; end: 1092bf9bb;  */

void FUN_1092bf954(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = lVar3 + param_3;
  uVar5 = *(long *)(param_1 + 0x10) - lVar4;
  lVar2 = uVar1 - uVar5;
  if (uVar5 <= uVar1 && lVar2 != 0) {
    func_0x000107c27d58((long *)(param_1 + 8),lVar2);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 8);
  }
  _memcpy(lVar4 + lVar3,param_2,param_3);
  *(ulong *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1092bf9bc; end: 1092bf9e7;  */

undefined8 FUN_1092bf9bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1092bf9e8; end: 1092bfa4b;  */

undefined8 * FUN_1092bf9e8(undefined8 *param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (param_3 == 2) {
    uVar2 = (param_1[2] - param_1[1]) - param_2;
    if ((ulong)(param_1[2] - param_1[1]) < param_2) goto LAB_1092bfa40;
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 0) {
        return param_1;
      }
      param_1[5] = param_2;
      return param_1;
    }
    uVar2 = param_1[5] + param_2;
    if ((ulong)(param_1[2] - param_1[1]) < uVar2) {
LAB_1092bfa40:
      puVar1 = (undefined8 *)&UNK_10f56415f;
      func_0x000105688514();
      *puVar1 = &PTR_FUN_110ae95b8;
      plVar4 = puVar1 + 2;
      puVar3 = (undefined8 *)*plVar4;
      if (*(char *)(puVar3 + 1) == '\x01') {
        (*(code *)puVar1[1])();
        puVar3 = (undefined8 *)*plVar4;
      }
      (*(code *)*puVar3)(plVar4);
      return puVar1;
    }
  }
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 1092bfa4c; end: 1092bfaab;  */

undefined8 * FUN_1092bfa4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae95b8;
  plVar2 = param_1 + 2;
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (*(code *)param_1[1])();
    puVar1 = (undefined8 *)*plVar2;
  }
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 1092bfaac; end: 1092bfaaf;  */

undefined8 * FUN_1092bfaac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae95b8;
  plVar2 = param_1 + 2;
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (*(code *)param_1[1])();
    puVar1 = (undefined8 *)*plVar2;
  }
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 1092bfab0; end: 1092bfac3;  */

void FUN_1092bfab0(void)

{
  FUN_1092bfa4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092bfac4; end: 1092bfb1b;  */

long FUN_1092bfac4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x58);
  lVar1 = *(ulong *)(param_1 + 0x50) - lVar2;
  if ((ulong)(lVar2 + param_3) <= *(ulong *)(param_1 + 0x50)) {
    lVar1 = param_3;
  }
  _memcpy(param_2,*(long *)(param_1 + 0x48) + lVar2,lVar1);
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + lVar1;
  return lVar1;
}



/* Entry: 1092bfb1c; end: 1092bfb2f;  */

undefined8 FUN_1092bfb1c(void)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f564172;
  func_0x000105688514();
  return *(undefined8 *)(puVar1 + 0x48);
}



/* Entry: 1092bfb30; end: 1092bfb57;  */

undefined8 FUN_1092bfb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1092bfb58; end: 1092bfbaf;  */

ulong FUN_1092bfb58(ulong param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  iVar2 = (int)param_3;
  if (iVar2 == 2) {
    uVar4 = *(ulong *)(param_1 + 0x50) - param_2;
    if (*(ulong *)(param_1 + 0x50) < param_2) goto LAB_1092bfba4;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return param_1;
      }
      *(ulong *)(param_1 + 0x58) = param_2;
      return param_1;
    }
    uVar4 = *(long *)(param_1 + 0x58) + param_2;
    if (*(ulong *)(param_1 + 0x50) < uVar4) {
LAB_1092bfba4:
      puVar1 = &UNK_10f56415f;
      func_0x000105688514();
      lVar3 = *(long *)(puVar1 + 0x58);
      if (lVar3 == 0) {
        lVar3 = *(long *)(puVar1 + 0x68) - *(long *)(puVar1 + 0x60);
      }
      lVar5 = *(long *)(puVar1 + 0x50);
      if (lVar5 == 0) {
        lVar5 = *(long *)(puVar1 + 0x60);
      }
      uVar4 = lVar3 - *(long *)(puVar1 + 0x78);
      if (param_3 <= uVar4) {
        uVar4 = param_3;
      }
      _memcpy(param_2,lVar5 + *(long *)(puVar1 + 0x78),uVar4);
      *(ulong *)(puVar1 + 0x78) = *(long *)(puVar1 + 0x78) + uVar4;
      return uVar4;
    }
  }
  *(ulong *)(param_1 + 0x58) = uVar4;
  return param_1;
}



/* Entry: 1092bfbb0; end: 1092bfc1b;  */

ulong FUN_1092bfbb0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x60);
  }
  uVar2 = lVar1 - *(long *)(param_1 + 0x78);
  if (param_3 <= uVar2) {
    uVar2 = param_3;
  }
  _memcpy(param_2,lVar3 + *(long *)(param_1 + 0x78),uVar2);
  *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + uVar2;
  return uVar2;
}



/* Entry: 1092bfc1c; end: 1092bfc73;  */

void FUN_1092bfc1c(void)

{
  return;
}



/* Entry: 1092bfc74; end: 1092bfcef;  */

void FUN_1092bfc74(long param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  
  if (param_3 == 2) {
    uVar1 = *(ulong *)(param_1 + 0x58);
    if (uVar1 == 0) {
      uVar1 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
    }
    if (uVar1 < param_2) goto LAB_1092bfce4;
    param_2 = uVar1 - param_2;
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 0) {
        return;
      }
      *(ulong *)(param_1 + 0x78) = param_2;
      return;
    }
    param_2 = *(long *)(param_1 + 0x78) + param_2;
    uVar1 = *(ulong *)(param_1 + 0x58);
    if (uVar1 == 0) {
      uVar1 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60);
    }
    if (uVar1 < param_2) {
LAB_1092bfce4:
      func_0x000105688514(&UNK_10f56415f);
      return;
    }
  }
  *(ulong *)(param_1 + 0x78) = param_2;
  return;
}



/* Entry: 1092bfcf0; end: 1092bfcf7;  */

void FUN_1092bfcf0(void)

{
  return;
}



/* Entry: 1092bfcf8; end: 1092bfd6f;  */

undefined8 * FUN_1092bfcf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9550;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092bfd70; end: 1092bfd7f;  */

void FUN_1092bfd70(void)

{
  return;
}



/* Entry: 1092bfd80; end: 1092bfddf;  */

undefined8 * FUN_1092bfd80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9620;
  func_0x0001092bffbc(param_1 + 1);
  return param_1;
}



/* Entry: 1092bfde0; end: 1092bfe57;  */

void FUN_1092bfde0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109246380(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1092bfe58; end: 1092bfe6f;  */

void FUN_1092bfe58(void)

{
  return;
}



/* Entry: 1092bfe70; end: 1092bff7f;  */

undefined8 * FUN_1092bfe70(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = 0;
  param_1[1] = FUN_1092c01b4;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[2] = &PTR_DAT_110ae9718;
  plVar5 = param_1 + 0xb;
  param_1[0xc] = 0;
  *plVar5 = 0;
  param_1[0xd] = 0;
  lVar6 = *param_2;
  lVar3 = lVar6;
  _ftell();
  _fseek(lVar6,0,2);
  lVar2 = lVar6;
  _ftell();
  _fseek(lVar6,lVar3,0);
  uVar1 = lVar2 - lVar3;
  if (uVar1 != 0) {
    if ((param_1[9] == 0) || (param_1[10] == 0)) {
      lVar3 = param_1[0xb];
      uVar4 = param_1[0xc] - lVar3;
      if (uVar1 < uVar4 || uVar1 - uVar4 == 0) {
        if (uVar1 < uVar4) {
          param_1[0xc] = lVar3 + uVar1;
        }
      }
      else {
        func_0x000107c27d58(plVar5,uVar1 - uVar4);
        lVar3 = *plVar5;
      }
      _fread(lVar3,1,uVar1,*param_2);
    }
    else {
      FUN_1092c0134(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 1092bff80; end: 1092bffef;  */

long FUN_1092bff80(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_1092c0134();
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  func_0x000107c3194c(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



/* Entry: 1092bfff0; end: 1092c0067;  */

void FUN_1092bfff0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *extraout_x8;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  while( true ) {
    plVar1 = (long *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *param_1;
    if (lVar3 != 0) {
      *param_1 = 0;
      lVar4 = param_1[1];
      *(long *)((long)register0x00000008 + -0x60) = lVar3;
      *(long *)((long)register0x00000008 + -0x58) = lVar4;
      (**(code **)(param_1[2] + 0x10))((undefined1 *)((long)register0x00000008 + -0x50));
      FUN_1092bf46c();
      param_1 = plVar1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x18))
    break;
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x68) = FUN_1092c0068;
    plVar1 = param_1 + 0xb;
    if (*plVar1 != param_1[0xc]) {
      FUN_1092bfff0(param_1);
      lVar3 = param_1[0xb];
      extraout_x8[1] = param_1[0xc];
      *extraout_x8 = lVar3;
      extraout_x8[2] = param_1[0xd];
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *plVar1 = 0;
      return;
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    if (param_1[10] == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000107c27d58(extraout_x8);
      lVar3 = *extraout_x8;
    }
    lVar4 = param_1[9];
    if (lVar4 == 0) {
      lVar4 = *plVar1;
    }
    lVar2 = param_1[10];
    if (lVar2 == 0) {
      lVar2 = param_1[0xc] - param_1[0xb];
    }
    _memcpy(lVar3,lVar4,lVar2);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  return;
}



/* Entry: 1092c0068; end: 1092c0133;  */

void FUN_1092c0068(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    plVar1 = param_2 + 0xb;
    if (*plVar1 != param_2[0xc]) {
      FUN_1092bfff0(param_2);
      lVar2 = param_2[0xb];
      param_1[1] = param_2[0xc];
      *param_1 = lVar2;
      param_1[2] = param_2[0xd];
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      *plVar1 = 0;
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (param_2[10] == 0) {
      lVar2 = 0;
    }
    else {
      func_0x000107c27d58(param_1);
      lVar2 = *param_1;
    }
    lVar3 = param_2[9];
    if (lVar3 == 0) {
      lVar3 = *plVar1;
    }
    lVar4 = param_2[10];
    if (lVar4 == 0) {
      lVar4 = param_2[0xc] - param_2[0xb];
    }
    _memcpy(lVar2,lVar3,lVar4);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
    plVar1 = (long *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *param_2;
    if (lVar2 != 0) {
      *param_2 = 0;
      lVar3 = param_2[1];
      *(long *)((long)register0x00000008 + -0x60) = lVar2;
      *(long *)((long)register0x00000008 + -0x58) = lVar3;
      (**(code **)(param_2[2] + 0x10))((undefined1 *)((long)register0x00000008 + -0x50));
      FUN_1092bf46c();
      param_2 = plVar1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x18))
    break;
    unaff_x30 = FUN_1092c0068;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = extraout_x8;
  }
  return;
}



/* Entry: 1092c0134; end: 1092c01b3;  */

long * FUN_1092c0134(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    (*(code *)param_1[1])();
  }
  param_1[1] = param_2[1];
  plVar3 = param_1 + 2;
  (**(code **)*plVar3)(plVar3);
  (**(code **)(param_2[2] + 0x10))(plVar3,param_2 + 2);
  return param_1;
}



/* Entry: 1092c01b4; end: 1092c01cb;  */

void FUN_1092c01b4(void)

{
  return;
}



/* Entry: 1092c01cc; end: 1092c0407;  */

long * FUN_1092c01cc(undefined8 *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  
  if (param_2 == 0) {
    puVar5 = (undefined8 *)0x8;
    __Znwm();
    *puVar5 = &PTR_FUN_110ae98b8;
    plVar6 = (long *)0x10;
    __Znwm();
    uVar7 = 4;
  }
  else {
    if (0x40000000 < param_2) {
      plVar6 = (long *)&UNK_10f56419b;
      func_0x000105688514();
      __ZdlPv();
      __Unwind_Resume();
      func_0x000104bd46a0();
      *plVar6 = 0;
      *(undefined4 *)(plVar6 + 1) = 0xffffffff;
      if (*param_3 != 0) {
        *(undefined4 *)(plVar6 + 1) = 0;
        lVar8 = 0x10;
        __Znwm();
        FUN_1092c08a4();
        plVar4 = (long *)*plVar6;
        *plVar6 = lVar8;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x40))();
        }
      }
      return plVar6;
    }
    plVar4 = (long *)*param_3;
    (**(code **)(*plVar4 + 0x10))(plVar4,param_2,8);
    lVar8 = *param_3;
    plVar6 = (long *)param_3[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar5 = (undefined8 *)0x70;
    __Znwm();
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *puVar5 = &PTR_DAT_110ae9758;
    puVar5[1] = plVar4;
    puVar5[2] = plVar4;
    puVar5[3] = param_2;
    *(undefined1 *)(puVar5 + 4) = 0;
    puVar5[5] = FUN_1092c06ec;
    puVar5[6] = &PTR_DAT_110ae9730;
    puVar5[8] = param_2;
    puVar5[7] = plVar4;
    puVar5[9] = lVar8;
    puVar5[10] = plVar6;
    if (plVar6 == (long *)0x0) {
      puVar5[0xd] = 0;
    }
    else {
      plVar4 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar5[0xd] = 0;
      do {
        lVar8 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar8 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar6 = (long *)0x10;
    __Znwm();
    uVar7 = 2;
  }
  *(undefined4 *)(plVar6 + 1) = uVar7;
  *plVar6 = (long)puVar5;
  *param_1 = plVar6;
  return plVar6;
}



/* Entry: 1092c0408; end: 1092c04af;  */

long * FUN_1092c0408(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    lVar1 = 0x10;
    __Znwm();
    FUN_1092c08a4();
    plVar2 = (long *)*param_1;
    *param_1 = lVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  return param_1;
}



/* Entry: 1092c04b0; end: 1092c0567;  */

long * FUN_1092c04b0(long *param_1,long param_2,undefined8 param_3,undefined1 param_4,
                    undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 1) = 2;
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    *puVar1 = &PTR_DAT_110ae9758;
    puVar1[1] = param_2;
    puVar1[2] = 0;
    puVar1[3] = param_3;
    *(undefined1 *)(puVar1 + 4) = param_4;
    puVar1[5] = *param_5;
    (**(code **)(param_5[1] + 0x10))(puVar1 + 6,param_5 + 1);
    puVar1[0xd] = 0;
    plVar2 = (long *)*param_1;
    *param_1 = (long)puVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  return param_1;
}



/* Entry: 1092c0568; end: 1092c0637;  */

long * FUN_1092c0568(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 1) = 3;
    puVar1 = (undefined8 *)0x70;
    __Znwm();
    *puVar1 = &PTR_FUN_110ae9848;
    puVar1[1] = param_2;
    puVar2 = puVar1;
    FUN_1092c0a38();
    puVar1[2] = puVar2;
    puVar1[3] = 0x32aaaba7;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    plVar3 = (long *)*param_1;
    *param_1 = (long)puVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x40))();
    }
  }
  return param_1;
}



/* Entry: 1092c0638; end: 1092c06eb;  */

char * FUN_1092c0638(long *param_1,char *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  char cStack_41;
  
  pcVar5 = param_2;
  if (param_3 < 2) {
    bVar1 = false;
    pcVar6 = param_2;
  }
  else {
    do {
      plVar4 = (long *)*param_1;
      (**(code **)(*plVar4 + 0x20))(plVar4,&cStack_41,1,1);
      bVar1 = plVar4 == (long *)0x0 || cStack_41 == -1;
      pcVar6 = pcVar5;
      if (bVar1) break;
      pcVar6 = pcVar5 + 1;
      *pcVar5 = cStack_41;
      bVar3 = param_3 != 2;
      bVar2 = 1 < param_3;
      pcVar5 = pcVar6;
      param_3 = param_3 + -1;
    } while ((cStack_41 != '\n' && bVar3) && (cStack_41 == '\n' || bVar2));
  }
  *pcVar6 = '\0';
  pcVar5 = (char *)0x0;
  if (!(bool)(bVar1 & pcVar6 == param_2)) {
    pcVar5 = param_2;
  }
  return pcVar5;
}



/* Entry: 1092c06ec; end: 1092c0753;  */

void FUN_1092c06ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092c0704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),8);
  return;
}



/* Entry: 1092c0754; end: 1092c0773;  */

ulong FUN_1092c0754(long param_1)

{
  undefined *puVar1;
  
  if (*(ulong *)(param_1 + 0x10) != 0) {
    return *(ulong *)(param_1 + 0x10);
  }
  puVar1 = &UNK_10f56420e;
  func_0x000105688514();
  return (ulong)(*(ulong *)(puVar1 + 0x68) <= *(ulong *)(puVar1 + 0x18));
}



/* Entry: 1092c0774; end: 1092c078f;  */

bool FUN_1092c0774(long param_1)

{
  return *(ulong *)(param_1 + 0x68) <= *(ulong *)(param_1 + 0x18);
}



/* Entry: 1092c0790; end: 1092c07eb;  */

long FUN_1092c0790(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x68);
  if (param_4 * param_3 <= lVar1) {
    lVar1 = param_4 * param_3;
  }
  _memcpy(param_2,*(long *)(param_1 + 8) + *(long *)(param_1 + 0x68),lVar1);
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + lVar1;
  return lVar1;
}



/* Entry: 1092c07ec; end: 1092c0803;  */

undefined8 FUN_1092c07ec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return 0;
}



/* Entry: 1092c0804; end: 1092c082b;  */

void FUN_1092c0804(void)

{
  FUN_1092c082c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092c082c; end: 1092c08a3;  */

undefined8 * FUN_1092c082c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_DAT_110ae9758;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 4) == '\x01')) {
    __ZdaPv();
  }
  plVar2 = param_1 + 6;
  puVar1 = (undefined8 *)*plVar2;
  if (*(char *)(puVar1 + 1) == '\x01') {
    (*(code *)param_1[5])();
    puVar1 = (undefined8 *)*plVar2;
  }
  (*(code *)*puVar1)(plVar2);
  return param_1;
}



/* Entry: 1092c08a4; end: 1092c093b;  */

undefined8 * FUN_1092c08a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110ae97d8;
  param_1[1] = 0;
  plVar2 = (long *)*param_2;
  *param_2 = 0;
  plVar1 = (long *)param_1[1];
  param_1[1] = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
    plVar2 = (long *)param_1[1];
  }
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2);
  (**(code **)(*plVar2 + 0x38))(plVar2,plVar1);
  return param_1;
}



/* Entry: 1092c093c; end: 1092c097f;  */

void FUN_1092c093c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092c0948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 1092c0980; end: 1092c09a7;  */

undefined8 FUN_1092c0980(long param_1,undefined8 param_2)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2,0);
  return 0;
}



/* Entry: 1092c09a8; end: 1092c09b7;  */

void FUN_1092c09a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001092c09b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 1092c09b8; end: 1092c0a37;  */

undefined8 * FUN_1092c09b8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  *param_1 = &PTR_FUN_110ae97d8;
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x50))();
  }
  return param_1;
}



/* Entry: 1092c0a38; end: 1092c0ab7;  */

long FUN_1092c0a38(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = param_2;
  _ftell();
  if ((lVar1 < 0) || (lVar2 = param_2, _fseek(param_2,0,2), (int)lVar2 != 0)) {
    lVar2 = 0;
  }
  else {
    lVar3 = param_2;
    _ftell();
    _fseek(param_2,lVar1,0);
    lVar2 = 0;
    if (lVar1 <= lVar3) {
      lVar2 = lVar3 - lVar1;
    }
  }
  return lVar2;
}



/* Entry: 1092c0ab8; end: 1092c0b7b;  */

long FUN_1092c0ab8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x58);
  if ((lVar3 == *(long *)(param_1 + 0x60)) && (0 < (long)*(ulong *)(param_1 + 0x10))) {
    if (0x40000000 < *(ulong *)(param_1 + 0x10)) {
      func_0x000105688514(&UNK_10f564242);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1092c0b68);
      (*pcVar1)();
    }
    func_0x000107c27d58();
    uVar2 = *(undefined8 *)(param_1 + 8);
    _ftell(uVar2);
    _fseek(*(undefined8 *)(param_1 + 8),0,0);
    _fread(*(undefined8 *)(param_1 + 0x58),1,*(undefined8 *)(param_1 + 0x10),
           *(undefined8 *)(param_1 + 8));
    _fseek(*(undefined8 *)(param_1 + 8),uVar2,0);
    lVar3 = *(long *)(param_1 + 0x58);
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return lVar3;
}



/* Entry: 1092c0b7c; end: 1092c0b8b;  */

undefined8 FUN_1092c0b7c(void)

{
  return 1;
}



/* Entry: 1092c0b8c; end: 1092c0be7;  */

long FUN_1092c0b8c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  _fread(param_2,param_3,param_4,*(undefined8 *)(param_1 + 8));
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return param_2 * param_3;
}



/* Entry: 1092c0be8; end: 1092c0c6b;  */

long FUN_1092c0be8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _fseek(uVar1,param_2,0);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  return (long)(int)uVar1;
}



/* Entry: 1092c0c6c; end: 1092c0c6f;  */

undefined8 * FUN_1092c0c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9848;
  if (param_1[1] != 0) {
    _fclose();
  }
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 1092c0c70; end: 1092c0c83;  */

void FUN_1092c0c70(void)

{
  FUN_1092c0c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1092c0c84; end: 1092c0cd3;  */

undefined8 * FUN_1092c0c84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ae9848;
  if (param_1[1] != 0) {
    _fclose();
  }
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 1092c0cd4; end: 1092c0d1b;  */

undefined8 FUN_1092c0cd4(void)

{
  return 0x113732aa0;
}



/* Entry: 1092c0d1c; end: 1092c0f17;  */

void FUN_1092c0d1c(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  char cStack_121;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [120];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined1 *)*param_3;
  puVar4 = (undefined1 *)param_3[1];
  lVar5 = 0;
  if (puVar4 != puVar3) {
    lVar5 = LZCOUNT(((long)puVar4 - (long)puVar3 >> 3) * -0x3333333333333333) * -2 + 0x7e;
  }
  plVar6 = (long *)0x1;
  FUN_1092c19ec();
  lVar2 = param_3[1];
  for (lVar8 = *param_3; lVar8 != lVar2; lVar8 = lVar8 + 0x28) {
    FUN_1092a4cfc(&puStack_138,param_2,lVar8);
    func_0x000107c31940(auStack_150,&UNK_10f432965);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puStack_120 = &UNK_1069b161c;
    ppuStack_118 = &PTR_DAT_110950c70;
    FUN_1092b17dc(auStack_e0,&puStack_138,auStack_150,&puStack_120);
    (*(code *)*ppuStack_118)(&ppuStack_118);
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    if (cStack_121 < '\0') {
      __ZdlPv(puStack_138);
    }
    FUN_1092b1a3c(&puStack_138,auStack_e0);
    lVar5 = (long)puStack_130 - (long)puStack_138;
    puVar4 = puStack_138;
    plVar6 = param_4;
    FUN_1092c0f18(lVar8);
    if (puStack_138 != (undefined1 *)0x0) {
      puStack_130 = puStack_138;
      __ZdlPv();
    }
    puVar3 = auStack_e0;
    FUN_1092b2248();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(int *)(puVar3 + 0x20) = (int)lVar5;
  lVar8 = *plVar6;
  uVar7 = plVar6[1] - lVar8;
  *(int *)(puVar3 + 0x18) = (int)uVar7;
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  if (lVar5 != 0) {
    uVar1 = lVar5 + (uVar7 & 0xffffffff);
    if (uVar1 < uVar7 || uVar1 - uVar7 == 0) {
      if (uVar1 < uVar7) {
        plVar6[1] = lVar8 + uVar1;
      }
    }
    else {
      func_0x000107c27d58(plVar6,uVar1 - uVar7);
      uVar7 = (ulong)*(uint *)(puVar3 + 0x18);
      lVar8 = *plVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar8 + (uVar7 & 0xffffffff),puVar4,lVar5);
    return;
  }
  return;
}



/* Entry: 1092c0f18; end: 1092c0fa3;  */

void FUN_1092c0f18(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  *(int *)(param_1 + 0x20) = (int)param_3;
  lVar3 = *param_4;
  uVar2 = param_4[1] - lVar3;
  *(int *)(param_1 + 0x18) = (int)uVar2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_3 != 0) {
    uVar1 = param_3 + (uVar2 & 0xffffffff);
    if (uVar1 < uVar2 || uVar1 - uVar2 == 0) {
      if (uVar1 < uVar2) {
        param_4[1] = lVar3 + uVar1;
      }
    }
    else {
      func_0x000107c27d58(param_4,uVar1 - uVar2);
      uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      lVar3 = *param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar3 + (uVar2 & 0xffffffff),param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1092c0fa4; end: 1092c1097;  */

void FUN_1092c0fa4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = 0;
  if (lVar2 != lVar1) {
    lVar3 = LZCOUNT((lVar2 - lVar1 >> 3) * -0x3333333333333333) * -2 + 0x7e;
  }
  FUN_1092c19ec(lVar1,lVar2,lVar3,1);
  lStack_50 = 0;
  lStack_48 = 0;
  lStack_40 = 0;
  func_0x000107c31950(&lStack_50,param_3[1] - *param_3);
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x28) {
    FUN_1092c0f18(lVar3,*param_3 + (ulong)*(uint *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x20),
                  &lStack_50);
  }
  if (*param_3 != 0) {
    param_3[1] = *param_3;
    __ZdlPv();
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
  }
  param_3[1] = lStack_48;
  *param_3 = lStack_50;
  param_3[2] = lStack_40;
  return;
}



/* Entry: 1092c1098; end: 1092c186b;  */

void FUN_1092c1098(undefined8 *param_1,long *param_2,int *param_3,long *param_4,long *param_5)

{
  ulong *puVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined **ppuVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  int iStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  long *plStack_90;
  ulong uStack_88;
  float fStack_80;
  undefined **ppuStack_78;
  int iStack_70;
  undefined *puStack_68;
  
  if (param_3[3] < 3) {
    puVar11 = &UNK_10f564283;
    func_0x000105688514();
    FUN_1092a1920(uStack_c0);
    __Unwind_Resume();
    param_3[4] = param_3[4] | 2;
    uVar21 = *(ulong *)(param_3 + 8);
    if (uVar21 == 0) {
      uVar21 = *(ulong *)(param_3 + 2);
      if ((uVar21 & 1) != 0) {
        uVar21 = *(ulong *)(uVar21 & 0xfffffffffffffffe);
      }
      FUN_1092a1e58();
      *(ulong *)(param_3 + 8) = uVar21;
    }
    *(undefined4 *)(uVar21 + 0x20) = *(undefined4 *)(puVar11 + 8);
    lVar22 = *(long *)(puVar11 + 0x10);
    *(long *)(uVar21 + 0x18) = lVar22;
    *(uint *)(uVar21 + 0x10) = *(uint *)(uVar21 + 0x10) | 3;
    *(long *)(puVar11 + 0x10) = *(long *)(param_3 + 10) + lVar22;
    return;
  }
  *param_1 = &PTR_FUN_110ae7a48;
  param_1[1] = 0;
  ppuVar20 = (undefined **)(param_1 + 6);
  param_1[7] = 0;
  *ppuVar20 = (undefined *)0x0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  iVar6 = param_3[1];
  FUN_1092c3b80();
  ppuVar14 = ppuVar20;
  func_0x000107c303b0(ppuVar20,0x1092a1f44);
  puStack_68 = (undefined *)0x0;
  *(int *)(ppuVar14 + 6) = iVar6;
  *(uint *)(ppuVar14 + 2) = *(uint *)(ppuVar14 + 2) | 8;
  iStack_70 = *(int *)(param_1 + 7) + -1;
  ppuStack_98 = (undefined **)0x0;
  lStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = 1.0;
  lVar22 = *param_4;
  ppuStack_78 = ppuVar14;
  if (param_4[1] != lVar22) {
    uVar21 = 0;
    puVar1 = param_1 + 3;
    ppuVar14 = ppuVar20;
    do {
      puVar8 = puVar1;
      func_0x000107c303b0(puVar1,0x1092a1eec);
      *(uint *)(puVar8 + 2) = (uint)puVar8[2] | 1;
      uVar12 = puVar8[1];
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      lVar22 = lVar22 + uVar21 * 0x28;
      func_0x000107c30248(puVar8 + 3,lVar22,uVar12);
      puVar8[5] = (ulong)*(uint *)(lVar22 + 0x20);
      *(uint *)(puVar8 + 2) = (uint)puVar8[2] | 4;
      if (*param_3 != 0) {
        ppuVar19 = (undefined **)(*param_5 + (ulong)*(uint *)(lVar22 + 0x18));
        FUN_1092a4848(ppuVar19,*(undefined4 *)(lVar22 + 0x20));
        ppuVar10 = ppuStack_98;
        if (ppuStack_98 != (undefined **)0x0) {
          uVar12 = (long)ppuStack_98 - 1;
          if (((ulong)ppuStack_98 & uVar12) == 0) {
            ppuVar14 = (undefined **)(uVar12 & (ulong)ppuVar19);
          }
          else {
            ppuVar14 = ppuVar19;
            if (ppuStack_98 <= ppuVar19) {
              uVar3 = 0;
              if (ppuStack_98 != (undefined **)0x0) {
                uVar3 = (ulong)ppuVar19 / (ulong)ppuStack_98;
              }
              ppuVar14 = (undefined **)((long)ppuVar19 - uVar3 * (long)ppuStack_98);
            }
          }
          plVar15 = *(long **)(lStack_a0 + (long)ppuVar14 * 8);
          if (plVar15 != (long *)0x0) {
            for (plVar15 = (long *)*plVar15; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
              ppuVar16 = (undefined **)plVar15[1];
              if (ppuVar16 == ppuVar19) {
                if ((undefined **)plVar15[2] == ppuVar19) {
                  *(uint *)(puVar8 + 2) = (uint)puVar8[2] | 2;
                  ppuVar19 = (undefined **)puVar8[4];
                  if (ppuVar19 == (undefined **)0x0) {
                    ppuVar19 = (undefined **)puVar8[1];
                    if (((ulong)ppuVar19 & 1) != 0) {
                      ppuVar19 = *(undefined ***)((ulong)ppuVar19 & 0xfffffffffffffffe);
                    }
                    FUN_1092a1e58();
                    puVar8[4] = (ulong)ppuVar19;
                  }
                  puVar8 = puVar1;
                  if ((*puVar1 & 1) != 0) {
                    puVar8 = (ulong *)(*puVar1 + (long)*(int *)(plVar15 + 3) * 8 + 7);
                  }
                  ppuVar14 = &PTR_PTR_1132cea20;
                  if (*(undefined ***)(*puVar8 + 0x20) != (undefined **)0x0) {
                    ppuVar14 = *(undefined ***)(*puVar8 + 0x20);
                  }
                  if (ppuVar14 != ppuVar19) {
                    func_0x0001092a0908(ppuVar19);
                    FUN_1092a0858(ppuVar19,ppuVar14);
                  }
                  goto LAB_1092c16ec;
                }
              }
              else {
                if (((ulong)ppuStack_98 & uVar12) == 0) {
                  ppuVar16 = (undefined **)((ulong)ppuVar16 & uVar12);
                }
                else if (ppuStack_98 <= ppuVar16) {
                  uVar3 = 0;
                  if (ppuStack_98 != (undefined **)0x0) {
                    uVar3 = (ulong)ppuVar16 / (ulong)ppuStack_98;
                  }
                  ppuVar16 = (undefined **)((long)ppuVar16 - uVar3 * (long)ppuStack_98);
                }
                if (ppuVar16 != ppuVar14) break;
              }
            }
          }
          if (((ulong)ppuStack_98 & uVar12) == 0) {
            ppuVar14 = (undefined **)(uVar12 & (ulong)ppuVar19);
          }
          else {
            ppuVar14 = ppuVar19;
            if (ppuStack_98 <= ppuVar19) {
              uVar3 = 0;
              if (ppuStack_98 != (undefined **)0x0) {
                uVar3 = (ulong)ppuVar19 / (ulong)ppuStack_98;
              }
              ppuVar14 = (undefined **)((long)ppuVar19 - uVar3 * (long)ppuStack_98);
            }
          }
          puVar13 = *(undefined8 **)(lStack_a0 + (long)ppuVar14 * 8);
          if (puVar13 != (undefined8 *)0x0) {
            for (plVar15 = (long *)*puVar13; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
              ppuVar16 = (undefined **)plVar15[1];
              if (ppuVar16 == ppuVar19) {
                if ((undefined **)plVar15[2] == ppuVar19) goto LAB_1092c1600;
              }
              else {
                if (((ulong)ppuStack_98 & uVar12) == 0) {
                  ppuVar16 = (undefined **)((ulong)ppuVar16 & uVar12);
                }
                else if (ppuStack_98 <= ppuVar16) {
                  uVar3 = 0;
                  if (ppuStack_98 != (undefined **)0x0) {
                    uVar3 = (ulong)ppuVar16 / (ulong)ppuStack_98;
                  }
                  ppuVar16 = (undefined **)((long)ppuVar16 - uVar3 * (long)ppuStack_98);
                }
                if (ppuVar16 != ppuVar14) break;
              }
            }
          }
        }
        plVar15 = (long *)0x20;
        __Znwm();
        *plVar15 = 0;
        plVar15[1] = (long)ppuVar19;
        plVar15[2] = (long)ppuVar19;
        plVar15[3] = 0;
        if ((ppuVar10 == (undefined **)0x0) ||
           (fStack_80 * (float)ppuVar10 < (float)(uStack_88 + 1))) {
          uVar12 = 1;
          if ((undefined **)0x2 < ppuVar10) {
            uVar12 = (ulong)(((ulong)ppuVar10 & (long)ppuVar10 - 1U) != 0);
          }
          ppuVar14 = (undefined **)(uVar12 | (long)ppuVar10 << 1);
          ppuVar16 = (undefined **)(long)((float)(uStack_88 + 1) / fStack_80);
          if (ppuVar14 <= ppuVar16) {
            ppuVar14 = ppuVar16;
          }
          ppuVar16 = ppuVar10;
          if ((long)ppuVar14 - 1U == 0) {
            ppuVar14 = (undefined **)0x2;
          }
          else if (((ulong)ppuVar14 & (long)ppuVar14 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            ppuVar16 = ppuStack_98;
          }
          ppuVar10 = ppuVar14;
          if (ppuVar16 < ppuVar14) {
LAB_1092c1394:
            if ((ulong)ppuVar10 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_1092c17cc;
            }
            lVar9 = (long)ppuVar10 << 3;
            __Znwm();
            bVar2 = lStack_a0 != 0;
            lStack_a0 = lVar9;
            if (bVar2) {
              __ZdlPv();
            }
            ppuVar14 = (undefined **)0x0;
            do {
              *(undefined8 *)(lStack_a0 + (long)ppuVar14 * 8) = 0;
              ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            } while (ppuVar10 != ppuVar14);
            ppuStack_98 = ppuVar10;
            if (plStack_90 != (long *)0x0) {
              ppuVar14 = (undefined **)plStack_90[1];
              uVar12 = (long)ppuVar10 - 1;
              if (((ulong)ppuVar10 & uVar12) == 0) {
                ppuVar14 = (undefined **)((ulong)ppuVar14 & uVar12);
              }
              else if (ppuVar10 <= ppuVar14) {
                uVar3 = 0;
                if (ppuVar10 != (undefined **)0x0) {
                  uVar3 = (ulong)ppuVar14 / (ulong)ppuVar10;
                }
                ppuVar14 = (undefined **)((long)ppuVar14 - uVar3 * (long)ppuVar10);
              }
              *(long ***)(lStack_a0 + (long)ppuVar14 * 8) = &plStack_90;
              plVar17 = (long *)*plStack_90;
              plVar4 = plStack_90;
              while (plVar17 != (long *)0x0) {
                ppuVar16 = (undefined **)plVar17[1];
                if (((ulong)ppuVar10 & uVar12) == 0) {
                  ppuVar16 = (undefined **)((ulong)ppuVar16 & uVar12);
                }
                else if (ppuVar10 <= ppuVar16) {
                  uVar3 = 0;
                  if (ppuVar10 != (undefined **)0x0) {
                    uVar3 = (ulong)ppuVar16 / (ulong)ppuVar10;
                  }
                  ppuVar16 = (undefined **)((long)ppuVar16 - uVar3 * (long)ppuVar10);
                }
                plVar18 = plVar17;
                if (ppuVar16 != ppuVar14) {
                  if (*(long *)(lStack_a0 + (long)ppuVar16 * 8) == 0) {
                    *(long **)(lStack_a0 + (long)ppuVar16 * 8) = plVar4;
                    ppuVar14 = ppuVar16;
                  }
                  else {
                    *plVar4 = *plVar17;
                    *plVar17 = **(long **)(lStack_a0 + (long)ppuVar16 * 8);
                    **(undefined8 **)(lStack_a0 + (long)ppuVar16 * 8) = plVar17;
                    plVar18 = plVar4;
                  }
                }
                plVar4 = plVar18;
                plVar17 = (long *)*plVar18;
              }
            }
          }
          else {
            ppuVar10 = ppuVar16;
            if (ppuVar14 < ppuVar16) {
              ppuVar10 = (undefined **)(long)((float)uStack_88 / fStack_80);
              if ((ppuVar16 < (undefined **)0x3) || (((ulong)ppuVar16 & (long)ppuVar16 - 1U) != 0))
              {
                __ZNSt3__112__next_primeEm();
              }
              else if ((undefined **)0x1 < ppuVar10) {
                ppuVar10 = (undefined **)(1L << (-LZCOUNT((long)ppuVar10 + -1) & 0x3fU));
              }
              lVar9 = lStack_a0;
              if (ppuVar14 <= ppuVar10) {
                ppuVar14 = ppuVar10;
              }
              ppuVar10 = ppuStack_98;
              if (ppuVar14 < ppuVar16) {
                ppuVar10 = ppuVar14;
                if (ppuVar14 != (undefined **)0x0) goto LAB_1092c1394;
                lStack_a0 = 0;
                if (lVar9 != 0) {
                  __ZdlPv();
                }
                ppuStack_98 = (undefined **)0x0;
                ppuVar10 = (undefined **)0x0;
              }
            }
          }
          if (((ulong)ppuVar10 & (long)ppuVar10 - 1U) == 0) {
            ppuVar14 = (undefined **)((long)ppuVar10 - 1U & (ulong)ppuVar19);
          }
          else {
            ppuVar14 = ppuVar19;
            if (ppuVar10 <= ppuVar19) {
              uVar12 = 0;
              if (ppuVar10 != (undefined **)0x0) {
                uVar12 = (ulong)ppuVar19 / (ulong)ppuVar10;
              }
              ppuVar14 = (undefined **)((long)ppuVar19 - uVar12 * (long)ppuVar10);
            }
          }
        }
        plVar17 = *(long **)(lStack_a0 + (long)ppuVar14 * 8);
        if (plVar17 == (long *)0x0) {
          *plVar15 = (long)plStack_90;
          *(long ***)(lStack_a0 + (long)ppuVar14 * 8) = &plStack_90;
          plStack_90 = plVar15;
          if (*plVar15 != 0) {
            ppuVar19 = *(undefined ***)(*plVar15 + 8);
            if (((ulong)ppuVar10 & (long)ppuVar10 - 1U) == 0) {
              ppuVar19 = (undefined **)((ulong)ppuVar19 & (long)ppuVar10 - 1U);
            }
            else if (ppuVar10 <= ppuVar19) {
              uVar12 = 0;
              if (ppuVar10 != (undefined **)0x0) {
                uVar12 = (ulong)ppuVar19 / (ulong)ppuVar10;
              }
              ppuVar19 = (undefined **)((long)ppuVar19 - uVar12 * (long)ppuVar10);
            }
            plVar17 = (long *)(lStack_a0 + (long)ppuVar19 * 8);
            goto LAB_1092c15f0;
          }
        }
        else {
          *plVar15 = *plVar17;
LAB_1092c15f0:
          *plVar17 = (long)plVar15;
        }
        uStack_88 = uStack_88 + 1;
LAB_1092c1600:
        plVar15[3] = uVar21;
      }
      iVar7 = *(int *)(lVar22 + 0x24);
      if (iVar7 == 0) {
        plVar15 = param_2;
        (**(code **)(*param_2 + 0x10))(param_2,lVar22);
        iVar7 = (int)plVar15;
      }
      if (iVar7 == 3) {
        ppuVar19 = ppuVar20;
        func_0x000107c303b0(ppuVar20,0x1092a1f44);
        puStack_a8 = (undefined *)0x0;
        *(undefined4 *)(ppuVar19 + 6) = 0xf;
        *(uint *)(ppuVar19 + 2) = *(uint *)(ppuVar19 + 2) | 8;
        iStack_b0 = *(int *)(param_1 + 7) + -1;
        ppuStack_b8 = ppuVar19;
        FUN_1092c186c(&ppuStack_b8,puVar8);
LAB_1092c16d4:
        ppuStack_b8[5] = puStack_a8;
        *(uint *)(ppuStack_b8 + 2) = *(uint *)(ppuStack_b8 + 2) | 4;
      }
      else {
        if (iVar7 == 2) {
          ppuVar19 = ppuVar20;
          func_0x000107c303b0(ppuVar20,0x1092a1f44);
          puStack_a8 = (undefined *)0x0;
          *(int *)(ppuVar19 + 6) = iVar6;
          *(uint *)(ppuVar19 + 2) = *(uint *)(ppuVar19 + 2) | 8;
          iStack_b0 = *(int *)(param_1 + 7) + -1;
          ppuStack_b8 = ppuVar19;
          FUN_1092c186c(&ppuStack_b8,puVar8);
          goto LAB_1092c16d4;
        }
        if (iVar7 != 1) {
          func_0x000105688514(&UNK_10f56338a);
LAB_1092c17cc:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1092c17d0);
          (*pcVar5)();
        }
        FUN_1092c186c(&ppuStack_78,puVar8);
      }
LAB_1092c16ec:
      uVar21 = uVar21 + 1;
      lVar22 = *param_4;
    } while (uVar21 < (ulong)((param_4[1] - lVar22 >> 3) * -0x3333333333333333));
  }
  puVar11 = puStack_68;
  ppuVar14 = ppuStack_78;
  FUN_1092c35f0(&lStack_a0);
  ppuVar14[5] = puVar11;
  *(uint *)(ppuVar14 + 2) = *(uint *)(ppuVar14 + 2) | 4;
  return;
}


