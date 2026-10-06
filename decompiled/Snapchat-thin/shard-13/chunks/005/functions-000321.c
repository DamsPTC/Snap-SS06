/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6990c0; end: 10a69910b;  */

void FUN_10a6990c0(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_18 = 0xffffffff;
  FUN_10a69910c(param_1,&uStack_58);
  FUN_10a6ae0b8();
  return;
}



/* Entry: 10a69910c; end: 10a6991e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a6991a4) */

undefined1  [16] FUN_10a69910c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c476,0x21);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6adfbc(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6991e4; end: 10a6992c7;  */

long * FUN_10a6991e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110c0a040;
  param_1[7] = (long)&PTR_DAT_110c0a098;
  param_1[0x13] = param_2[3];
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[4];
  func_0x00010a1340b4(param_1 + 0x34);
  if (*(char *)((long)param_1 + 0x177) < '\0') {
    __ZdlPv(param_1[0x2c]);
  }
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x11f) < '\0') {
    __ZdlPv(param_1[0x21]);
  }
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  func_0x00010a2e2634(param_1 + 0x1b);
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    __ZdlPv(param_1[0x18]);
  }
  lVar1 = param_2[1];
  param_1[0x13] = lVar1;
  *(long *)((long)(param_1 + 0x13) + *(long *)(lVar1 + -0x18)) = param_2[2];
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
  *param_1 = (long)&PTR_DAT_110bf4248;
  param_1[2] = (long)&PTR_DAT_110bf42e0;
  param_1[7] = (long)&PTR_DAT_110bf4338;
  if ((char)param_1[0x11] == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a6992c8; end: 10a699433;  */

long FUN_10a6992c8(long param_1)

{
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a699434; end: 10a699827;  */

void FUN_10a699434(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_a0;
  long *plStack_98;
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
  
  lVar9 = *(long *)(param_1 + 0x60);
  lVar7 = *param_2;
  if (lVar7 == 0) {
    uStack_a0 = 0;
    plStack_98 = (long *)0x0;
    if (lVar9 != 0) goto LAB_10a699484;
LAB_10a699648:
    plVar5 = (long *)0x1e8;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_110bc34f8;
    plVar8 = plVar5 + 3;
    plVar6 = plVar5;
    func_0x00010a0fda30();
    FUN_10a32cbf8(plVar8,0,plVar6,param_2,&uStack_a0);
    plStack_50 = plVar8;
    plStack_48 = plVar5;
    FUN_10a2e2cb0(&plStack_50,plVar5 + 8,plVar8);
    FUN_10a2e2a40(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10a6996dc;
    plVar8 = plStack_48 + 1;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    plStack_98 = *(long **)(lVar7 + 0xe8);
    uStack_a0 = *(undefined8 *)(lVar7 + 0xe0);
    if (*(long *)(lVar7 + 0xe8) != 0) {
      plVar8 = (long *)(*(long *)(lVar7 + 0xe8) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (lVar9 == 0) goto LAB_10a699648;
LAB_10a699484:
    lVar7 = *(long *)(lVar9 + 0x858);
    plVar8 = *(long **)(lVar9 + 0x860);
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar3 = 0x1d0;
    lStack_80 = lVar7;
    plStack_78 = plVar8;
    __Znwm(0x1d0);
    uVar4 = uVar3;
    func_0x00010a0fda30();
    FUN_10a32cbf8(uVar3,lVar9,uVar4,param_2,&uStack_a0);
    lStack_70 = lVar7;
    plStack_68 = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar6 = plVar8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar6 = plVar8 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    lStack_60 = lVar7;
    plStack_58 = plVar8;
    FUN_10a2e2c10(&plStack_50,uVar3,&lStack_60);
    FUN_10a2e2a40(&plStack_90);
    plVar8 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar6 = plStack_68 + 1;
      do {
        lVar7 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar8 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar8 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar6 = plStack_48 + 1;
        do {
          lVar7 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10a6996dc;
    plVar8 = plStack_78 + 1;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar6 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_10a6996dc:
  plVar8 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar6 = plStack_98 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  FUN_10a2e25b8(param_1 + 0xd8,&plStack_90);
  FUN_10a32df84(param_1 + 0xe8,*(undefined8 *)(param_1 + 0xd8));
  if (plStack_88 != (long *)0x0) {
    plVar8 = plStack_88 + 1;
    do {
      lVar7 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10a699828; end: 10a69994f;  */

void FUN_10a699828(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a32df84(param_1 + 0xe8,*(undefined8 *)(param_1 + 0xd8));
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x8c0) + 0x18);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x108);
    if (lVar5 == 0) {
      lStack_30 = 0;
      plStack_28 = (long *)0x0;
    }
    else {
      FUN_10a4d5e30(&lStack_30,lVar5,param_1 + 0xe8);
      if (lStack_30 != 0) {
        lVar5 = *(long *)(param_1 + 0x1a0);
        if (*(int *)(lVar5 + 0x38) != *(int *)(lStack_30 + 0x18)) {
          *(int *)(lVar5 + 0x38) = *(int *)(lStack_30 + 0x18);
          if (*(char *)(lStack_30 + 0x37) < '\0') {
            func_0x000107c3192c(&uStack_50,*(undefined8 *)(lStack_30 + 0x20),
                                *(undefined8 *)(lStack_30 + 0x28));
          }
          else {
            uStack_48 = *(undefined8 *)(lStack_30 + 0x28);
            uStack_50 = *(ulong *)(lStack_30 + 0x20);
            uStack_40 = *(ulong *)(lStack_30 + 0x30);
          }
          if (*(char *)(lVar5 + 0x57) < '\0') {
            __ZdlPv(*(undefined8 *)(lVar5 + 0x40));
          }
          *(undefined8 *)(lVar5 + 0x48) = uStack_48;
          *(ulong *)(lVar5 + 0x40) = uStack_50;
          *(ulong *)(lVar5 + 0x50) = uStack_40;
          uStack_40 = uStack_40 & 0xffffffffffffff;
          uStack_50 = uStack_50 & 0xffffffffffffff00;
        }
      }
    }
    func_0x00010acb1720(*(long *)(param_1 + 0x1a0) + 0x18,&lStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a699950; end: 10a699acf;  */

void FUN_10a699950(long param_1,long *param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_d9;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a6ae174;
  ppuStack_70 = &PTR_FUN_110c0dd78;
  lStack_68 = param_1;
  FUN_10a2d7b10(param_2,&PTR_DAT_110c0a170,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c0a190);
  if ((int)plVar3 < 0) {
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a699a90);
    (*pcVar1)();
  }
  *(int *)(param_1 + 0x158) = (int)plVar3;
  (**(code **)(*param_2 + 0xa0))(auStack_90,param_2,&PTR_DAT_110c0a1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x160,auStack_90);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  ppuVar2 = &PTR_DAT_110c0a1d0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0xa0))(&uStack_a8);
  if (*(char *)(param_1 + 0xd7) < '\0') {
    plVar3 = *(long **)(param_1 + 0xc0);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 200) = uStack_a0;
  *(undefined8 *)(param_1 + 0xc0) = uStack_a8;
  *(undefined8 *)(param_1 + 0xd0) = uStack_98;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
    plVar4 = plVar3;
    __Unwind_Resume();
    if (*(char *)((long)plVar4 + 0x107) < '\0') {
      if (plVar4[0x1f] == 0) {
        return;
      }
    }
    else if (*(char *)((long)plVar4 + 0x107) == '\0') {
      return;
    }
    if (((ulong)ppuVar2[0x47] & 1) == 0) {
      ppuVar2[0x42] = (undefined *)0x0;
      ppuVar2[0x41] = (undefined *)0x0;
      ppuVar2[0x44] = (undefined *)0x0;
      ppuVar2[0x43] = (undefined *)0x0;
      ppuVar2[0x46] = (undefined *)0x0;
      ppuVar2[0x45] = (undefined *)0x0;
      ppuVar2[0x40] = (undefined *)&PTR_FUN_110bef348;
      ppuVar2[0x43] = (undefined *)0x0;
      ppuVar2[0x42] = (undefined *)0x0;
      ppuVar2[0x45] = (undefined *)0x0;
      ppuVar2[0x44] = (undefined *)0x0;
      *(undefined4 *)(ppuVar2 + 0x46) = 0x3f800000;
      *(undefined1 *)(ppuVar2 + 0x47) = 1;
    }
    plStack_d8 = plVar4 + 0x1d;
    pcStack_b8 = FUN_10a699ad0;
    ppuVar2 = ppuVar2 + 0x42;
    plStack_d0 = param_2;
    plStack_c8 = plVar3;
    puStack_c0 = &stack0xfffffffffffffff0;
    FUN_10a507b84(ppuVar2,plStack_d8,&UNK_10dd5b8f9,&plStack_d8,&uStack_d9);
    FUN_10a22f5ac(ppuVar2 + 0x10,plVar4 + 0x2b,plVar4 + 0x2b);
    return;
  }
  return;
}



/* Entry: 10a699ad0; end: 10a699b37;  */

void FUN_10a699ad0(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x107) < '\0') {
    if (*(long *)(param_1 + 0xf8) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x107) == '\0') {
    return;
  }
  if ((*(byte *)(param_2 + 0x238) & 1) == 0) {
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x208) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x230) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined ***)(param_2 + 0x200) = &PTR_FUN_110bef348;
    *(undefined8 *)(param_2 + 0x218) = 0;
    *(undefined8 *)(param_2 + 0x210) = 0;
    *(undefined8 *)(param_2 + 0x228) = 0;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x230) = 0x3f800000;
    *(undefined1 *)(param_2 + 0x238) = 1;
  }
  lStack_28 = param_1 + 0xe8;
  param_2 = param_2 + 0x210;
  FUN_10a507b84(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10a22f5ac(param_2 + 0x80,param_1 + 0x158,param_1 + 0x158);
  return;
}



/* Entry: 10a699b38; end: 10a699dc3;  */

long * FUN_10a699b38(long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[2] = (long)&PTR_DAT_110bf42e0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = (long)&PTR_DAT_110bf4248;
  param_1[7] = (long)&PTR_DAT_110bf4338;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0x800000000;
  param_1[0xc] = param_3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  plVar1 = param_1 + 0x13;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_10a0040d0(plVar1,param_2 + 1);
  lVar4 = *param_2;
  *param_1 = lVar4;
  param_1[2] = (long)&PTR_DAT_110c0a040;
  param_1[7] = (long)&PTR_DAT_110c0a098;
  param_1[0x13] = param_2[3];
  *(long *)((long)param_1 + *(long *)(lVar4 + -0x18)) = param_2[4];
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((long)param_1 + 0xe1) = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  func_0x000107c2b054(param_1 + 0x1e,&UNK_10f66b8c1);
  func_0x000107c2b054(param_1 + 0x21,&UNK_10f66b8c1);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((long)param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  puVar3 = (undefined8 *)0x70;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110ba7638;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[3] = &PTR_FUN_110c6ab60;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xb] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  param_1[0x34] = (long)(puVar3 + 3);
  param_1[0x35] = (long)puVar3;
  func_0x000107c2b054(auStack_58,&UNK_10f66c498);
  if (param_3 != 0) {
    FUN_10a76c080(*(undefined8 *)(param_3 + 0x8d8),auStack_58);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  plVar2 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = param_3;
    if (param_3 != 0) {
      plVar2[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x16],&PTR_DAT_110b99f08,param_3,plVar1);
  return param_1;
}



/* Entry: 10a699dc4; end: 10a699e13;  */

void FUN_10a699dc4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  FUN_10a699828();
  lVar5 = *(long *)(param_1 + 0x1a0);
  FUN_10acb1698();
  FUN_10a2f8dc8();
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x39) != '\x01')) {
    return;
  }
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a699e14; end: 10a699fdb;  */

