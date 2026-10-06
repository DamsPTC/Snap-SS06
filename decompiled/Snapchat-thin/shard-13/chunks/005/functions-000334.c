/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6e4298; end: 10a6e4357;  */

void FUN_10a6e4298(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  pcStack_78 = FUN_10a7142c4;
  ppuStack_70 = &PTR_DAT_110c13b68;
  ppuVar6 = &PTR_DAT_110c11b40;
  uStack_68 = param_1;
  FUN_10a03ce64(param_2,&PTR_DAT_110c11b40,&pcStack_78,0);
  pppuVar4 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  pcStack_88 = FUN_10a6e4358;
  uStack_a0 = param_1;
  pppuStack_98 = pppuVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010a3c7928();
  puStack_b0 = &UNK_10f6345f0;
  uStack_a8 = 0x13;
  ppuStack_b8 = pppuVar5[0x4a];
  ppuStack_c0 = pppuVar5[0x49];
  if (pppuVar5[0x4a] != (undefined **)0x0) {
    ppuVar1 = pppuVar5[0x4a] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*ppuVar6 + 0x108))(ppuVar6,&PTR_DAT_110c11b40,&ppuStack_c0,&puStack_b0);
  ppuVar6 = ppuStack_b8;
  if (ppuStack_b8 != (undefined **)0x0) {
    ppuVar1 = ppuStack_b8 + 1;
    do {
      puVar7 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(*ppuStack_b8 + 0x10))(ppuStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  return;
}



/* Entry: 10a6e4358; end: 10a6e4397;  */

void FUN_10a6e4358(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a3c7928();
  puStack_30 = &UNK_10f6345f0;
  uStack_28 = 0x13;
  plStack_38 = *(long **)(param_1 + 0x250);
  uStack_40 = *(undefined8 *)(param_1 + 0x248);
  if (*(long *)(param_1 + 0x250) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x250) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c11b40,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a6e4398; end: 10a6e443f;  */

void FUN_10a6e4398(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
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
  uStack_30 = param_4;
  uStack_28 = param_5;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a6e4440; end: 10a6e467b;  */

long * FUN_10a6e4440(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plStack_50;
  long *plStack_48;
  
  FUN_10a6e467c(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x218) = 0;
  if (*(long *)(param_1 + 0x248) == 0) {
    plVar5 = *(long **)(param_1 + 0x298);
    *(undefined8 *)(param_1 + 0x298) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar7 = *(long **)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return plVar7;
      }
    }
  }
  else {
    cVar2 = *(char *)(*(long *)(param_1 + 0x248) + 0xe0);
    if (cVar2 == '\x02') {
      uVar4 = 0x268;
      __Znwm();
      FUN_10a8281d0();
    }
    else if (cVar2 == '\x01') {
      plVar5 = (long *)0xe8;
      __Znwm();
      FUN_10a8275a0();
      uVar4 = 0x58;
      __Znwm();
      plStack_50 = plVar5;
      FUN_10a82c9dc();
      if (plStack_50 != (long *)0x0) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
    else {
      if (cVar2 != '\0') {
        plVar5 = (long *)&UNK_10f66e67a;
        FUN_10a00946c();
        if (plStack_50 != (long *)0x0) {
          (**(code **)(*plStack_50 + 8))();
        }
        __ZdlPv();
        __Unwind_Resume();
        lVar8 = param_2[1];
        lVar6 = *param_2;
        if (param_2[1] != 0) {
          plVar7 = (long *)(param_2[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = *plVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar7 = (long *)plVar5[1];
        plVar5[1] = lVar8;
        *plVar5 = lVar6;
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            lVar6 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        return plVar5;
      }
      uVar4 = 0xe0;
      __Znwm();
      FUN_10a824c24();
    }
    plVar5 = *(long **)(param_1 + 0x298);
    *(undefined8 *)(param_1 + 0x298) = uVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_10a6e46f8(&plStack_50,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x960),cVar2);
    plVar5 = (long *)(param_1 + 0x2a0);
    FUN_10a6e47d0(plVar5,&plStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar7 = plStack_48 + 1;
      do {
        lVar6 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
        plVar5 = plStack_48;
      }
    }
  }
  return plVar5;
}



/* Entry: 10a6e467c; end: 10a6e46f7;  */

undefined8 * FUN_10a6e467c(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a6e46f8; end: 10a6e47cf;  */

long * FUN_10a6e46f8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_32 = SUB81(param_3,0);
  if ((uint)param_3 < 3) {
    uVar4 = (ulong)param_3 & 0xf;
    lVar6 = param_2[uVar4 * 2 + 0x6b];
    plVar5 = param_2;
    if (lVar6 == 0) {
      plVar8 = param_2 + uVar4 * 2 + 0x6b;
      FUN_10a71d008(auStack_48,&uStack_31,param_2 + 0xe,&uStack_32);
      plVar5 = plVar8;
      FUN_10a6e47d0(plVar8,auStack_48);
      if (plStack_40 != (long *)0x0) {
        plVar1 = plStack_40 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_40 + 0x10))(plStack_40);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
          plVar5 = plStack_40;
        }
      }
      lVar6 = *plVar8;
    }
    lVar7 = param_2[uVar4 * 2 + 0x6c];
    *param_1 = lVar6;
    param_1[1] = lVar7;
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return plVar5;
  }
  plVar5 = (long *)&UNK_10f66f4b9;
  FUN_10a00946c();
  lVar7 = param_3[1];
  lVar6 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  plVar8 = (long *)plVar5[1];
  plVar5[1] = lVar7;
  *plVar5 = lVar6;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  return plVar5;
}



/* Entry: 10a6e47d0; end: 10a6e4833;  */

undefined8 * FUN_10a6e47d0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a6e4834; end: 10a6e48ab;  */

long FUN_10a6e4834(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_38,&UNK_10f66e740);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1 + 600;
}



/* Entry: 10a6e48ac; end: 10a6e4937;  */

void FUN_10a6e48ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f66e785);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  func_0x00010a2e268c(param_1 + 600,param_2);
  return;
}



/* Entry: 10a6e4938; end: 10a6e49af;  */

long FUN_10a6e4938(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_38,&UNK_10f66e7ca);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1 + 0x268;
}



/* Entry: 10a6e49b0; end: 10a6e4a3b;  */

void FUN_10a6e49b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_48,&UNK_10f66e813);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_48);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  func_0x00010a2e268c(param_1 + 0x268,param_2);
  return;
}



/* Entry: 10a6e4a3c; end: 10a6e4a4b;  */

undefined8 * FUN_10a6e4a3c(long param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = uVar7;
  *(undefined8 *)(param_1 + 0x278) = uVar6;
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
  return (undefined8 *)(param_1 + 0x278);
}



/* Entry: 10a6e4a4c; end: 10a6e4f4b;  */

void FUN_10a6e4a4c(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long ***ppplVar4;
  char cVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long *plStack_100;
  long **pplStack_f8;
  long *plStack_f0;
  undefined **ppuStack_e8;
  long *plStack_e0;
  long *plStack_b0;
  long **pplStack_a8;
  long *plStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    plVar13 = param_2;
    uVar12 = param_3;
    func_0x00010a0fda30();
  }
  else {
    pplStack_a8 = (long **)param_2[9];
    plStack_b0 = (long *)param_2[8];
    lVar11 = param_4 + 0x88;
    func_0x00010a35bf90(lVar11,&plStack_b0);
    puVar3 = (undefined8 *)((ulong)&plStack_b0 | 8);
    pplVar7 = &plStack_b0;
    if (lVar11 != 0) {
      puVar3 = (undefined8 *)(lVar11 + 0x28);
      pplVar7 = (long **)(lVar11 + 0x20);
    }
    uVar12 = *puVar3;
    plVar13 = *pplVar7;
  }
  plVar14 = (long *)param_2[0x2e];
  FUN_10a3dd220(plVar14);
  FUN_10a574c4c(plVar14,plVar13,uVar12);
  pplVar7 = (long **)0x28;
  plStack_100 = plVar14;
  __Znwm();
  pplVar15 = pplVar7 + 1;
  *pplVar15 = (long *)0x0;
  *pplVar7 = (long *)&PTR_DAT_110c13b90;
  pplVar7[2] = (long *)0x0;
  pplVar7[3] = plVar14;
  pplVar7[4] = (long *)FUN_10a3df8cc;
  pplStack_f8 = pplVar7;
  if (plVar14 != (long *)0x0) {
    if (plVar14[6] == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar15,0x10);
        if (bVar6) {
          *pplVar15 = (long *)((long)*pplVar15 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pplVar16 = pplVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar16,0x10);
        if (bVar6) {
          *pplVar16 = (long *)((long)*pplVar16 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar14[5] = (long)plVar14;
      plVar14[6] = (long)pplVar7;
    }
    else {
      if (*(long *)(plVar14[6] + 8) != -1) goto LAB_10a6e4bcc;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar15,0x10);
        if (bVar6) {
          *pplVar15 = (long *)((long)*pplVar15 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      pplVar16 = pplVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pplVar16,0x10);
        if (bVar6) {
          *pplVar16 = (long *)((long)*pplVar16 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar14[5] = (long)plVar14;
      plVar14[6] = (long)pplVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      plVar13 = *pplVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pplVar15,0x10);
      if (bVar6) {
        *pplVar15 = (long *)((long)plVar13 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (plVar13 == (long *)0x0) {
      (*(code *)(*pplVar7)[2])(pplVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar7);
    }
  }
LAB_10a6e4bcc:
  plVar13 = plStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (plStack_100 + 0x2a,param_2 + 0x2a);
  uVar1 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(plVar13 + 0x30) & 0xfffc;
  *(ushort *)(plVar13 + 0x30) = uVar2 | *(ushort *)(plVar13 + 0x30) & 1 | uVar1;
  *(ushort *)(plVar13 + 0x30) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x30) & 1;
  plStack_b0 = plVar13;
  pplStack_a8 = pplStack_f8;
  if (pplStack_f8 != (long **)0x0) {
    pplVar7 = pplStack_f8 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
      if (bVar6) {
        *pplVar7 = (long *)((long)*pplVar7 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&plStack_b0);
  pplVar7 = pplStack_a8;
  if (pplStack_a8 != (long **)0x0) {
    pplVar15 = pplStack_a8 + 1;
    do {
      plVar13 = *pplVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pplVar15,0x10);
      if (bVar6) {
        *pplVar15 = (long *)((long)plVar13 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (plVar13 == (long *)0x0) {
      (*(code *)(*pplStack_a8)[2])(pplStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar7);
    }
  }
  lVar11 = param_2[0x49];
  plStack_e0 = plStack_100 + 0x49;
  plStack_f0 = (long *)0x10a7144d8;
  ppuStack_e8 = &PTR_FUN_110c13bd0;
  if (lVar11 == 0) {
    plStack_b0 = (long *)0x0;
    FUN_10a2e9e64(&plStack_f0,&plStack_b0);
    pplVar7 = (long **)0x0;
    goto LAB_10a6e4de4;
  }
  if (param_4 == 0) {
    FUN_10a714448(&plStack_b0,lVar11);
    FUN_10a7143bc(&plStack_f0,&plStack_b0);
    pplVar7 = pplStack_a8;
    if (pplStack_a8 == (long **)0x0) goto LAB_10a6e4de4;
    pplVar7 = pplStack_a8 + 1;
    do {
      plVar13 = *pplVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
      if (bVar6) {
        *pplVar7 = (long *)((long)plVar13 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10a6e4dc8:
    pplVar7 = pplStack_a8;
    if (plVar13 == (long *)0x0) {
      (*(code *)(*pplStack_a8)[2])(pplStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar7);
    }
  }
  else {
    plVar13 = *(long **)(lVar11 + 0x40);
    pplVar7 = *(long ***)(lVar11 + 0x48);
    if (*(char *)(param_4 + 0xb8) == '\x01') {
      plStack_b0 = (long *)0x10a7144d8;
      pplStack_a8 = (long **)&PTR_FUN_110c13bd0;
      plStack_a0 = plStack_e0;
      FUN_10a069d9c(param_4,plVar13,pplVar7,&plStack_b0);
    }
    else {
      lVar10 = param_4 + 0x88;
      plStack_b0 = plVar13;
      pplStack_a8 = pplVar7;
      func_0x00010a35bf90(lVar10,&plStack_b0);
      ppplVar4 = &pplStack_a8;
      pplVar15 = &plStack_b0;
      if (lVar10 != 0) {
        ppplVar4 = (long ***)(lVar10 + 0x28);
        pplVar15 = (long **)(lVar10 + 0x20);
      }
      pplVar16 = *ppplVar4;
      plVar14 = *pplVar15;
      if (plVar13 == plVar14 && pplVar7 == pplVar16) {
        FUN_10a714448(&plStack_b0,lVar11);
        FUN_10a7143bc(&plStack_f0,&plStack_b0);
        pplVar7 = pplStack_a8;
        if (pplStack_a8 == (long **)0x0) goto LAB_10a6e4de4;
        pplVar7 = pplStack_a8 + 1;
        do {
          plVar13 = *pplVar7;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pplVar7,0x10);
          if (bVar6) {
            *pplVar7 = (long *)((long)plVar13 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a6e4dc8;
      }
      plStack_b0 = plStack_f0;
      (*(code *)ppuStack_e8[3])(&pplStack_a8,&ppuStack_e8);
      FUN_10a069d9c(param_4,plVar14,pplVar16,&plStack_b0);
    }
    (*(code *)*pplStack_a8)(&pplStack_a8);
    pplVar7 = &plStack_b0;
  }
LAB_10a6e4de4:
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  plVar14 = plStack_100;
  plVar8 = (long *)param_2[0x53];
  plVar13 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))(&plStack_b0,plVar8,plStack_100,param_4);
    plVar13 = plStack_b0;
    plStack_b0 = (long *)0x0;
    plVar8 = (long *)plVar14[0x53];
    plVar14[0x53] = (long)plVar13;
    plVar13 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
      plVar13 = plStack_b0;
      plStack_b0 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
    }
  }
  *param_1 = plVar14;
  param_1[1] = pplStack_f8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a0772f0(&plStack_b0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    FUN_10a714364(&plStack_100);
    plVar9 = plVar13;
    __Unwind_Resume();
    plStack_128 = plVar14;
    pcStack_108 = FUN_10a6e4f4c;
    lVar11 = plVar9[0x2e];
    plVar8 = (long *)((long)(plVar9 + 0x3e) + *(long *)(plVar9[0x3e] + -0x18));
    pplStack_130 = pplVar7;
    lStack_120 = param_4;
    plStack_118 = plVar13;
    puStack_110 = &stack0xfffffffffffffff0;
    if ((*(byte *)(plVar8 + 3) & 1) == 0) {
      *(undefined1 *)(plVar8 + 3) = 1;
      plVar8[2] = lVar11;
      if (lVar11 != 0) {
        plVar8[1] = *(long *)(*(long *)(lVar11 + 0x850) + 0x2c);
      }
      (**(code **)(*plVar8 + 0x18))();
    }
    lVar10 = plVar9[0x41];
    if (*(long *)(lVar10 + 0x20) == 0) {
      *(long *)(lVar10 + 0x30) = lVar11;
      plStack_128 = *(long **)(lVar10 + 0x18);
      pplStack_130 = *(long ***)(lVar10 + 0x10);
      if (*(long *)(lVar10 + 0x18) != 0) {
        plVar13 = (long *)(*(long *)(lVar10 + 0x18) + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = *plVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_10a3cf744(lVar11,&pplStack_130,&PTR_DAT_110b99f08,plVar9 + 0x3e);
      if (plStack_128 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if ((int)lVar11 != 0) {
        *(int *)(lVar10 + 0x38) = (int)lVar11;
        *(undefined1 *)(lVar10 + 0x3c) = 1;
      }
    }
    else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      plStack_118 = (long *)&plStack_100;
      FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&plStack_100);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a6e4f4c; end: 10a6e4fc7;  */

void FUN_10a6e4f4c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x170);
  plVar1 = (long *)(param_1 + 0x1f0 + *(long *)(*(long *)(param_1 + 0x1f0) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x208);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x1f0);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a6e4fc8; end: 10a6e4fcf;  */

void FUN_10a6e4fc8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x108);
  plVar1 = (long *)(param_1 + 0x188 + *(long *)(*(long *)(param_1 + 0x188) + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = lVar5;
    if (lVar5 != 0) {
      plVar1[1] = *(long *)(*(long *)(lVar5 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0x1a0);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = lVar5;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(lVar5,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,param_1 + 0x188);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)lVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)lVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a6e4fd0; end: 10a6e515f;  */

void FUN_10a6e4fd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(long *)(param_1 + 0x220) = lVar1;
  return;
}



/* Entry: 10a6e5160; end: 10a6e51b7;  */

ulong FUN_10a6e5160(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a7145c4(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a6e51b8; end: 10a6e536f;  */

void FUN_10a6e51b8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uStack_94;
  undefined1 auStack_90 [48];
  undefined1 uStack_60;
  undefined1 auStack_58 [48];
  undefined1 uStack_28;
  
  auStack_58[0] = 0;
  uStack_28 = 0;
  auStack_90[0] = 0;
  uStack_60 = 0;
  uStack_94 = 0;
  puVar1 = param_2 + 0xe;
  FUN_10a714ee8(puVar1,&uStack_94);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010a6e5d04(auStack_58,puVar1 + 3);
  }
  uStack_94 = 1;
  puVar1 = param_2 + 0xe;
  FUN_10a714ee8(puVar1,&uStack_94);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010a6e5d04(auStack_90,puVar1 + 3);
  }
  FUN_10a700c8c(param_1,auStack_58);
  FUN_10a700c8c(param_1 + 0x38,auStack_90);
  FUN_10a1ccb30(param_1 + 0x70,param_2 + 10);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0x90,*param_2,param_2[1]);
  }
  else {
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x98) = param_2[1];
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    *(undefined8 *)(param_1 + 0xa0) = param_2[2];
  }
  uVar2 = param_2[3];
  *(undefined8 *)(param_1 + 0xb0) = param_2[4];
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0xb4) = uVar2;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 200,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[7];
    *(undefined8 *)(param_1 + 0xd0) = param_2[8];
    *(undefined8 *)(param_1 + 200) = uVar2;
    *(undefined8 *)(param_1 + 0xd8) = param_2[9];
  }
  FUN_10a1ccb30(param_1 + 0xe0,param_2 + 0x19);
  FUN_10a700ce4(auStack_90);
  FUN_10a700ce4(auStack_58);
  return;
}



/* Entry: 10a6e5370; end: 10a6e53ef;  */

undefined8 * FUN_10a6e5370(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 0x1f) == '\x01') && (*(char *)((long)param_1 + 0xf7) < '\0')) {
    __ZdlPv(param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    __ZdlPv(param_1[0x19]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  if ((*(char *)(param_1 + 0x11) == '\x01') && (*(char *)((long)param_1 + 0x87) < '\0')) {
    __ZdlPv(param_1[0xe]);
  }
  FUN_10a700ce4(param_1 + 7);
  if (*(char *)(param_1 + 6) == '\x01') {
    if (*(char *)((long)param_1 + 0x2f) < '\0') {
      __ZdlPv(param_1[3]);
    }
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
  }
  return param_1;
}



/* Entry: 10a6e53f0; end: 10a6e5563;  */

undefined8 *
FUN_10a6e53f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x24) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(param_1 + 7,param_2[7],param_2[8]);
  }
  else {
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
  }
  FUN_10a1ccb30(param_1 + 10,param_3);
  FUN_10a7146f8(param_1 + 0xe,param_4);
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 4;
  FUN_10a1ccb30(param_1 + 0x19,param_5);
  *(undefined4 *)(param_1 + 0x1d) = param_6;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x21) = param_7;
  param_1[0x22] = param_9;
  param_1[0x23] = param_10;
  return param_1;
}



/* Entry: 10a6e5564; end: 10a6e5c83;  */

ulong * FUN_10a6e5564(ulong *param_1,long param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_120;
  long lStack_118;
  uint uStack_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  ulong uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined1 uStack_81;
  
  puVar5 = param_1 + 7;
  *puVar5 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar9 = param_1 + 10;
  *(undefined1 *)puVar9 = 0;
  puVar10 = param_1 + 0xe;
  param_1[0xf] = 0;
  *puVar10 = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  FUN_10a712eb8(param_1 + 0x13,param_3);
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar7 = param_2 + 0x38;
  func_0x000105689068(lVar7,0,0);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(lVar7 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x21) = uVar6;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 200);
  uVar13 = *(undefined8 *)(param_2 + 0xc0);
  ppuVar1 = &PTR_PTR_11330c488;
  if (*(undefined ***)(param_2 + 0xb0) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0xb0);
  }
  auVar12 = NEON_ext(*(undefined1 (*) [16])(ppuVar1 + 2),*(undefined1 (*) [16])(ppuVar1 + 2),8,1);
  ppuStack_d8 = auVar12._8_8_;
  puStack_e0 = auVar12._0_8_;
  uVar14 = *(undefined8 *)(param_2 + 0xd0);
  auVar12 = NEON_ext(*(undefined1 (*) [16])(ppuVar1 + 4),*(undefined1 (*) [16])(ppuVar1 + 4),8,1);
  lStack_118 = auVar12._8_8_;
  ppuStack_120 = auVar12._0_8_;
  dVar11 = (double)func_0x000109472d58(&uStack_81,&puStack_e0,&ppuStack_120);
  func_0x000107c2b054(auStack_f8,&UNK_10f66de00);
  func_0x000107c2b054(&ppuStack_120,&UNK_10f66de00);
  FUN_10a700b34(uVar14,uVar13,(dVar11 * 0.5) / 1.4142135381698608,&puStack_e0,auStack_f8,0,
                &ppuStack_120);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  param_1[1] = (ulong)ppuStack_d8;
  *param_1 = (ulong)puStack_e0;
  param_1[2] = uStack_d0;
  uStack_d0 = uStack_d0 & 0xffffffffffffff;
  puStack_e0 = (undefined8 *)((ulong)puStack_e0 & 0xffffffffffffff00);
  param_1[4] = CONCAT44(uStack_bc,uStack_c0);
  param_1[3] = (ulong)puStack_c8;
  *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_b0,uStack_b4);
  *(ulong *)((long)param_1 + 0x24) = CONCAT44(uStack_b8,uStack_bc);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(*puVar5);
    param_1[8] = uStack_a0;
    *puVar5 = CONCAT71(uStack_a7,uStack_a8);
    param_1[9] = CONCAT17(uStack_91,uStack_98);
    uStack_91 = 0;
    uStack_a8 = 0;
    if ((long)uStack_d0 < 0) {
      __ZdlPv(puStack_e0);
    }
  }
  else {
    param_1[8] = uStack_a0;
    *puVar5 = CONCAT71(uStack_a7,uStack_a8);
    param_1[9] = CONCAT17(uStack_91,uStack_98);
    uStack_91 = 0;
    uStack_a8 = 0;
  }
  if (iStack_10c < 0) {
    __ZdlPv(ppuStack_120);
  }
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  FUN_10a5404ec(puVar9,*(ulong *)(param_2 + 0x88) & 0xfffffffffffffffc);
  lStack_118 = param_2 + 0x18;
  uStack_110 = *(uint *)(param_2 + 0x24);
  if (uStack_110 == *(uint *)(param_2 + 0x1c)) {
    uStack_110 = 0;
    ppuStack_120 = (undefined **)0x0;
  }
  else {
    ppuStack_120 = *(undefined ***)(*(long *)(param_2 + 0x28) + (ulong)uStack_110 * 8);
    if (((ulong)ppuStack_120 & 1) != 0) {
      ppuStack_120 = *(undefined ***)(**(long **)((long)ppuStack_120 - 1) + 0x20);
    }
  }
  while (ppuVar1 = ppuStack_120, ppuStack_120 != (undefined **)0x0) {
    if ((param_1[0xd] & 1) == 0) goto LAB_10a6e5b1c;
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      func_0x000107c3192c(&puStack_e0,param_1[10],param_1[0xb]);
    }
    else {
      puStack_e0 = (undefined8 *)*puVar9;
      ppuStack_d8 = (undefined **)param_1[0xb];
      uStack_d0 = param_1[0xc];
    }
    if (*(char *)((long)ppuVar1 + 0x27) < '\0') {
      func_0x000107c3192c(&puStack_c8,ppuVar1[2],ppuVar1[3]);
    }
    else {
      puStack_c8 = ppuVar1[2];
      uStack_b8 = SUB84(ppuVar1[4],0);
      uStack_b4 = (undefined4)((ulong)ppuVar1[4] >> 0x20);
      uStack_c0 = SUB84(ppuVar1[3],0);
      uStack_bc = (undefined4)((ulong)ppuVar1[3] >> 0x20);
    }
    puVar5 = puVar10;
    FUN_10a714ca8(puVar10,*(undefined4 *)(ppuVar1 + 1),ppuVar1 + 1);
    if (3 < (ulong)(byte)puVar5[9]) goto LAB_10a6e5b1c;
    (*(code *)(&PTR_FUN_110c14970)[(byte)puVar5[9]])(puVar5 + 3);
    puVar5[4] = (ulong)ppuStack_d8;
    puVar5[3] = (ulong)puStack_e0;
    puVar5[5] = uStack_d0;
    puVar5[7] = CONCAT44(uStack_bc,uStack_c0);
    puVar5[6] = (ulong)puStack_c8;
    puVar5[8] = CONCAT44(uStack_b4,uStack_b8);
    *(undefined1 *)(puVar5 + 9) = 0;
    func_0x000107c27d54(&ppuStack_120);
  }
  FUN_10a5404ec(param_1 + 0x19,*(ulong *)(param_2 + 0xa0) & 0xfffffffffffffffc);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x1e,*(ulong *)(param_2 + 0x98) & 0xfffffffffffffffc);
  if ((*(byte *)(param_2 + 0x10) >> 1 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_2 + 0xb8) + 0x10);
    if ((param_1[0x23] & 1) == 0) {
      *(undefined1 *)(param_1 + 0x23) = 1;
    }
    param_1[0x22] = lVar7 * 1000000;
  }
  ppuStack_120 = &PTR_DAT_110b1a560;
  lStack_118 = 0;
  uStack_108 = 0;
  puVar8 = (undefined8 *)(*(ulong *)(param_2 + 0x98) & 0xfffffffffffffffc);
  lVar7 = (long)*(char *)((long)puVar8 + 0x17);
  puStack_e0 = puVar8;
  if (lVar7 < 0) {
    puStack_e0 = (undefined8 *)*puVar8;
    lVar7 = puVar8[1];
  }
  ppuStack_d8 = (undefined **)(long)(int)lVar7;
  func_0x000107c30348(&ppuStack_120,&puStack_e0);
  ppuVar1 = (undefined **)CONCAT44(iStack_10c,uStack_110);
  if (uStack_108._4_4_ != 3) {
    ppuVar1 = &PTR_PTR_1132e3730;
  }
  ppuStack_d8 = ppuVar1 + 3;
  uVar2 = *(uint *)((long)ppuVar1 + 0x24);
  if (uVar2 == *(uint *)((long)ppuVar1 + 0x1c)) {
    uStack_d0 = (ulong)uStack_d0._4_4_ << 0x20;
    puStack_e0 = (undefined8 *)0x0;
  }
  else {
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar2);
    puStack_e0 = *(undefined8 **)(ppuVar1[5] + (ulong)uVar2 * 8);
    if (((ulong)puStack_e0 & 1) != 0) {
      puStack_e0 = *(undefined8 **)(**(long **)((long)puStack_e0 - 1) + 0x20);
    }
  }
  while (puVar8 = puStack_e0, puStack_e0 != (undefined8 *)0x0) {
    if (*(char *)((long)puStack_e0 + 0x27) < '\0') {
      func_0x000107c3192c(&uStack_140,puStack_e0[2],puStack_e0[3]);
    }
    else {
      uStack_140 = puStack_e0[2];
      ppuStack_138 = (undefined **)puStack_e0[3];
      uStack_130 = puStack_e0[4];
    }
    puVar9 = puVar10;
    FUN_10a714ca8(puVar10,*(undefined4 *)(puVar8 + 1),puVar8 + 1);
    if (3 < (ulong)(byte)puVar9[9]) goto LAB_10a6e5b1c;
    (*(code *)(&PTR_FUN_110c14970)[(byte)puVar9[9]])(puVar9 + 3);
    puVar9[4] = (ulong)ppuStack_138;
    puVar9[3] = uStack_140;
    puVar9[5] = uStack_130;
    *(undefined1 *)(puVar9 + 9) = 1;
    func_0x000107c27d54(&puStack_e0);
  }
  ppuVar1 = (undefined **)CONCAT44(iStack_10c,uStack_110);
  if (uStack_108._4_4_ != 3) {
    ppuVar1 = &PTR_PTR_1132e3730;
  }
  ppuStack_138 = ppuVar1 + 7;
  uVar2 = *(uint *)((long)ppuVar1 + 0x44);
  if (uVar2 == *(uint *)((long)ppuVar1 + 0x3c)) {
    uStack_130 = (ulong)uStack_130._4_4_ << 0x20;
    uStack_140 = 0;
  }
  else {
    uStack_130 = CONCAT44(uStack_130._4_4_,uVar2);
    uStack_140 = *(ulong *)(ppuVar1[9] + (ulong)uVar2 * 8);
    if ((uStack_140 & 1) != 0) {
      uStack_140 = *(ulong *)(**(long **)(uStack_140 - 1) + 0x20);
    }
  }
  while( true ) {
    uVar3 = uStack_140;
    if (uStack_140 == 0) {
      func_0x0001098d5058(&ppuStack_120);
      return param_1;
    }
    puVar9 = (ulong *)(*(ulong *)(uStack_140 + 0x20) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar9 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_e0,*puVar9,puVar9[1]);
    }
    else {
      puStack_e0 = (undefined8 *)*puVar9;
      ppuStack_d8 = (undefined **)puVar9[1];
      uStack_d0 = puVar9[2];
    }
    puVar8 = (undefined8 *)(*(ulong *)(uVar3 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar8 + 0x17) < '\0') {
      func_0x000107c3192c(&puStack_c8,*puVar8,puVar8[1]);
    }
    else {
      puStack_c8 = (undefined *)*puVar8;
      uStack_b8 = (undefined4)puVar8[2];
      uStack_b4 = (undefined4)((ulong)puVar8[2] >> 0x20);
      uStack_c0 = (undefined4)puVar8[1];
      uStack_bc = (undefined4)((ulong)puVar8[1] >> 0x20);
    }
    puVar9 = puVar10;
    FUN_10a714ca8(puVar10,*(undefined4 *)(uVar3 + 8),uVar3 + 8);
    if (3 < (ulong)(byte)puVar9[9]) break;
    (*(code *)(&PTR_FUN_110c14970)[(byte)puVar9[9]])(puVar9 + 3);
    puVar9[4] = (ulong)ppuStack_d8;
    puVar9[3] = (ulong)puStack_e0;
    puVar9[5] = uStack_d0;
    puVar9[7] = CONCAT44(uStack_bc,uStack_c0);
    puVar9[6] = (ulong)puStack_c8;
    puVar9[8] = CONCAT44(uStack_b4,uStack_b8);
    *(undefined1 *)(puVar9 + 9) = 2;
    func_0x000107c27d54(&uStack_140);
  }
