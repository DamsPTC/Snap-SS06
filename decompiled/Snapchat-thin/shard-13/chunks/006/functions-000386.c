/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a897db4; end: 10a897efb;  */

void FUN_10a897db4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar2 = param_1;
  FUN_10a894b50();
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = param_1[1];
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == param_1 + 2) {
LAB_10a897e58:
    if (lVar3 == 0) {
LAB_10a897e8c:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10a897e94;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10a897e8c;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a897e58;
LAB_10a897e94:
    if (lVar3 == 0) goto LAB_10a897ed0;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_10a897ed0:
  *plVar7 = lVar3;
  *plVar2 = 0;
  param_1[3] = param_1[3] + -1;
  FUN_10a8933b0(plVar2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar2);
  return;
}



/* Entry: 10a897efc; end: 10a897fab;  */

void FUN_10a897efc(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_1[1];
  lStack_30 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a893eb8(*(long *)(lStack_30 + 0x378) + 0x260,&lStack_30,param_2 + 0x10);
  plVar6 = plStack_28;
  iVar2 = *(int *)(lStack_30 + 0x2d0);
  iVar5 = iVar2 + -1;
  *(int *)(lStack_30 + 0x2d0) = iVar5;
  if (iVar2 <= *(int *)(lStack_30 + 0x2d4)) {
    iVar5 = *(int *)(lStack_30 + 0x2d4);
  }
  *(int *)(lStack_30 + 0x2d4) = iVar5;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a897fac; end: 10a897fcf;  */

long FUN_10a897fac(long param_1)

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



/* Entry: 10a897fd0; end: 10a8985df;  */

/* WARNING: Possible PIC construction at 0x00010a8985f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8985f8) */
/* WARNING: Removing unreachable block (ram,0x00010a89814c) */
/* WARNING: Removing unreachable block (ram,0x00010a8980d4) */
/* WARNING: Removing unreachable block (ram,0x00010a8981a8) */

void FUN_10a897fd0(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined7 *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined **ppuVar19;
  long lStack_190;
  undefined **ppuStack_188;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined **ppuStack_160;
  undefined1 auStack_158 [8];
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined *apuStack_138 [2];
  long alStack_128 [7];
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined **appuStack_e0 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined4 uStack_9c;
  undefined1 auStack_98 [7];
  byte bStack_91;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = *param_1;
  ppuVar3 = (undefined **)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lStack_190 = lVar16;
  ppuStack_188 = ppuVar3;
  if (**(int **)(lVar16 + 0x1e8) == 4) {
    ppuVar15 = &PTR_PTR_113304c40;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar15,&PTR_PTR_113304c40);
  }
  else {
    ppuStack_e8 = (undefined **)((ulong)ppuStack_e8 & 0xffffffffffffff00);
    appuStack_e0[0] = (undefined **)0x0;
    FUN_10a8819b0(auStack_180,param_2 + 0x10);
    FUN_10a8819b0(&ppuStack_148,param_2 + 0x28);
    func_0x000109381b20(auStack_158,auStack_180);
    bStack_91 = 0xb;
    uStack_a0 = 0x7265;
    uStack_9e = 0x73;
    uStack_a8 = 0x5564656e696f6a;
    uStack_a1 = 0x73;
    uStack_9d = 0;
    pppuVar10 = &ppuStack_e8;
    func_0x0001095b7584(pppuVar10,&uStack_a8);
    uVar4 = *(undefined1 *)pppuVar10;
    *(undefined1 *)pppuVar10 = auStack_158[0];
    ppuVar15 = pppuVar10[1];
    auStack_158[0] = uVar4;
    pppuVar10[1] = ppuStack_150;
    ppuStack_150 = ppuVar15;
    func_0x000109380ffc(&ppuStack_150,uVar4);
    func_0x000109381b20(auStack_168,&ppuStack_148);
    bStack_91 = 9;
    uStack_a0 = 0x73;
    uStack_a8 = 0x6573557466656c;
    uStack_a1 = 0x72;
    pppuVar10 = &ppuStack_e8;
    func_0x0001095b7584(pppuVar10,&uStack_a8);
    uVar4 = *(undefined1 *)pppuVar10;
    *(undefined1 *)pppuVar10 = auStack_168[0];
    ppuVar15 = pppuVar10[1];
    auStack_168[0] = uVar4;
    pppuVar10[1] = ppuStack_160;
    ppuStack_160 = ppuVar15;
    func_0x000109380ffc(&ppuStack_160,uVar4);
    FUN_10a0c32e4(&uStack_a8,&ppuStack_e8,0xffffffff,0x20,0,1);
    uVar2 = CONCAT44(uStack_9c,CONCAT13(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
    puVar7 = (undefined7 *)CONCAT17(uStack_a1,uStack_a8);
    if (-1 < (char)bStack_91) {
      uVar2 = (ulong)bStack_91;
      puVar7 = &uStack_a8;
    }
    FUN_10a3bf330(apuStack_138,puVar7,uVar2);
    func_0x000109380ffc(&ppuStack_140,(ulong)ppuStack_148 & 0xff);
    func_0x000109380ffc(&uStack_178,auStack_180[0]);
    func_0x000109380ffc(appuStack_e0,(ulong)ppuStack_e8 & 0xff);
    FUN_10a874824(auStack_180,*(undefined8 *)(lVar16 + 0x388));
    ppuVar11 = (undefined **)0x138;
    __Znwm();
    puVar17 = apuStack_138[0];
    ppuVar19 = ppuVar11 + 1;
    *ppuVar19 = (undefined *)0x0;
    ppuVar11[2] = (undefined *)0x0;
    *ppuVar11 = (undefined *)&PTR_FUN_110b9f3b0;
    ppuVar15 = ppuVar11 + 3;
    apuStack_138[0] = (undefined *)0x0;
    uStack_a8 = SUB87(puVar17,0);
    uStack_a1 = (undefined1)((ulong)puVar17 >> 0x38);
    uStack_a0 = SUB82(apuStack_138[1],0);
    uStack_9e = (undefined1)((ulong)apuStack_138[1] >> 0x10);
    uStack_9d = (undefined1)((ulong)apuStack_138[1] >> 0x18);
    uStack_9c = (undefined4)((ulong)apuStack_138[1] >> 0x20);
    (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
    uStack_60 = uStack_f0;
    ppuStack_e8 = (undefined **)FUN_10a8a6428;
    appuStack_e0[0] = &PTR_FUN_110c24f98;
    uStack_c8 = uStack_170;
    uStack_d0 = uStack_178;
    uStack_178 = 0;
    uStack_170 = 0;
    FUN_10a23708c(ppuVar15,&UNK_10e4df4f6,0x29,&UNK_10f647b49,4,&uStack_a8,1);
    (*(code *)*appuStack_e0[0])(appuStack_e0);
    FUN_10a042634(&uStack_a8);
    ppuStack_148 = ppuVar15;
    ppuStack_140 = ppuVar11;
    FUN_10a8748c8(auStack_180);
    uStack_a8 = 0;
    uStack_a1 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9d = 0;
    uStack_9c = 0;
    lVar12 = *(long *)(lVar16 + 0x360);
    if (lVar12 == 0) {
LAB_10a898388:
      ppuVar15 = &PTR_PTR_113305d30;
      FUN_10ae079a0(0,&PTR_PTR_113305d30);
      FUN_10ae07cd4(ppuVar15,&PTR_PTR_113305d30);
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_a0 = (undefined2)lVar12;
      uStack_9e = (undefined1)((ulong)lVar12 >> 0x10);
      uStack_9d = (undefined1)((ulong)lVar12 >> 0x18);
      uStack_9c = (undefined4)((ulong)lVar12 >> 0x20);
      if (lVar12 == 0) goto LAB_10a898388;
      puVar18 = *(undefined8 **)(lVar16 + 0x358);
      uStack_a8 = SUB87(puVar18,0);
      uStack_a1 = (undefined1)((ulong)puVar18 >> 0x38);
      if (puVar18 == (undefined8 *)0x0) goto LAB_10a898388;
      ppuVar13 = &PTR_PTR_113304740;
      FUN_10ae079a0(0,&PTR_PTR_113304740);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113304740);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
        if (bVar6) {
          *ppuVar19 = *ppuVar19 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuStack_e8 = ppuVar15;
      appuStack_e0[0] = ppuVar11;
      (**(code **)*puVar18)(puVar18,&ppuStack_e8);
      ppuVar15 = appuStack_e0[0];
      if (appuStack_e0[0] != (undefined **)0x0) {
        ppuVar11 = appuStack_e0[0] + 1;
        do {
          puVar17 = *ppuVar11;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar6) {
            *ppuVar11 = puVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar17 == (undefined *)0x0) {
          (**(code **)(*appuStack_e0[0] + 0x10))(appuStack_e0[0]);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
        }
      }
    }
    plVar8 = (long *)CONCAT44(uStack_9c,CONCAT13(uStack_9d,CONCAT12(uStack_9e,uStack_a0)));
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar16 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    ppuVar15 = ppuStack_140;
    if (ppuStack_140 != (undefined **)0x0) {
      ppuVar11 = ppuStack_140 + 1;
      do {
        puVar17 = *ppuVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar6) {
          *ppuVar11 = puVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuStack_140 + 0x10))(ppuStack_140);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
      }
    }
    ppuVar15 = apuStack_138;
    FUN_10a042634();
  }
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar11 = ppuVar3 + 1;
    do {
      puVar17 = *ppuVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar6) {
        *ppuVar11 = puVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar17 == (undefined *)0x0) {
      ppuVar15 = ppuVar3;
      (**(code **)(*ppuVar3 + 0x10))();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar3);
        return;
      }
      goto SUB_10a87edc4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
SUB_10a87edc4:
  ___stack_chk_fail();
  FUN_10a05bd88(&ppuStack_e8);
  func_0x00010a05a8c4(&uStack_a8);
  FUN_10a05bd88(&ppuStack_148);
  FUN_10a042634(apuStack_138);
  FUN_10a5ca2e0(&lStack_190);
  __Unwind_Resume();
  puVar17 = ppuVar15[4];
  if (puVar17 == (undefined *)0x0) {
    return;
  }
  puVar9 = ppuVar15[5];
  puVar14 = puVar17;
  if (puVar9 != puVar17) {
    do {
      puVar9 = puVar9 + -0x10;
      func_0x00010a5c92ec();
    } while (puVar9 != puVar17);
    puVar14 = ppuVar15[4];
  }
  ppuVar15[5] = puVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar14);
  return;
}



/* Entry: 10a8985e0; end: 10a898607;  */

/* WARNING: Possible PIC construction at 0x00010a8985f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a8985f8) */

void FUN_10a8985e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a5c92ec();
      } while (lVar1 != lVar3);
      lVar2 = *(long *)(param_1 + 0x20);
    }
    *(long *)(param_1 + 0x28) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a898608; end: 10a898663;  */

void FUN_10a898608(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110c24ae0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar1;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}



/* Entry: 10a898664; end: 10a898683;  */