void FUN_10a699e14(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x1e8;
  __Znwm();
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar5[2] = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_DAT_110c0dda0;
  plVar5[0x3a] = 0;
  plVar5[0x3b] = 0;
  plVar5[0x39] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x3c) = 0x100;
  FUN_10a699b38(plVar6,&PTR_PTR_110c0a3e0,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_DAT_110c0a208;
  plVar5[5] = (long)&PTR_FUN_110c0a2a8;
  plVar5[10] = (long)&PTR_FUN_110c0a300;
  plVar5[0x16] = (long)&PTR_FUN_110c0a328;
  plVar5[0x39] = (long)&PTR_FUN_110c0a3a0;
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a699f78;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a699f78:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  func_0x00010a699328(plVar6,param_2);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a699fdc; end: 10a699fdf;  */

void FUN_10a699fdc(long param_1,long *param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_d9;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a6ae174;
  ppuStack_70 = &PTR_FUN_110c0dd78;
  lStack_68 = param_1;
  FUN_10a2d7b10(param_2,&PTR_DAT_110c0a170,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c0a190);
  if ((int)plVar3 < 0) {
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a699a90);
    (*pcVar1)();
  }
  *(int *)(param_1 + 0x158) = (int)plVar3;
  (**(code **)(*param_2 + 0xa0))(auStack_90,param_2,&PTR_DAT_110c0a1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x160,auStack_90);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  ppuVar2 = &PTR_DAT_110c0a1d0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0xa0))(&uStack_a8);
  if (*(char *)(param_1 + 0xd7) < '\0') {
    plVar3 = *(long **)(param_1 + 0xc0);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 200) = uStack_a0;
  *(undefined8 *)(param_1 + 0xc0) = uStack_a8;
  *(undefined8 *)(param_1 + 0xd0) = uStack_98;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
    plVar4 = plVar3;
    __Unwind_Resume();
    if (*(char *)((long)plVar4 + 0x107) < '\0') {
      if (plVar4[0x1f] == 0) {
        return;
      }
    }
    else if (*(char *)((long)plVar4 + 0x107) == '\0') {
      return;
    }
    if (((ulong)ppuVar2[0x47] & 1) == 0) {
      ppuVar2[0x42] = (undefined *)0x0;
      ppuVar2[0x41] = (undefined *)0x0;
      ppuVar2[0x44] = (undefined *)0x0;
      ppuVar2[0x43] = (undefined *)0x0;
      ppuVar2[0x46] = (undefined *)0x0;
      ppuVar2[0x45] = (undefined *)0x0;
      ppuVar2[0x40] = (undefined *)&PTR_FUN_110bef348;
      ppuVar2[0x43] = (undefined *)0x0;
      ppuVar2[0x42] = (undefined *)0x0;
      ppuVar2[0x45] = (undefined *)0x0;
      ppuVar2[0x44] = (undefined *)0x0;
      *(undefined4 *)(ppuVar2 + 0x46) = 0x3f800000;
      *(undefined1 *)(ppuVar2 + 0x47) = 1;
    }
    plStack_d8 = plVar4 + 0x1d;
    pcStack_b8 = FUN_10a699ad0;
    ppuVar2 = ppuVar2 + 0x42;
    plStack_d0 = param_2;
    plStack_c8 = plVar3;
    puStack_c0 = &stack0xfffffffffffffff0;
    FUN_10a507b84(ppuVar2,plStack_d8,&UNK_10dd5b8f9,&plStack_d8,&uStack_d9);
    FUN_10a22f5ac(ppuVar2 + 0x10,plVar4 + 0x2b,plVar4 + 0x2b);
    return;
  }
  return;
}



