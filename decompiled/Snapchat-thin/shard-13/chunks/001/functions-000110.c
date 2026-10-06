/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a13845c; end: 10a13847f;  */

void FUN_10a13845c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
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
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar3 = 1;
  FUN_10a052ee0(1,0,param_1);
  *(undefined **)(uVar3 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(uVar3 + 0x170);
  if (*(long *)(uVar3 + 0x168) != lVar1) {
    uStack_98 = *(undefined8 *)(lVar1 + -0x60);
    uStack_a0 = *(undefined8 *)(lVar1 + -0x68);
    uStack_78 = *(undefined8 *)(lVar1 + -0x40);
    uStack_80 = *(undefined8 *)(lVar1 + -0x48);
    uStack_88 = *(undefined8 *)(lVar1 + -0x50);
    uStack_90 = *(undefined8 *)(lVar1 + -0x58);
    uStack_68 = *(undefined8 *)(lVar1 + -0x30);
    uStack_70 = *(undefined8 *)(lVar1 + -0x38);
    uStack_58 = *(undefined8 *)(lVar1 + -0x20);
    uStack_60 = *(undefined8 *)(lVar1 + -0x28);
    uStack_40 = *(undefined8 *)(lVar1 + -8);
    uStack_48 = *(undefined8 *)(lVar1 + -0x10);
    uStack_50 = *(undefined8 *)(lVar1 + -0x18);
    *(long *)(uVar3 + 0x170) = lVar1 + -0x68;
    uVar4 = uVar3;
    FUN_10a0051e8();
    if ((uVar4 & 1) == 0) {
      func_0x000109894f40(uVar3,0);
      FUN_10a054234(uVar3,&uStack_a0,uVar3 + 0x1b8,&UNK_10f63e0a3,10);
      FUN_10a05431c(uVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a13853c);
  (*pcVar2)();
}



/* Entry: 10a138480; end: 10a138573;  */

void FUN_10a138480(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f63e0a3,10);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a13853c);
  (*pcVar4)();
}



/* Entry: 10a138574; end: 10a1385df;  */

void FUN_10a138574(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(puVar4 + 0x18);
  uVar2 = *(undefined8 *)(puVar4 + 0x20);
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  func_0x000109a17dd0();
  if (puVar4 == &DAT_110b9fdf8) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    return;
  }
  FUN_10a04f610();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1385cc);
  (*pcVar3)();
}



/* Entry: 10a1385e0; end: 10a138627;  */

void FUN_10a1385e0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_10a04c5b0(puVar1 + 3);
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



/* Entry: 10a138628; end: 10a13863f;  */

void FUN_10a138628(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a138640; end: 10a138af7;  */

/* WARNING: Removing unreachable block (ram,0x00010a138808) */
/* WARNING: Removing unreachable block (ram,0x00010a13880c) */
/* WARNING: Removing unreachable block (ram,0x00010a138814) */
/* WARNING: Removing unreachable block (ram,0x00010a13881c) */
/* WARNING: Removing unreachable block (ram,0x00010a138820) */
/* WARNING: Removing unreachable block (ram,0x00010a1388b0) */
/* WARNING: Removing unreachable block (ram,0x00010a1388b4) */
/* WARNING: Removing unreachable block (ram,0x00010a1388bc) */
/* WARNING: Removing unreachable block (ram,0x00010a1388c4) */
/* WARNING: Removing unreachable block (ram,0x00010a1388c8) */

void FUN_10a138640(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plStack_108;
  long *plStack_e8;
  long *plStack_d8;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)param_1[1];
  lVar6 = *param_1;
  if (plVar9 != (long *)0x0) {
    plVar4 = plVar9 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plStack_e8 = (long *)0x0;
  plVar4 = *(long **)(param_2 + 0x18);
  plStack_108 = plVar9;
  if (((plVar4 != (long *)0x0) &&
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar4, plVar4 != (long *)0x0)) &&
     (lVar8 = *(long *)(param_2 + 0x10), lVar8 != 0)) {
    plStack_108 = (long *)0x0;
    if (lVar6 == 0) goto LAB_10a138984;
    plStack_b8 = (long *)0x0;
    plVar4 = *(long **)(lVar8 + 0x20);
    plStack_d8 = plVar9;
    if (((plVar4 != (long *)0x0) &&
        (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar4, plVar4 != (long *)0x0)) &&
       (lVar7 = *(long *)(lVar8 + 0x18), lVar7 != 0)) {
      plStack_d8 = (long *)0x0;
      if (*(char *)(lVar8 + 0x3f) < '\0') {
        func_0x000107c3192c(&uStack_b0,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x30));
      }
      else {
        uStack_a8 = *(undefined8 *)(lVar8 + 0x30);
        uStack_b0 = *(undefined8 *)(lVar8 + 0x28);
        lStack_a0 = *(long *)(lVar8 + 0x38);
      }
      pcStack_88 = FUN_10a138574;
      ppuStack_80 = &PTR_FUN_110ba7108;
      puVar5 = (undefined8 *)0x28;
      lStack_98 = lVar6;
      plStack_90 = plVar9;
      __Znwm();
      if (lStack_a0 < 0) {
        func_0x000107c3192c(puVar5,uStack_b0,uStack_a8);
      }
      else {
        puVar5[1] = uStack_a8;
        *puVar5 = uStack_b0;
        puVar5[2] = lStack_a0;
        lStack_98 = lVar6;
        plStack_90 = plVar9;
      }
      puVar5[4] = plStack_90;
      puVar5[3] = lStack_98;
      lStack_98 = 0;
      plStack_90 = (long *)0x0;
      puStack_78 = puVar5;
      FUN_10a10e118(lVar7,lVar8 + 0x28,&pcStack_88);
      (*(code *)*ppuStack_80)(&ppuStack_80);
      plVar9 = plStack_90;
      if (plStack_90 != (long *)0x0) {
        plVar4 = plStack_90 + 1;
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
          (**(code **)(*plStack_90 + 0x10))(plStack_90);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
    }
    if (plStack_b8 != (long *)0x0) {
      plVar9 = plStack_b8 + 1;
      do {
        lVar6 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      }
    }
    if (plStack_d8 != (long *)0x0) {
      plVar9 = plStack_d8 + 1;
      do {
        lVar6 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      }
    }
  }
  if (plStack_e8 != (long *)0x0) {
    plVar9 = plStack_e8 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
    }
  }
  if (plStack_108 != (long *)0x0) {
    plVar9 = plStack_108 + 1;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_10a138984:
  FUN_10a00946c(&UNK_10f63cfcd);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a138994);
  (*pcVar3)();
}



/* Entry: 10a138af8; end: 10a138b4f;  */

long FUN_10a138af8(long param_1)

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



/* Entry: 10a138b50; end: 10a138baf;  */

void FUN_10a138b50(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a138bb0; end: 10a138cab;  */

undefined1  [16] FUN_10a138bb0(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba62c0;
  puVar1 = &UNK_10f63ce51;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110ba62c0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a138cac; end: 10a138e83;  */

void FUN_10a138cac(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f63e0ae,0xd);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a138d68);
  (*pcVar4)();
}



/* Entry: 10a138e84; end: 10a138e93;  */

void FUN_10a138e84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7150;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a138e94; end: 10a138eb3;  */

void FUN_10a138e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7150;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a138eb4; end: 10a138ec3;  */

void FUN_10a138eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a138ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a138ec4; end: 10a138f1b;  */

long FUN_10a138ec4(long param_1)

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



/* Entry: 10a138f1c; end: 10a139017;  */

undefined1  [16] FUN_10a138f1c(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba7718;
  puVar1 = &UNK_10f63ce51;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110ba7718;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a139018; end: 10a1390d3;  */

void FUN_10a139018(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f63e0bc,5);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1390d4);
  (*pcVar4)();
}



/* Entry: 10a1390d4; end: 10a1391f3;  */

void FUN_10a1390d4(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffb0;
  long in_stack_ffffffffffffffb8;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1391e0);
    (*pcVar1)();
  }
  func_0x00010a138dc0(&stack0xffffffffffffffb0);
  plVar11 = (long *)plVar3[4];
  if (plVar11 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar11 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar11;
  *plVar11 = (long)&PTR_DAT_110b17478;
  plVar11[2] = in_stack_ffffffffffffffb8;
  plVar11[1] = in_stack_ffffffffffffffb0;
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar11,plVar4,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar11 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar11[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar11;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar13 = lVar8 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar10 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar12 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar11;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar14 * 0x10);
          lVar9 = lVar10 + uVar13 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar11 = lVar9;
          plVar3[0x4c] = lVar10 + uVar14 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar14 * 0x10);
    plVar3[0x4c] = lVar10 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a1391f4; end: 10a1393b3;  */