void FUN_10a898664(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c24b08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a898684; end: 10a898693;  */

void FUN_10a898684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a89868c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a898694; end: 10a8986eb;  */

long FUN_10a898694(long param_1)

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



/* Entry: 10a8986ec; end: 10a898adf;  */

void FUN_10a8986ec(undefined ******param_1,undefined ******param_2,undefined ******param_3)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined *****pppppuVar10;
  undefined *****pppppuVar11;
  undefined ****ppppuVar12;
  undefined ******ppppppuVar13;
  long lVar14;
  undefined ******ppppppuVar15;
  undefined ******unaff_x22;
  undefined8 *puStack_180;
  undefined **ppuStack_178;
  int aiStack_170 [2];
  undefined8 *puStack_168;
  undefined *apuStack_160 [2];
  int aiStack_150 [2];
  long lStack_148;
  undefined ****ppppuStack_140;
  undefined ****ppppuStack_138;
  undefined1 *puStack_130;
  undefined ***pppuStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined ****ppppuStack_e0;
  undefined *****pppppuStack_d8;
  undefined *****pppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined ****ppppuStack_c0;
  undefined *****pppppuStack_b8;
  undefined ****ppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_88;
  undefined *****pppppuStack_80;
  undefined ****ppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined *****pppppuStack_60;
  undefined ****ppppuStack_58;
  undefined *****pppppuStack_50;
  long lStack_48;
  
  ppppppuVar8 = (undefined ******)&ppppuStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar11 = *param_1;
  ppppppuVar6 = (undefined ******)param_1[1];
  *param_1 = (undefined *****)0x0;
  param_1[1] = (undefined *****)0x0;
  ppppppuVar15 = (undefined ******)pppppuVar11[0x6f][0x67];
  ppppppuVar13 = (undefined ******)pppppuVar11[0x6f][0x68];
  if (ppppppuVar13 != (undefined ******)0x0) {
    ppppppuVar9 = ppppppuVar13 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
      if (bVar3) {
        *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  ppppppuVar9 = param_2;
  ppppuStack_e0 = (undefined ****)pppppuVar11;
  pppppuStack_d8 = (undefined *****)ppppppuVar6;
  pppppuStack_d0 = (undefined *****)ppppppuVar15;
  pppppuStack_c8 = (undefined *****)ppppppuVar13;
  if (ppppppuVar15 == (undefined ******)0x0) goto LAB_10a8989d8;
  if (*(char *)(ppppppuVar15 + 8) == '\x01') {
    pppppuVar10 = *ppppppuVar15;
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar8 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)*ppppppuVar8 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pppppuStack_b8 = param_2[3];
    ppppuStack_c0 = (undefined ****)param_2[2];
    if (param_2[3] != (undefined *****)0x0) {
      pppppuVar1 = param_2[3] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    param_1 = (undefined ******)&ppppuStack_88;
    ppppppuVar9 = (undefined ******)&ppppuStack_c0;
    param_3 = ppppppuVar15;
    ppppuStack_88 = (undefined ****)pppppuVar11;
    pppppuStack_80 = (undefined *****)ppppppuVar6;
    (*(code *)pppppuVar10)(param_1,ppppppuVar9);
    ppppppuVar6 = (undefined ******)pppppuStack_b8;
    if ((undefined ******)pppppuStack_b8 != (undefined ******)0x0) {
      ppppppuVar8 = (undefined ******)(pppppuStack_b8 + 1);
      do {
        pppppuVar11 = *ppppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_b8)[2])(pppppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar6;
      }
    }
    param_2 = (undefined ******)pppppuStack_80;
    if ((undefined ******)pppppuStack_80 == (undefined ******)0x0) goto LAB_10a8989d8;
    ppppppuVar6 = (undefined ******)(pppppuStack_80 + 1);
    do {
      pppppuVar11 = *ppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
      if (bVar3) {
        *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (*(char *)(ppppppuVar15 + 8) != '\x02') goto LAB_10a8989d8;
    unaff_x22 = ppppppuVar15;
    ppppppuVar7 = param_2;
    FUN_10a688b40();
    if (unaff_x22 != (undefined ******)0x0) {
      *unaff_x22 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x22 >> 0x20) + 1,(int)*unaff_x22 + 1);
      param_1 = (undefined ******)*ppppppuVar15;
      param_3 = param_2 + 2;
      FUN_10a898ae0(param_1,&ppppuStack_e0);
      iVar4 = *(int *)((long)unaff_x22 + 4) + -1;
      *(int *)((long)unaff_x22 + 4) = iVar4;
      ppppppuVar9 = ppppppuVar8;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x22 = 0;
      }
      goto LAB_10a8989d8;
    }
    param_1 = (undefined ******)0x0;
    ppppppuVar9 = (undefined ******)0x0;
    if (ppppppuVar7 == (undefined ******)0x0) goto LAB_10a8989d8;
    ppppuStack_70 = (undefined ****)ppppppuVar15[1];
    ppppuStack_78 = (undefined ****)*ppppppuVar15;
    pppppuStack_a8 = (undefined *****)ppppppuVar6;
    if (ppppppuVar15[1] != (undefined *****)0x0) {
      pppppuVar10 = ppppppuVar15[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
        pppppuStack_a8 = pppppuStack_d8;
      } while (cVar2 != '\0');
    }
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar15 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
        if (bVar3) {
          *ppppppuVar15 = (undefined *****)((long)*ppppppuVar15 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_a0 = (undefined ****)param_2[2];
    ppppppuVar6 = (undefined ******)param_2[3];
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar15 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
        if (bVar3) {
          *ppppppuVar15 = (undefined *****)((long)*ppppppuVar15 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_88 = (undefined ****)FUN_10a898d58;
    pppppuStack_80 = (undefined *****)&PTR_FUN_110c24b48;
    ppppuStack_c0 = (undefined ****)0x0;
    pppppuStack_b8 = (undefined *****)0x0;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar15 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
        if (bVar3) {
          *ppppppuVar15 = (undefined *****)((long)*ppppppuVar15 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar15 = ppppppuVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar15,0x10);
        if (bVar3) {
          *ppppppuVar15 = (undefined *****)((long)*ppppppuVar15 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar15 = (undefined ******)&ppppuStack_88;
    ppppppuVar9 = (undefined ******)&ppppuStack_88;
    ppppuStack_b0 = (undefined ****)pppppuVar11;
    pppppuStack_98 = (undefined *****)ppppppuVar6;
    ppppuStack_68 = (undefined ****)pppppuVar11;
    pppppuStack_60 = pppppuStack_a8;
    ppppuStack_58 = ppppuStack_a0;
    pppppuStack_50 = (undefined *****)ppppppuVar6;
    FUN_10a4634ec(ppppppuVar7,ppppppuVar9);
    param_1 = &pppppuStack_80;
    (*(code *)*pppppuStack_80)();
    if (ppppppuVar6 != (undefined ******)0x0) {
      ppppppuVar8 = ppppppuVar6 + 1;
      do {
        pppppuVar11 = *ppppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar6)[2])(ppppppuVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar6;
      }
    }
    ppppppuVar6 = (undefined ******)pppppuStack_a8;
    if ((undefined ******)pppppuStack_a8 != (undefined ******)0x0) {
      ppppppuVar8 = (undefined ******)(pppppuStack_a8 + 1);
      do {
        pppppuVar11 = *ppppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_a8)[2])(pppppuStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_1 = ppppppuVar6;
      }
    }
    param_2 = (undefined ******)pppppuStack_b8;
    if ((undefined ******)pppppuStack_b8 == (undefined ******)0x0) goto LAB_10a8989d8;
    ppppppuVar6 = (undefined ******)(pppppuStack_b8 + 1);
    do {
      pppppuVar11 = *ppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
      if (bVar3) {
        *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*param_2)[2])(param_2);
    param_1 = param_2;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_10a8989d8:
  if (ppppppuVar13 != (undefined ******)0x0) {
    ppppppuVar6 = ppppppuVar13 + 1;
    do {
      pppppuVar11 = *ppppppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
      if (bVar3) {
        *ppppppuVar6 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar11 == (undefined *****)0x0) {
      (*(code *)(*ppppppuVar13)[2])(ppppppuVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = ppppppuVar13;
    }
  }
  ppppppuVar6 = (undefined ******)pppppuStack_d8;
  pppppuStack_f8 = (undefined *****)param_1;
  if ((undefined ******)pppppuStack_d8 != (undefined ******)0x0) {
    ppppppuVar8 = (undefined ******)(pppppuStack_d8 + 1);
    do {
      pppppuVar11 = *ppppppuVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
      if (bVar3) {
        *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (pppppuVar11 == (undefined *****)0x0) {
      (*(code *)(*pppppuStack_d8)[2])(pppppuStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppuStack_f8 = (undefined *****)ppppppuVar6;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_80)(ppppppuVar15 + 1);
    FUN_10a898d28(&ppppuStack_c0);
    func_0x00010a8838c8(&pppppuStack_d0);
    FUN_10a5ca2e0(&ppppuStack_e0);
    ppppppuVar6 = (undefined ******)pppppuStack_f8;
    __Unwind_Resume();
    pcStack_e8 = FUN_10a898ae0;
    pppppuStack_110 = (undefined *****)unaff_x22;
    pppppuStack_108 = (undefined *****)ppppppuVar15;
    pppppuStack_100 = (undefined *****)param_2;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&ppppuStack_140,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_178,&ppppuStack_140,*ppppppuVar6);
    if (ppppuStack_140 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_140)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_180);
    pppppuVar11 = *ppppppuVar6;
    FUN_10a724820(apuStack_160,pppppuVar11,ppppppuVar9);
    ppppuStack_138 = (undefined ****)param_3[1];
    ppppuStack_140 = (undefined ****)*param_3;
    if (param_3[1] != (undefined *****)0x0) {
      pppppuVar10 = param_3[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_120 = &PTR_DAT_110c23be8;
    func_0x000109899de4(aiStack_150,pppppuVar11,&ppppuStack_140,&ppuStack_120,0,0);
    ppppuVar5 = ppppuStack_138;
    if ((undefined *****)ppppuStack_138 != (undefined *****)0x0) {
      pppppuVar10 = (undefined *****)(ppppuStack_138 + 1);
      do {
        ppppuVar12 = *pppppuVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined ****)((long)ppppuVar12 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar12 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_138)[2])(ppppuStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    ppuStack_120 = apuStack_160;
    uStack_118 = 2;
    (*(code *)(*pppppuVar11)[0xb])(pppppuVar11);
    ppppuStack_140 = (undefined ****)&ppuStack_178;
    ppppuStack_138 = (undefined ****)pppppuVar11;
    puStack_130 = (undefined1 *)&puStack_180;
    pppuStack_128 = &ppuStack_120;
    func_0x0001098960c0(aiStack_170);
    if ((3 < aiStack_170[0]) && (puStack_168 != (undefined8 *)0x0)) {
      (**(code **)*puStack_168)();
    }
    lVar14 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_150 + lVar14)) &&
         (*(undefined8 **)((long)&lStack_148 + lVar14) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_148 + lVar14))();
      }
      lVar14 = lVar14 + -0x10;
    } while (lVar14 != -0x20);
    if (puStack_180 != (undefined8 *)0x0) {
      (**(code **)*puStack_180)();
    }
    if ((undefined ***)ppuStack_178 != (undefined ***)0x0) {
      (**(code **)*ppuStack_178)();
    }
    return;
  }
  return;
}



/* Entry: 10a898ae0; end: 10a898d27;  */

void FUN_10a898ae0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plVar6 = (long *)*param_1;
  FUN_10a724820(apuStack_80,plVar6,param_2);
  plStack_58 = (long *)param_3[1];
  ppuStack_60 = (undefined8 **)*param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c23be8;
  func_0x000109899de4(aiStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a898d28; end: 10a898d57;  */

long FUN_10a898d28(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a898694(param_1 + 0x20);
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a898d58; end: 10a898d6b;  */

void FUN_10a898d58(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined *apuStack_80 [2];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_a0);
  plVar7 = (long *)*puVar5;
  FUN_10a724820(apuStack_80,plVar7,param_1 + 0x20);
  plStack_58 = *(long **)(param_1 + 0x38);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x38) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c23be8;
  func_0x000109899de4(aiStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  ppuStack_40 = apuStack_80;
  uStack_38 = 2;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_98;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_a0;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar6 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar6)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar6) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar6))();
    }
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a898d6c; end: 10a898d9b;  */

long FUN_10a898d6c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a898694(param_1 + 0x28);
  FUN_10a5ca2e0(param_1 + 0x18);
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



/* Entry: 10a898d9c; end: 10a898e23;  */

void FUN_10a898d9c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c24b48;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar5;
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



/* Entry: 10a898e24; end: 10a898f77;  */

void FUN_10a898e24(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  plStack_58 = (long *)param_1[1];
  lStack_60 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *(long *)(lStack_60 + 0x350);
  func_0x000107c2b054(auStack_38,&UNK_10f67f5f1);
  if (*(char *)(param_2 + 0x27) < '\0') {
    func_0x000107c3192c(&uStack_50,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  }
  else {
    uStack_48 = *(undefined8 *)(param_2 + 0x18);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
    lStack_40 = *(long *)(param_2 + 0x20);
  }
  if (lVar7 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar7 + 0x8d8),auStack_38,&uStack_50);
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  FUN_10a898f78(*(long *)(lStack_60 + 0x378) + 0xf8,&lStack_60,param_2 + 0x10);
  plVar6 = plStack_58;
  iVar2 = *(int *)(lStack_60 + 0x2d0);
  iVar5 = iVar2 + -1;
  *(int *)(lStack_60 + 0x2d0) = iVar5;
  if (iVar2 <= *(int *)(lStack_60 + 0x2d4)) {
    iVar5 = *(int *)(lStack_60 + 0x2d4);
  }
  *(int *)(lStack_60 + 0x2d4) = iVar5;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a898f78; end: 10a8992bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a898f78(undefined ********param_1,undefined ********param_2,undefined ********param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ********ppppppppuVar4;
  undefined ********ppppppppuVar5;
  undefined ********ppppppppuVar6;
  undefined ********ppppppppuVar7;
  undefined ********ppppppppuVar8;
  undefined *******pppppppuVar9;
  long lVar10;
  undefined *******pppppppuVar11;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  int aiStack_170 [2];
  undefined8 *puStack_168;
  undefined1 auStack_160 [16];
  int aiStack_150 [2];
  undefined ******ppppppuStack_148;
  undefined ******ppppppuStack_140;
  undefined *******pppppppuStack_138;
  undefined1 *puStack_130;
  undefined1 **ppuStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined *******pppppppuStack_d0;
  undefined ********ppppppppuStack_c8;
  undefined *******pppppppuStack_c0;
  undefined ********ppppppppuStack_b8;
  undefined ********ppppppppuStack_b0;
  undefined ********ppppppppuStack_a8;
  undefined *******pppppppuStack_a0;
  undefined *******pppppppuStack_90;
  undefined ********ppppppppuStack_88;
  undefined ********ppppppppuStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar8 = param_2;
  ppppppppuVar6 = param_3;
  if ((param_1 == (undefined ********)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    ppppppppuVar5 = param_1;
    if ((param_1 == (undefined ********)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10a899200;
    pppppppuVar9 = *param_1;
    ppppppppuStack_88 = (undefined ********)param_2[1];
    pppppppuStack_90 = *param_2;
    if (param_2[1] != (undefined *******)0x0) {
      pppppppuVar11 = param_2[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar11,0x10);
        if (bVar2) {
          *pppppppuVar11 = (undefined ******)((long)*pppppppuVar11 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppppuVar5 = &pppppppuStack_90;
    ppppppppuVar8 = param_3;
    (*(code *)pppppppuVar9)(ppppppppuVar5,param_3);
    ppppppppuVar6 = param_1;
    if (ppppppppuStack_88 == (undefined ********)0x0) goto LAB_10a899200;
    ppppppppuVar6 = ppppppppuStack_88 + 1;
    do {
      pppppppuVar9 = *ppppppppuVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
      if (bVar2) {
        *ppppppppuVar6 = (undefined *******)((long)pppppppuVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar4 = ppppppppuStack_88;
    } while (cVar1 != '\0');
  }
  else {
    ppppppppuVar4 = param_1;
    ppppppppuVar7 = param_2;
    FUN_10a688b40();
    if (ppppppppuVar4 != (undefined ********)0x0) {
      *ppppppppuVar4 =
           (undefined *******)
           CONCAT44((int)((ulong)*ppppppppuVar4 >> 0x20) + 1,(int)*ppppppppuVar4 + 1);
      ppppppppuVar5 = (undefined ********)*param_1;
      ppppppppuVar6 = param_3;
      FUN_10a8992c0(ppppppppuVar5,param_2);
      iVar3 = *(int *)((long)ppppppppuVar4 + 4) + -1;
      *(int *)((long)ppppppppuVar4 + 4) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)ppppppppuVar4 = 0;
      }
      goto LAB_10a899200;
    }
    ppppppppuVar5 = (undefined ********)0x0;
    ppppppppuVar8 = (undefined ********)0x0;
    if (ppppppppuVar7 == (undefined ********)0x0) goto LAB_10a899200;
    ppppppppuStack_c8 = (undefined ********)param_1[1];
    pppppppuStack_d0 = *param_1;
    if (param_1[1] != (undefined *******)0x0) {
      pppppppuVar9 = param_1[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
        if (bVar2) {
          *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    ppppppppuStack_b8 = (undefined ********)param_2[1];
    pppppppuStack_c0 = *param_2;
    if (param_2[1] != (undefined *******)0x0) {
      pppppppuVar9 = param_2[1] + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
        if (bVar2) {
          *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      param_1 = (undefined ********)param_3[1];
      func_0x000107c3192c(&ppppppppuStack_b0,*param_3);
    }
    else {
      ppppppppuStack_a8 = (undefined ********)param_3[1];
      ppppppppuStack_b0 = (undefined ********)*param_3;
      pppppppuStack_a0 = param_3[2];
      param_1 = ppppppppuVar6;
    }
    pppppppuStack_90 = (undefined *******)FUN_10a899528;
    ppppppppuStack_88 = (undefined ********)&PTR_FUN_110c24b78;
    param_3 = (undefined ********)0x38;
    __Znwm();
    param_3[1] = (undefined *******)ppppppppuStack_c8;
    *param_3 = pppppppuStack_d0;
    pppppppuStack_d0 = (undefined *******)0x0;
    ppppppppuStack_c8 = (undefined ********)0x0;
    param_3[3] = (undefined *******)ppppppppuStack_b8;
    param_3[2] = pppppppuStack_c0;
    if (ppppppppuStack_b8 != (undefined ********)0x0) {
      ppppppppuVar8 = ppppppppuStack_b8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar8,0x10);
        if (bVar2) {
          *ppppppppuVar8 = (undefined *******)((long)*ppppppppuVar8 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if ((long)pppppppuStack_a0 < 0) {
      param_1 = ppppppppuStack_a8;
      func_0x000107c3192c(param_3 + 4,ppppppppuStack_b0);
    }
    else {
      param_3[5] = (undefined *******)ppppppppuStack_a8;
      param_3[4] = (undefined *******)ppppppppuStack_b0;
      param_3[6] = pppppppuStack_a0;
    }
    param_2 = &pppppppuStack_90;
    ppppppppuVar8 = &pppppppuStack_90;
    ppppppppuStack_80 = param_3;
    FUN_10a4634ec(ppppppppuVar7,ppppppppuVar8);
    ppppppppuVar5 = (undefined ********)&ppppppppuStack_88;
    (*(code *)*ppppppppuStack_88)();
    if ((long)pppppppuStack_a0 < 0) {
      ppppppppuVar5 = ppppppppuStack_b0;
      __ZdlPv();
    }
    ppppppppuVar6 = ppppppppuStack_b8;
    if (ppppppppuStack_b8 != (undefined ********)0x0) {
      ppppppppuVar4 = ppppppppuStack_b8 + 1;
      do {
        pppppppuVar9 = *ppppppppuVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar4,0x10);
        if (bVar2) {
          *ppppppppuVar4 = (undefined *******)((long)pppppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (pppppppuVar9 == (undefined *******)0x0) {
        (*(code *)(*ppppppppuStack_b8)[2])(ppppppppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppppuVar5 = ppppppppuVar6;
      }
    }
    ppppppppuVar6 = param_1;
    if (ppppppppuStack_c8 == (undefined ********)0x0) goto LAB_10a899200;
    ppppppppuVar6 = ppppppppuStack_c8 + 1;
    do {
      pppppppuVar9 = *ppppppppuVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar6,0x10);
      if (bVar2) {
        *ppppppppuVar6 = (undefined *******)((long)pppppppuVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      ppppppppuVar4 = ppppppppuStack_c8;
    } while (cVar1 != '\0');
  }
  ppppppppuVar6 = param_1;
  if (pppppppuVar9 == (undefined *******)0x0) {
    (*(code *)(*ppppppppuVar4)[2])(ppppppppuVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppppuVar5 = ppppppppuVar4;
    ppppppppuVar6 = param_1;
  }
LAB_10a899200:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a5ca2e0(param_2);
  func_0x00010a004dac(param_3);
  __ZdlPv();
  FUN_10a8994f0(&pppppppuStack_d0);
  __Unwind_Resume();
  func_0x000109884c0c(&ppppppuStack_140,ppppppppuVar5 + 1,*ppppppppuVar5);
  func_0x000109884820(&puStack_178,&ppppppuStack_140,*ppppppppuVar5);
  if (ppppppuStack_140 != (undefined ******)0x0) {
    (*(code *)**ppppppuStack_140)();
  }
  (*(code *)(**ppppppppuVar5)[6])(&puStack_180);
  pppppppuVar11 = *ppppppppuVar5;
  FUN_10a724820(auStack_160,pppppppuVar11,ppppppppuVar8);
  pppppppuVar9 = ppppppppuVar6[1];
  ppppppppuVar8 = (undefined ********)*ppppppppuVar6;
  if (-1 < (char)*(byte *)((long)ppppppppuVar6 + 0x17)) {
    pppppppuVar9 = (undefined *******)(ulong)*(byte *)((long)ppppppppuVar6 + 0x17);
    ppppppppuVar8 = ppppppppuVar6;
  }
  (*(code *)(*pppppppuVar11)[0x25])(&ppppppuStack_140,pppppppuVar11,ppppppppuVar8,pppppppuVar9);
  aiStack_150[0] = 6;
  ppppppuStack_148 = ppppppuStack_140;
  uStack_118 = 2;
  puStack_120 = auStack_160;
  (*(code *)(*pppppppuVar11)[0xb])(pppppppuVar11);
  ppppppuStack_140 = (undefined ******)&puStack_178;
  ppuStack_128 = &puStack_120;
  pppppppuStack_138 = pppppppuVar11;
  puStack_130 = (undefined1 *)&puStack_180;
  func_0x0001098960c0(aiStack_170);
  if ((3 < aiStack_170[0]) && (puStack_168 != (undefined8 *)0x0)) {
    (**(code **)*puStack_168)();
  }
  lVar10 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_150 + lVar10)) &&
       (*(undefined8 **)((long)&ppppppuStack_148 + lVar10) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppppppuStack_148 + lVar10))();
    }
    lVar10 = lVar10 + -0x10;
  } while (lVar10 != -0x20);
  if (puStack_180 != (undefined8 *)0x0) {
    (**(code **)*puStack_180)();
  }
  if (puStack_178 != (undefined8 *)0x0) {
    (**(code **)*puStack_178)();
  }
  return;
}



/* Entry: 10a8992c0; end: 10a8994ef;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a8992c0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&ppuStack_70,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*param_1);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_b0);
  plVar4 = (long *)*param_1;
  FUN_10a724820(auStack_90,plVar4,param_2);
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  aiStack_80[0] = 6;
  ppuStack_78 = ppuStack_70;
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&ppuStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a8994f0; end: 10a899527;  */

long FUN_10a8994f0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a899528; end: 10a899537;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a899528(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [16];
  int aiStack_80 [2];
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = (undefined8 *)*puVar3;
  func_0x000109884c0c(&ppuStack_70,puVar2 + 1,*puVar2);
  func_0x000109884820(&puStack_a8,&ppuStack_70,*puVar2);
  if (ppuStack_70 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_70)();
  }
  (**(code **)(*(long *)*puVar2 + 0x30))(&puStack_b0);
  plVar5 = (long *)*puVar2;
  FUN_10a724820(auStack_90,plVar5,puVar3 + 2);
  uVar1 = puVar3[5];
  puVar2 = (undefined8 *)puVar3[4];
  if (-1 < (char)*(byte *)((long)puVar3 + 0x37)) {
    uVar1 = (ulong)*(byte *)((long)puVar3 + 0x37);
    puVar2 = puVar3 + 4;
  }
  (**(code **)(*plVar5 + 0x128))(&ppuStack_70,plVar5,puVar2,uVar1);
  aiStack_80[0] = 6;
  ppuStack_78 = ppuStack_70;
  uStack_48 = 2;
  puStack_50 = auStack_90;
  (**(code **)(*plVar5 + 0x58))(plVar5);
  ppuStack_70 = &puStack_a8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar5;
  puStack_60 = (undefined1 *)&puStack_b0;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar4 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar4)) &&
       (*(undefined8 **)((long)&ppuStack_78 + lVar4) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&ppuStack_78 + lVar4))();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  if (puStack_b0 != (undefined8 *)0x0) {
    (**(code **)*puStack_b0)();
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    (**(code **)*puStack_a8)();
  }
  return;
}



/* Entry: 10a899538; end: 10a899583;  */

void FUN_10a899538(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a899584; end: 10a8995d7;  */

void FUN_10a899584(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a8995d8; end: 10a89962f;  */

long FUN_10a8995d8(long param_1)

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



/* Entry: 10a899630; end: 10a899e9f;  */

/* WARNING: Removing unreachable block (ram,0x00010a8998fc) */
/* WARNING: Removing unreachable block (ram,0x00010a8997f0) */
/* WARNING: Removing unreachable block (ram,0x00010a899768) */
/* WARNING: Removing unreachable block (ram,0x00010a899874) */
/* WARNING: Removing unreachable block (ram,0x00010a899958) */

void FUN_10a899630(long *param_1,long param_2)

{
  undefined8 ******ppppppuVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  undefined8 ******ppppppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  code **ppcVar15;
  code **ppcVar16;
  code **ppcVar17;
  code **ppcVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined8 *****pppppuVar21;
  undefined8 ****ppppuVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  code **ppcStack_2d0;
  undefined **ppuStack_2c8;
  code **ppcStack_2c0;
  undefined8 ****ppppuStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 ****ppppuStack_2a0;
  undefined8 ****ppppuStack_298;
  code *pcStack_290;
  undefined8 ****ppppuStack_288;
  undefined8 ****ppppuStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined8 ****ppppuStack_268;
  code *pcStack_260;
  code *pcStack_258;
  code *pcStack_248;
  undefined8 ***apppuStack_240 [7];
  long lStack_208;
  undefined ***pppuStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  code *pcStack_1e8;
  code **ppcStack_1e0;
  undefined8 *****pppppuStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  ulong uStack_1b8;
  undefined ***pppuStack_1b0;
  code *pcStack_1a0;
  undefined8 *****pppppuStack_198;
  undefined8 ****ppppuStack_190;
  undefined8 ****ppppuStack_188;
  undefined8 ****ppppuStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 uStack_138;
  undefined7 uStack_130;
  char cStack_129;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 *****pppppuStack_b0;
  undefined **ppuStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  byte bStack_99;
  byte bStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar23 = *(undefined ***)(param_2 + 0x10);
  pppppuStack_198 = (undefined8 *****)param_1[1];
  pcStack_1a0 = (code *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar24 = *(long *)(pcStack_1a0 + 0x350);
  func_0x000107c2b054(&pppppuStack_b0,&UNK_10f67f619);
  puVar20 = ppuVar23[1];
  if (-1 < (char)*(byte *)((long)ppuVar23 + 0x17)) {
    puVar20 = (undefined *)(ulong)*(byte *)((long)ppuVar23 + 0x17);
  }
  FUN_10a003c90(&pppppuStack_140,puVar20 + 2,&ppuStack_f0);
  ppppppuVar8 = (undefined8 ******)pppppuStack_140;
  if (-1 < cStack_129) {
    ppppppuVar8 = &pppppuStack_140;
  }
  if (puVar20 != (undefined *)0x0) {
    ppuVar19 = (undefined **)*ppuVar23;
    if (-1 < *(char *)((long)ppuVar23 + 0x17)) {
      ppuVar19 = ppuVar23;
    }
    _memmove(ppppppuVar8,ppuVar19,puVar20);
  }
  *(undefined2 *)((long)ppppppuVar8 + (long)puVar20) = 0x203a;
  *(undefined1 *)((undefined2 *)((long)ppppppuVar8 + (long)puVar20) + 1) = 0;
  ppcVar15 = (code **)(ppuVar23 + 6);
  puVar20 = ppuVar23[7];
  ppcVar17 = (code **)*ppcVar15;
  if (-1 < (char)*(byte *)((long)ppuVar23 + 0x47)) {
    puVar20 = (undefined *)(ulong)*(byte *)((long)ppuVar23 + 0x47);
    ppcVar17 = ppcVar15;
  }
  ppppppuVar8 = &pppppuStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppppuVar8,ppcVar17,puVar20);
  ppppuStack_188 = ppppppuVar8[1];
  ppppuStack_190 = *ppppppuVar8;
  ppppuStack_180 = ppppppuVar8[2];
  ppppppuVar8[1] = (undefined8 *****)0x0;
  ppppppuVar8[2] = (undefined8 *****)0x0;
  *ppppppuVar8 = (undefined8 *****)0x0;
  if (lVar24 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar24 + 0x8d8),&pppppuStack_b0,&ppppuStack_190);
  }
  if ((long)ppppuStack_180 < 0) {
    __ZdlPv(ppppuStack_190);
  }
  if (cStack_129 < '\0') {
    __ZdlPv(pppppuStack_140);
  }
  pcVar7 = pcStack_1a0;
  ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
  ppuStack_e8 = (undefined **)0x0;
  ppuStack_170 = (undefined **)0x0;
  uStack_178 = 3;
  ppuVar19 = ppuVar23;
  func_0x00010938229c();
  bStack_99 = 9;
  pppppuStack_b0 = (undefined8 *****)0x646f43726f727265;
  ppuStack_a8 = (undefined **)CONCAT62(ppuStack_a8._2_6_,0x65);
  pppuVar9 = &ppuStack_f0;
  ppuStack_170 = ppuVar19;
  func_0x0001095b7584(pppuVar9,&pppppuStack_b0);
  uVar3 = *(undefined1 *)pppuVar9;
  *(undefined1 *)pppuVar9 = 3;
  ppuVar19 = pppuVar9[1];
  uStack_178 = uVar3;
  pppuVar9[1] = ppuStack_170;
  ppuStack_170 = ppuVar19;
  func_0x000109380ffc(&ppuStack_170,uVar3);
  ppuStack_148 = (undefined **)0x0;
  ppuStack_150._0_1_ = 3;
  ppuVar19 = ppuVar23 + 3;
  func_0x00010938229c();
  bStack_99 = 0x14;
  uStack_a0 = 0x65766974;
  ppuStack_a8 = (undefined **)0x7069726373654465;
  pppppuStack_b0 = (undefined8 *****)0x646f43726f727265;
  uStack_9c = 0;
  pppuVar9 = &ppuStack_f0;
  ppuStack_148 = ppuVar19;
  func_0x0001095b7584(pppuVar9,&pppppuStack_b0);
  uVar3 = *(undefined1 *)pppuVar9;
  *(undefined1 *)pppuVar9 = 3;
  ppuStack_150 = (undefined **)CONCAT71(ppuStack_150._1_7_,uVar3);
  ppuVar19 = pppuVar9[1];
  pppuVar9[1] = ppuStack_148;
  ppuStack_148 = ppuVar19;
  func_0x000109380ffc(&ppuStack_148,uVar3);
  ppuStack_158 = (undefined **)0x0;
  uStack_160 = 3;
  ppuVar19 = ppuVar23 + 9;
  func_0x00010938229c();
  bStack_99 = 0xc;
  pppppuStack_b0 = (undefined8 *****)0x73654d726f727265;
  ppuStack_a8 = (undefined **)CONCAT35(ppuStack_a8._5_3_,0x65676173);
  pppuVar9 = &ppuStack_f0;
  ppuStack_158 = ppuVar19;
  func_0x0001095b7584(pppuVar9,&pppppuStack_b0);
  uVar3 = *(undefined1 *)pppuVar9;
  *(undefined1 *)pppuVar9 = 3;
  ppuVar19 = pppuVar9[1];
  uStack_160 = uVar3;
  pppuVar9[1] = ppuStack_158;
  ppuStack_158 = ppuVar19;
  func_0x000109380ffc(&ppuStack_158,uVar3);
  FUN_10a0c32e4(&pppppuStack_b0,&ppuStack_f0,0xffffffff,0x20,0,1);
  ppuVar19 = ppuStack_a8;
  ppppppuVar8 = (undefined8 ******)pppppuStack_b0;
  if (-1 < (char)bStack_99) {
    ppuVar19 = (undefined **)(ulong)bStack_99;
    ppppppuVar8 = &pppppuStack_b0;
  }
  FUN_10a3bf330(&pppppuStack_140,ppppppuVar8,ppuVar19);
  func_0x000109380ffc(&ppuStack_e8,(ulong)ppuStack_f0 & 0xff);
  FUN_10a874ed4(&uStack_178,*(undefined8 *)(pcVar7 + 0x388));
  ppuVar10 = (undefined **)0x138;
  __Znwm();
  pppppuStack_b0 = pppppuStack_140;
  ppuVar10[1] = (undefined *)0x0;
  ppuVar10[2] = (undefined *)0x0;
  *ppuVar10 = (undefined *)&PTR_FUN_110b9f3b0;
  ppuVar19 = ppuVar10 + 3;
  pppppuStack_140 = (undefined8 *****)0x0;
  ppuStack_a8 = (undefined **)uStack_138;
  (**(code **)(CONCAT17(cStack_129,uStack_130) + 0x10))(&uStack_a0,&uStack_130);
  uStack_68 = uStack_f8;
  uStack_1b8 = *(ulong *)(pcVar7 + 0x208);
  pcStack_1c0 = *(code **)(pcVar7 + 0x200);
  if (-1 < (char)pcVar7[0x217]) {
    uStack_1b8 = (ulong)(byte)pcVar7[0x217];
    pcStack_1c0 = pcVar7 + 0x200;
  }
  ppuStack_f0 = (undefined **)FUN_10a8a6970;
  ppuStack_e8 = &PTR_FUN_110c24fc8;
  uStack_e0 = CONCAT71(uStack_177,uStack_178);
  uStack_d0 = uStack_168;
  ppuStack_d8 = ppuStack_170;
  ppuStack_170 = (undefined **)0x0;
  uStack_168 = 0;
  pppuStack_1b0 = &ppuStack_f0;
  FUN_10a23708c(ppuVar19,&UNK_10e4df547,0x17,&UNK_10f647b49,4,&pppppuStack_b0,1);
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  FUN_10a042634(&pppppuStack_b0);
  ppuStack_150 = ppuVar19;
  ppuStack_148 = ppuVar10;
  FUN_10a874f78(&uStack_178);
  pppppuStack_b0 = (undefined8 *****)0x0;
  ppuStack_a8 = (undefined **)0x0;
  ppuVar11 = *(undefined ***)(pcVar7 + 0x360);
  if (((ppuVar11 == (undefined **)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_a8 = ppuVar11,
      ppuVar11 == (undefined **)0x0)) ||
     (pppppuStack_b0 = *(undefined8 ******)(pcVar7 + 0x358), pppppuStack_b0 == (undefined8 *****)0x0
     )) {
    ppuVar10 = &PTR_PTR_113303c20;
    FUN_10ae079a0(0,&PTR_PTR_113303c20);
    FUN_10ae07cd4(ppuVar10,&PTR_PTR_113303c20);
  }
  else {
    ppuStack_150 = (undefined **)0x0;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_f0 = ppuVar19;
    ppuStack_e8 = ppuVar10;
    (*(code *)**pppppuStack_b0)(pppppuStack_b0,&ppuStack_f0);
    ppuVar10 = ppuStack_e8;
    if (ppuStack_e8 != (undefined **)0x0) {
      ppuVar11 = ppuStack_e8 + 1;
      do {
        puVar20 = *ppuVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
        if (bVar5) {
          *ppuVar11 = puVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar20 == (undefined *)0x0) {
        (**(code **)(*ppuStack_e8 + 0x10))(ppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
      }
    }
  }
  ppuVar10 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar11 = ppuStack_a8 + 1;
    do {
      puVar20 = *ppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar5) {
        *ppuVar11 = puVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar20 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a8 + 0x10))(ppuStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  ppuVar10 = ppuStack_148;
  if (ppuStack_148 != (undefined **)0x0) {
    ppuVar11 = ppuStack_148 + 1;
    do {
      puVar20 = *ppuVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
      if (bVar5) {
        *ppuVar11 = puVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar20 == (undefined *)0x0) {
      (**(code **)(*ppuStack_148 + 0x10))(ppuStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  FUN_10a042634(&pppppuStack_140);
  if (pcStack_1a0[0x4bb] == (code)0x1) {
    pcStack_1a0[0x4bb] = (code)0x0;
    FUN_10a86a770(pcStack_1a0,&DAT_10f2cf69e,6,ppuVar23);
  }
  if (*(char *)(*(long *)(pcStack_1a0 + 0x5c8) + 8) == '\x01') {
    (**(code **)(pcStack_1a0 + 0x5c0))(ppuVar23,ppcVar15,pcStack_1a0 + 0x5c0);
  }
  pcVar2 = pcStack_1a0;
  ppuVar10 = *(undefined ***)(pcStack_1a0 + 0x430);
  if ((ppuVar10 != (undefined **)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppuStack_a8 = ppuVar10,
     ppuVar10 != (undefined **)0x0)) {
    pppppuStack_b0 = *(undefined8 ******)(pcVar2 + 0x428);
    if (pppppuStack_b0 != (undefined8 *****)0x0) {
      FUN_10aaf1264();
    }
    ppuVar19 = ppuVar10 + 1;
    do {
      puVar20 = *ppuVar19;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar5) {
        *ppuVar19 = puVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar19 = ppuVar10;
    if (puVar20 == (undefined *)0x0) {
      (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  lVar24 = *(long *)(pcStack_1a0 + 0x378);
  bStack_70 = 3;
  pppppuStack_140 = &pppppuStack_b0;
  if (*(char *)(lVar24 + 0x388) == '\0') {
    bStack_70 = 0;
  }
  else {
    FUN_10a005398(&pppppuStack_140,lVar24 + 0x348);
    bStack_70 = *(byte *)(lVar24 + 0x388);
  }
  pppppuVar14 = (undefined8 *****)&pcStack_1a0;
  ppcVar17 = ppcVar15;
  FUN_10a899ea0(&pppppuStack_b0);
  if (3 < (ulong)bStack_70) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a899d7c);
    (*pcVar7)();
  }
  ppppppuVar12 = &pppppuStack_b0;
  (*(code *)(&PTR_FUN_110b9a040)[bStack_70])();
  ppppppuVar8 = (undefined8 ******)pppppuStack_198;
  if ((undefined8 ******)pppppuStack_198 != (undefined8 ******)0x0) {
    ppppppuVar1 = (undefined8 ******)(pppppuStack_198 + 1);
    do {
      pppppuVar21 = *ppppppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar5) {
        *ppppppuVar1 = (undefined8 *****)((long)pppppuVar21 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (pppppuVar21 == (undefined8 *****)0x0) {
      (*(code *)(*pppppuStack_198)[2])(pppppuStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppppppuVar12 = ppppppuVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a8995d8(&pppppuStack_b0);
  FUN_10a5ca2e0(&pcStack_1a0);
  ppppppuVar8 = ppppppuVar12;
  __Unwind_Resume();
  ppcStack_1e0 = ppcVar15;
  pppppuStack_1d8 = ppppppuVar12;
  puStack_1d0 = &stack0xfffffffffffffff0;
  if ((ppppppuVar8 == (undefined8 ******)0x0) || (*(char *)(ppppppuVar8 + 8) != '\x02')) {
    if ((ppppppuVar8 != (undefined8 ******)0x0) && (*(char *)(ppppppuVar8 + 8) == '\x01')) {
      pcStack_1c8 = FUN_10a899ea0;
      pppppuVar21 = *ppppppuVar8;
      pcStack_1e8 = (code *)pppppuVar14[1];
      ppuStack_1f0 = (undefined **)*pppppuVar14;
      if (pppppuVar14[1] != (undefined8 ****)0x0) {
        pcVar7 = (code *)((long)pppppuVar14[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar5) {
            *(long *)pcVar7 = *(long *)pcVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (*(code *)pppppuVar21)(&ppuStack_1f0,ppuVar23,ppcVar17,ppppppuVar8);
      pcVar7 = pcStack_1e8;
      if (pcStack_1e8 != (code *)0x0) {
        pcVar2 = pcStack_1e8 + 8;
        do {
          lVar24 = *(long *)pcVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar5) {
            *(long *)pcVar2 = lVar24 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar24 == 0) {
          (**(code **)(*(long *)pcStack_1e8 + 0x10))(pcStack_1e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar7);
        }
      }
      return;
    }
    return;
  }
  pppppuVar21 = &ppppuStack_2a0;
  pcStack_1f8 = pcVar7;
  pcStack_1c8 = FUN_10a899ea0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar12 = ppppppuVar8;
  ppcVar15 = (code **)pppppuVar14;
  ppuVar10 = ppuVar23;
  ppcVar18 = ppcVar17;
  pppuStack_200 = &ppuStack_f0;
  ppuStack_1f0 = ppuVar19;
  pcStack_1e8 = (code *)lVar24;
  FUN_10a688b40();
  if (ppppppuVar12 == (undefined8 ******)0x0) {
    ppcVar16 = (code **)0x0;
    pppppuVar13 = (undefined8 *****)0x0;
    if (ppcVar15 != (code **)0x0) {
      ppppuStack_298 = ppppppuVar8[1];
      ppppuStack_2a0 = *ppppppuVar8;
      if (ppppppuVar8[1] != (undefined8 *****)0x0) {
        pppppuVar13 = ppppppuVar8[1] + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar13,0x10);
          if (bVar5) {
            *pppppuVar13 = (undefined8 ****)((long)*pppppuVar13 + 1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      ppppuStack_288 = pppppuVar14[1];
      pcStack_290 = (code *)*pppppuVar14;
      if (pppppuVar14[1] != (undefined8 ****)0x0) {
        pcVar7 = (code *)((long)pppppuVar14[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar7,0x10);
          if (bVar5) {
            *(long *)pcVar7 = *(long *)pcVar7 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (*(char *)((long)ppuVar23 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppuStack_280,*ppuVar23,ppuVar23[1]);
      }
      else {
        puStack_278 = ppuVar23[1];
        ppppuStack_280 = (undefined8 ****)*ppuVar23;
        puStack_270 = ppuVar23[2];
      }
      if (*(char *)((long)ppcVar17 + 0x17) < '\0') {
        func_0x000107c3192c(&ppppuStack_268,*ppcVar17,ppcVar17[1]);
      }
      else {
        pcStack_260 = ppcVar17[1];
        ppppuStack_268 = (undefined8 ****)*ppcVar17;
        pcStack_258 = ppcVar17[2];
      }
      pcStack_248 = FUN_10a89a574;
      ppcVar17 = &pcStack_248;
      FUN_10a89a5fc(apppuStack_240,&PTR_FUN_110c25780,&ppppuStack_2a0);
      ppcVar16 = &pcStack_248;
      FUN_10a4634ec(ppcVar15,ppcVar16);
      pppppuVar13 = (undefined8 *****)apppuStack_240;
      (*(code *)*apppuStack_240[0])();
      ppuVar10 = (undefined **)pppppuVar21;
      if ((long)pcStack_258 < 0) {
        pppppuVar13 = (undefined8 *****)ppppuStack_268;
        __ZdlPv();
        ppuVar10 = (undefined **)pppppuVar21;
      }
      if ((long)puStack_270 < 0) {
        pppppuVar13 = (undefined8 *****)ppppuStack_280;
        __ZdlPv();
      }
      pppppuVar14 = (undefined8 *****)ppppuStack_288;
      if ((undefined8 *****)ppppuStack_288 != (undefined8 *****)0x0) {
        pppppuVar21 = (undefined8 *****)(ppppuStack_288 + 1);
        do {
          ppppuVar22 = *pppppuVar21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar21,0x10);
          if (bVar5) {
            *pppppuVar21 = (undefined8 ****)((long)ppppuVar22 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppuVar22 == (undefined8 ****)0x0) {
          (*(code *)(*ppppuStack_288)[2])(ppppuStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppuVar13 = pppppuVar14;
        }
      }
      pppppuVar21 = (undefined8 *****)ppppuStack_298;
      pppppuVar14 = &ppppuStack_2a0;
      if ((undefined8 *****)ppppuStack_298 != (undefined8 *****)0x0) {
        pppppuVar14 = (undefined8 *****)(ppppuStack_298 + 1);
        do {
          ppppuVar22 = *pppppuVar14;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppuVar14,0x10);
          if (bVar5) {
            *pppppuVar14 = (undefined8 ****)((long)ppppuVar22 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        pppppuVar14 = &ppppuStack_2a0;
        if (ppppuVar22 == (undefined8 ****)0x0) {
          (*(code *)(*ppppuStack_298)[2])(ppppuStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppuVar13 = pppppuVar21;
          pppppuVar14 = &ppppuStack_2a0;
        }
      }
    }
  }
  else {
    *ppppppuVar12 =
         (undefined8 *****)CONCAT44((int)((ulong)*ppppppuVar12 >> 0x20) + 1,(int)*ppppppuVar12 + 1);
    pppppuVar13 = *ppppppuVar8;
    ppcVar16 = (code **)pppppuVar14;
    ppuVar10 = ppuVar23;
    ppcVar18 = ppcVar17;
    FUN_10a89a218(pppppuVar13,pppppuVar14,ppuVar23,ppcVar17);
    iVar6 = *(int *)((long)ppppppuVar12 + 4) + -1;
    *(int *)((long)ppppppuVar12 + 4) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)ppppppuVar12 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    if ((long)puStack_270 < 0) {
      __ZdlPv(ppppuStack_280);
    }
    FUN_10a5ca2e0(pppppuVar14 + 2);
    func_0x00010a004dac(&ppppuStack_2a0);
    pppppuVar21 = pppppuVar13;
    __Unwind_Resume();
    pcStack_2a8 = FUN_10a89a218;
    ppcStack_2d0 = (code **)pppppuVar14;
    ppuStack_2c8 = ppuVar23;
    ppcStack_2c0 = ppcVar17;
    ppppuStack_2b8 = pppppuVar13;
    ppuStack_2b0 = &puStack_1d0;
    func_0x000109884c0c(&puStack_2e0,pppppuVar21 + 1,*pppppuVar21);
    func_0x000109884820(&puStack_2d8,&puStack_2e0,*pppppuVar21);
    if (puStack_2e0 != (undefined8 *)0x0) {
      (**(code **)*puStack_2e0)();
    }
    (*(code *)(**pppppuVar21)[6])(&puStack_2e0);
    FUN_10a89a364(*pppppuVar21,&puStack_2e0,&puStack_2d8,ppcVar16,ppuVar10,ppcVar18);
    if (puStack_2e0 != (undefined8 *)0x0) {
      (**(code **)*puStack_2e0)();
    }
    if (puStack_2d8 != (undefined8 *)0x0) {
      (**(code **)*puStack_2d8)();
    }
    return;
  }
  return;
}



/* Entry: 10a899ea0; end: 10a899ec7;  */

void FUN_10a899ea0(long *param_1,code **param_2,long *param_3,code **param_4)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  long *plVar11;
  code **ppcVar12;
  code **ppcVar13;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  code *pcVar17;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  code **ppcStack_110;
  long *plStack_108;
  code **ppcStack_100;
  undefined8 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined8 **ppuStack_d8;
  code *pcStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  if ((param_1 == (long *)0x0) || ((char)param_1[8] != '\x02')) {
    if ((param_1 != (long *)0x0) && ((char)param_1[8] == '\x01')) {
      pcVar14 = (code *)*param_1;
      pcVar17 = param_2[1];
      if (param_2[1] != (code *)0x0) {
        pcVar1 = param_2[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      (*pcVar14)(&stack0xffffffffffffffd0,param_3,param_4,param_1);
      if (pcVar17 != (code *)0x0) {
        pcVar14 = pcVar17 + 8;
        do {
          lVar15 = *(long *)pcVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar4) {
            *(long *)pcVar14 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*(long *)pcVar17 + 0x10))(pcVar17);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar17);
        }
      }
      return;
    }
    return;
  }
  ppcVar12 = &pcStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  ppcVar9 = param_2;
  plVar11 = param_3;
  ppcVar13 = param_4;
  FUN_10a688b40();
  if (plVar6 == (long *)0x0) {
    ppcVar10 = (code **)0x0;
    ppuVar7 = (undefined8 **)0x0;
    if (ppcVar9 != (code **)0x0) {
      ppuStack_d8 = (undefined8 **)param_1[1];
      pcStack_e0 = (code *)*param_1;
      if (param_1[1] != 0) {
        plVar6 = (long *)(param_1[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_c8 = (undefined8 **)param_2[1];
      pcStack_d0 = *param_2;
      if (param_2[1] != (code *)0x0) {
        pcVar14 = param_2[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar14,0x10);
          if (bVar4) {
            *(long *)pcVar14 = *(long *)pcVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_c0,*param_3,param_3[1]);
      }
      else {
        lStack_b8 = param_3[1];
        ppuStack_c0 = (undefined8 **)*param_3;
        lStack_b0 = param_3[2];
      }
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_a8,*param_4,param_4[1]);
      }
      else {
        pcStack_a0 = param_4[1];
        ppuStack_a8 = (undefined8 **)*param_4;
        pcStack_98 = param_4[2];
      }
      pcStack_88 = FUN_10a89a574;
      param_4 = &pcStack_88;
      FUN_10a89a5fc(apuStack_80,&PTR_FUN_110c25780,&pcStack_e0);
      ppcVar10 = &pcStack_88;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      ppuVar7 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      plVar11 = (long *)ppcVar12;
      if ((long)pcStack_98 < 0) {
        ppuVar7 = ppuStack_a8;
        __ZdlPv();
        plVar11 = (long *)ppcVar12;
      }
      if (lStack_b0 < 0) {
        ppuVar7 = ppuStack_c0;
        __ZdlPv();
      }
      ppuVar8 = ppuStack_c8;
      if (ppuStack_c8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_c8 + 1;
        do {
          puVar16 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar16 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar16 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_c8)[2])(ppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
        }
      }
      ppuVar8 = ppuStack_d8;
      param_2 = &pcStack_e0;
      if (ppuStack_d8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_d8 + 1;
        do {
          puVar16 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar16 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        param_2 = &pcStack_e0;
        if (puVar16 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_d8)[2])(ppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
          param_2 = &pcStack_e0;
        }
      }
    }
  }
  else {
    *plVar6 = CONCAT44((int)((ulong)*plVar6 >> 0x20) + 1,(int)*plVar6 + 1);
    ppuVar7 = (undefined8 **)*param_1;
    ppcVar10 = param_2;
    plVar11 = param_3;
    ppcVar13 = param_4;
    FUN_10a89a218(ppuVar7,param_2,param_3,param_4);
    iVar5 = *(int *)((long)plVar6 + 4) + -1;
    *(int *)((long)plVar6 + 4) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)plVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_b0 < 0) {
    __ZdlPv(ppuStack_c0);
  }
  FUN_10a5ca2e0(param_2 + 2);
  func_0x00010a004dac(&pcStack_e0);
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a89a218;
  ppcStack_110 = param_2;
  plStack_108 = param_3;
  ppcStack_100 = param_4;
  ppuStack_f8 = ppuVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_120,ppuVar8 + 1,*ppuVar8);
  func_0x000109884820(&puStack_118,&puStack_120,*ppuVar8);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  (**(code **)(**ppuVar8 + 0x30))(&puStack_120);
  FUN_10a89a364(*ppuVar8,&puStack_120,&puStack_118,ppcVar10,plVar11,ppcVar13);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a899ec8; end: 10a899f73;  */

void FUN_10a899ec8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uStack_30;
  long *plStack_28;
  
  pcVar5 = (code *)*param_1;
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar5)(&uStack_30,param_3,param_4,param_1);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a899f74; end: 10a89a217;  */

void FUN_10a899f74(long *param_1,code **param_2,long *param_3,code **param_4)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  code **ppcVar9;
  code **ppcVar10;
  long *plVar11;
  code **ppcVar12;
  code **ppcVar13;
  undefined8 *puVar14;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  code **ppcStack_110;
  long *plStack_108;
  code **ppcStack_100;
  undefined8 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined8 **ppuStack_d8;
  code *pcStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 **ppuStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  code *pcStack_88;
  undefined8 *apuStack_80 [7];
  long lStack_48;
  
  ppcVar12 = &pcStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = param_1;
  ppcVar9 = param_2;
  plVar11 = param_3;
  ppcVar13 = param_4;
  FUN_10a688b40();
  if (plVar6 == (long *)0x0) {
    ppcVar10 = (code **)0x0;
    ppuVar7 = (undefined8 **)0x0;
    if (ppcVar9 != (code **)0x0) {
      ppuStack_d8 = (undefined8 **)param_1[1];
      pcStack_e0 = (code *)*param_1;
      if (param_1[1] != 0) {
        plVar6 = (long *)(param_1[1] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = *plVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_c8 = (undefined8 **)param_2[1];
      pcStack_d0 = *param_2;
      if (param_2[1] != (code *)0x0) {
        pcVar1 = param_2[1] + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = *(long *)pcVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_c0,*param_3,param_3[1]);
      }
      else {
        lStack_b8 = param_3[1];
        ppuStack_c0 = (undefined8 **)*param_3;
        lStack_b0 = param_3[2];
      }
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        func_0x000107c3192c(&ppuStack_a8,*param_4,param_4[1]);
      }
      else {
        pcStack_a0 = param_4[1];
        ppuStack_a8 = (undefined8 **)*param_4;
        pcStack_98 = param_4[2];
      }
      pcStack_88 = FUN_10a89a574;
      param_4 = &pcStack_88;
      FUN_10a89a5fc(apuStack_80,&PTR_FUN_110c25780,&pcStack_e0);
      ppcVar10 = &pcStack_88;
      FUN_10a4634ec(ppcVar9,ppcVar10);
      ppuVar7 = apuStack_80;
      (*(code *)*apuStack_80[0])();
      plVar11 = (long *)ppcVar12;
      if ((long)pcStack_98 < 0) {
        ppuVar7 = ppuStack_a8;
        __ZdlPv();
        plVar11 = (long *)ppcVar12;
      }
      if (lStack_b0 < 0) {
        ppuVar7 = ppuStack_c0;
        __ZdlPv();
      }
      ppuVar8 = ppuStack_c8;
      if (ppuStack_c8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_c8 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_c8)[2])(ppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
        }
      }
      ppuVar8 = ppuStack_d8;
      param_2 = &pcStack_e0;
      if (ppuStack_d8 != (undefined8 **)0x0) {
        ppuVar2 = ppuStack_d8 + 1;
        do {
          puVar14 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = (undefined8 *)((long)puVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        param_2 = &pcStack_e0;
        if (puVar14 == (undefined8 *)0x0) {
          (*(code *)(*ppuStack_d8)[2])(ppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar7 = ppuVar8;
          param_2 = &pcStack_e0;
        }
      }
    }
  }
  else {
    *plVar6 = CONCAT44((int)((ulong)*plVar6 >> 0x20) + 1,(int)*plVar6 + 1);
    ppuVar7 = (undefined8 **)*param_1;
    ppcVar10 = param_2;
    plVar11 = param_3;
    ppcVar13 = param_4;
    FUN_10a89a218(ppuVar7,param_2,param_3,param_4);
    iVar5 = *(int *)((long)plVar6 + 4) + -1;
    *(int *)((long)plVar6 + 4) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)plVar6 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_b0 < 0) {
    __ZdlPv(ppuStack_c0);
  }
  FUN_10a5ca2e0(param_2 + 2);
  func_0x00010a004dac(&pcStack_e0);
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  pcStack_e8 = FUN_10a89a218;
  ppcStack_110 = param_2;
  plStack_108 = param_3;
  ppcStack_100 = param_4;
  ppuStack_f8 = ppuVar7;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&puStack_120,ppuVar8 + 1,*ppuVar8);
  func_0x000109884820(&puStack_118,&puStack_120,*ppuVar8);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  (**(code **)(**ppuVar8 + 0x30))(&puStack_120);
  FUN_10a89a364(*ppuVar8,&puStack_120,&puStack_118,ppcVar10,plVar11,ppcVar13);
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a89a218; end: 10a89a31b;  */

void FUN_10a89a218(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  func_0x000109884c0c(&puStack_40,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_38,&puStack_40,*param_1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_40);
  FUN_10a89a364(*param_1,&puStack_40,&puStack_38,param_2,param_3,param_4);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a89a31c; end: 10a89a363;  */

long FUN_10a89a31c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_10a5ca2e0(param_1 + 0x10);
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



/* Entry: 10a89a364; end: 10a89a477;  */

void FUN_10a89a364(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int aiStack_a0 [2];
  undefined8 *puStack_98;
  undefined1 auStack_90 [32];
  int aiStack_70 [2];
  long alStack_68 [2];
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a89a478(auStack_90,param_1,param_4,param_5,param_6);
  uStack_38 = 3;
  puStack_40 = auStack_90;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &puStack_40;
  alStack_68[1] = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_a0);
  if ((3 < aiStack_a0[0]) && (puStack_98 != (undefined8 *)0x0)) {
    (**(code **)*puStack_98)();
  }
  lVar1 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar1)) &&
       (*(undefined8 **)((long)alStack_68 + lVar1) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)alStack_68 + lVar1))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x30);
  return;
}



/* Entry: 10a89a478; end: 10a89a573;  */

void FUN_10a89a478(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  
  FUN_10a724820();
  uVar1 = param_4[1];
  puVar2 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar2 = param_4;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,puVar2,uVar1);
  *(undefined4 *)(param_1 + 0x10) = 6;
  *(undefined8 *)(param_1 + 0x18) = uStack_48;
  uVar1 = param_5[1];
  puVar2 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar2 = param_5;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_48,param_2,puVar2,uVar1);
  *(undefined4 *)(param_1 + 0x20) = 6;
  *(undefined8 *)(param_1 + 0x28) = uStack_48;
  return;
}



/* Entry: 10a89a574; end: 10a89a587;  */

void FUN_10a89a574(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)*puVar2;
  func_0x000109884c0c(&puStack_40,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_38,&puStack_40,*puVar1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_40);
  FUN_10a89a364(*puVar1,&puStack_40,&puStack_38,puVar2 + 2,puVar2 + 4,puVar2 + 7);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_38 != (undefined8 *)0x0) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a89a588; end: 10a89a5e3;  */

void FUN_10a89a588(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x4f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x38));
    }
    if (*(char *)(lVar1 + 0x37) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x20));
    }
    FUN_10a5ca2e0(lVar1 + 0x10);
    func_0x00010a004dac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a89a5e4; end: 10a89a5fb;  */

void FUN_10a89a5e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89a5fc; end: 10a89a6f3;  */

undefined8 * FUN_10a89a5fc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = param_2;
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  uVar5 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  puVar4[1] = param_3[1];
  *puVar4 = uVar5;
  *param_3 = 0;
  param_3[1] = 0;
  puVar4[3] = uVar7;
  puVar4[2] = uVar6;
  if (param_3[3] != 0) {
    plVar1 = (long *)(param_3[3] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_3 + 0x37) < '\0') {
    func_0x000107c3192c(puVar4 + 4,param_3[4],param_3[5]);
  }
  else {
    uVar5 = param_3[4];
    puVar4[5] = param_3[5];
    puVar4[4] = uVar5;
    puVar4[6] = param_3[6];
  }
  if (*(char *)((long)param_3 + 0x4f) < '\0') {
    func_0x000107c3192c(puVar4 + 7,param_3[7],param_3[8]);
  }
  else {
    uVar5 = param_3[7];
    puVar4[8] = param_3[8];
    puVar4[7] = uVar5;
    puVar4[9] = param_3[9];
  }
  param_1[1] = puVar4;
  return param_1;
}



/* Entry: 10a89a6f4; end: 10a89a763;  */

void FUN_10a89a6f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((long)puVar1 + 0x5f) < '\0') {
      __ZdlPv(puVar1[9]);
    }
    if (*(char *)((long)puVar1 + 0x47) < '\0') {
      __ZdlPv(puVar1[6]);
    }
    if (*(char *)((long)puVar1 + 0x2f) < '\0') {
      __ZdlPv(puVar1[3]);
    }
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a89a764; end: 10a89a77b;  */

void FUN_10a89a764(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89a77c; end: 10a89a9c7;  */

void FUN_10a89a77c(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 **appuStack_88 [2];
  char cStack_71;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  puVar7 = *(undefined8 **)(param_2 + 0x10);
  plVar12 = (long *)param_1[1];
  lVar11 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lVar10 = *(long *)(lVar11 + 0x350);
  func_0x000107c2b054(&lStack_58,&UNK_10f67f637);
  uVar3 = puVar7[1];
  if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)puVar7 + 0x17);
  }
  FUN_10a003c90(appuStack_88,uVar3 + 1,&puStack_70);
  pppuVar6 = (undefined8 ***)appuStack_88[0];
  if (-1 < cStack_71) {
    pppuVar6 = appuStack_88;
  }
  if (uVar3 != 0) {
    puVar2 = (undefined8 *)*puVar7;
    if (-1 < *(char *)((long)puVar7 + 0x17)) {
      puVar2 = puVar7;
    }
    _memmove(pppuVar6,puVar2,uVar3);
  }
  *(undefined2 *)((long)pppuVar6 + uVar3) = 0x2e;
  puVar8 = puVar7 + 3;
  uVar3 = puVar7[4];
  puVar2 = (undefined8 *)*puVar8;
  if (-1 < (char)*(byte *)((long)puVar7 + 0x2f)) {
    uVar3 = (ulong)*(byte *)((long)puVar7 + 0x2f);
    puVar2 = puVar8;
  }
  pppuVar6 = appuStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,puVar2,uVar3);
  puStack_68 = pppuVar6[1];
  puStack_70 = *pppuVar6;
  puStack_60 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  if (lVar10 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar10 + 0x8d8),&lStack_58,&puStack_70);
  }
  if ((long)puStack_60 < 0) {
    __ZdlPv(puStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(appuStack_88[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(lStack_58);
  }
  lStack_58 = *(long *)(lVar11 + 0x600);
  plVar9 = *(long **)(lVar11 + 0x608);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plStack_50 = plVar9;
  if (lStack_58 != 0) {
    FUN_10a89a9c8(lStack_58,puVar7,puVar8,puVar7 + 6);
  }
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar9 = plVar12 + 1;
    do {
      lVar10 = *plVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *plVar9 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  return;
}



/* Entry: 10a89a9c8; end: 10a89ada7;  */

void FUN_10a89a9c8(code *param_1,code **param_2,code *param_3,long *param_4)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  code **ppcVar16;
  code *unaff_x24;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  int aiStack_1e0 [2];
  undefined8 *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [8];
  undefined4 uStack_1c0;
  undefined8 **ppuStack_1b8;
  int aiStack_1b0 [2];
  long lStack_1a8;
  undefined8 **ppuStack_1a0;
  long *plStack_198;
  undefined1 *puStack_190;
  undefined4 **ppuStack_188;
  undefined4 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  code *pcStack_168;
  code **ppcStack_160;
  long *plStack_158;
  code *pcStack_150;
  code *pcStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  code *pcStack_128;
  long lStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [64];
  byte bStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar14 = param_3;
  plVar15 = param_4;
  ppcVar16 = param_2;
  pcVar6 = param_1;
  if (param_1[0x40] == (code)0x1) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010a89aaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)param_1)(param_2,param_3,param_4,param_1);
      return;
    }
  }
  else {
    pcVar8 = param_1;
    ppcVar10 = param_2;
    pcVar11 = param_3;
    plVar12 = param_4;
    if (param_1[0x40] == (code)0x2) {
      pcVar7 = param_1;
      ppcVar9 = param_2;
      FUN_10a688b40();
      if (pcVar7 == (code *)0x0) {
        ppcVar10 = (code **)0x0;
        pcVar8 = (code *)0x0;
        if (ppcVar9 != (code **)0x0) {
          pcStack_118 = *(code **)(param_1 + 8);
          lStack_120 = *(long *)param_1;
          if (*(long *)(param_1 + 8) != 0) {
            plVar15 = (long *)(*(long *)(param_1 + 8) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = *plVar15 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pcVar6 = (code *)&lStack_120;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&pcStack_110,*param_2,param_2[1]);
          }
          else {
            pcStack_108 = param_2[1];
            pcStack_110 = *param_2;
            pcStack_100 = param_2[2];
          }
          unaff_x24 = (code *)&lStack_120;
          if ((char)param_3[0x17] < '\0') {
            func_0x000107c3192c(&pcStack_f8,*(long *)param_3,*(long *)(param_3 + 8));
          }
          else {
            lStack_f0 = *(long *)(param_3 + 8);
            pcStack_f8 = *(code **)param_3;
            lStack_e8 = *(long *)(param_3 + 0x10);
          }
          pcVar14 = (code *)auStack_e0;
          bStack_a0 = 10;
          pcStack_128 = pcVar14;
          func_0x00010a840fd8(&pcStack_128,param_4,(char)param_4[8]);
          bStack_a0 = *(byte *)(param_4 + 8);
          pcStack_98 = FUN_10a89b098;
          ppuStack_90 = &PTR_FUN_110c24bc0;
          plVar15 = (long *)0x88;
          __Znwm();
          plVar15[1] = (long)pcStack_118;
          *plVar15 = lStack_120;
          lStack_120 = 0;
          pcStack_118 = (code *)0x0;
          if ((long)pcStack_100 < 0) {
            func_0x000107c3192c(plVar15 + 2,pcStack_110,pcStack_108);
          }
          else {
            plVar15[3] = (long)pcStack_108;
            plVar15[2] = (long)pcStack_110;
            plVar15[4] = (long)pcStack_100;
          }
          if (lStack_e8 < 0) {
            func_0x000107c3192c(plVar15 + 5,pcStack_f8,lStack_f0);
          }
          else {
            plVar15[6] = lStack_f0;
            plVar15[5] = (long)pcStack_f8;
            plVar15[7] = lStack_e8;
          }
          pcStack_128 = (code *)(plVar15 + 8);
          *(undefined1 *)(plVar15 + 0x10) = 10;
          pcVar11 = (code *)(ulong)bStack_a0;
          func_0x00010a840fd8(&pcStack_128,pcVar14);
          ppcVar16 = &pcStack_98;
          *(byte *)(plVar15 + 0x10) = bStack_a0;
          ppcVar10 = &pcStack_98;
          plStack_88 = plVar15;
          FUN_10a4634ec(ppcVar9);
          (*(code *)*ppuStack_90)(&ppuStack_90);
          if (10 < (ulong)bStack_a0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10a89acd8);
            (*pcVar6)();
          }
          pcVar8 = pcVar14;
          (*(code *)(&PTR_FUN_110c17158)[bStack_a0])();
          if (lStack_e8 < 0) {
            pcVar8 = pcStack_f8;
            __ZdlPv();
          }
          if ((long)pcStack_100 < 0) {
            pcVar8 = pcStack_110;
            __ZdlPv();
          }
          pcVar7 = pcStack_118;
          if (pcStack_118 != (code *)0x0) {
            pcVar1 = pcStack_118 + 8;
            do {
              lVar13 = *(long *)pcVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar5) {
                *(long *)pcVar1 = lVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*(long *)pcStack_118 + 0x10))(pcStack_118);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pcVar8 = pcVar7;
            }
          }
        }
      }
      else {
        *(long *)pcVar7 =
             CONCAT44((int)((ulong)*(long *)pcVar7 >> 0x20) + 1,(int)*(long *)pcVar7 + 1);
        pcVar8 = *(code **)param_1;
        pcVar11 = param_3;
        plVar12 = param_4;
        FUN_10a89ada8();
        iVar3 = *(int *)(pcVar7 + 4);
        *(int *)(pcVar7 + 4) = iVar3 + -1;
        unaff_x24 = pcVar7;
        if (iVar3 + -1 == 0) {
          *(undefined4 *)pcVar7 = 0;
        }
      }
    }
    param_1 = pcVar8;
    param_2 = ppcVar10;
    param_3 = pcVar11;
    param_4 = plVar12;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  if (*(char *)((long)plVar15 + 0x27) < '\0') {
    __ZdlPv(*ppcVar16);
  }
  func_0x00010a004dac(plVar15);
  __ZdlPv();
  FUN_10a89b034(&lStack_120);
  pcVar8 = param_1;
  __Unwind_Resume();
  pcStack_138 = FUN_10a89ada8;
  pcStack_170 = unaff_x24;
  pcStack_168 = pcVar6;
  ppcStack_160 = ppcVar16;
  plStack_158 = plVar15;
  pcStack_150 = pcVar14;
  pcStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&uStack_1d0,pcVar8 + 8,*(long *)pcVar8);
  func_0x000109884820(&puStack_1e8,&uStack_1d0,*(long *)pcVar8);
  if ((undefined8 *)CONCAT44(uStack_1cc,uStack_1d0) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_1cc,uStack_1d0))();
  }
  (**(code **)(**(long **)pcVar8 + 0x30))(&puStack_1f0);
  plVar15 = *(long **)pcVar8;
  pcVar6 = param_2[1];
  ppcVar16 = (code **)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pcVar6 = (code *)(ulong)*(byte *)((long)param_2 + 0x17);
    ppcVar16 = param_2;
  }
  (**(code **)(*plVar15 + 0x128))(auStack_1c8,plVar15,ppcVar16,pcVar6);
  uStack_1d0 = 6;
  uVar2 = *(ulong *)(param_3 + 8);
  pcVar6 = *(code **)param_3;
  if (-1 < (char)param_3[0x17]) {
    uVar2 = (ulong)(byte)param_3[0x17];
    pcVar6 = param_3;
  }
  (**(code **)(*plVar15 + 0x128))(&ppuStack_1a0,plVar15,pcVar6,uVar2);
  uStack_1c0 = 6;
  ppuStack_1b8 = ppuStack_1a0;
  FUN_10a840e78(aiStack_1b0,plVar15,param_4);
  uStack_178 = 3;
  puStack_180 = &uStack_1d0;
  (**(code **)(*plVar15 + 0x58))(plVar15);
  ppuStack_1a0 = &puStack_1e8;
  ppuStack_188 = &puStack_180;
  plStack_198 = plVar15;
  puStack_190 = (undefined1 *)&puStack_1f0;
  func_0x0001098960c0(aiStack_1e0);
  if ((3 < aiStack_1e0[0]) && (puStack_1d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_1d8)();
  }
  lVar13 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_1b0 + lVar13)) &&
       (*(undefined8 **)((long)&lStack_1a8 + lVar13) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_1a8 + lVar13))();
    }
    lVar13 = lVar13 + -0x10;
  } while (lVar13 != -0x30);
  if (puStack_1f0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1f0)();
  }
  if (puStack_1e8 != (undefined8 *)0x0) {
    (**(code **)*puStack_1e8)();
  }
  return;
}



/* Entry: 10a89ada8; end: 10a89b033;  */

void FUN_10a89ada8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined4 **ppuStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  func_0x000109884c0c(&uStack_a0,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_b8,&uStack_a0,*param_1);
  if ((undefined8 *)CONCAT44(uStack_9c,uStack_a0) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_9c,uStack_a0))();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_c0);
  plVar4 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plVar4 + 0x128))(auStack_98,plVar4,puVar2,uVar1);
  uStack_a0 = 6;
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  (**(code **)(*plVar4 + 0x128))(&ppuStack_70,plVar4,puVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  FUN_10a840e78(aiStack_80,plVar4,param_4);
  uStack_48 = 3;
  puStack_50 = &uStack_a0;
  (**(code **)(*plVar4 + 0x58))(plVar4);
  ppuStack_70 = &puStack_b8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar4;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a89b034; end: 10a89b097;  */

long FUN_10a89b034(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  if ((ulong)*(byte *)(param_1 + 0x80) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(param_1 + 0x80)])(param_1 + 0x40);
    if (*(char *)(param_1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x28));
    }
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
    plVar6 = *(long **)(param_1 + 8);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a89b098);
  (*pcVar4)();
}