/* Entry: 10a699fe0; end: 10a69a053;  */

void FUN_10a699fe0(long param_1)

{
  long lVar1;
  
  FUN_10a699828();
  lVar1 = *(long *)(param_1 + 0x1a0);
  if (*(long *)(lVar1 + 0x18) != 0) {
    FUN_10acb1698();
    FUN_10a2f8dc8();
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x3a) != '\x01') {
        if (*(char *)(lVar1 + 0x38) != '\x01') {
          return;
        }
        *(undefined1 *)(param_1 + 0x1b0) = 1;
        return;
      }
      goto LAB_10a69a03c;
    }
  }
  if (*(char *)(param_1 + 0x1b0) != '\x01') {
    return;
  }
LAB_10a69a03c:
  FUN_10a5861f0(param_1);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  return;
}



/* Entry: 10a69a054; end: 10a69a21f;  */

void FUN_10a69a054(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar2 = (undefined8 *)(param_2 + 0x60);
  if (param_4 != 0) {
    puVar2 = (undefined8 *)(param_4 + 0xb0);
  }
  uVar8 = *puVar2;
  lVar7 = param_2;
  func_0x00010a0fda30();
  plVar5 = (long *)0x1f0;
  __Znwm();
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  plVar5[2] = 0;
  plVar6 = plVar5 + 3;
  *plVar5 = (long)&PTR_FUN_110c0ddf0;
  plVar5[0x3b] = 0;
  plVar5[0x3c] = 0;
  plVar5[0x3a] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(plVar5 + 0x3d) = 0x100;
  FUN_10a699b38(plVar6,&PTR_PTR_110c0a608,uVar8,lVar7,param_3);
  plVar5[3] = (long)&PTR_FUN_110c0a430;
  plVar5[5] = (long)&PTR_FUN_110c0a4d0;
  plVar5[10] = (long)&PTR_FUN_110c0a528;
  plVar5[0x16] = (long)&PTR_FUN_110c0a550;
  plVar5[0x3a] = (long)&PTR_FUN_110c0a5c8;
  *(undefined1 *)(plVar5 + 0x39) = 0;
  lVar7 = plVar5[9];
  if (lVar7 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
  }
  else {
    if (*(long *)(lVar7 + 8) != -1) goto LAB_10a69a1bc;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar1 = plVar5 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5[8] = (long)plVar6;
    plVar5[9] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar7);
  }
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10a69a1bc:
  *(undefined4 *)((long)plVar6 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  func_0x00010a699328(plVar6,param_2);
  *param_1 = plVar6;
  param_1[1] = plVar5;
  return;
}