void FUN_10a1391f4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a1393b4(param_2,param_3);
  FUN_10a13941c(param_5);
  FUN_10a139440(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10a1119e4(&lStack_70,plVar7,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar10 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  plVar7 = plStack_68;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar10 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10a1393b4; end: 10a13941b;  */

void FUN_10a1393b4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  long *extraout_x8;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  piVar4 = (int *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  if (*piVar4 != 1) {
    func_0x000109898688();
    if (lVar3 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a1394b8(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1394a4);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a13941c; end: 10a13943f;  */

void FUN_10a13941c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a1394b8(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1394a4);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a139440; end: 10a1394b7;  */

void FUN_10a139440(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a1394b8(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1394a4);
  (*pcVar1)();
}



/* Entry: 10a1394b8; end: 10a1395a7;  */

void FUN_10a1394b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c2efe8,0), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10a1395a8; end: 10a139beb;  */

/* WARNING: Possible PIC construction at 0x00010a139be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a139be4) */
/* WARNING: Removing unreachable block (ram,0x00010a139bf8) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd2e4) */
/* WARNING: Removing unreachable block (ram,0x00010a139bf4) */
/* WARNING: Removing unreachable block (ram,0x00010a139b40) */

void FUN_10a1395a8(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar19;
  long *unaff_x22;
  long lVar20;
  long *unaff_x23;
  long lVar21;
  long unaff_x24;
  ulong uVar22;
  long *unaff_x25;
  long *plVar23;
  ulong uVar24;
  long *unaff_x26;
  long *plVar25;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar26;
  undefined8 uVar27;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined **ppuStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  char cStack_b1;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar10[0x59] < 8) {
    plVar10[plVar10[0x59] + 0x4e] = plVar10[0x5a];
    plVar10[0x59] = plVar10[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar10 + 0x4b);
  }
  plVar11 = param_2;
  FUN_10a1393b4(param_2,param_3);
  FUN_10a139bec(param_5);
  if (*param_4 == 1) {
    lStack_108 = 0;
    plStack_100 = (long *)0x0;
    puVar14 = &UNK_10f63d0e7;
LAB_10a139b10:
    FUN_10a00946c(puVar14);
    goto LAB_10a139b14;
  }
  plVar12 = param_2;
  func_0x000109898688(param_2,param_4);
  if (plVar12 == (long *)0x0) {
    func_0x00010988bd28(&UNK_10f68f52e);
    goto LAB_10a139b14;
  }
  func_0x00010989879c(&lStack_b0);
  if ((lStack_b0 == 0) ||
     (___dynamic_cast(lStack_b0,&PTR_DAT_110b178e0,&PTR_DAT_110ba61d0,0), lStack_b0 == 0)) {
    plVar12 = &lStack_108;
  }
  else {
    plStack_100 = plStack_a8;
    plVar12 = &lStack_b0;
    lStack_108 = lStack_b0;
  }
  *plVar12 = 0;
  plVar12[1] = 0;
  if (plStack_a8 != (long *)0x0) {
    plVar12 = plStack_a8 + 1;
    do {
      lVar17 = *plVar12;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  if (lStack_108 == 0) {
    func_0x00010988bd28(&UNK_10f58251f);
    goto LAB_10a139b14;
  }
  uVar27 = *(undefined8 *)(lStack_108 + 0x18);
  fVar26 = (float)((ulong)uVar27 >> 0x20);
  bVar6 = false;
  bVar7 = false;
  bVar8 = false;
  if ((float)uVar27 <= 4096.0) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar26)) {
      bVar6 = fVar26 < 4096.0;
      bVar7 = fVar26 == 4096.0;
      bVar8 = false;
    }
  }
  if (!bVar7 && bVar6 == bVar8) {
    __ZNSt3__19to_stringEi(&uStack_c8,0x1000);
    FUN_109feb280(&ppuStack_90,&UNK_10f63d109,&uStack_c8);
    FUN_10a012db0(&lStack_b0,&ppuStack_90,&UNK_10f63d138);
    FUN_10a0029c0(&lStack_b0);
    goto LAB_10a139b14;
  }
  uStack_118 = 0;
  bVar6 = true;
  bVar7 = false;
  if (1.0 <= (float)uVar27) {
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar26)) {
      bVar6 = fVar26 < 1.0;
      bVar7 = false;
    }
  }
  uStack_120 = uVar27;
  if (bVar6 != bVar7) {
    puVar14 = &UNK_10f63d147;
    goto LAB_10a139b10;
  }
  plVar12 = (long *)plVar11[5];
  if (plVar12 != (long *)0x0) {
    lVar17 = plVar11[4];
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar12 != (long *)0x0) {
      ppuVar3 = (undefined **)0x0;
      if (lVar17 != 0) {
        ppuVar3 = (undefined **)(lVar17 + -0x18);
      }
      uStack_f8 = 0;
      plStack_f0 = (long *)0x0;
      plVar13 = (long *)0x80;
      ppuStack_e8 = ppuVar3;
      plStack_e0 = plVar12;
      __Znwm();
      plVar23 = plVar13 + 1;
      *plVar23 = 0;
      plVar13[2] = 0;
      *plVar13 = (long)&PTR_FUN_110ba71f0;
      ppuStack_e8 = (undefined **)0x0;
      plStack_e0 = (long *)0x0;
      uStack_c8 = 0;
      plStack_c0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      lStack_a0 = 0;
      lStack_b0 = 0;
      ppuStack_90 = ppuVar3;
      plStack_88 = plVar12;
      FUN_10a04ae84(&lStack_b0,&ppuStack_90,auStack_80,1);
      plVar11 = plVar13 + 3;
      FUN_10a10f1dc(plVar11,&lStack_b0,1);
      fVar26 = (float)uStack_120;
      uVar15 = (ulong)uStack_120 >> 0x20;
      plStack_98 = &lStack_b0;
      FUN_10a04afa0(&plStack_98);
      plVar12 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar25 = plStack_88 + 1;
        do {
          lVar17 = *plVar25;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *plVar25 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_c0;
      plVar25 = plVar13 + 6;
      *plVar25 = (long)&PTR_FUN_110ba5a00;
      plVar13[3] = (long)&PTR_FUN_110ba5998;
      plVar13[0xf] = CONCAT44((int)(float)uVar15,(int)fVar26);
      if (plStack_c0 != (long *)0x0) {
        plVar2 = plStack_c0 + 1;
        do {
          lVar17 = *plVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plStack_d8 = plVar11;
      plStack_d0 = plVar13;
      if (plVar13[8] == 0) {
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar11 = plVar13 + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar13[7] = (long)plVar25;
        plVar13[8] = (long)plVar13;
LAB_10a1398b0:
        do {
          lVar17 = *plVar23;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      else if (*(long *)(plVar13[8] + 8) == -1) {
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar11 = plVar13 + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar13[7] = (long)plVar25;
        plVar13[8] = (long)plVar13;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_10a1398b0;
      }
      plVar11 = plStack_e0;
      if (plStack_e0 != (long *)0x0) {
        plVar12 = plStack_e0 + 1;
        do {
          lVar17 = *plVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_f0;
      if (plStack_f0 != (long *)0x0) {
        plVar12 = plStack_f0 + 1;
        do {
          lVar17 = *plVar12;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      func_0x000109a22a14(&lStack_b0,plStack_d8 + 3,0);
      plVar12 = plStack_a8;
      plVar11 = plStack_d0;
      lVar17 = 0;
      if (lStack_b0 != 0) {
        lVar17 = lStack_b0 + -0x18;
      }
      if (plStack_d0 != (long *)0x0) {
        plVar13 = plStack_d0 + 1;
        do {
          lVar18 = *plVar13;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_100;
      if (plStack_100 != (long *)0x0) {
        plVar13 = plStack_100 + 1;
        do {
          lVar18 = *plVar13;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_100 + 0x10))(plStack_100);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      ppuStack_90 = &PTR_DAT_110ba6460;
      lStack_b0 = lVar17;
      plStack_a8 = plVar12;
      func_0x000109899de4(param_1,param_2,&lStack_b0,&ppuStack_90,0,0);
      plVar13 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          lVar18 = *plVar2;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_2 = plVar13;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
        ___stack_chk_fail();
        if (lStack_a0 < 0) {
          __ZdlPv(lStack_b0);
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(uStack_c8);
        }
        FUN_10a136a50(&lStack_108);
        unaff_x30 = 0x10a139be4;
        register0x00000008 = (BADSPACEBASE *)&uStack_120;
        unaff_x19 = plVar10;
        unaff_x20 = param_2;
        unaff_x21 = param_1;
        unaff_x22 = plVar11;
        unaff_x23 = plVar12;
        unaff_x24 = lVar17;
        unaff_x25 = plVar23;
        unaff_x26 = plVar25;
        unaff_x29 = puVar1;
      }
      plVar11 = plVar10 + 0x4b;
      lVar17 = plVar10[0x59];
      uVar15 = lVar17 - 1;
      plVar10[0x59] = uVar15;
      if (uVar15 < 8) {
        uVar15 = plVar11[lVar17 + 2];
        if (plVar10[0x5a] == uVar15) {
          return;
        }
      }
      else {
        uVar15 = *(ulong *)(plVar10[0x57] + -8);
        plVar10[0x57] = plVar10[0x57] + -8;
        if (plVar10[0x5a] == uVar15) {
          return;
        }
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
      *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar17 = *plVar11;
      lVar18 = plVar10[0x4c];
      lVar19 = lVar18 - lVar17;
      uVar22 = lVar19 >> 4;
      if (uVar22 < uVar15) {
        uVar24 = uVar15 - uVar22;
        lVar21 = plVar10[0x4d];
        if ((ulong)(lVar21 - lVar18 >> 4) < uVar24) {
          if (uVar15 >> 0x3c == 0) {
            uVar16 = lVar21 - lVar17 >> 3;
            if (uVar16 <= uVar15) {
              uVar16 = uVar15;
            }
            if (0x7fffffffffffffef < (ulong)(lVar21 - lVar17)) {
              uVar16 = 0xfffffffffffffff;
            }
            *(long **)((long)register0x00000008 + -0x68) = plVar11;
            if (uVar16 >> 0x3c == 0) {
              lVar9 = uVar16 << 4;
              __Znwm();
              lVar18 = lVar9 + lVar19;
              _bzero(lVar18,uVar24 * 0x10);
              lVar20 = lVar18 + uVar22 * -0x10;
              _memcpy(lVar20,lVar17,lVar19);
              *plVar11 = lVar20;
              plVar10[0x4c] = lVar18 + uVar24 * 0x10;
              plVar10[0x4d] = lVar9 + uVar16 * 0x10;
              *(long *)((long)register0x00000008 + -0x78) = lVar17;
              *(long *)((long)register0x00000008 + -0x70) = lVar21;
              *(long *)((long)register0x00000008 + -0x88) = lVar17;
              *(long *)((long)register0x00000008 + -0x80) = lVar17;
              func_0x00010988c1b8((undefined1 *)((long)register0x00000008 + -0x88));
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar5)();
        }
        _bzero(lVar18,uVar24 * 0x10);
        plVar10[0x4c] = lVar18 + uVar24 * 0x10;
      }
      else if (uVar15 < uVar22) {
        lVar17 = lVar17 + uVar15 * 0x10;
        while (lVar18 != lVar17) {
          lVar18 = lVar18 + -0x10;
          func_0x00010988c204(lVar18);
        }
        plVar10[0x4c] = lVar17;
      }
code_r0x00010988c138:
      plVar10[0x5a] = uVar15;
      return;
    }
  }
  FUN_10a043ecc();
LAB_10a139b14:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a139b18);
  (*pcVar5)();
}



/* Entry: 10a139bec; end: 10a139c0f;  */

void FUN_10a139bec(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 1) {
    return;
  }
  puVar1 = (undefined8 *)0x1;
  FUN_10a052ee0(1,0,param_1);
  *puVar1 = &PTR_FUN_110ba71a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a139c10; end: 10a139c1f;  */

void FUN_10a139c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba71a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a139c20; end: 10a139c3f;  */

void FUN_10a139c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba71a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a139c40; end: 10a139c4f;  */

void FUN_10a139c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a139c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a139c50; end: 10a139ca7;  */

long FUN_10a139c50(long param_1)

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



/* Entry: 10a139ca8; end: 10a139cb7;  */

void FUN_10a139ca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba71f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a139cb8; end: 10a139cd7;  */

void FUN_10a139cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba71f0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a139cd8; end: 10a139ce7;  */

void FUN_10a139cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a139ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a139ce8; end: 10a139d3f;  */

long FUN_10a139ce8(long param_1)

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



/* Entry: 10a139d40; end: 10a139e3b;  */

undefined1  [16] FUN_10a139d40(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110ba6478;
  puVar1 = &UNK_10f63ce51;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110ba6478;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a139e3c; end: 10a139ef7;  */

void FUN_10a139e3c(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f63e10d,0x12);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a139ef8);
  (*pcVar4)();
}



/* Entry: 10a139ef8; end: 10a13a057;  */

void FUN_10a139ef8(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puStack_50;
  long *plStack_48;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a13a058(param_5);
  FUN_10a13a07c(&puStack_50,param_2,param_4);
  if (puStack_50 == (undefined8 *)0x0) {
    puVar6 = &UNK_10f63d1ab;
  }
  else {
    if ((ulong)puStack_50[1] < 0x10001) {
      func_0x000107c2b3c4(*puStack_50,puStack_50[1],&UNK_10e525a20);
      if (puStack_50 == (undefined8 *)0x0) {
        *param_1 = 1;
      }
      else {
        func_0x0001098849a4(param_1,param_2,puStack_50[2]);
      }
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        }
      }
      func_0x00010988c170(plVar5 + 0x4b);
      return;
    }
    puVar6 = &UNK_10f63d1c7;
  }
  FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a13a034);
  (*pcVar4)();
}



/* Entry: 10a13a058; end: 10a13a07b;  */

void FUN_10a13a058(undefined8 param_1)

{
  undefined8 *puVar1;
  long *extraout_x8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  func_0x0001098994f4(&uStack_50);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ba7910;
  puVar1[4] = uStack_48;
  puVar1[3] = uStack_50;
  puVar1[6] = uStack_38;
  puVar1[5] = uStack_40;
  *extraout_x8 = (long)(puVar1 + 3);
  extraout_x8[1] = (long)puVar1;
  return;
}



/* Entry: 10a13a07c; end: 10a13a0eb;  */

void FUN_10a13a07c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001098994f4(&uStack_40);
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ba7910;
  puVar1[4] = uStack_38;
  puVar1[3] = uStack_40;
  puVar1[6] = uStack_28;
  puVar1[5] = uStack_30;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10a13a0ec; end: 10a13a1ab;  */

void FUN_10a13a0ec(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  uStack_48 = 0x10a1120b8;
  FUN_10a13a1ac(param_1,param_2,&uStack_48,param_4,param_5);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a13a1ac; end: 10a13a25f;  */

void FUN_10a13a1ac(undefined4 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined8 uStack_38;
  
  FUN_10a052e3c(param_5);
  (*(code *)*param_3)(&puStack_50);
  ppuVar1 = (undefined1 **)puStack_50;
  if (-1 < (char)bStack_39) {
    uStack_48 = (ulong)bStack_39;
    ppuVar1 = &puStack_50;
  }
  (**(code **)(*param_2 + 0x128))(&uStack_38,param_2,ppuVar1,uStack_48);
  *param_1 = 6;
  *(undefined8 *)(param_1 + 2) = uStack_38;
  if ((char)bStack_39 < '\0') {
    __ZdlPv(puStack_50);
  }
  return;
}



/* Entry: 10a13a260; end: 10a13a2fb;  */

void FUN_10a13a260(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  code **ppcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 extraout_x8;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  long in_stack_ffffffffffffff38;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *param_3;
  pcStack_68 = FUN_10a13a2fc;
  ppuStack_60 = &PTR_DAT_110ba7280;
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a13a2f8);
    (*pcVar5)();
  }
  lVar11 = *(long *)(param_1 + 0x18) + -8;
  ppcVar9 = &pcStack_68;
  uVar10 = 2;
  FUN_10a0544d8(param_1,param_2,ppcVar9,2);
  pppuVar7 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pppuVar8 = pppuVar7;
  (*(code *)(*pppuVar7)[0xb])();
  if (pppuVar8[0x59] < (undefined **)0x8) {
    pppuVar8[(long)pppuVar8[0x59] + 0x4e] = pppuVar8[0x5a];
    pppuVar8[0x59] = (undefined **)((long)pppuVar8[0x59] + 1);
  }
  else {
    func_0x00010988bfcc(pppuVar8 + 0x4b);
  }
  FUN_10a13a4fc(uVar10);
  func_0x000109898570(&pppuStack_d8,pppuVar7,ppcVar9);
  FUN_10a13a07c(&ppuStack_f0,pppuVar7,ppcVar9 + 2);
  ppuVar12 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  ppuVar13 = ppuStack_e8;
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  (**(code **)(lVar11 + 0x10))(&ppuStack_f8,*ppuVar12,&pppuStack_d8,&stack0xffffffffffffff40);
  if (ppuVar13 != (undefined **)0x0) {
    plVar1 = (long *)(ppuVar13 + 1);
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)((long)*ppuVar13 + 0x10))(ppuVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
    }
  }
  ppuVar12 = ppuStack_e8;
  if (ppuStack_e8 != (undefined **)0x0) {
    plVar1 = (long *)(ppuStack_e8 + 1);
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)((long)*ppuStack_e8 + 0x10))(ppuStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
    }
  }
  if (in_stack_ffffffffffffff38 < 0) {
    __ZdlPv(pppuStack_d8);
  }
  FUN_10a13a520(extraout_x8,pppuVar7,&ppuStack_f8);
  if (ppuStack_f8 != (undefined **)0x0) {
    ppuVar12 = ppuStack_f8 + 1;
    do {
      puVar15 = *ppuVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
      if (bVar4) {
        *ppuVar12 = puVar15 + -4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((ulong)puVar15 & 0x1fffffffc) == 4) {
      do {
        puVar15 = *ppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar4) {
          *ppuVar12 = puVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar15 + -1 == (undefined *)0x0) {
        (**(code **)(*ppuStack_f8 + 8))();
      }
    }
  }
  pppuVar7 = pppuVar8 + 0x4b;
  ppuVar12 = pppuVar8[0x59];
  ppuVar13 = (undefined **)((long)ppuVar12 + -1);
  pppuVar8[0x59] = ppuVar13;
  if (ppuVar13 < (undefined **)0x8) {
    ppuVar12 = pppuVar7[(long)ppuVar12 + 2];
    if (pppuVar8[0x5a] == ppuVar12) {
      return;
    }
  }
  else {
    ppuVar12 = (undefined **)pppuVar8[0x57][-1];
    pppuVar8[0x57] = pppuVar8[0x57] + -1;
    if (pppuVar8[0x5a] == ppuVar12) {
      return;
    }
  }
  ppuVar13 = *pppuVar7;
  ppuVar14 = pppuVar8[0x4c];
  lVar11 = (long)ppuVar14 - (long)ppuVar13;
  ppuVar17 = (undefined **)(lVar11 >> 4);
  if (ppuVar17 < ppuVar12) {
    uVar18 = (long)ppuVar12 - (long)ppuVar17;
    ppuVar16 = pppuVar8[0x4d];
    if ((ulong)((long)ppuVar16 - (long)ppuVar14 >> 4) < uVar18) {
      if ((ulong)ppuVar12 >> 0x3c == 0) {
        ppuVar14 = (undefined **)((long)ppuVar16 - (long)ppuVar13 >> 3);
        if (ppuVar14 <= ppuVar12) {
          ppuVar14 = ppuVar12;
        }
        if (0x7fffffffffffffef < (ulong)((long)ppuVar16 - (long)ppuVar13)) {
          ppuVar14 = (undefined **)0xfffffffffffffff;
        }
        pppuStack_d8 = pppuVar7;
        if ((ulong)ppuVar14 >> 0x3c == 0) {
          lVar6 = (long)ppuVar14 << 4;
          __Znwm();
          lVar2 = lVar6 + lVar11;
          _bzero(lVar2,uVar18 * 0x10);
          ppuVar17 = (undefined **)(lVar2 + (long)ppuVar17 * -0x10);
          _memcpy(ppuVar17,ppuVar13,lVar11);
          *pppuVar7 = ppuVar17;
          pppuVar8[0x4c] = (undefined **)(lVar2 + uVar18 * 0x10);
          pppuVar8[0x4d] = (undefined **)(lVar6 + (long)ppuVar14 * 0x10);
          ppuStack_f8 = ppuVar13;
          ppuStack_f0 = ppuVar13;
          ppuStack_e8 = ppuVar13;
          ppuStack_e0 = ppuVar16;
          func_0x00010988c1b8(&ppuStack_f8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar5)();
    }
    _bzero(ppuVar14,uVar18 * 0x10);
    pppuVar8[0x4c] = ppuVar14 + uVar18 * 2;
  }
  else if (ppuVar12 < ppuVar17) {
    while (ppuVar14 != ppuVar13 + (long)ppuVar12 * 2) {
      ppuVar14 = ppuVar14 + -2;
      func_0x00010988c204(ppuVar14);
    }
    pppuVar8[0x4c] = ppuVar13 + (long)ppuVar12 * 2;
  }
code_r0x00010988c138:
  pppuVar8[0x5a] = ppuVar12;
  return;
}



/* Entry: 10a13a2fc; end: 10a13a4fb;  */

void FUN_10a13a2fc(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa8;
  
  plVar9 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar9[0x59] < 8) {
    plVar9[plVar9[0x59] + 0x4e] = plVar9[0x5a];
    plVar9[0x59] = plVar9[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar9 + 0x4b);
  }
  FUN_10a13a4fc(param_5);
  func_0x000109898570(&plStack_68,param_2,param_4);
  FUN_10a13a07c(&plStack_80,param_2,param_4 + 0x10);
  ppuVar10 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  plVar2 = plStack_78;
  plStack_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  (**(code **)(param_6 + 0x10))(&plStack_88,*ppuVar10,&plStack_68,&stack0xffffffffffffffb0);
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2 + 1;
    do {
      lVar12 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar4 = plStack_78 + 1;
    do {
      lVar12 = *plVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *plVar4 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if (in_stack_ffffffffffffffa8 < 0) {
    __ZdlPv(plStack_68);
  }
  FUN_10a13a520(param_1,param_2,&plStack_88);
  if (plStack_88 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_88 + 1);
    do {
      uVar13 = *puVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = uVar13 - 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar13 - 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plStack_88 + 8))();
      }
    }
  }
  plVar2 = plVar9 + 0x4b;
  lVar12 = plVar9[0x59];
  uVar13 = lVar12 - 1;
  plVar9[0x59] = uVar13;
  if (uVar13 < 8) {
    uVar13 = plVar2[lVar12 + 2];
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  else {
    uVar13 = *(ulong *)(plVar9[0x57] + -8);
    plVar9[0x57] = plVar9[0x57] + -8;
    if (plVar9[0x5a] == uVar13) {
      return;
    }
  }
  plVar4 = (long *)*plVar2;
  plVar15 = (long *)plVar9[0x4c];
  lVar12 = (long)plVar15 - (long)plVar4;
  uVar17 = lVar12 >> 4;
  if (uVar17 < uVar13) {
    uVar18 = uVar13 - uVar17;
    lVar16 = plVar9[0x4d];
    if ((ulong)(lVar16 - (long)plVar15 >> 4) < uVar18) {
      if (uVar13 >> 0x3c == 0) {
        uVar11 = lVar16 - (long)plVar4 >> 3;
        if (uVar11 <= uVar13) {
          uVar11 = uVar13;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - (long)plVar4)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar2;
        if (uVar11 >> 0x3c == 0) {
          lVar8 = uVar11 << 4;
          __Znwm();
          lVar3 = lVar8 + lVar12;
          _bzero(lVar3,uVar18 * 0x10);
          lVar14 = lVar3 + uVar17 * -0x10;
          _memcpy(lVar14,plVar4,lVar12);
          *plVar2 = lVar14;
          plVar9[0x4c] = lVar3 + uVar18 * 0x10;
          plVar9[0x4d] = lVar8 + uVar11 * 0x10;
          plStack_88 = plVar4;
          plStack_80 = plVar4;
          plStack_78 = plVar4;
          lStack_70 = lVar16;
          func_0x00010988c1b8(&plStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar7)();
    }
    _bzero(plVar15,uVar18 * 0x10);
    plVar9[0x4c] = (long)(plVar15 + uVar18 * 2);
  }
  else if (uVar13 < uVar17) {
    while (plVar15 != plVar4 + uVar13 * 2) {
      plVar15 = plVar15 + -2;
      func_0x00010988c204(plVar15);
    }
    plVar9[0x4c] = (long)(plVar4 + uVar13 * 2);
  }
code_r0x00010988c138:
  plVar9[0x5a] = uVar13;
  return;
}



/* Entry: 10a13a4fc; end: 10a13a51f;  */

void FUN_10a13a4fc(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  long *plStack_48;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar1 = (long *)0x2;
  puVar2 = (undefined8 *)0x0;
  FUN_10a052ee0(2,0,param_1);
  puStack_50 = puVar2;
  plStack_48 = plVar1;
  FUN_10a13a600(&puStack_38);
  aiStack_40[0] = 7;
  (**(code **)(*plVar1 + 0x30))(&puStack_58,plVar1);
  func_0x0001098843c0(&puStack_50,&puStack_58,plVar1,&UNK_10f634758);
  (**(code **)(*plVar1 + 0x2b0))(extraout_x8,plVar1,&puStack_50,aiStack_40,1);
  if (puStack_50 != (undefined8 *)0x0) {
    (**(code **)*puStack_50)();
  }
  if (puStack_58 != (undefined8 *)0x0) {
    (**(code **)*puStack_58)();
  }
  if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  return;
}



/* Entry: 10a13a520; end: 10a13a5ff;  */

void FUN_10a13a520(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  int aiStack_30 [2];
  undefined8 *puStack_28;
  
  puStack_40 = param_3;
  plStack_38 = param_2;
  FUN_10a13a600(&puStack_28,param_2,2,&puStack_40);
  aiStack_30[0] = 7;
  (**(code **)(*param_2 + 0x30))(&puStack_48,param_2);
  func_0x0001098843c0(&puStack_40,&puStack_48,param_2,&UNK_10f634758);
  (**(code **)(*param_2 + 0x2b0))(param_1,param_2,&puStack_40,aiStack_30,1);
  if (puStack_40 != (undefined8 *)0x0) {
    (**(code **)*puStack_40)();
  }
  if (puStack_48 != (undefined8 *)0x0) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_30[0]) && (puStack_28 != (undefined8 *)0x0)) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a13a600; end: 10a13a71b;  */

void FUN_10a13a600(undefined8 param_1,long *param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 **ppuVar4;
  code **ppcVar5;
  undefined4 *extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined8 uStack_110;
  int iStack_108;
  undefined8 *puStack_100;
  int aiStack_f8 [2];
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  ppuVar4 = &puStack_90;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*param_2 + 0xb0))(&puStack_90,param_2,0,0);
  pcStack_88 = FUN_10a13a71c;
  ppuStack_80 = &PTR_FUN_110ba7268;
  uStack_70 = param_4[1];
  uStack_78 = *param_4;
  ppcVar5 = &pcStack_88;
  (**(code **)(*param_2 + 0x2a0))(param_1,param_2,&puStack_90,param_3,ppcVar5);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  puVar2 = puStack_90;
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
    puVar2 = puStack_90;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((int)ppuVar4 == 0) {
    __Unwind_Resume(puVar2);
  }
  else {
    (*(code *)*ppuStack_80)(&ppuStack_80);
  }
  func_0x000104bd46a0(puVar2);
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  plVar3 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar3 + 0x58))(plVar3,puVar2,ppuVar4,param_3,ppcVar5);
  lVar6 = plVar3[0x47];
  uVar8 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_f8,uVar8,param_3);
  iStack_e0 = aiStack_f8[0];
  if (aiStack_f8[0] == 3) {
    puStack_d8 = puStack_f0;
  }
  else if (aiStack_f8[0] == 2) {
    puStack_d8 = (undefined8 *)CONCAT71(puStack_d8._1_7_,puStack_f0._0_1_);
  }
  else if (3 < aiStack_f8[0]) {
    puStack_d8 = puStack_f0;
    puStack_f0 = (undefined8 *)0x0;
  }
  aiStack_f8[0] = 0;
  uVar7 = *(undefined8 *)(param_6 + 0x18);
  uStack_e8 = uVar8;
  func_0x0001098849a4(aiStack_120,uVar7,param_3 + 0x10);
  iStack_108 = aiStack_120[0];
  if (aiStack_120[0] == 3) {
    puStack_100 = puStack_118;
  }
  else if (aiStack_120[0] == 2) {
    puStack_100 = (undefined8 *)CONCAT71(puStack_100._1_7_,puStack_118._0_1_);
  }
  else if (3 < aiStack_120[0]) {
    puStack_100 = puStack_118;
    puStack_118 = (undefined8 *)0x0;
  }
  aiStack_120[0] = 0;
  uStack_110 = uVar7;
  FUN_10a13a96c(uVar1,lVar6,&uStack_e8,&uStack_110);
  if ((3 < iStack_108) && (puStack_100 != (undefined8 *)0x0)) {
    (**(code **)*puStack_100)();
  }
  if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
    (**(code **)*puStack_118)();
  }
  if ((3 < iStack_e0) && (puStack_d8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_d8)();
  }
  if ((3 < aiStack_f8[0]) && (puStack_f0 != (undefined8 *)0x0)) {
    (**(code **)*puStack_f0)();
  }
  *extraout_x8 = 0;
  return;
}