/* Entry: 10a89b098; end: 10a89b0ab;  */

void FUN_10a89b098(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  int aiStack_b0 [2];
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined8 **ppuStack_88;
  int aiStack_80 [2];
  long lStack_78;
  undefined8 **ppuStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined4 **ppuStack_58;
  undefined4 *puStack_50;
  undefined8 uStack_48;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(&uStack_a0,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_b8,&uStack_a0,*puVar3);
  if ((undefined8 *)CONCAT44(uStack_9c,uStack_a0) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_9c,uStack_a0))();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_c0);
  plVar6 = (long *)*puVar3;
  uVar1 = puVar4[3];
  plVar2 = (long *)puVar4[2];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x27)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x27);
    plVar2 = puVar4 + 2;
  }
  (**(code **)(*plVar6 + 0x128))(auStack_98,plVar6,plVar2,uVar1);
  uStack_a0 = 6;
  uVar1 = puVar4[6];
  plVar2 = (long *)puVar4[5];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x3f)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x3f);
    plVar2 = puVar4 + 5;
  }
  (**(code **)(*plVar6 + 0x128))(&ppuStack_70,plVar6,plVar2,uVar1);
  uStack_90 = 6;
  ppuStack_88 = ppuStack_70;
  FUN_10a840e78(aiStack_80,plVar6,puVar4 + 8);
  uStack_48 = 3;
  puStack_50 = &uStack_a0;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_70 = &puStack_b8;
  ppuStack_58 = &puStack_50;
  plStack_68 = plVar6;
  puStack_60 = (undefined1 *)&puStack_c0;
  func_0x0001098960c0(aiStack_b0);
  if ((3 < aiStack_b0[0]) && (puStack_a8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_a8)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_80 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_78 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_78 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x30);
  if (puStack_c0 != (undefined8 *)0x0) {
    (**(code **)*puStack_c0)();
  }
  if (puStack_b8 != (undefined8 *)0x0) {
    (**(code **)*puStack_b8)();
  }
  return;
}