/* Entry: 10a69a220; end: 10a69a2a7;  */

void FUN_10a69a220(long param_1,long *param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_d9;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  char cStack_79;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_78 = FUN_10a6ae174;
  ppuStack_70 = &PTR_FUN_110c0dd78;
  lStack_68 = param_1;
  FUN_10a2d7b10(param_2,&PTR_DAT_110c0a170,&pcStack_78,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c0a190);
  if ((int)plVar3 < 0) {
    FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a699a90);
    (*pcVar1)();
  }
  *(int *)(param_1 + 0x158) = (int)plVar3;
  (**(code **)(*param_2 + 0xa0))(auStack_90,param_2,&PTR_DAT_110c0a1b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x160,auStack_90);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  ppuVar2 = &PTR_DAT_110c0a1d0;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0xa0))(&uStack_a8);
  if (*(char *)(param_1 + 0xd7) < '\0') {
    plVar3 = *(long **)(param_1 + 0xc0);
    __ZdlPv();
  }
  *(undefined8 *)(param_1 + 200) = uStack_a0;
  *(undefined8 *)(param_1 + 0xc0) = uStack_a8;
  *(undefined8 *)(param_1 + 0xd0) = uStack_98;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_79 < '\0') {
      __ZdlPv(auStack_90[0]);
    }
    plVar4 = plVar3;
    __Unwind_Resume();
    if (*(char *)((long)plVar4 + 0x107) < '\0') {
      if (plVar4[0x1f] == 0) {
        return;
      }
    }
    else if (*(char *)((long)plVar4 + 0x107) == '\0') {
      return;
    }
    if (((ulong)ppuVar2[0x47] & 1) == 0) {
      ppuVar2[0x42] = (undefined *)0x0;
      ppuVar2[0x41] = (undefined *)0x0;
      ppuVar2[0x44] = (undefined *)0x0;
      ppuVar2[0x43] = (undefined *)0x0;
      ppuVar2[0x46] = (undefined *)0x0;
      ppuVar2[0x45] = (undefined *)0x0;
      ppuVar2[0x40] = (undefined *)&PTR_FUN_110bef348;
      ppuVar2[0x43] = (undefined *)0x0;
      ppuVar2[0x42] = (undefined *)0x0;
      ppuVar2[0x45] = (undefined *)0x0;
      ppuVar2[0x44] = (undefined *)0x0;
      *(undefined4 *)(ppuVar2 + 0x46) = 0x3f800000;
      *(undefined1 *)(ppuVar2 + 0x47) = 1;
    }
    plStack_d8 = plVar4 + 0x1d;
    pcStack_b8 = FUN_10a699ad0;
    ppuVar2 = ppuVar2 + 0x42;
    plStack_d0 = param_2;
    plStack_c8 = plVar3;
    puStack_c0 = &stack0xfffffffffffffff0;
    FUN_10a507b84(ppuVar2,plStack_d8,&UNK_10dd5b8f9,&plStack_d8,&uStack_d9);
    FUN_10a22f5ac(ppuVar2 + 0x10,plVar4 + 0x2b,plVar4 + 0x2b);
    return;
  }
  return;
}



/* Entry: 10a69a2a8; end: 10a69a30b;  */

void FUN_10a69a2a8(undefined8 param_1)

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
  
  uStack_50 = 0xffffffff00000200;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0x92;
  uStack_18 = 0xffffffff;
  FUN_10a69a30c(param_1,&uStack_58);
  FUN_10a6ae450();
  return;
}



/* Entry: 10a69a30c; end: 10a69a3e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a69a3a4) */

undefined1  [16] FUN_10a69a30c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c4ac,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6ae354(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a69a3e4; end: 10a69a3e7;  */

void FUN_10a69a3e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a69a3e8; end: 10a69a517;  */

void FUN_10a69a3e8(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110c0de40;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0a650;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110c0a6e8;
  plVar4[10] = (long)&PTR_FUN_110c0a740;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x8000000050;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a69a518; end: 10a69a5a7;  */

undefined1  [16] FUN_10a69a518(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f66c4c4;
  return auVar1;
}



/* Entry: 10a69a5a8; end: 10a69a603;  */

void FUN_10a69a5a8(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66b8c1;
  uStack_38 = 0;
  puStack_30 = &UNK_10f66b8c1;
  uStack_28 = 0;
  uStack_20 = 0xaa;
  uStack_18 = 0xffffffff;
  FUN_10a69a604(param_1,&uStack_58);
  FUN_10a6ae648();
  return;
}



/* Entry: 10a69a604; end: 10a69a6db;  */

/* WARNING: Removing unreachable block (ram,0x00010a69a69c) */

undefined1  [16] FUN_10a69a604(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66c4c4,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6ae54c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a69a6dc; end: 10a69a6df;  */

void FUN_10a69a6dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte bStack_30;
  
  if ((*(char *)(param_1 + 0x88) == '\x01') && (*(char *)(param_1 + 0x90) == '\x01')) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x70) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x70) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x80);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    bStack_30 = 1;
    func_0x00010a58dd14(&uStack_70);
    plStack_58 = plStack_68;
    uStack_60 = uStack_70;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plStack_68 + 1;
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
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
    if ((bStack_30 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a58630c);
      (*pcVar4)();
    }
    FUN_10a58dda4(uStack_50,&uStack_60);
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (bStack_30 == 1) {
      FUN_10a688c1c(&uStack_50);
    }
  }
  return;
}