/* Entry: 10a13a71c; end: 10a13a737;  */

void FUN_10a13a71c(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 *puStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uVar1 = *(undefined8 *)(param_6 + 0x10);
  plVar2 = *(long **)(param_6 + 0x18);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4,param_5);
  lVar3 = plVar2[0x47];
  uVar5 = *(undefined8 *)(param_6 + 0x18);
  func_0x0001098849a4(aiStack_68,uVar5,param_4);
  iStack_50 = aiStack_68[0];
  if (aiStack_68[0] == 3) {
    puStack_48 = puStack_60;
  }
  else if (aiStack_68[0] == 2) {
    puStack_48 = (undefined8 *)CONCAT71(puStack_48._1_7_,puStack_60._0_1_);
  }
  else if (3 < aiStack_68[0]) {
    puStack_48 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
  }
  aiStack_68[0] = 0;
  uVar4 = *(undefined8 *)(param_6 + 0x18);
  uStack_58 = uVar5;
  func_0x0001098849a4(aiStack_90,uVar4,param_4 + 0x10);
  iStack_78 = aiStack_90[0];
  if (aiStack_90[0] == 3) {
    puStack_70 = puStack_88;
  }
  else if (aiStack_90[0] == 2) {
    puStack_70 = (undefined8 *)CONCAT71(puStack_70._1_7_,puStack_88._0_1_);
  }
  else if (3 < aiStack_90[0]) {
    puStack_70 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
  }
  aiStack_90[0] = 0;
  uStack_80 = uVar4;
  FUN_10a13a96c(uVar1,lVar3,&uStack_58,&uStack_80);
  if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a13a738; end: 10a13a96b;  */