/* Entry: 10a89b0ac; end: 10a89b123;  */

void FUN_10a89b0ac(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if ((ulong)*(byte *)(lVar2 + 0x80) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(lVar2 + 0x80)])(lVar2 + 0x40);
    if (*(char *)(lVar2 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar2 + 0x28));
    }
    if (*(char *)(lVar2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar2 + 0x10));
    }
    func_0x00010a004dac(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a89b124);
  (*pcVar1)();
}



/* Entry: 10a89b124; end: 10a89b13b;  */

void FUN_10a89b124(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89b13c; end: 10a89b1af;  */

void FUN_10a89b13c(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  if ((ulong)*(byte *)(puVar2 + 0xe) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(puVar2 + 0xe)])(puVar2 + 6);
    if (*(char *)((long)puVar2 + 0x2f) < '\0') {
      __ZdlPv(puVar2[3]);
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      __ZdlPv(*puVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a89b1b0);
  (*pcVar1)();
}



/* Entry: 10a89b1b0; end: 10a89b1c7;  */

void FUN_10a89b1b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89b1c8; end: 10a89b70f;  */

/* WARNING: Removing unreachable block (ram,0x00010a89b614) */
/* WARNING: Removing unreachable block (ram,0x00010a89b3b4) */
/* WARNING: Removing unreachable block (ram,0x00010a89b6f0) */

undefined ** FUN_10a89b1c8(long *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lStack_170;
  undefined ***pppuStack_168;
  long lStack_160;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined ***pppuStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined ***pppuStack_110;
  long lStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined ***pppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined ***pppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined ***pppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = *(undefined8 **)(param_2 + 0x10);
  pppuStack_168 = (undefined ***)param_1[1];
  lVar18 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  lStack_170 = lVar18;
  if (((*(byte *)(lVar18 + 0x4b9) & 1) != 0) ||
     ((*(byte *)(*(long *)(lVar18 + 0x378) + 0xaa) & 1) != 0)) {
    ppuVar12 = &PTR_PTR_113303220;
    FUN_10ae079a0(0);
    FUN_10ae07cd4(ppuVar12,&PTR_PTR_113303220);
    goto LAB_10a89b23c;
  }
  lVar17 = lVar18 + 0x300;
  FUN_10a894b50(lVar17,puVar16);
  lStack_98 = 0;
  pppuStack_90 = (undefined ***)0x0;
  if (lVar17 == 0) {
    lVar17 = *(long *)(lVar18 + 0x230);
    if (lVar17 != 0) {
      bVar5 = *(byte *)((long)puVar16 + 0x17);
      uVar3 = puVar16[1];
      if (-1 < (char)bVar5) {
        uVar3 = (ulong)bVar5;
      }
      bVar6 = *(byte *)(lVar17 + 0x2f);
      uVar4 = *(ulong *)(lVar17 + 0x20);
      if (-1 < (char)bVar6) {
        uVar4 = (ulong)bVar6;
      }
      if (uVar3 == uVar4) {
        puVar11 = (undefined8 *)*puVar16;
        if (-1 < (char)bVar5) {
          puVar11 = puVar16;
        }
        plVar10 = (long *)*(long *)(lVar17 + 0x18);
        if (-1 < (char)bVar6) {
          plVar10 = (long *)(lVar17 + 0x18);
        }
        _memcmp(puVar11,plVar10);
        if ((int)puVar11 == 0) {
          plVar10 = (long *)(lVar18 + 0x230);
          goto LAB_10a89b2c0;
        }
      }
    }
LAB_10a89b350:
    func_0x000107c2b054(&pppuStack_b0,&UNK_10f67d9eb);
    lVar17 = 0;
  }
  else {
    plVar10 = (long *)(lVar17 + 0x28);
    lVar17 = *plVar10;
LAB_10a89b2c0:
    FUN_10a8602bc(&lStack_98,lVar17,plVar10[1]);
    lVar17 = lStack_98;
    if (lStack_98 == 0) goto LAB_10a89b350;
    if (*(char *)(lStack_98 + 0x5f) < '\0') {
      func_0x000107c3192c(&pppuStack_b0,*(undefined8 *)(lStack_98 + 0x48),
                          *(undefined8 *)(lStack_98 + 0x50));
    }
    else {
      lStack_a8 = *(long *)(lStack_98 + 0x50);
      pppuStack_b0 = *(undefined ****)(lStack_98 + 0x48);
      lStack_a0 = *(long *)(lStack_98 + 0x58);
    }
  }
  pppuStack_f8 = pppuStack_168;
  if (pppuStack_168 != (undefined ***)0x0) {
    pppuVar13 = pppuStack_168 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
      if (bVar8) {
        *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lStack_e8 = lStack_a8;
  pppuStack_f0 = pppuStack_b0;
  lStack_e0 = lStack_a0;
  lStack_100 = lVar18;
  if (*(char *)((long)puVar16 + 0x2f) < '\0') {
    func_0x000107c3192c(&pppuStack_d8,puVar16[3],puVar16[4]);
  }
  else {
    lStack_d0 = puVar16[4];
    pppuStack_d8 = (undefined ***)puVar16[3];
    lStack_c8 = puVar16[5];
  }
  lStack_c0 = puVar16[6];
  pppuStack_158 = pppuStack_f8;
  lStack_160 = lStack_100;
  if (pppuStack_f8 != (undefined ***)0x0) {
    pppuVar13 = pppuStack_f8 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
      if (bVar8) {
        *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if (lStack_e0 < 0) {
    func_0x000107c3192c(&pppuStack_150,pppuStack_f0,lStack_e8);
  }
  else {
    lStack_148 = lStack_e8;
    pppuStack_150 = pppuStack_f0;
    lStack_140 = lStack_e0;
  }
  if (lStack_c8 < 0) {
    func_0x000107c3192c(&pppuStack_138,pppuStack_d8,lStack_d0);
  }
  else {
    lStack_130 = lStack_d0;
    pppuStack_138 = pppuStack_d8;
    lStack_128 = lStack_c8;
  }
  lStack_120 = lStack_c0;
  pppuStack_110 = pppuStack_90;
  if (pppuStack_90 != (undefined ***)0x0) {
    pppuVar13 = pppuStack_90 + 1;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
      if (bVar8) {
        *pppuVar13 = (undefined **)((long)*pppuVar13 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  pcStack_88 = FUN_10a89b798;
  ppuStack_80 = &PTR_FUN_110c24c08;
  plVar10 = (long *)0x58;
  lStack_118 = lVar17;
  __Znwm();
  lVar9 = lStack_128;
  pppuVar13 = pppuStack_158;
  lVar17 = lStack_160;
  lStack_160 = 0;
  pppuStack_158 = (undefined ***)0x0;
  plVar10[1] = (long)pppuVar13;
  *plVar10 = lVar17;
  plVar10[3] = lStack_148;
  plVar10[2] = (long)pppuStack_150;
  plVar10[4] = lStack_140;
  pppuStack_150 = (undefined ***)0x0;
  lStack_148 = 0;
  lStack_140 = 0;
  plVar10[6] = lStack_130;
  plVar10[5] = (long)pppuStack_138;
  lStack_130 = 0;
  lStack_128 = 0;
  pppuStack_138 = (undefined ***)0x0;
  plVar10[7] = lVar9;
  plVar10[8] = lStack_120;
  plVar10[10] = (long)pppuStack_110;
  plVar10[9] = lStack_118;
  lStack_118 = 0;
  pppuStack_110 = (undefined ***)0x0;
  plStack_78 = plVar10;
  FUN_10a8693c8(lVar18,&pcStack_88);
  ppuVar12 = (undefined **)&ppuStack_80;
  (*(code *)*ppuStack_80)();
  pppuVar13 = pppuStack_110;
  if (pppuStack_110 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_110 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar8) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_110)[2])(pppuStack_110);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = (undefined **)pppuVar13;
    }
  }
  if (lStack_128 < 0) {
    ppuVar12 = (undefined **)pppuStack_138;
    __ZdlPv();
  }
  if (lStack_140 < 0) {
    ppuVar12 = (undefined **)pppuStack_150;
    __ZdlPv();
  }
  pppuVar13 = pppuStack_158;
  if (pppuStack_158 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_158 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar8) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_158)[2])(pppuStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = (undefined **)pppuVar13;
    }
  }
  if (lStack_c8 < 0) {
    ppuVar12 = (undefined **)pppuStack_d8;
    __ZdlPv();
  }
  if (lStack_e0 < 0) {
    ppuVar12 = (undefined **)pppuStack_f0;
    __ZdlPv();
  }
  pppuVar13 = pppuStack_f8;
  if (pppuStack_f8 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_f8 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar8) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_f8)[2])(pppuStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = (undefined **)pppuVar13;
    }
  }
  pppuVar13 = pppuStack_90;
  if (pppuStack_90 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_90 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar8) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_90)[2])(pppuStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = (undefined **)pppuVar13;
    }
  }