LAB_10a6e5b1c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6e5b20);
  (*pcVar4)();
}



/* Entry: 10a6e5c84; end: 10a6e5dcf;  */

undefined8 * FUN_10a6e5c84(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a6e5dd0; end: 10a6e5f9b;  */

undefined8 *
FUN_10a6e5dd0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  param_1[3] = 0x32aaaba7;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_2;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  param_1[0xe] = param_3[2];
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_10ae0e0f0(param_1 + 0xf,0,param_4);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = *param_5;
  (**(code **)(param_5[1] + 0x10))(param_1 + 0x2e,param_5 + 1);
  param_1[0x35] = *param_6;
  (**(code **)(param_6[1] + 0x10))(param_1 + 0x36,param_6 + 1);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  uVar6 = *(undefined8 *)(param_1[0xb] + 0x18);
  lVar5 = *(long *)(param_1[0xb] + 0x20);
  if (lVar5 == 0) {
    param_1[0x3d] = uVar6;
    param_1[0x3e] = 0;
  }
  else {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = param_1[0x3e];
    param_1[0x3d] = uVar6;
    param_1[0x3e] = lVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  FUN_10a05a5d4(auStack_48,&uStack_31);
  FUN_10a1eec44(param_1 + 0x2b,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return param_1;
}



/* Entry: 10a6e5f9c; end: 10a6e6537;  */

void FUN_10a6e5f9c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lStack_210;
  long *plStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long alStack_1f0 [28];
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x58);
  if (*(long *)(*(long *)(lVar9 + 0x960) + 0x88) != 0) {
    FUN_10a700ea0(&lStack_210,param_1);
    if (plStack_208 == (long *)0x0) {
      plStack_c0 = (long *)0x0;
    }
    else {
      plVar12 = plStack_208 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plStack_c0 = plStack_208;
      } while (cVar3 != '\0');
    }
    uStack_98 = 0x10a714f88;
    ppuStack_90 = &PTR_DAT_110c13bf0;
    lStack_88 = lStack_210;
    plStack_80 = plStack_208;
    uStack_f0 = 0;
    puStack_e8 = (undefined8 *)0x0;
    if (plStack_c0 != (long *)0x0) {
      plVar12 = plStack_c0 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = *plVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_d8 = 0x10a714ff0;
    ppuStack_d0 = &PTR_DAT_110c13c10;
    lStack_c8 = lStack_210;
    uStack_100 = 0;
    uStack_f8 = 0;
    FUN_10a00946c(&UNK_10f670e99);
    goto LAB_10a6e63e0;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x960) + 0x3a8);
  lStack_210 = lVar9;
  if (*(char *)(param_1 + 0x77) < '\0') {
    func_0x000107c3192c(&plStack_208,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68)
                       );
  }
  else {
    uStack_200 = *(undefined8 *)(param_1 + 0x68);
    plStack_208 = *(long **)(param_1 + 0x60);
    lStack_1f8 = *(long *)(param_1 + 0x70);
  }
  FUN_10ae0e0f0(alStack_1f0,0,param_1 + 0x78);
  FUN_10a700ea0(&uStack_110,param_1);
  puVar6 = (undefined8 *)0x178;
  __Znwm();
  *puVar6 = FUN_10a72a4c8;
  puVar6[1] = FUN_10a72a76c;
  func_0x0001092ba17c(puVar6 + 2);
  plVar12 = (long *)puVar6[7];
  if (plVar12 != (long *)0x0) {
    plVar8 = plVar12 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6[9] = lStack_210;
  puVar6[0xb] = uStack_200;
  puVar6[10] = plStack_208;
  puVar6[0xc] = lStack_1f8;
  plStack_208 = (long *)0x0;
  uStack_200 = 0;
  lStack_1f8 = 0;
  FUN_10a7013e8(puVar6 + 0xd,0,alStack_1f0);
  puVar6[0x2a] = plStack_108;
  puVar6[0x29] = uStack_110;
  uStack_110 = 0;
  plStack_108 = (long *)0x0;
  puVar6[0x2b] = uVar13;
  *(undefined1 *)(puVar6 + 0x2c) = 0;
  *(undefined1 *)(puVar6 + 0x2e) = 0;
  puVar7 = puVar6 + 0x2b;
  func_0x0001092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10a700ee0(puVar6 + 0x2d,puVar6 + 9);
    puVar6[0x2b] = puVar6[0x2d];
    plVar8 = (long *)(puVar6[0x2d] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x2b] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x2e) = 1;
      lVar9 = puVar6[0x2b];
      plVar8 = (long *)(lVar9 + 0x10);
      uVar13 = puVar6[3];
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            uStack_f0 = 0;
            puStack_e8 = puVar6;
            uStack_e0 = uVar13;
            func_0x000109d1b588(lVar9 + 0x18,&uStack_f0);
            *(undefined8 *)(lVar9 + 0x10) = 0;
            goto LAB_10a6e626c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x2b];
    if (((uint)*(undefined8 *)(puVar6[0x2b] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x2d];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar6 + 2);
      plVar8 = (long *)puVar6[0x2a];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      FUN_10ae0e238(puVar6 + 0xd);
      if (*(char *)((long)puVar6 + 0x67) < '\0') {
        __ZdlPv(puVar6[10]);
      }
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
      goto LAB_10a6e626c;
    }
  }
  else {
LAB_10a6e626c:
    plVar8 = plStack_108;
    if (plStack_108 != (long *)0x0) {
      plVar2 = plStack_108 + 1;
      do {
        lVar9 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = alStack_1f0;
    FUN_10ae0e238(plVar8);
    if (lStack_1f8 < 0) {
      plVar8 = plStack_208;
      __ZdlPv(plStack_208);
    }
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
          plVar8 = plVar12;
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar8 + 0x12);
LAB_10a6e63e0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6e63e4);
  (*pcVar5)();
}



/* Entry: 10a6e6538; end: 10a6e6577;  */

long FUN_10a6e6538(long param_1)

{
  func_0x00010a707f3c(param_1 + 0x100);
  FUN_10ae0e238(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a6e6578; end: 10a6e700f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e676c) */

void FUN_10a6e6578(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined *extraout_x8;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auStack_2e0 [288];
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  byte bStack_1a1;
  undefined1 auStack_1a0 [8];
  long *plStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar15 = *(undefined **)(*(long *)(*(long *)(param_2 + 0x58) + 0x960) + 0x3a8);
  puVar6 = (undefined8 *)0xc8;
  __Znwm();
  plVar13 = puVar6 + 1;
  *plVar13 = 0;
  puVar6[2] = 0;
  puVar12 = puVar6 + 3;
  puVar6[4] = 0;
  *puVar12 = 0;
  *puVar6 = &PTR_DAT_110c13c40;
  puVar6[9] = 0x32aaaba7;
  puVar6[6] = 0;
  puVar6[5] = 0;
  puVar6[8] = 0;
  puVar6[7] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0x32aaaba7;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  puVar6[0x18] = 0;
  puVar7 = (undefined8 *)0xd0;
  __Znwm();
  plVar9 = puVar7 + 1;
  puVar7[2] = 0;
  *plVar9 = 0x200000006;
  *(undefined2 *)(puVar7 + 3) = 4;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar7 + 3;
  puVar7[0x12] = 0;
  *puVar7 = &PTR_FUN_110c13c90;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined1 *)(puVar7 + 0x19) = 0;
  puVar6[3] = puVar7;
  puVar6[4] = puVar7;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  ppuVar8 = (undefined **)0x70;
  __Znwm();
  *ppuVar8 = FUN_10a72ad20;
  ppuVar8[1] = FUN_10a72b00c;
  FUN_10a7156dc(ppuVar8 + 2);
  puVar14 = ppuVar8[7];
  if (puVar14 != (undefined *)0x0) {
    plVar9 = (long *)(puVar14 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuVar8[0xb] = (undefined *)puVar7;
  ppuVar8[9] = puVar15;
  *(undefined1 *)(ppuVar8 + 10) = 0;
  *(undefined1 *)(ppuVar8 + 0xd) = 0;
  pcStack_f0 = (code *)0x0;
  FUN_109d18960(ppuVar8 + 2,puVar15,&pcStack_f0);
  if (pcStack_f0 != (code *)0x0) {
    func_0x0001092af97c(&pcStack_f0);
    goto LAB_10a6e6cc0;
  }
  if (((ulong)ppuVar8[10] & 1) == 0) {
    puStack_a0 = (undefined8 *)ppuVar8[9];
    pcStack_b0 = (code *)0x0;
    ppuStack_a8 = ppuVar8;
    (**(code **)*puStack_a0)(puStack_a0,&pcStack_b0);
    __ZNSt13exception_ptrD1Ev(&pcStack_f0);
LAB_10a6e68dc:
    plVar9 = (long *)puVar6[5];
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    puVar6[5] = puVar14;
    *param_1 = puVar12;
    param_1[1] = puVar6;
    lVar11 = *(long *)(param_2 + 0x58);
    if (*(long *)(*(long *)(lVar11 + 0x960) + 0x88) != 0) {
      FUN_10a2ea178(auStack_1a0,param_3);
      FUN_10a6d878c(&pcStack_b0,lVar11,auStack_1a0);
      if (plStack_198 != (long *)0x0) {
        plVar13 = plStack_198 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_198);
        }
      }
      FUN_10a00946c(&UNK_10f670ef8);
      goto LAB_10a6e6cc0;
    }
    lVar11 = *(long *)(lVar11 + 0x888);
    FUN_10a76dec8(&uStack_100,*(undefined8 *)(lVar11 + 0x40),param_3);
    FUN_10a700ea0(&uStack_110,param_2);
    plVar9 = plStack_f8;
    plStack_118 = plStack_f8;
    uStack_120 = uStack_100;
    if (plStack_f8 != (long *)0x0) {
      plVar2 = plStack_f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uVar10 = *(ulong *)(param_2 + 0x100);
    func_0x000107c2b054(auStack_138,&UNK_10f66de00);
    func_0x000107c2b054(auStack_150,&UNK_10f670f3b);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (plStack_108 != (long *)0x0) {
      plVar2 = plStack_108 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_b0 = FUN_10a701480;
    ppuStack_a8 = &PTR_FUN_110c13390;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_90 = uStack_110;
    plStack_88 = plStack_108;
    uStack_160 = 0;
    uStack_158 = 0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (plStack_108 != (long *)0x0) {
      plVar13 = plStack_108 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_f0 = FUN_10a7019a8;
    ppuStack_e8 = &PTR_FUN_110c133a8;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_d0 = uStack_110;
    plStack_c8 = plStack_108;
    uStack_180 = 0;
    uStack_178 = 0;
    puStack_e0 = puVar12;
    puStack_d8 = puVar6;
    puStack_a0 = puVar12;
    puStack_98 = puVar6;
    FUN_10a770218(&uStack_1b8,lVar11,&uStack_120,uVar10 & 0xfffffffffffffffc,auStack_138,auStack_150
                  ,1,5,&pcStack_b0,&pcStack_f0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 1;
      do {
        lVar11 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_108 != (long *)0x0) {
      plVar13 = plStack_108 + 1;
      do {
        lVar11 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
      }
    }
    if (plStack_f8 != (long *)0x0) {
      plVar13 = plStack_f8 + 1;
      do {
        lVar11 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_f8);
      }
    }
    if (-1 < (char)bStack_1a1) {
      uStack_1b0 = (ulong)bStack_1a1;
    }
    if (uStack_1b0 == 0) {
      if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f66e891,&UNK_10f66e8d1,0x1d4,&UNK_10f66e951);
      }
      param_1 = (undefined8 *)*param_1;
      FUN_10a009538(auStack_2e0,&UNK_10f66e998);
      FUN_10a05bde0(auStack_1c0,auStack_2e0);
      func_0x000109d1b350(*param_1,auStack_1c0);
      FUN_10a7016a4(param_1);
      __ZNSt13exception_ptrD1Ev(auStack_1c0);
      __ZNSt13runtime_errorD2Ev(auStack_2e0);
      if ((char)bStack_1a1 < '\0') goto LAB_10a6e6c38;
    }
    else if (((uint)(int)(char)bStack_1a1 >> 7 & 1) != 0) {
LAB_10a6e6c38:
      __ZdlPv(uStack_1b8);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    puVar15 = extraout_x8;
  }
  else {
    __ZNSt13exception_ptrD1Ev(&pcStack_f0);
    FUN_10a7152d4(ppuVar8 + 0xc,ppuVar8 + 0xb);
    ppuVar8[9] = ppuVar8[0xc];
    plVar9 = (long *)(ppuVar8[0xc] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(ppuVar8[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(ppuVar8 + 0xd) = 1;
      puVar15 = ppuVar8[9];
      plVar9 = (long *)(puVar15 + 0x10);
      puVar7 = (undefined8 *)ppuVar8[3];
      do {
        lVar11 = *plVar9;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            pcStack_b0 = (code *)0x0;
            ppuStack_a8 = ppuVar8;
            puStack_a0 = puVar7;
            func_0x000109d1b588(puVar15 + 0x18,&pcStack_b0);
            *(undefined8 *)(puVar15 + 0x10) = 0;
            goto LAB_10a6e68dc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    puVar15 = ppuVar8[9];
    if (((uint)*(undefined8 *)(ppuVar8[9] + 0x10) >> 5 & 1) == 0) {
      if ((puVar15[200] & 1) == 0) goto LAB_10a6e6cc0;
      FUN_10a7151fc(ppuVar8 + 2,puVar15 + 0x98);
      plVar9 = (long *)ppuVar8[9];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)ppuVar8[0xc];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      plVar9 = (long *)ppuVar8[0xb];
      if (plVar9 != (long *)0x0) {
        puVar1 = (ulong *)(plVar9 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      func_0x000109d1a1d0(ppuVar8 + 2);
      __ZdlPv(ppuVar8);
      goto LAB_10a6e68dc;
    }
  }
  func_0x0001092af97c(puVar15 + 0x90);
LAB_10a6e6cc0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6e6cc4);
  (*pcVar5)();
}



/* Entry: 10a6e7010; end: 10a6e7257;  */

void FUN_10a6e7010(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *****pppppuVar5;
  long lVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *****pppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *puVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *****pppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  char cStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ***pppuStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar3 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar3 + 1,param_2 + 1);
    ppppuVar15 = (undefined8 ****)(puVar3 + 8);
    *(undefined8 *****)(param_1 + 0x20) = ppppuVar15;
  }
  else {
    plVar1 = (long *)(param_1 + 0x18);
    lVar12 = (long)puVar3 - *plVar1;
    uVar2 = (lVar12 >> 6) + 1;
    if (uVar2 >> 0x3a != 0) {
      FUN_10a71638c();
LAB_10a6e7204:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6e7208);
      (*pcVar7)();
    }
    uVar11 = (long)*(undefined8 **)(param_1 + 0x28) - *plVar1;
    uVar13 = (long)uVar11 >> 5;
    if (uVar13 <= uVar2) {
      uVar13 = uVar2;
    }
    if (0x7fffffffffffffbf < uVar11) {
      uVar13 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar1;
    if (uVar13 == 0) {
      ppppuVar8 = (undefined8 ****)0x0;
    }
    else {
      if (uVar13 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a6e7204;
      }
      ppppuVar8 = (undefined8 ****)(uVar13 << 6);
      __Znwm();
    }
    ppppuVar15 = (undefined8 ****)((long)ppppuVar8 + lVar12);
    *ppppuVar15 = (undefined8 ***)*param_2;
    ppppuStack_88 = ppppuVar8;
    ppppuStack_80 = ppppuVar15;
    ppppuStack_78 = ppppuVar15;
    pppuStack_70 = ppppuVar8 + uVar13 * 8;
    (**(code **)(param_2[1] + 0x18))(ppppuVar15 + 1,param_2 + 1);
    pppppuVar17 = *(undefined8 ******)(param_1 + 0x18);
    pppppuVar5 = *(undefined8 ******)(param_1 + 0x20);
    puVar3 = (undefined8 *)((long)ppppuVar15 + ((long)pppppuVar17 - (long)pppppuVar5));
    pppppuVar14 = pppppuVar17;
    puVar18 = puVar3;
    if (pppppuVar5 != pppppuVar17) {
      do {
        *puVar18 = *pppppuVar14;
        (*(code *)pppppuVar14[1][2])(puVar18 + 1,pppppuVar14 + 1);
        pppppuVar14 = pppppuVar14 + 8;
        puVar18 = puVar18 + 8;
      } while (pppppuVar14 != pppppuVar5);
      pppppuVar17 = pppppuVar17 + 1;
      do {
        pppppuVar14 = pppppuVar17 + 7;
        (*(code *)**pppppuVar17)(pppppuVar17);
        pppppuVar17 = pppppuVar17 + 8;
      } while (pppppuVar14 != pppppuVar5);
      pppppuVar17 = (undefined8 *****)*plVar1;
    }
    ppppuVar15 = ppppuVar15 + 8;
    *(undefined8 **)(param_1 + 0x18) = puVar3;
    *(undefined8 *****)(param_1 + 0x20) = ppppuVar15;
    pppuStack_70 = *(undefined8 ****)(param_1 + 0x28);
    *(undefined8 *****)(param_1 + 0x28) = ppppuVar8 + uVar13 * 8;
    ppppuStack_88 = pppppuVar17;
    ppppuStack_80 = pppppuVar17;
    ppppuStack_78 = pppppuVar17;
    FUN_10a7163a0(&ppppuStack_88);
  }
  *(undefined8 *****)(param_1 + 0x20) = ppppuVar15;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) >> 1 & 1) == 0) {
    return;
  }
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    pppppppuVar9 = &ppppppuStack_98;
    ppppppuStack_98 = (undefined8 *******)(param_1 + 0x70);
    func_0x00010a701888();
    pppppppuVar10 = pppppppuVar9;
    if (((ulong)pppppppuVar9 & 1) != 0) {
      pppppuStack_b0 = (undefined8 ******)0x0;
      pppppuStack_a8 = (undefined8 *****)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      ppppppuVar16 = *(undefined8 *******)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      ppppppuVar19 = *(undefined8 *******)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      pppppuStack_b0 = ppppppuVar16;
      pppppuStack_a8 = ppppppuVar19;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; ppppppuVar16 != ppppppuVar19; ppppppuVar16 = ppppppuVar16 + 8) {
        ppppuStack_88 = *ppppppuVar16;
        (*(code *)ppppppuVar16[1][3])(&ppppuStack_80,ppppppuVar16 + 1);
        (*(code *)ppppuStack_88)(param_1 + 8,&ppppuStack_88);
        (*(code *)*ppppuStack_80)(&ppppuStack_80);
      }
      pppppppuVar10 = (undefined8 *******)&pppppuStack_b0;
      FUN_10a7018e0();
    }
    if (cStack_90 == '\x01') {
      pppppppuVar10 = (undefined8 *******)ppppppuStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)pppppppuVar9 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
    pppppppuVar10 = (undefined8 *******)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar6 != lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    FUN_10a7018e0(&pppppuStack_b0);
    if (cStack_90 == '\x01') {
      __ZNSt3__15mutex6unlockEv(ppppppuStack_98);
    }
    __Unwind_Resume();
    if (*(char *)(pppppppuVar10 + 6) == '\x01') {
      if (*(char *)((long)pppppppuVar10 + 0x2f) < '\0') {
        __ZdlPv(pppppppuVar10[3]);
      }
      if (*(char *)((long)pppppppuVar10 + 0x17) < '\0') {
        __ZdlPv(*pppppppuVar10);
      }
      *(undefined1 *)(pppppppuVar10 + 6) = 0;
    }
    return;
  }
  return;
}