void FUN_10a13a738(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 *puStack_70;
  int aiStack_68 [2];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 *puStack_48;
  
  uVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = plVar2[0x47];
  uVar5 = param_2[1];
  func_0x0001098849a4(aiStack_68,uVar5,param_5);
  iStack_50 = aiStack_68[0];
  if (aiStack_68[0] == 3) {
    puStack_48 = puStack_60;
  }
  else if (aiStack_68[0] == 2) {
    puStack_48 = (undefined8 *)CONCAT71(puStack_48._1_7_,puStack_60._0_1_);
  }
  else if (3 < aiStack_68[0]) {
    puStack_48 = puStack_60;
    puStack_60 = (undefined8 *)0x0;
  }
  aiStack_68[0] = 0;
  uVar4 = param_2[1];
  uStack_58 = uVar5;
  func_0x0001098849a4(aiStack_90,uVar4,param_5 + 0x10);
  iStack_78 = aiStack_90[0];
  if (aiStack_90[0] == 3) {
    puStack_70 = puStack_88;
  }
  else if (aiStack_90[0] == 2) {
    puStack_70 = (undefined8 *)CONCAT71(puStack_70._1_7_,puStack_88._0_1_);
  }
  else if (3 < aiStack_90[0]) {
    puStack_70 = puStack_88;
    puStack_88 = (undefined8 *)0x0;
  }
  aiStack_90[0] = 0;
  uStack_80 = uVar4;
  FUN_10a13a96c(uVar1,lVar3,&uStack_58,&uStack_80);
  if ((3 < iStack_78) && (puStack_70 != (undefined8 *)0x0)) {
    (**(code **)*puStack_70)();
  }
  if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
    (**(code **)*puStack_88)();
  }
  if ((3 < iStack_50) && (puStack_48 != (undefined8 *)0x0)) {
    (**(code **)*puStack_48)();
  }
  if ((3 < aiStack_68[0]) && (puStack_60 != (undefined8 *)0x0)) {
    (**(code **)*puStack_60)();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a13a96c; end: 10a13ab2f;  */

void FUN_10a13a96c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 *puStack_d8;
  long *plStack_d0;
  int iStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  int iStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 uStack_61;
  long lStack_60;
  int iStack_58;
  undefined4 uStack_54;
  long *plStack_50;
  long lStack_48;
  int iStack_40;
  long *plStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == 0) {
    plVar2 = (long *)&UNK_10f634760;
    plVar3 = (long *)0x34;
    FUN_10a13ab30(&lStack_60,&uStack_61,*param_4);
    param_2 = &lStack_60;
    FUN_10a05589c();
    if ((int)lStack_60 < 4) goto LAB_10a13aac0;
    plVar1 = (long *)CONCAT44(uStack_54,iStack_58);
  }
  else {
    lStack_60 = *param_3;
    iStack_58 = (int)param_3[1];
    if (iStack_58 == 3) {
      plStack_50 = (long *)param_3[2];
    }
    else if (iStack_58 == 2) {
      plStack_50 = (long *)CONCAT71(plStack_50._1_7_,(char)param_3[2]);
    }
    else if (3 < iStack_58) {
      plStack_50 = (long *)param_3[2];
      param_3[2] = 0;
    }
    *(undefined4 *)(param_3 + 1) = 0;
    lStack_48 = *param_4;
    iStack_40 = (int)param_4[1];
    if (iStack_40 == 3) {
      plStack_38 = (long *)param_4[2];
    }
    else if (iStack_40 == 2) {
      plStack_38 = (long *)CONCAT71(plStack_38._1_7_,(char)param_4[2]);
    }
    else if (3 < iStack_40) {
      plStack_38 = (long *)param_4[2];
      param_4[2] = 0;
    }
    *(undefined4 *)(param_4 + 1) = 0;
    plVar2 = &lStack_60;
    FUN_10a13ac64();
    plVar3 = param_4;
    if ((3 < iStack_40) && (param_1 = plStack_38, plStack_38 != (long *)0x0)) {
      (**(code **)*plStack_38)();
      plVar3 = param_4;
    }
    param_4 = param_1;
    plVar1 = plStack_50;
    if (iStack_58 < 4) goto LAB_10a13aac0;
  }
  param_4 = plVar1;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)();
  }