LAB_10a89b23c:
  pppuVar13 = pppuStack_168;
  if (pppuStack_168 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_168 + 1;
    do {
      ppuVar15 = *pppuVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar8) {
        *pppuVar2 = (undefined **)((long)ppuVar15 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_168)[2])(pppuStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar12 = (undefined **)pppuVar13;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (lStack_140 < 0) {
      __ZdlPv(pppuStack_150);
    }
    FUN_10a5ca2e0(&lStack_160);
    func_0x00010a89b758(&lStack_100);
    func_0x00010a5c92ec(&lStack_98);
    FUN_10a5ca2e0(&lStack_170);
    __Unwind_Resume();
    func_0x00010a5c92ec(ppuVar12 + 9);
    if (*(char *)((long)ppuVar12 + 0x3f) < '\0') {
      __ZdlPv(ppuVar12[5]);
    }
    if (*(char *)((long)ppuVar12 + 0x27) < '\0') {
      __ZdlPv(ppuVar12[2]);
    }
    ppuVar15 = (undefined **)ppuVar12[1];
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar1 = ppuVar15 + 1;
      do {
        puVar14 = *ppuVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar8) {
          *ppuVar1 = puVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (puVar14 == (undefined *)0x0) {
        (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
      }
    }
    return (undefined **)(undefined ***)ppuVar12;
  }
  return ppuVar12;
}



/* Entry: 10a89b710; end: 10a89b797;  */

long FUN_10a89b710(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  func_0x00010a5c92ec(param_1 + 0x48);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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



/* Entry: 10a89b798; end: 10a89be63;  */

/* WARNING: Removing unreachable block (ram,0x00010a89ba28) */
/* WARNING: Removing unreachable block (ram,0x00010a89b914) */
/* WARNING: Removing unreachable block (ram,0x00010a89b9a0) */
/* WARNING: Removing unreachable block (ram,0x00010a89baa8) */

void FUN_10a89b798(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 ****ppppuVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 **ppuVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [56];
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined1 auStack_240 [40];
  long lStack_218;
  long *plStack_210;
  undefined8 *puStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  code **ppcStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  long *plStack_1c0;
  undefined8 ***pppuStack_1b8;
  ulong uStack_1b0;
  byte bStack_1a1;
  undefined1 auStack_1a0 [8];
  long lStack_198;
  undefined1 uStack_190;
  long *plStack_188;
  undefined1 uStack_180;
  long *plStack_178;
  undefined1 uStack_170;
  undefined8 **ppuStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 auStack_138 [2];
  long alStack_128 [7];
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined **appuStack_e0 [7];
  undefined6 uStack_a8;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 uStack_a0;
  undefined2 uStack_9f;
  undefined1 uStack_9d;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 auStack_98 [7];
  undefined1 uStack_91;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = *(long **)(param_1 + 0x10);
  lVar10 = plVar15[9];
  if (lVar10 == 0) {
    func_0x000107c2b054(&puStack_150,&UNK_10f67d9eb);
  }
  else if (*(char *)(lVar10 + 0x97) < '\0') {
    if (*(long *)(lVar10 + 0x88) == 0) goto LAB_10a89b824;
    func_0x000107c3192c(&puStack_150,*(undefined8 *)(lVar10 + 0x80));
  }
  else if (*(char *)(lVar10 + 0x97) == '\0') {
LAB_10a89b824:
    if (*(char *)(lVar10 + 0x7f) < '\0') {
      if (*(long *)(lVar10 + 0x70) == 0) goto LAB_10a89b864;
    }
    else if (*(char *)(lVar10 + 0x7f) == '\0') {
LAB_10a89b864:
      func_0x000107c2b054(&puStack_150,&UNK_10f67d9eb);
      goto LAB_10a89b898;
    }
    lVar13 = *plVar15 + 0x268;
    FUN_10a8a78bc(lVar13,lVar10 + 0x68);
    if (lVar13 == 0) {
      func_0x000107c2b054(&puStack_150,&UNK_10f67d9eb);
    }
    else {
      lVar10 = *(long *)(lVar13 + 0x28);
      if (*(char *)(lVar10 + 0x2f) < '\0') {
        func_0x000107c3192c(&puStack_150,*(undefined8 *)(lVar10 + 0x18),
                            *(undefined8 *)(lVar10 + 0x20));
      }
      else {
        uStack_148 = *(undefined8 *)(lVar10 + 0x20);
        puStack_150 = *(undefined8 **)(lVar10 + 0x18);
        lStack_140 = *(long *)(lVar10 + 0x28);
      }
    }
  }
  else {
    uStack_148 = *(undefined8 *)(lVar10 + 0x88);
    puStack_150 = *(undefined8 **)(lVar10 + 0x80);
    lStack_140 = *(long *)(lVar10 + 0x90);
  }
LAB_10a89b898:
  auStack_160[0] = 0;
  uStack_158 = 0;
  ppuStack_168 = (undefined8 **)0x0;
  uStack_170 = 3;
  ppuVar11 = &puStack_150;
  func_0x00010938229c();
  uStack_91 = 8;
  uStack_a8 = 0x7265646e6573;
  uStack_a2 = 0x49;
  uStack_a1 = 100;
  uStack_a0 = 0;
  puVar6 = auStack_160;
  ppuStack_168 = ppuVar11;
  func_0x0001095b7584(puVar6,&uStack_a8);
  uVar2 = *puVar6;
  *puVar6 = uStack_170;
  ppuVar11 = *(undefined8 ***)(puVar6 + 8);
  uStack_170 = uVar2;
  *(undefined8 ***)(puVar6 + 8) = ppuStack_168;
  ppuStack_168 = ppuVar11;
  func_0x000109380ffc(&ppuStack_168,uVar2);
  plStack_178 = (long *)0x0;
  uStack_180 = 3;
  plVar12 = plVar15 + 2;
  func_0x00010938229c();
  uStack_91 = 0xb;
  uStack_a0 = 0x61;
  uStack_9f = 0x656d;
  uStack_a8 = 0x616c70736964;
  uStack_a2 = 0x79;
  uStack_a1 = 0x4e;
  uStack_9d = 0;
  puVar6 = auStack_160;
  plStack_178 = plVar12;
  func_0x0001095b7584(puVar6,&uStack_a8);
  uVar2 = *puVar6;
  *puVar6 = uStack_180;
  plVar12 = *(long **)(puVar6 + 8);
  uStack_180 = uVar2;
  *(long **)(puVar6 + 8) = plStack_178;
  plStack_178 = plVar12;
  func_0x000109380ffc(&plStack_178,uVar2);
  plStack_188 = (long *)0x0;
  uStack_190 = 3;
  plVar12 = plVar15 + 5;
  func_0x00010938229c();
  uStack_91 = 0xe;
  uStack_a8 = 0x67617373656d;
  uStack_a2 = 0x65;
  uStack_a1 = 0x43;
  uStack_a0 = 0x6f;
  uStack_9f = 0x746e;
  uStack_9d = 0x65;
  uStack_9c = 0x746e;
  uStack_9a = 0;
  puVar6 = auStack_160;
  plStack_188 = plVar12;
  func_0x0001095b7584(puVar6,&uStack_a8);
  uVar2 = *puVar6;
  *puVar6 = uStack_190;
  plVar12 = *(long **)(puVar6 + 8);
  uStack_190 = uVar2;
  *(long **)(puVar6 + 8) = plStack_188;
  plStack_188 = plVar12;
  func_0x000109380ffc(&plStack_188,uVar2);
  lStack_198 = plVar15[8];
  auStack_1a0[0] = 5;
  uStack_91 = 0xe;
  uStack_a8 = 0x6954746e6573;
  uStack_a2 = 0x6d;
  uStack_a1 = 0x65;
  uStack_a0 = 0x4d;
  uStack_9f = 0x6c69;
  uStack_9d = 0x6c;
  uStack_9c = 0x7369;
  uStack_9a = 0;
  puVar6 = auStack_160;
  func_0x0001095b7584(puVar6,&uStack_a8);
  uVar2 = *puVar6;
  *puVar6 = auStack_1a0[0];
  lVar10 = *(long *)(puVar6 + 8);
  auStack_1a0[0] = uVar2;
  *(long *)(puVar6 + 8) = lStack_198;
  lStack_198 = lVar10;
  func_0x000109380ffc(&lStack_198,uVar2);
  FUN_10a0c32e4(&pppuStack_1b8,auStack_160,0xffffffff,0x20,0,1);
  lVar10 = *plVar15;
  plVar7 = *(long **)(lVar10 + 0x360);
  plVar12 = (long *)auStack_1a0;
  if ((plVar7 != (long *)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_1c0 = plVar7, plVar7 != (long *)0x0)) {
    puVar14 = *(undefined8 **)(lVar10 + 0x358);
    puStack_1c8 = puVar14;
    if (puVar14 != (undefined8 *)0x0) {
      ppppuVar5 = (undefined8 ****)pppuStack_1b8;
      if (-1 < (char)bStack_1a1) {
        uStack_1b0 = (ulong)bStack_1a1;
        ppppuVar5 = &pppuStack_1b8;
      }
      FUN_10a3bf330(auStack_138,ppppuVar5,uStack_1b0);
      lVar10 = *plVar15;
      plVar12 = (long *)0x138;
      __Znwm();
      uVar16 = auStack_138[0];
      plVar7 = plVar12 + 1;
      *plVar7 = 0;
      plVar12[2] = 0;
      *plVar12 = (long)&PTR_FUN_110b9f3b0;
      plVar15 = plVar12 + 3;
      auStack_138[0] = 0;
      uStack_a8 = (undefined6)uVar16;
      uStack_a2 = (undefined1)((ulong)uVar16 >> 0x30);
      uStack_a1 = (undefined1)((ulong)uVar16 >> 0x38);
      uStack_a0 = (undefined1)auStack_138[1];
      uStack_9f = (undefined2)((ulong)auStack_138[1] >> 8);
      uStack_9d = (undefined1)((ulong)auStack_138[1] >> 0x18);
      uStack_9c = (undefined2)((ulong)auStack_138[1] >> 0x20);
      uStack_9a = (undefined1)((ulong)auStack_138[1] >> 0x30);
      uStack_99 = (undefined1)((ulong)auStack_138[1] >> 0x38);
      (**(code **)(alStack_128[0] + 0x10))(auStack_98,alStack_128);
      uStack_60 = uStack_f0;
      uStack_1e8 = *(ulong *)(lVar10 + 0x208);
      lStack_1f0 = *(long *)(lVar10 + 0x200);
      if (-1 < (char)*(byte *)(lVar10 + 0x217)) {
        uStack_1e8 = (ulong)*(byte *)(lVar10 + 0x217);
        lStack_1f0 = lVar10 + 0x200;
      }
      ppcStack_1e0 = &pcStack_e8;
      pcStack_e8 = FUN_10a89be64;
      appuStack_e0[0] = &PTR_FUN_110c24bf0;
      FUN_10a23708c(plVar15,&UNK_10e4e08a6,0x1e,&UNK_10f647b49,4,&uStack_a8,1);
      (*(code *)*appuStack_e0[0])(appuStack_e0);
      FUN_10a042634(&uStack_a8);
      plStack_1d8 = plVar15;
      plStack_1d0 = plVar12;
      FUN_10a042634(auStack_138);
      uStack_a8 = SUB86(plVar15,0);
      uStack_a2 = (undefined1)((ulong)plVar15 >> 0x30);
      uStack_a1 = (undefined1)((ulong)plVar15 >> 0x38);
      uStack_a0 = SUB81(plVar12,0);
      uStack_9f = (undefined2)((ulong)plVar12 >> 8);
      uStack_9d = (undefined1)((ulong)plVar12 >> 0x18);
      uStack_9c = (undefined2)((ulong)plVar12 >> 0x20);
      uStack_9a = (undefined1)((ulong)plVar12 >> 0x30);
      uStack_99 = (undefined1)((ulong)plVar12 >> 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      (**(code **)*puVar14)(puVar14,&uStack_a8);
      plVar15 = (long *)CONCAT17(uStack_99,
                                 CONCAT16(uStack_9a,
                                          CONCAT24(uStack_9c,
                                                   CONCAT13(uStack_9d,CONCAT21(uStack_9f,uStack_a0))
                                                  )));
      if (plVar15 != (long *)0x0) {
        plVar12 = plVar15 + 1;
        do {
          lVar10 = *plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      plVar15 = plStack_1d0;
      if (plStack_1d0 != (long *)0x0) {
        plVar12 = plStack_1d0 + 1;
        do {
          lVar10 = *plVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_1d0 + 0x10))(plStack_1d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      plVar12 = plStack_1c0;
      if (plStack_1c0 == (long *)0x0) goto LAB_10a89bce0;
    }
    plVar12 = plStack_1c0;
    plVar15 = plStack_1c0 + 1;
    do {
      lVar10 = *plVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
LAB_10a89bce0:
  if ((char)bStack_1a1 < '\0') {
    __ZdlPv(pppuStack_1b8);
  }
  puVar14 = &uStack_158;
  func_0x000109380ffc(puVar14,auStack_160[0]);
  if (lStack_140 < 0) {
    puVar14 = puStack_150;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05bd88(&uStack_a8);
  FUN_10a05bd88(&plStack_1d8);
  func_0x00010a05a8c4(&puStack_1c8);
  if ((char)bStack_1a1 < '\0') {
    __ZdlPv(pppuStack_1b8);
  }
  func_0x000109380ffc(&uStack_158,auStack_160[0]);
  if (lStack_140 < 0) {
    __ZdlPv(puStack_150);
  }
  puVar8 = puVar14;
  __Unwind_Resume();
  pcStack_1f8 = FUN_10a89be64;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *puVar8;
  lVar10 = puVar8[2];
  *puVar8 = 0;
  puVar8[1] = 0;
  uVar17 = puVar8[3];
  puVar8[2] = 0;
  puVar8[3] = 0;
  lVar13 = puVar8[5];
  puVar8[4] = 0;
  puVar8[5] = 0;
  iVar1 = *(int *)(puVar8 + 6);
  uStack_298 = puVar8[7];
  uStack_290 = puVar8[8];
  puVar8[7] = 0;
  plStack_210 = plVar12;
  puStack_208 = puVar14;
  puStack_200 = &stack0xfffffffffffffff0;
  (**(code **)(puVar8[9] + 0x10))(auStack_288,puVar8 + 9);
  uStack_250 = puVar8[0x10];
  uStack_248 = *(undefined4 *)(puVar8 + 0x11);
  FUN_10a0424c4(auStack_240,puVar8 + 0x12);
  if (99 < iVar1 - 200U) {
    ppuVar9 = &PTR_PTR_113303270;
    FUN_10ae079a0(0,&PTR_PTR_113303270);
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_113303270);
  }
  func_0x000104c4f944(auStack_240);
  FUN_10a042634(&uStack_298);
  if (lVar13 < 0) {
    __ZdlPv(uVar17);
  }
  if (lVar10 < 0) {
    __ZdlPv(uVar16);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10a89be64; end: 10a89bf87;  */

void FUN_10a89be64(undefined8 *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [56];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [40];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = *param_1;
  lVar3 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = *(int *)(param_1 + 6);
  uStack_a8 = param_1[7];
  uStack_a0 = param_1[8];
  param_1[7] = 0;
  (**(code **)(param_1[9] + 0x10))(auStack_98,param_1 + 9);
  uStack_60 = param_1[0x10];
  uStack_58 = *(undefined4 *)(param_1 + 0x11);
  FUN_10a0424c4(auStack_50,param_1 + 0x12);
  if (99 < iVar1 - 200U) {
    ppuVar2 = &PTR_PTR_113303270;
    FUN_10ae079a0(0,&PTR_PTR_113303270);
    FUN_10ae07cd4(ppuVar2,&PTR_PTR_113303270);
  }
  func_0x000104c4f944(auStack_50);
  FUN_10a042634(&uStack_a8);
  if (lVar4 < 0) {
    __ZdlPv(uVar6);
  }
  if (lVar3 < 0) {
    __ZdlPv(uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10a89bf88; end: 10a89bf9b;  */

void FUN_10a89bf88(void)

{
  return;
}



/* Entry: 10a89bf9c; end: 10a89bff7;  */

void FUN_10a89bf9c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010a5c92ec(lVar1 + 0x48);
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(char *)(lVar1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    FUN_10a5ca2e0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a89bff8; end: 10a89c00f;  */

void FUN_10a89bff8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89c010; end: 10a89c05f;  */

void FUN_10a89c010(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(char *)((long)puVar1 + 0x2f) < '\0') {
      __ZdlPv(puVar1[3]);
    }
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a89c060; end: 10a89c077;  */

void FUN_10a89c060(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89c078; end: 10a89c197;  */

void FUN_10a89c078(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar5 = *param_1;
  plVar2 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = *(long *)(lVar5 + 0x350);
  func_0x000107c2b054(auStack_48,&UNK_10f67f67d);
  if (*(char *)(param_2 + 0x27) < '\0') {
    func_0x000107c3192c(&uStack_60,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  }
  else {
    uStack_58 = *(undefined8 *)(param_2 + 0x18);
    uStack_60 = *(undefined8 *)(param_2 + 0x10);
    lStack_50 = *(long *)(param_2 + 0x20);
  }
  if (lVar5 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar5 + 0x8d8),auStack_48,&uStack_60);
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a89c198; end: 10a89c1d3;  */

void FUN_10a89c198(long param_1)

{
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a89c1d4; end: 10a89c3a3;  */

void FUN_10a89c1d4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 ***pppuVar8;
  long lVar9;
  undefined8 **appuStack_88 [2];
  char cStack_71;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  lVar9 = *param_1;
  plVar4 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar9 = *(long *)(lVar9 + 0x350);
  func_0x000107c2b054(auStack_58,&UNK_10f67f6a4);
  uVar3 = *(ulong *)(param_2 + 0x18);
  if (-1 < (char)*(byte *)(param_2 + 0x27)) {
    uVar3 = (ulong)*(byte *)(param_2 + 0x27);
  }
  FUN_10a003c90(appuStack_88,uVar3 + 2,&puStack_70);
  pppuVar8 = (undefined8 ***)appuStack_88[0];
  if (-1 < cStack_71) {
    pppuVar8 = appuStack_88;
  }
  if (uVar3 != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
    if (-1 < *(char *)(param_2 + 0x27)) {
      lVar2 = param_2 + 0x10;
    }
    _memmove(pppuVar8,lVar2,uVar3);
  }
  *(undefined2 *)((long)pppuVar8 + uVar3) = 0x203a;
  *(undefined1 *)((undefined2 *)((long)pppuVar8 + uVar3) + 1) = 0;
  uVar3 = *(ulong *)(param_2 + 0x30);
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if (-1 < (char)*(byte *)(param_2 + 0x3f)) {
    uVar3 = (ulong)*(byte *)(param_2 + 0x3f);
    puVar7 = (undefined8 *)(param_2 + 0x28);
  }
  pppuVar8 = appuStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar8,puVar7,uVar3);
  puStack_68 = pppuVar8[1];
  puStack_70 = *pppuVar8;
  puStack_60 = pppuVar8[2];
  pppuVar8[1] = (undefined8 **)0x0;
  pppuVar8[2] = (undefined8 **)0x0;
  *pppuVar8 = (undefined8 **)0x0;
  if (lVar9 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar9 + 0x8d8),auStack_58,&puStack_70);
  }
  if ((long)puStack_60 < 0) {
    __ZdlPv(puStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(appuStack_88[0]);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a89c3a4; end: 10a89c3e7;  */

void FUN_10a89c3a4(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (-1 < *(char *)(param_1 + 0x1f)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10a89c3e8; end: 10a89c427;  */

void FUN_10a89c3e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110c24c50;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



/* Entry: 10a89c428; end: 10a89c597;  */

void FUN_10a89c428(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined1 auStack_50 [8];
  long lStack_48;
  long *plStack_40;
  char cStack_38;
  
  puVar6 = *(undefined4 **)(param_2 + 0x10);
  plVar7 = (long *)param_1[1];
  lVar5 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10a89c598(auStack_50,*(undefined8 *)(lVar5 + 0x3a8),*puVar6);
  plVar2 = plStack_40;
  if (cStack_38 == '\x01') {
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lStack_48 != 0) {
      FUN_10a7576b4(lStack_48,puVar6 + 2,puVar6 + 8);
    }
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
  }
  if ((cStack_38 == '\x01') && (plStack_40 != (long *)0x0)) {
    plVar2 = plStack_40 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a89c598; end: 10a89c723;  */

void FUN_10a89c598(undefined4 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  lVar7 = param_2;
  FUN_10a89c724(param_2,param_3);
  if (lVar7 != 0) {
    FUN_10a89c7c4(param_2,lVar7);
  }
  lVar7 = param_2 + 0x28;
  FUN_10a89c8f4(lVar7,param_3);
  if (lVar7 != 0) {
    FUN_10a89c994(param_2 + 0x28,lVar7);
  }
  lVar7 = param_2 + 0x50;
  FUN_10a89cac4(lVar7,param_3);
  if (lVar7 != 0) {
    FUN_10a89cb64(param_2 + 0x50,lVar7);
  }
  lVar7 = param_2 + 0x78;
  FUN_10a89cc94(lVar7,param_3);
  if (lVar7 != 0) {
    FUN_10a89cd34(param_2 + 0x78,lVar7);
  }
  func_0x00010a89ce64(param_2 + 0xa0,param_3);
  func_0x00010a89ce64(param_2 + 200,param_3);
  lVar7 = param_2 + 0xf0;
  FUN_10a89d06c(lVar7,param_3);
  if (lVar7 != 0) {
    FUN_10a89d10c(param_2 + 0xf0,lVar7);
  }
  func_0x00010a89ce64(param_2 + 0x118,param_3);
  lVar7 = param_2 + 0x168;
  FUN_10a89d23c(lVar7,param_3);
  if (lVar7 != 0) {
    FUN_10a89d2dc(param_2 + 0x168,lVar7);
  }
  plVar5 = (long *)(param_2 + 0x140);
  FUN_10a89d40c(plVar5,param_3);
  if (plVar5 == (long *)0x0) {
    func_0x00010ae02ecc();
    ppuVar6 = &PTR_PTR_113303340;
    FUN_10ae079a0();
    func_0x00010ae02edc();
    FUN_10ae07cd4(ppuVar6,&PTR_PTR_113303340);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
  *param_1 = (int)plVar5[3];
  lVar7 = plVar5[5];
  lVar11 = plVar5[4];
  *(long *)(param_1 + 4) = plVar5[5];
  *(long *)(param_1 + 2) = lVar11;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 6) = 1;
  uVar9 = *(ulong *)(param_2 + 0x148);
  lVar7 = *plVar5;
  uVar8 = plVar5[1];
  uVar10 = uVar9 - 1;
  if ((uVar9 & uVar10) == 0) {
    uVar8 = uVar10 & uVar8;
  }
  else if (uVar9 <= uVar8) {
    uVar13 = 0;
    if (uVar9 != 0) {
      uVar13 = uVar8 / uVar9;
    }
    uVar8 = uVar8 - uVar13 * uVar9;
  }
  lVar11 = *(long *)(param_2 + 0x140);
  plVar1 = *(long **)(lVar11 + uVar8 * 8);
  do {
    plVar12 = plVar1;
    plVar1 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar5);
  if (plVar12 == (long *)(param_2 + 0x150)) {
LAB_10a89d538:
    if (lVar7 == 0) {
LAB_10a89d568:
      *(undefined8 *)(lVar11 + uVar8 * 8) = 0;
      lVar7 = *plVar5;
      goto LAB_10a89d570;
    }
    uVar13 = *(ulong *)(lVar7 + 8);
    if ((uVar9 & uVar10) == 0) {
      uVar13 = uVar13 & uVar10;
    }
    else if (uVar9 <= uVar13) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar4 * uVar9;
    }
    if (uVar13 != uVar8) goto LAB_10a89d568;
  }
  else {
    uVar13 = plVar12[1];
    if ((uVar9 & uVar10) == 0) {
      uVar13 = uVar13 & uVar10;
    }
    else if (uVar9 <= uVar13) {
      uVar4 = 0;
      if (uVar9 != 0) {
        uVar4 = uVar13 / uVar9;
      }
      uVar13 = uVar13 - uVar4 * uVar9;
    }
    if (uVar13 != uVar8) goto LAB_10a89d538;
LAB_10a89d570:
    if (lVar7 == 0) goto LAB_10a89d5ac;
  }
  uVar13 = *(ulong *)(lVar7 + 8);
  if ((uVar9 & uVar10) == 0) {
    uVar13 = uVar13 & uVar10;
  }
  else if (uVar9 <= uVar13) {
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = uVar13 / uVar9;
    }
    uVar13 = uVar13 - uVar10 * uVar9;
  }
  if (uVar13 != uVar8) {
    *(long **)(*(long *)(param_2 + 0x140) + uVar13 * 8) = plVar12;
    lVar7 = *plVar5;
  }
LAB_10a89d5ac:
  *plVar12 = lVar7;
  *plVar5 = 0;
  *(long *)(param_2 + 0x158) = *(long *)(param_2 + 0x158) + -1;
  FUN_10a0803a0(plVar5 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar5);
  return;
}



/* Entry: 10a89c724; end: 10a89c7c3;  */

long * FUN_10a89c724(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89c7c4; end: 10a89c8f3;  */

void FUN_10a89c7c4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89c850:
    if (lVar3 == 0) {
LAB_10a89c880:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89c888;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89c880;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89c850;
LAB_10a89c888:
    if (lVar3 == 0) goto LAB_10a89c8c4;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89c8c4:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a87f948(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89c8f4; end: 10a89c993;  */

long * FUN_10a89c8f4(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89c994; end: 10a89cac3;  */

void FUN_10a89c994(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89ca20:
    if (lVar3 == 0) {
LAB_10a89ca50:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89ca58;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89ca50;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89ca20;
LAB_10a89ca58:
    if (lVar3 == 0) goto LAB_10a89ca94;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89ca94:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a87f9dc(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89cac4; end: 10a89cb63;  */

long * FUN_10a89cac4(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89cb64; end: 10a89cc93;  */

void FUN_10a89cb64(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89cbf0:
    if (lVar3 == 0) {
LAB_10a89cc20:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89cc28;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89cc20;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89cbf0;
LAB_10a89cc28:
    if (lVar3 == 0) goto LAB_10a89cc64;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89cc64:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a87fa70(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89cc94; end: 10a89cd33;  */

long * FUN_10a89cc94(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89cd34; end: 10a89ce9b;  */

void FUN_10a89cd34(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89cdc0:
    if (lVar3 == 0) {
LAB_10a89cdf0:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89cdf8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89cdf0;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89cdc0;
LAB_10a89cdf8:
    if (lVar3 == 0) goto LAB_10a89ce34;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89ce34:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a87fb04(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89ce9c; end: 10a89cf3b;  */

long * FUN_10a89ce9c(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89cf3c; end: 10a89d06b;  */

void FUN_10a89cf3c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89cfc8:
    if (lVar3 == 0) {
LAB_10a89cff8:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89d000;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89cff8;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89cfc8;
LAB_10a89d000:
    if (lVar3 == 0) goto LAB_10a89d03c;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89d03c:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a880000(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89d06c; end: 10a89d10b;  */

long * FUN_10a89d06c(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89d10c; end: 10a89d23b;  */

void FUN_10a89d10c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89d198:
    if (lVar3 == 0) {
LAB_10a89d1c8:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89d1d0;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89d1c8;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89d198;
LAB_10a89d1d0:
    if (lVar3 == 0) goto LAB_10a89d20c;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89d20c:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a880094(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89d23c; end: 10a89d2db;  */

long * FUN_10a89d23c(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89d2dc; end: 10a89d40b;  */

void FUN_10a89d2dc(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89d368:
    if (lVar3 == 0) {
LAB_10a89d398:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89d3a0;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89d398;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89d368;
LAB_10a89d3a0:
    if (lVar3 == 0) goto LAB_10a89d3dc;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89d3dc:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  func_0x00010a87f4b4(param_2 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89d40c; end: 10a89d4ab;  */

long * FUN_10a89d40c(long *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(int *)(plVar6 + 2) == param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a89d4ac; end: 10a89d62b;  */

void FUN_10a89d4ac(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = param_1[1];
  lVar3 = *param_2;
  uVar4 = param_2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar2 = *(long **)(*param_1 + uVar4 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_2);
  if (plVar7 == param_1 + 2) {
LAB_10a89d538:
    if (lVar3 == 0) {
LAB_10a89d568:
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      lVar3 = *param_2;
      goto LAB_10a89d570;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89d568;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar1 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10a89d538;
LAB_10a89d570:
    if (lVar3 == 0) goto LAB_10a89d5ac;
  }
  uVar8 = *(ulong *)(lVar3 + 8);
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*param_1 + uVar8 * 8) = plVar7;
    lVar3 = *param_2;
  }
LAB_10a89d5ac:
  *plVar7 = lVar3;
  *param_2 = 0;
  param_1[3] = param_1[3] + -1;
  FUN_10a0803a0(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10a89d62c; end: 10a89d643;  */

void FUN_10a89d62c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89d644; end: 10a89d683;  */

void FUN_10a89d644(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a89d684; end: 10a89d963;  */

void FUN_10a89d684(long *param_1,long param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  code **ppcVar11;
  undefined8 *puVar12;
  code **ppcVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined4 *puVar17;
  code **ppcVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined4 uVar21;
  code *pcVar22;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long *plStack_258;
  byte bStack_250;
  code **ppcStack_240;
  code **ppcStack_238;
  undefined8 uStack_230;
  code **ppcStack_228;
  undefined4 *puStack_220;
  undefined ***pppuStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined ***pppuStack_1f8;
  undefined4 auStack_1f0 [2];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined ***pppuStack_1b8;
  long lStack_198;
  undefined8 uStack_190;
  code **ppcStack_188;
  undefined4 *puStack_180;
  undefined ***pppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  code **ppcStack_160;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined ***apppuStack_138 [2];
  char cStack_121;
  long lStack_120;
  undefined ***pppuStack_118;
  undefined4 uStack_110;
  long lStack_108;
  undefined ***pppuStack_100;
  undefined4 uStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined ***pppuStack_d8;
  undefined4 uStack_d0;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long lStack_a0;
  undefined ***pppuStack_98;
  undefined4 uStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar18 = *(code ***)(param_2 + 0x10);
  lVar16 = *param_1;
  pppuVar8 = (undefined ***)param_1[1];
  if (pppuVar8 == (undefined ***)0x0) {
    uStack_f8 = *(undefined4 *)ppcVar18;
    pppuStack_118 = (undefined ***)0x0;
    lVar14 = lVar16;
  }
  else {
    pppuVar9 = pppuVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
      if (bVar5) {
        *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lStack_120 = *param_1;
    pppuStack_118 = (undefined ***)param_1[1];
    uStack_f8 = *(undefined4 *)ppcVar18;
    lVar14 = lStack_120;
    if (pppuStack_118 != (undefined ***)0x0) {
      pppuVar9 = pppuStack_118 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar9,0x10);
        if (bVar5) {
          *pppuVar9 = (undefined **)((long)*pppuVar9 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      uVar19 = 0;
      lVar14 = *param_1;
      uVar21 = *(undefined4 *)ppcVar18;
      goto LAB_10a89d73c;
    }
  }
  uVar19 = 1;
  uVar21 = uStack_f8;
  lStack_120 = lVar14;
LAB_10a89d73c:
  uVar7 = uStack_f8;
  pppuVar9 = pppuStack_118;
  lVar6 = lStack_120;
  puVar17 = *(undefined4 **)(*(long *)(lVar14 + 0x350) + 0x888);
  pcVar22 = ppcVar18[3];
  uStack_110 = uVar21;
  lStack_108 = lVar16;
  pppuStack_100 = pppuVar8;
  func_0x000107c2b054(apppuStack_138,&UNK_10f67d9eb);
  pcStack_b0 = FUN_10a89d964;
  ppuStack_a8 = &PTR_DAT_110c24c98;
  if (pppuVar8 != (undefined ***)0x0) {
    pppuVar1 = pppuVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcStack_f0 = FUN_10a89dd38;
  ppuStack_e8 = &PTR_FUN_110c24cb0;
  if ((int)uVar19 == 0) {
    pppuVar1 = pppuVar9 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lStack_e0 = lVar6;
  pppuStack_d8 = pppuVar9;
  uStack_d0 = uVar21;
  lStack_a0 = lVar16;
  pppuStack_98 = pppuVar8;
  uStack_90 = uVar7;
  func_0x000107c2b054(auStack_150,&UNK_10f67d9eb);
  ppcStack_160 = ppcVar18 + 8;
  ppcVar11 = (code **)((ulong)pcVar22 & 0xfffffffffffffffc);
  ppcVar13 = ppcVar18 + 5;
  puVar12 = (undefined8 *)0x5;
  FUN_10a76e644(puVar17);
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  pppuVar8 = &ppuStack_a8;
  (*(code *)*ppuStack_a8)();
  if (cStack_121 < '\0') {
    pppuVar8 = apppuStack_138[0];
    __ZdlPv();
  }
  if ((int)uVar19 == 0) {
    pppuVar1 = pppuVar9 + 1;
    do {
      ppuVar15 = *pppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)ppuVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuVar9)[2])(pppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuVar9;
    }
  }
  pppuVar9 = pppuStack_100;
  if (pppuStack_100 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_100 + 1;
    do {
      ppuVar15 = *pppuVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)ppuVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_100)[2])(pppuStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_139 < '\0') {
    __ZdlPv(auStack_150[0]);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  if (cStack_121 < '\0') {
    __ZdlPv(apppuStack_138[0]);
  }
  FUN_10a5ca2e0(&lStack_120);
  FUN_10a5ca2e0(&lStack_108);
  __Unwind_Resume(pppuVar8);
  pcStack_168 = FUN_10a89d964;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_200 = *puVar12;
  pppuVar9 = (undefined ***)puVar12[1];
  *puVar12 = 0;
  puVar12[1] = 0;
  pppuStack_218 = (undefined ***)0x0;
  pppuStack_1f8 = pppuVar9;
  uStack_190 = uVar19;
  ppcStack_188 = ppcVar18;
  puStack_180 = puVar17;
  pppuStack_178 = pppuVar8;
  puStack_170 = &stack0xfffffffffffffff0;
  if (ppcVar13[2] != (code *)0x0) {
    auStack_1f0[0] = *(undefined4 *)(ppcVar13 + 4);
    puVar17 = auStack_1f0;
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar8 = pppuVar9 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar5) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    pcStack_1d8 = FUN_10a89da8c;
    ppuStack_1d0 = &PTR_FUN_110c24c80;
    ppcVar18 = &pcStack_1d8;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    ppcVar11 = &pcStack_1d8;
    uStack_1c8 = auStack_1f0[0];
    uStack_1c0 = uStack_200;
    pppuStack_1b8 = pppuVar9;
    FUN_10a860860();
    pppuStack_218 = &ppuStack_1d0;
    (*(code *)*ppuStack_1d0)();
  }
  if (pppuVar9 != (undefined ***)0x0) {
    pppuVar8 = pppuVar9 + 1;
    do {
      ppuVar15 = *pppuVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar5) {
        *pppuVar8 = (undefined **)((long)ppuVar15 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuVar9)[2])(pppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuStack_218 = pppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_1d0)(ppcVar18 + 1);
    func_0x00010a0536d4(puVar17 + 2);
    func_0x00010a0536d4(&uStack_200);
    pppuVar8 = pppuStack_218;
    __Unwind_Resume();
    pcStack_208 = FUN_10a89da8c;
    puVar20 = (*pppuVar8)[0x75];
    uVar21 = *(undefined4 *)(ppcVar11 + 2);
    puVar10 = puVar20 + 0xf0;
    ppcStack_240 = &pcStack_f0;
    ppcStack_238 = &pcStack_b0;
    uStack_230 = uVar19;
    ppcStack_228 = ppcVar18;
    puStack_220 = puVar17;
    ppuStack_210 = &puStack_170;
    FUN_10a89d06c(puVar10,uVar21);
    if (puVar10 == (undefined *)0x0) {
      uStack_290 = uStack_290 & 0xffffffffffffff00;
      bStack_250 = 0;
    }
    else {
      if ((char)puVar10[0x2f] < '\0') {
        func_0x000107c3192c(&uStack_290,*(undefined8 *)(puVar10 + 0x18),
                            *(undefined8 *)(puVar10 + 0x20));
      }
      else {
        uStack_288 = *(undefined8 *)(puVar10 + 0x20);
        uStack_290 = *(ulong *)(puVar10 + 0x18);
        uStack_280 = *(undefined8 *)(puVar10 + 0x28);
      }
      if ((char)puVar10[0x47] < '\0') {
        func_0x000107c3192c(&uStack_278,*(undefined8 *)(puVar10 + 0x30),
                            *(undefined8 *)(puVar10 + 0x38));
      }
      else {
        uStack_270 = *(undefined8 *)(puVar10 + 0x38);
        uStack_278 = *(undefined8 *)(puVar10 + 0x30);
        uStack_268 = *(undefined8 *)(puVar10 + 0x40);
      }
      plStack_258 = *(long **)(puVar10 + 0x50);
      lStack_260 = *(long *)(puVar10 + 0x48);
      if (*(long *)(puVar10 + 0x50) != 0) {
        plVar2 = (long *)(*(long *)(puVar10 + 0x50) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      bStack_250 = 1;
      FUN_10a89d10c(puVar20 + 0xf0,puVar10);
      FUN_10a89dc3c(puVar20 + 0x140,uVar21);
      plVar2 = plStack_258;
      if ((bStack_250 & 1) != 0) {
        if (plStack_258 != (long *)0x0) {
          plVar3 = plStack_258 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = *plVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((bStack_250 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x10a89dc08);
            (*pcVar22)();
          }
        }
        if (lStack_260 != 0) {
          FUN_10a7a0854(lStack_260,&uStack_290,&uStack_278,ppcVar11 + 3);
        }
        if (plVar2 != (long *)0x0) {
          plVar3 = plVar2 + 1;
          do {
            lVar16 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
      }
    }
    func_0x00010a89dc74(&uStack_290);
    return;
  }
  return;
}



/* Entry: 10a89d964; end: 10a89da8b;  */

void FUN_10a89d964(undefined8 param_1,code **param_2,undefined8 *param_3,long param_4)

{
  undefined ***pppuVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined4 *unaff_x20;
  code **unaff_x21;
  undefined *puVar13;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  byte bStack_f0;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined ***pppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = *param_3;
  pppuVar9 = (undefined ***)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  pppuVar8 = (undefined ***)0x0;
  pppuStack_98 = pppuVar9;
  if (*(long *)(param_4 + 0x10) != 0) {
    auStack_90[0] = *(undefined4 *)(param_4 + 0x20);
    unaff_x20 = auStack_90;
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar8 = pppuVar9 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar6) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pcStack_78 = FUN_10a89da8c;
    ppuStack_70 = &PTR_FUN_110c24c80;
    unaff_x21 = &pcStack_78;
    uStack_88 = 0;
    uStack_80 = 0;
    param_2 = &pcStack_78;
    uStack_68 = auStack_90[0];
    uStack_60 = uStack_a0;
    pppuStack_58 = pppuVar9;
    FUN_10a860860();
    pppuVar8 = &ppuStack_70;
    (*(code *)*ppuStack_70)();
  }
  if (pppuVar9 != (undefined ***)0x0) {
    pppuVar1 = pppuVar9 + 1;
    do {
      ppuVar11 = *pppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar6) {
        *pppuVar1 = (undefined **)((long)ppuVar11 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppuVar11 == (undefined **)0x0) {
      (*(code *)(*pppuVar9)[2])(pppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuVar9;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  func_0x00010a0536d4(unaff_x20 + 2);
  func_0x00010a0536d4(&uStack_a0);
  __Unwind_Resume();
  puVar13 = (*pppuVar8)[0x75];
  uVar4 = *(undefined4 *)(param_2 + 2);
  puVar10 = puVar13 + 0xf0;
  FUN_10a89d06c(puVar10,uVar4);
  if (puVar10 == (undefined *)0x0) {
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    bStack_f0 = 0;
  }
  else {
    if ((char)puVar10[0x2f] < '\0') {
      func_0x000107c3192c(&uStack_130,*(undefined8 *)(puVar10 + 0x18),
                          *(undefined8 *)(puVar10 + 0x20));
    }
    else {
      uStack_128 = *(undefined8 *)(puVar10 + 0x20);
      uStack_130 = *(ulong *)(puVar10 + 0x18);
      uStack_120 = *(undefined8 *)(puVar10 + 0x28);
    }
    if ((char)puVar10[0x47] < '\0') {
      func_0x000107c3192c(&uStack_118,*(undefined8 *)(puVar10 + 0x30),
                          *(undefined8 *)(puVar10 + 0x38));
    }
    else {
      uStack_110 = *(undefined8 *)(puVar10 + 0x38);
      uStack_118 = *(undefined8 *)(puVar10 + 0x30);
      uStack_108 = *(undefined8 *)(puVar10 + 0x40);
    }
    plStack_f8 = *(long **)(puVar10 + 0x50);
    lStack_100 = *(long *)(puVar10 + 0x48);
    if (*(long *)(puVar10 + 0x50) != 0) {
      plVar2 = (long *)(*(long *)(puVar10 + 0x50) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    bStack_f0 = 1;
    FUN_10a89d10c(puVar13 + 0xf0,puVar10);
    FUN_10a89dc3c(puVar13 + 0x140,uVar4);
    plVar2 = plStack_f8;
    if ((bStack_f0 & 1) != 0) {
      if (plStack_f8 != (long *)0x0) {
        plVar3 = plStack_f8 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = *plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((bStack_f0 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a89dc08);
          (*pcVar7)();
        }
      }
      if (lStack_100 != 0) {
        FUN_10a7a0854(lStack_100,&uStack_130,&uStack_118,param_2 + 3);
      }
      if (plVar2 != (long *)0x0) {
        plVar3 = plVar2 + 1;
        do {
          lVar12 = *plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
        }
      }
    }
  }
  func_0x00010a89dc74(&uStack_130);
  return;
}



/* Entry: 10a89da8c; end: 10a89dc3b;  */

void FUN_10a89da8c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  byte bStack_50;
  
  lVar8 = *(long *)(*param_1 + 0x3a8);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  lVar7 = lVar8 + 0xf0;
  FUN_10a89d06c(lVar7,uVar3);
  if (lVar7 == 0) {
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    bStack_50 = 0;
  }
  else {
    if (*(char *)(lVar7 + 0x2f) < '\0') {
      func_0x000107c3192c(&uStack_90,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20));
    }
    else {
      uStack_88 = *(undefined8 *)(lVar7 + 0x20);
      uStack_90 = *(ulong *)(lVar7 + 0x18);
      uStack_80 = *(undefined8 *)(lVar7 + 0x28);
    }
    if (*(char *)(lVar7 + 0x47) < '\0') {
      func_0x000107c3192c(&uStack_78,*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38));
    }
    else {
      uStack_70 = *(undefined8 *)(lVar7 + 0x38);
      uStack_78 = *(undefined8 *)(lVar7 + 0x30);
      uStack_68 = *(undefined8 *)(lVar7 + 0x40);
    }
    plStack_58 = *(long **)(lVar7 + 0x50);
    lStack_60 = *(long *)(lVar7 + 0x48);
    if (*(long *)(lVar7 + 0x50) != 0) {
      plVar1 = (long *)(*(long *)(lVar7 + 0x50) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    bStack_50 = 1;
    FUN_10a89d10c(lVar8 + 0xf0,lVar7);
    FUN_10a89dc3c(lVar8 + 0x140,uVar3);
    plVar1 = plStack_58;
    if ((bStack_50 & 1) != 0) {
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((bStack_50 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a89dc08);
          (*pcVar6)();
        }
      }
      if (lStack_60 != 0) {
        FUN_10a7a0854(lStack_60,&uStack_90,&uStack_78,param_2 + 0x18);
      }
      if (plVar1 != (long *)0x0) {
        plVar2 = plVar1 + 1;
        do {
          lVar7 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
  }
  func_0x00010a89dc74(&uStack_90);
  return;
}



/* Entry: 10a89dc3c; end: 10a89dcc7;  */

void FUN_10a89dc3c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar3 = param_1;
  FUN_10a89d40c();
  if (plVar3 == (long *)0x0) {
    return;
  }
  uVar6 = param_1[1];
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar7 = uVar6 - 1;
  if ((uVar6 & uVar7) == 0) {
    uVar5 = uVar7 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar9 * uVar6;
  }
  plVar2 = *(long **)(*param_1 + uVar5 * 8);
  do {
    plVar8 = plVar2;
    plVar2 = (long *)*plVar8;
  } while ((long *)*plVar8 != plVar3);
  if (plVar8 == param_1 + 2) {
LAB_10a89d538:
    if (lVar4 == 0) {
LAB_10a89d568:
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_10a89d570;
    }
    uVar9 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar1 * uVar6;
    }
    if (uVar9 != uVar5) goto LAB_10a89d568;
  }
  else {
    uVar9 = plVar8[1];
    if ((uVar6 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar1 * uVar6;
    }
    if (uVar9 != uVar5) goto LAB_10a89d538;
LAB_10a89d570:
    if (lVar4 == 0) goto LAB_10a89d5ac;
  }
  uVar9 = *(ulong *)(lVar4 + 8);
  if ((uVar6 & uVar7) == 0) {
    uVar9 = uVar9 & uVar7;
  }
  else if (uVar6 <= uVar9) {
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = uVar9 / uVar6;
    }
    uVar9 = uVar9 - uVar7 * uVar6;
  }
  if (uVar9 != uVar5) {
    *(long **)(*param_1 + uVar9 * 8) = plVar8;
    lVar4 = *plVar3;
  }
LAB_10a89d5ac:
  *plVar8 = lVar4;
  *plVar3 = 0;
  param_1[3] = param_1[3] + -1;
  FUN_10a0803a0(plVar3 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar3);
  return;
}



/* Entry: 10a89dcc8; end: 10a89dd37;  */

long FUN_10a89dcc8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x18);
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
  return param_1 + 0x10;
}



/* Entry: 10a89dd38; end: 10a89ddf7;  */

void FUN_10a89dd38(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  char cStack_29;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x20);
    cStack_29 = '\x10';
    uStack_38 = 0x64656c6961466863;
    uStack_40 = 0x7465467465737341;
    uStack_30 = 0;
    func_0x000107c2b054(auStack_58,&UNK_10f67f6c6);
    FUN_10a866b64(lVar2,uVar1,&uStack_40,auStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    if (cStack_29 < '\0') {
      __ZdlPv(uStack_40);
    }
  }
  return;
}



/* Entry: 10a89ddf8; end: 10a89de3b;  */

long FUN_10a89ddf8(long param_1)

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



/* Entry: 10a89de3c; end: 10a89de93;  */

void FUN_10a89de3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x57) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x40));
    }
    if (*(char *)(lVar1 + 0x3f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x28));
    }
    func_0x0001098d14dc(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a89de94; end: 10a89deab;  */

void FUN_10a89de94(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89deac; end: 10a89e4ab;  */

void FUN_10a89deac(long *param_1,long param_2,code **param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code *pcVar8;
  code *pcVar9;
  code **ppcVar10;
  long lVar11;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code **unaff_x22;
  uint *puVar15;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  int aiStack_250 [2];
  undefined8 *puStack_248;
  undefined4 auStack_240 [2];
  undefined1 auStack_238 [8];
  int aiStack_230 [2];
  long lStack_228;
  undefined8 **ppuStack_220;
  code *pcStack_218;
  undefined1 *puStack_210;
  undefined4 **ppuStack_208;
  undefined4 *puStack_200;
  undefined8 uStack_1f8;
  code **ppcStack_1f0;
  code **ppcStack_1e8;
  code **ppcStack_1e0;
  code **ppcStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  code **ppcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code **ppcStack_180;
  code *pcStack_178;
  byte bStack_170;
  code *pcStack_160;
  code *pcStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  code *pcStack_138;
  code *pcStack_130;
  code **ppcStack_128;
  byte bStack_120;
  code **ppcStack_118;
  code *pcStack_110;
  code **ppcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *apcStack_e8 [8];
  byte bStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  code **ppcStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = *(uint **)(param_2 + 0x10);
  ppcVar12 = *(code ***)(*param_1 + 0x3a8);
  ppcVar13 = (code **)(ulong)*puVar15;
  ppcVar6 = ppcVar12;
  FUN_10a89c724(ppcVar12,ppcVar13);
  if (ppcVar6 == (code **)0x0) {
    pcStack_160 = (code *)((ulong)pcStack_160 & 0xffffffffffffff00);
    bStack_120 = 0;
    ppcVar6 = unaff_x22;
  }
  else {
    if (*(char *)((long)ppcVar6 + 0x2f) < '\0') {
      param_3 = (code **)ppcVar6[4];
      func_0x000107c3192c(&pcStack_160,ppcVar6[3],param_3);
    }
    else {
      pcStack_158 = ppcVar6[4];
      pcStack_160 = ppcVar6[3];
      pcStack_150 = ppcVar6[5];
    }
    if (*(char *)((long)ppcVar6 + 0x47) < '\0') {
      param_3 = (code **)ppcVar6[7];
      func_0x000107c3192c(&pcStack_148,ppcVar6[6],param_3);
    }
    else {
      pcStack_140 = ppcVar6[7];
      pcStack_148 = ppcVar6[6];
      pcStack_138 = ppcVar6[8];
    }
    ppcStack_128 = (code **)ppcVar6[10];
    pcStack_130 = ppcVar6[9];
    if (ppcVar6[10] != (code *)0x0) {
      pcVar8 = ppcVar6[10] + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar3) {
          *(long *)pcVar8 = *(long *)pcVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_120 = 1;
    FUN_10a89c7c4(ppcVar12,ppcVar6);
    ppcVar7 = ppcVar13;
    FUN_10a89dc3c(ppcVar12 + 0x28);
    ppcVar5 = ppcStack_128;
    if ((bStack_120 & 1) != 0) {
      pcStack_110 = pcStack_130;
      ppcStack_108 = ppcStack_128;
      if (ppcStack_128 != (code **)0x0) {
        ppcVar10 = ppcStack_128 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
          if (bVar3) {
            *ppcVar10 = *ppcVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((bStack_120 & 1) == 0) goto LAB_10a89e398;
      }
      if (pcStack_130 != (code *)0x0) {
        ppcVar7 = &pcStack_160;
        param_3 = &pcStack_148;
        FUN_10a89a9c8(pcStack_130,ppcVar7,param_3,puVar15 + 2);
      }
      if (ppcVar5 != (code **)0x0) {
        ppcVar10 = ppcVar5 + 1;
        do {
          pcVar8 = *ppcVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
          if (bVar3) {
            *ppcVar10 = pcVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pcVar8 == (code *)0x0) {
          (**(code **)(*ppcVar5 + 0x10))(ppcVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar5);
        }
      }
      goto LAB_10a89e1c4;
    }
  }
  ppcVar13 = *(code ***)(*param_1 + 0x3a8);
  ppcVar10 = (code **)(ulong)*puVar15;
  ppcVar5 = ppcVar13 + 5;
  ppcVar7 = ppcVar10;
  FUN_10a89c8f4();
  if (ppcVar5 == (code **)0x0) {
    pcStack_1b0 = (code *)((ulong)pcStack_1b0 & 0xffffffffffffff00);
    bStack_170 = 0;
  }
  else {
    if (*(char *)((long)ppcVar5 + 0x2f) < '\0') {
      param_3 = (code **)ppcVar5[4];
      func_0x000107c3192c(&pcStack_1b0,ppcVar5[3],param_3);
    }
    else {
      pcStack_1a8 = ppcVar5[4];
      pcStack_1b0 = ppcVar5[3];
      pcStack_1a0 = ppcVar5[5];
    }
    if (*(char *)((long)ppcVar5 + 0x47) < '\0') {
      param_3 = (code **)ppcVar5[7];
      func_0x000107c3192c(&pcStack_198,ppcVar5[6],param_3);
    }
    else {
      pcStack_190 = ppcVar5[7];
      pcStack_198 = ppcVar5[6];
      pcStack_188 = ppcVar5[8];
    }
    pcStack_178 = ppcVar5[10];
    ppcStack_180 = (code **)ppcVar5[9];
    if (ppcVar5[10] != (code *)0x0) {
      pcVar8 = ppcVar5[10] + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar3) {
          *(long *)pcVar8 = *(long *)pcVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_170 = 1;
    FUN_10a89c994(ppcVar13 + 5,ppcVar5);
    FUN_10a89dc3c(ppcVar13 + 0x28);
    pcVar8 = pcStack_178;
    ppcVar14 = ppcStack_180;
    ppcVar7 = ppcVar10;
    ppcVar12 = ppcVar5;
    if ((bStack_170 & 1) != 0) {
      ppcStack_1c0 = ppcStack_180;
      pcStack_1b8 = pcStack_178;
      if (pcStack_178 != (code *)0x0) {
        pcVar9 = pcStack_178 + 8;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
          if (bVar3) {
            *(long *)pcVar9 = *(long *)pcVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((bStack_170 & 1) == 0) goto LAB_10a89e398;
      }
      if (ppcStack_180 != (code **)0x0) {
        if (*(char *)(ppcStack_180 + 8) == '\x01') {
          ppcVar7 = (code **)(puVar15 + 2);
          param_3 = ppcStack_180;
          (**ppcStack_180)(&pcStack_198,ppcVar7,ppcStack_180);
        }
        else if (*(char *)(ppcStack_180 + 8) == '\x02') {
          ppcVar12 = ppcStack_180;
          FUN_10a688b40();
          if (ppcVar12 == (code **)0x0) {
            ppcVar7 = (code **)0x0;
            ppcVar5 = (code **)0x0;
            if (ppcVar10 != (code **)0x0) {
              ppcStack_108 = (code **)ppcVar14[1];
              pcStack_110 = *ppcVar14;
              if (ppcVar14[1] != (code *)0x0) {
                pcVar9 = ppcVar14[1] + 8;
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
                  if (bVar3) {
                    *(long *)pcVar9 = *(long *)pcVar9 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              if ((long)pcStack_188 < 0) {
                func_0x000107c3192c(&pcStack_100,pcStack_198,pcStack_190);
              }
              else {
                pcStack_f8 = pcStack_190;
                pcStack_100 = pcStack_198;
                pcStack_f0 = pcStack_188;
              }
              ppcVar14 = apcStack_e8;
              bStack_a8 = 10;
              ppcStack_118 = ppcVar14;
              func_0x00010a840fd8(&ppcStack_118,puVar15 + 2,(char)puVar15[0x12]);
              uVar4 = puVar15[0x12];
              pcStack_98 = FUN_10a89e728;
              ppuStack_90 = &PTR_FUN_110c24ce0;
              ppcVar6 = (code **)0x70;
              bStack_a8 = (byte)uVar4;
              __Znwm();
              ppcVar6[1] = (code *)ppcStack_108;
              *ppcVar6 = pcStack_110;
              pcStack_110 = (code *)0x0;
              ppcStack_108 = (code **)0x0;
              if ((long)pcStack_f0 < 0) {
                func_0x000107c3192c(ppcVar6 + 2,pcStack_100,pcStack_f8);
                bVar1 = bStack_a8;
              }
              else {
                ppcVar6[3] = pcStack_f8;
                ppcVar6[2] = pcStack_100;
                ppcVar6[4] = pcStack_f0;
                bVar1 = (byte)uVar4;
              }
              param_3 = (code **)(ulong)bVar1;
              ppcStack_118 = ppcVar6 + 5;
              *(undefined1 *)(ppcVar6 + 0xd) = 10;
              func_0x00010a840fd8(&ppcStack_118,ppcVar14,param_3);
              *(byte *)(ppcVar6 + 0xd) = bStack_a8;
              ppcVar7 = &pcStack_98;
              ppcStack_88 = ppcVar6;
              FUN_10a4634ec(ppcVar10);
              (*(code *)*ppuStack_90)(&ppuStack_90);
              if (10 < (ulong)bStack_a8) {
LAB_10a89e398:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10a89e39c);
                (*pcVar8)();
              }
              (*(code *)(&PTR_FUN_110c17158)[bStack_a8])(ppcVar14);
              if ((long)pcStack_f0 < 0) {
                __ZdlPv(pcStack_100);
              }
              ppcVar5 = ppcStack_108;
              if (ppcStack_108 != (code **)0x0) {
                ppcVar12 = ppcStack_108 + 1;
                do {
                  pcVar9 = *ppcVar12;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppcVar12,0x10);
                  if (bVar3) {
                    *ppcVar12 = pcVar9 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (pcVar9 == (code *)0x0) {
                  (**(code **)(*ppcStack_108 + 0x10))(ppcStack_108);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar5);
                }
              }
            }
          }
          else {
            *ppcVar12 = (code *)CONCAT44((int)((ulong)*ppcVar12 >> 0x20) + 1,(int)*ppcVar12 + 1);
            ppcVar7 = &pcStack_198;
            param_3 = (code **)(puVar15 + 2);
            FUN_10a89e4ac(*ppcVar14,ppcVar7,param_3);
            uVar4 = *(uint *)((long)ppcVar12 + 4) - 1;
            *(uint *)((long)ppcVar12 + 4) = uVar4;
            ppcVar6 = ppcVar12;
            if (uVar4 == 0) {
              *(uint *)ppcVar12 = 0;
            }
          }
        }
      }
      ppcVar12 = ppcVar5;
      ppcVar13 = ppcVar14;
      if (pcVar8 != (code *)0x0) {
        pcVar9 = pcVar8 + 8;
        do {
          lVar11 = *(long *)pcVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
          if (bVar3) {
            *(long *)pcVar9 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)pcVar8 + 0x10))(pcVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar8);
        }
      }
    }
  }
  func_0x00010a89e7b8(&pcStack_1b0);
LAB_10a89e1c4:
  ppcVar5 = &pcStack_160;
  func_0x00010a89e80c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a004dac(ppcVar6);
    __ZdlPv();
    FUN_10a89e6d4(&pcStack_110);
    FUN_10a76a5a4(&ppcStack_1c0);
    func_0x00010a89e7b8(&pcStack_1b0);
    func_0x00010a89e80c(&pcStack_160);
    ppcVar10 = ppcVar5;
    __Unwind_Resume();
    pcStack_1c8 = FUN_10a89e4ac;
    ppcStack_1f0 = ppcVar6;
    ppcStack_1e8 = ppcVar13;
    ppcStack_1e0 = ppcVar12;
    ppcStack_1d8 = ppcVar5;
    puStack_1d0 = &stack0xfffffffffffffff0;
    func_0x000109884c0c(&ppuStack_220,ppcVar10 + 1,*ppcVar10);
    func_0x000109884820(&puStack_258,&ppuStack_220,*ppcVar10);
    if (ppuStack_220 != (undefined8 **)0x0) {
      (*(code *)**ppuStack_220)();
    }
    (**(code **)(*(long *)*ppcVar10 + 0x30))(&puStack_260);
    pcStack_218 = *ppcVar10;
    pcVar8 = ppcVar7[1];
    ppcVar6 = (code **)*ppcVar7;
    if (-1 < (char)*(byte *)((long)ppcVar7 + 0x17)) {
      pcVar8 = (code *)(ulong)*(byte *)((long)ppcVar7 + 0x17);
      ppcVar6 = ppcVar7;
    }
    (**(code **)(*(long *)pcStack_218 + 0x128))(auStack_238,pcStack_218,ppcVar6,pcVar8);
    auStack_240[0] = 6;
    FUN_10a840e78(aiStack_230,pcStack_218,param_3);
    puStack_200 = auStack_240;
    uStack_1f8 = 2;
    (**(code **)(*(long *)pcStack_218 + 0x58))(pcStack_218);
    ppuStack_220 = &puStack_258;
    ppuStack_208 = &puStack_200;
    puStack_210 = (undefined1 *)&puStack_260;
    func_0x0001098960c0(aiStack_250);
    if ((3 < aiStack_250[0]) && (puStack_248 != (undefined8 *)0x0)) {
      (**(code **)*puStack_248)();
    }
    lVar11 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_230 + lVar11)) &&
         (*(undefined8 **)((long)&lStack_228 + lVar11) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_228 + lVar11))();
      }
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != -0x20);
    if (puStack_260 != (undefined8 *)0x0) {
      (**(code **)*puStack_260)();
    }
    if (puStack_258 != (undefined8 *)0x0) {
      (**(code **)*puStack_258)();
    }
    return;
  }
  return;
}



/* Entry: 10a89e4ac; end: 10a89e6d3;  */

void FUN_10a89e4ac(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_98,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plStack_58 = (long *)*param_1;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  (**(code **)(*plStack_58 + 0x128))(auStack_78,plStack_58,puVar2,uVar1);
  auStack_80[0] = 6;
  FUN_10a840e78(aiStack_70,plStack_58,param_3);
  puStack_40 = auStack_80;
  uStack_38 = 2;
  (**(code **)(*plStack_58 + 0x58))(plStack_58);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar3 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar3)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar3) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar3))();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a89e6d4; end: 10a89e727;  */

long FUN_10a89e6d4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  if ((ulong)*(byte *)(param_1 + 0x68) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(param_1 + 0x68)])(param_1 + 0x28);
    if (*(char *)(param_1 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x10));
    }
    plVar6 = *(long **)(param_1 + 8);
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a89e728);
  (*pcVar4)();
}



/* Entry: 10a89e728; end: 10a89e737;  */

void FUN_10a89e728(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  long lStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  undefined4 *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)*puVar4;
  func_0x000109884c0c(&ppuStack_60,puVar3 + 1,*puVar3);
  func_0x000109884820(&puStack_98,&ppuStack_60,*puVar3);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar3 + 0x30))(&puStack_a0);
  plStack_58 = (long *)*puVar3;
  uVar1 = puVar4[3];
  plVar2 = (long *)puVar4[2];
  if (-1 < (char)*(byte *)((long)puVar4 + 0x27)) {
    uVar1 = (ulong)*(byte *)((long)puVar4 + 0x27);
    plVar2 = puVar4 + 2;
  }
  (**(code **)(*plStack_58 + 0x128))(auStack_78,plStack_58,plVar2,uVar1);
  auStack_80[0] = 6;
  FUN_10a840e78(aiStack_70,plStack_58,puVar4 + 5);
  puStack_40 = auStack_80;
  uStack_38 = 2;
  (**(code **)(*plStack_58 + 0x58))(plStack_58);
  ppuStack_60 = &puStack_98;
  ppuStack_48 = &puStack_40;
  puStack_50 = (undefined1 *)&puStack_a0;
  func_0x0001098960c0(aiStack_90);
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  lVar5 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_70 + lVar5)) &&
       (*(undefined8 **)((long)&lStack_68 + lVar5) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&lStack_68 + lVar5))();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != -0x20);
  if (puStack_a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_a0)();
  }
  if (puStack_98 != (undefined8 *)0x0) {
    (**(code **)*puStack_98)();
  }
  return;
}



/* Entry: 10a89e738; end: 10a89e79f;  */

void FUN_10a89e738(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if ((ulong)*(byte *)(lVar2 + 0x68) < 0xb) {
    (*(code *)(&PTR_FUN_110c17158)[*(byte *)(lVar2 + 0x68)])(lVar2 + 0x28);
    if (*(char *)(lVar2 + 0x27) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar2 + 0x10));
    }
    func_0x00010a004dac(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a89e7a0);
  (*pcVar1)();
}



/* Entry: 10a89e7a0; end: 10a89e7b7;  */

void FUN_10a89e7a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89e7b8; end: 10a89e8b3;  */

undefined8 * FUN_10a89e7b8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_10a76a5a4(param_1 + 6);
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a89e8b4; end: 10a89e8cb;  */

void FUN_10a89e8b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a89e8cc; end: 10a89eabb;  */

/* WARNING: Removing unreachable block (ram,0x00010a89ea64) */

void FUN_10a89e8cc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_98;
  long *plStack_90;
  char cStack_88;
  undefined1 auStack_80 [48];
  long lStack_50;
  long *plStack_48;
  char cStack_40;
  undefined1 *puStack_38;
  
  FUN_10a89eabc(auStack_80,*(long *)(*param_1 + 0x3a8),*(undefined4 *)(param_2 + 0x10),
                *(long *)(*param_1 + 0x3a8) + 0x50);
  if (cStack_40 == '\x01') {
    lStack_f0 = lStack_50;
    plStack_e8 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if (lStack_50 != 0) {
      FUN_10a89ebd0(lStack_50,auStack_80,&uStack_c8,param_2 + 0x18);
    }
    puStack_d8 = &uStack_c8;
    FUN_10a842110(&puStack_d8);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  else {
    FUN_10a89f310(&uStack_c8,*(long *)(*param_1 + 0x3a8),*(undefined4 *)(param_2 + 0x10),
                  *(long *)(*param_1 + 0x3a8) + 0x78);
    if (cStack_88 == '\x01') {
      puStack_d8 = puStack_98;
      plStack_d0 = plStack_90;
      if (plStack_90 != (long *)0x0) {
        plVar1 = plStack_90 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lStack_f0 = 0;
      plStack_e8 = (long *)0x0;
      uStack_e0 = 0;
      if (puStack_98 != (undefined8 *)0x0) {
        FUN_10a89f424(puStack_98,&lStack_f0,param_2 + 0x18);
      }
      puStack_38 = (undefined1 *)&lStack_f0;
      FUN_10a842110(&puStack_38);
      if (plStack_90 != (long *)0x0) {
        plVar1 = plStack_90 + 1;
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
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
        }
      }
    }
    func_0x00010a89fa40(&uStack_c8);
  }
  func_0x00010a89fa94(auStack_80);
  return;
}



/* Entry: 10a89eabc; end: 10a89ebcf;  */

void FUN_10a89eabc(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar7 = param_4;
  FUN_10a89cac4(param_4,param_3);
  if (lVar7 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  if (*(char *)(lVar7 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20));
  }
  else {
    uVar15 = *(undefined8 *)(lVar7 + 0x20);
    uVar14 = *(undefined8 *)(lVar7 + 0x18);
    param_1[2] = *(undefined8 *)(lVar7 + 0x28);
    param_1[1] = uVar15;
    *param_1 = uVar14;
  }
  if (*(char *)(lVar7 + 0x47) < '\0') {
    func_0x000107c3192c(param_1 + 3,*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)(lVar7 + 0x38));
  }
  else {
    uVar15 = *(undefined8 *)(lVar7 + 0x38);
    uVar14 = *(undefined8 *)(lVar7 + 0x30);
    param_1[5] = *(undefined8 *)(lVar7 + 0x40);
    param_1[4] = uVar15;
    param_1[3] = uVar14;
  }
  lVar8 = *(long *)(lVar7 + 0x50);
  uVar14 = *(undefined8 *)(lVar7 + 0x48);
  param_1[7] = *(undefined8 *)(lVar7 + 0x50);
  param_1[6] = uVar14;
  if (lVar8 != 0) {
    plVar1 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_10a89cb64(param_4,lVar7);
  plVar1 = (long *)(param_2 + 0x140);
  plVar6 = plVar1;
  FUN_10a89d40c(plVar1,param_3);
  if (plVar6 == (long *)0x0) {
    return;
  }
  uVar10 = *(ulong *)(param_2 + 0x148);
  lVar7 = *plVar6;
  uVar9 = plVar6[1];
  uVar11 = uVar10 - 1;
  if ((uVar10 & uVar11) == 0) {
    uVar9 = uVar11 & uVar9;
  }
  else if (uVar10 <= uVar9) {
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar9 / uVar10;
    }
    uVar9 = uVar9 - uVar13 * uVar10;
  }
  plVar5 = *(long **)(*plVar1 + uVar9 * 8);
  do {
    plVar12 = plVar5;
    plVar5 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar6);
  if (plVar12 == (long *)(param_2 + 0x150)) {
LAB_10a89d538:
    if (lVar7 == 0) {
LAB_10a89d568:
      *(undefined8 *)(*plVar1 + uVar9 * 8) = 0;
      lVar7 = *plVar6;
      goto LAB_10a89d570;
    }
    uVar13 = *(ulong *)(lVar7 + 8);
    if ((uVar10 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar10 <= uVar13) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar4 * uVar10;
    }
    if (uVar13 != uVar9) goto LAB_10a89d568;
  }
  else {
    uVar13 = plVar12[1];
    if ((uVar10 & uVar11) == 0) {
      uVar13 = uVar13 & uVar11;
    }
    else if (uVar10 <= uVar13) {
      uVar4 = 0;
      if (uVar10 != 0) {
        uVar4 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar4 * uVar10;
    }
    if (uVar13 != uVar9) goto LAB_10a89d538;
LAB_10a89d570:
    if (lVar7 == 0) goto LAB_10a89d5ac;
  }
  uVar13 = *(ulong *)(lVar7 + 8);
  if ((uVar10 & uVar11) == 0) {
    uVar13 = uVar13 & uVar11;
  }
  else if (uVar10 <= uVar13) {
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar13 / uVar10;
    }
    uVar13 = uVar13 - uVar11 * uVar10;
  }
  if (uVar13 != uVar9) {
    *(long **)(*plVar1 + uVar13 * 8) = plVar12;
    lVar7 = *plVar6;
  }
LAB_10a89d5ac:
  *plVar12 = lVar7;
  *plVar6 = 0;
  *(long *)(param_2 + 0x158) = *(long *)(param_2 + 0x158) + -1;
  FUN_10a0803a0(plVar6 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10a89ebd0; end: 10a89ef87;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a89ebd0(code *******param_1,code ******param_2,code *****param_3,long *param_4)

{
  code *******pppppppcVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  code *******pppppppcVar6;
  code *******pppppppcVar7;
  long *plVar8;
  code *******pppppppcVar9;
  code *****pppppcVar10;
  long *plVar11;
  code ******ppppppcVar12;
  long lVar13;
  code ******ppppppcVar14;
  code ******ppppppcVar15;
  code *****pppppcVar16;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  int aiStack_190 [2];
  undefined8 *puStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [16];
  int aiStack_160 [2];
  code ***pppcStack_158;
  code ***pppcStack_150;
  code ******ppppppcStack_148;
  undefined1 *puStack_140;
  undefined4 **ppuStack_138;
  undefined4 *puStack_130;
  undefined8 uStack_128;
  code *****pppppcStack_120;
  long *plStack_118;
  code ******ppppppcStack_110;
  code *******pppppppcStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  code ******ppppppcStack_f0;
  code *******pppppppcStack_e8;
  code *******pppppppcStack_e0;
  code *****pppppcStack_d8;
  code *****pppppcStack_d0;
  code *****pppppcStack_c8;
  code *****pppppcStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  code *****pppppcStack_a8;
  long lStack_a0;
  code *******pppppppcStack_90;
  code *****pppppcStack_88;
  undefined **ppuStack_80;
  long *plStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar14 = param_2;
  plVar8 = param_4;
  pppppcVar16 = param_3;
  pppppppcVar9 = param_1;
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010a89eca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(param_2,param_3,param_4,param_1);
      return;
    }
  }
  else {
    pppppppcVar7 = param_1;
    ppppppcVar15 = param_2;
    pppppcVar10 = param_3;
    plVar11 = param_4;
    if (*(char *)(param_1 + 8) == '\x02') {
      pppppppcVar6 = param_1;
      ppppppcVar12 = param_2;
      FUN_10a688b40();
      if (pppppppcVar6 == (code *******)0x0) {
        ppppppcVar15 = (code ******)0x0;
        pppppppcVar7 = (code *******)0x0;
        if (ppppppcVar12 != (code ******)0x0) {
          pppppppcStack_e8 = (code *******)param_1[1];
          ppppppcStack_f0 = *param_1;
          if (param_1[1] != (code ******)0x0) {
            ppppppcVar14 = param_1[1] + 1;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar14,0x10);
              if (bVar4) {
                *ppppppcVar14 = (code *****)((long)*ppppppcVar14 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(&pppppppcStack_e0,*param_2,param_2[1]);
          }
          else {
            pppppcStack_d8 = param_2[1];
            pppppppcStack_e0 = (code *******)*param_2;
            pppppcStack_d0 = param_2[2];
          }
          ppppppcVar14 = &pppppcStack_c8;
          pppppcStack_c8 = (code *****)0x0;
          pppppcStack_c0 = (code *****)0x0;
          uStack_b8 = 0;
          FUN_10a841c20(ppppppcVar14,*param_3,param_3[1],
                        ((long)param_3[1] - (long)*param_3 >> 3) * -0x5555555555555555);
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            func_0x000107c3192c(&lStack_b0,*param_4,param_4[1]);
          }
          else {
            pppppcStack_a8 = (code *****)param_4[1];
            lStack_b0 = *param_4;
            lStack_a0 = param_4[2];
          }
          pppppcStack_88 = (code *****)FUN_10a89f280;
          ppuStack_80 = &PTR_FUN_110c24d10;
          plVar8 = (long *)0x58;
          __Znwm();
          plVar8[1] = (long)pppppppcStack_e8;
          *plVar8 = (long)ppppppcStack_f0;
          ppppppcStack_f0 = (code ******)0x0;
          pppppppcStack_e8 = (code *******)0x0;
          if ((long)pppppcStack_d0 < 0) {
            func_0x000107c3192c(plVar8 + 2,pppppppcStack_e0,pppppcStack_d8);
          }
          else {
            plVar8[3] = (long)pppppcStack_d8;
            plVar8[2] = (long)pppppppcStack_e0;
            plVar8[4] = (long)pppppcStack_d0;
          }
          pppppppcVar9 = (code *******)(plVar8 + 5);
          *pppppppcVar9 = (code ******)0x0;
          plVar8[6] = 0;
          plVar8[7] = 0;
          plVar11 = (long *)(((long)pppppcStack_c0 - (long)pppppcStack_c8 >> 3) *
                            -0x5555555555555555);
          pppppcVar10 = pppppcStack_c0;
          FUN_10a841c20(pppppppcVar9);
          if (lStack_a0 < 0) {
            pppppcVar10 = pppppcStack_a8;
            func_0x000107c3192c(plVar8 + 8,lStack_b0);
          }
          else {
            plVar8[9] = (long)pppppcStack_a8;
            plVar8[8] = lStack_b0;
            plVar8[10] = lStack_a0;
          }
          pppppcVar16 = (code *****)&pppppcStack_88;
          ppppppcVar15 = &pppppcStack_88;
          plStack_78 = plVar8;
          FUN_10a4634ec(ppppppcVar12);
          (*(code *)*ppuStack_80)(&ppuStack_80);
          if (lStack_a0 < 0) {
            __ZdlPv(lStack_b0);
          }
          pppppppcVar7 = (code *******)&pppppppcStack_90;
          pppppppcStack_90 = (code *******)ppppppcVar14;
          FUN_10a842110();
          if ((long)pppppcStack_d0 < 0) {
            pppppppcVar7 = pppppppcStack_e0;
            __ZdlPv();
          }
          pppppppcVar6 = pppppppcStack_e8;
          if (pppppppcStack_e8 != (code *******)0x0) {
            pppppppcVar1 = pppppppcStack_e8 + 1;
            do {
              ppppppcVar12 = *pppppppcVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppppppcVar1,0x10);
              if (bVar4) {
                *pppppppcVar1 = (code ******)((long)ppppppcVar12 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*pppppppcStack_e8)[2])(pppppppcStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              pppppppcVar7 = pppppppcVar6;
            }
          }
        }
      }
      else {
        *pppppppcVar6 =
             (code ******)CONCAT44((int)((ulong)*pppppppcVar6 >> 0x20) + 1,(int)*pppppppcVar6 + 1);
        pppppppcVar7 = (code *******)*param_1;
        pppppcVar10 = param_3;
        plVar11 = param_4;
        FUN_10a89ef88();
        iVar5 = *(int *)((long)pppppppcVar6 + 4) + -1;
        *(int *)((long)pppppppcVar6 + 4) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)pppppppcVar6 = 0;
        }
      }
    }
    param_1 = pppppppcVar7;
    param_2 = ppppppcVar15;
    param_3 = pppppcVar10;
    param_4 = plVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
  pppppppcStack_90 = pppppppcVar9;
  FUN_10a842110(&pppppppcStack_90);
  if (*(char *)((long)plVar8 + 0x27) < '\0') {
    __ZdlPv(*pppppcVar16);
  }
  func_0x00010a004dac(plVar8);
  __ZdlPv();
  FUN_10a89f224(&ppppppcStack_f0);
  pppppppcVar9 = param_1;
  __Unwind_Resume();
  pcStack_f8 = FUN_10a89ef88;
  pppppcStack_120 = pppppcVar16;
  plStack_118 = plVar8;
  ppppppcStack_110 = ppppppcVar14;
  pppppppcStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&uStack_180,pppppppcVar9 + 1,*pppppppcVar9);
  func_0x000109884820(&puStack_198,&uStack_180,*pppppppcVar9);
  if ((undefined8 *)CONCAT44(uStack_17c,uStack_180) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)CONCAT44(uStack_17c,uStack_180))();
  }
  (*(code *)(**pppppppcVar9)[6])(&puStack_1a0);
  ppppppcVar15 = *pppppppcVar9;
  pppppcVar16 = param_2[1];
  ppppppcVar14 = (code ******)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pppppcVar16 = (code *****)(ulong)*(byte *)((long)param_2 + 0x17);
    ppppppcVar14 = param_2;
  }
  (*(code *)(*ppppppcVar15)[0x25])(auStack_178,ppppppcVar15,ppppppcVar14,pppppcVar16);
  uStack_180 = 6;
  FUN_10a8419d0(auStack_170,ppppppcVar15,*param_3,
                ((long)param_3[1] - (long)*param_3 >> 3) * -0x5555555555555555);
  puStack_130 = &uStack_180;
  uVar2 = param_4[1];
  plVar8 = (long *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar2 = (ulong)*(byte *)((long)param_4 + 0x17);
    plVar8 = param_4;
  }
  (*(code *)(*ppppppcVar15)[0x25])(&pppcStack_150,ppppppcVar15,plVar8,uVar2);
  aiStack_160[0] = 6;
  pppcStack_158 = pppcStack_150;
  uStack_128 = 3;
  (*(code *)(*ppppppcVar15)[0xb])(ppppppcVar15);
  pppcStack_150 = (code ***)&puStack_198;
  ppuStack_138 = &puStack_130;
  ppppppcStack_148 = ppppppcVar15;
  puStack_140 = (undefined1 *)&puStack_1a0;
  func_0x0001098960c0(aiStack_190);
  if ((3 < aiStack_190[0]) && (puStack_188 != (undefined8 *)0x0)) {
    (**(code **)*puStack_188)();
  }
  lVar13 = 0;
  do {
    if ((3 < *(int *)((long)aiStack_160 + lVar13)) &&
       (*(undefined8 **)((long)&pppcStack_158 + lVar13) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)((long)&pppcStack_158 + lVar13))();
    }
    lVar13 = lVar13 + -0x10;
  } while (lVar13 != -0x30);
  if (puStack_1a0 != (undefined8 *)0x0) {
    (**(code **)*puStack_1a0)();
  }
  if (puStack_198 != (undefined8 *)0x0) {
    (**(code **)*puStack_198)();
  }
  return;
}