/* Entry: 10a6e7258; end: 10a6e7357;  */

undefined8 * FUN_10a6e7258(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = FUN_10a701ba0;
  param_1[3] = &PTR_DAT_110950c70;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 0xd,*param_3,param_3[1]);
    param_2 = param_1[0xc];
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[0xf] = param_3[2];
    param_1[0xe] = uVar2;
    param_1[0xd] = uVar1;
  }
  FUN_10a716600(param_1 + 0x10,&uStack_32,*(undefined8 *)(*(long *)(param_2 + 0x960) + 0x3a8));
  FUN_10a05a5d4(param_1 + 0x12,&uStack_31);
  return param_1;
}



/* Entry: 10a6e7358; end: 10a6e759f;  */

long ******* FUN_10a6e7358(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *****ppppplVar5;
  long lVar6;
  code *pcVar7;
  long ****pppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  ulong uVar12;
  long lVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long ****pppplVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  undefined8 *puVar19;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  undefined8 uStack_a0;
  long ******pppppplStack_98;
  char cStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar3 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar3 + 1,param_2 + 1);
    pppplVar16 = (long ****)(puVar3 + 8);
    *(long *****)(param_1 + 0x20) = pppplVar16;
  }
  else {
    plVar1 = (long *)(param_1 + 0x18);
    lVar13 = (long)puVar3 - *plVar1;
    uVar2 = (lVar13 >> 6) + 1;
    if (uVar2 >> 0x3a != 0) {
      FUN_10a717580();
LAB_10a6e754c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6e7550);
      (*pcVar7)();
    }
    uVar12 = (long)*(undefined8 **)(param_1 + 0x28) - *plVar1;
    uVar15 = (long)uVar12 >> 5;
    if (uVar15 <= uVar2) {
      uVar15 = uVar2;
    }
    if (0x7fffffffffffffbf < uVar12) {
      uVar15 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar1;
    if (uVar15 == 0) {
      pppplVar8 = (long ****)0x0;
    }
    else {
      if (uVar15 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a6e754c;
      }
      pppplVar8 = (long ****)(uVar15 << 6);
      __Znwm();
    }
    pppplVar16 = (long ****)((long)pppplVar8 + lVar13);
    *pppplVar16 = (long ***)*param_2;
    pppplStack_88 = pppplVar8;
    pppplStack_80 = pppplVar16;
    pppplStack_78 = pppplVar16;
    ppplStack_70 = (long ***)(pppplVar8 + uVar15 * 8);
    (**(code **)(param_2[1] + 0x18))(pppplVar16 + 1,param_2 + 1);
    ppppplVar18 = *(long ******)(param_1 + 0x18);
    ppppplVar5 = *(long ******)(param_1 + 0x20);
    puVar3 = (undefined8 *)((long)pppplVar16 + ((long)ppppplVar18 - (long)ppppplVar5));
    ppppplVar14 = ppppplVar18;
    puVar19 = puVar3;
    if (ppppplVar5 != ppppplVar18) {
      do {
        *puVar19 = *ppppplVar14;
        (*(code *)ppppplVar14[1][2])(puVar19 + 1,ppppplVar14 + 1);
        ppppplVar14 = ppppplVar14 + 8;
        puVar19 = puVar19 + 8;
      } while (ppppplVar14 != ppppplVar5);
      ppppplVar18 = ppppplVar18 + 1;
      do {
        ppppplVar14 = ppppplVar18 + 7;
        (*(code *)**ppppplVar18)(ppppplVar18);
        ppppplVar18 = ppppplVar18 + 8;
      } while (ppppplVar14 != ppppplVar5);
      ppppplVar18 = (long *****)*plVar1;
    }
    pppplVar16 = pppplVar16 + 8;
    *(undefined8 **)(param_1 + 0x18) = puVar3;
    *(long *****)(param_1 + 0x20) = pppplVar16;
    ppplStack_70 = *(long ****)(param_1 + 0x28);
    *(long *****)(param_1 + 0x28) = pppplVar8 + uVar15 * 8;
    pppplStack_88 = (long ****)ppppplVar18;
    pppplStack_80 = (long ****)ppppplVar18;
    pppplStack_78 = (long ****)ppppplVar18;
    FUN_10a717594(&pppplStack_88);
  }
  *(long *****)(param_1 + 0x20) = pppplVar16;
  ppppppplVar9 = (long *******)(param_1 + 0x30);
  __ZNSt3__15mutex6unlockEv(ppppppplVar9);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) >> 1 & 1) == 0) {
    return ppppppplVar9;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    ppppppplVar9 = &pppppplStack_98;
    pppppplStack_98 = (long ******)(param_1 + 0x70);
    func_0x00010a701888();
    ppppppplVar10 = ppppppplVar9;
    if (((ulong)ppppppplVar9 & 1) != 0) {
      ppppplStack_b0 = (long *****)0x0;
      ppppplStack_a8 = (long *****)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      pppppplVar17 = *(long *******)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      pppppplVar11 = *(long *******)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      ppppplStack_b0 = (long *****)pppppplVar17;
      ppppplStack_a8 = (long *****)pppppplVar11;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; pppppplVar17 != pppppplVar11; pppppplVar17 = pppppplVar17 + 8) {
        pppplStack_88 = (long ****)*pppppplVar17;
        (*(code *)pppppplVar17[1][3])(&pppplStack_80,pppppplVar17 + 1);
        (*(code *)pppplStack_88)(param_1 + 8,&pppplStack_88);
        (*(code *)*pppplStack_80)(&pppplStack_80);
      }
      ppppppplVar10 = (long *******)&ppppplStack_b0;
      func_0x00010a717318();
    }
    if (cStack_90 == '\x01') {
      ppppppplVar10 = (long *******)pppppplStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)ppppppplVar9 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
    ppppppplVar10 = (long *******)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar6 != lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    func_0x00010a717318(&ppppplStack_b0);
    if (cStack_90 == '\x01') {
      __ZNSt3__15mutex6unlockEv(pppppplStack_98);
    }
    __Unwind_Resume(ppppppplVar10);
    ppppppplVar9 = (long *******)&DAT_10f62a4d8;
    FUN_109ffde64();
    pppppplVar17 = ppppppplVar9[1];
    pppppplVar11 = ppppppplVar9[2];
    while (pppppplVar11 != pppppplVar17) {
      ppppplVar14 = pppppplVar11[-7];
      ppppppplVar9[2] = pppppplVar11 + -8;
      (*(code *)*ppppplVar14)();
      pppppplVar11 = ppppppplVar9[2];
    }
    if (*ppppppplVar9 != (long ******)0x0) {
      __ZdlPv();
    }
    return ppppppplVar9;
  }
  return ppppppplVar10;
}



/* Entry: 10a6e75a0; end: 10a6e7acf;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e7720) */