LAB_10a13aac0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if ((3 < (int)lStack_60) && ((undefined8 *)CONCAT44(uStack_54,iStack_58) != (undefined8 *)0x0))
    {
      (*(code *)**(undefined8 **)CONCAT44(uStack_54,iStack_58))();
    }
    __Unwind_Resume(param_4);
    plStack_a0 = plVar2;
    plStack_98 = plVar3;
    (**(code **)(*param_2 + 0x30))(&puStack_d8,param_2);
    puStack_c0 = puStack_d8;
    puStack_d8 = (undefined8 *)0x0;
    iStack_c8 = 7;
    plStack_d0 = param_2;
    FUN_10a055e1c(auStack_b8,&plStack_d0,&DAT_10f685520);
    FUN_10a055f9c(extraout_x8,auStack_b8,&plStack_a0);
    if ((3 < iStack_b0) && (puStack_a8 != (undefined8 *)0x0)) {
      (**(code **)*puStack_a8)();
    }
    if ((3 < iStack_c8) && (puStack_c0 != (undefined8 *)0x0)) {
      (**(code **)*puStack_c0)();
    }
    if (puStack_d8 != (undefined8 *)0x0) {
      (**(code **)*puStack_d8)();
    }
    return;
  }
  return;
}



/* Entry: 10a13ab30; end: 10a13ac63;  */

void FUN_10a13ab30(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puStack_68;
  long *plStack_60;
  int iStack_58;
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  int iStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_3 + 0x30))(&puStack_68,param_3);
  puStack_50 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  iStack_58 = 7;
  plStack_60 = param_3;
  FUN_10a055e1c(auStack_48,&plStack_60,&DAT_10f685520);
  FUN_10a055f9c(param_1,auStack_48,&uStack_30);
  if ((3 < iStack_40) && (puStack_38 != (undefined8 *)0x0)) {
    (**(code **)*puStack_38)();
  }
  if ((3 < iStack_58) && (puStack_50 != (undefined8 *)0x0)) {
    (**(code **)*puStack_50)();
  }
  if (puStack_68 != (undefined8 *)0x0) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a13ac64; end: 10a13ae7f;  */

void FUN_10a13ac64(long *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plStack_40;
  undefined1 auStack_38 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) == 0) {
    FUN_10a13b21c(&plStack_40,param_2,auStack_38,param_1,param_3);
    if (plStack_40 == (long *)0x0) {
      return;
    }
    puVar1 = (ulong *)(plStack_40 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) {
      return;
    }
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 != 0) {
      return;
    }
    pcVar5 = *(code **)(*plStack_40 + 8);
    plVar7 = plStack_40;
  }
  else {
    plVar7 = (long *)*param_1;
    *param_1 = 0;
    if (((uint)plVar7[2] >> 5 & 1) == 0) {
      if ((((uint)plVar7[2] >> 1 & 1) == 0) || (((uint)plVar7[2] >> 5 & 1) != 0)) {
        if (((uint)plVar7[2] >> 5 & 1) == 0) {
          puVar4 = (undefined8 *)0x10;
          ___cxa_allocate_exception();
          __ZNSt13runtime_errorC2EPKc();
          *puVar4 = &PTR_DAT_110ae85c0;
          ___cxa_throw(puVar4,&PTR_DAT_110ae8598,&DAT_1092af9d8);
        }
        else {
          __ZNSt13exception_ptrC1ERKS_(auStack_38,plVar7 + 0x12);
          func_0x0001092af97c(auStack_38);
        }
LAB_10a13ae08:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a13ae0c);
        (*pcVar5)();
      }
      if ((*(byte *)(plVar7 + 0x15) & 1) == 0) goto LAB_10a13ae08;
      FUN_10a13aee0(param_3,plVar7 + 0x13);
    }
    else {
      __ZNSt13exception_ptrC1ERKS_(auStack_38,plVar7 + 0x12);
      FUN_10a13afcc(param_3 + 0x18,auStack_38);
      __ZNSt13exception_ptrD1Ev(auStack_38);
    }
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) != 4) {
      return;
    }
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar6 - 1 != 0) {
      return;
    }
    pcVar5 = *(code **)(*plVar7 + 8);
  }
  (*pcVar5)(plVar7);
  return;
}



/* Entry: 10a13ae80; end: 10a13aedf;  */

long FUN_10a13ae80(long param_1)

{
  if ((3 < *(int *)(param_1 + 0x20)) && (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x28))();
  }
  if ((3 < *(int *)(param_1 + 8)) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
  }
  return param_1;
}



/* Entry: 10a13aee0; end: 10a13afcb;  */

void FUN_10a13aee0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  func_0x000109884c0c(&puStack_30,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_28,&puStack_30,*param_1);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_30);
  FUN_10a13b124(*param_1,&puStack_30,&puStack_28,param_2);
  if (puStack_30 != (undefined8 *)0x0) {
    (**(code **)*puStack_30)();
  }
  if (puStack_28 != (undefined8 *)0x0) {
    (**(code **)*puStack_28)();
  }
  return;
}



/* Entry: 10a13afcc; end: 10a13b123;  */

void FUN_10a13afcc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001092af97c(param_2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a13aff4);
  (*pcVar1)();
}



/* Entry: 10a13b124; end: 10a13b21b;  */