/* Entry: 10a69a6e0; end: 10a69a80f;  */

void FUN_10a69a6e0(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = (long *)(param_2 + 0x60);
  if (param_4 != 0) {
    plVar4 = (long *)(param_4 + 0xb0);
  }
  lVar8 = *plVar4;
  lVar6 = param_2;
  func_0x00010a0fda30();
  plVar4 = (long *)0xb0;
  __Znwm();
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  *plVar5 = 0;
  *plVar4 = (long)&PTR_FUN_110c0de90;
  plVar7 = plVar4 + 3;
  *plVar7 = (long)&PTR_FUN_110c0a760;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[0xb] = lVar6;
  plVar4[0xc] = param_3;
  *(undefined1 *)(plVar4 + 0xd) = 0;
  plVar4[0xf] = lVar8;
  *(undefined1 *)(plVar4 + 0x10) = 0;
  *(undefined1 *)(plVar4 + 0x14) = 0;
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[5] = (long)&PTR_FUN_110c0a7f8;
  plVar4[10] = (long)&PTR_FUN_110c0a850;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0x20000000000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[8] = (long)plVar7;
  plVar4[9] = (long)plVar4;
  do {
    lVar6 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  *(undefined4 *)((long)plVar4 + 0x6c) = *(undefined4 *)(param_2 + 0x54);
  *param_1 = plVar7;
  param_1[1] = plVar4;
  return;
}



/* Entry: 10a69a810; end: 10a69a823;  */

void FUN_10a69a810(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a69a814);
  (*pcVar1)();
}



/* Entry: 10a69a824; end: 10a69a837;  */

void FUN_10a69a824(void)