undefined *** FUN_10a6e75a0(long param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined8 uStack_3a0;
  long *plStack_398;
  undefined8 uStack_390;
  undefined8 *apuStack_388 [7];
  undefined **ppuStack_350;
  undefined8 *puStack_348;
  long lStack_318;
  code **ppcStack_310;
  long *plStack_308;
  long *plStack_300;
  undefined ***pppuStack_2f8;
  undefined ***pppuStack_2f0;
  undefined ***pppuStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  long lStack_2d0;
  ulong uStack_2c8;
  code **ppcStack_2c0;
  undefined ***pppuStack_2b8;
  undefined ***pppuStack_2b0;
  undefined ***pppuStack_2a8;
  undefined ***pppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 auStack_258 [40];
  code *pcStack_230;
  undefined **ppuStack_228;
  long lStack_220;
  long *plStack_218;
  long *plStack_210;
  code *pcStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined ***pppuStack_1d8;
  undefined8 ***apppuStack_1b0 [2];
  long alStack_1a0 [7];
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined ***pppuStack_158;
  code *pcStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  undefined ***pppuStack_138;
  code *pcStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_d0;
  undefined7 uStack_c8;
  undefined4 uStack_c1;
  undefined1 uStack_bd;
  undefined1 uStack_b9;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar6 = (undefined ***)0x20;
  __Znwm();
  pppuVar10 = pppuVar6 + 1;
  *pppuVar10 = (undefined **)0x0;
  pppuVar6[2] = (undefined **)0x0;
  *pppuVar6 = &PTR_DAT_110b3f0e8;
  pppuStack_2b8 = pppuVar6 + 3;
  *(undefined4 *)pppuStack_2b8 = 0;
  uStack_1e0 = *(undefined8 *)(param_1 + 0x80);
  pppuVar9 = *(undefined ****)(param_1 + 0x88);
  if (pppuVar9 != (undefined ***)0x0) {
    pppuVar1 = pppuVar9 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcStack_1f0 = FUN_10a7175e8;
  ppuStack_1e8 = &PTR_FUN_110c13d60;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
    if (bVar5) {
      *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
    if (bVar5) {
      *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pcStack_150 = FUN_10a7175e8;
  ppuStack_148 = &PTR_FUN_110c13d60;
  if (pppuVar9 != (undefined ***)0x0) {
    pppuVar1 = pppuVar9 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar5) {
        *pppuVar1 = (undefined **)((long)*pppuVar1 + 1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_260 = 0x3f800000;
  lVar13 = (long)*(char *)(param_1 + 0x7f);
  if (lVar13 < 0) {
    lVar13 = *(long *)(param_1 + 0x70);
  }
  pppuStack_2b0 = pppuVar6;
  pppuStack_2a8 = pppuStack_2b8;
  pppuStack_2a0 = pppuVar6;
  pppuStack_1d8 = pppuVar9;
  pppuStack_160 = pppuStack_2b8;
  pppuStack_158 = pppuVar6;
  uStack_140 = uStack_1e0;
  pppuStack_138 = pppuVar9;
  if (lVar13 != 0) {
    uStack_b9 = 0x13;
    uStack_c8 = 0x70612d73656d61;
    uStack_c1 = 0x64692d70;
    pppuStack_d0 = (undefined8 ***)0x672d70616e732d78;
    uStack_bd = 0;
    apppuStack_1b0[0] = &pppuStack_d0;
    puVar7 = &uStack_280;
    func_0x000104c5bc74(puVar7,&pppuStack_d0,&UNK_10dd5b8f9,apppuStack_1b0,&pcStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (puVar7 + 5,param_1 + 0x68);
  }
  FUN_10a3bf5c8(apppuStack_1b0,param_2);
  lVar13 = *(long *)(*(long *)(param_1 + 0x60) + 0x100);
  FUN_10a6e7ad0(&uStack_298,*(undefined8 *)(param_1 + 0x90),&pppuStack_160);
  plVar8 = (long *)0x138;
  __Znwm();
  pppuStack_d0 = apppuStack_1b0[0];
  plVar16 = plVar8 + 1;
  *plVar16 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9f3b0;
  apppuStack_1b0[0] = (undefined8 ***)0x0;
  uStack_c8 = SUB87(apppuStack_1b0[1],0);
  uStack_c1._0_1_ = (undefined1)((ulong)apppuStack_1b0[1] >> 0x38);
  (**(code **)(alStack_1a0[0] + 0x10))((long)&uStack_c1 + 1,alStack_1a0);
  uStack_88 = uStack_168;
  func_0x000107c2791c(auStack_258,&uStack_280);
  plVar3 = plVar8 + 3;
  uStack_2c8 = *(ulong *)(lVar13 + 0x210);
  lStack_2d0 = *(long *)(lVar13 + 0x208);
  if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
    uStack_2c8 = (ulong)*(byte *)(lVar13 + 0x21f);
    lStack_2d0 = lVar13 + 0x208;
  }
  pcStack_110 = FUN_10a717ab4;
  ppuStack_108 = &PTR_FUN_110c13d80;
  uStack_100 = uStack_298;
  uStack_f0 = uStack_288;
  uStack_f8 = uStack_290;
  uStack_290 = 0;
  uStack_288 = 0;
  puVar7 = (undefined8 *)&UNK_10e4d4930;
  puVar12 = (undefined8 *)0x58;
  ppcStack_2c0 = &pcStack_110;
  FUN_10a05c494(plVar3,&UNK_10e4d4930,0x58,&UNK_10f647b49,4,&pppuStack_d0,6,auStack_258);
  (*(code *)*ppuStack_108)(&ppuStack_108);
  func_0x000104c4f944(auStack_258);
  FUN_10a042634(&pppuStack_d0);
  FUN_10a6e7cbc(&uStack_298);
  FUN_10a042634(apppuStack_1b0);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = *plVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pcStack_230 = FUN_10a717d58;
  ppuStack_228 = &PTR_FUN_110c13d98;
  do {
    lVar13 = *plVar16;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar5) {
      *plVar16 = lVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lStack_220 = param_1;
  plStack_218 = plVar3;
  plStack_210 = plVar8;
  if (lVar13 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  func_0x000104c4f944(&uStack_280);
  (*(code *)*ppuStack_148)(&ppuStack_148);
  pppuVar1 = pppuStack_158;
  if (pppuStack_158 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_158 + 1;
    do {
      ppuVar14 = *pppuVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar5) {
        *pppuVar2 = (undefined **)((long)ppuVar14 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_158)[2])(pppuStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar1);
    }
  }
  do {
    ppuVar14 = *pppuVar10;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
    if (bVar5) {
      *pppuVar10 = (undefined **)((long)ppuVar14 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (ppuVar14 == (undefined **)0x0) {
    (*(code *)(*pppuVar6)[2])(pppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar6);
  }
  (*pcStack_230)(&pcStack_230);
  (*(code *)*ppuStack_228)(&ppuStack_228);
  pppuVar6 = &ppuStack_1e8;
  (*(code *)*ppuStack_1e8)();
  if (pppuVar9 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppuVar6 = pppuVar9;
  }
  pppuVar9 = pppuStack_2a0;
  if (pppuStack_2a0 != (undefined ***)0x0) {
    pppuVar10 = pppuStack_2a0 + 1;
    do {
      ppuVar14 = *pppuVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar5) {
        *pppuVar10 = (undefined **)((long)ppuVar14 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_2a0)[2])(pppuStack_2a0);
      pppuVar6 = pppuVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_228)(&ppuStack_228);
  (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
  if (pppuVar9 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar9);
  }
  func_0x00010a084504(&pppuStack_2a8);
  pppuVar10 = pppuVar6;
  __Unwind_Resume();
  pppuStack_2f8 = pppuVar1;
  pppuStack_2e8 = pppuVar9;
  pcStack_2d8 = FUN_10a6e7ad0;
  lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcStack_310 = &pcStack_110;
  plStack_308 = plVar3;
  plStack_300 = plVar8;
  pppuStack_2f0 = pppuVar6;
  puStack_2e0 = &stack0xfffffffffffffff0;
  __ZNSt3__115recursive_mutex4lockEv(puVar7 + 2);
  plStack_398 = (long *)puVar12[1];
  uStack_3a0 = *puVar12;
  *puVar12 = 0;
  puVar12[1] = 0;
  uStack_390 = puVar12[2];
  (**(code **)(puVar12[3] + 0x18))(apuStack_388,puVar12 + 3);
  ppuStack_350 = &PTR_FUN_110c133c0;
  puVar12 = (undefined8 *)0x50;
  __Znwm();
  puVar12[1] = plStack_398;
  *puVar12 = uStack_3a0;
  uStack_3a0 = 0;
  plStack_398 = (long *)0x0;
  puVar12[2] = uStack_390;
  (*(code *)apuStack_388[0][3])(puVar12 + 3,apuStack_388);
  puVar11 = (undefined8 *)0x48;
  puStack_348 = puVar12;
  __Znwm();
  puVar11[2] = &PTR_FUN_110c133c0;
  puVar11[3] = puVar12;
  puStack_348 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)puVar7[0xb];
  lVar13 = puVar7[0xc];
  *puVar11 = puVar7 + 10;
  puVar11[1] = puVar12;
  *puVar12 = puVar11;
  puVar7[0xb] = puVar11;
  puVar7[0xc] = lVar13 + 1;
  FUN_10a701bb0(&ppuStack_350);
  (*(code *)*apuStack_388[0])(apuStack_388);
  plVar3 = plStack_398;
  if (plStack_398 != (long *)0x0) {
    plVar8 = plStack_398 + 1;
    do {
      lVar13 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_398 + 0x10))(plStack_398);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  ppuVar14 = (undefined **)puVar7[0xb];
  pppuVar9 = (undefined ***)(puVar7 + 2);
  __ZNSt3__115recursive_mutex6unlockEv();
  ppuVar18 = (undefined **)puVar7[1];
  ppuVar17 = (undefined **)*puVar7;
  if (puVar7[1] != 0) {
    plVar3 = (long *)(puVar7[1] + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *plVar3 = *plVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *pppuVar10 = ppuVar14;
  pppuVar10[2] = ppuVar18;
  pppuVar10[1] = ppuVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  FUN_10a701bb0(&ppuStack_350);
  (*(code *)*apuStack_388[0])(apuStack_388);
  func_0x00010a084504(&uStack_3a0);
  __ZNSt3__115recursive_mutex6unlockEv(puVar7 + 2);
  __Unwind_Resume();
  ppuVar14 = pppuVar9[2];
  if (ppuVar14 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar14 != (undefined **)0x0) {
      if (pppuVar9[1] != (undefined **)0x0) {
        FUN_10a05c0fc(pppuVar9[1],*pppuVar9);
      }
      ppuVar17 = ppuVar14 + 1;
      do {
        puVar15 = *ppuVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar5) {
          *ppuVar17 = puVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar14);
      }
    }
    if (pppuVar9[2] != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return pppuVar9;
}



/* Entry: 10a6e7ad0; end: 10a6e7cbb;  */

undefined8 * FUN_10a6e7ad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *apuStack_b8 [7];
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plStack_c8 = (long *)param_3[1];
  uStack_d0 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_c0 = param_3[2];
  (**(code **)(param_3[3] + 0x18))(apuStack_b8,param_3 + 3);
  ppuStack_80 = &PTR_FUN_110c133c0;
  puVar4 = (undefined8 *)0x50;
  __Znwm();
  puVar4[1] = plStack_c8;
  *puVar4 = uStack_d0;
  uStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  puVar4[2] = uStack_c0;
  (*(code *)apuStack_b8[0][3])(puVar4 + 3,apuStack_b8);
  plVar5 = (long *)0x48;
  puStack_78 = puVar4;
  __Znwm();
  plVar5[2] = (long)&PTR_FUN_110c133c0;
  plVar5[3] = (long)puVar4;
  puStack_78 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar4;
  *puVar4 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar6 + 1;
  FUN_10a701bb0(&ppuStack_80);
  (*(code *)*apuStack_b8[0])(apuStack_b8);
  plVar5 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar7 = param_2[0xb];
  puVar4 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar7;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  FUN_10a701bb0(&ppuStack_80);
  (*(code *)*apuStack_b8[0])(apuStack_b8);
  func_0x00010a084504(&uStack_d0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar5 = (long *)puVar4[2];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (puVar4[1] != 0) {
        FUN_10a05c0fc(puVar4[1],*puVar4);
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puVar4[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar4;
}



/* Entry: 10a6e7cbc; end: 10a6e7d3b;  */

undefined8 * FUN_10a6e7cbc(undefined8 *param_1)

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



/* Entry: 10a6e7d3c; end: 10a6e7dbf;  */

undefined8 * FUN_10a6e7d3c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 2,*param_3,param_3[1]);
  }
  else {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    param_1[4] = param_3[2];
    param_1[3] = uVar6;
    param_1[2] = uVar5;
  }
  return param_1;
}



/* Entry: 10a6e7dc0; end: 10a6e850f;  */

undefined *** FUN_10a6e7dc0(long *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  uint3 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long *plVar17;
  long *plStack_380;
  long *plStack_378;
  long *plStack_370;
  long *plStack_368;
  long lStack_360;
  long *plStack_358;
  long lStack_350;
  ulong uStack_348;
  long lStack_340;
  long lStack_338;
  undefined4 uStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  ulong uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *apuStack_2d8 [7];
  long lStack_2a0;
  undefined8 *apuStack_298 [7];
  long lStack_260;
  undefined7 uStack_258;
  int iStack_251;
  uint uStack_24d;
  char cStack_249;
  undefined8 *apuStack_248 [7];
  long lStack_210;
  undefined8 *apuStack_208 [7];
  long *plStack_1d0;
  undefined8 uStack_1c8;
  long alStack_1c0 [7];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *apuStack_178 [7];
  long lStack_140;
  undefined8 *apuStack_138 [7];
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_328 = &PTR_FUN_110c78dd0;
  uStack_320 = 0;
  lStack_310 = 0;
  uStack_318 = 1;
  lVar7 = 0;
  FUN_10a701c0c();
  uVar13 = *(ulong *)(lVar7 + 8);
  if ((uVar13 & 1) != 0) {
    uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
  }
  lStack_310 = lVar7;
  func_0x000107c30248(lVar7 + 0x10,param_2,uVar13);
  *(undefined4 *)(lVar7 + 0x18) = 1;
  uStack_180 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_178,param_3 + 1);
  lStack_140 = *param_4;
  (**(code **)(param_4[1] + 0x10))(apuStack_138);
  uStack_348 = 0;
  lStack_350 = 0;
  lStack_338 = 0;
  lStack_340 = 0;
  uStack_330 = 0x3f800000;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    if (param_1[3] == 0) goto LAB_10a6e7f14;
  }
  else if (*(char *)((long)param_1 + 0x27) == '\0') goto LAB_10a6e7f14;
  cStack_249 = '\x13';
  uStack_258 = 0x70612d73656d61;
  iStack_251 = 0x64692d70;
  lStack_260 = 0x672d70616e732d78;
  uStack_24d = uStack_24d & 0xffffff00;
  plStack_c0 = &lStack_260;
  plVar8 = &lStack_350;
  func_0x000104c5bc74(plVar8,&lStack_260,&UNK_10dd5b8f9,&plStack_c0,&plStack_1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar8 + 5,param_1 + 2);
  if (cStack_249 < '\0') {
    __ZdlPv(lStack_260);
  }
LAB_10a6e7f14:
  lStack_360 = 0;
  plStack_358 = (long *)0x0;
  plVar8 = (long *)param_1[1];
  if (((plVar8 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_358 = plVar8, plVar8 == (long *)0x0)) ||
     (lVar7 = *param_1, lStack_360 = lVar7, lVar7 == 0)) {
    plVar8 = plStack_358;
    pcVar16 = (code *)*param_4;
    func_0x000107c2b054(&lStack_260,&UNK_10f66e9e9);
    (*pcVar16)(&lStack_260,param_4);
    if (cStack_249 < '\0') {
      __ZdlPv(lStack_260);
    }
  }
  else {
    FUN_10a3bf5c8(&plStack_1d0,&ppuStack_328);
    lVar7 = *(long *)(lVar7 + 0x100);
    plVar8 = (long *)param_1[1];
    if (plVar8 == (long *)0x0) {
      lVar15 = 0;
      plVar8 = (long *)0x0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar8 == (long *)0x0) {
        lVar15 = 0;
      }
      else {
        lVar15 = *param_1;
        plVar9 = plVar8 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar9 = plVar8 + 1;
        do {
          lVar14 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    uStack_2e0 = uStack_180;
    (*(code *)apuStack_178[0][2])(apuStack_2d8,apuStack_178);
    lStack_2a0 = lStack_140;
    (*(code *)apuStack_138[0][2])(apuStack_298,apuStack_138);
    uStack_258 = SUB87(plVar8,0);
    iStack_251._0_1_ = (undefined1)((ulong)plVar8 >> 0x38);
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    iStack_251._1_3_ = (uint3)uStack_2e0;
    uStack_24d = (uint)((ulong)uStack_2e0 >> 0x18);
    cStack_249 = (char)((ulong)uStack_2e0 >> 0x38);
    lStack_260 = lVar15;
    (*(code *)apuStack_2d8[0][3])(apuStack_248,apuStack_2d8);
    lStack_210 = lStack_2a0;
    (*(code *)apuStack_298[0][3])(apuStack_208,apuStack_298);
    plVar9 = (long *)0x138;
    __Znwm();
    plStack_c0 = plStack_1d0;
    plVar17 = plVar9 + 1;
    *plVar17 = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110b9f3b0;
    plStack_1d0 = (long *)0x0;
    uStack_b8 = uStack_1c8;
    (**(code **)(alStack_1c0[0] + 0x10))(auStack_b0,alStack_1c0);
    uStack_300 = uStack_348;
    lStack_308 = lStack_350;
    uStack_78 = uStack_188;
    lStack_350 = 0;
    uStack_348 = 0;
    lStack_2f8 = lStack_340;
    lStack_2f0 = lStack_338;
    uStack_2e8 = uStack_330;
    if (lStack_338 != 0) {
      uVar13 = *(ulong *)(lStack_340 + 8);
      if ((uStack_300 & uStack_300 - 1) == 0) {
        uVar13 = uVar13 & uStack_300 - 1;
      }
      else {
        uVar5 = 0;
        if (uStack_300 != 0) {
          uVar5 = uVar13 / uStack_300;
        }
        if (uStack_300 <= uVar13) {
          uVar13 = uVar13 - uVar5 * uStack_300;
        }
      }
      *(long **)(lStack_308 + uVar13 * 8) = &lStack_2f8;
      lStack_340 = 0;
      lStack_338 = 0;
    }
    bVar2 = *(byte *)(lVar7 + 0x21f);
    lVar15 = *(long *)(lVar7 + 0x208);
    uVar13 = *(ulong *)(lVar7 + 0x210);
    pcStack_100 = FUN_10a717e6c;
    ppuStack_f8 = &PTR_FUN_110c13db8;
    plVar10 = (long *)0x90;
    __Znwm();
    uVar6 = iStack_251._1_3_;
    plVar1 = plVar9 + 3;
    if (-1 < (char)bVar2) {
      uVar13 = (ulong)bVar2;
      lVar15 = lVar7 + 0x208;
    }
    plVar10[1] = CONCAT17((undefined1)iStack_251,uStack_258);
    *plVar10 = lStack_260;
    lStack_260 = 0;
    uStack_258 = 0;
    iStack_251 = (uint)iStack_251._1_3_ << 8;
    plVar10[2] = CONCAT17(cStack_249,CONCAT43(uStack_24d,uVar6));
    (*(code *)apuStack_248[0][2])(plVar10 + 3,apuStack_248);
    plVar10[10] = lStack_210;
    (*(code *)apuStack_208[0][2])(plVar10 + 0xb,apuStack_208);
    plStack_f0 = plVar10;
    FUN_10a05c494(plVar1,&UNK_10e4d4989,0x59,&UNK_10f647b49,4,&plStack_c0,6,&lStack_308,lVar15,
                  uVar13,&pcStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
    func_0x000104c4f944(&lStack_308);
    FUN_10a042634(&plStack_c0);
    plStack_370 = plVar1;
    plStack_368 = plVar9;
    (*(code *)*apuStack_208[0])(apuStack_208);
    (*(code *)*apuStack_248[0])(apuStack_248);
    if (CONCAT17((undefined1)iStack_251,uStack_258) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    (*(code *)*apuStack_298[0])(apuStack_298);
    (*(code *)*apuStack_2d8[0])(apuStack_2d8);
    if (plVar8 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
    FUN_10a042634(&plStack_1d0);
    uVar11 = *(undefined8 *)(lStack_360 + 0x940);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = *plVar17 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_380 = plVar1;
    plStack_378 = plVar9;
    FUN_10a25f3f4(uVar11,&plStack_380);
    do {
      lVar7 = *plVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *plVar17 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    plVar9 = plStack_368;
    plVar8 = plStack_358;
    if (plStack_368 != (long *)0x0) {
      plVar17 = plStack_368 + 1;
      do {
        lVar7 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_368 + 0x10))(plStack_368);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        plVar8 = plStack_358;
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 1;
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
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  func_0x000104c4f944(&lStack_350);
  (*(code *)*apuStack_138[0])(apuStack_138);
  (*(code *)*apuStack_178[0])(apuStack_178);
  pppuVar12 = &ppuStack_328;
  FUN_10ae0f3a0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_380);
    FUN_10a05bd88(&plStack_370);
    func_0x00010a3f61b0(&lStack_360);
    func_0x000104c4f944(&lStack_350);
    (*(code *)*apuStack_138[0])(apuStack_138);
    (*(code *)*apuStack_178[0])(apuStack_178);
    FUN_10ae0f3a0(&ppuStack_328);
    __Unwind_Resume();
    (*(code *)*pppuVar12[0xb])();
    (*(code *)*pppuVar12[3])(pppuVar12 + 3);
    if (pppuVar12[1] != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return pppuVar12;
  }
  return pppuVar12;
}



/* Entry: 10a6e8510; end: 10a6e855b;  */

long FUN_10a6e8510(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x58))();
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a6e855c; end: 10a6e8aa3;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e86bc) */

long * FUN_10a6e855c(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,
                    undefined4 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined4 uStack_1b0;
  long *plStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long *plStack_188;
  long *plStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  undefined4 uStack_158;
  undefined8 **appuStack_150 [2];
  long alStack_140 [7];
  undefined8 uStack_108;
  code *pcStack_100;
  undefined **ppuStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 **ppuStack_c0;
  undefined7 uStack_b8;
  undefined4 uStack_b1;
  undefined1 uStack_ad;
  undefined1 uStack_a9;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x180;
  __Znwm();
  plVar8 = plVar6 + 1;
  plVar6[2] = 0;
  *plVar8 = 0x200000006;
  *(undefined2 *)(plVar6 + 3) = 4;
  plVar6[5] = 0;
  plVar6[4] = 0;
  plVar6[7] = 0;
  plVar6[6] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[0xf] = 0;
  plVar6[0xe] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = (long)(plVar6 + 3);
  plVar6[0x12] = 0;
  *plVar6 = (long)&PTR_FUN_110c148f0;
  *(undefined1 *)(plVar6 + 0x13) = 0;
  *(undefined1 *)(plVar6 + 0x2f) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lStack_190 = *(long *)(param_2 + 0x20);
  uStack_198 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar8 = (long *)(*(long *)(param_2 + 0x20) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1c8 = 0;
  lStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  uStack_1b0 = 0x3f800000;
  uVar10 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar10 = (ulong)*(byte *)(param_3 + 0x17);
  }
  plStack_1a0 = plVar6;
  plStack_188 = plVar6;
  plStack_180 = plVar6;
  if (uVar10 != 0) {
    uStack_a9 = 0x13;
    uStack_b8 = 0x70612d73656d61;
    uStack_b1 = 0x64692d70;
    ppuStack_c0 = (undefined8 **)0x672d70616e732d78;
    uStack_ad = 0;
    appuStack_150[0] = &ppuStack_c0;
    plVar6 = &lStack_1d0;
    func_0x000104c5bc74(plVar6,&ppuStack_c0,&UNK_10dd5b8f9,appuStack_150,&pcStack_100);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6 + 5,param_3);
  }
  ppuStack_1f0 = &PTR_FUN_110c78ce0;
  uStack_1e8 = 0;
  lStack_1d8 = 0;
  uStack_1e0 = 1;
  lVar7 = 0;
  FUN_10a701c0c();
  uVar10 = *(ulong *)(lVar7 + 8);
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  lStack_1d8 = lVar7;
  func_0x000107c30248(lVar7 + 0x10,param_4,uVar10);
  *(undefined4 *)(lVar7 + 0x18) = param_5;
  FUN_10a3bf5c8(appuStack_150,&ppuStack_1f0);
  lVar7 = *(long *)(param_2 + 0x100);
  plVar8 = (long *)0x138;
  __Znwm();
  ppuStack_c0 = appuStack_150[0];
  plVar11 = plVar8 + 1;
  *plVar11 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9f3b0;
  plVar6 = plVar8 + 3;
  appuStack_150[0] = (undefined8 **)0x0;
  uStack_b8 = SUB87(appuStack_150[1],0);
  uStack_b1._0_1_ = (undefined1)((ulong)appuStack_150[1] >> 0x38);
  (**(code **)(alStack_140[0] + 0x10))((long)&uStack_b1 + 1,alStack_140);
  plStack_f0 = plStack_1a0;
  uStack_170 = uStack_1c8;
  lStack_178 = lStack_1d0;
  uStack_78 = uStack_108;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_168 = lStack_1c0;
  lStack_160 = lStack_1b8;
  uStack_158 = uStack_1b0;
  if (lStack_1b8 != 0) {
    uVar10 = *(ulong *)(lStack_1c0 + 8);
    if ((uStack_170 & uStack_170 - 1) == 0) {
      uVar10 = uVar10 & uStack_170 - 1;
    }
    else if (uStack_170 <= uVar10) {
      uVar4 = 0;
      if (uStack_170 != 0) {
        uVar4 = uVar10 / uStack_170;
      }
      uVar10 = uVar10 - uVar4 * uStack_170;
    }
    *(long **)(lStack_178 + uVar10 * 8) = &lStack_168;
    lStack_1c0 = 0;
    lStack_1b8 = 0;
  }
  uVar10 = *(ulong *)(lVar7 + 0x210);
  lVar5 = *(long *)(lVar7 + 0x208);
  if (-1 < (char)*(byte *)(lVar7 + 0x21f)) {
    uVar10 = (ulong)*(byte *)(lVar7 + 0x21f);
    lVar5 = lVar7 + 0x208;
  }
  pcStack_100 = FUN_10a718280;
  ppuStack_f8 = &PTR_DAT_110c13dd0;
  plStack_1a0 = (long *)0x0;
  uStack_e8 = uStack_198;
  lStack_e0 = lStack_190;
  *(undefined8 *)((ulong)&plStack_1a0 | 8) = 0;
  ((undefined8 *)((ulong)&plStack_1a0 | 8))[1] = 0;
  FUN_10a05c494(plVar6,&UNK_10e4d49e3,0x57,&UNK_10f647b49,4,&ppuStack_c0,6,&lStack_178,lVar5,uVar10,
                &pcStack_100);
  (*(code *)*ppuStack_f8)(&ppuStack_f8);
  func_0x000104c4f944(&lStack_178);
  FUN_10a042634(&ppuStack_c0);
  plStack_200 = plVar6;
  plStack_1f8 = plVar8;
  FUN_10a042634(appuStack_150);
  uVar9 = *(undefined8 *)(param_2 + 0x940);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = *plVar11 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_210 = plVar6;
  plStack_208 = plVar8;
  FUN_10a25f3f4(uVar9,&plStack_210);
  do {
    lVar7 = *plVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar6 = plStack_1f8;
  *param_1 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    plVar8 = plStack_188 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_1f8 != (long *)0x0) {
    plVar8 = plStack_1f8 + 1;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10ae0f1d0(&ppuStack_1f0);
  func_0x000104c4f944(&lStack_1d0);
  if (lStack_190 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_1a0 != (long *)0x0) {
    func_0x0001092b4274(&plStack_1a0);
  }
  if (plStack_180 != (long *)0x0) {
    func_0x0001092b4274(&plStack_180);
  }
  plVar6 = plStack_188;
  if (plStack_188 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_188 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*plStack_188 + 8))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a05bd88(&plStack_210);
    FUN_10a05bd88(&plStack_200);
    FUN_10ae0f1d0(&ppuStack_1f0);
    func_0x000104c4f944(&lStack_1d0);
    FUN_10a6e8aa4(&plStack_1a0);
    func_0x00010a6e8ae0(&plStack_188);
    __Unwind_Resume();
    if (plVar6[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*plVar6 != 0) {
      func_0x0001092b4274(plVar6);
    }
    return plVar6;
  }
  return plVar6;
}



/* Entry: 10a6e8aa4; end: 10a6e8b53;  */

long * FUN_10a6e8aa4(long *param_1)

{
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*param_1 != 0) {
    func_0x0001092b4274(param_1);
  }
  return param_1;
}



/* Entry: 10a6e8b54; end: 10a6e8bc3;  */

void FUN_10a6e8b54(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
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
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c14960;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a6e8bc4; end: 10a6e8c67;  */

undefined8 FUN_10a6e8bc4(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x30);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)*param_1;
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
  *param_1 = lVar6;
  return 0;
}



/* Entry: 10a6e8c68; end: 10a6e8ca7;  */

void FUN_10a6e8c68(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  func_0x00010a718a24(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a6e8ca8; end: 10a6e8d8b;  */

void FUN_10a6e8ca8(undefined8 param_1,undefined8 *param_2)

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
  FUN_10a718bb8(param_1,&plStack_28);
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



/* Entry: 10a6e8d8c; end: 10a6e92e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e8edc) */

long * FUN_10a6e8d8c(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined4 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  undefined4 uStack_168;
  undefined8 **appuStack_160 [2];
  long alStack_150 [7];
  undefined8 uStack_118;
  code *pcStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  undefined7 uStack_c8;
  undefined4 uStack_c1;
  undefined1 uStack_bd;
  undefined1 uStack_b9;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a4f3d60(&plStack_198);
  lStack_1c8 = lStack_190;
  if (lStack_190 != 0) {
    plVar6 = (long *)(lStack_190 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar10 = (undefined8 *)(*(ulong *)(param_4 + 0x78) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar10 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_1c0,*puVar10,puVar10[1]);
  }
  else {
    uStack_1b8 = puVar10[1];
    uStack_1c0 = *puVar10;
    lStack_1b0 = puVar10[2];
  }
  lStack_1a0 = *(undefined8 *)(param_2 + 0x20);
  uStack_1a8 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar6 = (long *)(*(long *)(param_2 + 0x20) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_1e8 = 0;
  lStack_1f0 = 0;
  lStack_1d8 = 0;
  lStack_1e0 = 0;
  uStack_1d0 = 0x3f800000;
  uVar11 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar11 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar11 != 0) {
    uStack_b9 = 0x13;
    uStack_c8 = 0x70612d73656d61;
    uStack_c1 = 0x64692d70;
    ppuStack_d0 = (undefined8 **)0x672d70616e732d78;
    uStack_bd = 0;
    appuStack_160[0] = &ppuStack_d0;
    plVar6 = &lStack_1f0;
    func_0x000104c5bc74(plVar6,&ppuStack_d0,&UNK_10dd5b8f9,appuStack_160,&pcStack_110);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6 + 5,param_3);
  }
  ppuStack_210 = &PTR_FUN_110c78e20;
  uStack_208 = 0;
  lStack_1f8 = 0;
  uStack_200 = 1;
  lVar7 = 0;
  func_0x00010a701c5c();
  lStack_1f8 = lVar7;
  if (param_4 != lVar7) {
    FUN_10ae0e300(lVar7);
    FUN_10ae0ed04(lVar7,param_4);
  }
  FUN_10a3bf5c8(appuStack_160,&ppuStack_210);
  lVar7 = *(long *)(param_2 + 0x100);
  plVar8 = (long *)0x138;
  __Znwm();
  ppuStack_d0 = appuStack_160[0];
  plVar12 = plVar8 + 1;
  *plVar12 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9f3b0;
  plVar6 = plVar8 + 3;
  appuStack_160[0] = (undefined8 **)0x0;
  uStack_c8 = SUB87(appuStack_160[1],0);
  uStack_c1._0_1_ = (undefined1)((ulong)appuStack_160[1] >> 0x38);
  (**(code **)(alStack_150[0] + 0x10))((long)&uStack_c1 + 1,alStack_150);
  lStack_100 = lStack_1c8;
  uStack_180 = uStack_1e8;
  lStack_188 = lStack_1f0;
  uStack_88 = uStack_118;
  lStack_1f0 = 0;
  uStack_1e8 = 0;
  lStack_178 = lStack_1e0;
  lStack_170 = lStack_1d8;
  uStack_168 = uStack_1d0;
  if (lStack_1d8 != 0) {
    uVar11 = *(ulong *)(lStack_1e0 + 8);
    if ((uStack_180 & uStack_180 - 1) == 0) {
      uVar11 = uVar11 & uStack_180 - 1;
    }
    else if (uStack_180 <= uVar11) {
      uVar4 = 0;
      if (uStack_180 != 0) {
        uVar4 = uVar11 / uStack_180;
      }
      uVar11 = uVar11 - uVar4 * uStack_180;
    }
    *(long **)(lStack_188 + uVar11 * 8) = &lStack_178;
    lStack_1e0 = 0;
    lStack_1d8 = 0;
  }
  uVar11 = *(ulong *)(lVar7 + 0x210);
  lVar5 = *(long *)(lVar7 + 0x208);
  if (-1 < (char)*(byte *)(lVar7 + 0x21f)) {
    uVar11 = (ulong)*(byte *)(lVar7 + 0x21f);
    lVar5 = lVar7 + 0x208;
  }
  pcStack_110 = FUN_10a719678;
  ppuStack_108 = &PTR_FUN_110c13de8;
  lStack_1c8 = 0;
  uStack_f0 = uStack_1b8;
  uStack_f8 = uStack_1c0;
  uStack_e8 = lStack_1b0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  lStack_1b0 = 0;
  uStack_d8 = lStack_1a0;
  uStack_e0 = uStack_1a8;
  uStack_1a8 = 0;
  lStack_1a0 = 0;
  FUN_10a05c494(plVar6,&UNK_10e4d4a41,0x58,&UNK_10f647b49,4,&ppuStack_d0,6,&lStack_188,lVar5,uVar11,
                &pcStack_110);
  (*(code *)*ppuStack_108)(&ppuStack_108);
  func_0x000104c4f944(&lStack_188);
  FUN_10a042634(&ppuStack_d0);
  plStack_220 = plVar6;
  plStack_218 = plVar8;
  FUN_10a042634(appuStack_160);
  uVar9 = *(undefined8 *)(param_2 + 0x940);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = *plVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_230 = plVar6;
  plStack_228 = plVar8;
  FUN_10a25f3f4(uVar9,&plStack_230);
  do {
    lVar7 = *plVar12;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar6 = plStack_218;
  *param_1 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    plVar8 = plStack_198 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (plStack_218 != (long *)0x0) {
    plVar8 = plStack_218 + 1;
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_218 + 0x10))(plStack_218);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10ae0eff4(&ppuStack_210);
  func_0x000104c4f944(&lStack_1f0);
  if (lStack_1a0 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if (lStack_1c8 != 0) {
    func_0x0001092b4274(&lStack_1c8);
  }
  if (lStack_190 != 0) {
    func_0x0001092b4274(&lStack_190);
  }
  plVar6 = plStack_198;
  if (plStack_198 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_198 + 1);
    do {
      uVar11 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar11 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plStack_198 + 8))();
        plVar6 = plStack_198;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    if (lStack_1c8 != 0) {
      func_0x0001092b4274(&lStack_1c8);
    }
    func_0x00010a6e9334(&plStack_198);
    __Unwind_Resume();
    if (plVar6[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)plVar6 + 0x1f) < '\0') {
      __ZdlPv(plVar6[1]);
    }
    if (*plVar6 != 0) {
      func_0x0001092b4274(plVar6);
    }
    return plVar6;
  }
  return plVar6;
}



/* Entry: 10a6e92e8; end: 10a6e93a7;  */

long * FUN_10a6e92e8(long *param_1)

{
  if (param_1[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  if (*param_1 != 0) {
    func_0x0001092b4274(param_1);
  }
  return param_1;
}



/* Entry: 10a6e93a8; end: 10a6e9573;  */

long * FUN_10a6e93a8(long *param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  plVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[2] = (long)plVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  lVar2 = *param_1;
  func_0x000107c2b054(auStack_48,&UNK_10f66ea00);
  func_0x000107c2b054(auStack_78,"true");
  if (lVar2 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar2 + 0x8d8),auStack_48,auStack_78);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar2 = *param_1;
  func_0x000107c2b054(auStack_48,&UNK_10f66ebaa);
  FUN_10a6e9574(auStack_60,(char)param_1[1]);
  if (lVar2 != 0) {
    FUN_10a76bdb0(*(undefined8 *)(lVar2 + 0x8d8),auStack_48,auStack_60);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10a6e9574; end: 10a6e9647;  */

/* WARNING: Possible PIC construction at 0x00010a6e96dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6e96e0) */
/* WARNING: Removing unreachable block (ram,0x00010a6e96e4) */
/* WARNING: Removing unreachable block (ram,0x00010a6e96f4) */
/* WARNING: Removing unreachable block (ram,0x00010a6e96fc) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9704) */
/* WARNING: Removing unreachable block (ram,0x00010a6e970c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9714) */
/* WARNING: Removing unreachable block (ram,0x00010a6e971c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9724) */
/* WARNING: Removing unreachable block (ram,0x00010a6e972c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9734) */
/* WARNING: Removing unreachable block (ram,0x00010a6e973c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9748) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9750) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98e8) */
/* WARNING: Removing unreachable block (ram,0x00010a6e97c4) */
/* WARNING: Removing unreachable block (ram,0x00010a6e97cc) */
/* WARNING: Removing unreachable block (ram,0x00010a6e97f4) */
/* WARNING: Removing unreachable block (ram,0x00010a6e97fc) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9804) */
/* WARNING: Removing unreachable block (ram,0x00010a6e980c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9814) */
/* WARNING: Removing unreachable block (ram,0x00010a6e981c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9824) */
/* WARNING: Removing unreachable block (ram,0x00010a6e9894) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98a4) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98ac) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98b4) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98bc) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98c4) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98cc) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98d4) */

ulong * FUN_10a6e9574(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  char *pcVar5;
  long lVar6;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  undefined8 unaff_x21;
  ulong uVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  ulong auStack_d0 [3];
  undefined8 auStack_b8 [3];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  lVar6 = 0xf0;
  puVar1 = (ulong *)&UNK_110c133f8;
  do {
    if ((uint)(byte)puVar1[-2] == (uint)param_2) {
      if (lVar6 != 0) {
        uVar7 = *puVar1;
        if (uVar7 < 0x7ffffffffffffff8) {
          uVar8 = puVar1[-1];
          if (uVar7 < 0x17) {
            *(char *)((long)param_1 + 0x17) = (char)uVar7;
            puVar4 = param_1;
            if (uVar7 == 0) goto LAB_10a6e9630;
          }
          else {
            puVar1 = (ulong *)0x19;
            if ((uVar7 | 7) != 0x17) {
              puVar1 = (ulong *)((uVar7 | 7) + 1);
            }
            puVar4 = puVar1;
            __Znwm();
            param_1[1] = uVar7;
            param_1[2] = (ulong)puVar1 | 0x8000000000000000;
            *param_1 = (ulong)puVar4;
          }
          param_2 = puVar4;
          _memmove(puVar4,uVar8,uVar7);
          param_1 = puVar4;
LAB_10a6e9630:
          *(undefined1 *)((long)param_1 + uVar7) = 0;
          return param_2;
        }
        func_0x000109ffde50();
        puVar1 = auStack_d0;
        param_1 = auStack_d0;
        pcStack_38 = FUN_10a6e9648;
        unaff_x29 = &puStack_40;
        unaff_x20 = *param_2;
        puStack_40 = &stack0xfffffffffffffff0;
        FUN_10a6e9574(auStack_b8,(char)param_2[1]);
        puVar3 = auStack_b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar3,0,&UNK_10f66ea12,4);
        uStack_98 = puVar3[1];
        uStack_a0 = *puVar3;
        uStack_90 = puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puVar3 = &uStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar3,&UNK_10f66ebbc,0xd);
        uStack_78 = puVar3[1];
        uStack_80 = *puVar3;
        uStack_70 = puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        pcVar5 = "true";
        unaff_x30 = 0x10a6e96e0;
        goto code_r0x00010005375c;
      }
      break;
    }
    puVar1 = puVar1 + 3;
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != 0);
  pcVar5 = &UNK_10f66f9f0;
  puVar1 = (ulong *)register0x00000008;
  param_2 = unaff_x19;
code_r0x00010005375c:
  *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar1 + -0x28) = unaff_x21;
  *(ulong *)((long)puVar1 + -0x20) = unaff_x20;
  *(ulong **)((long)puVar1 + -0x18) = param_2;
  *(undefined1 ***)((long)puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)((long)puVar1 + -8) = unaff_x30;
  puVar4 = (ulong *)pcVar5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar4) {
    func_0x000107c2b040();
    *(ulong *)((long)puVar1 + -0x60) = unaff_x20;
    *(ulong **)((long)puVar1 + -0x58) = param_1;
    *(undefined1 **)((long)puVar1 + -0x50) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar4 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar4 != 0) {
        puVar3 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar3;
        puVar3[1] = 0x434948504152475f;
        *puVar3 = 0x45524f43534e454c;
        puVar3[3] = 0x525f595a414c5f54;
        puVar3[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar3 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar3 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar3 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar1 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar1;
      }
    }
    return puVar4;
  }
  if (puVar4 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar4;
    puVar2 = param_1;
    if (puVar4 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar4 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar4 | 7) + 1);
    }
    puVar2 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar4;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar2;
  }
  func_0x000107c610b8(puVar2,pcVar5,puVar4);
code_r0x0001000537e0:
  *(char *)((long)puVar2 + (long)puVar4) = '\0';
  return param_1;
}



/* Entry: 10a6e9648; end: 10a6e9967;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e97fc) */
/* WARNING: Removing unreachable block (ram,0x00010a6e970c) */
/* WARNING: Removing unreachable block (ram,0x00010a6e98ac) */

void FUN_10a6e9648(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined1 **ppuVar2;
  undefined1 **ppuVar3;
  long lVar4;
  undefined1 *apuStack_a0 [2];
  char cStack_89;
  undefined1 *apuStack_88 [2];
  char cStack_71;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  
  ppuVar3 = apuStack_a0;
  lVar4 = *param_2;
  FUN_10a6e9574(apuStack_88,(char)param_2[1]);
  ppuVar2 = apuStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (ppuVar2,0,&UNK_10f66ea12,4);
  puStack_68 = ppuVar2[1];
  puStack_70 = *ppuVar2;
  puStack_60 = ppuVar2[2];
  ppuVar2[1] = (undefined1 *)0x0;
  ppuVar2[2] = (undefined1 *)0x0;
  *ppuVar2 = (undefined1 *)0x0;
  ppuVar2 = &puStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar2,&UNK_10f66ebbc,0xd);
  puStack_48 = ppuVar2[1];
  puStack_50 = *ppuVar2;
  puStack_40 = ppuVar2[2];
  ppuVar2[1] = (undefined1 *)0x0;
  ppuVar2[2] = (undefined1 *)0x0;
  *ppuVar2 = (undefined1 *)0x0;
  func_0x000107c2b054(apuStack_a0,"true");
  if (lVar4 != 0) {
    ppuVar3 = *(undefined1 ***)(lVar4 + 0x8d8);
    FUN_10a76bdb0(ppuVar3,&puStack_50,apuStack_a0);
  }
  if (cStack_89 < '\0') {
    __ZdlPv();
    ppuVar3 = (undefined1 **)apuStack_a0[0];
  }
  if ((long)puStack_60 < 0) {
    ppuVar3 = (undefined1 **)puStack_70;
    __ZdlPv();
  }
  if (cStack_71 < '\0') {
    ppuVar3 = (undefined1 **)apuStack_88[0];
    __ZdlPv();
  }
  if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x12) = 1;
    }
    param_2[0x11] = (long)ppuVar3;
    FUN_10a6e9574(apuStack_88,(char)param_2[1]);
    ppuVar2 = apuStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppuVar2,0,&UNK_10f66ea12,4);
    puStack_68 = ppuVar2[1];
    puStack_70 = *ppuVar2;
    puStack_60 = ppuVar2[2];
    ppuVar2[1] = (undefined1 *)0x0;
    ppuVar2[2] = (undefined1 *)0x0;
    *ppuVar2 = (undefined1 *)0x0;
    ppuVar2 = &puStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar2,&UNK_10f66ebca,0xc);
    puStack_48 = ppuVar2[1];
    puStack_50 = *ppuVar2;
    puStack_40 = ppuVar2[2];
    ppuVar2[1] = (undefined1 *)0x0;
    ppuVar2[2] = (undefined1 *)0x0;
    *ppuVar2 = (undefined1 *)0x0;
    if ((*(byte *)(param_2 + 0x12) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6e98ec);
      (*pcVar1)();
    }
    if (*param_2 != 0) {
      FUN_10a76bf18((double)(param_2[0x11] - param_2[2]) / 1000000000.0,
                    *(undefined8 *)(*param_2 + 0x8d8),&puStack_50);
    }
    if ((long)puStack_60 < 0) {
      __ZdlPv(puStack_70);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(apuStack_88[0]);
    }
    lVar4 = *param_2;
    FUN_10a6e9574(apuStack_88,(char)param_2[1]);
    ppuVar2 = apuStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (ppuVar2,0,&UNK_10f66ea12,4);
    puStack_68 = ppuVar2[1];
    puStack_70 = *ppuVar2;
    puStack_60 = ppuVar2[2];
    ppuVar2[1] = (undefined1 *)0x0;
    ppuVar2[2] = (undefined1 *)0x0;
    *ppuVar2 = (undefined1 *)0x0;
    ppuVar2 = &puStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar2,&UNK_10f66ebd7,0x1b);
    puStack_48 = ppuVar2[1];
    puStack_50 = *ppuVar2;
    puStack_40 = ppuVar2[2];
    ppuVar2[1] = (undefined1 *)0x0;
    ppuVar2[2] = (undefined1 *)0x0;
    *ppuVar2 = (undefined1 *)0x0;
    if (lVar4 != 0) {
      FUN_10a76bf18(param_1,*(undefined8 *)(lVar4 + 0x8d8),&puStack_50);
    }
    if ((long)puStack_60 < 0) {
      __ZdlPv(puStack_70);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(apuStack_88[0]);
    }
  }
  return;
}