void FUN_10a13b124(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  if (*param_4 == 0) {
    aiStack_70[0] = 1;
  }
  else {
    func_0x0001098849a4(aiStack_70,param_1,*(undefined8 *)(*param_4 + 0x10));
  }
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*param_1 + 0x58))(param_1);
  ppuStack_48 = &piStack_40;
  uStack_60 = param_3;
  plStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  return;
}



/* Entry: 10a13b21c; end: 10a13b7c7;  */

void FUN_10a13b21c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xe8;
  __Znwm();
  *puVar6 = FUN_10a146600;
  puVar6[1] = FUN_10a146a64;
  func_0x0001092ba17c(puVar6 + 2);
  lVar9 = puVar6[7];
  if (lVar9 != 0) {
    plVar8 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar9;
  uVar10 = *param_4;
  *param_4 = 0;
  uVar11 = *param_5;
  puVar6[9] = uVar10;
  puVar6[10] = uVar11;
  iVar2 = *(int *)(param_5 + 1);
  *(int *)(puVar6 + 0xb) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xc] = param_5[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xc) = *(undefined1 *)(param_5 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xc] = param_5[2];
    param_5[2] = 0;
  }
  *(undefined4 *)(param_5 + 1) = 0;
  puVar6[0xd] = param_5[3];
  iVar2 = *(int *)(param_5 + 4);
  *(int *)(puVar6 + 0xe) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xf] = param_5[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xf) = *(undefined1 *)(param_5 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xf] = param_5[5];
    param_5[5] = 0;
  }
  *(undefined4 *)(param_5 + 4) = 0;
  puVar6[0x18] = param_2;
  *(undefined1 *)(puVar6 + 0x19) = 0;
  *(undefined1 *)(puVar6 + 0x1c) = 0;
  puVar7 = puVar6 + 0x18;
  func_0x0001092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x1b] = puVar6[9];
    puVar6[9] = 0;
    puVar6[0x11] = puVar6[10];
    iVar2 = *(int *)(puVar6 + 0xb);
    *(int *)(puVar6 + 0x12) = iVar2;
    if (iVar2 == 3) {
      puVar6[0x13] = puVar6[0xc];
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(puVar6 + 0x13) = *(undefined1 *)(puVar6 + 0xc);
    }
    else if (3 < iVar2) {
      puVar6[0x13] = puVar6[0xc];
      puVar6[0xc] = 0;
    }
    *(undefined4 *)(puVar6 + 0xb) = 0;
    puVar6[0x14] = puVar6[0xd];
    iVar2 = *(int *)(puVar6 + 0xe);
    *(int *)(puVar6 + 0x15) = iVar2;
    if (iVar2 == 3) {
      puVar6[0x16] = puVar6[0xf];
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(puVar6 + 0x16) = *(undefined1 *)(puVar6 + 0xf);
    }
    else if (3 < iVar2) {
      puVar6[0x16] = puVar6[0xf];
      puVar6[0xf] = 0;
    }
    *(undefined4 *)(puVar6 + 0xe) = 0;
    FUN_10a13b7c8(puVar6 + 0x1a,(long)puVar6 + 0xe1,puVar6 + 0x1b,puVar6 + 0x11);
    puVar6[0x18] = puVar6[0x1a];
    plVar8 = (long *)(puVar6[0x1a] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x1c) = 1;
      lVar9 = puVar6[0x18];
      plVar8 = (long *)(lVar9 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar13 = *plVar8;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_58);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x18];
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x1a];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      if ((3 < *(int *)(puVar6 + 0x15)) && ((undefined8 *)puVar6[0x16] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0x16])();
      }
      if ((3 < *(int *)(puVar6 + 0x12)) && ((undefined8 *)puVar6[0x13] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0x13])();
      }
      plVar8 = (long *)puVar6[0x1b];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar6 + 2);
      if ((3 < *(int *)(puVar6 + 0xe)) && ((undefined8 *)puVar6[0xf] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0xf])();
      }
      if ((3 < *(int *)(puVar6 + 0xb)) && ((undefined8 *)puVar6[0xc] != (undefined8 *)0x0)) {
        (*(code *)**(undefined8 **)puVar6[0xc])();
      }
      plVar8 = (long *)puVar6[9];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(puVar6 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar6);
      return;
    }
    func_0x0001092af97c(plVar8 + 0x12);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a13b690);
    (*pcVar5)();
  }
  return;
}



/* Entry: 10a13b7c8; end: 10a13bd5f;  */

void FUN_10a13b7c8(long *param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar6 = (undefined8 *)0xb0;
  __Znwm();
  *puVar6 = FUN_10a145ffc;
  puVar6[1] = FUN_10a146408;
  lVar10 = *param_3;
  *param_3 = 0;
  puVar6[9] = *param_4;
  plVar9 = puVar6 + 0x10;
  *plVar9 = lVar10;
  iVar2 = *(int *)(param_4 + 1);
  *(int *)(puVar6 + 10) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xb] = param_4[2];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xb) = *(undefined1 *)(param_4 + 2);
  }
  else if (3 < iVar2) {
    puVar6[0xb] = param_4[2];
    param_4[2] = 0;
  }
  *(undefined4 *)(param_4 + 1) = 0;
  puVar6[0xc] = param_4[3];
  iVar2 = *(int *)(param_4 + 4);
  *(int *)(puVar6 + 0xd) = iVar2;
  if (iVar2 == 3) {
    puVar6[0xe] = param_4[5];
  }
  else if (iVar2 == 2) {
    *(undefined1 *)(puVar6 + 0xe) = *(undefined1 *)(param_4 + 5);
  }
  else if (3 < iVar2) {
    puVar6[0xe] = param_4[5];
    param_4[5] = 0;
  }
  *(undefined4 *)(param_4 + 4) = 0;
  func_0x0001092ba17c(puVar6 + 2);
  lVar10 = puVar6[7];
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  puVar6[0x12] = 0;
  *(undefined1 *)(puVar6 + 0x15) = 0;
  puVar7 = puVar6 + 0x12;
  FUN_10a057268(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    puVar6[0x11] = puVar6[0x12];
    FUN_10a13be08(puVar6 + 0x13,puVar6 + 0x11,plVar9);
    puVar6[0x12] = puVar6[0x13];
    plVar8 = (long *)(puVar6[0x13] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x12] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x15) = 1;
      lVar10 = puVar6[0x12];
      plVar8 = (long *)(lVar10 + 0x10);
      uStack_48 = puVar6[3];
      do {
        lVar12 = *plVar8;
        if (lVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_58 = 0;
            puStack_50 = puVar6;
            func_0x000109d1b588(lVar10 + 0x18,&uStack_58);
            *(undefined8 *)(lVar10 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar12 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x12];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x13];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((uint)*(undefined8 *)(puVar6[0x11] + 0x10) >> 1 & 1) == 0) {
      lVar10 = *plVar9;
      puVar6[0x14] = lVar10;
      *plVar9 = 0;
      if (((uint)*(undefined8 *)(lVar10 + 0x10) >> 5 & 1) == 0) {
        func_0x0001092af8bc(puVar6 + 0x14);
        if ((*(byte *)(puVar6[0x14] + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a13bc14);
          (*pcVar5)();
        }
        FUN_10a13aee0(puVar6 + 9,puVar6[0x14] + 0x98);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58,puVar6[0x14] + 0x90);
        FUN_10a13afcc(puVar6 + 0xc,&uStack_58);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      plVar8 = (long *)puVar6[0x14];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar11 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
    }
    func_0x0001092ba100(puVar6 + 2);
    plVar8 = (long *)puVar6[0x11];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    if ((3 < *(int *)(puVar6 + 0xd)) && ((undefined8 *)puVar6[0xe] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xe])();
    }
    if ((3 < *(int *)(puVar6 + 10)) && ((undefined8 *)puVar6[0xb] != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)puVar6[0xb])();
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar11 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar11 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar11 & 0x1fffffffc) == 4) {
        do {
          uVar11 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar11 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    __ZdlPv(puVar6);
  }
  return;
}



/* Entry: 10a13bd60; end: 10a13be07;  */