{
  func_0x00010a69c3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a838; end: 10a69a83f;  */

undefined8 * FUN_10a69a838(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c0a878;
  *param_1 = &PTR_FUN_110c0f860;
  param_1[5] = &PTR_DAT_110c0f8b8;
  param_1[0x11] = &PTR_FUN_110c0a938;
  param_1[0x5f] = &PTR_FUN_110c0a9b0;
  FUN_10a58e034(param_1 + 0x1a);
  FUN_10a3a75a8(param_1 + 0x16);
  param_1[0x11] = &PTR_DAT_110c0aa00;
  param_1[0x5f] = &PTR_FUN_110c0aa78;
  func_0x00010a004e5c(param_1 + 0x14);
  func_0x00010a004e04(param_1 + 0x12);
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69a840; end: 10a69a857;  */

void FUN_10a69a840(long param_1)

{
  func_0x00010a69c3e4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a858; end: 10a69a85f;  */

undefined8 * FUN_10a69a858(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_DAT_110c0a878;
  param_1[-5] = &PTR_FUN_110c0f860;
  *param_1 = &PTR_DAT_110c0f8b8;
  param_1[0xc] = &PTR_FUN_110c0a938;
  param_1[0x5a] = &PTR_FUN_110c0a9b0;
  FUN_10a58e034(param_1 + 0x15);
  FUN_10a3a75a8(param_1 + 0x11);
  param_1[0xc] = &PTR_DAT_110c0aa00;
  param_1[0x5a] = &PTR_FUN_110c0aa78;
  func_0x00010a004e5c(param_1 + 0xf);
  func_0x00010a004e04(param_1 + 0xd);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69a860; end: 10a69a877;  */

void FUN_10a69a860(long param_1)

{
  func_0x00010a69c3e4(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a878; end: 10a69a87f;  */

undefined8 * FUN_10a69a878(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x13;
  *puVar1 = &PTR_DAT_110c0a878;
  param_1[-0x11] = &PTR_FUN_110c0f860;
  param_1[-0xc] = &PTR_DAT_110c0f8b8;
  *param_1 = &PTR_FUN_110c0a938;
  param_1[0x4e] = &PTR_FUN_110c0a9b0;
  FUN_10a58e034(param_1 + 9);
  FUN_10a3a75a8(param_1 + 5);
  *param_1 = &PTR_DAT_110c0aa00;
  param_1[0x4e] = &PTR_FUN_110c0aa78;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return puVar1;
}



/* Entry: 10a69a880; end: 10a69a897;  */

void FUN_10a69a880(long param_1)

{
  func_0x00010a69c3e4(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a898; end: 10a69a8a7;  */

undefined8 * FUN_10a69a898(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110c0a878;
  puVar1[2] = &PTR_FUN_110c0f860;
  puVar1[7] = &PTR_DAT_110c0f8b8;
  puVar1[0x13] = &PTR_FUN_110c0a938;
  puVar1[0x61] = &PTR_FUN_110c0a9b0;
  FUN_10a58e034(puVar1 + 0x1c);
  FUN_10a3a75a8(puVar1 + 0x18);
  puVar1[0x13] = &PTR_DAT_110c0aa00;
  puVar1[0x61] = &PTR_FUN_110c0aa78;
  func_0x00010a004e5c(puVar1 + 0x16);
  func_0x00010a004e04(puVar1 + 0x14);
  *puVar1 = &PTR_DAT_110bf4248;
  puVar1[2] = &PTR_DAT_110bf42e0;
  puVar1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(puVar1 + 0x11) == '\x01') {
    FUN_10a688c1c(puVar1 + 0xd);
  }
  if (puVar1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a69a8a8; end: 10a69a8d7;  */

void FUN_10a69a8a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a69c3e4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a69a8d8; end: 10a69a8db;  */

undefined8 * FUN_10a69a8d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0aae0;
  param_1[2] = &PTR_FUN_110c0f860;
  param_1[7] = &PTR_DAT_110c0f8b8;
  param_1[0x13] = &PTR_FUN_110c0aba0;
  param_1[0x61] = &PTR_FUN_110c0ac18;
  FUN_10a58e034(param_1 + 0x1c);
  FUN_10a3a75a8(param_1 + 0x18);
  param_1[0x13] = &PTR_DAT_110c0ac68;
  param_1[0x61] = &PTR_FUN_110c0ace0;
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69a8dc; end: 10a69a8ef;  */

void FUN_10a69a8dc(void)

{
  func_0x00010a69c468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a8f0; end: 10a69a8f7;  */

undefined8 * FUN_10a69a8f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c0aae0;
  *param_1 = &PTR_FUN_110c0f860;
  param_1[5] = &PTR_DAT_110c0f8b8;
  param_1[0x11] = &PTR_FUN_110c0aba0;
  param_1[0x5f] = &PTR_FUN_110c0ac18;
  FUN_10a58e034(param_1 + 0x1a);
  FUN_10a3a75a8(param_1 + 0x16);
  param_1[0x11] = &PTR_DAT_110c0ac68;
  param_1[0x5f] = &PTR_FUN_110c0ace0;
  func_0x00010a004e5c(param_1 + 0x14);
  func_0x00010a004e04(param_1 + 0x12);
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69a8f8; end: 10a69a90f;  */

void FUN_10a69a8f8(long param_1)

{
  func_0x00010a69c468(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a910; end: 10a69a917;  */

undefined8 * FUN_10a69a910(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_DAT_110c0aae0;
  param_1[-5] = &PTR_FUN_110c0f860;
  *param_1 = &PTR_DAT_110c0f8b8;
  param_1[0xc] = &PTR_FUN_110c0aba0;
  param_1[0x5a] = &PTR_FUN_110c0ac18;
  FUN_10a58e034(param_1 + 0x15);
  FUN_10a3a75a8(param_1 + 0x11);
  param_1[0xc] = &PTR_DAT_110c0ac68;
  param_1[0x5a] = &PTR_FUN_110c0ace0;
  func_0x00010a004e5c(param_1 + 0xf);
  func_0x00010a004e04(param_1 + 0xd);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69a918; end: 10a69a92f;  */

void FUN_10a69a918(long param_1)

{
  func_0x00010a69c468(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a930; end: 10a69a937;  */

undefined8 * FUN_10a69a930(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x13;
  *puVar1 = &PTR_DAT_110c0aae0;
  param_1[-0x11] = &PTR_FUN_110c0f860;
  param_1[-0xc] = &PTR_DAT_110c0f8b8;
  *param_1 = &PTR_FUN_110c0aba0;
  param_1[0x4e] = &PTR_FUN_110c0ac18;
  FUN_10a58e034(param_1 + 9);
  FUN_10a3a75a8(param_1 + 5);
  *param_1 = &PTR_DAT_110c0ac68;
  param_1[0x4e] = &PTR_FUN_110c0ace0;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return puVar1;
}



/* Entry: 10a69a938; end: 10a69a94f;  */

void FUN_10a69a938(long param_1)

{
  func_0x00010a69c468(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a950; end: 10a69a95f;  */

undefined8 * FUN_10a69a950(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110c0aae0;
  puVar1[2] = &PTR_FUN_110c0f860;
  puVar1[7] = &PTR_DAT_110c0f8b8;
  puVar1[0x13] = &PTR_FUN_110c0aba0;
  puVar1[0x61] = &PTR_FUN_110c0ac18;
  FUN_10a58e034(puVar1 + 0x1c);
  FUN_10a3a75a8(puVar1 + 0x18);
  puVar1[0x13] = &PTR_DAT_110c0ac68;
  puVar1[0x61] = &PTR_FUN_110c0ace0;
  func_0x00010a004e5c(puVar1 + 0x16);
  func_0x00010a004e04(puVar1 + 0x14);
  *puVar1 = &PTR_DAT_110bf4248;
  puVar1[2] = &PTR_DAT_110bf42e0;
  puVar1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(puVar1 + 0x11) == '\x01') {
    FUN_10a688c1c(puVar1 + 0xd);
  }
  if (puVar1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a69a960; end: 10a69a98f;  */

void FUN_10a69a960(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a69c468((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a69a990; end: 10a69a993;  */

undefined8 * FUN_10a69a990(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c0ad48;
  param_1[2] = &PTR_FUN_110c0f860;
  param_1[7] = &PTR_DAT_110c0f8b8;
  param_1[0x13] = &PTR_FUN_110c0ae08;
  param_1[0x61] = &PTR_FUN_110c0ae80;
  FUN_10a58e034(param_1 + 0x1c);
  FUN_10a3a75a8(param_1 + 0x18);
  param_1[0x13] = &PTR_DAT_110c0aed0;
  param_1[0x61] = &PTR_FUN_110c0af48;
  func_0x00010a004e5c(param_1 + 0x16);
  func_0x00010a004e04(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69a994; end: 10a69a9a7;  */

void FUN_10a69a994(void)

{
  func_0x00010a69c4ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a9a8; end: 10a69a9af;  */

undefined8 * FUN_10a69a9a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c0ad48;
  *param_1 = &PTR_FUN_110c0f860;
  param_1[5] = &PTR_DAT_110c0f8b8;
  param_1[0x11] = &PTR_FUN_110c0ae08;
  param_1[0x5f] = &PTR_FUN_110c0ae80;
  FUN_10a58e034(param_1 + 0x1a);
  FUN_10a3a75a8(param_1 + 0x16);
  param_1[0x11] = &PTR_DAT_110c0aed0;
  param_1[0x5f] = &PTR_FUN_110c0af48;
  func_0x00010a004e5c(param_1 + 0x14);
  func_0x00010a004e04(param_1 + 0x12);
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69a9b0; end: 10a69a9c7;  */

void FUN_10a69a9b0(long param_1)

{
  func_0x00010a69c4ec(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a9c8; end: 10a69a9cf;  */

undefined8 * FUN_10a69a9c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_DAT_110c0ad48;
  param_1[-5] = &PTR_FUN_110c0f860;
  *param_1 = &PTR_DAT_110c0f8b8;
  param_1[0xc] = &PTR_FUN_110c0ae08;
  param_1[0x5a] = &PTR_FUN_110c0ae80;
  FUN_10a58e034(param_1 + 0x15);
  FUN_10a3a75a8(param_1 + 0x11);
  param_1[0xc] = &PTR_DAT_110c0aed0;
  param_1[0x5a] = &PTR_FUN_110c0af48;
  func_0x00010a004e5c(param_1 + 0xf);
  func_0x00010a004e04(param_1 + 0xd);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69a9d0; end: 10a69a9e7;  */

void FUN_10a69a9d0(long param_1)

{
  func_0x00010a69c4ec(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69a9e8; end: 10a69a9ef;  */

undefined8 * FUN_10a69a9e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x13;
  *puVar1 = &PTR_DAT_110c0ad48;
  param_1[-0x11] = &PTR_FUN_110c0f860;
  param_1[-0xc] = &PTR_DAT_110c0f8b8;
  *param_1 = &PTR_FUN_110c0ae08;
  param_1[0x4e] = &PTR_FUN_110c0ae80;
  FUN_10a58e034(param_1 + 9);
  FUN_10a3a75a8(param_1 + 5);
  *param_1 = &PTR_DAT_110c0aed0;
  param_1[0x4e] = &PTR_FUN_110c0af48;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return puVar1;
}



/* Entry: 10a69a9f0; end: 10a69aa07;  */

void FUN_10a69a9f0(long param_1)

{
  func_0x00010a69c4ec(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aa08; end: 10a69aa17;  */

undefined8 * FUN_10a69aa08(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110c0ad48;
  puVar1[2] = &PTR_FUN_110c0f860;
  puVar1[7] = &PTR_DAT_110c0f8b8;
  puVar1[0x13] = &PTR_FUN_110c0ae08;
  puVar1[0x61] = &PTR_FUN_110c0ae80;
  FUN_10a58e034(puVar1 + 0x1c);
  FUN_10a3a75a8(puVar1 + 0x18);
  puVar1[0x13] = &PTR_DAT_110c0aed0;
  puVar1[0x61] = &PTR_FUN_110c0af48;
  func_0x00010a004e5c(puVar1 + 0x16);
  func_0x00010a004e04(puVar1 + 0x14);
  *puVar1 = &PTR_DAT_110bf4248;
  puVar1[2] = &PTR_DAT_110bf42e0;
  puVar1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(puVar1 + 0x11) == '\x01') {
    FUN_10a688c1c(puVar1 + 0xd);
  }
  if (puVar1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a69aa18; end: 10a69aa47;  */

void FUN_10a69aa18(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a69c4ec((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a69aa48; end: 10a69aa4b;  */

undefined8 * FUN_10a69aa48(undefined8 *param_1)

{
  param_1[0x13] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x16] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69aa4c; end: 10a69aa5f;  */

void FUN_10a69aa4c(void)

{
  func_0x00010a69c570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aa60; end: 10a69aa6f;  */

void FUN_10a69aa60(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a69aa70; end: 10a69aa87;  */

void FUN_10a69aa70(long param_1)

{
  func_0x00010a69c570(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aa88; end: 10a69aa8f;  */

undefined8 * FUN_10a69aa88(undefined8 *param_1)

{
  param_1[0xc] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xd);
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a69aa90; end: 10a69aaa7;  */

void FUN_10a69aa90(long param_1)

{
  func_0x00010a69c570(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aaa8; end: 10a69aaaf;  */

undefined8 * FUN_10a69aaa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  param_1[-0x13] = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return param_1 + -0x13;
}



/* Entry: 10a69aab0; end: 10a69aac7;  */

void FUN_10a69aab0(long param_1)

{
  func_0x00010a69c570(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aac8; end: 10a69aacb;  */

undefined8 * FUN_10a69aac8(undefined8 *param_1)

{
  param_1[0x13] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x16] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69aacc; end: 10a69aadf;  */

void FUN_10a69aacc(void)

{
  func_0x00010a69c5b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aae0; end: 10a69aaef;  */

void FUN_10a69aae0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a69aaf0; end: 10a69ab07;  */

void FUN_10a69aaf0(long param_1)

{
  func_0x00010a69c5b0(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ab08; end: 10a69ab0f;  */

undefined8 * FUN_10a69ab08(undefined8 *param_1)

{
  param_1[0xc] = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xd);
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a69ab10; end: 10a69ab27;  */

void FUN_10a69ab10(long param_1)

{
  func_0x00010a69c5b0(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ab28; end: 10a69ab2f;  */

undefined8 * FUN_10a69ab28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd3170;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  param_1[-0x13] = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return param_1 + -0x13;
}



/* Entry: 10a69ab30; end: 10a69ab47;  */

void FUN_10a69ab30(long param_1)

{
  func_0x00010a69c5b0(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ab48; end: 10a69ab9b;  */

void FUN_10a69ab48(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x310));
  plVar3 = *(long **)(param_1 + 0xb0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a69ab9c; end: 10a69ab9f;  */

undefined8 * FUN_10a69ab9c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69aba0; end: 10a69abb3;  */

void FUN_10a69aba0(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69abb4; end: 10a69abbb;  */

undefined8 * FUN_10a69abb4(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a69abbc; end: 10a69abd3;  */

void FUN_10a69abbc(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69abd4; end: 10a69abdb;  */

undefined8 * FUN_10a69abd4(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a69abdc; end: 10a69abf3;  */

void FUN_10a69abdc(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69abf4; end: 10a69abf7;  */

undefined8 * FUN_10a69abf4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69abf8; end: 10a69ac0b;  */

void FUN_10a69abf8(void)

{
  FUN_10a58619c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ac0c; end: 10a69ac13;  */

undefined8 * FUN_10a69ac0c(undefined8 *param_1)

{
  param_1[-2] = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a69ac14; end: 10a69ac2b;  */

void FUN_10a69ac14(long param_1)

{
  FUN_10a58619c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ac2c; end: 10a69ac33;  */

undefined8 * FUN_10a69ac2c(undefined8 *param_1)

{
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a69ac34; end: 10a69ac4b;  */

void FUN_10a69ac34(long param_1)

{
  FUN_10a58619c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ac4c; end: 10a69ac4f;  */

undefined8 * FUN_10a69ac4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c088b8;
  param_1[2] = &PTR_DAT_110c08958;
  param_1[7] = &PTR_DAT_110c089b0;
  param_1[0x13] = &PTR_DAT_110c089d0;
  func_0x00010a69e3ac(param_1 + 0x17);
  param_1[0x13] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x16] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69ac50; end: 10a69ac63;  */

void FUN_10a69ac50(void)

{
  FUN_10a686aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ac64; end: 10a69ac6b;  */

undefined8 * FUN_10a69ac64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c088b8;
  *param_1 = &PTR_DAT_110c08958;
  param_1[5] = &PTR_DAT_110c089b0;
  param_1[0x11] = &PTR_DAT_110c089d0;
  func_0x00010a69e3ac(param_1 + 0x15);
  param_1[0x11] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x14] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x14] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x12);
  *puVar1 = &PTR_DAT_110bf4248;
  *param_1 = &PTR_DAT_110bf42e0;
  param_1[5] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a688c1c(param_1 + 0xb);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a69ac6c; end: 10a69ac83;  */

void FUN_10a69ac6c(long param_1)

{
  FUN_10a686aac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ac84; end: 10a69ac8b;  */

undefined8 * FUN_10a69ac84(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c088b8;
  param_1[-5] = &PTR_DAT_110c08958;
  *param_1 = &PTR_DAT_110c089b0;
  param_1[0xc] = &PTR_DAT_110c089d0;
  func_0x00010a69e3ac(param_1 + 0x10);
  param_1[0xc] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xd);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a69ac8c; end: 10a69aca3;  */

void FUN_10a69ac8c(long param_1)

{
  FUN_10a686aac(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69aca4; end: 10a69acab;  */

undefined8 * FUN_10a69aca4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x13;
  *puVar1 = &PTR_FUN_110c088b8;
  param_1[-0x11] = &PTR_DAT_110c08958;
  param_1[-0xc] = &PTR_DAT_110c089b0;
  *param_1 = &PTR_DAT_110c089d0;
  func_0x00010a69e3ac(param_1 + 4);
  *param_1 = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  *puVar1 = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return puVar1;
}



/* Entry: 10a69acac; end: 10a69acc3;  */

void FUN_10a69acac(long param_1)

{
  FUN_10a686aac(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69acc4; end: 10a69acef;  */

void FUN_10a69acc4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  (**(code **)(*param_1 + 0x88))();
  plVar3 = (long *)param_1[0x14];
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a69acf0; end: 10a69acf3;  */

undefined8 * FUN_10a69acf0(undefined8 *param_1)

{
  param_1[0x13] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x16] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x16] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x14);
  *param_1 = &PTR_DAT_110bf4248;
  param_1[2] = &PTR_DAT_110bf42e0;
  param_1[7] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_10a688c1c(param_1 + 0xd);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a69acf4; end: 10a69ad07;  */

void FUN_10a69acf4(void)

{
  func_0x00010a69c5f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ad08; end: 10a69ad1f;  */

void FUN_10a69ad08(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa0);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a69ad20; end: 10a69ad37;  */

void FUN_10a69ad20(long param_1)

{
  func_0x00010a69c5f0(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ad38; end: 10a69ad3f;  */

undefined8 * FUN_10a69ad38(undefined8 *param_1)

{
  param_1[0xc] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xf] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xd);
  param_1[-7] = &PTR_DAT_110bf4248;
  param_1[-5] = &PTR_DAT_110bf42e0;
  *param_1 = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_10a688c1c(param_1 + 6);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a69ad40; end: 10a69ad57;  */

void FUN_10a69ad40(long param_1)

{
  func_0x00010a69c5f0(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a69ad58; end: 10a69ad5f;  */

undefined8 * FUN_10a69ad58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  param_1[-0x13] = &PTR_DAT_110bf4248;
  param_1[-0x11] = &PTR_DAT_110bf42e0;
  param_1[-0xc] = &PTR_DAT_110bf4338;
  if (*(char *)(param_1 + -2) == '\x01') {
    FUN_10a688c1c(param_1 + -6);
  }
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x11] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return param_1 + -0x13;
}



/* Entry: 10a69ad60; end: 10a69ad77;  */

void FUN_10a69ad60(long param_1)

{
  func_0x00010a69c5f0(param_1 + -0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