/* Entry: 10a6e9968; end: 10a6e9d6b;  */

void FUN_10a6e9968(double param_1,long *param_2)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  double dVar6;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (((*(byte *)(param_2 + 0x14) & 1) == 0) && ((char)param_2[0x12] == '\x01')) {
    plVar3 = param_2;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x14) = 1;
    }
    param_2[0x13] = (long)plVar3;
    FUN_10a6e9574(auStack_88,(char)param_2[1]);
    puVar4 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar4,0,&UNK_10f66ea12,4);
    uStack_68 = puVar4[1];
    uStack_70 = *puVar4;
    lStack_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&UNK_10f66ebf3,0xf);
    uStack_48 = puVar4[1];
    uStack_50 = *puVar4;
    lStack_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (((*(byte *)(param_2 + 0x14) & 1) == 0) || ((*(byte *)(param_2 + 0x12) & 1) == 0)) {
LAB_10a6e9cf8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6e9cfc);
      (*pcVar2)();
    }
    if (*param_2 != 0) {
      FUN_10a76bf18((double)(param_2[0x13] - param_2[0x11]) / 1000000000.0,
                    *(undefined8 *)(*param_2 + 0x8d8),&uStack_50);
    }
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    lVar5 = param_2[0x18];
    iVar1 = (int)lVar5 + 1;
    *(int *)(param_2 + 0x18) = iVar1;
    dVar6 = (double)iVar1;
    param_2[0x17] = (long)(param_1 / dVar6 + ((double)param_2[0x17] * (double)(int)lVar5) / dVar6);
    lVar5 = *param_2;
    FUN_10a6e9574(auStack_88,(char)param_2[1]);
    puVar4 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar4,0,&UNK_10f66ea12,4);
    uStack_68 = puVar4[1];
    uStack_70 = *puVar4;
    lStack_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&UNK_10f66ec03,0x22);
    uStack_48 = puVar4[1];
    uStack_50 = *puVar4;
    lStack_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (lVar5 != 0) {
      FUN_10a76bf18(param_2[0x17],*(undefined8 *)(lVar5 + 0x8d8),&uStack_50);
    }
  }
  else {
    FUN_10a6e9574(auStack_88,(char)param_2[1]);
    puVar4 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar4,0,&UNK_10f66ea12,4);
    uStack_68 = puVar4[1];
    uStack_70 = *puVar4;
    lStack_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&UNK_10f66ec26,0xe);
    uStack_48 = puVar4[1];
    uStack_50 = *puVar4;
    lStack_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((*(byte *)(param_2 + 0x14) & 1) == 0) goto LAB_10a6e9cf8;
    if (*param_2 != 0) {
      FUN_10a76bf18((double)((long)puVar4 - param_2[0x13]) / 1000000000.0,
                    *(undefined8 *)(*param_2 + 0x8d8),&uStack_50);
    }
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if (cStack_71 < '\0') {
      __ZdlPv(auStack_88[0]);
    }
    lVar5 = param_2[0x16];
    iVar1 = (int)lVar5 + 1;
    *(int *)(param_2 + 0x16) = iVar1;
    dVar6 = (double)iVar1;
    param_2[0x15] = (long)(param_1 / dVar6 + ((double)param_2[0x15] * (double)(int)lVar5) / dVar6);
    lVar5 = *param_2;
    FUN_10a6e9574(auStack_88,(char)param_2[1]);
    puVar4 = auStack_88;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar4,0,&UNK_10f66ea12,4);
    uStack_68 = puVar4[1];
    uStack_70 = *puVar4;
    lStack_60 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar4 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar4,&UNK_10f66ec35,0x21);
    uStack_48 = puVar4[1];
    uStack_50 = *puVar4;
    lStack_40 = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    if (lVar5 != 0) {
      FUN_10a76bf18(param_2[0x15],*(undefined8 *)(lVar5 + 0x8d8),&uStack_50);
    }
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  return;
}



/* Entry: 10a6e9d6c; end: 10a6e9e97;  */

void FUN_10a6e9d6c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  FUN_10a6e9574(auStack_88,(char)param_2[1]);
  puVar1 = auStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar1,0,&UNK_10f66ea12,4);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  lStack_60 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar1,&UNK_10f66ec57,0x11);
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  lStack_40 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (*param_2 != 0) {
    FUN_10a76bf18(param_1,*(undefined8 *)(*param_2 + 0x8d8),&uStack_50);
  }
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  return;
}



/* Entry: 10a6e9e98; end: 10a6e9fe3;  */

/* WARNING: Removing unreachable block (ram,0x00010a6e9f60) */

void FUN_10a6e9e98(double param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar2 = param_2[0x10];
  iVar1 = (int)lVar2 + 1;
  *(int *)(param_2 + 0x10) = iVar1;
  dVar4 = (double)iVar1;
  param_2[0xf] = (long)(param_1 / dVar4 + ((double)param_2[0xf] * (double)(int)lVar2) / dVar4);
  FUN_10a6e9574(auStack_78,(char)param_2[1]);
  puVar3 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar3,0,&UNK_10f66ea12,4);
  uStack_58 = puVar3[1];
  uStack_60 = *puVar3;
  lStack_50 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f66ec69,0x1a);
  uStack_38 = puVar3[1];
  uStack_40 = *puVar3;
  uStack_30 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if (*param_2 != 0) {
    FUN_10a76bf18(param_2[0xf],*(undefined8 *)(*param_2 + 0x8d8),&uStack_40);
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10a6e9fe4; end: 10a6ea043;  */

void FUN_10a6e9fe4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  param_1 = param_1 + 200;
  uStack_28 = param_2;
  FUN_10a719c00(param_1,param_2,&UNK_10dd5b8f9,&uStack_28,&uStack_29);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar1 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    *(long *)(param_1 + 0x28) = lVar1;
  }
  return;
}



/* Entry: 10a6ea044; end: 10a6ea2a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a6ea214) */
/* WARNING: Removing unreachable block (ram,0x00010a6ea160) */
/* WARNING: Removing unreachable block (ram,0x00010a6ea260) */

undefined1  [16] FUN_10a6ea044(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  long lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 **appuStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  
  plVar3 = param_1 + 0x19;
  puStack_40 = param_2;
  FUN_10a719c00(plVar3,param_2,&UNK_10dd5b8f9,&puStack_40,&ppuStack_60);
  if ((*(byte *)(plVar3 + 6) & 1) == 0) {
    FUN_10a04f808();
    if (uStack_50._7_1_ < '\0') {
      __ZdlPv(ppuStack_60);
    }
    if (cStack_61 < '\0') {
      __ZdlPv(appuStack_78[0]);
    }
    __Unwind_Resume(plVar3);
    auVar9._8_8_ = 0x11;
    auVar9._0_8_ = &UNK_10f671199;
    return auVar9;
  }
  lVar6 = plVar3[5];
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[3] = (long)plVar3;
  }
  lVar2 = param_1[0x1f];
  iVar1 = (int)lVar2 + 1;
  dVar7 = (double)iVar1;
  *(int *)(param_1 + 0x1f) = iVar1;
  param_1[0x1e] =
       (long)(((double)((long)plVar3 - lVar6) / 1000000000.0) / dVar7 +
             ((double)param_1[0x1e] * (double)(int)lVar2) / dVar7);
  FUN_10a6e9574(appuStack_78,(char)param_1[1]);
  pppuVar4 = appuStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar4,0,&UNK_10f66ea12,4);
  puStack_58 = pppuVar4[1];
  ppuStack_60 = *pppuVar4;
  uStack_50 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  pppuVar4 = &ppuStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,&UNK_10f66ec84,0x10);
  puStack_38 = pppuVar4[1];
  puStack_40 = *pppuVar4;
  puStack_30 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if (*param_1 != 0) {
    FUN_10a76bf18(param_1[0x1e],*(undefined8 *)(*param_1 + 0x8d8),&puStack_40);
  }
  if ((long)uStack_50 < 0) {
    __ZdlPv(ppuStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(appuStack_78[0]);
  }
  lVar6 = *param_1;
  FUN_10a6e9574(appuStack_78,(char)param_1[1]);
  pppuVar4 = appuStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (pppuVar4,0,&UNK_10f66ea12,4);
  puStack_58 = pppuVar4[1];
  ppuStack_60 = *pppuVar4;
  uStack_50 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  ppuVar5 = (undefined8 **)&UNK_10f66ec95;
  pppuVar4 = &ppuStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,&UNK_10f66ec95,0x18);
  puStack_38 = pppuVar4[1];
  puStack_40 = *pppuVar4;
  puStack_30 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  if (lVar6 != 0) {
    pppuVar4 = *(undefined8 ****)(lVar6 + 0x8d8);
    ppuVar5 = &puStack_40;
    FUN_10a76bd40(pppuVar4,ppuVar5,(int)param_1[0x1f] + -1);
  }
  if ((long)uStack_50 < 0) {
    pppuVar4 = (undefined8 ***)ppuStack_60;
    __ZdlPv(ppuStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(appuStack_78[0]);
    pppuVar4 = (undefined8 ***)appuStack_78[0];
  }
  auVar8._8_8_ = ppuVar5;
  auVar8._0_8_ = pppuVar4;
  return auVar8;
}



/* Entry: 10a6ea2a8; end: 10a6ea333;  */

undefined1  [16] FUN_10a6ea2a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f671199;
  return auVar1;
}



/* Entry: 10a6ea334; end: 10a6ea487;  */

void FUN_10a6ea334(undefined8 param_1)

{
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_5c = 0x124;
  uStack_58 = 0xffffffff;
  FUN_10a6ea488(param_1,&puStack_98);
  puStack_a0 = &DAT_10f66edb2;
  puStack_98 = &UNK_10f66ed88;
  uStack_88 = 3;
  puStack_a8 = &DAT_10f66eda2;
  puStack_b0 = &DAT_10f66e51f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  ppuStack_90 = &puStack_b0;
  FUN_10a71a140();
  puStack_a0 = &DAT_10f66de28;
  puStack_98 = &UNK_10f66edc2;
  puStack_a8 = &DAT_10f66edd9;
  puStack_b0 = &DAT_10f66e51f;
  uStack_88 = 3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  ppuStack_90 = &puStack_b0;
  FUN_10a71a804(param_1,&puStack_98,0);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66eddd;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f66de00;
  uStack_38 = 0;
  FUN_10a71aecc(param_1,&puStack_98);
  FUN_10a71b0e8(param_1);
  return;
}



/* Entry: 10a6ea488; end: 10a6ea55f;  */

/* WARNING: Removing unreachable block (ram,0x00010a6ea520) */