long * FUN_10a13bd60(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if ((3 < (int)param_1[5]) && ((undefined8 *)param_1[6] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[6])();
  }
  if ((3 < (int)param_1[2]) && ((undefined8 *)param_1[3] != (undefined8 *)0x0)) {
    (*(code *)**(undefined8 **)param_1[3])();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a13be08; end: 10a13beeb;  */

void FUN_10a13be08(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plStack_28;
  
  plStack_28 = (long *)*param_2;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a13beec(param_1,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_28 + 1);
    do {
      uVar5 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar5 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar5 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  return;
}



/* Entry: 10a13beec; end: 10a13c45f;  */

/* WARNING: Removing unreachable block (ram,0x00010a13c034) */
/* WARNING: Removing unreachable block (ram,0x00010a13c244) */
/* WARNING: Removing unreachable block (ram,0x00010a13bff4) */
/* WARNING: Removing unreachable block (ram,0x00010a13c188) */

void FUN_10a13beec(long *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  plVar4 = (long *)0x118;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
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
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 0;
  *plVar4 = (long)&PTR_FUN_110ba7240;
  plVar9 = plVar4 + 0x16;
  *plVar9 = *param_3;
  *param_3 = 0;
  lVar5 = *param_2;
  plVar4[0x17] = lVar5;
  if (lVar5 != 0) {
    plVar10 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0x32aaaba7;
  plVar4[0x1d] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[0x22] = 0;
  lStack_78 = 0;
  plVar4[0x18] = (long)plVar4;
  plVar4[0x19] = 0;
  plStack_70 = plVar9;
  if (((uint)*(undefined8 *)(plVar4[0x17] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1b);
    lVar5 = *plVar9;
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = lVar5 + 0x18;
          pcStack_68 = FUN_10a13c460;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar9;
          func_0x000109d1b588(lVar7,&pcStack_68);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          plStack_70[3] = lVar7;
          lVar5 = plVar4[0x17];
          plVar10 = (long *)(lVar5 + 0x10);
          goto LAB_10a13c174;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar5 = plVar4[0x18];
    plVar10 = (long *)(lVar5 + 0x10);
    do {
      lVar7 = *plVar10;
      if (lVar7 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar5 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar7 >> 1 & 1) == 0);
    plVar10 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
    }
    lVar5 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = *plVar9;
    *plVar9 = 0;
    plStack_80 = plVar4;
LAB_10a13c3b4:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1b);
  }
  else {
    lVar5 = plVar4[0x18];
    plVar10 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar5,plVar10);
    plVar10 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar10 != (long *)0x0) {
      puVar1 = (ulong *)(plVar10 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x17];
    plVar4[0x17] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar5 = plVar4[0x18];
    plVar4[0x18] = 0;
    if (lVar5 != 0) {
      func_0x0001092b4274(plVar4 + 0x18);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a13c174:
  do {
    lVar8 = *plVar10;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar7 = lVar5 + 0x18;
        pcStack_68 = FUN_10a13c570;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar9;
        func_0x000109d1b588(lVar7,&pcStack_68);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        plStack_70[4] = lVar7;
        *param_1 = (long)plVar4;
        goto LAB_10a13c3b0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar8 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar5 = plVar4[0x18];
  FUN_109d1857c();
  func_0x000109d1b350(lVar5,lVar7);
  plVar10 = (long *)plVar4[0x17];
  plVar4[0x17] = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
    }
  }
  lVar7 = *plVar9;
  plVar10 = (long *)(lVar7 + 0x10);
  lVar5 = plStack_70[3];
  while (lVar8 = *plVar10, lVar8 != 0) {
    ClearExclusiveLocal();
LAB_10a13c258:
    if (((uint)lVar8 >> 1 & 1) != 0) goto LAB_10a13c3a8;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar3) {
    *plVar10 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a13c258;
  pcStack_68 = FUN_10a13c460;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar9;
  FUN_109d1b624(lVar7 + 0x18,&pcStack_68,lVar5);
  *(undefined8 *)(lVar7 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar10 = (long *)*plVar9;
  *plVar9 = 0;
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  lVar5 = plVar4[0x18];
  plVar4[0x18] = 0;
  if (lVar5 != 0) {
    func_0x0001092b4274(plVar4 + 0x18);
  }
LAB_10a13c3a8:
  *param_1 = (long)plVar4;
LAB_10a13c3b0:
  plStack_80 = (long *)0x0;
  goto LAB_10a13c3b4;
}



/* Entry: 10a13c460; end: 10a13c56f;  */

void FUN_10a13c460(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  pcStack_38 = FUN_10a13c570;
  ppuStack_28 = &PTR_PTR_1132fed68;
  plStack_30 = param_1;
  func_0x0001092ba560(param_1 + 1,param_1 + 4,&pcStack_38);
  lVar7 = param_1[2];
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    func_0x0001092af8bc(param_1);
    if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a13c56c);
      (*pcVar4)();
    }
    FUN_10a13c980(lVar7,*param_1 + 0x98);
  }
  else {
    __ZNSt13exception_ptrC1ERKS_(&pcStack_38,*param_1 + 0x90);
    func_0x000109d1b350(lVar7,&pcStack_38);
    __ZNSt13exception_ptrD1Ev(&pcStack_38);
  }
  plVar5 = (long *)*param_1;
  *param_1 = 0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  FUN_10a13c910(param_1,param_1 + 3);
  return;
}



/* Entry: 10a13c570; end: 10a13c64f;  */

void FUN_10a13c570(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x28);
  pcStack_48 = FUN_10a13c460;
  ppuStack_38 = &PTR_PTR_1132fed68;
  lVar4 = param_1;
  lStack_40 = param_1;
  func_0x0001098adf90(param_1,param_1 + 0x18,&pcStack_48);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  FUN_109d1857c();
  func_0x000109d1b350(uVar6,lVar4);
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  FUN_10a13c910(param_1,param_1 + 0x20);
  return;
}



/* Entry: 10a13c650; end: 10a13c6c3;  */

long * FUN_10a13c650(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[1] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a13c6c4; end: 10a13c90f;  */

undefined8 * FUN_10a13c6c4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_110ba7240;
  __ZNSt3__15mutexD1Ev(param_1 + 0x1b);
  if (param_1[0x18] != 0) {
    func_0x0001092b4274();
  }
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  *param_1 = &PTR_FUN_110ba6b10;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    func_0x00010a12c080(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a13c910; end: 10a13c97f;  */

void FUN_10a13c910(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lStack_28;
  
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x20) == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    __ZNSt3__15mutex6unlockEv(param_1 + 0x28);
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x0001092b4274(&lStack_28,lVar1);
      if (lStack_28 != 0) {
        func_0x0001092b4274(&lStack_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x28);
  return;
}



/* Entry: 10a13c980; end: 10a13c9f7;  */

undefined1 FUN_10a13c980(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    if (lVar4 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_10a13c9f8(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x10) = 2;
        FUN_109d1b4dc(param_1 + 0x18);
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar4 >> 1 & 1) != 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 10a13c9f8; end: 10a13ca53;  */

void FUN_10a13c9f8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x00010a12c080();
    *(undefined1 *)(param_1 + 2) = 0;
  }
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
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
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a13ca54; end: 10a13ca9b;  */

void FUN_10a13ca54(void)

{
  return;
}



/* Entry: 10a13ca9c; end: 10a13cabb;  */

void FUN_10a13ca9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ba7638;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a13cabc; end: 10a13cacb;  */

void FUN_10a13cabc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a13cac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a13cacc; end: 10a13cb77;  */

long FUN_10a13cacc(long param_1)

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



/* Entry: 10a13cb78; end: 10a13cbe3;  */

bool FUN_10a13cb78(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar6 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 10a13cbe4; end: 10a13ce2f;  */

undefined1  [16]
FUN_10a13cbe4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long lVar5;
  long **pplVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long **unaff_x27;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_78 [3];
  
  pplVar6 = aplStack_78;
  func_0x000107c2b05c();
  pplVar9 = (long **)param_1[1];
  if (pplVar9 != (long **)0x0) {
    uVar10 = (long)pplVar9 - 1;
    if (((ulong)pplVar9 & uVar10) == 0) {
      unaff_x27 = (long **)(uVar10 & (ulong)pplVar6);
    }
    else {
      unaff_x27 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar7 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar7 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x27 = (long **)((long)pplVar6 - uVar7 * (long)pplVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        pplVar4 = (long **)plVar8[1];
        if (pplVar4 == pplVar6) {
          plVar1 = plVar8 + 2;
          FUN_10a13cb78(plVar1,param_2);
          if (((ulong)plVar1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10a13cdec;
          }
        }
        else {
          if (((ulong)pplVar9 & uVar10) == 0) {
            pplVar4 = (long **)((ulong)pplVar4 & uVar10);
          }
          else if (pplVar9 <= pplVar4) {
            uVar7 = 0;
            if (pplVar9 != (long **)0x0) {
              uVar7 = (ulong)pplVar4 / (ulong)pplVar9;
            }
            pplVar4 = (long **)((long)pplVar4 - uVar7 * (long)pplVar9);
          }
          if (pplVar4 != unaff_x27) break;
        }
      }
    }
  }
  FUN_10a13ce30(aplStack_78,param_1,pplVar6,param_3,param_4,param_5);
  if ((pplVar9 == (long **)0x0) ||
     (*(float *)(param_1 + 4) * (float)pplVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if ((long **)0x2 < pplVar9) {
      uVar10 = (ulong)(((ulong)pplVar9 & (long)pplVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)pplVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    FUN_10a13cfa8(param_1,uVar10);
    pplVar9 = (long **)param_1[1];
    if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
      unaff_x27 = (long **)((long)pplVar9 - 1U & (ulong)pplVar6);
    }
    else {
      unaff_x27 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x27 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + (long)unaff_x27 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
    *(long **)(lVar5 + (long)unaff_x27 * 8) = plVar8;
    if (*aplStack_78[0] != 0) {
      pplVar6 = *(long ***)(*aplStack_78[0] + 8);
      if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
        pplVar6 = (long **)((ulong)pplVar6 & (long)pplVar9 - 1U);
      }
      else if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        pplVar6 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
      *(long **)(*param_1 + (long)pplVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar8;
    *plVar8 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
  plVar8 = aplStack_78[0];
LAB_10a13cdec:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a13ce30; end: 10a13ceaf;  */

void FUN_10a13ce30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uStack_38 = *param_5;
  FUN_10a13ceb0(puVar1 + 2,&uStack_38,&uStack_39);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a13ceb0; end: 10a13cfa7;  */

undefined8 * FUN_10a13ceb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  func_0x000107c2b054(param_1 + 3,&UNK_10f63ce51);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  func_0x000107c2b054(param_1 + 8,&UNK_10f63ce51);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  return param_1;
}



/* Entry: 10a13cfa8; end: 10a13d077;  */

void FUN_10a13cfa8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10a13cff0:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000109ffded8();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010a12d338(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10a13cff0;
  }
  return;
}



/* Entry: 10a13d078; end: 10a13d1fb;  */

void FUN_10a13d078(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000109ffded8();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010a12d338(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



/* Entry: 10a13d1fc; end: 10a13d26f;  */

undefined8 * FUN_10a13d1fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_10a13cfa8(param_1,*(undefined8 *)(param_2 + 8));
  for (plVar1 = *(long **)(param_2 + 0x10); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10a13d270(param_1,plVar1 + 2,plVar1 + 2);
  }
  return param_1;
}



/* Entry: 10a13d270; end: 10a13d4a3;  */

undefined1  [16] FUN_10a13d270(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long **pplVar4;
  long lVar5;
  long **pplVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long **unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *aplStack_68 [3];
  
  pplVar6 = aplStack_68;
  func_0x000107c2b05c();
  pplVar9 = (long **)param_1[1];
  if (pplVar9 != (long **)0x0) {
    uVar10 = (long)pplVar9 - 1;
    if (((ulong)pplVar9 & uVar10) == 0) {
      unaff_x25 = (long **)(uVar10 & (ulong)pplVar6);
    }
    else {
      unaff_x25 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar7 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar7 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x25 = (long **)((long)pplVar6 - uVar7 * (long)pplVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        pplVar4 = (long **)plVar8[1];
        if (pplVar4 == pplVar6) {
          plVar1 = plVar8 + 2;
          FUN_10a13cb78(plVar1,param_2);
          if (((ulong)plVar1 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10a13d464;
          }
        }
        else {
          if (((ulong)pplVar9 & uVar10) == 0) {
            pplVar4 = (long **)((ulong)pplVar4 & uVar10);
          }
          else if (pplVar9 <= pplVar4) {
            uVar7 = 0;
            if (pplVar9 != (long **)0x0) {
              uVar7 = (ulong)pplVar4 / (ulong)pplVar9;
            }
            pplVar4 = (long **)((long)pplVar4 - uVar7 * (long)pplVar9);
          }
          if (pplVar4 != unaff_x25) break;
        }
      }
    }
  }
  FUN_10a13d4a4(aplStack_68,param_1,pplVar6,param_3);
  if ((pplVar9 == (long **)0x0) ||
     (*(float *)(param_1 + 4) * (float)pplVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if ((long **)0x2 < pplVar9) {
      uVar10 = (ulong)(((ulong)pplVar9 & (long)pplVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)pplVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    FUN_10a13cfa8(param_1,uVar10);
    pplVar9 = (long **)param_1[1];
    if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
      unaff_x25 = (long **)((long)pplVar9 - 1U & (ulong)pplVar6);
    }
    else {
      unaff_x25 = pplVar6;
      if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        unaff_x25 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
    }
  }
  lVar5 = *param_1;
  plVar8 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *aplStack_68[0] = *plVar8;
    *plVar8 = (long)aplStack_68[0];
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar8;
    if (*aplStack_68[0] != 0) {
      pplVar6 = *(long ***)(*aplStack_68[0] + 8);
      if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
        pplVar6 = (long **)((ulong)pplVar6 & (long)pplVar9 - 1U);
      }
      else if (pplVar9 <= pplVar6) {
        uVar10 = 0;
        if (pplVar9 != (long **)0x0) {
          uVar10 = (ulong)pplVar6 / (ulong)pplVar9;
        }
        pplVar6 = (long **)((long)pplVar6 - uVar10 * (long)pplVar9);
      }
      *(long **)(*param_1 + (long)pplVar6 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar8;
    *plVar8 = (long)aplStack_68[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
  plVar8 = aplStack_68[0];
LAB_10a13d464:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10a13d4a4; end: 10a13d50f;  */

void FUN_10a13d4a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc0;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a13d510(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a13d510; end: 10a13d583;  */

undefined8 * FUN_10a13d510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  FUN_10a13d584(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 10a13d584; end: 10a13d68f;  */

undefined8 * FUN_10a13d584(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar1;
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(param_1 + 5,param_2[5],param_2[6]);
  }
  else {
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[5] = uVar1;
  }
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  FUN_10a13d690(param_1 + 10,param_2 + 10);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  FUN_10a13d690(param_1 + 0xf,param_2 + 0xf);
  return param_1;
}



/* Entry: 10a13d690; end: 10a13d6e3;  */

undefined1 * FUN_10a13d690(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10a13d6e4();
  return param_1;
}



/* Entry: 10a13d6e4; end: 10a13d7db;  */

void FUN_10a13d6e4(undefined8 *param_1,long *param_2)

{
  if ((char)param_2[3] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10a051a50(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 2) * -0x5555555555555555);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10a13d7dc; end: 10a13d847;  */

void FUN_10a13d7dc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10a13d848; end: 10a13d92b;  */

long FUN_10a13d848(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 uStack_41;
  
  puVar1 = &uStack_41;
  func_0x000107c2b05c();
  puVar5 = (undefined1 *)param_1[1];
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5 + -1;
    if (((ulong)puVar5 & (ulong)puVar6) == 0) {
      puVar7 = (undefined1 *)((ulong)puVar6 & (ulong)puVar1);
    }
    else {
      puVar7 = puVar1;
      if (puVar5 <= puVar1) {
        uVar2 = 0;
        if (puVar5 != (undefined1 *)0x0) {
          uVar2 = (ulong)puVar1 / (ulong)puVar5;
        }
        puVar7 = puVar1 + -(uVar2 * (long)puVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)puVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        puVar4 = (undefined1 *)plVar3[1];
        if (puVar1 == puVar4) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a13cb78(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)puVar5 & (ulong)puVar6) == 0) {
            puVar4 = (undefined1 *)((ulong)puVar4 & (ulong)puVar6);
          }
          else if (puVar5 <= puVar4) {
            uVar2 = 0;
            if (puVar5 != (undefined1 *)0x0) {
              uVar2 = (ulong)puVar4 / (ulong)puVar5;
            }
            puVar4 = puVar4 + -(uVar2 * (long)puVar5);
          }
          if (puVar4 != puVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a13d92c; end: 10a13d93b;  */

void FUN_10a13d92c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a13d93c; end: 10a13d95b;  */

void FUN_10a13d93c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba7a98;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a13d95c; end: 10a13d967;  */

void FUN_10a13d95c(long param_1)

{
  long lStack_28;
  
  func_0x00010a13e4ec(param_1 + 0xa0);
  lStack_28 = param_1 + 0x88;
  func_0x00010a13de1c(&lStack_28);
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  return;
}



/* Entry: 10a13d968; end: 10a13da9b;  */

undefined8 * FUN_10a13d968(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    func_0x000107c3192c(param_1 + 2,param_2[2],param_2[3]);
  }
  else {
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[2] = uVar2;
  }
  uVar3 = param_2[6];
  uVar2 = param_2[5];
  uVar5 = param_2[8];
  uVar4 = param_2[7];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    func_0x000107c3192c(param_1 + 10,param_2[10],param_2[0xb]);
  }
  else {
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_10a13da9c(param_1 + 0xe,param_2[0xe],param_2[0xf],
                ((long)(param_2[0xf] - param_2[0xe]) >> 3) * -0x3333333333333333);
  FUN_10a13deb0(param_1 + 0x11,param_2 + 0x11);
  return param_1;
}



/* Entry: 10a13da9c; end: 10a13db1f;  */

void FUN_10a13da9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a13db20(param_1,param_4);
    lVar1 = param_1;
    FUN_10a13dbc0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a13db20; end: 10a13db67;  */

undefined1  [16] FUN_10a13db20(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (long *)0x666666666666667) {
    plVar1 = param_1;
    FUN_10a13db7c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 5);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a13db68();
  puVar2 = &UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 < (long *)0x666666666666667) {
    lVar3 = (long)param_2 * 0x28;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  plVar1 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar1 = (long *)*param_2;
    FUN_10a13dc84(param_4,plVar1,param_2[1],(param_2[1] - (long)plVar1 >> 3) * -0x5555555555555555);
    lVar3 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar3;
    param_4 = puStack_88 + 5;
  }
  uStack_98 = 1;
  FUN_10a13dd9c(&puStack_b0);
  auVar6._8_8_ = plVar1;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a13db68; end: 10a13db7b;  */

undefined1  [16] FUN_10a13db68(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 < (long *)0x666666666666667) {
    lVar2 = (long)param_2 * 0x28;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  plVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar3 = (long *)*param_2;
    FUN_10a13dc84(param_4,plVar3,param_2[1],(param_2[1] - (long)plVar3 >> 3) * -0x5555555555555555);
    lVar2 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar2;
    param_4 = puStack_68 + 5;
  }
  uStack_78 = 1;
  FUN_10a13dd9c(&puStack_90);
  auVar5._8_8_ = plVar3;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a13db7c; end: 10a13dbbf;  */

undefined1  [16] FUN_10a13db7c(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (long *)0x666666666666667) {
    lVar1 = (long)param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  plVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar2 = (long *)*param_2;
    FUN_10a13dc84(param_4,plVar2,param_2[1],(param_2[1] - (long)plVar2 >> 3) * -0x5555555555555555);
    lVar1 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar1;
    param_4 = puStack_58 + 5;
  }
  uStack_68 = 1;
  FUN_10a13dd9c(&uStack_80);
  auVar4._8_8_ = plVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a13dbc0; end: 10a13dc83;  */

undefined8 * FUN_10a13dbc0(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 5) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_10a13dc84(param_4,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    lVar1 = param_2[3];
    param_4[4] = param_2[4];
    param_4[3] = lVar1;
    param_4 = puStack_38 + 5;
  }
  uStack_48 = 1;
  FUN_10a13dd9c(&uStack_60);
  return param_4;
}



/* Entry: 10a13dc84; end: 10a13dcfb;  */

void FUN_10a13dc84(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a13dcfc(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10a13dcfc; end: 10a13dd43;  */

undefined1  [16] FUN_10a13dcfc(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a13dd58();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a13dd44();
  puVar2 = &UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar3 = param_2 * 0x18;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  if ((puVar2[0x18] & 1) == 0) {
    FUN_10a13ddd0(puVar2);
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10a13dd44; end: 10a13dd57;  */

undefined1  [16] FUN_10a13dd44(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = &UNK_10f63e073;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  if ((puVar1[0x18] & 1) == 0) {
    FUN_10a13ddd0(puVar1);
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10a13dd58; end: 10a13dd9b;  */

undefined1  [16] FUN_10a13dd58(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a13ddd0(param_1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a13dd9c; end: 10a13ddcf;  */

long FUN_10a13dd9c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a13ddd0(param_1);
  }
  return param_1;
}



/* Entry: 10a13ddd0; end: 10a13de5b;  */

void FUN_10a13ddd0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 8);
  plVar3 = (long *)**(long **)(param_1 + 0x10);
  while (plVar1 = plVar3, plVar1 != plVar2) {
    plVar3 = plVar1 + -5;
    if (*plVar3 != 0) {
      plVar1[-4] = *plVar3;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a13de5c; end: 10a13deaf;  */

void FUN_10a13de5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -5;
    if (*plVar3 != 0) {
      plVar2[-4] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}