undefined1  [16] FUN_10a6ea488(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f671199,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a71a044(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6ea560; end: 10a6eab7b;  */

long * FUN_10a6ea560(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x83] = (long)&PTR_FUN_110c383b8;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined2 *)(param_1 + 0x86) = 0x100;
  *param_1 = (long)&PTR_DAT_110b17898;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a03e114(param_1 + 3);
  plStack_c0 = param_1 + 1;
  FUN_10a0040d0(param_1 + 7,&PTR_PTR_110c11d08);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)&PTR_FUN_110c11ba8;
  param_1[3] = (long)&PTR_DAT_110c11c20;
  param_1[7] = (long)&PTR_DAT_110c11c50;
  param_1[0x83] = (long)&PTR_DAT_110c11cc8;
  param_1[0xe] = param_2;
  plStack_b8 = param_1 + 7;
  FUN_10a3ca004();
  ppuVar8 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puVar9 = *ppuVar8;
  puStack_b0 = &UNK_10f63b699;
  puStack_a8 = (undefined *)0x28;
  if (puVar9 == (undefined *)0x0) {
    FUN_10a0edfc4(&puStack_b0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6ea96c);
    (*pcVar5)();
  }
  lVar10 = *(long *)(puVar9 + 0x18);
  lVar14 = *(long *)(puVar9 + 0x10);
  param_1[0x10] = *(long *)(puVar9 + 0x18);
  param_1[0xf] = lVar14;
  if (lVar10 != 0) {
    plVar7 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  plStack_c8 = param_1 + 0x16;
  *plStack_c8 = (long)(param_1 + 0x17);
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  plVar13 = param_1 + 0x1a;
  param_1[0x1b] = 0;
  *plVar13 = 0;
  plStack_d0 = param_1 + 0x19;
  *plStack_d0 = (long)plVar13;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  plStack_d8 = param_1 + 0x1c;
  *plStack_d8 = (long)(param_1 + 0x1d);
  plStack_e0 = param_1 + 0x1f;
  *plStack_e0 = 0x32aaaba7;
  plStack_e8 = param_1 + 0x2a;
  *plStack_e8 = 0x32aaaba7;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x32aaaba7;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x58] = 0x4270000042200000;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x32aaaba7;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0x32aaaba7;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  FUN_109d1a80c();
  puVar9 = *ppuVar8;
  puVar6 = (undefined8 *)0xd0;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110ae90f0;
  puStack_a8 = &UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  puStack_b0 = puVar9;
  func_0x000109d18d1c(puVar6 + 3,&UNK_10f66edff,0xb,&puStack_b0);
  func_0x0001092ba41c(&puStack_b0);
  plVar12 = plStack_b8;
  param_1[0x75] = (long)(puVar6 + 3);
  param_1[0x76] = (long)puVar6;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0x32aaaba7;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((long)param_1 + 0x409) = 0;
  *(undefined8 *)((long)param_1 + 0x401) = 0;
  plVar7 = (long *)((long)plStack_b8 + *(long *)(param_1[7] + -0x18));
  if ((*(byte *)(plVar7 + 3) & 1) == 0) {
    *(undefined1 *)(plVar7 + 3) = 1;
    plVar7[2] = param_2;
    if (param_2 != 0) {
      plVar7[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar7 + 0x18))();
  }
  FUN_10a5ae998(param_1[10],&PTR_DAT_110b99f08,param_2,plVar12);
  ppuVar8 = &PTR_DAT_110b9fab0;
  FUN_10a5ae998(param_1[4],&PTR_DAT_110b9fab0,param_2,param_1 + 3);
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    ppuVar8 = (undefined **)0x4;
    func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66ee52,0xb8,&UNK_10f66eeab);
  }
  plVar7 = (long *)0x28;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c13e60;
  lVar10 = param_1[0xe];
  plVar7[3] = (long)&PTR_FUN_110c231a0;
  plVar7[4] = lVar10;
  plVar12 = (long *)param_1[0x13];
  param_1[0x12] = (long)(plVar7 + 3);
  param_1[0x13] = (long)plVar7;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      plVar7 = plVar12;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  param_1[3] = (long)&PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(plStack_c0);
  __Unwind_Resume();
  pcStack_f8 = FUN_10a6eab7c;
  plStack_120 = param_1;
  plStack_118 = plVar13;
  plStack_110 = plVar12;
  plStack_108 = param_1 + 0x11;
  puStack_100 = &stack0xfffffffffffffff0;
  FUN_10a6eae10(&plStack_128,plVar7);
  FUN_109d1a244(&plStack_128);
  if (plStack_128 != (long *)0x0) {
    puVar2 = (ulong *)(plStack_128 + 1);
    do {
      uVar11 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plStack_128 + 8))();
      }
    }
  }
  __ZNSt3__15mutexD1Ev(plVar7 + 0x7a);
  func_0x00010a701df0(plVar7 + 0x77);
  func_0x00010a061620(plVar7 + 0x75);
  FUN_10a71426c(plVar7 + 0x6f);
  FUN_10a71426c(plVar7 + 0x6d);
  FUN_10a71426c(plVar7 + 0x6b);
  __ZNSt3__15mutexD1Ev(plVar7 + 99);
  plVar12 = (long *)plVar7[0x62];
  if (plVar12 != (long *)0x0) {
    puVar2 = (ulong *)(plVar12 + 1);
    do {
      uVar11 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar12 + 8))();
      }
    }
  }
  __ZNSt3__15mutexD1Ev(plVar7 + 0x5a);
  plVar12 = (long *)plVar7[0x59];
  if (plVar12 != (long *)0x0) {
    puVar2 = (ulong *)(plVar12 + 1);
    do {
      uVar11 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar11 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar11 & 0x1fffffffc) == 4) {
      do {
        uVar11 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar11 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar11 - 1 == 0) {
        (**(code **)(*plVar12 + 8))();
      }
    }
  }
  if (((char)plVar7[0x57] == '\x01') && (*(char *)((long)plVar7 + 0x25f) < '\0')) {
    __ZdlPv(plVar7[0x49]);
  }
  if (plVar7[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a71b2f4(plVar7 + 0x42);
  if (plVar7[0x41] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(plVar7 + 0x38);
  func_0x00010a711e00(plVar7 + 0x36);
  func_0x00010a71b29c(plVar7 + 0x34);
  func_0x00010a71b244(plVar7 + 0x32);
  __ZNSt3__15mutexD1Ev(plVar7 + 0x2a);
  func_0x00010a701e5c(plVar7 + 0x27);
  __ZNSt3__15mutexD1Ev(plVar7 + 0x1f);
  func_0x00010a71b1fc(plVar7 + 0x1c,plVar7[0x1d]);
  func_0x00010a71b1fc(plVar7 + 0x19,plVar7[0x1a]);
  func_0x00010a71b1fc(plVar7 + 0x16,plVar7[0x17]);
  func_0x00010a711f50(plVar7 + 0x14);
  func_0x00010a71b1a4(plVar7 + 0x12);
  plVar12 = (long *)plVar7[0x11];
  plVar7[0x11] = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  FUN_10a09e870(plVar7 + 0xf);
  if (plVar7[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar9 = ppuVar8[1];
  plVar7[7] = (long)puVar9;
  *(undefined **)((long)(plVar7 + 7) + *(long *)(puVar9 + -0x18)) = ppuVar8[2];
  func_0x00010a004e5c(plVar7 + 10);
  func_0x00010a004e04(plVar7 + 8);
  plVar7[3] = (long)&PTR_FUN_110b9fa98;
  if ((undefined8 *)plVar7[6] != (undefined8 *)0x0) {
    *(undefined8 *)plVar7[6] = 0;
  }
  func_0x00010a004e5c(plVar7 + 4);
  *plVar7 = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(plVar7 + 1);
  return plVar7;
}



/* Entry: 10a6eab7c; end: 10a6eae0f;  */

undefined8 * FUN_10a6eab7c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plStack_38;
  
  FUN_10a6eae10(&plStack_38,param_1);
  FUN_109d1a244(&plStack_38);
  if (plStack_38 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_38 + 1);
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
        (**(code **)(*plStack_38 + 8))();
      }
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x7a);
  func_0x00010a701df0(param_1 + 0x77);
  func_0x00010a061620(param_1 + 0x75);
  FUN_10a71426c(param_1 + 0x6f);
  FUN_10a71426c(param_1 + 0x6d);
  FUN_10a71426c(param_1 + 0x6b);
  __ZNSt3__15mutexD1Ev(param_1 + 99);
  plVar4 = (long *)param_1[0x62];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x5a);
  plVar4 = (long *)param_1[0x59];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x57) == '\x01') && (*(char *)((long)param_1 + 0x25f) < '\0')) {
    __ZdlPv(param_1[0x49]);
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a71b2f4(param_1 + 0x42);
  if (param_1[0x41] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  func_0x00010a711e00(param_1 + 0x36);
  func_0x00010a71b29c(param_1 + 0x34);
  func_0x00010a71b244(param_1 + 0x32);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2a);
  func_0x00010a701e5c(param_1 + 0x27);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1f);
  func_0x00010a71b1fc(param_1 + 0x1c,param_1[0x1d]);
  func_0x00010a71b1fc(param_1 + 0x19,param_1[0x1a]);
  func_0x00010a71b1fc(param_1 + 0x16,param_1[0x17]);
  func_0x00010a711f50(param_1 + 0x14);
  func_0x00010a71b1a4(param_1 + 0x12);
  plVar4 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_10a09e870(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(param_2 + 8);
  param_1[7] = lVar5;
  *(undefined8 *)((long)(param_1 + 7) + *(long *)(lVar5 + -0x18)) = *(undefined8 *)(param_2 + 0x10);
  func_0x00010a004e5c(param_1 + 10);
  func_0x00010a004e04(param_1 + 8);
  param_1[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6eae10; end: 10a6eb1e7;  */

void FUN_10a6eae10(undefined8 *param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 ****ppppuVar4;
  undefined8 ******ppppppuVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***pppuVar8;
  long *plVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *****pppppuStack_60;
  undefined8 *****pppppuStack_58;
  undefined8 ****ppppuStack_50;
  long lStack_48;
  
  pppppuStack_70 = (undefined8 ******)0x0;
  pppppuStack_68 = (undefined8 ******)0x0;
  pppppuStack_60 = (undefined8 ******)0x0;
  while( true ) {
    pppppuStack_58 = (undefined8 *****)0x0;
    ppppuStack_50 = (undefined8 ****)0x0;
    lStack_48 = 0;
    __ZNSt3__15mutex4lockEv(param_2 + 0x3d0);
    pppppuVar10 = *(undefined8 ******)(param_2 + 0x3b8);
    lStack_48 = *(long *)(param_2 + 0x3c8);
    pppppuVar11 = *(undefined8 ******)(param_2 + 0x3c0);
    *(undefined8 *)(param_2 + 0x3b8) = 0;
    *(undefined8 *)(param_2 + 0x3c0) = 0;
    *(undefined8 *)(param_2 + 0x3c8) = 0;
    pppppuStack_58 = pppppuVar10;
    ppppuStack_50 = pppppuVar11;
    __ZNSt3__15mutex6unlockEv(param_2 + 0x3d0);
    if (pppppuVar10 == pppppuVar11) break;
    do {
      ppppuVar4 = pppppuVar10[1];
      if ((ppppuVar4 != (undefined8 ****)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), pppuStack_78 = ppppuVar4,
         ppppuVar4 != (undefined8 ****)0x0)) {
        pppuStack_80 = *pppppuVar10;
        if ((undefined8 ****)pppuStack_80 != (undefined8 ****)0x0) {
          (*(code *)(*pppuStack_80)[7])(&ppppuStack_88);
          if (pppppuStack_68 < pppppuStack_60) {
            *pppppuStack_68 = ppppuStack_88;
            pppppuStack_68 = pppppuStack_68 + 1;
          }
          else {
            ppppppuVar5 = &pppppuStack_70;
            func_0x0001098b74c4(ppppppuVar5,&ppppuStack_88);
            pppppuStack_68 = ppppppuVar5;
            if ((undefined8 *****)ppppuStack_88 != (undefined8 *****)0x0) {
              pppppuVar1 = (undefined8 *****)(ppppuStack_88 + 1);
              do {
                ppppuVar7 = *pppppuVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
                if (bVar3) {
                  *pppppuVar1 = (undefined8 ****)((long)ppppuVar7 + -4);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (((ulong)ppppuVar7 & 0x1fffffffc) == 4) {
                do {
                  ppppuVar7 = *pppppuVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
                  if (bVar3) {
                    *pppppuVar1 = (undefined8 ****)((long)ppppuVar7 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if ((undefined8 ****)((long)ppppuVar7 + -1) == (undefined8 ****)0x0) {
                  (*(code *)(*ppppuStack_88)[1])();
                }
              }
            }
          }
        }
        ppppuVar7 = ppppuVar4 + 1;
        do {
          pppuVar8 = *ppppuVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppuVar7,0x10);
          if (bVar3) {
            *ppppuVar7 = (undefined8 ***)((long)pppuVar8 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (pppuVar8 == (undefined8 ***)0x0) {
          (*(code *)(*ppppuVar4)[2])(ppppuVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar4);
        }
      }
      pppppuVar10 = pppppuVar10 + 2;
    } while (pppppuVar10 != pppppuVar11);
    func_0x00010a701df0(&pppppuStack_58);
  }
  func_0x00010a701df0(&pppppuStack_58);
  (**(code **)(**(long **)(param_2 + 0x3a8) + 0x38))(&pppppuStack_58);
  if (pppppuStack_68 < pppppuStack_60) {
    *pppppuStack_68 = pppppuStack_58;
    pppppuStack_68 = pppppuStack_68 + 1;
  }
  else {
    ppppppuVar5 = &pppppuStack_70;
    func_0x0001098b74c4(ppppppuVar5,&pppppuStack_58);
    pppppuStack_68 = ppppppuVar5;
    if (pppppuStack_58 != (undefined8 *****)0x0) {
      pppppuVar10 = pppppuStack_58 + 1;
      do {
        ppppuVar4 = *pppppuVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined8 ****)((long)ppppuVar4 + -4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)ppppuVar4 & 0x1fffffffc) == 4) {
        do {
          ppppuVar4 = *pppppuVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
          if (bVar3) {
            *pppppuVar10 = (undefined8 ****)((long)ppppuVar4 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((undefined8 ****)((long)ppppuVar4 + -1) == (undefined8 ****)0x0) {
          (*(code *)(*pppppuStack_58)[1])();
        }
      }
    }
  }
  pppppuVar10 = pppppuStack_68;
  ppppppuVar5 = (undefined8 ******)pppppuStack_70;
  if (pppppuStack_70 == pppppuStack_68) {
    FUN_109d1b124(param_1);
  }
  else {
    pppuStack_80 = (undefined8 ***)((long)pppppuStack_68 - (long)pppppuStack_70 >> 3);
    func_0x0001098b7954(&pppppuStack_58,&pppuStack_80);
    plVar9 = (long *)(lStack_48 + 8);
    if (*plVar9 != 0) {
      func_0x0001092b4274(plVar9);
    }
    *plVar9 = (long)ppppuStack_50;
    ppppuStack_50 = (undefined8 *****)0x0;
    lVar6 = 0;
    do {
      func_0x0001098b799c(lStack_48,lVar6,ppppppuVar5);
      ppppppuVar5 = ppppppuVar5 + 1;
      lVar6 = lVar6 + 1;
    } while (ppppppuVar5 != (undefined8 ******)pppppuVar10);
    *param_1 = pppppuStack_58;
    pppppuStack_58 = (undefined8 *****)0x0;
    if (((undefined8 *****)ppppuStack_50 != (undefined8 *****)0x0) &&
       (func_0x0001092b4274(&ppppuStack_50), pppppuStack_58 != (undefined8 *****)0x0)) {
      pppppuVar10 = pppppuStack_58 + 1;
      do {
        ppppuVar4 = *pppppuVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
        if (bVar3) {
          *pppppuVar10 = (undefined8 ****)((long)ppppuVar4 - 4);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((ulong)ppppuVar4 & 0x1fffffffc) == 4) {
        do {
          ppppuVar4 = *pppppuVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
          if (bVar3) {
            *pppppuVar10 = (undefined8 ****)((long)ppppuVar4 - 1U);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((undefined8 ****)((long)ppppuVar4 - 1U) == (undefined8 ****)0x0) {
          (*(code *)(*pppppuStack_58)[1])();
        }
      }
    }
  }
  pppppuStack_58 = &pppppuStack_70;
  FUN_10a2325bc(&pppppuStack_58);
  return;
}



/* Entry: 10a6eb1e8; end: 10a6eb22b;  */

undefined8 * FUN_10a6eb1e8(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_38;
  
  FUN_10a6eae10(&plStack_38,param_1);
  FUN_109d1a244(&plStack_38);
  if (plStack_38 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_38 + 1);
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
        (**(code **)(*plStack_38 + 8))();
      }
    }
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x7a);
  func_0x00010a701df0(param_1 + 0x77);
  func_0x00010a061620(param_1 + 0x75);
  FUN_10a71426c(param_1 + 0x6f);
  FUN_10a71426c(param_1 + 0x6d);
  FUN_10a71426c(param_1 + 0x6b);
  __ZNSt3__15mutexD1Ev(param_1 + 99);
  plVar4 = (long *)param_1[0x62];
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
  __ZNSt3__15mutexD1Ev(param_1 + 0x5a);
  plVar4 = (long *)param_1[0x59];
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
  if ((*(char *)(param_1 + 0x57) == '\x01') && (*(char *)((long)param_1 + 0x25f) < '\0')) {
    __ZdlPv(param_1[0x49]);
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a71b2f4(param_1 + 0x42);
  if (param_1[0x41] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x38);
  func_0x00010a711e00(param_1 + 0x36);
  func_0x00010a71b29c(param_1 + 0x34);
  func_0x00010a71b244(param_1 + 0x32);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2a);
  func_0x00010a701e5c(param_1 + 0x27);
  __ZNSt3__15mutexD1Ev(param_1 + 0x1f);
  func_0x00010a71b1fc(param_1 + 0x1c,param_1[0x1d]);
  func_0x00010a71b1fc(param_1 + 0x19,param_1[0x1a]);
  func_0x00010a71b1fc(param_1 + 0x16,param_1[0x17]);
  func_0x00010a711f50(param_1 + 0x14);
  func_0x00010a71b1a4(param_1 + 0x12);
  plVar4 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_10a09e870(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[7] = &PTR_DAT_110c12bc0;
  param_1[0x83] = &PTR_FUN_110c12c38;
  func_0x00010a004e5c(param_1 + 10);
  func_0x00010a004e04(param_1 + 8);
  param_1[3] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[6] = 0;
  }
  func_0x00010a004e5c(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6eb22c; end: 10a6eb287;  */

void FUN_10a6eb22c(undefined8 param_1)

{
  FUN_10a6eab7c(param_1,&PTR_PTR_110c11d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6eb288; end: 10a6eb353;  */

void FUN_10a6eb288(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a6eab7c((long)param_1 + lVar1,&PTR_PTR_110c11d00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a6eb354; end: 10a6eb35b;  */

void FUN_10a6eb354(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x38));
  FUN_10a6eae10(&plStack_28,param_1 + -0x18);
  FUN_109d1a244(&plStack_28);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
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
                    /* WARNING: Could not recover jumptable at 0x00010a6eb340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plStack_28 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 10a6eb35c; end: 10a6eb3ab;  */

bool FUN_10a6eb35c(long param_1)

{
  bool bVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x150);
  if (*(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x138)) {
    bVar1 = *(long *)(param_1 + 400) != 0;
  }
  else {
    bVar1 = true;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0x150);
  return bVar1;
}



/* Entry: 10a6eb3ac; end: 10a6eb3bb;  */

bool FUN_10a6eb3ac(long *param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + -0x40);
  __ZNSt3__15mutex4lockEv((long)param_1 + lVar2 + 0x150);
  if (*(long *)((long)param_1 + lVar2 + 0x140) == *(long *)((long)param_1 + lVar2 + 0x138)) {
    bVar1 = *(long *)((long)param_1 + lVar2 + 400) != 0;
  }
  else {
    bVar1 = true;
  }
  __ZNSt3__15mutex6unlockEv((long)param_1 + lVar2 + 0x150);
  return bVar1;
}



/* Entry: 10a6eb3bc; end: 10a6eb4cb;  */

void FUN_10a6eb3bc(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x150);
  lVar1 = *(long *)(param_1 + 0x140);
  for (lVar7 = *(long *)(param_1 + 0x138); lVar7 != lVar1; lVar7 = lVar7 + 0x20) {
    plVar4 = *(long **)(lVar7 + 0x18);
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 != (long *)0x0) {
        plVar5 = *(long **)(lVar7 + 0x10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
          (**(code **)(*plVar5 + 0x20))();
        }
        plVar5 = plVar4 + 1;
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
      }
    }
  }
  plVar4 = *(long **)(param_1 + 400);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    (**(code **)(*plVar4 + 0x20))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x150);
  return;
}



/* Entry: 10a6eb4cc; end: 10a6eb4d3;  */

void FUN_10a6eb4cc(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x118);
  lVar1 = *(long *)(param_1 + 0x108);
  for (lVar7 = *(long *)(param_1 + 0x100); lVar7 != lVar1; lVar7 = lVar7 + 0x20) {
    plVar4 = *(long **)(lVar7 + 0x18);
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 != (long *)0x0) {
        plVar5 = *(long **)(lVar7 + 0x10);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
          (**(code **)(*plVar5 + 0x20))();
        }
        plVar5 = plVar4 + 1;
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
      }
    }
  }
  plVar4 = *(long **)(param_1 + 0x158);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
    (**(code **)(*plVar4 + 0x20))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x118);
  return;
}



/* Entry: 10a6eb4d4; end: 10a6eb75b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6eb6b0) */
/* WARNING: Removing unreachable block (ram,0x00010a6eb6b4) */
/* WARNING: Removing unreachable block (ram,0x00010a6eb6d0) */

void FUN_10a6eb4d4(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x150);
  lVar13 = *(long *)(param_1 + 0x138);
  lVar10 = *(long *)(param_1 + 0x140);
  if (lVar13 != lVar10) {
    bVar14 = false;
    do {
      plVar7 = *(long **)(lVar13 + 0x18);
      if ((plVar7 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
        bVar14 = true;
      }
      else {
        plVar8 = *(long **)(lVar13 + 0x10);
        if (plVar8 == (long *)0x0) {
          bVar14 = true;
        }
        else {
          (**(code **)(*plVar8 + 0x20))();
          (**(code **)(*plVar8 + 0x28))();
        }
        plVar8 = plVar7 + 1;
        do {
          lVar9 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != lVar10);
    if (bVar14) {
      uVar1 = *(ulong *)(param_1 + 0x140);
      for (uVar12 = *(ulong *)(param_1 + 0x138); uVar11 = uVar1, uVar12 != uVar1;
          uVar12 = uVar12 + 0x20) {
        plVar7 = *(long **)(uVar12 + 0x18);
        if ((plVar7 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
LAB_10a6eb608:
          uVar11 = uVar12;
          uVar4 = uVar12;
          if (uVar12 != uVar1) {
            while (uVar5 = uVar4, uVar4 = uVar5 + 0x20, uVar11 = uVar12, uVar4 != uVar1) {
              plVar7 = *(long **)(uVar5 + 0x38);
              if ((plVar7 != (long *)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
                lVar13 = *(long *)(uVar5 + 0x30);
                plVar8 = plVar7 + 1;
                do {
                  lVar10 = *plVar8;
                  cVar2 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar14) {
                    *plVar8 = lVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
                if (lVar13 != 0) {
                  func_0x00010a701ef0(uVar12,uVar4);
                  uVar12 = uVar12 + 0x20;
                }
              }
            }
          }
          break;
        }
        lVar13 = *(long *)(uVar12 + 0x10);
        plVar8 = plVar7 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar14) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
        if (lVar13 == 0) goto LAB_10a6eb608;
      }
      uVar12 = *(ulong *)(param_1 + 0x140);
      if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6eb738);
        (*pcVar6)();
      }
      if (uVar11 != uVar12) {
        while (uVar12 != uVar11) {
          uVar12 = uVar12 - 0x20;
          func_0x00010a701ec4(uVar12);
        }
        *(ulong *)(param_1 + 0x140) = uVar11;
      }
    }
  }
  plVar7 = *(long **)(param_1 + 400);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
    (**(code **)(*plVar7 + 0x28))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x150);
  return;
}



/* Entry: 10a6eb75c; end: 10a6eb763;  */

/* WARNING: Removing unreachable block (ram,0x00010a6eb6b0) */
/* WARNING: Removing unreachable block (ram,0x00010a6eb6b4) */
/* WARNING: Removing unreachable block (ram,0x00010a6eb6d0) */

void FUN_10a6eb75c(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  bool bVar14;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x118);
  lVar13 = *(long *)(param_1 + 0x100);
  lVar10 = *(long *)(param_1 + 0x108);
  if (lVar13 != lVar10) {
    bVar14 = false;
    do {
      plVar7 = *(long **)(lVar13 + 0x18);
      if ((plVar7 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
        bVar14 = true;
      }
      else {
        plVar8 = *(long **)(lVar13 + 0x10);
        if (plVar8 == (long *)0x0) {
          bVar14 = true;
        }
        else {
          (**(code **)(*plVar8 + 0x20))();
          (**(code **)(*plVar8 + 0x28))();
        }
        plVar8 = plVar7 + 1;
        do {
          lVar9 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != lVar10);
    if (bVar14) {
      uVar1 = *(ulong *)(param_1 + 0x108);
      for (uVar12 = *(ulong *)(param_1 + 0x100); uVar11 = uVar1, uVar12 != uVar1;
          uVar12 = uVar12 + 0x20) {
        plVar7 = *(long **)(uVar12 + 0x18);
        if ((plVar7 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 == (long *)0x0)) {
LAB_10a6eb608:
          uVar11 = uVar12;
          uVar4 = uVar12;
          if (uVar12 != uVar1) {
            while (uVar5 = uVar4, uVar4 = uVar5 + 0x20, uVar11 = uVar12, uVar4 != uVar1) {
              plVar7 = *(long **)(uVar5 + 0x38);
              if ((plVar7 != (long *)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), plVar7 != (long *)0x0)) {
                lVar13 = *(long *)(uVar5 + 0x30);
                plVar8 = plVar7 + 1;
                do {
                  lVar10 = *plVar8;
                  cVar2 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar14) {
                    *plVar8 = lVar10 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar10 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
                if (lVar13 != 0) {
                  func_0x00010a701ef0(uVar12,uVar4);
                  uVar12 = uVar12 + 0x20;
                }
              }
            }
          }
          break;
        }
        lVar13 = *(long *)(uVar12 + 0x10);
        plVar8 = plVar7 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar14) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
        if (lVar13 == 0) goto LAB_10a6eb608;
      }
      uVar12 = *(ulong *)(param_1 + 0x108);
      if (uVar12 < uVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6eb738);
        (*pcVar6)();
      }
      if (uVar11 != uVar12) {
        while (uVar12 != uVar11) {
          uVar12 = uVar12 - 0x20;
          func_0x00010a701ec4(uVar12);
        }
        *(ulong *)(param_1 + 0x108) = uVar11;
      }
    }
  }
  plVar7 = *(long **)(param_1 + 0x158);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
    (**(code **)(*plVar7 + 0x28))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x118);
  return;
}



/* Entry: 10a6eb764; end: 10a6eb7a3;  */

void FUN_10a6eb764(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a6eb7a4(param_1,param_2,&uStack_30);
  return;
}



/* Entry: 10a6eb7a4; end: 10a6eb8d3;  */

undefined8 FUN_10a6eb7a4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_40;
  long *plStack_38;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0xf8);
  lVar5 = param_1 + 0xb0;
  FUN_10a71d524(lVar5,*param_2 + 0xe8);
  if (param_1 + 0xb8 == lVar5) {
    lVar7 = *param_2;
    lVar5 = *param_3;
    if (lVar5 == 0) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x10))
                (&lStack_40,*(long **)(param_1 + 0x90),param_2);
    }
    else {
      plStack_38 = (long *)param_3[1];
      lStack_40 = lVar5;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    lVar5 = param_1 + 0xb0;
    func_0x00010a71d5a0(lVar5,lVar7 + 0xe8,lVar7 + 0xe8,&lStack_40);
    plVar1 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar2 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x38);
  __ZNSt3__15mutex6unlockEv(param_1 + 0xf8);
  return uVar6;
}



/* Entry: 10a6eb8d4; end: 10a6eb98f;  */

void FUN_10a6eb8d4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10a71b6d8(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a71b4f0(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
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
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10a6eb990; end: 10a6eba03;  */

undefined8 * FUN_10a6eb990(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a6eba04; end: 10a6ebacb;  */

void FUN_10a6eba04(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar3 = (ulong *)*param_3;
  while( true ) {
    puVar4 = (ulong *)param_3[1];
    if (puVar3 != puVar4) {
      uVar2 = *param_2;
      while ((uVar1 = *puVar3, uVar1 != uVar2 &&
             ((uVar1 == 0 || uVar2 == 0 || (FUN_10a6ebaf8(uVar1,uVar2), (uVar1 & 1) == 0))))) {
        puVar3 = puVar3 + 4;
        if (puVar3 == puVar4) goto LAB_10a6ebab4;
      }
    }
    if (puVar3 == puVar4) break;
    *param_1 = 0;
    param_1[1] = 0;
    uVar2 = puVar3[3];
    if (uVar2 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = uVar2;
      if (uVar2 == 0) {
        uVar2 = *param_1;
      }
      else {
        uVar2 = puVar3[2];
        *param_1 = uVar2;
      }
      if (uVar2 != 0) {
        return;
      }
    }
    func_0x00010a711e00(param_1);
    puVar3 = puVar3 + 4;
  }
LAB_10a6ebab4:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a6ebacc; end: 10a6ebaf7;  */

long FUN_10a6ebacc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
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



/* Entry: 10a6ebaf8; end: 10a6ebb73;  */

bool FUN_10a6ebaf8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0xe0) == *(char *)(param_2 + 0xe0)) {
    bVar4 = *(byte *)(param_1 + 0xff);
    uVar1 = *(ulong *)(param_1 + 0xf0);
    if (-1 < (char)bVar4) {
      uVar1 = (ulong)bVar4;
    }
    bVar5 = *(byte *)(param_2 + 0xff);
    uVar2 = *(ulong *)(param_2 + 0xf0);
    if (-1 < (char)bVar5) {
      uVar2 = (ulong)bVar5;
    }
    if (uVar1 == uVar2) {
      plVar6 = (long *)*(long *)(param_1 + 0xe8);
      if (-1 < (char)bVar4) {
        plVar6 = (long *)(param_1 + 0xe8);
      }
      plVar3 = (long *)*(long *)(param_2 + 0xe8);
      if (-1 < (char)bVar5) {
        plVar3 = (long *)(param_2 + 0xe8);
      }
      _memcmp(plVar6,plVar3);
      return (int)plVar6 == 0;
    }
  }
  return false;
}



/* Entry: 10a6ebb74; end: 10a6ebb93;  */

void FUN_10a6ebb74(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  if (param_2 == 0) {
    plVar7 = (long *)0x118;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110c14bc8;
    func_0x000107c2b054(&lStack_58,&DAT_10f66f8ab);
    plVar6 = plVar7 + 3;
    FUN_10a6f27ec(plVar6,0,7,&lStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(lStack_58);
    }
    plStack_68 = plVar6;
    plStack_60 = plVar7;
    FUN_10a6ff650(&plStack_68,plVar7 + 8,plVar6);
    FUN_10a6ff4ac(param_1,&plStack_68);
    if (plStack_60 == (long *)0x0) {
      return;
    }
    plVar6 = plStack_60 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_60;
    } while (cVar2 != '\0');
  }
  else {
    lVar8 = *(long *)(param_2 + 0x858);
    plVar7 = *(long **)(param_2 + 0x860);
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar4 = 0x100;
    __Znwm(0x100);
    func_0x000107c2b054(&lStack_58,&DAT_10f66f8ab);
    FUN_10a6f27ec(uVar4,param_2,7,&lStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(lStack_58);
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    lStack_58 = lVar8;
    plStack_50 = plVar7;
    FUN_10a720450(&plStack_68,uVar4,&lStack_58);
    FUN_10a6ff4ac(param_1,&plStack_68);
    plVar6 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_50 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar6 = plVar7 + 1;
      do {
        lVar5 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if ((lVar8 != 0) && (plVar6 = (long *)*param_1, plVar6 != (long *)0x0)) {
      plStack_60 = (long *)param_1[1];
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_68 = plVar6;
      FUN_10aa88c30(lVar8,&plStack_68);
      plVar6 = plStack_60;
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plVar7 == (long *)0x0) {
      return;
    }
    plVar6 = plVar7 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  return;
}



/* Entry: 10a6ebb94; end: 10a6ebbf3;  */

void FUN_10a6ebb94(undefined8 param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = 7;
  FUN_10a6f3364(param_1,&uStack_11,&UNK_10f66f9b9);
  return;
}



/* Entry: 10a6ebbf4; end: 10a6ebc47;  */

void FUN_10a6ebbf4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a6eb7a4(param_2,param_3,&uStack_30);
  (**(code **)(*param_2 + 0x20))(param_1);
  return;
}



/* Entry: 10a6ebc48; end: 10a6ebc9b;  */

void FUN_10a6ebc48(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a6eb7a4(param_2,param_3,&uStack_30);
  (**(code **)(*param_2 + 0x28))(param_1);
  return;
}



/* Entry: 10a6ebc9c; end: 10a6ec49b;  */

/* WARNING: Removing unreachable block (ram,0x00010a6ec020) */

void FUN_10a6ebc9c(long *param_1,long param_2,undefined4 param_3,long *param_4,undefined8 param_5)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  uVar15 = *(undefined8 *)(param_2 + 0x70);
  plVar6 = (long *)0x88;
  __Znwm();
  plVar10 = plVar6 + 1;
  *plVar10 = 0;
  plVar6[2] = 0;
  plVar7 = plVar6 + 3;
  *plVar6 = (long)&PTR_DAT_110c141e8;
  FUN_10a81f804(plVar7,uVar15);
  plVar6[3] = (long)&PTR_FUN_110c20aa0;
  *(undefined4 *)(plVar6 + 0xc) = param_3;
  lVar11 = *param_4;
  lVar16 = param_4[3];
  lVar12 = param_4[2];
  plVar6[0xe] = param_4[1];
  plVar6[0xd] = lVar11;
  plVar6[0x10] = lVar16;
  plVar6[0xf] = lVar12;
  lVar11 = plVar6[5];
  plStack_90 = plVar7;
  plStack_88 = plVar6;
  if (lVar11 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar14 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[4] = (long)plVar7;
    plVar6[5] = (long)plVar6;
LAB_10a6ebd90:
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  else if (*(long *)(lVar11 + 8) == -1) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar14 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[4] = (long)plVar7;
    plVar6[5] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv(lVar11);
    goto LAB_10a6ebd90;
  }
  plVar6 = plStack_90;
  (**(code **)(*plStack_90 + 0x10))(&plStack_d0,plStack_90);
  plVar7 = (long *)plVar6[3];
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar13 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar13 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  plVar6[3] = (long)plStack_d0;
  plVar6 = (long *)plStack_90[3];
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_2 + 0x68);
  if (plVar7 != (long *)0x0) {
    uVar15 = *(undefined8 *)(param_2 + 0x60);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar7 != (long *)0x0) {
      plVar10 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar14 = plVar7 + 1;
      do {
        lVar11 = *plVar14;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
      lVar12 = *(long *)(*(long *)(param_2 + 0x70) + 0x870);
      lVar11 = *(long *)(lVar12 + 0x38);
      if (lVar11 == 0) {
        lVar11 = *(long *)(lVar12 + 0x28);
        plStack_98 = *(long **)(lVar12 + 0x30);
      }
      else {
        plStack_98 = *(long **)(lVar12 + 0x40);
      }
      if (plStack_98 != (long *)0x0) {
        plVar14 = plStack_98 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_c8 = plStack_88;
      plStack_d0 = plStack_90;
      if (plStack_88 != (long *)0x0) {
        plVar14 = plStack_88 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (plVar6 != (long *)0x0) {
        plVar14 = plVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar8 = (undefined8 *)0x98;
      plStack_c0 = plVar6;
      uStack_b8 = uVar15;
      plStack_b0 = plVar7;
      uStack_a8 = param_5;
      lStack_a0 = lVar11;
      __Znwm();
      *puVar8 = FUN_10a734c1c;
      puVar8[1] = FUN_10a734f0c;
      FUN_10a7026e8(puVar8 + 2);
      plVar10 = plStack_c0;
      lVar12 = puVar8[7];
      plVar14 = plVar7;
      if (lVar12 != 0) {
        plVar2 = (long *)(lVar12 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar14 = plStack_b0;
          param_5 = uStack_a8;
          uVar15 = uStack_b8;
        } while (cVar3 != '\0');
      }
      *param_1 = lVar12;
      puVar8[10] = plStack_c8;
      puVar8[9] = plStack_d0;
      plStack_d0 = (long *)0x0;
      plStack_c8 = (long *)0x0;
      plStack_c0 = (long *)0x0;
      puVar8[0xb] = plVar10;
      puVar8[0xc] = uVar15;
      uStack_b8 = 0;
      plStack_b0 = (long *)0x0;
      puVar8[0xd] = plVar14;
      puVar8[0xe] = param_5;
      puVar8[0xf] = lVar11;
      *(undefined1 *)(puVar8 + 0x10) = 0;
      *(undefined1 *)(puVar8 + 0x12) = 0;
      puVar9 = puVar8 + 0xf;
      FUN_10a70212c(puVar9,puVar8);
      if (((ulong)puVar9 & 1) != 0) {
LAB_10a6ec1ac:
        if (plStack_b0 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (plStack_c0 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_c0 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plStack_c0 + 8))();
            }
          }
        }
        plVar10 = plStack_c8;
        if (plStack_c8 != (long *)0x0) {
          plVar14 = plStack_c8 + 1;
          do {
            lVar11 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        plVar10 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar14 = plStack_98 + 1;
          do {
            lVar11 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar13 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar13 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar13 & 0x1fffffffc) == 4) {
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar13 - 1 == 0) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        plVar6 = plStack_88;
        if (plStack_88 != (long *)0x0) {
          plVar7 = plStack_88 + 1;
          do {
            lVar11 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_88 + 0x10))(plStack_88);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        return;
      }
      FUN_10a702208(puVar8 + 0x11,puVar8 + 9);
      puVar8[0xf] = puVar8[0x11];
      plVar10 = (long *)(puVar8[0x11] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)*(undefined8 *)(puVar8[0xf] + 0x10) >> 1 & 1) == 0) {
        *(undefined1 *)(puVar8 + 0x12) = 1;
        lVar11 = puVar8[0xf];
        plVar10 = (long *)(lVar11 + 0x10);
        uVar15 = puVar8[3];
        do {
          lVar12 = *plVar10;
          if (lVar12 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              uStack_78 = 0;
              puStack_70 = puVar8;
              uStack_68 = uVar15;
              func_0x000109d1b588(lVar11 + 0x18,&uStack_78);
              *(undefined8 *)(lVar11 + 0x10) = 0;
              goto LAB_10a6ec1ac;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar12 >> 1 & 1) == 0);
      }
      lVar11 = puVar8[0xf];
      if (((uint)*(undefined8 *)(puVar8[0xf] + 0x10) >> 5 & 1) == 0) {
        if ((*(byte *)(lVar11 + 0xb0) & 1) != 0) {
          FUN_10a7021c8(puVar8 + 2,lVar11 + 0x98);
          plVar10 = (long *)puVar8[0xf];
          if (plVar10 != (long *)0x0) {
            puVar1 = (ulong *)(plVar10 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar10 + 8))();
              }
            }
          }
          plVar10 = (long *)puVar8[0x11];
          if (plVar10 != (long *)0x0) {
            puVar1 = (ulong *)(plVar10 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar10 + 8))();
              }
            }
          }
          if (puVar8[0xd] != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          plVar10 = (long *)puVar8[0xb];
          if (plVar10 != (long *)0x0) {
            puVar1 = (ulong *)(plVar10 + 1);
            do {
              uVar13 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar13 - 4;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((uVar13 & 0x1fffffffc) == 4) {
              do {
                uVar13 = *puVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = uVar13 - 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (uVar13 - 1 == 0) {
                (**(code **)(*plVar10 + 8))();
              }
            }
          }
          plVar10 = (long *)puVar8[10];
          if (plVar10 != (long *)0x0) {
            plVar14 = plVar10 + 1;
            do {
              lVar11 = *plVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
          func_0x000109d1a1d0(puVar8 + 2);
          __ZdlPv(puVar8);
          goto LAB_10a6ec1ac;
        }
      }
      else {
        func_0x0001092af97c(lVar11 + 0x90);
      }
      goto LAB_10a6ec328;
    }
  }
  FUN_10a043ecc();
LAB_10a6ec328:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6ec32c);
  (*pcVar5)();
}



/* Entry: 10a6ec49c; end: 10a6ec4d7;  */

long * FUN_10a6ec49c(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 auStack_18 [8];
  
  FUN_10a702db8(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return (long *)(*param_1 + 0x38);
  }
  pcVar1 = "map::at:  key not found";
  FUN_109ffdddc();
  FUN_10a6eb7a4();
  (**(code **)(*(long *)pcVar1 + 0x30))();
  return (long *)pcVar1;
}



/* Entry: 10a6ec4d8; end: 10a6ec5d3;  */

void FUN_10a6ec4d8(long *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6eb7a4(param_1,param_2,&uStack_40);
  (**(code **)(*param_1 + 0x30))();
  return;
}



/* Entry: 10a6ec5d4; end: 10a6ec63f;  */

void FUN_10a6ec5d4(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  pcVar1 = (code *)*param_1;
  func_0x000107c2b054(auStack_38,*param_2);
  (*pcVar1)(auStack_38,param_1);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a6ec640; end: 10a6ec70f;  */

undefined8 * FUN_10a6ec640(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
    uVar2 = param_2[6];
    uVar1 = param_2[5];
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    param_1[6] = uVar2;
    param_1[5] = uVar1;
    uVar3 = param_2[10];
    uVar2 = param_2[9];
    uVar5 = param_2[0xc];
    uVar4 = param_2[0xb];
    uVar1 = param_2[0xd];
    uVar6 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar6;
    param_1[0xd] = uVar1;
    param_1[0xc] = uVar5;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    param_1[9] = uVar2;
  }
  else {
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
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    param_1[4] = uVar2;
    param_1[3] = uVar1;
    uVar2 = param_2[8];
    uVar1 = param_2[7];
    uVar4 = param_2[10];
    uVar3 = param_2[9];
    uVar6 = param_2[0xc];
    uVar5 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar6;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    param_1[9] = uVar3;
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return param_1;
}



/* Entry: 10a6ec710; end: 10a6ec9e3;  */

void FUN_10a6ec710(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  long lStack_1c8;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 *puStack_118;
  long lStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_2 + 0x2d0);
  lVar12 = *(long *)(param_2 + 0x2c8);
  if (lVar12 == 0) {
    puVar10 = (undefined8 *)0xa0;
    __Znwm();
    puVar10[2] = 0;
    puVar10[1] = 0x200000006;
    *(undefined2 *)(puVar10 + 3) = 4;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = puVar10 + 3;
    puVar10[0x12] = 0;
    *puVar10 = &PTR_DAT_110c14098;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    *(undefined1 *)((long)puVar10 + 0x9c) = 0;
    *(undefined8 **)(param_2 + 0x2c8) = puVar10;
    puStack_80 = puVar10;
    if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f381,0x23c,&UNK_10f66f3ee);
    }
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    lStack_88 = -0x7fffffffffffffe0;
    uStack_90 = 0x1a;
    puVar10[1] = 0x5f52454b52414d44;
    *puVar10 = 0x4e414c5f59544943;
    *(undefined8 *)((long)puVar10 + 0x12) = 0x4e4f49544152454e;
    *(undefined8 *)((long)puVar10 + 10) = 0x45475f52454b5241;
    *(undefined1 *)((long)puVar10 + 0x1a) = 0;
    if (puStack_80 != (undefined8 *)0x0) {
      plVar9 = puStack_80 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 0x200000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_78 = 0x10a71cda4;
    ppuStack_70 = &PTR_FUN_110c140c0;
    puStack_68 = puStack_80;
    plStack_b0 = *(long **)(param_2 + 0x78);
    unaff_x21 = *(long **)(param_2 + 0x80);
    lStack_a0 = 0;
    if (unaff_x21 != (long *)0x0) {
      plVar9 = unaff_x21 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    unaff_x22 = &uStack_78;
    plStack_a8 = unaff_x21;
    puStack_98 = puVar10;
    if (plStack_b0 == (long *)0x0) {
      func_0x00010a71cda4(9,&uStack_78);
    }
    else {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0,&puStack_98,9,&uStack_78);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar9 = unaff_x21 + 1;
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
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (lStack_a0 != 0) {
      func_0x0001092b4274(&lStack_a0);
    }
    if (lStack_88 < 0) {
      __ZdlPv(puStack_98);
    }
    if (puStack_80 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_80);
    }
    lVar12 = *(long *)(param_2 + 0x2c8);
    *param_1 = lVar12;
    if (lVar12 != 0) goto LAB_10a6ec920;
  }
  else {
    *param_1 = lVar12;
LAB_10a6ec920:
    plVar9 = (long *)(lVar12 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar12 = param_2 + 0x2d0;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_80);
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x2d0);
  do {
    __Unwind_Resume();
  } while ((int)puVar10 == 0);
  lVar14 = lVar12;
  func_0x000104bd46a0();
  pcStack_b8 = FUN_10a6ec9e4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x22;
  plStack_d8 = unaff_x21;
  lStack_d0 = lVar12;
  lStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  __ZNSt3__15mutex4lockEv(lVar14 + 0x318);
  lVar12 = *(long *)(lVar14 + 0x310);
  if (lVar12 == 0) {
    puVar10 = (undefined8 *)0xa0;
    __Znwm();
    puVar10[2] = 0;
    puVar10[1] = 0x200000006;
    *(undefined2 *)(puVar10 + 3) = 4;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = puVar10 + 3;
    puVar10[0x12] = 0;
    *puVar10 = &PTR_FUN_110c140e8;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    *(undefined1 *)((long)puVar10 + 0x9c) = 0;
    *(undefined8 **)(lVar14 + 0x310) = puVar10;
    puStack_130 = puVar10;
    if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f415,0x252,&UNK_10f66f490);
    }
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    lStack_138 = -0x7fffffffffffffe0;
    uStack_140 = 0x1c;
    puVar10[1] = 0x5f52454b52414d44;
    *puVar10 = 0x4e414c5f59544943;
    *(undefined8 *)((long)puVar10 + 0x14) = 0x4950415f41544144;
    *(undefined8 *)((long)puVar10 + 0xc) = 0x4154454d5f52454b;
    *(undefined1 *)((long)puVar10 + 0x1c) = 0;
    if (puStack_130 != (undefined8 *)0x0) {
      plVar9 = puStack_130 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 0x200000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_128 = 0x10a71cf0c;
    ppuStack_120 = &PTR_FUN_110c14110;
    puStack_118 = puStack_130;
    plVar9 = *(long **)(lVar14 + 0x78);
    plVar4 = *(long **)(lVar14 + 0x80);
    lStack_150 = 0;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_148 = puVar10;
    if (plVar9 == (long *)0x0) {
      func_0x00010a71cf0c(0,&uStack_128);
    }
    else {
      (**(code **)(*plVar9 + 0x10))(plVar9,&puStack_148,0,&uStack_128);
    }
    if (plVar4 != (long *)0x0) {
      plVar9 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    (*(code *)*ppuStack_120)(&ppuStack_120);
    if (lStack_150 != 0) {
      func_0x0001092b4274(&lStack_150);
    }
    if (lStack_138 < 0) {
      __ZdlPv(puStack_148);
    }
    if (puStack_130 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_130);
    }
    lVar12 = *(long *)(lVar14 + 0x310);
    *extraout_x8 = lVar12;
    if (lVar12 != 0) goto LAB_10a6ecbf0;
  }
  else {
    *extraout_x8 = lVar12;
LAB_10a6ecbf0:
    plVar9 = (long *)(lVar12 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar12 = lVar14 + 0x318;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = puStack_130;
  if (puStack_130 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_130);
  }
  __ZNSt3__15mutex6unlockEv(lVar14 + 0x318);
  do {
    __Unwind_Resume();
  } while ((int)puVar10 == 0);
  func_0x000104bd46a0();
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(lVar12 + 0x3a8);
  uVar8 = 0xb8;
  __Znwm();
  puStack_208 = &UNK_1053a6a3c;
  ppuStack_200 = &PTR_DAT_110ae9180;
  uStack_210 = uVar17;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&uStack_210);
  plVar9 = *(long **)(lVar12 + 0x68);
  if (plVar9 != (long *)0x0) {
    uVar17 = *(undefined8 *)(lVar12 + 0x60);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar9 != (long *)0x0) {
      plVar4 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar9 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *extraout_x8_00 = uVar8;
      puVar10 = (undefined8 *)0x30;
      __Znwm();
      *puVar10 = &PTR_FUN_110c14188;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = uVar8;
      puVar10[4] = uVar17;
      puVar10[5] = plVar9;
      extraout_x8_00[1] = puVar10;
      __ZNSt3__15mutex4lockEv(lVar12 + 0x3d0);
      plVar4 = puVar10 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar15 = *(undefined8 **)(lVar12 + 0x3c0);
      if (puVar15 < *(undefined8 **)(lVar12 + 0x3c8)) {
        *puVar15 = uVar8;
        puVar15[1] = puVar10;
        puVar15 = puVar15 + 2;
LAB_10a6ecea4:
        *(undefined8 **)(lVar12 + 0x3c0) = puVar15;
        __ZNSt3__15mutex6unlockEv(lVar12 + 0x3d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
          return;
        }
        ___stack_chk_fail();
      }
      else {
        lVar14 = *(long *)(lVar12 + 0x3b8);
        lVar18 = (long)puVar15 - lVar14;
        uVar2 = (lVar18 >> 4) + 1;
        if (uVar2 >> 0x3c == 0) {
          uVar13 = (long)*(undefined8 **)(lVar12 + 0x3c8) - lVar14;
          uVar16 = (long)uVar13 >> 3;
          if (uVar16 <= uVar2) {
            uVar16 = uVar2;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar16 = 0xfffffffffffffff;
          }
          if (uVar16 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10a6ecf3c;
          }
          lVar11 = uVar16 << 4;
          __Znwm();
          puVar3 = (undefined8 *)(lVar11 + lVar18);
          *puVar3 = uVar8;
          puVar3[1] = puVar10;
          puVar15 = puVar3 + 2;
          _memcpy(puVar3 + (lVar18 >> 4) * -2,lVar14,lVar18);
          *(undefined8 **)(lVar12 + 0x3b8) = puVar3 + (lVar18 >> 4) * -2;
          *(undefined8 **)(lVar12 + 0x3c0) = puVar15;
          *(ulong *)(lVar12 + 0x3c8) = lVar11 + uVar16 * 0x10;
          if (lVar14 != 0) {
            __ZdlPv(lVar14);
          }
          goto LAB_10a6ecea4;
        }
      }
      FUN_10a702118();
      goto LAB_10a6ecf3c;
    }
  }
  FUN_10a043ecc();
LAB_10a6ecf3c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6ecf40);
  (*pcVar7)();
}



/* Entry: 10a6ec9e4; end: 10a6eccb3;  */

void FUN_10a6ec9e4(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *extraout_x8;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined **ppuStack_150;
  long lStack_118;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__15mutex4lockEv(param_2 + 0x318);
  lVar12 = *(long *)(param_2 + 0x310);
  if (lVar12 == 0) {
    puVar10 = (undefined8 *)0xa0;
    __Znwm();
    puVar10[2] = 0;
    puVar10[1] = 0x200000006;
    *(undefined2 *)(puVar10 + 3) = 4;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[0xb] = 0;
    puVar10[10] = 0;
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = puVar10 + 3;
    puVar10[0x12] = 0;
    *puVar10 = &PTR_FUN_110c140e8;
    *(undefined1 *)(puVar10 + 0x13) = 0;
    *(undefined1 *)((long)puVar10 + 0x9c) = 0;
    *(undefined8 **)(param_2 + 0x310) = puVar10;
    puStack_80 = puVar10;
    if ((uRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f66ee0b,&UNK_10f66f415,0x252,&UNK_10f66f490);
    }
    puVar10 = (undefined8 *)0x20;
    __Znwm();
    lStack_88 = -0x7fffffffffffffe0;
    uStack_90 = 0x1c;
    puVar10[1] = 0x5f52454b52414d44;
    *puVar10 = 0x4e414c5f59544943;
    *(undefined8 *)((long)puVar10 + 0x14) = 0x4950415f41544144;
    *(undefined8 *)((long)puVar10 + 0xc) = 0x4154454d5f52454b;
    *(undefined1 *)((long)puVar10 + 0x1c) = 0;
    if (puStack_80 != (undefined8 *)0x0) {
      plVar9 = puStack_80 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 0x200000000;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uStack_78 = 0x10a71cf0c;
    ppuStack_70 = &PTR_FUN_110c14110;
    puStack_68 = puStack_80;
    plVar9 = *(long **)(param_2 + 0x78);
    plVar4 = *(long **)(param_2 + 0x80);
    lStack_a0 = 0;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_98 = puVar10;
    if (plVar9 == (long *)0x0) {
      func_0x00010a71cf0c(0,&uStack_78);
    }
    else {
      (**(code **)(*plVar9 + 0x10))(plVar9,&puStack_98,0,&uStack_78);
    }
    if (plVar4 != (long *)0x0) {
      plVar9 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    (*(code *)*ppuStack_70)(&ppuStack_70);
    if (lStack_a0 != 0) {
      func_0x0001092b4274(&lStack_a0);
    }
    if (lStack_88 < 0) {
      __ZdlPv(puStack_98);
    }
    if (puStack_80 != (undefined8 *)0x0) {
      func_0x0001092b4274(&puStack_80);
    }
    lVar12 = *(long *)(param_2 + 0x310);
    *param_1 = lVar12;
    if (lVar12 != 0) goto LAB_10a6ecbf0;
  }
  else {
    *param_1 = lVar12;
LAB_10a6ecbf0:
    plVar9 = (long *)(lVar12 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar12 = param_2 + 0x318;
  __ZNSt3__15mutex6unlockEv();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = puStack_80;
  if (puStack_80 != (undefined8 *)0x0) {
    func_0x0001092b4274(&puStack_80);
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 0x318);
  do {
    __Unwind_Resume();
  } while ((int)puVar10 == 0);
  func_0x000104bd46a0();
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(lVar12 + 0x3a8);
  uVar8 = 0xb8;
  __Znwm();
  puStack_158 = &UNK_1053a6a3c;
  ppuStack_150 = &PTR_DAT_110ae9180;
  uStack_160 = uVar17;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&uStack_160);
  plVar9 = *(long **)(lVar12 + 0x68);
  if (plVar9 != (long *)0x0) {
    uVar17 = *(undefined8 *)(lVar12 + 0x60);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar9 != (long *)0x0) {
      plVar4 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar9 + 1;
      do {
        lVar14 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *extraout_x8 = uVar8;
      puVar10 = (undefined8 *)0x30;
      __Znwm();
      *puVar10 = &PTR_FUN_110c14188;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = uVar8;
      puVar10[4] = uVar17;
      puVar10[5] = plVar9;
      extraout_x8[1] = puVar10;
      __ZNSt3__15mutex4lockEv(lVar12 + 0x3d0);
      plVar4 = puVar10 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *plVar4 = *plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar15 = *(undefined8 **)(lVar12 + 0x3c0);
      if (puVar15 < *(undefined8 **)(lVar12 + 0x3c8)) {
        *puVar15 = uVar8;
        puVar15[1] = puVar10;
        puVar15 = puVar15 + 2;
LAB_10a6ecea4:
        *(undefined8 **)(lVar12 + 0x3c0) = puVar15;
        __ZNSt3__15mutex6unlockEv(lVar12 + 0x3d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
          return;
        }
        ___stack_chk_fail();
      }
      else {
        lVar14 = *(long *)(lVar12 + 0x3b8);
        lVar18 = (long)puVar15 - lVar14;
        uVar2 = (lVar18 >> 4) + 1;
        if (uVar2 >> 0x3c == 0) {
          uVar13 = (long)*(undefined8 **)(lVar12 + 0x3c8) - lVar14;
          uVar16 = (long)uVar13 >> 3;
          if (uVar16 <= uVar2) {
            uVar16 = uVar2;
          }
          if (0x7fffffffffffffef < uVar13) {
            uVar16 = 0xfffffffffffffff;
          }
          if (uVar16 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10a6ecf3c;
          }
          lVar11 = uVar16 << 4;
          __Znwm();
          puVar3 = (undefined8 *)(lVar11 + lVar18);
          *puVar3 = uVar8;
          puVar3[1] = puVar10;
          puVar15 = puVar3 + 2;
          _memcpy(puVar3 + (lVar18 >> 4) * -2,lVar14,lVar18);
          *(undefined8 **)(lVar12 + 0x3b8) = puVar3 + (lVar18 >> 4) * -2;
          *(undefined8 **)(lVar12 + 0x3c0) = puVar15;
          *(ulong *)(lVar12 + 0x3c8) = lVar11 + uVar16 * 0x10;
          if (lVar14 != 0) {
            __ZdlPv(lVar14);
          }
          goto LAB_10a6ecea4;
        }
      }
      FUN_10a702118();
      goto LAB_10a6ecf3c;
    }
  }
  FUN_10a043ecc();
LAB_10a6ecf3c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6ecf40);
  (*pcVar7)();
}



/* Entry: 10a6eccb4; end: 10a6ecfaf;  */

void FUN_10a6eccb4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(undefined8 *)(param_2 + 0x3a8);
  uVar8 = 0xb8;
  __Znwm();
  puStack_a8 = &UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  uStack_b0 = uVar16;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&uStack_b0);
  plVar9 = *(long **)(param_2 + 0x68);
  if (plVar9 != (long *)0x0) {
    uVar16 = *(undefined8 *)(param_2 + 0x60);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar2 = plVar9 + 1;
      do {
        lVar13 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *param_1 = uVar8;
      puVar10 = (undefined8 *)0x30;
      __Znwm();
      *puVar10 = &PTR_FUN_110c14188;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = uVar8;
      puVar10[4] = uVar16;
      puVar10[5] = plVar9;
      param_1[1] = puVar10;
      __ZNSt3__15mutex4lockEv(param_2 + 0x3d0);
      plVar1 = puVar10 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar14 = *(undefined8 **)(param_2 + 0x3c0);
      if (puVar14 < *(undefined8 **)(param_2 + 0x3c8)) {
        *puVar14 = uVar8;
        puVar14[1] = puVar10;
        puVar14 = puVar14 + 2;
LAB_10a6ecea4:
        *(undefined8 **)(param_2 + 0x3c0) = puVar14;
        __ZNSt3__15mutex6unlockEv(param_2 + 0x3d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return;
        }
        ___stack_chk_fail();
      }
      else {
        lVar13 = *(long *)(param_2 + 0x3b8);
        lVar17 = (long)puVar14 - lVar13;
        uVar3 = (lVar17 >> 4) + 1;
        if (uVar3 >> 0x3c == 0) {
          uVar12 = (long)*(undefined8 **)(param_2 + 0x3c8) - lVar13;
          uVar15 = (long)uVar12 >> 3;
          if (uVar15 <= uVar3) {
            uVar15 = uVar3;
          }
          if (0x7fffffffffffffef < uVar12) {
            uVar15 = 0xfffffffffffffff;
          }
          if (uVar15 >> 0x3c != 0) {
            func_0x000109ffded8();
            goto LAB_10a6ecf3c;
          }
          lVar11 = uVar15 << 4;
          __Znwm();
          puVar4 = (undefined8 *)(lVar11 + lVar17);
          *puVar4 = uVar8;
          puVar4[1] = puVar10;
          puVar14 = puVar4 + 2;
          _memcpy(puVar4 + (lVar17 >> 4) * -2,lVar13,lVar17);
          *(undefined8 **)(param_2 + 0x3b8) = puVar4 + (lVar17 >> 4) * -2;
          *(undefined8 **)(param_2 + 0x3c0) = puVar14;
          *(ulong *)(param_2 + 0x3c8) = lVar11 + uVar15 * 0x10;
          if (lVar13 != 0) {
            __ZdlPv(lVar13);
          }
          goto LAB_10a6ecea4;
        }
      }
      FUN_10a702118();
      goto LAB_10a6ecf3c;
    }
  }
  FUN_10a043ecc();
LAB_10a6ecf3c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6ecf40);
  (*pcVar7)();
}



/* Entry: 10a6ecfb0; end: 10a6ed1bf;  */

long FUN_10a6ecfb0(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar6 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar6 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar6 & 0x1fffffffc) == 4) {
      do {
        uVar6 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar6 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar6 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a6ed1c0; end: 10a6ed2d3;  */

void FUN_10a6ed1c0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x60);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10a6ed2d4; end: 10a6ed46f;  */

long FUN_10a6ed2d4(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110c12d98;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_110c12e10;
  func_0x00010a004e5c(param_1 + 0x28);
  func_0x00010a004e04(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a6ed470; end: 10a6ed583;  */

void FUN_10a6ed470(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x60);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10a6ed584; end: 10a6ed71f;  */

long FUN_10a6ed584(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110c12e98;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_110c12f10;
  func_0x00010a004e5c(param_1 + 0x28);
  func_0x00010a004e04(param_1 + 0x18);
  return param_1;
}



/* Entry: 10a6ed720; end: 10a6ed903;  */

void FUN_10a6ed720(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[5] = *(undefined8 *)(param_2 + 0x60);
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  *(undefined4 *)((long)param_1 + 0x44) = 0xffffffff;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10a6ed904; end: 10a6edfab;  */

void FUN_10a6ed904(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  ulong uVar11;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(appuStack_c8,&UNK_10f6623e5,0x1c);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c131c8;
  pppuVar2 = (undefined8 ***)&UNK_10f66de00;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
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
    ppuStack_b0 = &PTR_DAT_110c131c8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66f4da,FUN_10a71d694,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66f4e5,FUN_10a71d868,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66f4f3,FUN_10a71d918,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66f4fb,FUN_10a71d9c8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&DAT_10f684698,FUN_10a71da78,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&DAT_10f6846a0,FUN_10a71db28,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66f502,FUN_10a71dbd8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f66e50c,FUN_10a71dcb8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f3f11f9,FUN_10a71dd78,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66f512,FUN_10a71de34,FUN_10a71df08);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66e51f,FUN_10a71e03c,FUN_10a71e158);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2db407,FUN_10a71e274,FUN_10a71e330);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    ppuStack_98 = *(undefined ***)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar10 = *(ulong *)(lVar3 + -0x48);
    uVar11 = *(ulong *)(lVar3 + -0x50);
    pcStack_90 = *(code **)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar11 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar11;
    uStack_80 = uVar10;
    FUN_10a0051e8(param_1,uVar11 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar10 & 0xffffffff,uVar5
                 );
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6623e5,0x1c);
      FUN_10a05431c(param_1);
    }
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)0x0;
    ppuStack_a0 = (undefined8 **)&UNK_10f63f197;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f66de00;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      ppuStack_a0 = (undefined8 **)FUN_10a71e414;
      ppuStack_98 = &PTR_FUN_110c14228;
      pcStack_90 = FUN_10a6edfac;
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a6edf80;
      FUN_10a0544d8(param_1,&UNK_10f66f51b,&ppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
      (*(code *)*ppuStack_98)(&ppuStack_98);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      ppuStack_a0 = (undefined8 **)FUN_10a71e5ec;
      ppuStack_98 = &PTR_FUN_110c14240;
      pcStack_90 = FUN_10a6ee014;
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a6edf80;
      FUN_10a0544d8(param_1,&UNK_10f66f530,&ppuStack_a0,1,*(long *)(param_1 + 0x18) + -8);
      (*(code *)*ppuStack_98)(&ppuStack_98);
    }
    func_0x00010a004064();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (cStack_b1 < '\0') {
      __ZdlPv(appuStack_c8[0]);
    }
    __Unwind_Resume(param_1);
    puVar8 = (undefined8 *)0x80;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar9 = puVar8 + 3;
    *puVar8 = &PTR_DAT_110c14310;
    FUN_10a82def4(puVar9,param_1);
    *extraout_x8 = puVar9;
    extraout_x8[1] = puVar8;
    return;
  }
LAB_10a6edf80:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a6edf84);
  (*pcVar6)();
}



/* Entry: 10a6edfac; end: 10a6ee013;  */

void FUN_10a6edfac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110c14310;
  FUN_10a82def4(puVar2,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a6ee014; end: 10a6ee083;  */

void FUN_10a6ee014(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x1d8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_DAT_110c14360;
  FUN_10a82e77c(puVar2,param_2,param_3);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a6ee084; end: 10a6ee20f;  */

void FUN_10a6ee084(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f45cbd7;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xac;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6442b5;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xac;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6ee210(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66f545;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xac;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6ee210();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66f557;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xac;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6ee210();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66f55f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0xac;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6ee210();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a6ee210; end: 10a6ee2b3;  */

undefined8 * FUN_10a6ee210(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a6ee2b4);
      (*pcVar1)();
    }
    puStack_38 = (undefined8 *)(double)param_3;
    aiStack_40[0] = 3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a6ee2b4; end: 10a6ee60b;  */

undefined8 * FUN_10a6ee2b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x7b] = &PTR_FUN_110c383b8;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c12440,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110c12450);
  *param_1 = &PTR_FUN_110c12100;
  param_1[2] = &PTR_DAT_110c12238;
  param_1[7] = &PTR_DAT_110c12290;
  param_1[0xd] = &PTR_DAT_110c122b0;
  param_1[0x7b] = &PTR_DAT_110c12400;
  param_1[0x16] = &PTR_DAT_110c12320;
  param_1[0x17] = &PTR_DAT_110c12350;
  param_1[0x3e] = &PTR_DAT_110c12388;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x43] = puVar1 + 3;
  param_1[0x44] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x45] = puVar1 + 3;
  param_1[0x46] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x47] = puVar1 + 3;
  param_1[0x48] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x49] = puVar1 + 3;
  param_1[0x4a] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x4b] = puVar1 + 3;
  param_1[0x4c] = puVar1;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_110b9a070;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[3] = &PTR_FUN_110b9a0c0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xb] = FUN_10a004c4c;
  puVar1[0xc] = &PTR_DAT_110ae9180;
  param_1[0x4d] = puVar1 + 3;
  param_1[0x4e] = puVar1;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0x7fffffffffffffff;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((long)param_1 + 0x2dc) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x2e1) = 0;
  *(undefined1 *)((long)param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((long)param_1 + 0x3d4) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  return param_1;
}



/* Entry: 10a6ee60c; end: 10a6ee763;  */

void FUN_10a6ee60c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c12100;
  param_1[2] = &PTR_DAT_110c12238;
  param_1[7] = &PTR_DAT_110c12290;
  param_1[0xd] = &PTR_DAT_110c122b0;
  param_1[0x7b] = &PTR_DAT_110c12400;
  param_1[0x16] = &PTR_DAT_110c12320;
  param_1[0x17] = &PTR_DAT_110c12350;
  param_1[0x3e] = &PTR_DAT_110c12388;
  if ((*(char *)(param_1 + 0x79) == '\x01') && (*(char *)((long)param_1 + 0x3c7) < '\0')) {
    __ZdlPv(param_1[0x76]);
  }
  if (*(char *)(param_1 + 0x75) == '\x01') {
    func_0x00010a711e00(param_1 + 0x73);
  }
  FUN_10a71426c(param_1 + 0x71);
  FUN_10a22ffb4(param_1 + 0x6f);
  if ((*(char *)(param_1 + 0x56) == '\x01') &&
     (plVar4 = (long *)param_1[0x55], plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  FUN_10a0772f0(param_1 + 0x51);
  FUN_10a004cfc(param_1 + 0x4d);
  FUN_10a004cfc(param_1 + 0x4b);
  FUN_10a004cfc(param_1 + 0x49);
  FUN_10a004cfc(param_1 + 0x47);
  FUN_10a004cfc(param_1 + 0x45);
  FUN_10a004cfc(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110c13118;
  param_1[0x7b] = &PTR_FUN_110c13190;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c12f98;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x7b] = &PTR_DAT_110c130c8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x15];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar5 = param_1[0x12];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x13];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar5 = param_1[0x10];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x11];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0xf];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a6ee764; end: 10a6ee7a7;  */

void FUN_10a6ee764(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c12100;
  param_1[2] = &PTR_DAT_110c12238;
  param_1[7] = &PTR_DAT_110c12290;
  param_1[0xd] = &PTR_DAT_110c122b0;
  param_1[0x7b] = &PTR_DAT_110c12400;
  param_1[0x16] = &PTR_DAT_110c12320;
  param_1[0x17] = &PTR_DAT_110c12350;
  param_1[0x3e] = &PTR_DAT_110c12388;
  if ((*(char *)(param_1 + 0x79) == '\x01') && (*(char *)((long)param_1 + 0x3c7) < '\0')) {
    __ZdlPv(param_1[0x76]);
  }
  if (*(char *)(param_1 + 0x75) == '\x01') {
    func_0x00010a711e00(param_1 + 0x73);
  }
  FUN_10a71426c(param_1 + 0x71);
  FUN_10a22ffb4(param_1 + 0x6f);
  if ((*(char *)(param_1 + 0x56) == '\x01') &&
     (plVar4 = (long *)param_1[0x55], plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
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
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  FUN_10a0772f0(param_1 + 0x51);
  FUN_10a004cfc(param_1 + 0x4d);
  FUN_10a004cfc(param_1 + 0x4b);
  FUN_10a004cfc(param_1 + 0x49);
  FUN_10a004cfc(param_1 + 0x47);
  FUN_10a004cfc(param_1 + 0x45);
  FUN_10a004cfc(param_1 + 0x43);
  param_1[0x3e] = &PTR_DAT_110c13118;
  param_1[0x7b] = &PTR_FUN_110c13190;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c12f98;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x7b] = &PTR_DAT_110c130c8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x15];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar5 = param_1[0x12];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x13];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar5 = param_1[0x10];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0x11];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    plVar4 = (long *)param_1[0xf];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}


