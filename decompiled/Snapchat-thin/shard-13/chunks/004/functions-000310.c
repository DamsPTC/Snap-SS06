/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a64d870; end: 10a64d877;  */

void FUN_10a64d870(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d870;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + -0x80));
  FUN_10a7722fc(param_1,*(undefined8 *)((long)register0x00000008 + -0x48),param_2 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)
              (*(undefined8 *)((long)register0x00000008 + -0x40));
    return;
  }
  return;
}



/* Entry: 10a64d878; end: 10a64d90b;  */

undefined8 FUN_10a64d878(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x218) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d90c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    param_2 = param_2 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + 0x170));
  FUN_10a7721d4(*(undefined8 *)((long)register0x00000008 + -0x48),param_2);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
  }
  return param_1;
}



/* Entry: 10a64d90c; end: 10a64d913;  */

undefined8 FUN_10a64d90c(undefined8 param_1,undefined *param_2)

{
  undefined *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 0x28) != 0) break;
    unaff_x19 = &UNK_10f66a9de;
    FUN_10a00946c();
    if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
    }
    unaff_x30 = FUN_10a64d90c;
    param_2 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x48),*(undefined8 *)(param_2 + -0x80));
  FUN_10a7721d4(*(undefined8 *)((long)register0x00000008 + -0x48),param_2 + -0x1f0);
  if (*(char *)((long)register0x00000008 + -0x38) == '\x01') {
    __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x40));
  }
  return param_1;
}



/* Entry: 10a64d914; end: 10a64d943;  */

void FUN_10a64d914(long param_1)

{
  undefined8 uStack_78;
  undefined8 uStack_70;
  char cStack_68;
  
  FUN_10a14efe0();
  FUN_10a14efe0();
  FUN_10a14efe0();
  FUN_10a14efe0();
  if (*(long *)(param_1 + 0x228) != 0) {
    FUN_10a3dd9ac(&uStack_78,*(undefined8 *)(param_1 + 0x170));
    FUN_10a771cdc(uStack_78,param_1);
    if (cStack_68 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_70);
    }
  }
  return;
}



/* Entry: 10a64d944; end: 10a64d9bb;  */

void FUN_10a64d944(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x228) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x170));
    FUN_10a771cdc(uStack_38,param_1);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64d9bc; end: 10a64d9e7;  */

void FUN_10a64d9bc(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x108));
    FUN_10a771cdc(uStack_38,param_1 + -0x68);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64d9e8; end: 10a64da67;  */

void FUN_10a64d9e8(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x228) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x170));
    FUN_10a77242c(uStack_38,param_1);
    func_0x00010a3a4b08(param_1 + 0x228);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64da68; end: 10a64da6f;  */

void FUN_10a64da68(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x108));
    FUN_10a77242c(uStack_38,param_1 + -0x68);
    func_0x00010a3a4b08(param_1 + 0x1c0);
    if (cStack_28 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_30);
    }
  }
  return;
}



/* Entry: 10a64da70; end: 10a64dde3;  */

void FUN_10a64da70(long param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_90;
  undefined **ppuStack_88;
  char cStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar8 = &puStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_2;
  if (lVar7 == 0) {
    FUN_10a00946c(&UNK_10f66aa0f);
LAB_10a64dd6c:
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(param_1 + 0x218) == lVar7) {
LAB_10a64dd34:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_10a64dd6c;
    }
    puVar10 = *(undefined **)(lVar7 + 0xe0);
    ppuVar2 = *(undefined ***)(lVar7 + 0xe8);
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_90 = puVar10;
    ppuStack_88 = ppuVar2;
    if ((puVar10 == (undefined *)0x0) ||
       (___dynamic_cast(puVar10,&PTR_DAT_110c5efc0,&PTR_DAT_110c674a8,0),
       puVar10 == (undefined *)0x0)) {
      ppuVar8 = &puStack_78;
      puVar10 = puStack_78;
      ppuVar2 = ppuStack_70;
    }
    ppuStack_70 = ppuVar2;
    puStack_78 = puVar10;
    *ppuVar8 = (undefined *)0x0;
    ppuVar8[1] = (undefined *)0x0;
    ppuVar8 = ppuStack_70;
    puVar10 = puStack_78;
    if (ppuStack_70 != (undefined **)0x0) {
      ppuVar2 = ppuStack_70 + 1;
      do {
        puVar9 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    ppuVar8 = ppuStack_88;
    if (ppuStack_88 != (undefined **)0x0) {
      ppuVar2 = ppuStack_88 + 1;
      do {
        puVar9 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    if (puVar10 == (undefined *)0x0) {
      plVar6 = (long *)(param_1 + 0x218);
      if (*plVar6 != 0) {
        FUN_10a3dd9ac(&puStack_78,*(undefined8 *)(param_1 + 0x170));
        puVar10 = puStack_78;
        FUN_10a771cdc(puStack_78,param_1);
        FUN_10a77242c(puVar10,param_1);
        if ((char)uStack_68 == '\x01') {
          __ZNSt3__15mutex6unlockEv(ppuStack_70);
        }
      }
      FUN_10a41cbc8(plVar6,param_2);
      plVar6 = (long *)*plVar6;
      (**(code **)(*plVar6 + 0x90))();
      if (plVar6 == (long *)0x0) {
        puStack_78 = (undefined *)0x0;
        ppuStack_70 = (undefined **)0x0;
      }
      else {
        func_0x00010a443248(&puStack_78,plVar6 + 2);
      }
      func_0x00010a41cc44((long *)(param_1 + 0x228),&puStack_78);
      ppuVar8 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar2 = ppuStack_70 + 1;
        do {
          puVar10 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = puVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar10 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      if (*(long *)(param_1 + 0x228) == 0) goto LAB_10a64dd7c;
      FUN_10a3dd9ac(&puStack_90,*(undefined8 *)(param_1 + 0x170));
      puVar10 = puStack_90;
      FUN_10a772568(puStack_90,param_1,0);
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      puStack_78 = &UNK_1053a6a3c;
      ppuStack_70 = &PTR_DAT_110950c70;
      FUN_10a771b30(puVar10,param_1,*(long *)(param_1 + 0x228) + 0x30,&puStack_78);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      if (cStack_80 == '\x01') {
        __ZNSt3__15mutex6unlockEv(ppuStack_88);
      }
      FUN_10a66def4(&puStack_78,&puStack_90);
      FUN_10a64ad40(param_1 + 0x208,&puStack_78);
      ppuVar8 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar2 = ppuStack_70 + 1;
        do {
          puVar10 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = puVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar10 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
        }
      }
      if (*(char *)(*(long *)(param_1 + 0x170) + 0xe2a) == '\x01') {
        FUN_10a64d3c0(param_1);
      }
      goto LAB_10a64dd34;
    }
  }
  FUN_10a00946c(&UNK_10f66aa3f);
LAB_10a64dd7c:
  FUN_10a00946c(&UNK_10f66aa71);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a64dd8c);
  (*pcVar5)();
}



/* Entry: 10a64dde4; end: 10a64dec7;  */

void FUN_10a64dde4(long param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puStack_90;
  undefined **ppuStack_88;
  char cStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar7 = param_1 + -0x1f0;
  ppuVar9 = &puStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_2;
  if (lVar8 == 0) {
    FUN_10a00946c(&UNK_10f66aa0f);
LAB_10a64dd6c:
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(param_1 + 0x28) == lVar8) {
LAB_10a64dd34:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_10a64dd6c;
    }
    puVar11 = *(undefined **)(lVar8 + 0xe0);
    ppuVar2 = *(undefined ***)(lVar8 + 0xe8);
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar4) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_90 = puVar11;
    ppuStack_88 = ppuVar2;
    if ((puVar11 == (undefined *)0x0) ||
       (___dynamic_cast(puVar11,&PTR_DAT_110c5efc0,&PTR_DAT_110c674a8,0),
       puVar11 == (undefined *)0x0)) {
      ppuVar9 = &puStack_78;
      puVar11 = puStack_78;
      ppuVar2 = ppuStack_70;
    }
    ppuStack_70 = ppuVar2;
    puStack_78 = puVar11;
    *ppuVar9 = (undefined *)0x0;
    ppuVar9[1] = (undefined *)0x0;
    ppuVar9 = ppuStack_70;
    puVar11 = puStack_78;
    if (ppuStack_70 != (undefined **)0x0) {
      ppuVar2 = ppuStack_70 + 1;
      do {
        puVar10 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    ppuVar9 = ppuStack_88;
    if (ppuStack_88 != (undefined **)0x0) {
      ppuVar2 = ppuStack_88 + 1;
      do {
        puVar10 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
    if (puVar11 == (undefined *)0x0) {
      plVar6 = (long *)(param_1 + 0x28);
      if (*plVar6 != 0) {
        FUN_10a3dd9ac(&puStack_78,*(undefined8 *)(param_1 + -0x80));
        puVar11 = puStack_78;
        FUN_10a771cdc(puStack_78,lVar7);
        FUN_10a77242c(puVar11,lVar7);
        if ((char)uStack_68 == '\x01') {
          __ZNSt3__15mutex6unlockEv(ppuStack_70);
        }
      }
      FUN_10a41cbc8(plVar6,param_2);
      plVar6 = (long *)*plVar6;
      (**(code **)(*plVar6 + 0x90))();
      if (plVar6 == (long *)0x0) {
        puStack_78 = (undefined *)0x0;
        ppuStack_70 = (undefined **)0x0;
      }
      else {
        func_0x00010a443248(&puStack_78,plVar6 + 2);
      }
      func_0x00010a41cc44((long *)(param_1 + 0x38),&puStack_78);
      ppuVar9 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar2 = ppuStack_70 + 1;
        do {
          puVar11 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = puVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
        }
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_10a64dd7c;
      FUN_10a3dd9ac(&puStack_90,*(undefined8 *)(param_1 + -0x80));
      puVar11 = puStack_90;
      FUN_10a772568(puStack_90,lVar7,0);
      uStack_40 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_68 = 0;
      puStack_78 = &UNK_1053a6a3c;
      ppuStack_70 = &PTR_DAT_110950c70;
      FUN_10a771b30(puVar11,lVar7,*(long *)(param_1 + 0x38) + 0x30,&puStack_78);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      if (cStack_80 == '\x01') {
        __ZNSt3__15mutex6unlockEv(ppuStack_88);
      }
      FUN_10a66def4(&puStack_78,&puStack_90);
      FUN_10a64ad40(param_1 + 0x18,&puStack_78);
      ppuVar9 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar2 = ppuStack_70 + 1;
        do {
          puVar11 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = puVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar11 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
        }
      }
      if (*(char *)(*(long *)(param_1 + -0x80) + 0xe2a) == '\x01') {
        FUN_10a64d3c0(lVar7);
      }
      goto LAB_10a64dd34;
    }
  }
  FUN_10a00946c(&UNK_10f66aa3f);
LAB_10a64dd7c:
  FUN_10a00946c(&UNK_10f66aa71);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a64dd8c);
  (*pcVar5)();
}



/* Entry: 10a64dec8; end: 10a64df5f;  */

void FUN_10a64dec8(long param_1,undefined *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *unaff_x20;
  code *pcVar12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  undefined1 *puVar6;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_10a3dd9ac(&uStack_38,*(undefined8 *)(param_1 + 0x170));
    FUN_10a772704(uStack_38,param_1,param_2);
    if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
      return;
    }
    return;
  }
  puVar7 = &UNK_10f66a9de;
  FUN_10a00946c();
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(uStack_30);
  }
  pcVar12 = FUN_10a64df60;
  puVar9 = puVar7;
  __Unwind_Resume();
  puVar4 = auStack_40;
  puVar5 = (undefined1 *)register0x00000008;
  do {
    puVar6 = puVar4;
    *(undefined1 **)(puVar6 + -0x20) = unaff_x20;
    *(undefined **)(puVar6 + -0x18) = puVar7;
    *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
    *(code **)(puVar6 + -8) = pcVar12;
    *(undefined8 *)(puVar6 + -0x28) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (*(long *)(puVar9 + 0x208) == 0) {
      puVar7 = &UNK_10f66a68e;
      FUN_10a00946c();
    }
    else {
      puVar9[0x200] = (char)param_2;
      *(char *)(*(long *)(puVar9 + 0x208) + 0x5880) = (char)param_2;
      unaff_x20 = *(undefined1 **)(puVar9 + 0x170);
      param_2 = &UNK_10f66aa9a;
      puVar7 = puVar6 + -0x68;
      func_0x000107c2b054();
      if (unaff_x20 != (undefined1 *)0x0) {
        puVar7 = *(undefined **)(unaff_x20 + 0x8d8);
        param_2 = puVar6 + -0x68;
        FUN_10a76c080();
      }
      if ((char)puVar6[-0x51] < '\0') {
        puVar7 = *(undefined **)(puVar6 + -0x68);
        __ZdlPv();
      }
      if (*(long *)(puVar9 + 0x228) != 0) {
        FUN_10a3dd9ac(puVar6 + -0x80,*(undefined8 *)(puVar9 + 0x170));
        uVar8 = *(undefined8 *)(puVar6 + -0x80);
        uVar11 = *(undefined8 *)(puVar9 + 0x208);
        lVar10 = *(long *)(puVar9 + 0x210);
        if (lVar10 != 0) {
          plVar1 = (long *)(lVar10 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(code **)(puVar6 + -0x68) = FUN_10a670f98;
        *(undefined ***)(puVar6 + -0x60) = &PTR_DAT_110c06f58;
        unaff_x20 = puVar6 + -0x68;
        *(undefined8 *)(puVar6 + -0x58) = uVar11;
        *(long *)(puVar6 + -0x50) = lVar10;
        *(undefined8 *)(puVar6 + -0x90) = 0;
        *(undefined8 *)(puVar6 + -0x88) = 0;
        FUN_10a772790(uVar8,puVar9,puVar6 + -0x68);
        puVar7 = puVar6 + -0x60;
        (*(code *)**(undefined8 **)(puVar6 + -0x60))();
        param_2 = puVar9;
        if (puVar6[-0x70] == '\x01') {
          puVar7 = *(undefined **)(puVar6 + -0x78);
          __ZNSt3__15mutex6unlockEv();
          param_2 = puVar9;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x28)) {
        return;
      }
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)(puVar6 + -0x60))(unaff_x20 + 8);
    func_0x00010a3bd1cc(puVar6 + -0x90);
    if (puVar6[-0x70] == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)(puVar6 + -0x78));
    }
    pcVar12 = FUN_10a64e0e4;
    puVar9 = puVar7;
    __Unwind_Resume();
    puVar9 = puVar9 + -0x1f0;
    puVar4 = puVar6 + -0x90;
    puVar5 = puVar6;
  } while( true );
}



/* Entry: 10a64df60; end: 10a64e0e3;  */

void FUN_10a64df60(undefined *param_1,undefined *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (*(long *)(param_1 + 0x208) == 0) {
      unaff_x19 = &UNK_10f66a68e;
      FUN_10a00946c();
    }
    else {
      param_1[0x200] = (char)param_2;
      *(char *)(*(long *)(param_1 + 0x208) + 0x5880) = (char)param_2;
      unaff_x20 = *(undefined1 **)(param_1 + 0x170);
      param_2 = &UNK_10f66aa9a;
      unaff_x19 = (undefined *)((long)register0x00000008 + -0x68);
      func_0x000107c2b054();
      if (unaff_x20 != (undefined1 *)0x0) {
        unaff_x19 = *(undefined **)(unaff_x20 + 0x8d8);
        param_2 = (undefined *)((long)register0x00000008 + -0x68);
        FUN_10a76c080();
      }
      if (*(char *)((long)register0x00000008 + -0x51) < '\0') {
        unaff_x19 = *(undefined **)((long)register0x00000008 + -0x68);
        __ZdlPv();
      }
      if (*(long *)(param_1 + 0x228) != 0) {
        FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x80),
                      *(undefined8 *)(param_1 + 0x170));
        uVar4 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar6 = *(undefined8 *)(param_1 + 0x208);
        lVar5 = *(long *)(param_1 + 0x210);
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(code **)((long)register0x00000008 + -0x68) = FUN_10a670f98;
        *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110c06f58;
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar6;
        *(long *)((long)register0x00000008 + -0x50) = lVar5;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        FUN_10a772790(uVar4,param_1,(undefined1 *)((long)register0x00000008 + -0x68));
        unaff_x19 = (undefined *)((long)register0x00000008 + -0x60);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
        param_2 = param_1;
        if (*(char *)((long)register0x00000008 + -0x70) == '\x01') {
          unaff_x19 = *(undefined **)((long)register0x00000008 + -0x78);
          __ZNSt3__15mutex6unlockEv();
          param_2 = param_1;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
      {
        return;
      }
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))(unaff_x20 + 8);
    func_0x00010a3bd1cc((undefined1 *)((long)register0x00000008 + -0x90));
    if (*(char *)((long)register0x00000008 + -0x70) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x78));
    }
    unaff_x30 = FUN_10a64e0e4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
}



/* Entry: 10a64e0e4; end: 10a64e0fb;  */

void FUN_10a64e0e4(undefined *param_1,undefined *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar5 = param_1 + -0x1f0;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if (*(long *)(param_1 + 0x18) == 0) {
      unaff_x19 = &UNK_10f66a68e;
      FUN_10a00946c();
    }
    else {
      param_1[0x10] = (char)param_2;
      *(char *)(*(long *)(param_1 + 0x18) + 0x5880) = (char)param_2;
      unaff_x20 = *(undefined1 **)(param_1 + -0x80);
      param_2 = &UNK_10f66aa9a;
      unaff_x19 = (undefined *)((long)register0x00000008 + -0x68);
      func_0x000107c2b054();
      if (unaff_x20 != (undefined1 *)0x0) {
        unaff_x19 = *(undefined **)(unaff_x20 + 0x8d8);
        param_2 = (undefined *)((long)register0x00000008 + -0x68);
        FUN_10a76c080();
      }
      if (*(char *)((long)register0x00000008 + -0x51) < '\0') {
        unaff_x19 = *(undefined **)((long)register0x00000008 + -0x68);
        __ZdlPv();
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_10a3dd9ac((undefined1 *)((long)register0x00000008 + -0x80),
                      *(undefined8 *)(param_1 + -0x80));
        uVar4 = *(undefined8 *)((long)register0x00000008 + -0x80);
        uVar7 = *(undefined8 *)(param_1 + 0x18);
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 != 0) {
          plVar1 = (long *)(lVar6 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(code **)((long)register0x00000008 + -0x68) = FUN_10a670f98;
        *(undefined ***)((long)register0x00000008 + -0x60) = &PTR_DAT_110c06f58;
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0x58) = uVar7;
        *(long *)((long)register0x00000008 + -0x50) = lVar6;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
        FUN_10a772790(uVar4,puVar5,(undefined1 *)((long)register0x00000008 + -0x68));
        unaff_x19 = (undefined *)((long)register0x00000008 + -0x60);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))();
        param_2 = puVar5;
        if (*(char *)((long)register0x00000008 + -0x70) == '\x01') {
          unaff_x19 = *(undefined **)((long)register0x00000008 + -0x78);
          __ZNSt3__15mutex6unlockEv();
          param_2 = puVar5;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x28))
      {
        return;
      }
    }
    ___stack_chk_fail();
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x60))(unaff_x20 + 8);
    func_0x00010a3bd1cc((undefined1 *)((long)register0x00000008 + -0x90));
    if (*(char *)((long)register0x00000008 + -0x70) == '\x01') {
      __ZNSt3__15mutex6unlockEv(*(undefined8 *)((long)register0x00000008 + -0x78));
    }
    unaff_x30 = FUN_10a64e0e4;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
}



/* Entry: 10a64e0fc; end: 10a64e1bf;  */

int * FUN_10a64e0fc(int *param_1,int param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  undefined *puVar4;
  int *piVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d8;
  float fVar10;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 *apuStack_80 [11];
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x82) != 0) {
    *(char *)(*(long *)(param_1 + 0x82) + 0x5881) = (char)param_2;
    return param_1;
  }
  piVar3 = (int *)&UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(piVar3 + 6) != 0) {
    *(char *)(*(long *)(piVar3 + 6) + 0x5881) = (char)param_2;
    return piVar3;
  }
  uStack_18 = 0x10a64e124;
  puVar4 = &UNK_10f66aac7;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a00946c();
  if (*(long *)(puVar4 + 0x208) != 0) {
    return (int *)(ulong)*(byte *)(*(long *)(puVar4 + 0x208) + 0x5881);
  }
  uStack_28 = 0x10a64e14c;
  puVar4 = &UNK_10f66aac7;
  apuStack_80[10] = (undefined1 *)&puStack_20;
  FUN_10a00946c();
  if (*(long *)(puVar4 + 0x18) == 0) {
    apuStack_80[9] = (undefined1 *)0x10a64e174;
    puVar4 = &UNK_10f66aac7;
    pcVar6 = (code *)0x10a64e19c;
    apuStack_80[8] = (undefined1 *)(apuStack_80 + 10);
    FUN_10a00946c();
    ppuVar2 = apuStack_80 + 8;
    for (; piVar3 = *(int **)(puVar4 + 0x208), piVar3 == (int *)0x0; puVar4 = puVar4 + -0x1f0) {
      *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
      *(code **)((long)ppuVar2 + -8) = pcVar6;
      puVar4 = &UNK_10f66aac7;
      pcVar6 = FUN_10a64e1c0;
      FUN_10a00946c();
      ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x10);
    }
    *piVar3 = param_2;
    *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_d11;
    *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_d10;
    *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_d8;
    *(undefined8 *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
    *(code **)((long)ppuVar2 + -8) = pcVar6;
    fVar9 = (float)piVar3[3];
    fVar10 = (float)piVar3[4];
    fVar8 = (float)piVar3[1];
    if ((float)piVar3[1] <= fVar9) {
      fVar8 = fVar9;
    }
    piVar3[1] = (int)fVar8;
    piVar5 = piVar3;
    if (fVar10 <= fVar8) {
      fVar7 = (float)piVar3[5];
    }
    else {
      iVar1 = *piVar3;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          fVar7 = ((fVar8 - fVar9) * ((float)piVar3[5] + -1.0)) / (fVar10 - fVar9);
          fVar8 = 1.0;
        }
        else {
          if (iVar1 != 1) {
            return piVar3;
          }
          fVar10 = (fVar10 * (1.0 - (float)piVar3[5])) / (fVar10 - fVar9);
          fVar7 = 1.0 - fVar10;
          fVar8 = (fVar9 * fVar10) / fVar8;
        }
        fVar7 = fVar7 + fVar8;
      }
      else if (iVar1 == 2) {
        fVar7 = (float)piVar3[5];
        _powf(fVar7,(fVar8 - fVar9) / (fVar10 - fVar9));
      }
      else {
        if (iVar1 != 3) {
          return piVar3;
        }
        fVar7 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
        ___exp10f();
        fVar8 = ((fVar8 - fVar9) * (fVar7 + -1.0)) / (fVar10 - fVar9) + 1.0;
        _log10f();
        fVar7 = fVar8 * 0.5 + 1.0;
      }
    }
    piVar3[2] = (int)fVar7;
    return piVar5;
  }
  return (int *)(ulong)*(byte *)(*(long *)(puVar4 + 0x18) + 0x5881);
}



/* Entry: 10a64e1c0; end: 10a64e1c7;  */

void FUN_10a64e1c0(undefined *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 unaff_d8;
  float fVar7;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  while (piVar3 = *(int **)(param_1 + 0x18), piVar3 == (int *)0x0) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_1 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e1c0;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  }
  *piVar3 = param_2;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  fVar6 = (float)piVar3[3];
  fVar7 = (float)piVar3[4];
  fVar5 = (float)piVar3[1];
  if ((float)piVar3[1] <= fVar6) {
    fVar5 = fVar6;
  }
  piVar3[1] = (int)fVar5;
  if (fVar7 <= fVar5) {
    fVar4 = (float)piVar3[5];
  }
  else {
    iVar1 = *piVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar4 = ((fVar5 - fVar6) * ((float)piVar3[5] + -1.0)) / (fVar7 - fVar6);
        fVar5 = 1.0;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        fVar7 = (fVar7 * (1.0 - (float)piVar3[5])) / (fVar7 - fVar6);
        fVar4 = 1.0 - fVar7;
        fVar5 = (fVar6 * fVar7) / fVar5;
      }
      fVar4 = fVar4 + fVar5;
    }
    else if (iVar1 == 2) {
      fVar4 = (float)piVar3[5];
      _powf(fVar4,(fVar5 - fVar6) / (fVar7 - fVar6));
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      fVar4 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
      ___exp10f();
      fVar5 = ((fVar5 - fVar6) * (fVar4 + -1.0)) / (fVar7 - fVar6) + 1.0;
      _log10f();
      fVar4 = fVar5 * 0.5 + 1.0;
    }
  }
  piVar3[2] = (int)fVar4;
  return;
}



/* Entry: 10a64e1c8; end: 10a64e23b;  */

int * FUN_10a64e1c8(float param_1,long param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  undefined *puVar4;
  int *piVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d8;
  float fVar10;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 *apuStack_60 [10];
  
  if (*(uint **)(param_2 + 0x208) != (uint *)0x0) {
    return (int *)(ulong)**(uint **)(param_2 + 0x208);
  }
  puVar4 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(uint **)(puVar4 + 0x18) == (uint *)0x0) {
    apuStack_60[9] = (undefined1 *)0x10a64e1ec;
    puVar4 = &UNK_10f66aac7;
    pcVar6 = (code *)0x10a64e210;
    apuStack_60[8] = &stack0xfffffffffffffff0;
    FUN_10a00946c();
    ppuVar2 = apuStack_60 + 8;
    for (; piVar3 = *(int **)(puVar4 + 0x208), piVar3 == (int *)0x0; puVar4 = puVar4 + -0x1f0) {
      *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
      *(code **)((long)ppuVar2 + -8) = pcVar6;
      puVar4 = &UNK_10f66aac7;
      pcVar6 = FUN_10a64e23c;
      FUN_10a00946c();
      ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x10);
    }
    if (param_1 <= 1.0) {
      param_1 = 1.0;
    }
    piVar3[3] = (int)param_1;
    *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_d11;
    *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_d10;
    *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_d8;
    *(undefined8 *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
    *(code **)((long)ppuVar2 + -8) = pcVar6;
    fVar9 = (float)piVar3[3];
    fVar10 = (float)piVar3[4];
    fVar8 = (float)piVar3[1];
    if ((float)piVar3[1] <= fVar9) {
      fVar8 = fVar9;
    }
    piVar3[1] = (int)fVar8;
    piVar5 = piVar3;
    if (fVar10 <= fVar8) {
      fVar7 = (float)piVar3[5];
    }
    else {
      iVar1 = *piVar3;
      if (iVar1 < 2) {
        if (iVar1 == 0) {
          fVar7 = ((fVar8 - fVar9) * ((float)piVar3[5] + -1.0)) / (fVar10 - fVar9);
          fVar8 = 1.0;
        }
        else {
          if (iVar1 != 1) {
            return piVar3;
          }
          fVar10 = (fVar10 * (1.0 - (float)piVar3[5])) / (fVar10 - fVar9);
          fVar7 = 1.0 - fVar10;
          fVar8 = (fVar9 * fVar10) / fVar8;
        }
        fVar7 = fVar7 + fVar8;
      }
      else if (iVar1 == 2) {
        fVar7 = (float)piVar3[5];
        _powf(fVar7,(fVar8 - fVar9) / (fVar10 - fVar9));
      }
      else {
        if (iVar1 != 3) {
          return piVar3;
        }
        fVar7 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
        ___exp10f();
        fVar8 = ((fVar8 - fVar9) * (fVar7 + -1.0)) / (fVar10 - fVar9) + 1.0;
        _log10f();
        fVar7 = fVar8 * 0.5 + 1.0;
      }
    }
    piVar3[2] = (int)fVar7;
    return piVar5;
  }
  return (int *)(ulong)**(uint **)(puVar4 + 0x18);
}



/* Entry: 10a64e23c; end: 10a64e243;  */

void FUN_10a64e23c(float param_1,undefined *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 unaff_d8;
  float fVar7;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  while (piVar3 = *(int **)(param_2 + 0x18), piVar3 == (int *)0x0) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e23c;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  }
  if (param_1 <= 1.0) {
    param_1 = 1.0;
  }
  piVar3[3] = (int)param_1;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  fVar6 = (float)piVar3[3];
  fVar7 = (float)piVar3[4];
  fVar5 = (float)piVar3[1];
  if ((float)piVar3[1] <= fVar6) {
    fVar5 = fVar6;
  }
  piVar3[1] = (int)fVar5;
  if (fVar7 <= fVar5) {
    fVar4 = (float)piVar3[5];
  }
  else {
    iVar1 = *piVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar4 = ((fVar5 - fVar6) * ((float)piVar3[5] + -1.0)) / (fVar7 - fVar6);
        fVar5 = 1.0;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        fVar7 = (fVar7 * (1.0 - (float)piVar3[5])) / (fVar7 - fVar6);
        fVar4 = 1.0 - fVar7;
        fVar5 = (fVar6 * fVar7) / fVar5;
      }
      fVar4 = fVar4 + fVar5;
    }
    else if (iVar1 == 2) {
      fVar4 = (float)piVar3[5];
      _powf(fVar4,(fVar5 - fVar6) / (fVar7 - fVar6));
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      fVar4 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
      ___exp10f();
      fVar5 = ((fVar5 - fVar6) * (fVar4 + -1.0)) / (fVar7 - fVar6) + 1.0;
      _log10f();
      fVar4 = fVar5 * 0.5 + 1.0;
    }
  }
  piVar3[2] = (int)fVar4;
  return;
}



/* Entry: 10a64e244; end: 10a64e2b7;  */

ulong FUN_10a64e244(float param_1,long param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  undefined *puVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d8;
  float fVar10;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 *apuStack_60 [10];
  
  if (*(long *)(param_2 + 0x208) != 0) {
    return (ulong)*(uint *)(*(long *)(param_2 + 0x208) + 0xc);
  }
  puVar4 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(puVar4 + 0x18) != 0) {
    return (ulong)*(uint *)(*(long *)(puVar4 + 0x18) + 0xc);
  }
  apuStack_60[9] = (undefined1 *)0x10a64e268;
  puVar4 = &UNK_10f66aac7;
  pcVar5 = (code *)0x10a64e28c;
  apuStack_60[8] = &stack0xfffffffffffffff0;
  FUN_10a00946c();
  ppuVar2 = apuStack_60 + 8;
  for (; piVar3 = *(int **)(puVar4 + 0x208), piVar3 == (int *)0x0; puVar4 = puVar4 + -0x1f0) {
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
    *(code **)((long)ppuVar2 + -8) = pcVar5;
    puVar4 = &UNK_10f66aac7;
    pcVar5 = FUN_10a64e2b8;
    FUN_10a00946c();
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x10);
  }
  if (param_1 <= 2.0) {
    param_1 = 2.0;
  }
  piVar3[4] = (int)param_1;
  *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_d11;
  *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_d10;
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_d9;
  *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_d8;
  *(undefined8 *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(code **)((long)ppuVar2 + -8) = pcVar5;
  fVar6 = (float)piVar3[1];
  uVar7 = 0;
  fVar9 = (float)piVar3[3];
  fVar10 = (float)piVar3[4];
  fVar8 = fVar6;
  if (fVar6 <= fVar9) {
    fVar8 = fVar9;
  }
  piVar3[1] = (int)fVar8;
  if (fVar10 <= fVar8) {
    fVar6 = (float)piVar3[5];
    uVar7 = 0;
  }
  else {
    iVar1 = *piVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar6 = ((fVar8 - fVar9) * ((float)piVar3[5] + -1.0)) / (fVar10 - fVar9);
        fVar8 = 1.0;
      }
      else {
        if (iVar1 != 1) goto LAB_10ad1e668;
        fVar10 = (fVar10 * (1.0 - (float)piVar3[5])) / (fVar10 - fVar9);
        fVar6 = 1.0 - fVar10;
        fVar8 = (fVar9 * fVar10) / fVar8;
      }
      fVar6 = fVar6 + fVar8;
      uVar7 = 0;
    }
    else if (iVar1 == 2) {
      fVar6 = (float)piVar3[5];
      uVar7 = 0;
      _powf(fVar6,(fVar8 - fVar9) / (fVar10 - fVar9));
    }
    else {
      if (iVar1 != 3) goto LAB_10ad1e668;
      fVar6 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
      ___exp10f();
      fVar8 = ((fVar8 - fVar9) * (fVar6 + -1.0)) / (fVar10 - fVar9) + 1.0;
      _log10f();
      fVar6 = fVar8 * 0.5 + 1.0;
      uVar7 = 0;
    }
  }
  piVar3[2] = (int)fVar6;
LAB_10ad1e668:
  return CONCAT44(uVar7,fVar6);
}



/* Entry: 10a64e2b8; end: 10a64e2bf;  */

void FUN_10a64e2b8(float param_1,undefined *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 unaff_d8;
  float fVar7;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  while (piVar3 = *(int **)(param_2 + 0x18), piVar3 == (int *)0x0) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e2b8;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  }
  if (param_1 <= 2.0) {
    param_1 = 2.0;
  }
  piVar3[4] = (int)param_1;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  fVar6 = (float)piVar3[3];
  fVar7 = (float)piVar3[4];
  fVar5 = (float)piVar3[1];
  if ((float)piVar3[1] <= fVar6) {
    fVar5 = fVar6;
  }
  piVar3[1] = (int)fVar5;
  if (fVar7 <= fVar5) {
    fVar4 = (float)piVar3[5];
  }
  else {
    iVar1 = *piVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar4 = ((fVar5 - fVar6) * ((float)piVar3[5] + -1.0)) / (fVar7 - fVar6);
        fVar5 = 1.0;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        fVar7 = (fVar7 * (1.0 - (float)piVar3[5])) / (fVar7 - fVar6);
        fVar4 = 1.0 - fVar7;
        fVar5 = (fVar6 * fVar7) / fVar5;
      }
      fVar4 = fVar4 + fVar5;
    }
    else if (iVar1 == 2) {
      fVar4 = (float)piVar3[5];
      _powf(fVar4,(fVar5 - fVar6) / (fVar7 - fVar6));
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      fVar4 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
      ___exp10f();
      fVar5 = ((fVar5 - fVar6) * (fVar4 + -1.0)) / (fVar7 - fVar6) + 1.0;
      _log10f();
      fVar4 = fVar5 * 0.5 + 1.0;
    }
  }
  piVar3[2] = (int)fVar4;
  return;
}



/* Entry: 10a64e2c0; end: 10a64e32b;  */

ulong FUN_10a64e2c0(int param_1,long param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  int *piVar3;
  undefined *puVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 unaff_d8;
  float fVar10;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 *apuStack_60 [10];
  
  if (*(long *)(param_2 + 0x208) != 0) {
    return (ulong)*(uint *)(*(long *)(param_2 + 0x208) + 0x10);
  }
  puVar4 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(puVar4 + 0x18) != 0) {
    return (ulong)*(uint *)(*(long *)(puVar4 + 0x18) + 0x10);
  }
  apuStack_60[9] = (undefined1 *)0x10a64e2e4;
  puVar4 = &UNK_10f66aac7;
  pcVar5 = (code *)0x10a64e308;
  apuStack_60[8] = &stack0xfffffffffffffff0;
  FUN_10a00946c();
  ppuVar2 = apuStack_60 + 8;
  for (; piVar3 = *(int **)(puVar4 + 0x208), piVar3 == (int *)0x0; puVar4 = puVar4 + -0x1f0) {
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
    *(code **)((long)ppuVar2 + -8) = pcVar5;
    puVar4 = &UNK_10f66aac7;
    pcVar5 = FUN_10a64e32c;
    FUN_10a00946c();
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x10);
  }
  piVar3[5] = param_1;
  *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_d11;
  *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_d10;
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_d9;
  *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_d8;
  *(undefined8 *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(code **)((long)ppuVar2 + -8) = pcVar5;
  fVar6 = (float)piVar3[1];
  uVar7 = 0;
  fVar9 = (float)piVar3[3];
  fVar10 = (float)piVar3[4];
  fVar8 = fVar6;
  if (fVar6 <= fVar9) {
    fVar8 = fVar9;
  }
  piVar3[1] = (int)fVar8;
  if (fVar10 <= fVar8) {
    fVar6 = (float)piVar3[5];
    uVar7 = 0;
  }
  else {
    iVar1 = *piVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar6 = ((fVar8 - fVar9) * ((float)piVar3[5] + -1.0)) / (fVar10 - fVar9);
        fVar8 = 1.0;
      }
      else {
        if (iVar1 != 1) goto LAB_10ad1e668;
        fVar10 = (fVar10 * (1.0 - (float)piVar3[5])) / (fVar10 - fVar9);
        fVar6 = 1.0 - fVar10;
        fVar8 = (fVar9 * fVar10) / fVar8;
      }
      fVar6 = fVar6 + fVar8;
      uVar7 = 0;
    }
    else if (iVar1 == 2) {
      fVar6 = (float)piVar3[5];
      uVar7 = 0;
      _powf(fVar6,(fVar8 - fVar9) / (fVar10 - fVar9));
    }
    else {
      if (iVar1 != 3) goto LAB_10ad1e668;
      fVar6 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
      ___exp10f();
      fVar8 = ((fVar8 - fVar9) * (fVar6 + -1.0)) / (fVar10 - fVar9) + 1.0;
      _log10f();
      fVar6 = fVar8 * 0.5 + 1.0;
      uVar7 = 0;
    }
  }
  piVar3[2] = (int)fVar6;
LAB_10ad1e668:
  return CONCAT44(uVar7,fVar6);
}



/* Entry: 10a64e32c; end: 10a64e333;  */

void FUN_10a64e32c(int param_1,undefined *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 unaff_d8;
  float fVar7;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  
  while (piVar3 = *(int **)(param_2 + 0x18), piVar3 == (int *)0x0) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e32c;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  }
  piVar3[5] = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  fVar6 = (float)piVar3[3];
  fVar7 = (float)piVar3[4];
  fVar5 = (float)piVar3[1];
  if ((float)piVar3[1] <= fVar6) {
    fVar5 = fVar6;
  }
  piVar3[1] = (int)fVar5;
  if (fVar7 <= fVar5) {
    fVar4 = (float)piVar3[5];
  }
  else {
    iVar1 = *piVar3;
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        fVar4 = ((fVar5 - fVar6) * ((float)piVar3[5] + -1.0)) / (fVar7 - fVar6);
        fVar5 = 1.0;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        fVar7 = (fVar7 * (1.0 - (float)piVar3[5])) / (fVar7 - fVar6);
        fVar4 = 1.0 - fVar7;
        fVar5 = (fVar6 * fVar7) / fVar5;
      }
      fVar4 = fVar4 + fVar5;
    }
    else if (iVar1 == 2) {
      fVar4 = (float)piVar3[5];
      _powf(fVar4,(fVar5 - fVar6) / (fVar7 - fVar6));
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      fVar4 = (float)piVar3[5] + -1.0 + (float)piVar3[5] + -1.0;
      ___exp10f();
      fVar5 = ((fVar5 - fVar6) * (fVar4 + -1.0)) / (fVar7 - fVar6) + 1.0;
      _log10f();
      fVar4 = fVar5 * 0.5 + 1.0;
    }
  }
  piVar3[2] = (int)fVar4;
  return;
}



/* Entry: 10a64e334; end: 10a64e43f;  */

int * FUN_10a64e334(int *param_1,int param_2)

{
  undefined1 **ppuVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *apuStack_90 [9];
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x82) != 0) {
    return param_1;
  }
  piVar2 = (int *)&UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(piVar2 + 6) != 0) {
    return piVar2;
  }
  uStack_18 = 0x10a64e358;
  piVar2 = (int *)&UNK_10f66aac7;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a00946c();
  if (*(long *)(piVar2 + 0x82) != 0) {
    *(char *)(*(long *)(piVar2 + 0x82) + 0x5882) = (char)param_2;
    return piVar2;
  }
  uStack_28 = 0x10a64e37c;
  piVar2 = (int *)&UNK_10f66aac7;
  puStack_30 = (undefined1 *)&puStack_20;
  FUN_10a00946c();
  if (*(long *)(piVar2 + 6) == 0) {
    uStack_38 = 0x10a64e3a4;
    puVar5 = &UNK_10f66aac7;
    puStack_40 = (undefined1 *)&puStack_30;
    FUN_10a00946c();
    if (*(long *)(puVar5 + 0x208) != 0) {
      return (int *)(ulong)*(byte *)(*(long *)(puVar5 + 0x208) + 0x5882);
    }
    uStack_48 = 0x10a64e3cc;
    puVar5 = &UNK_10f66aac7;
    apuStack_90[8] = (undefined1 *)&puStack_40;
    FUN_10a00946c();
    if (*(long *)(puVar5 + 0x18) == 0) {
      apuStack_90[7] = (undefined1 *)0x10a64e3f4;
      puVar5 = &UNK_10f66aac7;
      pcVar6 = (code *)0x10a64e41c;
      apuStack_90[6] = (undefined1 *)(apuStack_90 + 8);
      FUN_10a00946c();
      ppuVar1 = apuStack_90 + 6;
      for (; lVar3 = *(long *)(puVar5 + 0x208), lVar3 == 0; puVar5 = puVar5 + -0x1f0) {
        *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar1;
        *(code **)((long)ppuVar1 + -8) = pcVar6;
        puVar5 = &UNK_10f66aac7;
        pcVar6 = FUN_10a64e440;
        FUN_10a00946c();
        ppuVar1 = (undefined1 **)((long)ppuVar1 + -0x10);
      }
      piVar4 = (int *)(lVar3 + 0x18);
      *piVar4 = param_2;
      *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_d9;
      *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_d8;
      *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
      *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar1;
      *(code **)((long)ppuVar1 + -8) = pcVar6;
      fVar9 = *(float *)(lVar3 + 0x24);
      fVar7 = *(float *)(lVar3 + 0x1c);
      piVar2 = piVar4;
      _sinf();
      fVar9 = fVar9 * fVar7;
      *(float *)(lVar3 + 0x20) = fVar9;
      if (*piVar4 == 1) {
        fVar7 = 3.3702806e+12;
        fVar9 = fVar9 * 0.7853982;
        ___sincosf_stret();
        *(float *)(lVar3 + 0x28) = (fVar7 - fVar9) * 0.70710677;
        fVar9 = (fVar7 + fVar9) * 0.70710677;
      }
      else {
        if (*piVar4 != 0) {
          return piVar2;
        }
        uVar8 = NEON_fminnm(1.0 - fVar9,0x3f800000);
        *(undefined4 *)(lVar3 + 0x28) = uVar8;
        fVar9 = (float)NEON_fminnm(fVar9 + 1.0,0x3f800000);
      }
      *(float *)(lVar3 + 0x2c) = fVar9;
      return piVar2;
    }
    return (int *)(ulong)*(byte *)(*(long *)(puVar5 + 0x18) + 0x5882);
  }
  *(char *)(*(long *)(piVar2 + 6) + 0x5882) = (char)param_2;
  return piVar2;
}



/* Entry: 10a64e440; end: 10a64e447;  */

void FUN_10a64e440(undefined *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while (lVar3 = *(long *)(param_1 + 0x18), lVar3 == 0) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_1 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e440;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  }
  *(int *)(lVar3 + 0x18) = param_2;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  fVar6 = *(float *)(lVar3 + 0x24);
  fVar4 = *(float *)(lVar3 + 0x1c);
  _sinf();
  fVar6 = fVar6 * fVar4;
  *(float *)(lVar3 + 0x20) = fVar6;
  iVar1 = *(int *)(lVar3 + 0x18);
  if (iVar1 == 1) {
    fVar4 = 3.3702806e+12;
    fVar6 = fVar6 * 0.7853982;
    ___sincosf_stret();
    *(float *)(lVar3 + 0x28) = (fVar4 - fVar6) * 0.70710677;
    fVar6 = (fVar4 + fVar6) * 0.70710677;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    uVar5 = NEON_fminnm(1.0 - fVar6,0x3f800000);
    *(undefined4 *)(lVar3 + 0x28) = uVar5;
    fVar6 = (float)NEON_fminnm(fVar6 + 1.0,0x3f800000);
  }
  *(float *)(lVar3 + 0x2c) = fVar6;
  return;
}



/* Entry: 10a64e448; end: 10a64e4b7;  */

int * FUN_10a64e448(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  code *pcVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *apuStack_50 [8];
  
  if (*(long *)(param_2 + 0x208) != 0) {
    return (int *)(ulong)*(uint *)(*(long *)(param_2 + 0x208) + 0x18);
  }
  puVar3 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(puVar3 + 0x18) == 0) {
    apuStack_50[7] = (undefined1 *)0x10a64e46c;
    puVar3 = &UNK_10f66aac7;
    pcVar6 = (code *)0x10a64e490;
    apuStack_50[6] = &stack0xfffffffffffffff0;
    FUN_10a00946c();
    ppuVar2 = apuStack_50 + 6;
    for (; lVar5 = *(long *)(puVar3 + 0x208), lVar5 == 0; puVar3 = puVar3 + -0x1f0) {
      *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
      *(code **)((long)ppuVar2 + -8) = pcVar6;
      puVar3 = &UNK_10f66aac7;
      pcVar6 = FUN_10a64e4b8;
      FUN_10a00946c();
      ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x10);
    }
    *(int *)(lVar5 + 0x24) = (int)param_1;
    *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_d8;
    *(undefined8 *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
    *(code **)((long)ppuVar2 + -8) = pcVar6;
    fVar9 = *(float *)(lVar5 + 0x24);
    fVar7 = *(float *)(lVar5 + 0x1c);
    piVar4 = (int *)(lVar5 + 0x18);
    _sinf();
    fVar9 = fVar9 * fVar7;
    *(float *)(lVar5 + 0x20) = fVar9;
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 == 1) {
      fVar7 = 3.3702806e+12;
      fVar9 = fVar9 * 0.7853982;
      ___sincosf_stret();
      *(float *)(lVar5 + 0x28) = (fVar7 - fVar9) * 0.70710677;
      fVar9 = (fVar7 + fVar9) * 0.70710677;
    }
    else {
      if (iVar1 != 0) {
        return piVar4;
      }
      uVar8 = NEON_fminnm(1.0 - fVar9,0x3f800000);
      *(undefined4 *)(lVar5 + 0x28) = uVar8;
      fVar9 = (float)NEON_fminnm(fVar9 + 1.0,0x3f800000);
    }
    *(float *)(lVar5 + 0x2c) = fVar9;
    return piVar4;
  }
  return (int *)(ulong)*(uint *)(*(long *)(puVar3 + 0x18) + 0x18);
}



/* Entry: 10a64e4b8; end: 10a64e4bf;  */

void FUN_10a64e4b8(undefined8 param_1,undefined *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while (lVar2 = *(long *)(param_2 + 0x18), lVar2 == 0) {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e4b8;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  }
  *(int *)(lVar2 + 0x24) = (int)param_1;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  fVar5 = *(float *)(lVar2 + 0x24);
  fVar3 = *(float *)(lVar2 + 0x1c);
  _sinf();
  fVar5 = fVar5 * fVar3;
  *(float *)(lVar2 + 0x20) = fVar5;
  if (*(int *)(lVar2 + 0x18) == 1) {
    fVar3 = 3.3702806e+12;
    fVar5 = fVar5 * 0.7853982;
    ___sincosf_stret();
    *(float *)(lVar2 + 0x28) = (fVar3 - fVar5) * 0.70710677;
    fVar5 = (fVar3 + fVar5) * 0.70710677;
  }
  else {
    if (*(int *)(lVar2 + 0x18) != 0) {
      return;
    }
    uVar4 = NEON_fminnm(1.0 - fVar5,0x3f800000);
    *(undefined4 *)(lVar2 + 0x28) = uVar4;
    fVar5 = (float)NEON_fminnm(fVar5 + 1.0,0x3f800000);
  }
  *(float *)(lVar2 + 0x2c) = fVar5;
  return;
}



/* Entry: 10a64e4c0; end: 10a64e5a7;  */

undefined * FUN_10a64e4c0(float param_1,undefined *param_2,undefined1 param_3)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined8 unaff_x19;
  long lVar3;
  undefined8 unaff_x20;
  undefined1 **ppuVar4;
  code *pcVar5;
  float fVar6;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_2 + 0x208) != 0) {
    return param_2;
  }
  puVar2 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(puVar2 + 0x18) != 0) {
    return puVar2;
  }
  uStack_18 = 0x10a64e4e4;
  puVar2 = &UNK_10f66aac7;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a00946c();
  if (*(long *)(puVar2 + 0x208) != 0) {
    *(undefined1 *)(*(long *)(puVar2 + 0x208) + 0x5883) = param_3;
    return puVar2;
  }
  uStack_28 = 0x10a64e508;
  puVar2 = &UNK_10f66aac7;
  puStack_30 = (undefined1 *)&puStack_20;
  FUN_10a00946c();
  if (*(long *)(puVar2 + 0x18) != 0) {
    *(undefined1 *)(*(long *)(puVar2 + 0x18) + 0x5883) = param_3;
    return puVar2;
  }
  uStack_38 = 0x10a64e530;
  puVar2 = &UNK_10f66aac7;
  puStack_40 = (undefined1 *)&puStack_30;
  FUN_10a00946c();
  if (*(long *)(puVar2 + 0x208) != 0) {
    return (undefined *)(ulong)*(byte *)(*(long *)(puVar2 + 0x208) + 0x5883);
  }
  uStack_48 = 0x10a64e558;
  puVar2 = &UNK_10f66aac7;
  puStack_50 = (undefined1 *)&puStack_40;
  FUN_10a00946c();
  if (*(long *)(puVar2 + 0x18) != 0) {
    return (undefined *)(ulong)*(byte *)(*(long *)(puVar2 + 0x18) + 0x5883);
  }
  ppuVar4 = &puStack_60;
  uStack_58 = 0x10a64e580;
  puVar2 = &UNK_10f66aac7;
  pcVar5 = FUN_10a64e5a8;
  puStack_60 = (undefined1 *)&puStack_50;
  FUN_10a00946c();
  ppuVar1 = &puStack_60;
  while( true ) {
    *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_d8;
    *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar4;
    *(code **)((long)ppuVar1 + -8) = pcVar5;
    ppuVar4 = (undefined1 **)((long)ppuVar1 + -0x10);
    lVar3 = *(long *)(puVar2 + 0x208);
    if (lVar3 != 0) break;
    puVar2 = &UNK_10f66aac7;
    pcVar5 = FUN_10a64e608;
    FUN_10a00946c();
    puVar2 = puVar2 + -0x1f0;
    unaff_x19 = 0;
    ppuVar1 = (undefined1 **)((long)ppuVar1 + -0x30);
  }
  *(float *)(lVar3 + 0x34) = param_1;
  fVar6 = *(float *)(lVar3 + 0x3c);
  _cosf();
  fVar6 = (fVar6 * param_1 + 1.0) / (param_1 + 1.0);
  _powf(fVar6,*(undefined4 *)(lVar3 + 0x38));
  *(float *)(lVar3 + 0x30) = fVar6;
  return puVar2;
}



/* Entry: 10a64e5a8; end: 10a64e607;  */

void FUN_10a64e5a8(float param_1,undefined *param_2)

{
  undefined8 unaff_x19;
  long lVar1;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar1 = *(long *)(param_2 + 0x208);
    if (lVar1 != 0) break;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e608;
    FUN_10a00946c();
    param_2 = param_2 + -0x1f0;
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  *(float *)(lVar1 + 0x34) = param_1;
  fVar2 = *(float *)(lVar1 + 0x3c);
  _cosf();
  fVar2 = (fVar2 * param_1 + 1.0) / (param_1 + 1.0);
  _powf(fVar2,*(undefined4 *)(lVar1 + 0x38));
  *(float *)(lVar1 + 0x30) = fVar2;
  return;
}



/* Entry: 10a64e608; end: 10a64e60f;  */

void FUN_10a64e608(float param_1,undefined *param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar2;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 != 0) break;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e608;
    FUN_10a00946c();
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  *(float *)(lVar1 + 0x34) = param_1;
  fVar2 = *(float *)(lVar1 + 0x3c);
  _cosf();
  fVar2 = (fVar2 * param_1 + 1.0) / (param_1 + 1.0);
  _powf(fVar2,*(undefined4 *)(lVar1 + 0x38));
  *(float *)(lVar1 + 0x30) = fVar2;
  return;
}



/* Entry: 10a64e610; end: 10a64e657;  */

ulong FUN_10a64e610(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined8 unaff_x19;
  long lVar3;
  undefined8 unaff_x20;
  undefined1 **ppuVar4;
  code *pcVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 unaff_d8;
  float fVar10;
  undefined8 unaff_d9;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  uVar8 = (undefined4)((ulong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  if (*(long *)(param_2 + 0x208) != 0) {
    return (ulong)*(uint *)(*(long *)(param_2 + 0x208) + 0x34);
  }
  puVar2 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(puVar2 + 0x18) != 0) {
    return (ulong)*(uint *)(*(long *)(puVar2 + 0x18) + 0x34);
  }
  ppuVar4 = &puStack_20;
  uStack_18 = 0x10a64e634;
  puVar2 = &UNK_10f66aac7;
  pcVar5 = FUN_10a64e658;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a00946c();
  ppuVar1 = &puStack_20;
  while( true ) {
    *(undefined8 *)((long)ppuVar1 + -0x30) = unaff_d9;
    *(undefined8 *)((long)ppuVar1 + -0x28) = unaff_d8;
    *(undefined8 *)((long)ppuVar1 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar1 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar4;
    *(code **)((long)ppuVar1 + -8) = pcVar5;
    ppuVar4 = (undefined1 **)((long)ppuVar1 + -0x10);
    lVar3 = *(long *)(puVar2 + 0x208);
    if (lVar3 != 0) break;
    puVar2 = &UNK_10f66aac7;
    pcVar5 = FUN_10a64e6bc;
    FUN_10a00946c();
    puVar2 = puVar2 + -0x1f0;
    unaff_x19 = 0;
    ppuVar1 = (undefined1 **)((long)ppuVar1 + -0x30);
  }
  *(undefined4 *)(lVar3 + 0x38) = uVar6;
  fVar10 = *(float *)(lVar3 + 0x34);
  fVar7 = *(float *)(lVar3 + 0x3c);
  _cosf();
  fVar7 = (fVar7 * fVar10 + 1.0) / (fVar10 + 1.0);
  uVar9 = 0;
  _powf(fVar7,CONCAT44(uVar8,uVar6));
  *(float *)(lVar3 + 0x30) = fVar7;
  return CONCAT44(uVar9,fVar7);
}



/* Entry: 10a64e658; end: 10a64e6bb;  */

void FUN_10a64e658(undefined8 param_1,undefined *param_2)

{
  undefined8 unaff_x19;
  long lVar1;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 unaff_d8;
  float fVar5;
  undefined8 unaff_d9;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar1 = *(long *)(param_2 + 0x208);
    if (lVar1 != 0) break;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e6bc;
    FUN_10a00946c();
    param_2 = param_2 + -0x1f0;
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  *(undefined4 *)(lVar1 + 0x38) = uVar3;
  fVar5 = *(float *)(lVar1 + 0x34);
  fVar2 = *(float *)(lVar1 + 0x3c);
  _cosf();
  fVar2 = (fVar2 * fVar5 + 1.0) / (fVar5 + 1.0);
  _powf(fVar2,CONCAT44(uVar4,uVar3));
  *(float *)(lVar1 + 0x30) = fVar2;
  return;
}



/* Entry: 10a64e6bc; end: 10a64e6c3;  */

void FUN_10a64e6bc(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 unaff_d8;
  float fVar5;
  undefined8 unaff_d9;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 != 0) break;
    param_2 = &UNK_10f66aac7;
    unaff_x30 = FUN_10a64e6bc;
    FUN_10a00946c();
    unaff_x19 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  *(undefined4 *)(lVar1 + 0x38) = uVar3;
  fVar5 = *(float *)(lVar1 + 0x34);
  fVar2 = *(float *)(lVar1 + 0x3c);
  _cosf();
  fVar2 = (fVar2 * fVar5 + 1.0) / (fVar5 + 1.0);
  _powf(fVar2,CONCAT44(uVar4,uVar3));
  *(float *)(lVar1 + 0x30) = fVar2;
  return;
}



/* Entry: 10a64e6c4; end: 10a64e743;  */

undefined * FUN_10a64e6c4(float param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (*(long *)(param_2 + 0x208) != 0) {
    return param_2;
  }
  puVar1 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x18) != 0) {
    return puVar1;
  }
  puVar1 = &UNK_10f66aac7;
  FUN_10a00946c();
  if (*(long *)(puVar1 + 0x208) != 0) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    uVar2 = NEON_fminnm(param_1,0x42c80000);
    *(undefined4 *)(*(long *)(puVar1 + 0x208) + 0x50) = uVar2;
    return puVar1;
  }
  FUN_10a00946c(&UNK_10f66aac7);
  return &UNK_10f6636c5;
}



/* Entry: 10a64e744; end: 10a64e803;  */

undefined1  [16] FUN_10a64e744(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f6636c5;
  return auVar1;
}



/* Entry: 10a64e804; end: 10a64eb37;  */

void FUN_10a64e804(ulong param_1)

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
  ulong uVar10;
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
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6636c5,0x11);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c052d8;
  pppuVar2 = (undefined8 ***)&UNK_10f66a659;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c052d8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64eb18;
    FUN_10a054dac(param_1,&UNK_10f65bc60,FUN_10a671008,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64eb18;
    FUN_10a054dac(param_1,&UNK_10f65bc75,FUN_10a67114c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64eb18;
    FUN_10a054dac(param_1,&UNK_10f66ab08,FUN_10a67121c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64eb18;
    FUN_10a054dac(param_1,&UNK_10f66ab26,FUN_10a6713b0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64eb18;
    FUN_10a054dac(param_1,&UNK_10f66ab46,FUN_10a671468,2,*(undefined8 *)(param_1 + 0x40));
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
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6636c5,0x11);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a64eb18:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a64eb1c);
  (*pcVar6)();
}



/* Entry: 10a64eb38; end: 10a64ec17;  */

undefined8 * FUN_10a64eb38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0x4a] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x4d) = 0x100;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110c02cf0,param_2,param_3);
  FUN_10a0040d0(puVar1 + 0x3e,&PTR_PTR_110c02d00);
  *param_1 = &PTR_FUN_110c029b8;
  param_1[2] = &PTR_DAT_110c02ae8;
  param_1[7] = &PTR_DAT_110c02b40;
  param_1[0xd] = &PTR_DAT_110c02b60;
  param_1[0x4a] = &PTR_DAT_110c02cb0;
  param_1[0x16] = &PTR_DAT_110c02bd0;
  param_1[0x17] = &PTR_DAT_110c02c00;
  param_1[0x3e] = &PTR_DAT_110c02c38;
  *(undefined2 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x22c) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  return param_1;
}



/* Entry: 10a64ec18; end: 10a64ecaf;  */

void FUN_10a64ec18(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c029b8;
  param_1[2] = &PTR_DAT_110c02ae8;
  param_1[7] = &PTR_DAT_110c02b40;
  param_1[0xd] = &PTR_DAT_110c02b60;
  param_1[0x4a] = &PTR_DAT_110c02cb0;
  param_1[0x16] = &PTR_DAT_110c02bd0;
  param_1[0x17] = &PTR_DAT_110c02c00;
  param_1[0x3e] = &PTR_DAT_110c02c38;
  if (param_1[0x49] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[0x3e] = &PTR_DAT_110c05228;
  param_1[0x4a] = &PTR_FUN_110c052a0;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c050a8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4a] = &PTR_DAT_110c051d8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a64ecb0; end: 10a64ecf3;  */

void FUN_10a64ecb0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c029b8;
  param_1[2] = &PTR_DAT_110c02ae8;
  param_1[7] = &PTR_DAT_110c02b40;
  param_1[0xd] = &PTR_DAT_110c02b60;
  param_1[0x4a] = &PTR_DAT_110c02cb0;
  param_1[0x16] = &PTR_DAT_110c02bd0;
  param_1[0x17] = &PTR_DAT_110c02c00;
  param_1[0x3e] = &PTR_DAT_110c02c38;
  if (param_1[0x49] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[0x3e] = &PTR_DAT_110c05228;
  param_1[0x4a] = &PTR_FUN_110c052a0;
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010a004e04(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c050a8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4a] = &PTR_DAT_110c051d8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a64ecf4; end: 10a64ed97;  */

void FUN_10a64ecf4(void)

{
  FUN_10a64ec18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a64ed98; end: 10a64efc3;  */

void FUN_10a64ed98(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a64ec18((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a64efc4; end: 10a64efd3;  */

void FUN_10a64efc4(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined8 uStack_94;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar5 = *(long *)(param_1 + 0x100);
  lVar3 = *(long *)(*(long *)(*(long *)(lVar5 + 0x120) + 0x8c0) + 0x18);
  lVar4 = *(long *)(lVar3 + 0xd0);
  if (lVar4 != 0) {
    uStack_58 = *(undefined8 *)(lVar4 + 0x10);
    uStack_60 = *(undefined8 *)(lVar4 + 8);
    uStack_48 = *(undefined8 *)(lVar4 + 0x20);
    uStack_50 = *(undefined8 *)(lVar4 + 0x18);
    uStack_38 = *(undefined8 *)(lVar4 + 0x30);
    uStack_40 = *(undefined8 *)(lVar4 + 0x28);
    uStack_28 = *(undefined8 *)(lVar4 + 0x40);
    uStack_30 = *(undefined8 *)(lVar4 + 0x38);
    if (*(int *)(lVar3 + 0x198) == 0) {
      uStack_94 = 0;
      fStack_9c = 0.0;
      fStack_98 = 0.0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_6c = 0;
      uStack_74 = 0;
      fStack_a0 = 1.0;
      fStack_8c = -1.0;
      uStack_78 = 0x3f800000;
      uStack_64 = 0x3f800000;
      func_0x000109519fd0(auStack_120,&fStack_a0,&uStack_60);
      func_0x000109519fd0(&uStack_e0,auStack_120,&fStack_a0);
      uStack_58 = uStack_d8;
      uStack_60 = uStack_e0;
      uStack_48 = uStack_c8;
      uStack_50 = uStack_d0;
      uStack_38 = uStack_b8;
      uStack_40 = uStack_c0;
      uStack_28 = uStack_a8;
      uStack_30 = uStack_b0;
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x140);
    fStack_98 = (float)uStack_28 * 100.0;
    fStack_a0 = (float)uStack_30 * 100.0;
    fStack_9c = (float)((ulong)uStack_30 >> 0x20) * 100.0;
    FUN_10a3e3894(uVar6,&fStack_a0);
    fVar12 = ((float)uStack_60 - uStack_50._4_4_) - (float)uStack_38;
    fVar14 = (uStack_50._4_4_ - (float)uStack_60) - (float)uStack_38;
    fVar16 = ((float)uStack_38 - (float)uStack_60) - uStack_50._4_4_;
    fVar7 = (float)uStack_60 + uStack_50._4_4_ + (float)uStack_38;
    fVar17 = fVar12;
    if (fVar12 <= fVar7) {
      fVar17 = fVar7;
    }
    bVar1 = 2;
    if (fVar14 <= fVar17) {
      fVar14 = fVar17;
      bVar1 = fVar7 < fVar12;
    }
    bVar2 = 3;
    if (fVar16 <= fVar14) {
      fVar16 = fVar14;
      bVar2 = bVar1;
    }
    fVar8 = SQRT(fVar16 + 1.0) * 0.5;
    fVar10 = 0.25 / fVar8;
    fVar12 = ((float)uStack_40 - (float)uStack_58) * fVar10;
    fVar13 = (uStack_60._4_4_ + (float)uStack_50) * fVar10;
    fVar15 = ((float)uStack_48 + uStack_40._4_4_) * fVar10;
    fVar7 = (uStack_60._4_4_ - (float)uStack_50) * fVar10;
    fVar9 = ((float)uStack_58 + (float)uStack_40) * fVar10;
    fVar17 = fVar12;
    fStack_8c = fVar15;
    fVar14 = fVar8;
    fVar16 = fVar13;
    if (bVar2 != 2) {
      fVar17 = fVar7;
      fStack_8c = fVar8;
      fVar14 = fVar15;
      fVar16 = fVar9;
    }
    fVar10 = ((float)uStack_48 - uStack_40._4_4_) * fVar10;
    fVar15 = fVar8;
    if (bVar2 != 0) {
      fVar15 = fVar10;
      fVar7 = fVar9;
      fVar12 = fVar13;
      fVar10 = fVar8;
    }
    if (bVar2 < 2) {
      fVar17 = fVar15;
      fStack_8c = fVar7;
      fVar14 = fVar12;
      fVar16 = fVar10;
    }
    uVar11 = NEON_fmov(0x3f800000,4);
    fStack_a0 = (float)uVar11;
    fStack_9c = (float)((ulong)uVar11 >> 0x20);
    fStack_98 = 1.0;
    uStack_94 = CONCAT44(fVar14,fVar16);
    uStack_88 = CONCAT44(uStack_88._4_4_,fVar17);
    FUN_10a3e38dc(uVar6,&fStack_a0);
  }
  return;
}



/* Entry: 10a64efd4; end: 10a64f06b;  */

void FUN_10a64efd4(long param_1,long param_2)

{
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  int iStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  uStack_24 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0x219) == '\x01') {
    iStack_34 = (uint)*(byte *)(param_1 + 0x218) << 0x18;
  }
  FUN_10a4a4bbc(param_1 + 0x220,&lStack_58);
  FUN_10a051998(param_2 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a64f06c; end: 10a64f073;  */

void FUN_10a64f06c(long param_1,long param_2)

{
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  int iStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  uStack_38 = 0;
  uStack_24 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
  lStack_58 = 0;
  uStack_40 = 0;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 0x29) == '\x01') {
    iStack_34 = (uint)*(byte *)(param_1 + 0x28) << 0x18;
  }
  FUN_10a4a4bbc(param_1 + 0x30,&lStack_58);
  FUN_10a051998(param_2 + 0x138,&lStack_58);
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a64f074; end: 10a64f2d3;  */

void FUN_10a64f074(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a57b538(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110c06f88;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a64f1d8;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a64f1d8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  param_1[1] = (long)plVar7;
  *param_1 = lVar10;
  return;
}



/* Entry: 10a64f2d4; end: 10a64f34f;  */

void FUN_10a64f2d4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = uVar6;
  *(undefined8 *)(param_1 + 0x240) = uVar5;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(lVar4);
    return;
  }
  return;
}



/* Entry: 10a64f350; end: 10a64f3cb;  */

void FUN_10a64f350(long param_1)

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



/* Entry: 10a64f3cc; end: 10a64f497;  */

void FUN_10a64f3cc(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x208);
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



/* Entry: 10a64f498; end: 10a65001b;  */

void FUN_10a64f498(ulong param_1)

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
  undefined8 **appuStack_d8 [2];
  char cStack_c1;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000109887da8(appuStack_d8,&UNK_10f663492,0xe);
  pppuVar1 = (undefined8 ***)appuStack_d8[0];
  if (-1 < cStack_c1) {
    pppuVar1 = appuStack_d8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c05938;
  pppuVar2 = (undefined8 ***)&UNK_10f66a659;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_80 = 0;
  puStack_88 = (undefined *)0x0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_b0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_b0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_c0 = &PTR_DAT_110c05938;
    uStack_b8 = 0;
    ppuStack_b0 = (undefined8 **)&PTR_DAT_110bd9df0;
    uStack_a8 = 0;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_c0,&ppuStack_b0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(appuStack_d8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64fffc;
    FUN_10a054dac(param_1,&UNK_10f66ab61,FUN_10a67161c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64fffc;
    FUN_10a054dac(param_1,&UNK_10f66ab70,FUN_10a671c60,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64fffc;
    FUN_10a054dac(param_1,&UNK_10f66ab82,FUN_10a6725b0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64fffc;
    FUN_10a054dac(param_1,&UNK_10f66ab95,FUN_10a6728f4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,4,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a64fffc;
    FUN_10a054dac(param_1,&UNK_10f66aba5,FUN_10a672a3c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"text",FUN_10a672b44,FUN_10a672bf4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644f55,FUN_10a672eec,FUN_10a672fd0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"font",FUN_10a673108,FUN_10a673238);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ab55,FUN_10a6733a0,FUN_10a673468);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"italic",FUN_10a6735a4,FUN_10a673668);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f478ae0,FUN_10a6737c0,FUN_10a673870);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abb6,FUN_10a673928,FUN_10a6739e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abc5,FUN_10a673b20,FUN_10a673bd8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ab5c,FUN_10a673d40,FUN_10a673dfc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abd4,FUN_10a673f08,FUN_10a673fc4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abe5,FUN_10a6740c0,FUN_10a67417c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66abf8,FUN_10a674278,FUN_10a674334);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac01,FUN_10a67461c,FUN_10a67475c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac14,FUN_10a674958,FUN_10a674a98);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac24,FUN_10a674c94,FUN_10a674dd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac37,FUN_10a674fd0,FUN_10a675088);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2db9e8,FUN_10a675148,FUN_10a675204);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac41,FUN_10a6752f4,FUN_10a6753b0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f27c,FUN_10a6754a0,FUN_10a675558);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c86,FUN_10a675610,FUN_10a6756c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f683c94,FUN_10a675780,FUN_10a675850);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5aa,FUN_10a675918,FUN_10a6759d4);
  }
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x100000064;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&UNK_10f65823f;
  puStack_88 = &UNK_10f66a659;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0x16c;
  uStack_60._0_4_ = 0xffffffff;
  uStack_58 = 0;
  uStack_50 = 0;
  uVar7 = param_1;
  FUN_10a675a9c(param_1,&ppuStack_b0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b0 = (undefined8 **)&DAT_10f65824a;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x200000064;
  puStack_88 = &UNK_10f66ac4d;
  uStack_80 = 0x30;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x16c;
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_10a675a9c();
  FUN_10a0051e8();
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65828c,FUN_10a675cc8,FUN_10a675d80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66ac7e,FUN_10a675e40,FUN_10a675efc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66ac95,FUN_10a675fe0,FUN_10a676098);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f66ac9e,FUN_10a676170,FUN_10a676228);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66acb1,FUN_10a6762e8,FUN_10a6763a0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66acbe,FUN_10a6766d0,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c07c90,FUN_10a676788);
    FUN_10a0605c4(param_1,&UNK_10f66accf,FUN_10a6774b4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c07c90,FUN_10a676788);
    FUN_10a0605c4(param_1,&UNK_10f66ace0,FUN_10a677610,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_a8 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_b0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_88 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_a0 = *(undefined8 *)(lVar3 + -0x58);
    uStack_78 = *(undefined8 *)(lVar3 + -0x30);
    uStack_80 = *(undefined8 *)(lVar3 + -0x38);
    uStack_68 = *(undefined8 *)(lVar3 + -0x20);
    uStack_70 = *(undefined8 *)(lVar3 + -0x28);
    uStack_50 = *(undefined8 *)(lVar3 + -8);
    uStack_58 = *(undefined8 *)(lVar3 + -0x10);
    uStack_60 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_98._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_98._4_4_;
    uStack_90._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_90._4_4_;
    uVar7 = param_1;
    uStack_98 = uVar9;
    uStack_90 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_60 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_b0,param_1 + 0x1b8,&UNK_10f663492,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a64fffc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a650000);
  (*pcVar6)();
}



/* Entry: 10a65001c; end: 10a65004b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a65001c(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x6c7)) {
    uVar3 = *(undefined8 *)(param_2 + 0x6b0);
    param_1[1] = *(undefined8 *)(param_2 + 0x6b8);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x6c0);
    return;
  }
  lVar1 = *(long *)(param_2 + 0x6b0);
  uVar2 = *(ulong *)(param_2 + 0x6b8);
  if (0x16 < uVar2) {
    if (uVar2 < 0x7ffffffffffffff7) {
      lVar1 = 0x19;
      if ((uVar2 | 7) != 0x17) {
        lVar1 = (uVar2 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar1);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar1,uVar2 + 1);
  return;
}



/* Entry: 10a65004c; end: 10a650103;  */

void FUN_10a65004c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x6c7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x6b0));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x6c0) = param_2[2];
  *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  *(undefined8 *)(param_1 + 0x6b0) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10a650104; end: 10a650b2b;  */

undefined8 * FUN_10a650104(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  long *plStack_c8;
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
  undefined **ppuStack_68;
  
  param_1[0xf6] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xf9) = 0x100;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  puVar6 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110c034f0,param_2,param_3,0x15);
  *puVar6 = &PTR_DAT_110c030a8;
  puVar6[2] = &PTR_DAT_110c032f0;
  puVar6[7] = &PTR_FUN_110c03348;
  puVar6[0xd] = &PTR_FUN_110c03368;
  puVar6[0xf6] = &PTR_FUN_110c034b0;
  puVar6[0x16] = &PTR_FUN_110c033d8;
  puVar6[0x17] = &PTR_FUN_110c03408;
  puVar6[0x9e] = &PTR_FUN_110c03438;
  puVar6[0xb0] = &PTR_DAT_110c03458;
  FUN_10a9dbf98(puVar6 + 0x9e,param_1);
  param_1[0x9e] = &PTR_FUN_110c07010;
  FUN_10a38da90(param_1 + 0xb0);
  *param_1 = &PTR_DAT_110c030a8;
  param_1[2] = &PTR_DAT_110c032f0;
  param_1[7] = &PTR_FUN_110c03348;
  param_1[0xd] = &PTR_FUN_110c03368;
  param_1[0xf6] = &PTR_FUN_110c034b0;
  param_1[0x16] = &PTR_FUN_110c033d8;
  param_1[0x17] = &PTR_FUN_110c03408;
  param_1[0x9e] = &PTR_FUN_110c03438;
  param_1[0xb0] = &PTR_DAT_110c03458;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 5;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0x3f800000;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  FUN_10a66cfac(param_1 + 0xbf);
  func_0x000107c2b054(param_1 + 0xce,&UNK_10f66a659);
  *(undefined4 *)(param_1 + 0xd3) = 0;
  if ((bRam00000001137eb712 & 1) == 0) {
    bRam00000001137eb712 = 1;
  }
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)((long)param_1 + 0x6a4) = 0;
  *(undefined2 *)(param_1 + 0xd5) = 0;
  *(undefined2 *)((long)param_1 + 0x6c7) = 7;
  *(undefined4 *)(param_1 + 0xd6) = 0x75676552;
  *(undefined4 *)((long)param_1 + 0x6b3) = 0x72616c75;
  *(undefined1 *)((long)param_1 + 0x6b7) = 0;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  if ((bRam00000001137eb710 & 1) == 0) {
    bRam00000001137eb710 = 1;
  }
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xe0] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  param_1[0xe4] = 0x42400000;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  func_0x00010a677724(param_1 + 0xe6);
  FUN_10a677838(param_1 + 0xe8);
  FUN_10a677998(param_1 + 0xea);
  FUN_10a677af4(param_1 + 0xec);
  *(undefined1 *)(param_1 + 0xee) = 0;
  *(undefined8 *)((long)param_1 + 0x774) = 0x3f80000000000000;
  *(undefined2 *)((long)param_1 + 0x77c) = 0;
  *(undefined4 *)((long)param_1 + 0x77e) = 0x1010101;
  *(undefined1 *)((long)param_1 + 0x782) = 0x10;
  puVar6 = (undefined8 *)0x50;
  __Znwm();
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_110bcfba8;
  puVar6[5] = 0;
  puVar6[4] = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  puVar6[3] = &PTR_FUN_110c6a8d8;
  puVar6[6] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar6 + 0x44) = 0x4010000040f00000;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0xc0100000c0f00000;
  param_1[0xf1] = puVar6 + 3;
  param_1[0xf2] = puVar6;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  plVar1 = param_1 + 0xf4;
  param_1[0xf5] = 0;
  param_1[0xf4] = 0;
  if ((bRam00000001137eb714 & 1) == 0) {
    bRam00000001137eb714 = 1;
  }
  plVar7 = (long *)0x6f0;
  __Znwm();
  plVar7[2] = 0;
  plVar10 = plVar7 + 1;
  *plVar10 = 0;
  *plVar7 = (long)&PTR_FUN_110c07190;
  _bzero(plVar7 + 4,0x6d0);
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x14] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[5] = (long)&UNK_10e52b660;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  *(undefined2 *)(plVar7 + 9) = 0;
  plVar7[0x18] = (long)&UNK_10e52b660;
  plVar7[0x19] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1c] = (long)&UNK_10e52b660;
  plVar11 = plVar7 + 3;
  *plVar11 = (long)&PTR_DAT_110c071e0;
  plVar7[0x2d] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x29] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x26] = 0;
  plVar7[0x25] = 0;
  plVar7[0x28] = 0;
  plVar7[0x27] = 0;
  plVar7[0x22] = 0;
  plVar7[0x21] = 0;
  plVar7[0x24] = 0;
  plVar7[0x23] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  *(undefined4 *)((long)plVar7 + 0xff) = 0;
  plVar7[0x1d] = 0;
  plVar7[0x15] = (long)&PTR_DAT_110c07210;
  func_0x000107c2b054(plVar7 + 0x2f,&UNK_10f66a659);
  plVar7[0x32] = 0;
  *(undefined4 *)(plVar7 + 0x33) = 0;
  *(undefined1 *)((long)plVar7 + 0x1bc) = 0;
  *(undefined2 *)(plVar7 + 0x38) = 0;
  *(undefined4 *)((long)plVar7 + 0x1e4) = 0;
  plVar7[0x3d] = 0;
  plVar7[0x34] = 0;
  *(undefined1 *)(plVar7 + 0x37) = 0;
  plVar7[0x36] = 0;
  plVar7[0x35] = 0;
  plVar7[0x39] = 0;
  plVar7[0x3b] = 0;
  plVar7[0x3a] = 0;
  *(undefined1 *)(plVar7 + 0x3c) = 0;
  *(undefined2 *)(plVar7 + 0x3e) = 0x101;
  *(undefined8 *)((long)plVar7 + 500) = 0;
  *(undefined1 *)(plVar7 + 0x40) = 0;
  auVar13 = NEON_fmov(0x3f800000,4);
  uVar14 = auVar13._8_8_;
  *(undefined8 *)((long)plVar7 + 0x20c) = uVar14;
  uVar12 = auVar13._0_8_;
  *(undefined8 *)((long)plVar7 + 0x204) = uVar12;
  *(undefined8 *)((long)plVar7 + 0x21c) = uVar14;
  *(undefined8 *)((long)plVar7 + 0x214) = uVar12;
  *(undefined4 *)((long)plVar7 + 0x224) = 0x40a00000;
  *(undefined2 *)(plVar7 + 0x45) = 0x400;
  *(undefined1 *)(plVar7 + 0x47) = 0;
  *(undefined8 *)((long)plVar7 + 0x244) = uVar14;
  *(undefined8 *)((long)plVar7 + 0x23c) = uVar12;
  *(undefined8 *)((long)plVar7 + 0x254) = uVar14;
  *(undefined8 *)((long)plVar7 + 0x24c) = uVar12;
  *(undefined4 *)((long)plVar7 + 0x25c) = 0x40a00000;
  *(undefined2 *)(plVar7 + 0x4c) = 0x400;
  *(undefined1 *)(plVar7 + 0x4e) = 0;
  *(undefined8 *)((long)plVar7 + 0x27c) = uVar14;
  *(undefined8 *)((long)plVar7 + 0x274) = uVar12;
  *(undefined8 *)((long)plVar7 + 0x28c) = uVar14;
  *(undefined8 *)((long)plVar7 + 0x284) = uVar12;
  *(undefined4 *)((long)plVar7 + 0x294) = 0x40a00000;
  *(undefined2 *)(plVar7 + 0x53) = 0x400;
  plVar7[0x57] = 0;
  plVar7[0x56] = 0;
  *(undefined1 *)(plVar7 + 0x59) = 0;
  plVar7[0x55] = (long)&PTR_FUN_110c6a8d8;
  plVar7[0x58] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar7 + 0x2d4) = 0;
  *(undefined8 *)((long)plVar7 + 0x2cc) = 0;
  *(undefined1 *)(plVar7 + 0x5c) = 0;
  *(undefined8 *)((long)plVar7 + 0x2ec) = uVar14;
  *(undefined8 *)((long)plVar7 + 0x2e4) = uVar12;
  *(undefined8 *)((long)plVar7 + 0x2fc) = uVar14;
  *(undefined8 *)((long)plVar7 + 0x2f4) = uVar12;
  *(undefined4 *)((long)plVar7 + 0x304) = 0x40a00000;
  *(undefined2 *)(plVar7 + 0x61) = 0x400;
  plVar7[99] = 0;
  *(undefined4 *)(plVar7 + 100) = 0x3f800000;
  *(undefined2 *)((long)plVar7 + 0x324) = 0x1007;
  *(undefined1 *)(plVar7 + 0x65) = 0;
  *(undefined1 *)(plVar7 + 0x67) = 0;
  *(undefined1 *)(plVar7 + 0x68) = 0;
  *(undefined1 *)((long)plVar7 + 0x344) = 0;
  plVar7[0x6b] = 0;
  plVar7[0x6a] = 0;
  *(undefined1 *)(plVar7 + 0x6d) = 0;
  plVar7[0x69] = (long)&PTR_FUN_110c6a8d8;
  plVar7[0x6c] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar7 + 0x374) = 0;
  *(undefined8 *)((long)plVar7 + 0x36c) = 0;
  plVar7[0x75] = 0;
  plVar7[0x74] = 0x3f80000000000000;
  plVar7[0x77] = 0x3f800000;
  plVar7[0x76] = 0;
  plVar7[0x71] = 0;
  plVar7[0x70] = 0;
  plVar7[0x73] = 0;
  plVar7[0x72] = 0x3f800000;
  plVar7[0x7f] = 0x3f800000;
  plVar7[0x7e] = 0;
  plVar7[0x81] = 0x3f80000000000000;
  plVar7[0x80] = 0;
  plVar7[0x7b] = 0;
  plVar7[0x7a] = 0x3f800000;
  plVar7[0x7d] = 0;
  plVar7[0x7c] = 0x3f80000000000000;
  plVar7[0x79] = 0x3f80000000000000;
  plVar7[0x78] = 0;
  plVar7[0x84] = 0;
  plVar7[0x83] = 0;
  *(undefined1 *)(plVar7 + 0x86) = 0;
  plVar7[0x82] = (long)&PTR_FUN_110c6a8d8;
  plVar7[0x85] = (long)&PTR_FUN_110c6a940;
  *(undefined8 *)((long)plVar7 + 0x43c) = 0;
  *(undefined8 *)((long)plVar7 + 0x434) = 0;
  plVar7[0x89] = 0;
  if ((bRam00000001137eb716 & 1) == 0) {
    bRam00000001137eb716 = 1;
  }
  plVar7[0x8b] = 0;
  plVar7[0x8a] = 0;
  if ((bRam00000001137eb718 & 1) == 0) {
    bRam00000001137eb718 = 1;
  }
  plVar7[0x8d] = 0;
  plVar7[0x8c] = 0;
  if ((bRam00000001137eb71a & 1) == 0) {
    bRam00000001137eb71a = 1;
  }
  *(undefined1 *)(plVar7 + 0x8e) = 0;
  *(undefined1 *)(plVar7 + 0x90) = 0;
  if ((bRam00000001137eb71c & 1) == 0) {
    bRam00000001137eb71c = 1;
  }
  plVar7[0x92] = 0;
  plVar7[0x91] = 0;
  if ((bRam00000001137eb71e & 1) == 0) {
    bRam00000001137eb71e = 1;
  }
  plVar7[0x94] = 0;
  plVar7[0x93] = 0;
  if ((bRam00000001137eb720 & 1) == 0) {
    bRam00000001137eb720 = 1;
  }
  plVar7[0x9b] = 0;
  plVar7[0x98] = 0;
  plVar7[0x97] = 0;
  plVar7[0x9a] = 0;
  plVar7[0x99] = 0;
  plVar7[0x96] = 0;
  plVar7[0x95] = 0;
  *(undefined4 *)(plVar7 + 0x9c) = 0x3f800000;
  plVar7[0xa3] = 0;
  plVar7[0x9e] = 0;
  plVar7[0x9d] = 0;
  plVar7[0xa0] = 0;
  plVar7[0x9f] = 0;
  plVar7[0xa2] = 0;
  plVar7[0xa1] = 0;
  *(undefined4 *)(plVar7 + 0xa4) = 0x3f800000;
  plVar7[0xa6] = 0;
  plVar7[0xa5] = 0;
  plVar7[0xa8] = 0;
  plVar7[0xa7] = 0;
  *(undefined4 *)(plVar7 + 0xa9) = 0x3f800000;
  plVar7[0xab] = 0;
  plVar7[0xaa] = 0;
  plVar7[0xad] = 0;
  plVar7[0xac] = 0;
  plVar7[0xaf] = 0;
  plVar7[0xae] = 0;
  plVar7[0xb1] = 0;
  plVar7[0xb0] = 0;
  plVar7[0xb3] = 0;
  plVar7[0xb2] = 0;
  plVar7[0xb5] = 0;
  plVar7[0xb4] = 0;
  plVar7[0xb7] = 0;
  plVar7[0xb6] = 0;
  plVar7[0xb9] = 0;
  plVar7[0xb8] = 0;
  *(undefined4 *)(plVar7 + 0xba) = 0x3f800000;
  plVar7[0xbc] = 0;
  plVar7[0xbb] = 0;
  plVar7[0xbe] = 0;
  plVar7[0xbd] = 0;
  plVar7[0xc0] = 0;
  plVar7[0xbf] = 0;
  plVar7[0xc1] = 0;
  plVar7[0xc2] = 0x28cd94bfde;
  plVar7[0xc4] = 0;
  plVar7[0xc3] = 0;
  plVar7[0xc6] = 0;
  plVar7[0xc5] = 0;
  plVar7[200] = 0;
  plVar7[199] = 0;
  plVar7[0xca] = 0;
  plVar7[0xc9] = 0;
  plVar7[0xcb] = 0;
  if ((bRam00000001137eb722 & 1) == 0) {
    bRam00000001137eb722 = 1;
  }
  *(undefined4 *)(plVar7 + 0xcc) = 0;
  if ((bRam00000001137eb724 & 1) == 0) {
    bRam00000001137eb724 = 1;
  }
  *(undefined8 *)((long)plVar7 + 0x68a) = 0;
  *(undefined8 *)((long)plVar7 + 0x682) = 0;
  *(undefined8 *)((long)plVar7 + 0x66c) = 0;
  *(undefined8 *)((long)plVar7 + 0x664) = 0;
  *(undefined8 *)((long)plVar7 + 0x67c) = 0;
  *(undefined8 *)((long)plVar7 + 0x674) = 0;
  plVar7[0xdb] = 0;
  plVar7[0xd4] = 0;
  plVar7[0xd3] = 0;
  plVar7[0xd6] = 0;
  plVar7[0xd5] = 0;
  plVar7[0xd8] = 0;
  plVar7[0xd7] = 0;
  plVar7[0xda] = 0;
  plVar7[0xd9] = 0;
  plVar7[0xdc] = 0x3f800000;
  *(undefined4 *)((long)plVar7 + 0x6e7) = 0;
  if (plVar7[0x2d] == 0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar7[0x2c] = (long)plVar11;
    plVar7[0x2d] = (long)plVar7;
  }
  else {
    if (*(long *)(plVar7[0x2d] + 8) != -1) goto LAB_10a650784;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar2 = plVar7 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar7[0x2c] = (long)plVar11;
    plVar7[0x2d] = (long)plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar9 = *plVar10;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a650784:
  plVar10 = (long *)*plVar1;
  plStack_c8 = plVar7;
  if (plVar10 != plVar11) {
    if (plVar10 != (long *)0x0) {
      lVar9 = -0x7a0;
      if (bRam00000001137eb714 == 0) {
        lVar9 = -0xffff;
      }
      FUN_10a1bf080(plVar10 + 0x12,(long)plVar1 + lVar9 + 0xb8);
    }
    plStack_c8 = (long *)0x0;
    param_1[0xf4] = plVar11;
    plVar11 = (long *)param_1[0xf5];
    param_1[0xf5] = plVar7;
    if (plVar11 != (long *)0x0) {
      plVar7 = plVar11 + 1;
      do {
        lVar9 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    puVar6 = &uStack_c0;
    func_0x00010a1bd170();
    if ((((ulong)puVar6 & 1) == 0) && (*plVar1 != 0)) {
      lVar9 = -0x7a0;
      if (bRam00000001137eb714 == 0) {
        lVar9 = -0xffff;
      }
      puVar6 = (undefined8 *)(*plVar1 + 0x90);
      FUN_10a1bf2a0(puVar6,(long)plVar1 + lVar9 + 0xb8);
    }
    lVar9 = -0x7a0;
    if (bRam00000001137eb714 == 0) {
      lVar9 = -0xffff;
    }
    if ((*(ushort *)((long)plVar1 + lVar9 + 0xe8) >> 8 & 1) == 0) {
      uVar8 = 0;
      func_0x00010a1bd170();
      if ((uVar8 & 1) == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        ppuStack_68 = &PTR_DAT_110c072d0;
        uVar8 = (ulong)&uStack_c0 | 8;
        FUN_10a0dad0c(uVar8,&ppuStack_68);
        lVar9 = -0x7a0;
        if (bRam00000001137eb714 == 0) {
          lVar9 = -0xffff;
        }
        uVar3 = *(ushort *)((long)plVar1 + lVar9 + 0xe8);
        if ((uVar3 & 0x7f) == 0) {
          if ((uVar3 >> 8 & 1) == 0) {
            uVar8 = (long)plVar1 + lVar9 + 0xb8;
            FUN_10a1bfe94(uVar8,&uStack_c0);
            if ((uVar8 & 1) == 0) {
              lVar9 = -0x7a0;
              if (bRam00000001137eb714 == 0) {
                lVar9 = -0xffff;
              }
              FUN_10a650b2c((long)plVar1 + lVar9,&uStack_c0);
            }
          }
          else {
            FUN_10a1bd5e0();
            if (uVar8 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar3 >> 7 & 1) == 0) {
            *(undefined8 *)((long)plVar1 + lVar9 + 0xf8) = uStack_c0;
            *(ushort *)((long)plVar1 + lVar9 + 0xe8) = uVar3 | 0x80;
          }
          FUN_10a1bd398((long)plVar1 + lVar9 + 0xf8,&uStack_c0);
        }
      }
    }
    else if ((*(undefined ***)((long)plVar1 + lVar9 + 0xf0) != &PTR_DAT_110c072d0) &&
            (FUN_10a1bd5e0(), puVar6 != (undefined8 *)0x0)) {
      FUN_10a1bd7d8();
      *(undefined ***)((long)plVar1 + lVar9 + 0xf0) = &PTR_DAT_110c072d0;
    }
  }
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  return param_1;
}



/* Entry: 10a650b2c; end: 10a650da7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a650b2c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long *unaff_x19;
  long *plVar14;
  long *plVar15;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  
code_r0x00010a650b2c:
  plVar8 = param_1;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  unaff_x19 = plVar8;
  plVar15 = param_2;
  if ((*(byte *)(plVar8 + 0xe3) & 1) == 0) {
    *(undefined1 *)(plVar8 + 0xe3) = 1;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x10a6787c4;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110c073a8;
    *(long **)((long)register0x00000008 + -0x68) = plVar8;
    lVar10 = plVar8[0xda];
    if (lVar10 == 0) {
      if ((char)plVar8[0xdc] == '\x01') {
        FUN_10a652088(plVar8);
      }
    }
    else if ((((*(long **)(lVar10 + 0x228) == *(long **)(lVar10 + 0x230)) ||
              ((char)plVar8[0xdc] != '\x01')) || (lVar10 = **(long **)(lVar10 + 0x228), lVar10 == 0)
             ) || (lVar10 != plVar8[0xe0])) {
LAB_10a650bbc:
      FUN_10a652088(plVar8);
    }
    else if (*(long *)(lVar10 + 0x1c8) != plVar8[0xe1]) {
      if (*(long *)(*(long *)(lVar10 + 0x1b8) + 0x10) != plVar8[0xe2]) goto LAB_10a650bbc;
      plVar8[0xe1] = *(long *)(lVar10 + 0x1c8);
    }
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    unaff_x19 = (long *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
  }
  lVar11 = param_2[9];
  lVar9 = lVar11 << 3;
  lVar10 = lVar9;
  plVar14 = param_2;
  lVar12 = lVar11;
  while (lVar12 != 0) {
    plVar14 = plVar14 + 1;
    if ((undefined **)*plVar14 == &PTR_DAT_110c03540) goto LAB_10a650d00;
    lVar10 = lVar10 + -8;
    lVar12 = lVar10;
  }
  lVar10 = 0;
  do {
    if (lVar11 != 0) {
      lVar12 = lVar9;
      plVar14 = param_2;
      do {
        plVar14 = plVar14 + 1;
        if (*plVar14 == *(long *)((long)&PTR_PTR_110c06ba0 + lVar10)) {
          bVar3 = true;
          goto LAB_10a650c78;
        }
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x18);
  bVar3 = false;
LAB_10a650c78:
  lVar10 = 0;
  do {
    if (lVar11 != 0) {
      lVar12 = lVar9;
      plVar14 = param_2;
      do {
        plVar14 = plVar14 + 1;
        if (*plVar14 == *(long *)((long)&PTR_PTR_110c06c00 + lVar10)) {
          if (bVar3) goto LAB_10a650d00;
          goto LAB_10a650d08;
        }
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x18);
  plVar14 = param_2;
  if (bVar3) {
    unaff_x19 = plVar8;
    FUN_10a421f1c();
    lVar11 = param_2[9];
    lVar9 = lVar11 << 3;
  }
  while (lVar11 != 0) {
    if ((undefined **)plVar14[1] == &PTR_DAT_110c03528) {
      unaff_x19 = plVar8;
      func_0x00010a4220ec();
      break;
    }
    lVar9 = lVar9 + -8;
    plVar14 = plVar14 + 1;
    lVar11 = lVar9;
  }
  goto LAB_10a650d10;
LAB_10a650d00:
  FUN_10a421f1c(plVar8);
LAB_10a650d08:
  unaff_x19 = plVar8;
  FUN_10a421ba8();
LAB_10a650d10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
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
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    lVar10 = 0;
    do {
      if (param_2[9] != 0) {
        lVar9 = param_2[9] << 3;
        plVar15 = param_2;
        do {
          plVar15 = plVar15 + 1;
          if (*plVar15 == *(long *)((long)&PTR_PTR_110bd9238 + lVar10)) {
            FUN_10a3c73cc(plVar8,8);
            if (param_2[9] == 0) goto LAB_10a4221dc;
            lVar10 = param_2[9] << 3;
            plVar15 = param_2;
            goto LAB_10a4221b8;
          }
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      lVar10 = lVar10 + 8;
      if (lVar10 == 0xb8) {
        return;
      }
    } while( true );
  }
  ___stack_chk_fail();
  FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
  (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))(unaff_x21 + 8);
  unaff_x30 = FUN_10a650da8;
  plVar14 = unaff_x19;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  param_1 = plVar14 + -0x17;
  param_2 = plVar15;
  unaff_x20 = plVar8;
  goto code_r0x00010a650b2c;
LAB_10a4222f8:
  bVar4 = true;
LAB_10a4222fc:
  if (param_2 == plVar15) goto LAB_10a422310;
  goto LAB_10a422250;
LAB_10a422310:
  if (!bVar4) {
    if (bVar3) {
      for (plVar15 = (long *)plVar8[0x59]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        FUN_10a421cf4(plVar15 + 7);
        FUN_10a019700(plVar15 + 3);
        func_0x00010a421d30(plVar15 + 5);
      }
      FUN_10a421b44(plVar8);
    }
    if (!bVar5) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    for (plVar15 = (long *)plVar8[0x59]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if ((*(char *)(plVar15 + 0x13) == '\x01') && (plVar15[0x11] != 0)) {
        FUN_10a779760();
      }
    }
    return;
  }
  goto LAB_10a42235c;
  while (lVar10 = lVar10 + -8, lVar10 != 0) {
LAB_10a4221b8:
    plVar15 = plVar15 + 1;
    if ((undefined **)*plVar15 == &PTR_DAT_110bcf620) {
      FUN_10a421f1c(plVar8);
      break;
    }
  }
LAB_10a4221dc:
  plVar15 = plVar8;
  (**(code **)(*plVar8 + 0x1c8))();
  if (((int)plVar15 != 0) && (0x171 < *(int *)(*(long *)(plVar8[0x2e] + 0xa20) + 0x18))) {
    if (param_2[9] == 0) {
      return;
    }
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    plVar15 = param_2 + param_2[9];
LAB_10a422250:
    lVar10 = 0;
    param_2 = param_2 + 1;
    ppuVar13 = (undefined **)*param_2;
    do {
      if (*(undefined ***)((long)&PTR_PTR_110bd9308 + lVar10) == ppuVar13) goto LAB_10a4222f8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x68);
    lVar10 = 0;
    do {
      iVar17 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9370 + lVar10) == ppuVar13);
      iVar18 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9378 + lVar10) == ppuVar13);
      uVar7 = CONCAT44(iVar18,iVar17);
      uVar19 = NEON_umaxp(uVar7,uVar7,4);
      if ((uVar19 & 1) != 0) break;
      bVar6 = lVar10 != 0x10;
      lVar10 = lVar10 + 0x10;
    } while (bVar6);
    if ((byte)(((byte)iVar17 & 1) + ((byte)iVar18 & 2)) == '\0') {
      if (ppuVar13 != &PTR_DAT_110ba2010) {
        if (((ppuVar13 == &PTR_DAT_110bc32f0) || (ppuVar13 == &PTR_DAT_110bd9f60)) ||
           (ppuVar13 == &PTR_DAT_110bda018)) {
          bVar5 = true;
          bVar3 = true;
        }
        else {
          lVar10 = 0;
          do {
            if (*(undefined ***)((long)&PTR_PTR_110bd9238 + lVar10) == ppuVar13) goto LAB_10a4222f8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0xb8);
        }
      }
    }
    else {
      bVar3 = true;
    }
    goto LAB_10a4222fc;
  }
LAB_10a42235c:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
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
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar10 = plVar8[0x2e];
  if (lVar10 != 0) {
    for (plVar15 = (long *)plVar8[0x59]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (*(char *)(plVar15 + 0x13) == '\x01') {
        uVar7 = *(undefined8 *)(lVar10 + 0xc50);
        lVar9 = plVar15[0x10];
        uVar16 = plVar15[0xf];
        *(long *)((long)register0x00000008 + -0x58) = plVar15[0x10];
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar16;
        if (lVar9 != 0) {
          plVar14 = (long *)(lVar9 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar9 = plVar15[0x12];
        uVar16 = plVar15[0x11];
        *(long *)((long)register0x00000008 + -0x48) = plVar15[0x12];
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar16;
        if (lVar9 != 0) {
          plVar14 = (long *)(lVar9 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a78871c(uVar7,(undefined1 *)((long)register0x00000008 + -0x60));
        plVar14 = *(long **)((long)register0x00000008 + -0x48);
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar14 = *(long **)((long)register0x00000008 + -0x58);
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
      }
    }
  }
  FUN_10a447a88(plVar8 + 0x57);
  FUN_10a421b44(plVar8);
  return;
}



/* Entry: 10a650da8; end: 10a650daf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a650da8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long *unaff_x19;
  long *plVar14;
  long *plVar15;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  
FUN_10a650b2c:
  plVar8 = param_1 + -0x17;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  unaff_x19 = plVar8;
  plVar15 = param_2;
  if ((*(byte *)(param_1 + 0xcc) & 1) == 0) {
    *(undefined1 *)(param_1 + 0xcc) = 1;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0x10a6787c4;
    *(undefined ***)((long)register0x00000008 + -0x70) = &PTR_DAT_110c073a8;
    *(long **)((long)register0x00000008 + -0x68) = plVar8;
    lVar10 = param_1[0xc3];
    if (lVar10 == 0) {
      if ((char)param_1[0xc5] == '\x01') {
        FUN_10a652088(plVar8);
      }
    }
    else if ((((*(long **)(lVar10 + 0x228) == *(long **)(lVar10 + 0x230)) ||
              ((char)param_1[0xc5] != '\x01')) ||
             (lVar10 = **(long **)(lVar10 + 0x228), lVar10 == 0)) || (lVar10 != param_1[0xc9])) {
LAB_10a650bbc:
      FUN_10a652088(plVar8);
    }
    else if (*(long *)(lVar10 + 0x1c8) != param_1[0xca]) {
      if (*(long *)(*(long *)(lVar10 + 0x1b8) + 0x10) != param_1[0xcb]) goto LAB_10a650bbc;
      param_1[0xca] = *(long *)(lVar10 + 0x1c8);
    }
    FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
    unaff_x19 = (long *)((long)register0x00000008 + -0x70);
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))();
  }
  lVar11 = param_2[9];
  lVar9 = lVar11 << 3;
  lVar10 = lVar9;
  plVar14 = param_2;
  lVar12 = lVar11;
  while (lVar12 != 0) {
    plVar14 = plVar14 + 1;
    if ((undefined **)*plVar14 == &PTR_DAT_110c03540) goto LAB_10a650d00;
    lVar10 = lVar10 + -8;
    lVar12 = lVar10;
  }
  lVar10 = 0;
  do {
    if (lVar11 != 0) {
      lVar12 = lVar9;
      plVar14 = param_2;
      do {
        plVar14 = plVar14 + 1;
        if (*plVar14 == *(long *)((long)&PTR_PTR_110c06ba0 + lVar10)) {
          bVar3 = true;
          goto LAB_10a650c78;
        }
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x18);
  bVar3 = false;
LAB_10a650c78:
  lVar10 = 0;
  do {
    if (lVar11 != 0) {
      lVar12 = lVar9;
      plVar14 = param_2;
      do {
        plVar14 = plVar14 + 1;
        if (*plVar14 == *(long *)((long)&PTR_PTR_110c06c00 + lVar10)) {
          if (bVar3) goto LAB_10a650d00;
          goto LAB_10a650d08;
        }
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
    }
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x18);
  plVar14 = param_2;
  if (bVar3) {
    unaff_x19 = plVar8;
    FUN_10a421f1c();
    lVar11 = param_2[9];
    lVar9 = lVar11 << 3;
  }
  while (lVar11 != 0) {
    if ((undefined **)plVar14[1] == &PTR_DAT_110c03528) {
      unaff_x19 = plVar8;
      func_0x00010a4220ec();
      break;
    }
    lVar9 = lVar9 + -8;
    plVar14 = plVar14 + 1;
    lVar11 = lVar9;
  }
  goto LAB_10a650d10;
LAB_10a650d00:
  FUN_10a421f1c(plVar8);
LAB_10a650d08:
  unaff_x19 = plVar8;
  FUN_10a421ba8();
LAB_10a650d10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
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
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    lVar10 = 0;
    do {
      if (param_2[9] != 0) {
        lVar9 = param_2[9] << 3;
        plVar15 = param_2;
        do {
          plVar15 = plVar15 + 1;
          if (*plVar15 == *(long *)((long)&PTR_PTR_110bd9238 + lVar10)) {
            FUN_10a3c73cc(plVar8,8);
            if (param_2[9] == 0) goto LAB_10a4221dc;
            lVar10 = param_2[9] << 3;
            plVar15 = param_2;
            goto LAB_10a4221b8;
          }
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      lVar10 = lVar10 + 8;
      if (lVar10 == 0xb8) {
        return;
      }
    } while( true );
  }
  ___stack_chk_fail();
  FUN_10a044790((undefined1 *)((long)register0x00000008 + -0x78));
  (*(code *)**(undefined8 **)((long)register0x00000008 + -0x70))(unaff_x21 + 8);
  unaff_x30 = FUN_10a650da8;
  param_1 = unaff_x19;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  param_2 = plVar15;
  unaff_x20 = plVar8;
  goto FUN_10a650b2c;
LAB_10a4222f8:
  bVar4 = true;
LAB_10a4222fc:
  if (param_2 == plVar15) goto LAB_10a422310;
  goto LAB_10a422250;
LAB_10a422310:
  if (!bVar4) {
    if (bVar3) {
      for (plVar15 = (long *)param_1[0x42]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        FUN_10a421cf4(plVar15 + 7);
        FUN_10a019700(plVar15 + 3);
        func_0x00010a421d30(plVar15 + 5);
      }
      FUN_10a421b44(plVar8);
    }
    if (!bVar5) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    for (plVar15 = (long *)param_1[0x42]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if ((*(char *)(plVar15 + 0x13) == '\x01') && (plVar15[0x11] != 0)) {
        FUN_10a779760();
      }
    }
    return;
  }
  goto LAB_10a42235c;
  while (lVar10 = lVar10 + -8, lVar10 != 0) {
LAB_10a4221b8:
    plVar15 = plVar15 + 1;
    if ((undefined **)*plVar15 == &PTR_DAT_110bcf620) {
      FUN_10a421f1c(plVar8);
      break;
    }
  }
LAB_10a4221dc:
  plVar15 = plVar8;
  (**(code **)(*plVar8 + 0x1c8))();
  if (((int)plVar15 != 0) && (0x171 < *(int *)(*(long *)(param_1[0x17] + 0xa20) + 0x18))) {
    if (param_2[9] == 0) {
      return;
    }
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    plVar15 = param_2 + param_2[9];
LAB_10a422250:
    lVar10 = 0;
    param_2 = param_2 + 1;
    ppuVar13 = (undefined **)*param_2;
    do {
      if (*(undefined ***)((long)&PTR_PTR_110bd9308 + lVar10) == ppuVar13) goto LAB_10a4222f8;
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x68);
    lVar10 = 0;
    do {
      iVar17 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9370 + lVar10) == ppuVar13);
      iVar18 = -(uint)(*(undefined ***)((long)&PTR_PTR_110bd9378 + lVar10) == ppuVar13);
      uVar7 = CONCAT44(iVar18,iVar17);
      uVar19 = NEON_umaxp(uVar7,uVar7,4);
      if ((uVar19 & 1) != 0) break;
      bVar6 = lVar10 != 0x10;
      lVar10 = lVar10 + 0x10;
    } while (bVar6);
    if ((byte)(((byte)iVar17 & 1) + ((byte)iVar18 & 2)) == '\0') {
      if (ppuVar13 != &PTR_DAT_110ba2010) {
        if (((ppuVar13 == &PTR_DAT_110bc32f0) || (ppuVar13 == &PTR_DAT_110bd9f60)) ||
           (ppuVar13 == &PTR_DAT_110bda018)) {
          bVar5 = true;
          bVar3 = true;
        }
        else {
          lVar10 = 0;
          do {
            if (*(undefined ***)((long)&PTR_PTR_110bd9238 + lVar10) == ppuVar13) goto LAB_10a4222f8;
            lVar10 = lVar10 + 8;
          } while (lVar10 != 0xb8);
        }
      }
    }
    else {
      bVar3 = true;
    }
    goto LAB_10a4222fc;
  }
LAB_10a42235c:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
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
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar10 = param_1[0x17];
  if (lVar10 != 0) {
    for (plVar15 = (long *)param_1[0x42]; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (*(char *)(plVar15 + 0x13) == '\x01') {
        uVar7 = *(undefined8 *)(lVar10 + 0xc50);
        lVar9 = plVar15[0x10];
        uVar16 = plVar15[0xf];
        *(long *)((long)register0x00000008 + -0x58) = plVar15[0x10];
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar16;
        if (lVar9 != 0) {
          plVar14 = (long *)(lVar9 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar9 = plVar15[0x12];
        uVar16 = plVar15[0x11];
        *(long *)((long)register0x00000008 + -0x48) = plVar15[0x12];
        *(undefined8 *)((long)register0x00000008 + -0x50) = uVar16;
        if (lVar9 != 0) {
          plVar14 = (long *)(lVar9 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar3) {
              *plVar14 = *plVar14 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_10a78871c(uVar7,(undefined1 *)((long)register0x00000008 + -0x60));
        plVar14 = *(long **)((long)register0x00000008 + -0x48);
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar14 = *(long **)((long)register0x00000008 + -0x58);
        if (plVar14 != (long *)0x0) {
          plVar1 = plVar14 + 1;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
      }
    }
  }
  FUN_10a447a88(param_1 + 0x40);
  FUN_10a421b44(plVar8);
  return;
}



/* Entry: 10a650db0; end: 10a650f33;  */

void FUN_10a650db0(long param_1)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a66ac20();
  if (((*(byte *)(param_1 + 0x5a0) & 1) == 0) &&
     (*(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18) < 0xd2)) {
    FUN_10a650f34(param_1,0x10101);
  }
  FUN_10a650f80(&uStack_80,param_1,*(undefined1 *)(param_1 + 0x77c),param_1 + 0x77e,
                *(undefined1 *)(param_1 + 0x782),*(undefined1 *)(param_1 + 0x77d),
                *(undefined1 *)(param_1 + 0x6c8));
  plStack_88 = (long *)ppuStack_78;
  uStack_90 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a42646c(param_1,&uStack_90);
  plVar5 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x5f8) = *(undefined8 *)(param_1 + 0x170);
  iVar8 = (int)param_1 + 0x670;
  FUN_10a1c5558(param_1 + 0x5f8);
  FUN_10a044790(auStack_70);
  ppuVar6 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  ppuVar7 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_78 + 1;
    do {
      puVar10 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar10 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a015cb4(&uStack_80);
  __Unwind_Resume();
  *(int *)((long)ppuVar6 + 0x77e) = iVar8;
  if ((((((ulong)ppuVar6[0xdc] & 1) == 0) && (ppuVar6[0x54] != ppuVar6[0x55])) &&
      (lVar9 = *ppuVar6[0x54], lVar9 != 0)) &&
     ((*(long **)(lVar9 + 0x228) != *(long **)(lVar9 + 0x230) &&
      (lVar9 = **(long **)(lVar9 + 0x228), lVar9 != 0)))) {
    *(int *)(lVar9 + 0x21e) = iVar8;
  }
  return;
}



/* Entry: 10a650f34; end: 10a650f7f;  */

void FUN_10a650f34(long param_1,undefined4 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x77e) = param_2;
  if (((((*(byte *)(param_1 + 0x6e0) & 1) == 0) &&
       (*(long **)(param_1 + 0x2a0) != *(long **)(param_1 + 0x2a8))) &&
      (lVar1 = **(long **)(param_1 + 0x2a0), lVar1 != 0)) &&
     ((*(long **)(lVar1 + 0x228) != *(long **)(lVar1 + 0x230) &&
      (lVar1 = **(long **)(lVar1 + 0x228), lVar1 != 0)))) {
    *(undefined4 *)(lVar1 + 0x21e) = param_2;
  }
  return;
}



/* Entry: 10a650f80; end: 10a6514e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a651130) */

void FUN_10a650f80(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1b0;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined4 uStack_19c;
  undefined *puStack_198;
  long *plStack_190;
  char cStack_181;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined *puStack_160;
  long *plStack_158;
  undefined *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined8 *apuStack_138 [7];
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **appuStack_e8 [7];
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  FUN_10a651990();
  if ((int)lVar9 == 0) {
    FUN_10a651e28(&puStack_100,*(undefined8 *)(param_2 + 0x170));
    puVar10 = puStack_100;
    func_0x000107c2b054(&uStack_1b8,&UNK_10f66ad82);
    if ((char)puVar10[0x6f] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar10 + 0x58));
    }
    *(undefined8 *)(puVar10 + 0x60) = uStack_1b0;
    *(ulong *)(puVar10 + 0x58) = CONCAT71(uStack_1b7,uStack_1b8);
    *(ulong *)(puVar10 + 0x68) = CONCAT17(uStack_1a1,uStack_1a8);
    uStack_1a1 = 0;
    uStack_1b8 = 0;
    FUN_10a651d9c(param_7,*(long *)(param_2 + 0x170),
                  *(undefined8 *)(*(long *)(param_2 + 0x170) + 0xa20));
    puStack_160 = (undefined *)0x0;
    plStack_158 = (long *)0x0;
    if ((int)param_7 == 0) {
      uStack_a0 = CONCAT17(10,(undefined7)uStack_a0);
      puStack_b0 = (undefined *)0x6c672e3274786574;
      ppuStack_a8 = (undefined **)CONCAT53(ppuStack_a8._3_5_,0x6c73);
      FUN_10a678634(&puStack_198,&puStack_b0,1);
    }
    else {
      uStack_a0 = CONCAT17(0xc,(undefined7)uStack_a0);
      puStack_b0 = (undefined *)0x2e4f425574786574;
      ppuStack_a8 = (undefined **)CONCAT35(ppuStack_a8._5_3_,0x6c736c67);
      FUN_10a678634(&puStack_198,&puStack_b0,1);
    }
    plVar1 = plStack_190;
    puVar10 = puStack_198;
    puStack_198 = (undefined *)0x0;
    plStack_190 = (long *)0x0;
    puStack_160 = puVar10;
    plStack_158 = plVar1;
    uStack_98 = *(undefined8 *)(puVar10 + 0x38);
    uStack_a0 = *(undefined8 *)(puVar10 + 0x30);
    if (*(long *)(puVar10 + 0x38) != 0) {
      plVar2 = (long *)(*(long *)(puVar10 + 0x38) + 0x10);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_b0 = (undefined *)0x10a3635a8;
    ppuStack_a8 = &PTR_FUN_110bc68e8;
    func_0x000107c2b054(&uStack_178,&UNK_10f66acf2);
    if ((char)puVar10[0x1b7] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar10 + 0x1a0));
    }
    *(undefined8 *)(puVar10 + 0x1a8) = uStack_170;
    *(ulong *)(puVar10 + 0x1a0) = CONCAT71(uStack_177,uStack_178);
    *(ulong *)(puVar10 + 0x1b0) = CONCAT17(uStack_161,uStack_168);
    uStack_161 = 0;
    uStack_178 = 0;
    func_0x00010a332748(puVar10 + 0x219,param_3);
    puVar10 = puStack_160;
    *(undefined4 *)(puStack_160 + 0x21e) = *param_4;
    lVar9 = *(long *)(puStack_160 + 600);
    puStack_198 = &UNK_10f68e8d6;
    plStack_190 = (long *)0x12;
    if (0x10 < param_5) goto LAB_10a65144c;
    lVar7 = (ulong)param_5 * 0x30;
    uVar11 = *(undefined8 *)(&UNK_10e4f4698 + lVar7);
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(&UNK_10e4f46a0 + lVar7);
    *(undefined8 *)(lVar9 + 0x28) = uVar11;
    uVar11 = *(undefined8 *)(&UNK_10e4f46a8 + lVar7);
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(&UNK_10e4f46b0 + lVar7);
    *(undefined8 *)(lVar9 + 0x38) = uVar11;
    uVar11 = *(undefined8 *)(&UNK_10e4f46b8 + lVar7);
    *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(&UNK_10e4f46c0 + lVar7);
    *(undefined8 *)(lVar9 + 0x48) = uVar11;
    func_0x00010a332700(puStack_160 + 0x21a,0);
    func_0x00010a3326b8(puVar10 + 0x218,param_6);
    if ((int)param_7 != 0) {
      func_0x000107c2b074(&puStack_198,&PTR_DAT_110c06c18);
      uStack_19c = 0;
      FUN_10a0d9bd4(puVar10,&puStack_198,&uStack_19c);
      if (cStack_181 < '\0') {
        __ZdlPv(puStack_198);
      }
    }
    puStack_150 = puVar10;
    plStack_148 = plVar1;
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puStack_140 = puStack_b0;
    (*(code *)ppuStack_a8[2])(apuStack_138,&ppuStack_a8);
    puStack_b0 = &UNK_1053a6a3c;
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    ppuStack_a8 = &PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_b0);
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        lVar9 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    FUN_10ab46914(puStack_100 + 0x228,&puStack_150);
    param_1[1] = ppuStack_f8;
    *param_1 = puStack_100;
    if (ppuStack_f8 != (undefined **)0x0) {
      ppuVar3 = ppuStack_f8 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
        if (bVar6) {
          *ppuVar3 = *ppuVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    param_1[2] = puStack_f0;
    (*(code *)appuStack_e8[0][2])(param_1 + 3,appuStack_e8);
    puStack_f0 = &UNK_1053a6a3c;
    (*(code *)*appuStack_e8[0])(appuStack_e8);
    appuStack_e8[0] = &PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_140);
    (*(code *)*apuStack_138[0])(apuStack_138);
    plVar1 = plStack_148;
    if (plStack_148 != (long *)0x0) {
      plVar2 = plStack_148 + 1;
      do {
        lVar9 = *plVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_148 + 0x10))(plStack_148);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    FUN_10a044790(&puStack_f0);
    (*(code *)*appuStack_e8[0])(appuStack_e8);
    ppuVar3 = ppuStack_f8;
    if (ppuStack_f8 != (undefined **)0x0) {
      ppuVar4 = ppuStack_f8 + 1;
      do {
        puVar10 = *ppuVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar6) {
          *ppuVar4 = puVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuStack_f8 + 0x10))(ppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar3);
      }
    }
  }
  else {
    lVar9 = *(long *)(param_2 + 0x6d8);
    uVar11 = *(undefined8 *)(param_2 + 0x6d0);
    param_1[1] = *(undefined8 *)(param_2 + 0x6d8);
    *param_1 = uVar11;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    param_1[2] = FUN_10a6786c4;
    param_1[3] = &PTR_DAT_110c072e8;
    puStack_100 = &UNK_1053a6a3c;
    ppuStack_f8 = &PTR_DAT_110ae9180;
    FUN_10a044790(&puStack_100);
    (*(code *)*ppuStack_f8)(&ppuStack_f8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_10a65144c:
  FUN_10a0edfc4(&puStack_198);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a651458);
  (*pcVar8)();
}



/* Entry: 10a6514e8; end: 10a6514ef;  */

void FUN_10a6514e8(long param_1)

{
  long *plVar1;
  undefined8 **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lVar8 = param_1 + -0x68;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a66ac20();
  if (((*(byte *)(param_1 + 0x538) & 1) == 0) &&
     (*(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18) < 0xd2)) {
    FUN_10a650f34(lVar8,0x10101);
  }
  FUN_10a650f80(&uStack_80,lVar8,*(undefined1 *)(param_1 + 0x714),param_1 + 0x716,
                *(undefined1 *)(param_1 + 0x71a),*(undefined1 *)(param_1 + 0x715),
                *(undefined1 *)(param_1 + 0x660));
  plStack_88 = (long *)ppuStack_78;
  uStack_90 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a42646c(lVar8,&uStack_90);
  plVar5 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x108);
  iVar9 = (int)param_1 + 0x608;
  FUN_10a1c5558(param_1 + 0x590);
  FUN_10a044790(auStack_70);
  ppuVar6 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  ppuVar7 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar2 = ppuStack_78 + 1;
    do {
      puVar10 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = (undefined8 *)((long)puVar10 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar10 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar6 = ppuVar7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a015cb4(&uStack_80);
  __Unwind_Resume();
  *(int *)((long)ppuVar6 + 0x77e) = iVar9;
  if ((((((ulong)ppuVar6[0xdc] & 1) == 0) && (ppuVar6[0x54] != ppuVar6[0x55])) &&
      (lVar8 = *ppuVar6[0x54], lVar8 != 0)) &&
     ((*(long **)(lVar8 + 0x228) != *(long **)(lVar8 + 0x230) &&
      (lVar8 = **(long **)(lVar8 + 0x228), lVar8 != 0)))) {
    *(int *)(lVar8 + 0x21e) = iVar9;
  }
  return;
}



/* Entry: 10a6514f0; end: 10a65150f;  */

undefined1  [16] FUN_10a6514f0(void)

{
  undefined1 auVar1 [16];
  
  FUN_10a651510();
  auVar1._8_8_ = 5;
  auVar1._0_8_ = 0x1137eb7b0;
  return auVar1;
}



/* Entry: 10a651510; end: 10a65190f;  */

/* WARNING: Removing unreachable block (ram,0x00010a651598) */
/* WARNING: Removing unreachable block (ram,0x00010a6517d0) */

void FUN_10a651510(void)

{
  int iVar1;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  char cStack_c9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined7 uStack_b0;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined7 uStack_90;
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  char cStack_69;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  if ((bRam00000001137eb748 & 1) == 0) {
    iVar1 = 0x137eb748;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b074(&uStack_60,&PTR_DAT_110c06c80);
      uRam00000001137eb7b8 = uStack_58;
      uRam00000001137eb7b0 = uStack_60;
      uRam00000001137eb7c0 = CONCAT17(uStack_49,uStack_50);
      uRam00000001137eb7c8 = uStack_48;
      uRam00000001137eb7d0 = 0x500000000;
      uRam00000001137eb7d8 = 1;
      uRam00000001137eb7dc = 0;
      uRam00000001137eb7e0 = 0;
      func_0x000107c2b074(&uStack_80,&PTR_DAT_110c06c98);
      if (cStack_69 < '\0') {
        func_0x000107c3192c(0x1137eb7e8,uStack_80,uStack_78);
      }
      else {
        uRam00000001137eb7f0 = uStack_78;
        uRam00000001137eb7e8 = uStack_80;
        uRam00000001137eb7f8 = CONCAT17(cStack_69,uStack_70);
      }
      uRam00000001137eb800 = uStack_68;
      uRam00000001137eb808 = 0x500000000;
      uRam00000001137eb810 = 1;
      uRam00000001137eb814 = 0;
      uRam00000001137eb818 = 0;
      func_0x000107c2b074(&uStack_a0,&PTR_DAT_110c06cb0);
      if (cStack_89 < '\0') {
        func_0x000107c3192c(0x1137eb820,uStack_a0,uStack_98);
      }
      else {
        uRam00000001137eb828 = uStack_98;
        uRam00000001137eb820 = uStack_a0;
        uRam00000001137eb830 = CONCAT17(cStack_89,uStack_90);
      }
      uRam00000001137eb838 = uStack_88;
      uRam00000001137eb840 = 0x500000000;
      uRam00000001137eb848 = 1;
      uRam00000001137eb84c = 0;
      uRam00000001137eb850 = 0;
      func_0x000107c2b074(&uStack_c0,&PTR_DAT_110c06cc8);
      if (cStack_a9 < '\0') {
        func_0x000107c3192c(0x1137eb858,uStack_c0,uStack_b8);
      }
      else {
        uRam00000001137eb860 = uStack_b8;
        uRam00000001137eb858 = uStack_c0;
        uRam00000001137eb868 = CONCAT17(cStack_a9,uStack_b0);
      }
      uRam00000001137eb870 = uStack_a8;
      uRam00000001137eb878 = 0x500000000;
      uRam00000001137eb880 = 1;
      uRam00000001137eb884 = 0;
      uRam00000001137eb888 = 0;
      func_0x000107c2b074(&uStack_e0,&PTR_DAT_110c06ce0);
      if (cStack_c9 < '\0') {
        func_0x000107c3192c(0x1137eb890,uStack_e0,uStack_d8);
        uRam00000001137eb8a8 = uStack_c8;
        uRam00000001137eb8b0 = 0x500000000;
        uRam00000001137eb8b8 = 4;
        uRam00000001137eb8bc = 0;
        uRam00000001137eb8c0 = 0;
        if (cStack_c9 < '\0') {
          __ZdlPv(uStack_e0);
        }
      }
      else {
        uRam00000001137eb898 = uStack_d8;
        uRam00000001137eb890 = uStack_e0;
        uRam00000001137eb8a0 = CONCAT17(cStack_c9,uStack_d0);
        uRam00000001137eb8a8 = uStack_c8;
        uRam00000001137eb8b0 = 0x500000000;
        uRam00000001137eb8b8 = 4;
        uRam00000001137eb8bc = 0;
        uRam00000001137eb8c0 = 0;
      }
      if (cStack_a9 < '\0') {
        __ZdlPv(uStack_c0);
      }
      if (cStack_89 < '\0') {
        __ZdlPv(uStack_a0);
      }
      if (cStack_69 < '\0') {
        __ZdlPv(uStack_80);
      }
      ___cxa_atexit(0x10a66d18c,0x1137eb7b0,0x100000000);
      ___cxa_guard_release(0x1137eb748);
    }
  }
  return;
}



/* Entry: 10a651910; end: 10a65198f;  */

bool FUN_10a651910(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 0x2a0) != *(long **)(param_1 + 0x2a8)) {
    lVar2 = **(long **)(param_1 + 0x2a0);
    if ((((lVar2 == 0) || (*(long **)(lVar2 + 0x228) == *(long **)(lVar2 + 0x230))) ||
        (lVar2 = **(long **)(lVar2 + 0x228), lVar2 == 0)) ||
       ((lVar2 = *(long *)(lVar2 + 0x188), lVar2 == 0 ||
        (___dynamic_cast(lVar2,&PTR_DAT_110bb3230,&PTR_DAT_110c67800,0), lVar2 == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(lVar2 + 0x128) == 1;
    }
    return bVar1;
  }
  return true;
}



/* Entry: 10a651990; end: 10a651d9b;  */

uint FUN_10a651990(undefined ***param_1,undefined **param_2,undefined **param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined ***pppuVar6;
  byte *pbVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  long lVar15;
  undefined **ppuVar16;
  bool bVar17;
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  param_1[0xe0] = (undefined **)0x0;
  param_1[0xe2] = (undefined **)0x0;
  param_1[0xe1] = (undefined **)0x0;
  ppuVar9 = param_1[0xda];
  if (ppuVar9 == (undefined **)0x0) {
    uVar5 = 0;
    goto LAB_10a651d10;
  }
  if ((ppuVar9[0x45] == ppuVar9[0x46]) ||
     (ppuVar9 = *(undefined ***)ppuVar9[0x45], ppuVar9 == (undefined **)0x0)) {
    pppuVar11 = (undefined ***)0x0;
    pppuVar13 = (undefined ***)0x0;
    ppuVar9 = (undefined **)0x0;
    pppuStack_88 = (undefined ***)0x0;
    pppuStack_80 = (undefined ***)0x0;
    bVar17 = true;
  }
  else {
    pppuVar13 = (undefined ***)ppuVar9[0x31];
    pppuVar11 = (undefined ***)ppuVar9[0x32];
    pppuVar6 = pppuVar13;
    pppuStack_88 = pppuVar13;
    pppuStack_80 = pppuVar11;
    if (pppuVar11 != (undefined ***)0x0) {
      pppuVar14 = pppuVar11 + 1;
      do {
        cVar1 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar17) {
          *pppuVar14 = (undefined **)((long)*pppuVar14 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    for (; pppuVar6 != (undefined ***)0x0; pppuVar6 = (undefined ***)pppuVar6[0x13]) {
      pppuVar14 = pppuVar6;
      (*(code *)(*pppuVar6)[0x10])();
      if ((int)pppuVar14 != 2) {
        param_2 = (undefined **)0x1;
        pppuVar6 = pppuVar13;
        FUN_10a044920();
        bVar17 = false;
        uVar5 = 0;
        if ((int)pppuVar6 != 2) goto LAB_10a651cdc;
        goto LAB_10a651a58;
      }
    }
    bVar17 = false;
  }
LAB_10a651a58:
  pppuStack_60 = appuStack_78;
  appuStack_78[0] = &PTR_DAT_110c07310;
  plVar8 = (long *)param_1[0xda][0x45];
  plVar10 = (long *)param_1[0xda][0x46];
  if ((long)plVar10 - (long)plVar8 == 0x10) {
    if (((plVar8 == plVar10) || (lVar15 = *plVar8, lVar15 == 0)) ||
       ((*(byte *)(lVar15 + 0x279) & 1) != 0)) {
      pppuVar14 = (undefined ***)&UNK_10f66b3b8;
      ppuVar16 = (undefined **)0x27;
    }
    else {
      plVar8 = *(long **)(lVar15 + 0x188);
      if (plVar8 == (long *)0x0) {
        pppuVar14 = (undefined ***)&UNK_10f66b3e0;
        ppuVar16 = (undefined **)0x24;
      }
      else {
        do {
          plVar10 = plVar8;
          (**(code **)(*plVar8 + 0x80))();
          if ((int)plVar10 != 2) {
            iVar4 = (int)*(undefined8 *)(lVar15 + 0x188);
            param_2 = (undefined **)0x1;
            FUN_10a044920();
            if (iVar4 != 2) {
              pppuVar14 = (undefined ***)&UNK_10f66b405;
              ppuVar16 = (undefined **)0x1d;
              goto LAB_10a651b04;
            }
            break;
          }
          plVar8 = (long *)plVar8[0x13];
        } while (plVar8 != (long *)0x0);
        if (pppuStack_60 == (undefined ***)0x0) {
          FUN_10a06186c();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a651c9c);
          (*pcVar2)();
        }
        param_2 = *(undefined ***)(lVar15 + 0x188);
        pppuVar6 = pppuStack_60;
        (*(code *)(*pppuStack_60)[6])();
        bVar3 = (int)pppuVar6 == 0;
        pppuVar14 = (undefined ***)0x0;
        if (bVar3) {
          pppuVar14 = (undefined ***)&UNK_10f66b456;
        }
        ppuVar16 = (undefined **)0x0;
        if (bVar3) {
          ppuVar16 = (undefined **)0x3b;
        }
      }
    }
  }
  else {
    pppuVar14 = (undefined ***)&UNK_10f66b37d;
    if (plVar8 != plVar10) {
      pppuVar14 = (undefined ***)&UNK_10f66b394;
    }
    ppuVar16 = (undefined **)0x16;
    if (plVar8 != plVar10) {
      ppuVar16 = (undefined **)0x23;
    }
  }
LAB_10a651b04:
  pppuVar6 = pppuStack_60;
  if (pppuStack_60 == appuStack_78) {
    lVar15 = 0x20;
LAB_10a651b24:
    (**(code **)((long)*pppuStack_60 + lVar15))();
  }
  else if (pppuStack_60 != (undefined ***)0x0) {
    lVar15 = 0x28;
    goto LAB_10a651b24;
  }
  if (ppuVar16 == (undefined **)0x0) {
    *(undefined1 *)(param_1 + 0xdc) = 1;
    param_1[0xde] = (undefined **)0x0;
    param_1[0xdd] = (undefined **)0x0;
    if (pppuVar13 != (undefined ***)0x0) {
      (*(code *)(*pppuVar13)[0x12])();
      *(byte *)(param_1 + 0xdf) = (byte)((uint)pppuVar13 >> 6) & 3;
      pppuVar6 = pppuVar13;
    }
    if (!bVar17) {
      param_1[0xe0] = ppuVar9;
      param_1[0xe1] = (undefined **)ppuVar9[0x39];
      param_1[0xe2] = *(undefined ***)(ppuVar9[0x37] + 0x10);
    }
    uVar5 = 1;
  }
  else {
    if (ppuVar16 == param_1[0xde]) {
      param_2 = param_1[0xdd];
      pppuVar6 = pppuVar14;
      param_3 = ppuVar16;
      _memcmp();
      if ((int)pppuVar6 == 0) {
        uVar5 = 0;
        goto LAB_10a651cdc;
      }
    }
    param_3 = (undefined **)&UNK_10f66a659;
    pppuVar6 = (undefined ***)0x1;
    param_2 = (undefined **)0x12;
    func_0x00010ae06f08();
    uVar5 = 0;
    param_1[0xdd] = (undefined **)pppuVar14;
    param_1[0xde] = ppuVar16;
  }
LAB_10a651cdc:
  param_1 = pppuVar6;
  if (pppuVar11 != (undefined ***)0x0) {
    pppuVar13 = pppuVar11 + 1;
    do {
      ppuVar9 = *pppuVar13;
      cVar1 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(pppuVar13,0x10);
      if (bVar17) {
        *pppuVar13 = (undefined **)((long)ppuVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuVar11)[2])(pppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = pppuVar11;
    }
  }
LAB_10a651d10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010a36313c(&pppuStack_88);
    __Unwind_Resume();
    if (((ulong)param_1 & 1) == 0) {
      if ((param_3 == (undefined **)0x0) || (*(int *)(param_3 + 3) < 0x172)) {
        uVar5 = 0;
      }
      else {
        pbVar7 = (byte *)0x113835028;
        FUN_10a1c6264();
        if ((*pbVar7 >> 1 & 1) == 0) {
          uVar5 = 0;
        }
        else {
          puVar12 = param_2[0x18a];
          if (puVar12[0x181] == '\x01') {
            uVar5 = (uint)(byte)puVar12[0x180];
          }
          else {
            lVar15 = *(long *)(puVar12 + 0x188);
            if (lVar15 != 0) {
              func_0x00010a778274();
            }
            uVar5 = (uint)lVar15;
            *(ushort *)(puVar12 + 0x180) = (ushort)lVar15 | 0x100;
          }
        }
      }
    }
    else {
      uVar5 = 1;
    }
    return uVar5 & 1;
  }
  return uVar5;
}



/* Entry: 10a651d9c; end: 10a651e27;  */

uint FUN_10a651d9c(ulong param_1,long param_2,long param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 & 1) == 0) {
    if ((param_3 == 0) || (*(int *)(param_3 + 0x18) < 0x172)) {
      uVar1 = 0;
    }
    else {
      pbVar2 = (byte *)0x113835028;
      FUN_10a1c6264();
      if ((*pbVar2 >> 1 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        lVar4 = *(long *)(param_2 + 0xc50);
        if (*(char *)(lVar4 + 0x181) == '\x01') {
          uVar1 = (uint)*(byte *)(lVar4 + 0x180);
        }
        else {
          lVar3 = *(long *)(lVar4 + 0x188);
          if (lVar3 != 0) {
            func_0x00010a778274();
          }
          uVar1 = (uint)lVar3;
          *(ushort *)(lVar4 + 0x180) = (ushort)lVar3 | 0x100;
        }
      }
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}



/* Entry: 10a651e28; end: 10a65204f;  */

/* WARNING: Removing unreachable block (ram,0x00010a651f6c) */
/* WARNING: Removing unreachable block (ram,0x00010a651f70) */
/* WARNING: Removing unreachable block (ram,0x00010a651f78) */
/* WARNING: Removing unreachable block (ram,0x00010a651f80) */
/* WARNING: Removing unreachable block (ram,0x00010a651f84) */

undefined *** FUN_10a651e28(undefined8 *param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined **)0x258;
  __Znwm();
  ppuVar4[1] = (undefined *)0x0;
  ppuVar4[2] = (undefined *)0x0;
  *ppuVar4 = (undefined *)&PTR_FUN_110bab160;
  ppuVar7 = ppuVar4 + 3;
  FUN_10ab45014(ppuVar7,param_2);
  ppuStack_78 = ppuVar7;
  ppuStack_70 = ppuVar4;
  FUN_10a190c74(&ppuStack_78,ppuVar4 + 8,ppuVar7);
  FUN_10a190944(&uStack_88,&ppuStack_78);
  ppuVar7 = ppuStack_70;
  if (ppuStack_70 != (undefined **)0x0) {
    ppuVar4 = ppuStack_70 + 1;
    do {
      puVar6 = *ppuVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar3) {
        *ppuVar4 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  if (pppuStack_80 == (undefined ***)0x0) {
    *param_1 = uStack_88;
    param_1[1] = 0;
  }
  else {
    pppuVar5 = pppuStack_80 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_88;
    param_1[1] = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar5 = pppuStack_80 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar5 = &ppuStack_70;
  param_1[2] = 0x10a67878c;
  param_1[3] = &PTR_DAT_110c07390;
  param_1[4] = uStack_88;
  param_1[5] = pppuStack_80;
  uStack_60 = 0;
  uStack_68 = 0;
  ppuStack_78 = (undefined **)&UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  FUN_10a044790(&ppuStack_78);
  (*(code *)*ppuStack_70)();
  if (pppuStack_80 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_80 + 1;
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
      (*(code *)(*pppuStack_80)[2])(pppuStack_80);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar5 = pppuStack_80;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  FUN_10a0617bc(&ppuStack_78);
  __Unwind_Resume();
  FUN_10a044790(pppuVar5 + 2);
  (*(code *)*pppuVar5[3])();
  ppuVar7 = pppuVar5[1];
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar4 = ppuVar7 + 1;
    do {
      puVar6 = *ppuVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar3) {
        *ppuVar4 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar7);
    }
  }
  return pppuVar5;
}



/* Entry: 10a652050; end: 10a652087;  */

long FUN_10a652050(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a044790(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
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



/* Entry: 10a652088; end: 10a6521d3;  */

void FUN_10a652088(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined8 *puStack_f0;
  long *plStack_e8;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a650f80(&uStack_80,param_3,*(undefined1 *)(param_3 + 0x77c),param_3 + 0x77e,
                *(undefined1 *)(param_3 + 0x782),*(undefined1 *)(param_3 + 0x77d),
                *(undefined1 *)(param_3 + 0x6c8));
  uVar18 = uStack_80;
  plStack_88 = (long *)ppuStack_78;
  uStack_90 = uStack_80;
  uStack_80 = 0;
  ppuStack_78 = (undefined8 **)0x0;
  FUN_10a42646c(param_3,&uStack_90);
  plVar9 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if (*(char *)(*(long *)(param_3 + 0x7a0) + 800) == '\x01') {
    *(undefined1 *)(*(long *)(param_3 + 0x7a0) + 800) = 0;
  }
  FUN_10a044790(auStack_70);
  ppuVar4 = apuStack_68;
  (*(code *)*apuStack_68[0])();
  ppuVar5 = ppuStack_78;
  if (ppuStack_78 != (undefined8 **)0x0) {
    ppuVar6 = ppuStack_78 + 1;
    do {
      puVar8 = *ppuVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar3) {
        *ppuVar6 = (undefined8 *)((long)puVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_78)[2])(ppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar4 = ppuVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_10a0617bc(&uStack_90);
    func_0x00010a015cb4(&uStack_80);
    __Unwind_Resume();
    fVar13 = (float)param_2;
    fVar12 = (float)uVar18;
    for (plVar9 = (long *)ppuVar4[0xc1][2]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      FUN_10a1c5098(ppuVar4 + 0xbf,plVar9 + 2);
      fVar13 = (float)param_2;
      fVar12 = (float)uVar18;
    }
    ppuVar5 = ppuVar4 + 0x9e;
    puVar10 = ppuVar4[0xad];
    ppuVar6 = ppuVar5;
    (*(code *)(*ppuVar5)[1])();
    puVar8 = ppuVar6[0x28];
    if ((*(byte *)((long)puVar8 + 0x2a) & 0x24) != 0) {
      FUN_10a3e8fd4(puVar8);
    }
    if (*(char *)(ppuVar4 + 0x9f) == '\x01') {
      plVar9 = ppuVar4[0xa1];
      if ((plVar9 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
        puVar11 = ppuVar4[0xa0];
        plVar1 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        if (puVar11 != (undefined8 *)0x0) {
          return;
        }
      }
      ppuVar4 = ppuVar5;
      (*(code *)(*ppuVar5)[1])();
      puVar11 = ppuVar4[0x49];
      if (puVar11 == (undefined8 *)0x0) {
        uVar19 = *(undefined8 *)(puVar10[0xf1] + 0x24);
        uVar18 = *(undefined8 *)(puVar10[0xf1] + 0x2c);
        FUN_10a9dc58c();
        puStack_f0 = (undefined8 *)0x0;
        plStack_e8 = (long *)0x0;
        plVar9 = ppuVar5[1];
        if ((plVar9 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar9, plVar9 != (long *)0x0)) {
          puStack_f0 = *ppuVar5;
        }
        plVar9 = plStack_e8;
        fVar14 = (float)uVar18;
        fVar15 = (float)((ulong)uVar18 >> 0x20);
        fVar12 = ((float)uVar19 + fVar14) * 0.5;
        fVar13 = ((float)((ulong)uVar19 >> 0x20) + fVar15) * 0.5;
        uStack_108 = CONCAT44(fVar13,fVar12);
        uStack_100 = 0;
        uStack_fc = CONCAT44(fVar15 - fVar13,fVar14 - fVar12);
        uStack_f4 = 0;
        FUN_10a602f60();
        if (plVar9 == (long *)0x0) {
          return;
        }
        plVar1 = plVar9 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      else {
        FUN_10a9dc58c();
        puStack_f0 = (undefined8 *)0x0;
        plStack_e8 = (long *)0x0;
        plVar9 = ppuVar5[1];
        if ((plVar9 == (long *)0x0) ||
           (__ZNSt3__119__shared_weak_count4lockEv(), plStack_e8 = plVar9, plVar9 == (long *)0x0)) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = *ppuVar5;
          puStack_f0 = puVar10;
        }
        plVar9 = plStack_e8;
        FUN_10a394a64(puVar11);
        func_0x00010acae698(puVar11 + 0x4d);
        uVar18 = NEON_fmov(0x3f800000,4);
        fVar15 = (float)((ulong)uVar18 >> 0x20);
        fVar16 = ((float)puVar11[0x54] + (float)uVar18) * 0.5;
        fVar17 = ((float)((ulong)puVar11[0x54] >> 0x20) + fVar15) * 0.5;
        fVar14 = fVar12 * ((float)uVar18 - fVar16);
        fVar15 = fVar13 * (fVar15 - fVar17);
        fVar12 = (fVar14 - fVar12 * fVar16) * 0.5;
        fVar13 = (fVar15 - fVar13 * fVar17) * 0.5;
        uStack_108 = CONCAT44(fVar13,fVar12);
        uStack_100 = 0;
        uStack_fc = CONCAT44(fVar15 - fVar13,fVar14 - fVar12);
        uStack_f4 = 0;
        FUN_10a602f60(puVar10,&uStack_108,puVar8 + 0x18);
        if (plVar9 == (long *)0x0) {
          return;
        }
        plVar1 = plVar9 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a6521d4; end: 10a652213;  */

void FUN_10a6521d4(float param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  long lStack_60;
  long *plStack_58;
  
  fVar10 = (float)param_2;
  for (plVar6 = *(long **)(*(long *)(param_3 + 0x608) + 0x10); plVar6 != (long *)0x0;
      plVar6 = (long *)*plVar6) {
    FUN_10a1c5098(param_3 + 0x5f8,plVar6 + 2);
    fVar10 = (float)param_2;
  }
  plVar6 = (long *)(param_3 + 0x4f0);
  lVar8 = *(long *)(param_3 + 0x568);
  plVar4 = plVar6;
  (**(code **)(*plVar6 + 8))();
  lVar7 = plVar4[0x28];
  if ((*(byte *)(lVar7 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar7);
  }
  if (*(char *)(param_3 + 0x4f8) == '\x01') {
    plVar4 = *(long **)(param_3 + 0x508);
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar9 = *(long *)(param_3 + 0x500);
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
      if (lVar9 != 0) {
        return;
      }
    }
    plVar4 = plVar6;
    (**(code **)(*plVar6 + 8))();
    lVar9 = plVar4[0x49];
    if (lVar9 == 0) {
      lVar7 = *(long *)(lVar8 + 0x788);
      uVar16 = *(undefined8 *)(lVar7 + 0x24);
      uVar15 = *(undefined8 *)(lVar7 + 0x2c);
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)plVar6[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 != (long *)0x0)) {
        lStack_60 = *plVar6;
      }
      plVar6 = plStack_58;
      fVar11 = (float)uVar15;
      fVar12 = (float)((ulong)uVar15 >> 0x20);
      fVar10 = ((float)uVar16 + fVar11) * 0.5;
      fVar13 = ((float)((ulong)uVar16 >> 0x20) + fVar12) * 0.5;
      uStack_78 = CONCAT44(fVar13,fVar10);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar12 - fVar13,fVar11 - fVar10);
      uStack_64 = 0;
      FUN_10a602f60();
      if (plVar6 == (long *)0x0) {
        return;
      }
      plVar4 = plVar6 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)plVar6[1];
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar6;
        lStack_60 = lVar8;
      }
      plVar6 = plStack_58;
      FUN_10a394a64(lVar9);
      func_0x00010acae698(lVar9 + 0x268);
      uVar15 = NEON_fmov(0x3f800000,4);
      fVar12 = (float)((ulong)uVar15 >> 0x20);
      fVar13 = ((float)*(undefined8 *)(lVar9 + 0x2a0) + (float)uVar15) * 0.5;
      fVar14 = ((float)((ulong)*(undefined8 *)(lVar9 + 0x2a0) >> 0x20) + fVar12) * 0.5;
      fVar11 = param_1 * ((float)uVar15 - fVar13);
      fVar12 = fVar10 * (fVar12 - fVar14);
      fVar13 = (fVar11 - param_1 * fVar13) * 0.5;
      fVar10 = (fVar12 - fVar10 * fVar14) * 0.5;
      uStack_78 = CONCAT44(fVar10,fVar13);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar12 - fVar10,fVar11 - fVar13);
      uStack_64 = 0;
      FUN_10a602f60(lVar8,&uStack_78,lVar7 + 0xc0);
      if (plVar6 == (long *)0x0) {
        return;
      }
      plVar4 = plVar6 + 1;
      do {
        lVar7 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10a652214; end: 10a65226f;  */

void FUN_10a652214(float param_1,float param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = param_3[0xf];
  plVar4 = param_3;
  (**(code **)(*param_3 + 8))();
  lVar6 = plVar4[0x28];
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  if ((char)param_3[1] == '\x01') {
    plVar4 = (long *)param_3[3];
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar8 = param_3[2];
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
      if (lVar8 != 0) {
        return;
      }
    }
    plVar4 = param_3;
    (**(code **)(*param_3 + 8))();
    lVar8 = plVar4[0x49];
    if (lVar8 == 0) {
      uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0x788) + 0x24);
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x788) + 0x2c);
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)param_3[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 != (long *)0x0)) {
        lStack_60 = *param_3;
      }
      plVar4 = plStack_58;
      fVar9 = (float)uVar13;
      fVar10 = (float)((ulong)uVar13 >> 0x20);
      fVar11 = ((float)uVar14 + fVar9) * 0.5;
      fVar12 = ((float)((ulong)uVar14 >> 0x20) + fVar10) * 0.5;
      uStack_78 = CONCAT44(fVar12,fVar11);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar10 - fVar12,fVar9 - fVar11);
      uStack_64 = 0;
      FUN_10a602f60();
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)param_3[1];
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) {
        lVar7 = 0;
      }
      else {
        lVar7 = *param_3;
        lStack_60 = lVar7;
      }
      plVar4 = plStack_58;
      FUN_10a394a64(lVar8);
      func_0x00010acae698(lVar8 + 0x268);
      uVar13 = NEON_fmov(0x3f800000,4);
      fVar10 = (float)((ulong)uVar13 >> 0x20);
      fVar11 = ((float)*(undefined8 *)(lVar8 + 0x2a0) + (float)uVar13) * 0.5;
      fVar12 = ((float)((ulong)*(undefined8 *)(lVar8 + 0x2a0) >> 0x20) + fVar10) * 0.5;
      fVar9 = param_1 * ((float)uVar13 - fVar11);
      fVar10 = param_2 * (fVar10 - fVar12);
      fVar11 = (fVar9 - param_1 * fVar11) * 0.5;
      fVar12 = (fVar10 - param_2 * fVar12) * 0.5;
      uStack_78 = CONCAT44(fVar12,fVar11);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar10 - fVar12,fVar9 - fVar11);
      uStack_64 = 0;
      FUN_10a602f60(lVar7,&uStack_78,lVar6 + 0xc0);
      if (plVar4 == (long *)0x0) {
        return;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a652270; end: 10a6522af;  */

void FUN_10a652270(float param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  long lStack_60;
  long *plStack_58;
  
  fVar10 = (float)param_2;
  for (plVar7 = *(long **)(*(long *)(param_3 + 0x5a0) + 0x10); plVar7 != (long *)0x0;
      plVar7 = (long *)*plVar7) {
    FUN_10a1c5098(param_3 + 0x590,plVar7 + 2);
    fVar10 = (float)param_2;
  }
  plVar7 = (long *)(param_3 + 0x488);
  lVar8 = *(long *)(param_3 + 0x500);
  plVar4 = plVar7;
  (**(code **)(*plVar7 + 8))();
  lVar6 = plVar4[0x28];
  if ((*(byte *)(lVar6 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar6);
  }
  if (*(char *)(param_3 + 0x490) == '\x01') {
    plVar4 = *(long **)(param_3 + 0x4a0);
    if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)
       ) {
      lVar9 = *(long *)(param_3 + 0x498);
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
      if (lVar9 != 0) {
        return;
      }
    }
    plVar4 = plVar7;
    (**(code **)(*plVar7 + 8))();
    lVar9 = plVar4[0x49];
    if (lVar9 == 0) {
      lVar6 = *(long *)(lVar8 + 0x788);
      uVar16 = *(undefined8 *)(lVar6 + 0x24);
      uVar15 = *(undefined8 *)(lVar6 + 0x2c);
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)plVar7[1];
      if ((plVar4 != (long *)0x0) &&
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 != (long *)0x0)) {
        lStack_60 = *plVar7;
      }
      plVar7 = plStack_58;
      fVar11 = (float)uVar15;
      fVar12 = (float)((ulong)uVar15 >> 0x20);
      fVar10 = ((float)uVar16 + fVar11) * 0.5;
      fVar13 = ((float)((ulong)uVar16 >> 0x20) + fVar12) * 0.5;
      uStack_78 = CONCAT44(fVar13,fVar10);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar12 - fVar13,fVar11 - fVar10);
      uStack_64 = 0;
      FUN_10a602f60();
      if (plVar7 == (long *)0x0) {
        return;
      }
      plVar4 = plVar7 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      FUN_10a9dc58c();
      lStack_60 = 0;
      plStack_58 = (long *)0x0;
      plVar4 = (long *)plVar7[1];
      if ((plVar4 == (long *)0x0) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar4, plVar4 == (long *)0x0)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar7;
        lStack_60 = lVar8;
      }
      plVar7 = plStack_58;
      FUN_10a394a64(lVar9);
      func_0x00010acae698(lVar9 + 0x268);
      uVar15 = NEON_fmov(0x3f800000,4);
      fVar12 = (float)((ulong)uVar15 >> 0x20);
      fVar13 = ((float)*(undefined8 *)(lVar9 + 0x2a0) + (float)uVar15) * 0.5;
      fVar14 = ((float)((ulong)*(undefined8 *)(lVar9 + 0x2a0) >> 0x20) + fVar12) * 0.5;
      fVar11 = param_1 * ((float)uVar15 - fVar13);
      fVar12 = fVar10 * (fVar12 - fVar14);
      fVar13 = (fVar11 - param_1 * fVar13) * 0.5;
      fVar10 = (fVar12 - fVar10 * fVar14) * 0.5;
      uStack_78 = CONCAT44(fVar10,fVar13);
      uStack_70 = 0;
      uStack_6c = CONCAT44(fVar12 - fVar10,fVar11 - fVar13);
      uStack_64 = 0;
      FUN_10a602f60(lVar8,&uStack_78,lVar6 + 0xc0);
      if (plVar7 == (long *)0x0) {
        return;
      }
      plVar4 = plVar7 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  return;
}



/* Entry: 10a6522b0; end: 10a652423;  */

void FUN_10a6522b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  while( true ) {
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((char)param_1[0xf3] == '\x01') {
      unaff_x21 = (long *)param_1[0x2d];
      unaff_x20 = (long *)param_1[0x2e];
      if (((unaff_x21[0x49] == 0) || ((*(ushort *)(unaff_x21[0x49] + 0x180) & 0x17) != 0)) &&
         (lVar2 = param_1[0xf1], lVar2 != 0)) {
        uVar3 = *(undefined4 *)(lVar2 + 0x24);
        uVar4 = *(uint *)(lVar2 + 0x28);
        uVar5 = *(undefined4 *)(lVar2 + 0x2c);
        uVar6 = *(uint *)(lVar2 + 0x30);
        *(undefined4 *)((long)register0x00000008 + -0x84) = uVar3;
        *(ulong *)((long)register0x00000008 + -0x80) = (ulong)uVar4;
        *(undefined4 *)((long)register0x00000008 + -0x90) = uVar5;
        *(ulong *)((long)register0x00000008 + -0x8c) = (ulong)uVar4;
        *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar5;
        *(ulong *)((long)register0x00000008 + -0x98) = (ulong)uVar6;
        *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar3;
        *(ulong *)((long)register0x00000008 + -0xa4) = (ulong)uVar6;
        unaff_x19 = unaff_x21[0x28];
        if ((*(byte *)(unaff_x19 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(unaff_x19);
        }
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f8000003f800000;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3f66666600000000;
        param_1 = unaff_x20;
        plVar1 = unaff_x21;
        FUN_10a3df648(unaff_x20,unaff_x21,(undefined1 *)((long)register0x00000008 + -0x78),8);
        if (plVar1 != (long *)0x0) {
          unaff_x22 = (long)plVar1 << 3;
          plVar1 = param_1;
          do {
            unaff_x20 = plVar1 + 1;
            unaff_x21 = (long *)*plVar1;
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0x84),
                          (undefined1 *)((long)register0x00000008 + -0x90),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0x90),
                          (undefined1 *)((long)register0x00000008 + -0x9c),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0x9c),
                          (undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            param_1 = unaff_x21;
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0x84),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            unaff_x22 = unaff_x22 + -8;
            plVar1 = unaff_x20;
          } while (unaff_x22 != 0);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10a652424;
    ___stack_chk_fail();
    param_1 = param_1 + -0xd;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  }
  return;
}



/* Entry: 10a652424; end: 10a652583;  */

void FUN_10a652424(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  while( true ) {
    plVar1 = param_1 + -0xd;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    if ((char)param_1[0xe6] == '\x01') {
      unaff_x21 = (long *)param_1[0x20];
      unaff_x20 = (long *)param_1[0x21];
      if (((unaff_x21[0x49] == 0) || ((*(ushort *)(unaff_x21[0x49] + 0x180) & 0x17) != 0)) &&
         (lVar3 = param_1[0xe4], lVar3 != 0)) {
        uVar4 = *(undefined4 *)(lVar3 + 0x24);
        uVar5 = *(uint *)(lVar3 + 0x28);
        uVar6 = *(undefined4 *)(lVar3 + 0x2c);
        uVar7 = *(uint *)(lVar3 + 0x30);
        *(undefined4 *)((long)register0x00000008 + -0x84) = uVar4;
        *(ulong *)((long)register0x00000008 + -0x80) = (ulong)uVar5;
        *(undefined4 *)((long)register0x00000008 + -0x90) = uVar6;
        *(ulong *)((long)register0x00000008 + -0x8c) = (ulong)uVar5;
        *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar6;
        *(ulong *)((long)register0x00000008 + -0x98) = (ulong)uVar7;
        *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar4;
        *(ulong *)((long)register0x00000008 + -0xa4) = (ulong)uVar7;
        unaff_x19 = unaff_x21[0x28];
        if ((*(byte *)(unaff_x19 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(unaff_x19);
        }
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3f8000003f800000;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3f66666600000000;
        plVar1 = unaff_x20;
        plVar2 = unaff_x21;
        FUN_10a3df648(unaff_x20,unaff_x21,(undefined1 *)((long)register0x00000008 + -0x78),8);
        if (plVar2 != (long *)0x0) {
          unaff_x22 = (long)plVar2 << 3;
          plVar2 = plVar1;
          do {
            unaff_x20 = plVar2 + 1;
            unaff_x21 = (long *)*plVar2;
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0x84),
                          (undefined1 *)((long)register0x00000008 + -0x90),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0x90),
                          (undefined1 *)((long)register0x00000008 + -0x9c),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0x9c),
                          (undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            plVar1 = unaff_x21;
            FUN_10aaf962c(unaff_x21,unaff_x19 + 0xc0,
                          (undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0x84),
                          (undefined1 *)((long)register0x00000008 + -0xc0),0);
            unaff_x22 = unaff_x22 + -8;
            plVar2 = unaff_x20;
          } while (unaff_x22 != 0);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    unaff_x30 = FUN_10a652424;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_1 = plVar1;
  }
  return;
}



/* Entry: 10a652584; end: 10a65262f;  */

void FUN_10a652584(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x168) + 0x248);
  if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0x180) & 0x17) == 0)) {
    lVar2 = *(long *)(param_1 + 0x170);
    FUN_10a394a64(lVar1);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28c);
    uStack_50 = *(undefined8 *)(lVar1 + 0x294);
    uStack_38 = 0x3f800000;
    uStack_48 = 0x3f800000;
    FUN_10a396450(0x3f800000,*(undefined8 *)(lVar2 + 0xa20),lVar1 + 0x268,param_1,&uStack_40,
                  &uStack_50,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x300);
  *(long *)(param_1 + 0x300) = 0;
  if (lVar1 != 0) {
    func_0x00010a3f1eac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a652630; end: 10a652747;  */

undefined1 * FUN_10a652630(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_30;
  puVar1 = param_1;
  if (0xcd < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    puVar1 = *(undefined1 **)(param_1 + 0x168);
    FUN_10a433470();
    if (((int)puVar1 != 0) &&
       (((puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x168) + 0x248), puVar1 == (undefined1 *)0x0
         || ((*(ushort *)(puVar1 + 0x180) & 0x17) != 0)) ||
        (FUN_10a3958f0(), puVar1 == (undefined1 *)0x0)))) {
      uStack_28 = 0x3a;
      puStack_30 = &UNK_10f66ad98;
      FUN_10a0edfc4();
      *(undefined ***)((long)ppuVar2 + 0x2a0) = &PTR_DAT_110b17898;
      func_0x00010a004dac((undefined1 *)((long)ppuVar2 + 0x2a8));
      *(undefined ***)((long)ppuVar2 + 0x1d8) = &PTR_DAT_110b17898;
      func_0x00010a004dac((undefined1 *)((long)ppuVar2 + 0x1e0));
      *(undefined ***)((long)ppuVar2 + 0x138) = &PTR_DAT_110b17898;
      func_0x00010a004dac((undefined1 *)((long)ppuVar2 + 0x140));
      if (*(char *)((long)ppuVar2 + 0x6f) < '\0') {
        __ZdlPv(*(undefined8 *)((long)ppuVar2 + 0x58));
      }
      if (*(char *)((long)ppuVar2 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)((long)ppuVar2 + 8));
      }
      return (undefined1 *)ppuVar2;
    }
  }
  return puVar1;
}



/* Entry: 10a657c70; end: 10a657e9b;  */

void FUN_10a657c70(float param_1,undefined8 *param_2,long *param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_84;
  
  uStack_84 = 0x3f800000;
  FUN_10a14e0c0(&lStack_a0,(param_3[1] - *param_3 >> 4) * -0x5555555555555555,&uStack_84);
  if (param_4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    fVar10 = 1.0;
    FUN_10a0ca588(param_2,lStack_a0,lStack_98,lStack_98 - lStack_a0 >> 2);
  }
  else {
    lVar5 = *param_3;
    if (param_3[1] == lVar5) {
      uVar7 = lStack_98 - lStack_a0 >> 2;
      fVar10 = 1.0;
    }
    else {
      uVar9 = 0;
      fVar10 = 1.0;
      do {
        if ((0.0 < param_1) && (lVar5 = *(long *)(lVar5 + uVar9 * 0x30 + 0x20), lVar5 != 0)) {
          uStack_84 = 3;
          FUN_10a1cc830(lVar5,&uStack_84);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x18);
            ___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110bad390,0);
            plVar8 = *(long **)(lVar5 + 0x20);
            if (plVar8 == (long *)0x0) {
              fVar11 = *(float *)(lVar6 + 0xc);
            }
            else {
              plVar1 = plVar8 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = *plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              fVar11 = *(float *)(lVar6 + 0xc);
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
                (**(code **)(*plVar8 + 0x10))(plVar8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            if ((ulong)(lStack_98 - lStack_a0 >> 2) <= uVar9) goto LAB_10a657e74;
            *(float *)(lStack_a0 + uVar9 * 4) = fVar11 / param_1;
          }
        }
        uVar7 = lStack_98 - lStack_a0 >> 2;
        if (uVar7 <= uVar9) {
LAB_10a657e74:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a657e78);
          (*pcVar4)();
        }
        fVar11 = *(float *)(lStack_a0 + uVar9 * 4);
        if (fVar11 <= fVar10) {
          fVar11 = fVar10;
        }
        fVar10 = fVar11;
        uVar9 = uVar9 + 1;
        lVar5 = *param_3;
      } while (uVar9 < (ulong)((param_3[1] - lVar5 >> 4) * -0x5555555555555555));
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    FUN_10a0ca588(param_2,lStack_a0,lStack_98,uVar7);
  }
  *(float *)(param_2 + 3) = fVar10;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a657e9c; end: 10a658973;  */

long *****
FUN_10a657e9c(long *****param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined1 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long *****ppppplVar7;
  ulong uVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  ushort uVar12;
  long lVar13;
  long ****pppplVar14;
  long *****ppppplVar15;
  long ***ppplVar16;
  undefined1 auStack_288 [8];
  long ****pppplStack_280;
  long ****pppplStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined8 *puStack_258;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  long ***ppplStack_240;
  long ****pppplStack_238;
  long ***ppplStack_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  long ****pppplStack_218;
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
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_cc;
  undefined1 uStack_c1;
  undefined **ppuStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_b0;
  undefined1 auStack_a8 [8];
  long ***appplStack_a0 [7];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplVar16 = param_1[0x2e][0x152];
  uStack_cc = 0;
  if (0.0 < *(float *)(param_3 + 0x44)) {
    uStack_cc = CONCAT44(*(float *)(param_3 + 0x44) / 7.0,2);
  }
  uStack_1f0 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  pppplStack_218 = (long ****)0x0;
  pppplStack_220 = (long ****)0x0;
  uStack_1e8 = 0x3f800000;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0x3f800000;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_180 = 0x3f800000;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_f8 = 0x3f800000;
  plStack_e8 = (long *)0x0;
  uStack_f0 = 0;
  plStack_d8 = (long *)0x0;
  uStack_e0 = 0;
  FUN_10a658b1c(param_2 + 0x490,&pppplStack_220);
  plVar2 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar1 = plStack_e8 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a1f4af8(&pppplStack_220);
  uVar8 = *(ulong *)(param_3 + 0x60);
  puVar5 = *(undefined8 **)(param_3 + 0x58);
  if (-1 < (char)*(byte *)(param_3 + 0x6f)) {
    uVar8 = (ulong)*(byte *)(param_3 + 0x6f);
    puVar5 = (undefined8 *)(param_3 + 0x58);
  }
  uStack_250 = (param_4 & 0x100000000) == 0;
  uStack_260 = 0x5d;
  if (!(bool)uStack_250) {
    uStack_260 = (undefined4)param_4;
  }
  uStack_24f = *(undefined1 *)(param_1 + 0xdf);
  puStack_258 = &uStack_cc;
  uStack_25c = param_7;
  FUN_10a9e5bac(&pppplStack_220,ppplVar16[3],param_5,param_6,param_3 + 0x20,
                *(undefined8 *)(param_3 + 0x48),*(undefined2 *)(param_3 + 0x50),puVar5,uVar8);
  ppppplVar15 = &pppplStack_220;
  FUN_10a658b1c(param_2 + 0x490);
  plVar2 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar1 = plStack_e8 + 1;
    do {
      lVar13 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  ppppplVar7 = &pppplStack_220;
  FUN_10a1f4af8();
  if (*(long *)(param_2 + 0x5c0) != 0) {
    if (*(long *)(param_2 + 0x470) == 0) {
      ppppplVar15 = (long *****)param_1[0x2e];
      ppuStack_c0 = (undefined **)0x0;
      FUN_10a199388(&pppplStack_220,&uStack_c1,&ppuStack_c0,*(long *)(param_2 + 0x5c0) + 0x28);
      FUN_10a658cc0(&ppplStack_b8,ppppplVar15,&pppplStack_220);
      pppplVar14 = pppplStack_218;
      plVar2 = (long *)(param_2 + 0x470);
      if ((long *****)pppplStack_218 != (long *****)0x0) {
        ppppplVar7 = (long *****)(pppplStack_218 + 1);
        do {
          pppplVar11 = *ppppplVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar4) {
            *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppplVar11 == (long ****)0x0) {
          (*(code *)(*pppplStack_218)[2])(pppplStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
        }
      }
      ppplVar16 = ppplStack_b8;
      ppplStack_230 = ppplStack_b8;
      pppplStack_228 = pppplStack_b0;
      ppplStack_b8 = (long ***)0x0;
      pppplStack_b0 = (long ****)0x0;
      pppplVar14 = (long ****)*plVar2;
      if (pppplVar14 != (long ****)ppplVar16) {
        if (pppplVar14 != (long ****)0x0) {
          lVar13 = -0x470;
          if (cRam00000001137eb71e == '\0') {
            lVar13 = -0xffff;
          }
          func_0x00010a1bf190(pppplVar14 + 0x36,(long)plVar2 + lVar13);
        }
        ppppplVar15 = (long *****)&ppplStack_230;
        FUN_10a015bec(plVar2);
        ppppplVar7 = &pppplStack_220;
        func_0x00010a1bd170();
        if ((((ulong)ppppplVar7 & 1) == 0) && (*plVar2 != 0)) {
          lVar13 = -0x470;
          if (cRam00000001137eb71e == '\0') {
            lVar13 = -0xffff;
          }
          ppppplVar7 = (long *****)(*plVar2 + 0x1b0);
          ppppplVar15 = (long *****)((long)plVar2 + lVar13);
          func_0x00010a1bf34c();
        }
        lVar13 = -0x470;
        if (cRam00000001137eb71e == '\0') {
          lVar13 = -0xffff;
        }
        ppppplVar10 = (long *****)((long)plVar2 + lVar13);
        if ((*(ushort *)((long)ppppplVar10 + 0xe9) >> 8 & 1) == 0) {
          if ((((ppppplVar10[0x18] != (long ****)0x0) ||
               ((*(ushort *)((long)ppppplVar10 + 0xe9) >> 9 & 1) != 0)) ||
              (ppppplVar10[0x1c] != (long ****)0x0)) ||
             ((*(ushort *)(ppppplVar10 + 6) >> 8 & 1) == 0)) {
LAB_10a658280:
            uVar8 = 0;
            func_0x00010a1bd170();
            if ((uVar8 & 1) == 0) {
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1d8 = 0;
              uStack_1e0 = 0;
              uStack_208 = 0;
              uStack_210 = 0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              pppplStack_218 = (long ****)0x0;
              pppplStack_220 = (long ****)0x0;
              ppuStack_c0 = &PTR_DAT_110c06bd0;
              FUN_10a0dad0c((ulong)&pppplStack_220 | 8,&ppuStack_c0);
              lVar13 = -0x470;
              if (cRam00000001137eb71e == '\0') {
                lVar13 = -0xffff;
              }
              iVar6 = (int)plVar2 + (int)lVar13;
              (**(code **)(*(long *)((long)plVar2 + lVar13) + 0x18))();
              lVar13 = -0x470;
              if (cRam00000001137eb71e == '\0') {
                lVar13 = -0xffff;
              }
              uVar8 = (long)plVar2 + lVar13;
              uVar12 = *(ushort *)(uVar8 + 0x30);
              if (iVar6 == 0) {
                if ((uVar12 >> 8 & 1) == 0) {
                  FUN_10a1bfe94(uVar8,&pppplStack_220);
                  if ((uVar8 & 1) == 0) {
                    lVar13 = -0x470;
                    if (cRam00000001137eb71e == '\0') {
                      lVar13 = -0xffff;
                    }
                    uVar8 = (long)plVar2 + lVar13;
                    (**(code **)(*(long *)((long)plVar2 + lVar13) + 0x10))(uVar8,&pppplStack_220);
                  }
                }
                else {
                  FUN_10a1bd5e0();
                  if (uVar8 != 0) {
                    FUN_10a1bd7d8();
                  }
                }
              }
              else {
                if ((uVar12 >> 7 & 1) == 0) {
                  *(long *****)(uVar8 + 0x40) = pppplStack_220;
                  *(ushort *)(uVar8 + 0x30) = uVar12 | 0x80;
                }
                uVar8 = uVar8 + 0x40;
                FUN_10a1bd398(uVar8,&pppplStack_220);
              }
              uVar12 = 0x470;
              if (cRam00000001137eb71e == '\0') {
                uVar12 = 0xffff;
              }
              lVar13 = 0x470;
              if (cRam00000001137eb71e == '\0') {
                lVar13 = 0xffff;
              }
              if ((*(ushort *)((long)plVar2 + (0xe9 - lVar13)) >> 8 & 1) != 0) {
                FUN_10a1bd5e0();
                uVar12 = 0x470;
                if (cRam00000001137eb71e == '\0') {
                  uVar12 = 0xffff;
                }
                if (uVar8 != 0) {
                  FUN_10a1bd648();
                  uVar12 = 0x470;
                  if (cRam00000001137eb71e == '\0') {
                    uVar12 = 0xffff;
                  }
                }
              }
              ppppplVar15 = &pppplStack_220;
              FUN_10a1c054c((long)plVar2 + (0x90 - (ulong)uVar12));
            }
            goto LAB_10a65846c;
          }
          ppppplVar10[0x14] = (long ****)((long)ppppplVar10[0x14] + 1);
        }
        else if ((*(ushort *)(ppppplVar10 + 6) >> 8 & 1) == 0) goto LAB_10a658280;
        pppplVar14 = ppppplVar10[0x1e];
        pppplVar11 = ppppplVar10[7];
        if ((pppplVar14 != (long ****)&PTR_DAT_110c06bd0 ||
             pppplVar11 != (long ****)&PTR_DAT_110c06bd0) &&
           (FUN_10a1bd5e0(), ppppplVar7 != (long *****)0x0)) {
          if (pppplVar14 != (long ****)&PTR_DAT_110c06bd0) {
            ppppplVar15 = ppppplVar10 + 0x12;
            FUN_10a1bd648(ppppplVar7,ppppplVar15,&PTR_DAT_110c06bd0);
            ppppplVar10[0x1e] = (long ****)&PTR_DAT_110c06bd0;
          }
          if (pppplVar11 != (long ****)&PTR_DAT_110c06bd0) {
            ppppplVar15 = ppppplVar10;
            FUN_10a1bd7d8(ppppplVar7,ppppplVar10,&PTR_DAT_110c06bd0);
            ppppplVar10[7] = (long ****)&PTR_DAT_110c06bd0;
          }
        }
      }
LAB_10a65846c:
      pppplVar14 = pppplStack_228;
      if ((long *****)pppplStack_228 != (long *****)0x0) {
        ppppplVar7 = (long *****)(pppplStack_228 + 1);
        do {
          pppplVar11 = *ppppplVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
          if (bVar4) {
            *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppplVar11 == (long ****)0x0) {
          (*(code *)(*pppplStack_228)[2])(pppplStack_228);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
        }
      }
      FUN_10a044790(auStack_a8);
      ppppplVar7 = (long *****)appplStack_a0;
      (*(code *)*appplStack_a0[0])();
      if ((long *****)pppplStack_b0 != (long *****)0x0) {
        ppppplVar10 = (long *****)(pppplStack_b0 + 1);
        do {
          pppplVar14 = *ppppplVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar4) {
            *ppppplVar10 = (long ****)((long)pppplVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
          ppppplVar9 = (long *****)pppplStack_b0;
        } while (cVar3 != '\0');
        goto LAB_10a6584d8;
      }
    }
    else {
      FUN_10a176c4c(&pppplStack_220);
      ppppplVar15 = (long *****)(*(long *)(param_2 + 0x5c0) + 0x28);
      ppppplVar7 = (long *****)pppplStack_220;
      FUN_10a1db4cc();
      if ((long *****)pppplStack_218 != (long *****)0x0) {
        ppppplVar10 = (long *****)(pppplStack_218 + 1);
        do {
          pppplVar14 = *ppppplVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
          if (bVar4) {
            *ppppplVar10 = (long ****)((long)pppplVar14 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
          ppppplVar9 = (long *****)pppplStack_218;
        } while (cVar3 != '\0');
LAB_10a6584d8:
        if (pppplVar14 == (long ****)0x0) {
          (*(code *)(*ppppplVar9)[2])(ppppplVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppplVar7 = ppppplVar9;
        }
      }
    }
  }
  if (*(long *)(param_2 + 0x5d0) == 0) goto LAB_10a6588ec;
  if (*(long *)(param_2 + 0x480) == 0) {
    ppppplVar15 = (long *****)param_1[0x2e];
    ppuStack_c0 = (undefined **)0x0;
    FUN_10a199388(&pppplStack_220,&uStack_c1,&ppuStack_c0,*(long *)(param_2 + 0x5d0) + 0x28);
    FUN_10a658cc0(&ppplStack_b8,ppppplVar15,&pppplStack_220);
    pppplVar14 = pppplStack_218;
    plVar2 = (long *)(param_2 + 0x480);
    if ((long *****)pppplStack_218 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_218 + 1);
      do {
        pppplVar11 = *ppppplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar4) {
          *ppppplVar7 = (long ****)((long)pppplVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppplVar11 == (long ****)0x0) {
        (*(code *)(*pppplStack_218)[2])(pppplStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar14);
      }
    }
    ppplVar16 = ppplStack_b8;
    ppplStack_240 = ppplStack_b8;
    pppplStack_238 = pppplStack_b0;
    ppplStack_b8 = (long ***)0x0;
    pppplStack_b0 = (long ****)0x0;
    pppplVar14 = (long ****)*plVar2;
    if (pppplVar14 != (long ****)ppplVar16) {
      if (pppplVar14 != (long ****)0x0) {
        lVar13 = -0x480;
        if (cRam00000001137eb720 == '\0') {
          lVar13 = -0xffff;
        }
        func_0x00010a1bf190(pppplVar14 + 0x36,(long)plVar2 + lVar13);
      }
      ppppplVar15 = (long *****)&ppplStack_240;
      FUN_10a015bec(plVar2);
      ppppplVar7 = &pppplStack_220;
      func_0x00010a1bd170();
      if ((((ulong)ppppplVar7 & 1) == 0) && (*plVar2 != 0)) {
        lVar13 = -0x480;
        if (cRam00000001137eb720 == '\0') {
          lVar13 = -0xffff;
        }
        ppppplVar7 = (long *****)(*plVar2 + 0x1b0);
        ppppplVar15 = (long *****)((long)plVar2 + lVar13);
        func_0x00010a1bf34c();
      }
      lVar13 = -0x480;
      if (cRam00000001137eb720 == '\0') {
        lVar13 = -0xffff;
      }
      ppppplVar10 = (long *****)((long)plVar2 + lVar13);
      if ((*(ushort *)((long)ppppplVar10 + 0xe9) >> 8 & 1) == 0) {
        if ((((ppppplVar10[0x18] != (long ****)0x0) ||
             ((*(ushort *)((long)ppppplVar10 + 0xe9) >> 9 & 1) != 0)) ||
            (ppppplVar10[0x1c] != (long ****)0x0)) || ((*(ushort *)(ppppplVar10 + 6) >> 8 & 1) == 0)
           ) {
LAB_10a658678:
          uVar8 = 0;
          func_0x00010a1bd170();
          if ((uVar8 & 1) == 0) {
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            pppplStack_218 = (long ****)0x0;
            pppplStack_220 = (long ****)0x0;
            ppuStack_c0 = &PTR_DAT_110c06be8;
            FUN_10a0dad0c((ulong)&pppplStack_220 | 8,&ppuStack_c0);
            lVar13 = -0x480;
            if (cRam00000001137eb720 == '\0') {
              lVar13 = -0xffff;
            }
            iVar6 = (int)plVar2 + (int)lVar13;
            (**(code **)(*(long *)((long)plVar2 + lVar13) + 0x18))();
            lVar13 = -0x480;
            if (cRam00000001137eb720 == '\0') {
              lVar13 = -0xffff;
            }
            uVar8 = (long)plVar2 + lVar13;
            uVar12 = *(ushort *)(uVar8 + 0x30);
            if (iVar6 == 0) {
              if ((uVar12 >> 8 & 1) == 0) {
                FUN_10a1bfe94(uVar8,&pppplStack_220);
                if ((uVar8 & 1) == 0) {
                  lVar13 = -0x480;
                  if (cRam00000001137eb720 == '\0') {
                    lVar13 = -0xffff;
                  }
                  uVar8 = (long)plVar2 + lVar13;
                  (**(code **)(*(long *)((long)plVar2 + lVar13) + 0x10))(uVar8,&pppplStack_220);
                }
              }
              else {
                FUN_10a1bd5e0();
                if (uVar8 != 0) {
                  FUN_10a1bd7d8();
                }
              }
            }
            else {
              if ((uVar12 >> 7 & 1) == 0) {
                *(long *****)(uVar8 + 0x40) = pppplStack_220;
                *(ushort *)(uVar8 + 0x30) = uVar12 | 0x80;
              }
              uVar8 = uVar8 + 0x40;
              FUN_10a1bd398(uVar8,&pppplStack_220);
            }
            uVar12 = 0x480;
            if (cRam00000001137eb720 == '\0') {
              uVar12 = 0xffff;
            }
            lVar13 = 0x480;
            if (cRam00000001137eb720 == '\0') {
              lVar13 = 0xffff;
            }
            if ((*(ushort *)((long)plVar2 + (0xe9 - lVar13)) >> 8 & 1) != 0) {
              FUN_10a1bd5e0();
              uVar12 = 0x480;
              if (cRam00000001137eb720 == '\0') {
                uVar12 = 0xffff;
              }
              if (uVar8 != 0) {
                FUN_10a1bd648();
                uVar12 = 0x480;
                if (cRam00000001137eb720 == '\0') {
                  uVar12 = 0xffff;
                }
              }
            }
            ppppplVar15 = &pppplStack_220;
            FUN_10a1c054c((long)plVar2 + (0x90 - (ulong)uVar12));
          }
          goto LAB_10a658864;
        }
        ppppplVar10[0x14] = (long ****)((long)ppppplVar10[0x14] + 1);
      }
      else if ((*(ushort *)(ppppplVar10 + 6) >> 8 & 1) == 0) goto LAB_10a658678;
      pppplVar14 = ppppplVar10[0x1e];
      pppplVar11 = ppppplVar10[7];
      if ((pppplVar14 != (long ****)&PTR_DAT_110c06be8 ||
           pppplVar11 != (long ****)&PTR_DAT_110c06be8) &&
         (FUN_10a1bd5e0(), ppppplVar7 != (long *****)0x0)) {
        if (pppplVar14 != (long ****)&PTR_DAT_110c06be8) {
          ppppplVar15 = ppppplVar10 + 0x12;
          FUN_10a1bd648(ppppplVar7,ppppplVar15,&PTR_DAT_110c06be8);
          ppppplVar10[0x1e] = (long ****)&PTR_DAT_110c06be8;
        }
        if (pppplVar11 != (long ****)&PTR_DAT_110c06be8) {
          ppppplVar15 = ppppplVar10;
          FUN_10a1bd7d8(ppppplVar7,ppppplVar10,&PTR_DAT_110c06be8);
          ppppplVar10[7] = (long ****)&PTR_DAT_110c06be8;
        }
      }
    }
LAB_10a658864:
    param_1 = (long *****)pppplStack_238;
    if ((long *****)pppplStack_238 != (long *****)0x0) {
      ppppplVar7 = (long *****)(pppplStack_238 + 1);
      do {
        pppplVar14 = *ppppplVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppplVar7,0x10);
        if (bVar4) {
          *ppppplVar7 = (long ****)((long)pppplVar14 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppplVar14 == (long ****)0x0) {
        (*(code *)(*pppplStack_238)[2])(pppplStack_238);
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
      }
    }
    FUN_10a044790(auStack_a8);
    ppppplVar7 = (long *****)appplStack_a0;
    (*(code *)*appplStack_a0[0])();
    if ((long *****)pppplStack_b0 == (long *****)0x0) goto LAB_10a6588ec;
    ppppplVar10 = (long *****)(pppplStack_b0 + 1);
    do {
      pppplVar14 = *ppppplVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar4) {
        *ppppplVar10 = (long ****)((long)pppplVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppplVar9 = (long *****)pppplStack_b0;
    } while (cVar3 != '\0');
  }
  else {
    FUN_10a176c4c(&pppplStack_220);
    ppppplVar15 = (long *****)(*(long *)(param_2 + 0x5d0) + 0x28);
    ppppplVar7 = (long *****)pppplStack_220;
    FUN_10a1db4cc();
    if ((long *****)pppplStack_218 == (long *****)0x0) goto LAB_10a6588ec;
    ppppplVar10 = (long *****)(pppplStack_218 + 1);
    do {
      pppplVar14 = *ppppplVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppplVar10,0x10);
      if (bVar4) {
        *ppppplVar10 = (long ****)((long)pppplVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppppplVar9 = (long *****)pppplStack_218;
    } while (cVar3 != '\0');
  }
  if (pppplVar14 == (long ****)0x0) {
    (*(code *)(*ppppplVar9)[2])(ppppplVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppplVar7 = ppppplVar9;
  }
LAB_10a6588ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010a061678(&pppplStack_220);
    ppppplVar10 = ppppplVar7;
    __Unwind_Resume();
    pcStack_268 = FUN_10a658974;
    pppplVar14 = *ppppplVar15;
    if (*ppppplVar10 != pppplVar14) {
      *ppppplVar15 = (long ****)0x0;
      pppplVar11 = *ppppplVar10;
      *ppppplVar10 = pppplVar14;
      pppplStack_280 = (long ****)param_1;
      pppplStack_278 = (long ****)ppppplVar7;
      puStack_270 = &stack0xfffffffffffffff0;
      if (pppplVar11 != (long ****)0x0) {
        func_0x00010a20e1b8(ppppplVar10);
      }
      func_0x00010a1bd170(auStack_288);
      FUN_10a678df0(ppppplVar10);
    }
    return ppppplVar10;
  }
  return ppppplVar7;
}



/* Entry: 10a658974; end: 10a6589d3;  */

long * FUN_10a658974(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    *param_2 = 0;
    lVar1 = *param_1;
    *param_1 = lVar2;
    if (lVar1 != 0) {
      func_0x00010a20e1b8(param_1);
    }
    func_0x00010a1bd170(auStack_28);
    FUN_10a678df0(param_1);
  }
  return param_1;
}



/* Entry: 10a6589d4; end: 10a658b1b;  */

void FUN_10a6589d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  plVar5 = (long *)0x108;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110ba2088;
  plVar1 = plVar5 + 3;
  if (param_4 != (long *)0x0) {
    plVar2 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = param_3;
  plStack_48 = param_4;
  FUN_10a347bd4(plVar1,param_2,&uStack_50);
  if (param_4 != (long *)0x0) {
    plVar2 = param_4 + 1;
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
      (**(code **)(*param_4 + 0x10))(param_4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
  }
  plStack_60 = plVar1;
  plStack_58 = plVar5;
  FUN_10a0cfb64(&plStack_60,plVar5 + 8,plVar1);
  FUN_10a0cf858(param_1,&plStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar5 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a658b1c; end: 10a658cbf;  */

undefined8 * FUN_10a658b1c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  func_0x00010a66d3b8();
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_1[6] != 0) {
    func_0x00010a1f4dfc(param_1 + 3,param_1[5]);
    param_1[5] = 0;
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(param_1[3] + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    param_1[6] = 0;
  }
  uVar3 = param_2[3];
  param_2[3] = 0;
  lVar2 = param_1[3];
  param_1[3] = uVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = lVar2;
  param_1[4] = uVar3;
  param_2[4] = 0;
  lVar4 = param_2[6];
  param_1[6] = lVar4;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(lVar2 + 8);
    uVar6 = param_1[4];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      if (uVar6 <= uVar5) {
        uVar5 = uVar5 - uVar1 * uVar6;
      }
    }
    *(undefined8 **)(param_1[3] + uVar5 * 8) = param_1 + 5;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  func_0x00010a66d3f0(param_1 + 8,param_2 + 8);
  func_0x00010a66d440(param_1 + 0xb,param_2 + 0xb);
  func_0x00010a66d518(param_1 + 0x10,param_2 + 0x10);
  func_0x00010869e720(param_1 + 0x15,param_2 + 0x15);
  func_0x00010937d1e4(param_1 + 0x18);
  uVar3 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar3;
  param_1[0x1a] = param_2[0x1a];
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  func_0x00010869e720(param_1 + 0x1b,param_2 + 0x1b);
  if (*(char *)((long)param_1 + 0x107) < '\0') {
    __ZdlPv(param_1[0x1e]);
  }
  uVar7 = param_2[0x1f];
  uVar3 = param_2[0x1e];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar7;
  param_1[0x1e] = uVar3;
  *(undefined1 *)((long)param_2 + 0x107) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  func_0x000107c283f0(param_1 + 0x21,param_2 + 0x21);
  func_0x00010a66d354(param_1 + 0x26,param_2 + 0x26);
  func_0x00010a66d354(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



/* Entry: 10a658cc0; end: 10a658f4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a658e60) */
/* WARNING: Removing unreachable block (ram,0x00010a658e64) */
/* WARNING: Removing unreachable block (ram,0x00010a658e6c) */
/* WARNING: Removing unreachable block (ram,0x00010a658e74) */
/* WARNING: Removing unreachable block (ram,0x00010a658e78) */

void FUN_10a658cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  long *plVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined8 uVar15;
  ulong *puVar16;
  int iVar17;
  ulong *puVar18;
  undefined4 uVar19;
  long lVar20;
  ulong uVar21;
  undefined **ppuVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined *puVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  long lStack_180;
  long lStack_178;
  undefined4 uStack_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  undefined ***pppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (ulong *)0x2c0;
  uVar15 = param_6;
  __Znwm();
  uVar19 = (undefined4)uVar15;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = (ulong)&PTR_DAT_110b9fda0;
  puVar18 = puVar11 + 3;
  plVar25 = (long *)param_7[1];
  ppuStack_88 = (undefined **)param_7[1];
  puVar26 = (undefined *)*param_7;
  *param_7 = 0;
  param_7[1] = 0;
  puVar12 = puVar11;
  puStack_90 = puVar26;
  func_0x00010a0fda30();
  FUN_10ab6a888(puVar18,param_6,&puStack_90);
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 1;
    do {
      lVar20 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
    }
  }
  puVar16 = puVar11 + 8;
  uStack_b0 = puVar18;
  puStack_a8 = puVar11;
  FUN_10a05b2a8(&uStack_b0);
  iVar17 = (int)puVar18;
  FUN_10a05b04c(&uStack_a0,&uStack_b0);
  puVar18 = puStack_a8;
  if (puStack_a8 != (ulong *)0x0) {
    puVar11 = puStack_a8 + 1;
    do {
      uVar21 = *puVar11;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar11,0x10);
      if (bVar4) {
        *puVar11 = uVar21 - 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (uVar21 == 0) {
      (**(code **)(*puStack_a8 + 0x10))(puStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar18);
    }
  }
  if (pppuStack_98 == (undefined ***)0x0) {
    *param_5 = uStack_a0;
    param_5[1] = 0;
  }
  else {
    pppuVar14 = pppuStack_98 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
      if (bVar4) {
        *pppuVar14 = (undefined **)((long)*pppuVar14 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *param_5 = uStack_a0;
    param_5[1] = pppuStack_98;
    if (pppuStack_98 != (undefined ***)0x0) {
      pppuVar14 = pppuStack_98 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar14,0x10);
        if (bVar4) {
          *pppuVar14 = (undefined **)((long)*pppuVar14 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  pppuVar13 = &ppuStack_88;
  param_5[2] = FUN_10a679200;
  param_5[3] = &PTR_DAT_110c07488;
  param_5[4] = uStack_a0;
  param_5[5] = pppuStack_98;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_90 = &UNK_1053a6a3c;
  ppuStack_88 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_90);
  (*(code *)*ppuStack_88)();
  pppuVar14 = pppuStack_98;
  if (pppuStack_98 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_98 + 1;
    do {
      ppuVar22 = *pppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)ppuVar22 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar22 == (undefined **)0x0) {
      (*(code *)(*pppuStack_98)[2])(pppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar13 = pppuVar14;
    }
  }
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_48) {
    ___stack_chk_fail();
    func_0x00010a05248c(&uStack_b0);
    __Unwind_Resume();
    uVar9 = uStack_48;
    uVar8 = uStack_78;
    uVar15 = uStack_80;
    ppuVar22 = ppuStack_88;
    puVar18 = puStack_a8;
    uVar7 = puStack_90._0_1_;
    uVar6 = uStack_b0._1_1_;
    uVar5 = (undefined1)uStack_b0;
    uStack_150 = puVar12[1];
    uStack_158 = CONCAT44(*(float *)((long)puVar12 + 0xc),(uint)*puVar12);
    uVar24 = CONCAT44(*(float *)((long)puVar12 + 4),(uint)puVar12[1]);
    uStack_148 = uVar24;
    uStack_140 = *puVar12;
    uVar21 = uStack_140;
    uVar23 = (ulong)(uint)*puVar12;
    fStack_164 = *(float *)((long)puVar12 + 0xc);
    if (iVar17 == 1) {
      uStack_148 = uStack_150;
      uStack_150 = uStack_158;
      uStack_140 = uVar24;
      uVar23 = uVar21;
      fStack_164 = *(float *)((long)puVar12 + 4);
      uStack_158 = *puVar12;
    }
    lVar20 = 0;
    uVar21 = uVar23 & 0xffffffff;
    uVar23 = uVar23 & 0xffffffff;
    fVar27 = fStack_164;
    do {
      fVar29 = *(float *)((long)&uStack_150 + lVar20);
      fStack_15c = *(float *)((long)&uStack_150 + lVar20 + 4);
      uVar24 = (ulong)(uint)fVar29;
      if ((float)uVar21 <= fVar29) {
        uVar24 = uVar21;
      }
      fVar10 = fStack_15c;
      if (fStack_164 <= fStack_15c) {
        fVar10 = fStack_164;
      }
      fStack_164 = fVar10;
      uVar28 = (ulong)(uint)fVar29;
      if (fVar29 <= (float)uVar23) {
        uVar28 = uVar23;
      }
      if (fStack_15c <= fVar27) {
        fStack_15c = fVar27;
      }
      lVar20 = lVar20 + 8;
      uVar21 = uVar24;
      uVar23 = uVar28;
      fVar27 = fStack_15c;
    } while (lVar20 != 0x18);
    uStack_168 = (undefined4)uVar24;
    uStack_160 = (undefined4)uVar28;
    FUN_10a05077c(&lStack_180,4);
    FUN_10a659188(puVar26,*(undefined4 *)((long)pppuVar13 + 0x64c),uVar5,uVar19,param_10,param_11,
                  puVar18,uStack_a0,lStack_180,lStack_178 - lStack_180 >> 3,param_12,
                  pppuStack_98 + 0xd,puVar16,uVar9 & 0xff);
    FUN_10a65945c(*(undefined4 *)((long)pppuVar13 + 0x64c),puVar18,uStack_a0,uVar7,puVar16,
                  pppuStack_98);
    FUN_10a6595bc(param_2,param_3,0,param_4,puVar18,uStack_a0,&uStack_158,4,lStack_180,
                  lStack_178 - lStack_180 >> 3,&uStack_168,uVar6,ppuVar22,uVar15,uVar8,uStack_70,
                  uStack_68,uStack_58,uStack_50,uStack_60);
    if (lStack_180 != 0) {
      lStack_178 = lStack_180;
      __ZdlPv();
    }
    return;
  }
  return;
}



/* Entry: 10a658f50; end: 10a659187;  */

void FUN_10a658f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,int param_7,ulong *param_8,undefined4 param_9,
                  undefined8 param_10,undefined8 param_11,undefined1 param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15,undefined8 param_16,long param_17,
                  undefined1 param_18,undefined4 param_19,undefined8 param_20,undefined8 param_21,
                  undefined8 param_22,undefined8 param_23,undefined8 param_24,undefined8 param_25,
                  undefined8 param_26,undefined8 param_27,undefined1 param_28)

{
  float fVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  float fStack_ac;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  
  uStack_a0 = param_8[1];
  uStack_a8 = CONCAT44(*(float *)((long)param_8 + 0xc),(uint)*param_8);
  uVar4 = CONCAT44(*(float *)((long)param_8 + 4),(uint)param_8[1]);
  uStack_98 = uVar4;
  uStack_90 = *param_8;
  uVar5 = uStack_90;
  uVar3 = (ulong)(uint)*param_8;
  fStack_b4 = *(float *)((long)param_8 + 0xc);
  if (param_7 == 1) {
    uStack_98 = uStack_a0;
    uStack_a0 = uStack_a8;
    uStack_90 = uVar4;
    uVar3 = uVar5;
    fStack_b4 = *(float *)((long)param_8 + 4);
    uStack_a8 = *param_8;
  }
  lVar2 = 0;
  uVar5 = uVar3 & 0xffffffff;
  uVar3 = uVar3 & 0xffffffff;
  fVar6 = fStack_b4;
  do {
    fVar8 = *(float *)((long)&uStack_a0 + lVar2);
    fStack_ac = *(float *)((long)&uStack_a0 + lVar2 + 4);
    uVar4 = (ulong)(uint)fVar8;
    if ((float)uVar5 <= fVar8) {
      uVar4 = uVar5;
    }
    fVar1 = fStack_ac;
    if (fStack_b4 <= fStack_ac) {
      fVar1 = fStack_b4;
    }
    fStack_b4 = fVar1;
    uVar7 = (ulong)(uint)fVar8;
    if (fVar8 <= (float)uVar3) {
      uVar7 = uVar3;
    }
    if (fStack_ac <= fVar6) {
      fStack_ac = fVar6;
    }
    lVar2 = lVar2 + 8;
    uVar5 = uVar4;
    uVar3 = uVar7;
    fVar6 = fStack_ac;
  } while (lVar2 != 0x18);
  uStack_b8 = (undefined4)uVar4;
  uStack_b0 = (undefined4)uVar7;
  FUN_10a05077c(&lStack_d0,4);
  FUN_10a659188(param_1,*(undefined4 *)(param_5 + 0x64c),(undefined1)param_13,param_9,param_10,
                param_11,param_15,param_16,lStack_d0,lStack_c8 - lStack_d0 >> 3,param_12,
                param_17 + 0x68,param_6,param_28);
  FUN_10a65945c(*(undefined4 *)(param_5 + 0x64c),param_15,param_16,param_18,param_6,param_17);
  FUN_10a6595bc(param_2,param_3,0,param_4,param_15,param_16,&uStack_a8,4,lStack_d0,
                lStack_c8 - lStack_d0 >> 3,&uStack_b8,param_13._1_1_,param_20,param_21,param_22,
                param_23,param_24,param_26,param_27,param_25);
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a659188; end: 10a65945b;  */

void FUN_10a659188(float param_1,float param_2,int param_3,int param_4,long *param_5,float *param_6,
                  long param_7,ulong param_8,long param_9,ulong param_10,byte param_11,
                  undefined4 param_12,undefined8 param_13,undefined8 param_14,char param_15)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_64;
  
  if (param_4 == 0) {
    uVar6 = 0;
    uStack_a0 = 0;
    uStack_98 = 0x3f800000;
    uStack_90 = 0x3f8000003f800000;
    uStack_88 = 0x3f80000000000000;
    while (param_10 != uVar6) {
      *(undefined8 *)(param_9 + uVar6 * 8) = (&uStack_a0)[uVar6];
      uVar6 = uVar6 + 1;
      if (uVar6 == 4) {
        return;
      }
    }
    goto LAB_10a659458;
  }
  if ((param_5 == (long *)0x0) && (param_15 == '\0')) {
    return;
  }
  fVar21 = param_1;
  if (param_5 != (long *)0x0) {
    plVar4 = param_5;
    (**(code **)(*param_5 + 0xb0))();
    plVar5 = param_5;
    (**(code **)(*param_5 + 0xb8))();
    bVar2 = true;
    bVar3 = false;
    if (0 < (int)plVar4) {
      bVar3 = SBORROW4((int)plVar5,1);
      bVar2 = (int)plVar5 + -1 < 0;
    }
    if (bVar2 == bVar3) {
      plVar4 = param_5;
      (**(code **)(*param_5 + 0xb0))();
      (**(code **)(*param_5 + 0xb8))();
      fVar10 = (float)(int)plVar4 / (float)(int)param_5;
      fVar7 = (param_6[2] - *param_6) / (param_6[3] - param_6[1]);
      if (param_11 < 3) {
        if (param_11 == 0) {
          if (fVar7 <= fVar10) goto LAB_10a6592ec;
LAB_10a659308:
          fVar21 = param_1 * (fVar7 / fVar10);
        }
        else if (param_11 == 1) goto code_r0x00010a6592e8;
      }
      else {
        if (param_11 == 5) {
code_r0x00010a6592e8:
          if (fVar7 <= fVar10) goto LAB_10a659308;
        }
        else if (param_11 != 4) {
          if (param_11 == 3) goto LAB_10a659308;
          goto LAB_10a659318;
        }
LAB_10a6592ec:
        param_1 = param_1 * (fVar10 / fVar7);
      }
    }
  }
LAB_10a659318:
  if (param_3 == 3) {
    func_0x000109519fd0(&uStack_a0,param_13,param_14);
    fStack_64 = fStack_74 * 0.0 + fStack_64;
    fVar11 = (float)uStack_80 * 0.0 + (float)uStack_70;
    fVar12 = (float)((ulong)uStack_80 >> 0x20) * 0.0 + (float)((ulong)uStack_70 >> 0x20);
    fVar9 = (float)((ulong)uStack_a0 >> 0x20);
    fVar13 = (float)uStack_90;
    uVar8 = CONCAT44((int)((ulong)uStack_90 >> 0x20),(int)uStack_a0);
    fVar10 = uStack_88._4_4_;
    fVar7 = fStack_94;
  }
  else {
    uVar8 = NEON_fmov(0x3f800000,4);
    fVar11 = 0.0;
    fVar12 = 0.0;
    fStack_64 = 1.0;
    fVar7 = 0.0;
    fVar10 = 0.0;
    fVar13 = 0.0;
    fVar9 = 0.0;
  }
  uVar6 = 0;
  while (param_8 != uVar6) {
    uVar15 = *(undefined8 *)(param_7 + uVar6 * 8);
    fVar14 = (float)uVar15;
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    if (param_3 == 3) {
      if (param_10 <= uVar6) break;
      fVar14 = fVar14 / param_2;
      fVar16 = fVar16 / param_2;
      uVar15 = NEON_rev64(CONCAT44(fVar16,fVar14),4);
      fVar18 = fStack_64 + fVar7 * fVar14 + fVar10 * fVar16;
      fVar14 = fVar21 * ((fVar11 + fVar13 * (float)uVar15 + (float)uVar8 * fVar14) / fVar18) * 0.5;
      fVar16 = param_1 * ((fVar12 + fVar9 * (float)((ulong)uVar15 >> 0x20) +
                                    (float)((ulong)uVar8 >> 0x20) * fVar16) / fVar18) * 0.5;
    }
    else {
      if (param_10 <= uVar6) break;
      fVar18 = (float)*(undefined8 *)param_6;
      fVar19 = (float)*(undefined8 *)(param_6 + 2);
      fVar17 = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
      fVar20 = (float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20);
      fVar14 = fVar21 * ((fVar14 + (fVar18 + fVar19) * -0.5) / (fVar19 - fVar18));
      fVar16 = param_1 * ((fVar16 + (fVar17 + fVar20) * -0.5) / (fVar20 - fVar17));
    }
    *(ulong *)(param_9 + uVar6 * 8) = CONCAT44(fVar16 + 0.5,fVar14 + 0.5);
    uVar6 = uVar6 + 1;
    if (uVar6 == 4) {
      return;
    }
  }
LAB_10a659458:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a65945c);
  (*pcVar1)();
}



/* Entry: 10a65945c; end: 10a6595bb;  */

void FUN_10a65945c(float param_1,undefined8 *param_2,long param_3,int param_4,undefined8 param_5,
                  long param_6)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fStack_f0;
  float fStack_ec;
  ulong uStack_d0;
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  fVar4 = *(float *)(param_6 + 8);
  fVar3 = *(float *)(param_6 + 4) * fVar4;
  if (param_4 == 0) {
    uVar5 = NEON_fmov(0x3f800000,4);
    uStack_80 = 0;
    uStack_70 = 0;
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    uStack_d0 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_6 + 0x10);
    func_0x000109519fd0(auStack_a0,param_6 + 0x28,param_5);
    uVar5 = NEON_scvtf(uVar5,4);
    uStack_d0 = CONCAT44(fVar4 / (float)((ulong)uVar5 >> 0x20),fVar3 / (float)uVar5);
    fStack_ec = SUB84(auStack_a0._0_8_,4);
    fStack_f0 = (float)auStack_a0._16_8_;
    uVar5 = CONCAT44(SUB84(auStack_a0._16_8_,4),(int)auStack_a0._0_8_);
  }
  if (param_3 != 0) {
    param_3 = param_3 << 3;
    do {
      fVar6 = (float)*param_2 / param_1;
      fVar7 = (float)((ulong)*param_2 >> 0x20) / param_1;
      uVar2 = CONCAT44(fVar7,fVar6);
      if (param_4 != 0) {
        uVar2 = NEON_rev64(uVar2,4);
        fVar1 = fVar4 * 0.5 +
                (float)((ulong)uStack_80 >> 0x20) + (float)((ulong)uStack_70 >> 0x20) +
                fStack_ec * (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar5 >> 0x20) * fVar7;
        uVar2 = CONCAT44(fVar1,fVar3 * 0.5 +
                               (float)uStack_80 + (float)uStack_70 +
                               fStack_f0 * (float)uVar2 + (float)uVar5 * fVar6);
        _fmodf(fVar1,uStack_d0 >> 0x20);
        _fmodf(uVar2,uStack_d0);
        uVar2 = CONCAT44(fVar7 - fVar1,fVar6 - (float)uVar2);
      }
      *param_2 = uVar2;
      param_3 = param_3 + -8;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a6595bc; end: 10a6596e3;  */

void FUN_10a6595bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6,long param_7,long param_8,long param_9,long param_10,
                  undefined8 *param_11,int param_12,long *param_13,long *param_14,long *param_15,
                  long *param_16,long *param_17,long *param_18,long *param_19,long *param_20)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = 0;
  while (param_6 != lVar3) {
    puVar4 = (undefined8 *)(*param_13 + param_13[3] * param_13[2]);
    uVar5 = *(undefined8 *)(param_5 + lVar3 * 8);
    param_13[3] = param_13[3] + 1;
    *puVar4 = uVar5;
    *(undefined4 *)(puVar4 + 1) = 0;
    if (param_8 == lVar3) break;
    lVar1 = param_14[3];
    param_14[3] = lVar1 + 1;
    *(undefined8 *)(*param_14 + lVar1 * param_14[2]) = *(undefined8 *)(param_7 + lVar3 * 8);
    if (param_10 == lVar3) break;
    lVar1 = param_15[3];
    param_15[3] = lVar1 + 1;
    *(undefined8 *)(*param_15 + lVar1 * param_15[2]) = *(undefined8 *)(param_9 + lVar3 * 8);
    lVar1 = param_16[3];
    param_16[3] = lVar1 + 1;
    *(undefined4 *)(*param_16 + lVar1 * param_16[2]) = param_1;
    lVar1 = param_17[3];
    *(undefined4 *)(*param_17 + lVar1 * param_17[2]) = param_2;
    param_17[3] = lVar1 + 1;
    lVar1 = param_18[3];
    param_18[3] = lVar1 + 1;
    *(undefined4 *)(*param_18 + lVar1 * param_18[2]) = param_3;
    lVar1 = param_19[3];
    param_19[3] = lVar1 + 1;
    uVar5 = *param_11;
    puVar4 = (undefined8 *)(*param_19 + lVar1 * param_19[2]);
    puVar4[1] = param_11[1];
    *puVar4 = uVar5;
    if (param_12 != 0) {
      lVar1 = param_20[3];
      param_20[3] = lVar1 + 1;
      *(undefined4 *)(*param_20 + lVar1 * param_20[2]) = param_4;
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 4) {
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a6596e4);
  (*pcVar2)();
}



/* Entry: 10a6596e4; end: 10a659b37;  */

void FUN_10a6596e4(long param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ushort uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_58;
  
  if (*(long *)(param_1 + 0x630) == *(long *)(param_1 + 0x638)) {
    return;
  }
  puVar6 = &uStack_b0;
  uVar10 = 0;
  iVar5 = (int)((ulong)(*(long *)(param_1 + 0x638) - *(long *)(param_1 + 0x630)) >> 4) * -0x55555555
  ;
  if (iVar5 < 0xb) {
    iVar5 = 10;
  }
  if (*(int *)(param_1 + 0x648) != iVar5) {
    piVar1 = (int *)(param_1 + 0x648);
    *piVar1 = iVar5;
    func_0x00010a1bd170();
    lVar7 = -0x648;
    if (cRam00000001137eb724 == '\0') {
      lVar7 = -0xffff;
    }
    lVar7 = (long)piVar1 + lVar7;
    if ((*(ushort *)(lVar7 + 0xe9) >> 8 & 1) == 0) {
      if ((((*(long *)(lVar7 + 0xc0) != 0) || ((*(ushort *)(lVar7 + 0xe9) >> 9 & 1) != 0)) ||
          (*(long *)(lVar7 + 0xe0) != 0)) || ((*(ushort *)(lVar7 + 0x30) >> 8 & 1) == 0)) {
LAB_10a6597ac:
        func_0x00010a1bd170();
        if ((uVar10 & 1) == 0) {
          uStack_78 = 0;
          lStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          plStack_88 = (long *)0x0;
          uStack_90 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          ppuStack_58 = &PTR_DAT_110c03540;
          FUN_10a0dad0c((ulong)&uStack_b0 | 8,&ppuStack_58);
          lVar7 = -0x648;
          if (cRam00000001137eb724 == '\0') {
            lVar7 = -0xffff;
          }
          iVar5 = (int)piVar1 + (int)lVar7;
          (**(code **)(*(long *)((long)piVar1 + lVar7) + 0x18))();
          lVar7 = -0x648;
          if (cRam00000001137eb724 == '\0') {
            lVar7 = -0xffff;
          }
          uVar10 = (long)piVar1 + lVar7;
          uVar9 = *(ushort *)(uVar10 + 0x30);
          if (iVar5 == 0) {
            if ((uVar9 >> 8 & 1) == 0) {
              FUN_10a1bfe94(uVar10,&uStack_b0);
              if ((uVar10 & 1) == 0) {
                lVar7 = -0x648;
                if (cRam00000001137eb724 == '\0') {
                  lVar7 = -0xffff;
                }
                uVar10 = (long)piVar1 + lVar7;
                (**(code **)(*(long *)((long)piVar1 + lVar7) + 0x10))(uVar10,&uStack_b0);
              }
            }
            else {
              FUN_10a1bd5e0();
              if (uVar10 != 0) {
                FUN_10a1bd7d8();
              }
            }
          }
          else {
            if ((uVar9 >> 7 & 1) == 0) {
              *(ulong *)(uVar10 + 0x40) = uStack_b0;
              *(ushort *)(uVar10 + 0x30) = uVar9 | 0x80;
            }
            uVar10 = uVar10 + 0x40;
            FUN_10a1bd398(uVar10,&uStack_b0);
          }
          uVar9 = 0x648;
          if (cRam00000001137eb724 == '\0') {
            uVar9 = 0xffff;
          }
          lVar7 = 0x648;
          if (cRam00000001137eb724 == '\0') {
            lVar7 = 0xffff;
          }
          if ((*(ushort *)((long)piVar1 + (0xe9 - lVar7)) >> 8 & 1) != 0) {
            FUN_10a1bd5e0();
            uVar9 = 0x648;
            if (cRam00000001137eb724 == '\0') {
              uVar9 = 0xffff;
            }
            if (uVar10 != 0) {
              FUN_10a1bd648();
              uVar9 = 0x648;
              if (cRam00000001137eb724 == '\0') {
                uVar9 = 0xffff;
              }
            }
          }
          FUN_10a1c054c((long)piVar1 + (0x90 - (ulong)uVar9),&uStack_b0);
        }
        goto LAB_10a659980;
      }
      *(long *)(lVar7 + 0xa0) = *(long *)(lVar7 + 0xa0) + 1;
    }
    else if ((*(ushort *)(lVar7 + 0x30) >> 8 & 1) == 0) goto LAB_10a6597ac;
    ppuVar12 = *(undefined ***)(lVar7 + 0xf0);
    ppuVar11 = *(undefined ***)(lVar7 + 0x38);
    if ((ppuVar12 != &PTR_DAT_110c03540 || ppuVar11 != &PTR_DAT_110c03540) &&
       (FUN_10a1bd5e0(), puVar6 != (ulong *)0x0)) {
      if (ppuVar12 != &PTR_DAT_110c03540) {
        FUN_10a1bd648(puVar6,lVar7 + 0x90,&PTR_DAT_110c03540);
        *(undefined ***)(lVar7 + 0xf0) = &PTR_DAT_110c03540;
      }
      if (ppuVar11 != &PTR_DAT_110c03540) {
        FUN_10a1bd7d8(puVar6,lVar7,&PTR_DAT_110c03540);
        *(undefined ***)(lVar7 + 0x38) = &PTR_DAT_110c03540;
      }
    }
  }
LAB_10a659980:
  if ((param_2 & 1) == 0) {
    func_0x000107c2b074(&uStack_b0,&PTR_DAT_110c06c68);
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    lStack_80 = (ulong)(uint)(*(int *)(param_1 + 0x648) * 0x30) << 0x20;
    if (*(char *)(param_1 + 0x5f7) < '\0') {
      __ZdlPv(*(ulong *)(param_1 + 0x5e0));
    }
    *(undefined8 *)(param_1 + 0x5e8) = uStack_a8;
    *(ulong *)(param_1 + 0x5e0) = uStack_b0;
    *(ulong *)(param_1 + 0x5f0) = uStack_a0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    *(undefined8 *)(param_1 + 0x5f8) = uStack_98;
    FUN_10a0e65b0(param_1 + 0x600,&uStack_90);
    *(long *)(param_1 + 0x610) = lStack_80;
    if (plStack_88 == (long *)0x0) goto LAB_10a659b0c;
    plVar8 = plStack_88 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    lVar7 = 0;
    FUN_10a2421c8();
    plVar8 = *(long **)(lVar7 + 0x228);
    (**(code **)(*plVar8 + 0x50))();
    if (plVar8 == (long *)0x0) {
      return;
    }
    uVar2 = *(int *)(param_1 + 0x638) - *(int *)(param_1 + 0x630) & 0xfffffff0;
    uVar10 = plVar8[0x29] + 0x3fefU & -plVar8[0x29];
    if ((uint)uVar10 <= uVar2) {
      uVar2 = (uint)uVar10;
    }
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    func_0x000108a39c34(param_1 + 0x618,uVar10 & 0xffffffff,&uStack_b0);
    _memcpy(*(undefined8 *)(param_1 + 0x618),*(undefined8 *)(param_1 + 0x630),uVar2);
    func_0x000107c2b074(&uStack_b0,&PTR_DAT_110c06c68);
    uStack_90 = 0;
    plStack_88 = (long *)0x0;
    lStack_80 = uVar10 << 0x20;
    if (*(char *)(param_1 + 0x5f7) < '\0') {
      __ZdlPv(*(ulong *)(param_1 + 0x5e0));
    }
    *(undefined8 *)(param_1 + 0x5e8) = uStack_a8;
    *(ulong *)(param_1 + 0x5e0) = uStack_b0;
    *(ulong *)(param_1 + 0x5f0) = uStack_a0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    uStack_b0 = uStack_b0 & 0xffffffffffffff00;
    *(undefined8 *)(param_1 + 0x5f8) = uStack_98;
    FUN_10a0e65b0(param_1 + 0x600,&uStack_90);
    *(long *)(param_1 + 0x610) = lStack_80;
    if (plStack_88 == (long *)0x0) goto LAB_10a659b0c;
    plVar8 = plStack_88 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8 = plStack_88;
  if (lVar7 == 0) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10a659b0c:
  if ((long)uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  return;
}



/* Entry: 10a659b38; end: 10a659ce7;  */

void FUN_10a659b38(undefined8 *param_1,long *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined **ppuVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uStack_70;
  long *plStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  if (*param_2 != param_2[1]) {
    ppuVar6 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    puVar9 = *ppuVar6;
    if (puVar9 != (undefined *)0x0) {
      lVar7 = 0;
      FUN_10a2421c8();
      plVar8 = *(long **)(lVar7 + 0x228);
      (**(code **)(*plVar8 + 0x50))();
      if (plVar8 != (long *)0x0) {
        if ((puVar9[0xc0] & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a659cd4);
          (*pcVar5)();
        }
        lVar7 = *param_2;
        lVar2 = param_2[1];
        uVar10 = ((int)plVar8[0x29] + param_3 * 0x30) - 1U & -(int)plVar8[0x29];
        FUN_10abfe7d4(&uStack_70);
        if (lStack_58 != 0) {
          uVar1 = (int)lVar2 - (int)lVar7 & 0xfffffff0;
          if (uVar10 <= uVar1) {
            uVar1 = uVar10;
          }
          _memcpy(lStack_58,*param_2,(ulong)uVar1);
          _bzero(lStack_58 + (ulong)uVar1,uVar10 - uVar1);
        }
        func_0x000107c2b074(param_1,&PTR_DAT_110c06c68);
        param_1[5] = plStack_68;
        param_1[4] = uStack_70;
        if (plStack_68 != (long *)0x0) {
          plVar8 = plStack_68 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = *plVar8 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          *(undefined4 *)(param_1 + 6) = uStack_60;
          *(uint *)((long)param_1 + 0x34) = uVar10;
          do {
            lVar7 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 != 0) {
            return;
          }
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_68);
          return;
        }
        *(undefined4 *)(param_1 + 6) = uStack_60;
        *(uint *)((long)param_1 + 0x34) = uVar10;
        return;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x28cd94bfde;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 10a659ce8; end: 10a65a173;  */

float FUN_10a659ce8(long *param_1,long *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *unaff_x22;
  long *plVar14;
  ulong uVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  
  plVar9 = &lStack_90;
  lVar3 = *param_1;
  plVar8 = (long *)param_1[1];
  plVar7 = param_2;
  FUN_10a66d660();
  if (plVar8 != (long *)0x0) {
    unaff_x22 = (long *)((long)plVar8 + -1);
    if (((ulong)plVar8 & (ulong)unaff_x22) == 0) {
      plVar14 = (long *)((ulong)plVar7 & (ulong)unaff_x22);
    }
    else {
      plVar14 = plVar7;
      if (plVar8 <= plVar7) {
        uVar15 = 0;
        if (plVar8 != (long *)0x0) {
          uVar15 = (ulong)plVar7 / (ulong)plVar8;
        }
        plVar14 = (long *)((long)plVar7 - uVar15 * (long)plVar8);
      }
    }
    plVar5 = *(long **)(lVar3 + (long)plVar14 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar7) {
          uVar15 = (ulong)(plVar5 + 2);
          func_0x00010a66d794(uVar15,param_2);
          if ((uVar15 & 1) != 0) {
            return (float)*(int *)(plVar5 + 8);
          }
        }
        else {
          if (((ulong)plVar8 & (ulong)unaff_x22) == 0) {
            plVar6 = (long *)((ulong)plVar6 & (ulong)unaff_x22);
          }
          else if (plVar8 <= plVar6) {
            uVar15 = 0;
            if (plVar8 != (long *)0x0) {
              uVar15 = (ulong)plVar6 / (ulong)plVar8;
            }
            plVar6 = (long *)((long)plVar6 - uVar15 * (long)plVar8);
          }
          if (plVar6 != plVar14) break;
        }
      }
    }
  }
  uVar15 = param_1[3];
  lStack_88 = param_2[1];
  lStack_90 = *param_2;
  lStack_78 = param_2[3];
  lStack_80 = param_2[2];
  lStack_68 = param_2[5];
  lStack_70 = param_2[4];
  uStack_60 = (undefined4)uVar15;
  FUN_10a66d660();
  if (plVar8 != (long *)0x0) {
    uVar13 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar13) == 0) {
      unaff_x22 = (long *)((ulong)plVar9 & uVar13);
    }
    else {
      unaff_x22 = plVar9;
      if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x22 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(lVar3 + (long)unaff_x22 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar14 = (long *)plVar7[1];
        if (plVar14 == plVar9) {
          uVar2 = (ulong)(plVar7 + 2);
          func_0x00010a66d794(uVar2,&lStack_90);
          if ((uVar2 & 1) != 0) goto LAB_10a65a0fc;
        }
        else {
          if (((ulong)plVar8 & uVar13) == 0) {
            plVar14 = (long *)((ulong)plVar14 & uVar13);
          }
          else if (plVar8 <= plVar14) {
            uVar2 = 0;
            if (plVar8 != (long *)0x0) {
              uVar2 = (ulong)plVar14 / (ulong)plVar8;
            }
            plVar14 = (long *)((long)plVar14 - uVar2 * (long)plVar8);
          }
          if (plVar14 != unaff_x22) break;
        }
      }
    }
  }
  plVar7 = (long *)0x48;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = (long)plVar9;
  plVar7[3] = lStack_88;
  plVar7[2] = lStack_90;
  plVar7[5] = lStack_78;
  plVar7[4] = lStack_80;
  plVar7[7] = lStack_68;
  plVar7[6] = lStack_70;
  *(undefined4 *)(plVar7 + 8) = uStack_60;
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(uVar15 + 1))) {
    uVar13 = 1;
    if ((long *)0x2 < plVar8) {
      uVar13 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    plVar14 = (long *)(uVar13 | (long)plVar8 << 1);
    plVar5 = (long *)(long)((float)(uVar15 + 1) / *(float *)(param_1 + 4));
    if (plVar14 <= plVar5) {
      plVar14 = plVar5;
    }
    if ((long)plVar14 - 1U == 0) {
      plVar14 = (long *)0x2;
    }
    else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar8 = (long *)param_1[1];
    }
    if (plVar8 < plVar14) {
LAB_10a659f04:
      if ((ulong)plVar14 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a65a160);
        (*pcVar1)();
      }
      lVar3 = (long)plVar14 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar8 = (long *)0x0;
      param_1[1] = (long)plVar14;
      do {
        *(undefined8 *)(*param_1 + (long)plVar8 * 8) = 0;
        plVar8 = (long *)((long)plVar8 + 1);
      } while (plVar14 != plVar8);
      plVar5 = (long *)param_1[2];
      plVar8 = plVar14;
      if (plVar5 != (long *)0x0) {
        plVar6 = (long *)plVar5[1];
        uVar13 = (long)plVar14 - 1;
        if (((ulong)plVar14 & uVar13) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar13);
        }
        else if (plVar14 <= plVar6) {
          uVar2 = 0;
          if (plVar14 != (long *)0x0) {
            uVar2 = (ulong)plVar6 / (ulong)plVar14;
          }
          plVar6 = (long *)((long)plVar6 - uVar2 * (long)plVar14);
        }
        *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar5;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)plVar14 & uVar13) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar13);
          }
          else if (plVar14 <= plVar12) {
            uVar2 = 0;
            if (plVar14 != (long *)0x0) {
              uVar2 = (ulong)plVar12 / (ulong)plVar14;
            }
            plVar12 = (long *)((long)plVar12 - uVar2 * (long)plVar14);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar6) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar12 * 8) = plVar5;
              plVar6 = plVar12;
            }
            else {
              *plVar5 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
              **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar5;
            }
          }
          plVar5 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (plVar14 < plVar8) {
      plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar5) {
        plVar5 = (long *)(1L << (-LZCOUNT((long)plVar5 + -1) & 0x3fU));
      }
      if (plVar14 <= plVar5) {
        plVar14 = plVar5;
      }
      if (plVar14 < plVar8) {
        if (plVar14 != (long *)0x0) goto LAB_10a659f04;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x22 = (long *)((long)plVar8 - 1U & (ulong)plVar9);
    }
    else {
      unaff_x22 = plVar9;
      if (plVar8 <= plVar9) {
        uVar13 = 0;
        if (plVar8 != (long *)0x0) {
          uVar13 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x22 = (long *)((long)plVar9 - uVar13 * (long)plVar8);
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + (long)unaff_x22 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + (long)unaff_x22 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_10a65a0f0;
    plVar9 = *(long **)(*plVar7 + 8);
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      plVar9 = (long *)((ulong)plVar9 & (long)plVar8 - 1U);
    }
    else if (plVar8 <= plVar9) {
      uVar13 = 0;
      if (plVar8 != (long *)0x0) {
        uVar13 = (ulong)plVar9 / (ulong)plVar8;
      }
      plVar9 = (long *)((long)plVar9 - uVar13 * (long)plVar8);
    }
    plVar9 = (long *)(*param_1 + (long)plVar9 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_10a65a0f0:
  param_1[3] = param_1[3] + 1;
LAB_10a65a0fc:
  return (float)uVar15;
}



/* Entry: 10a65a174; end: 10a65a1ff;  */

float FUN_10a65a174(float param_1,float *param_2)

{
  return param_1 * (*(float *)(*(long *)(param_2 + 10) + 0x78) -
                   *(float *)(*(long *)(param_2 + 10) + 0x28)) + *param_2;
}



/* Entry: 10a65a200; end: 10a65a69f;  */

void FUN_10a65a200(float param_1,undefined8 param_2,float param_3,float param_4,long *param_5,
                  float *param_6,undefined1 *param_7,int param_8,int param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  float *pfVar11;
  uint uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined4 uVar22;
  ulong uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_a8;
  long lStack_a0;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  fVar15 = param_6[4] + param_1 * 2.0;
  fVar14 = fVar15;
  if (*(char *)*param_5 == '\0') {
    fVar14 = fVar15 + *(float *)(param_5[1] + 0x64c);
  }
  fVar15 = fVar15 / fVar14;
  if (fVar14 <= 0.0) {
    fVar15 = 1.0;
  }
  fVar16 = (float)param_2;
  fStack_88 = param_1;
  fStack_90 = param_1;
  if ((0.0 < param_1) && ((fVar16 == 6.0 || (fVar16 == 7.0)))) {
    fStack_90 = 0.0;
    if (param_8 == 0) {
      fStack_90 = param_1;
    }
    fStack_88 = 0.0;
    if (param_9 == 0) {
      fStack_88 = param_1;
    }
  }
  fStack_90 = *param_6 - fStack_90;
  fStack_8c = (param_6[2] + param_6[3]) - fVar14 * 0.5;
  fStack_88 = fStack_88 + param_6[1];
  fStack_84 = param_6[2] + param_6[3] + fVar14 * 0.5;
  if ((param_3 != 0.0) || (param_4 != 0.0)) {
    fStack_90 = param_3 + fStack_90;
    fStack_8c = param_4 + fStack_8c;
    fStack_88 = param_3 + fStack_88;
    fStack_84 = param_4 + fStack_84;
  }
  puVar9 = (undefined8 *)param_5[2];
  *puVar9 = CONCAT44(fStack_8c,fStack_90);
  *(float *)(puVar9 + 1) = fStack_88;
  *(float *)((long)puVar9 + 0xc) = fStack_8c;
  puVar9[2] = CONCAT44(fStack_84,fStack_88);
  *(float *)(puVar9 + 3) = fStack_90;
  *(float *)((long)puVar9 + 0x1c) = fStack_84;
  cVar2 = param_7[0x28];
  if (cVar2 == '\x03') {
    pfVar11 = (float *)(param_5[4] + 0x210);
  }
  else if (cVar2 == '\x02') {
    pfVar11 = &fStack_90;
  }
  else if (cVar2 == '\x01') {
    pfVar11 = (float *)(*(long *)(param_5[1] + 0x430) + 0x30);
  }
  else {
    pfVar11 = (float *)param_5[3];
  }
  FUN_10a05077c(&lStack_a8,4);
  FUN_10a659188(*(undefined4 *)(param_7 + 0x24),*(undefined4 *)(param_5[1] + 0x64c),param_7[0x28],
                *param_7,*(undefined8 *)(param_7 + 0x30),pfVar11,param_5[2],4,lStack_a8,
                lStack_a0 - lStack_a8 >> 3,param_7[0x29],*param_5 + 0x68,param_5[4] + 0x220,
                *(undefined1 *)param_5[5]);
  FUN_10a65945c(*(undefined4 *)(param_5[1] + 0x64c),param_5[2],4,*(undefined1 *)param_5[6],
                param_5[4] + 0x220,*param_5);
  FUN_10a05077c(&puStack_c0,4);
  if ((puStack_b8 != puStack_c0) &&
     (*puStack_c0 = 0xbf80000000000000, 8 < (ulong)((long)puStack_b8 - (long)puStack_c0))) {
    dVar13 = (double)NEON_fmov(0x3f800000,4);
    puStack_c0[1] = -dVar13;
    uVar8 = (long)puStack_b8 - (long)puStack_c0;
    if ((0x10 < uVar8) && (puStack_c0[2] = dVar13, uVar8 != 0x18)) {
      puStack_c0[3] = 0x3f80000000000000;
      if (*(char *)param_5[7] == '\x01') {
        uVar8 = *(ulong *)(param_7 + 4);
        uVar19 = *(undefined4 *)(param_7 + 0xc);
        uVar20 = *(undefined4 *)(param_7 + 0x10);
        uStack_d0 = *(undefined8 *)(param_7 + 0x14);
        uStack_c8 = *(undefined4 *)(param_7 + 0x1c);
        uVar18 = *(undefined4 *)(param_7 + 0x20);
        lVar5 = *(long *)(param_6 + 6);
        uStack_f4 = uVar20;
        uStack_e4 = uVar18;
        if (lVar5 != 0) {
          uStack_100 = CONCAT44(uStack_100._4_4_,0xc);
          FUN_10a1cc830(lVar5,&uStack_100);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x18);
            ___dynamic_cast(lVar6,&PTR_DAT_110baded8,&PTR_DAT_110bade48,0);
            plVar10 = *(long **)(lVar5 + 0x20);
            if (plVar10 == (long *)0x0) {
              uVar21 = *(ulong *)(lVar6 + 0xc);
              uVar22 = *(undefined4 *)(lVar6 + 0x14);
              uVar17 = *(undefined4 *)(lVar6 + 0x1c);
              uVar12 = (uint)*(byte *)(lVar6 + 0x18);
              bVar7 = *(byte *)(lVar6 + 0x20);
            }
            else {
              plVar1 = plVar10 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = *plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              uVar21 = *(ulong *)(lVar6 + 0xc);
              uVar22 = *(undefined4 *)(lVar6 + 0x14);
              uVar12 = (uint)*(byte *)(lVar6 + 0x18);
              uVar17 = *(undefined4 *)(lVar6 + 0x1c);
              bVar7 = *(byte *)(lVar6 + 0x20);
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
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
            uVar12 = fVar16 == 5.0 & uVar12;
            uVar8 = uVar8 ^ (uVar8 ^ uVar21) &
                            CONCAT44(-(uint)((int)(uVar12 << 0x1f) < 0),
                                     -(uint)((int)(uVar12 << 0x1f) < 0));
            if (uVar12 == 0) {
              uVar22 = uVar19;
            }
            uVar19 = uVar22;
            uStack_f4 = uVar17;
            uStack_e4 = uVar17;
            if ((bVar7 & 1) == 0) {
              uStack_f4 = uVar20;
              uStack_e4 = uVar18;
            }
          }
        }
        uStack_f0 = uStack_d0;
        uStack_e8 = uStack_c8;
        fStack_e0 = param_6[10] / *(float *)param_5[8];
        if (*(float *)param_5[8] <= 0.0) {
          fStack_e0 = param_6[10];
        }
        uVar21 = (ulong)(uint)fStack_e0;
        uStack_d8 = 0;
        uStack_dc = 0;
        uStack_100 = uVar8;
        uStack_f8 = uVar19;
        FUN_10a659ce8(param_5[9],&uStack_100);
        uVar8 = (long)puStack_b8 - (long)puStack_c0;
        bVar7 = *(byte *)param_5[7];
      }
      else {
        bVar7 = 0;
        uVar21 = 0xbf800000;
      }
      FUN_10a6595bc(param_2,0,fVar15,uVar21,param_5[2],4,puStack_c0,(long)uVar8 >> 3,lStack_a8,
                    lStack_a0 - lStack_a8 >> 3,&UNK_10e4d0894,bVar7 & 1,param_5[10],param_5[0xb],
                    param_5[0xc],param_5[0xd],param_5[0xe],param_5[0xf],param_5[0x10],param_5[0x11])
      ;
      if (puStack_c0 != (undefined8 *)0x0) {
        puStack_b8 = puStack_c0;
        __ZdlPv();
      }
      if (lStack_a8 != 0) {
        lStack_a0 = lStack_a8;
        __ZdlPv();
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a65a664);
  (*pcVar4)();
}



/* Entry: 10a65a6a0; end: 10a65a6f7;  */

void FUN_10a65a6a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10a421994();
  lVar4 = *(long *)(param_1 + 0x588);
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
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
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110bcfa10,param_1 + 0x580);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a65a7f4; end: 10a65ac1b;  */

void FUN_10a65a7f4(undefined1 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_570;
  undefined4 uStack_568;
  undefined8 uStack_564;
  undefined4 uStack_55c;
  undefined8 uStack_558;
  undefined4 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  undefined8 auStack_520 [25];
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong uStack_348;
  undefined1 auStack_340 [144];
  undefined8 auStack_2b0 [50];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  long lStack_b8;
  long lStack_b0;
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
  byte bStack_50;
  
  FUN_10a42b51c(&uStack_e0,param_2);
  lVar11 = *(long *)(param_2[0x2d] + 0x140);
  if ((*(byte *)(lVar11 + 0x2a) & 0x24) != 0) {
    FUN_10a3e8fd4(lVar11);
  }
  uStack_118 = *(undefined8 *)(lVar11 + 200);
  uStack_120 = *(undefined8 *)(lVar11 + 0xc0);
  uStack_108 = *(undefined8 *)(lVar11 + 0xd8);
  uStack_110 = *(undefined8 *)(lVar11 + 0xd0);
  uStack_f8 = *(undefined8 *)(lVar11 + 0xe8);
  uStack_100 = *(undefined8 *)(lVar11 + 0xe0);
  uStack_e8 = *(undefined8 *)(lVar11 + 0xf8);
  uStack_f0 = *(undefined8 *)(lVar11 + 0xf0);
  uVar3 = *(uint *)(param_2 + 0x54);
  plVar9 = param_2;
  FUN_10a5d2c1c();
  uVar8 = (uint)plVar9;
  if (3 < uVar3) {
    uVar8 = 1;
  }
  bVar7 = (uVar8 & 1) == 0;
  uVar8 = 0;
  if (bVar7) {
    uVar8 = 0xc >> (ulong)(uVar3 & 0x1f);
  }
  uVar1 = 0;
  if (bVar7) {
    uVar1 = uVar3;
  }
  plVar9 = param_2;
  FUN_10a42b8d8();
  lVar11 = 0x50;
  if ((int)plVar9 == 0) {
    lVar11 = 0;
  }
  lVar11 = param_3 + lVar11;
  fVar13 = *(float *)(lVar11 + 0x60);
  if ((0.0 < fVar13) && (fVar12 = *(float *)(lVar11 + 100), 0.0 < fVar12)) {
    if ((uVar1 & 1) == 0) {
      if ((uVar8 & 1) != 0) {
        fStack_dc = fVar12;
      }
    }
    else {
      fStack_d8 = fVar13;
      if ((uVar8 & 1) != 0) {
        uStack_78 = *(undefined8 *)(lVar11 + 0x88);
        uStack_80 = *(undefined8 *)(lVar11 + 0x80);
        uStack_68 = *(undefined8 *)(lVar11 + 0x98);
        uStack_70 = *(undefined8 *)(lVar11 + 0x90);
        uStack_58 = *(undefined8 *)(lVar11 + 0xa8);
        uStack_60 = *(undefined8 *)(lVar11 + 0xa0);
        uStack_98 = *(undefined8 *)(lVar11 + 0x68);
        uStack_a0 = *(undefined8 *)(lVar11 + 0x60);
        uStack_88 = *(undefined8 *)(lVar11 + 0x78);
        uStack_90 = *(undefined8 *)(lVar11 + 0x70);
        fStack_dc = fVar12;
        if ((bStack_50 & 1) == 0) {
          bStack_50 = 1;
        }
      }
    }
  }
  auStack_520[0] = 0;
  uStack_458 = 0;
  uStack_410 = 0x3f80000000000000;
  uStack_418 = 0;
  uStack_440 = 0;
  uStack_448 = 0x3f800000;
  uStack_430 = 0;
  uStack_438 = 0x3f80000000000000;
  uStack_420 = 0x3f800000;
  uStack_428 = 0;
  uStack_400 = 0;
  uStack_408 = 0x3f800000;
  uStack_3f0 = 0;
  uStack_3f8 = 0x3f80000000000000;
  uStack_3e0 = 0x3f800000;
  uStack_3e8 = 0;
  uStack_3d0 = 0x3f80000000000000;
  uStack_3d8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0x3f800000;
  uStack_3b0 = 0;
  uStack_3b8 = 0x3f80000000000000;
  uStack_3a0 = 0x3f800000;
  uStack_3a8 = 0;
  uStack_390 = 0x3f80000000000000;
  uStack_398 = 0;
  uStack_360 = 0x3f800000;
  uStack_368 = 0;
  uStack_350 = 0x3f80000000000000;
  uStack_358 = 0;
  uStack_380 = 0;
  uStack_388 = 0x3f800000;
  uStack_370 = 0;
  uStack_378 = 0x3f80000000000000;
  uStack_450 = 0;
  uStack_348 = 1;
  _memcpy(auStack_340,&UNK_10e4d0ea0,0x110);
  FUN_10a42bc0c(auStack_520,&uStack_e0,&uStack_120);
  plVar9 = param_2;
  FUN_10a42f018();
  if ((((long *)*plVar9 == (long *)plVar9[1]) || (lVar11 = *(long *)*plVar9, lVar11 == 0)) ||
     (lVar11 = *(long *)(lVar11 + 0x28), lVar11 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar11 + 0x268);
  }
  lVar11 = (long)*(char *)(*(long *)(param_3 + 0x910) + 0x23);
  uStack_548 = &UNK_10f63946e;
  uStack_540 = 0x4f;
  if ((long *)param_2[0x46] == (long *)param_2[0x47]) {
    FUN_10a0edfc4(&uStack_548,uVar10);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a65abec);
    (*pcVar6)();
  }
  func_0x00010a5d2a70(lVar11,uVar10,*(undefined1 *)(*(long *)param_2[0x46] + 0x58),uStack_df);
  *param_1 = uStack_e0;
  *(ulong *)(param_1 + 4) = CONCAT44(uStack_d4,fStack_d8);
  *(float *)(param_1 + 0xc) = fStack_dc;
  *(long *)(param_1 + 0x10) = lVar11;
  uStack_570 = uStack_120;
  uStack_568 = (undefined4)uStack_118;
  uStack_564 = uStack_110;
  uStack_55c = (undefined4)uStack_108;
  uStack_558 = uStack_100;
  uStack_550 = (undefined4)uStack_f8;
  FUN_10a008b64(&uStack_548,&uStack_570);
  fVar16 = ((float)uStack_548 - fStack_538) - fStack_528;
  fVar12 = (fStack_538 - (float)uStack_548) - fStack_528;
  fVar18 = (fStack_528 - (float)uStack_548) - fStack_538;
  fStack_528 = (float)uStack_548 + fStack_538 + fStack_528;
  fVar13 = fVar16;
  if (fVar16 <= fStack_528) {
    fVar13 = fStack_528;
  }
  bVar4 = 2;
  if (fVar12 <= fVar13) {
    fVar12 = fVar13;
    bVar4 = fStack_528 < fVar16;
  }
  bVar5 = 3;
  if (fVar18 <= fVar12) {
    fVar18 = fVar12;
    bVar5 = bVar4;
  }
  fVar13 = SQRT(fVar18 + 1.0) * 0.5;
  fVar12 = 0.25 / fVar13;
  if (bVar5 < 2) {
    if (bVar5 == 0) {
      fVar17 = uStack_548._4_4_ - uStack_540._4_4_;
      fVar18 = fVar13;
      fVar16 = fVar12 * (fStack_534 - fStack_52c);
      fVar13 = fVar12 * (fStack_530 - (float)uStack_540);
    }
    else {
      fVar18 = fVar12 * (fStack_534 - fStack_52c);
      fVar17 = fStack_530 + (float)uStack_540;
      fVar16 = fVar13;
      fVar13 = fVar12 * (uStack_548._4_4_ + uStack_540._4_4_);
    }
  }
  else {
    if (bVar5 != 2) {
      fVar18 = fVar12 * (uStack_548._4_4_ - uStack_540._4_4_);
      fVar16 = fVar12 * (fStack_530 + (float)uStack_540);
      fVar12 = fVar12 * (fStack_534 + fStack_52c);
      fVar17 = fVar13;
      goto LAB_10a65ab78;
    }
    fVar18 = fVar12 * (fStack_530 - (float)uStack_540);
    fVar16 = fVar12 * (uStack_548._4_4_ + uStack_540._4_4_);
    fVar17 = fStack_534 + fStack_52c;
  }
  fVar17 = fVar12 * fVar17;
  fVar12 = fVar13;
LAB_10a65ab78:
  *(float *)(param_1 + 0x18) = fVar16;
  *(float *)(param_1 + 0x1c) = fVar12;
  *(float *)(param_1 + 0x20) = fVar17;
  *(float *)(param_1 + 0x24) = fVar18;
  func_0x0001094f5708(param_1 + 0x28,&uStack_120);
  puVar2 = &uStack_3c8;
  if (uStack_348 < 2) {
    puVar2 = auStack_2b0;
  }
  uVar10 = *puVar2;
  uVar15 = puVar2[3];
  uVar14 = puVar2[2];
  *(undefined8 *)(param_1 + 0x70) = puVar2[1];
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  *(undefined8 *)(param_1 + 0x80) = uVar15;
  *(undefined8 *)(param_1 + 0x78) = uVar14;
  uVar10 = puVar2[4];
  uVar15 = puVar2[7];
  uVar14 = puVar2[6];
  *(undefined8 *)(param_1 + 0x90) = puVar2[5];
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  *(undefined8 *)(param_1 + 0xa0) = uVar15;
  *(undefined8 *)(param_1 + 0x98) = uVar14;
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a65ac1c; end: 10a65af13;  */

void FUN_10a65ac1c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  FUN_10a65af14();
  plVar4 = *(long **)(param_1 + 0x250);
  if (plVar4 != (long *)0x0) {
    lVar9 = *(long *)(param_1 + 0x7a0);
    lVar8 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x248);
      if (((lVar7 != 0) && (lVar6 = *(long *)(*(long *)(param_1 + 0x168) + 0x248), lVar6 != 0)) &&
         ((*(ushort *)(lVar6 + 0x180) & 0x17) == 0)) {
        fVar19 = *(float *)(param_1 + 0x720);
        fVar13 = 43.885715;
        fVar14 = 64.0;
        fVar10 = 64.0;
        if (0x5c < *(int *)(lVar8 + 0x18)) {
          fVar10 = 43.885715;
        }
        FUN_10a394a64(lVar6);
        fVar17 = *(float *)(lVar6 + 0x28c);
        fVar15 = *(float *)(lVar6 + 0x290);
        func_0x00010acae698(lVar6 + 0x268);
        fVar18 = fVar17 + fVar13;
        fVar16 = fVar15 + fVar14;
        if (*(int *)(lVar8 + 0x18) < 0xdb) {
          func_0x00010acae6ac(lVar6 + 0x268);
          fVar17 = fVar17 - fVar13;
          fVar15 = fVar15 - fVar14;
          fVar18 = fVar18 - fVar13;
          fVar16 = fVar16 - fVar14;
        }
        lVar6 = *(long *)(lVar9 + 0x430);
        if (lVar6 == 0) {
          fVar19 = fVar19 / fVar10;
          fVar10 = fVar17;
          if ((*(char *)(param_1 + 0x309) != '\0') &&
             (fVar10 = fVar18, *(char *)(param_1 + 0x309) != '\x02')) {
            fVar10 = (fVar17 + fVar18) * 0.5;
          }
          fVar13 = (fVar17 + fVar18) * 0.5;
          fVar14 = fVar13 - fVar19 * 0.5;
          fVar13 = fVar19 * 0.5 + fVar13;
          if (*(char *)(param_1 + 0x30a) == '\x02') {
            fVar14 = fVar16 - fVar19;
            fVar13 = fVar16;
          }
          fVar12 = fVar15;
          fVar19 = fVar19 + fVar15;
          fVar11 = fVar10;
          if (*(char *)(param_1 + 0x30a) != '\0') {
            fVar12 = fVar14;
            fVar19 = fVar13;
          }
        }
        else {
          fVar13 = *(float *)(lVar9 + 0x64c);
          fVar10 = *(float *)(lVar6 + 0x38) / fVar13;
          fVar12 = *(float *)(lVar6 + 0x34) / fVar13;
          fVar19 = *(float *)(lVar6 + 0x3c) / fVar13;
          fVar11 = *(float *)(lVar6 + 0x30) / fVar13;
        }
        *(undefined4 *)(*(long *)(lVar7 + 0x1f0) + 0x24) = 0xbf800000;
        *(undefined4 *)(*(long *)(lVar7 + 0x1f0) + 0x2c) = 0x3f800000;
        *(undefined4 *)(*(long *)(lVar7 + 0x1f0) + 0x28) = 0xbf800000;
        *(undefined4 *)(*(long *)(lVar7 + 0x1f0) + 0x30) = 0x3f800000;
        plVar1 = (long *)(lVar7 + 0x200);
        if (0x148 < *(int *)(lVar8 + 0x18)) {
          *(undefined4 *)(*plVar1 + 0x24) = 0;
          *(undefined4 *)(*plVar1 + 0x2c) = 0;
          *(undefined4 *)(*plVar1 + 0x28) = 0;
          *(undefined4 *)(*plVar1 + 0x30) = 0;
        }
        fVar18 = fVar18 - fVar17;
        fVar13 = (fVar11 - fVar17) / fVar18;
        fVar14 = (fVar10 - fVar17) / fVar18;
        plVar5 = plVar1;
        if (9.536743e-07 < ABS(fVar16 - fVar15)) {
          fVar19 = (fVar19 - fVar15) / (fVar16 - fVar15);
          fVar19 = fVar19 + fVar19 + -1.0;
          fVar15 = (fVar12 - fVar15) / (fVar16 - fVar15);
          fVar12 = fVar15 + fVar15 + -1.0;
          plVar5 = (long *)(lVar7 + 0x1f0);
        }
        *(float *)(*plVar5 + 0x28) = fVar12;
        *(float *)(*plVar5 + 0x30) = fVar19;
        fVar14 = fVar14 + fVar14 + -1.0;
        fVar13 = fVar13 + fVar13 + -1.0;
        plVar5 = (long *)(lVar7 + 0x1f0);
        if (ABS(fVar18) <= 9.536743e-07) {
          fVar14 = fVar10;
          fVar13 = fVar11;
          plVar5 = plVar1;
        }
        *(float *)(*plVar5 + 0x24) = fVar13;
        *(float *)(*plVar5 + 0x2c) = fVar14;
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a65af14; end: 10a65af93;  */

void FUN_10a65af14(long param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&DAT_10f66add3);
  FUN_10a65af94(param_1 + 0x5a8,auStack_38,
                *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x170) + 0x850) + 0x2c));
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  FUN_10a652748(param_1);
  return;
}



/* Entry: 10a65af94; end: 10a65b08f;  */

void FUN_10a65af94(ulong *param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 auStack_150 [2];
  undefined1 auStack_140 [271];
  undefined1 uStack_31;
  
  if (param_1[1] != (param_3 & 0xffffffff)) {
    param_1[1] = param_3 & 0xffffffff;
    if (param_1[5] != 0) {
      func_0x000109240b44(param_1 + 2,param_1[4]);
      param_1[4] = 0;
      uVar3 = param_1[3];
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          *(undefined8 *)(param_1[2] + uVar4 * 8) = 0;
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
      }
      param_1[5] = 0;
    }
  }
  puVar2 = param_1 + 2;
  auStack_150[0] = param_2;
  func_0x0001092404c8(puVar2,param_2,&UNK_10dd5b8f9,auStack_150,&uStack_31);
  uVar3 = puVar2[5];
  puVar2[5] = uVar3 + 1;
  if (uVar3 + 1 <= *param_1) {
    return;
  }
  FUN_109febc44(auStack_150);
  FUN_10a002568(auStack_140,&UNK_10f66b50b,0x30);
  FUN_10a05168c(&uStack_31,auStack_140);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a65b07c);
  (*pcVar1)();
}



/* Entry: 10a65b090; end: 10a65b20b;  */

void FUN_10a65b090(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *extraout_x8;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined1 auStack_128 [8];
  long *plStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar11 = *param_1;
  if ((undefined8 *)(param_1[2] - lVar11 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10a66d830();
      puVar7 = (undefined8 *)param_1[1];
      if (puVar7 < (undefined8 *)param_1[2]) {
        uVar16 = *param_2;
        puVar15 = puVar7 + 2;
        puVar7[1] = param_2[1];
        *puVar7 = uVar16;
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        lVar11 = (long)puVar7 - *param_1;
        uVar10 = (lVar11 >> 4) + 1;
        if (uVar10 >> 0x3c != 0) {
          FUN_10a66d830();
          iVar6 = (int)param_2;
          if ((char)param_1[0xd9] == '\x01') {
            puVar5 = &UNK_10f66aecf;
            FUN_10a00946c(&UNK_10f66aecf);
            if (iVar6 != 0xffff) {
              FUN_10a01eacc();
              FUN_10a659b38(auStack_148,param_3,param_4);
              FUN_10a5e1b7c(puVar5,auStack_148,uStack_118,uStack_114,auStack_128);
              if (plStack_120 != (long *)0x0) {
                plVar1 = plStack_120 + 1;
                do {
                  lVar11 = *plVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = lVar11 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*plStack_120 + 0x10))(plStack_120);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_120);
                }
              }
              if (cStack_131 < '\0') {
                __ZdlPv(auStack_148[0]);
              }
            }
            return;
          }
          FUN_10a65af14();
          lVar11 = param_1[0xf4];
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          *extraout_x8 = 0;
          lVar13 = *(long *)(lVar11 + 0x660);
          lVar11 = *(long *)(lVar11 + 0x668);
          uVar10 = lVar11 - lVar13 >> 4;
          if (uVar10 != 0) {
            if (uVar10 >> 0x3c != 0) {
              FUN_10a66d9b4();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a66d998);
              (*pcVar4)();
            }
            lVar9 = lVar13;
            FUN_10a66d9c8();
            *extraout_x8 = uVar10;
            extraout_x8[1] = uVar10;
            extraout_x8[2] = uVar10 + lVar9 * 0x10;
            lVar11 = lVar11 - lVar13;
            if (lVar11 != 0) {
              _memmove(uVar10,lVar13,lVar11);
            }
            extraout_x8[1] = uVar10 + lVar11;
          }
          return;
        }
        uVar12 = param_1[2] - *param_1;
        uVar14 = (long)uVar12 >> 3;
        if (uVar14 <= uVar10) {
          uVar14 = uVar10;
        }
        if (0x7fffffffffffffef < uVar12) {
          uVar14 = 0xfffffffffffffff;
        }
        puVar8 = param_2;
        plStack_98 = param_1;
        FUN_10a66d844();
        puVar7 = (undefined8 *)(uVar14 + lVar11);
        uVar16 = *param_2;
        puVar15 = puVar7 + 2;
        puVar7[1] = param_2[1];
        *puVar7 = uVar16;
        *param_2 = 0;
        param_2[1] = 0;
        lVar11 = (long)puVar7 - (param_1[1] - *param_1);
        _memcpy(lVar11);
        lStack_b8 = *param_1;
        *param_1 = lVar11;
        param_1[1] = (long)puVar15;
        lStack_a0 = param_1[2];
        param_1[2] = uVar14 + (long)puVar8 * 0x10;
        lStack_b0 = lStack_b8;
        lStack_a8 = lStack_b8;
        func_0x00010a66d878(&lStack_b8);
      }
      param_1[1] = (long)puVar15;
      return;
    }
    lVar13 = param_1[1];
    puVar7 = param_2;
    plStack_38 = param_1;
    FUN_10a66d844();
    lVar11 = (long)param_2 + (lVar13 - lVar11);
    lVar13 = lVar11 - (param_1[1] - *param_1);
    _memcpy(lVar13);
    lStack_58 = *param_1;
    *param_1 = lVar13;
    param_1[1] = lVar11;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)puVar7 * 2);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a66d878(&lStack_58);
  }
  return;
}



/* Entry: 10a65b20c; end: 10a65b267;  */

void FUN_10a65b20c(ulong *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined1 auStack_68 [8];
  long *plStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (*(char *)(param_2 + 0x6c8) == '\x01') {
    puVar5 = &UNK_10f66aecf;
    FUN_10a00946c(&UNK_10f66aecf);
    if (param_3 != 0xffff) {
      FUN_10a01eacc();
      FUN_10a659b38(auStack_88,param_4,param_5);
      FUN_10a5e1b7c(puVar5,auStack_88,uStack_58,uStack_54,auStack_68);
      if (plStack_60 != (long *)0x0) {
        plVar1 = plStack_60 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_60 + 0x10))(plStack_60);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
        }
      }
      if (cStack_71 < '\0') {
        __ZdlPv(auStack_88[0]);
      }
    }
    return;
  }
  FUN_10a65af14();
  lVar9 = *(long *)(param_2 + 0x7a0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar6 = *(long *)(lVar9 + 0x660);
  lVar9 = *(long *)(lVar9 + 0x668);
  uVar8 = lVar9 - lVar6 >> 4;
  if (uVar8 != 0) {
    if (uVar8 >> 0x3c != 0) {
      FUN_10a66d9b4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a66d998);
      (*pcVar4)();
    }
    lVar7 = lVar6;
    FUN_10a66d9c8();
    *param_1 = uVar8;
    param_1[1] = uVar8;
    param_1[2] = uVar8 + lVar7 * 0x10;
    lVar9 = lVar9 - lVar6;
    if (lVar9 != 0) {
      _memmove(uVar8,lVar6,lVar9);
    }
    param_1[1] = uVar8 + lVar9;
  }
  return;
}



/* Entry: 10a65b268; end: 10a65b32f;  */

void FUN_10a65b268(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_2 != 0xffff) {
    FUN_10a01eacc();
    FUN_10a659b38(auStack_68,param_3,param_4);
    FUN_10a5e1b7c(param_1,auStack_68,uStack_38,uStack_34,auStack_48);
    if (plStack_40 != (long *)0x0) {
      plVar1 = plStack_40 + 1;
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
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
      }
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  return;
}



/* Entry: 10a65b330; end: 10a65b66f;  */

void FUN_10a65b330(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_2 + 0x7a0);
  if (lVar3 == 0) {
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x630);
    lVar3 = *(long *)(lVar3 + 0x638) - lVar4;
  }
  func_0x000107c2b07c(&puStack_140,&UNK_10f66a659);
  func_0x000107c2b07c(&puStack_120,&UNK_10f66a659);
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_e8 = 0;
  func_0x000107c2b07c(&puStack_c0,&UNK_10f66af48);
  if (uStack_130._7_1_ < '\0') {
    __ZdlPv(puStack_140);
  }
  uStack_138 = uStack_b8;
  puStack_140 = puStack_c0;
  uStack_130 = lStack_b0;
  uStack_128 = uStack_a8;
  func_0x000107c2b074(&puStack_c0,&PTR_DAT_110c06da0);
  if (uStack_110._7_1_ < '\0') {
    __ZdlPv(puStack_120);
  }
  uStack_118 = uStack_b8;
  puStack_120 = puStack_c0;
  uStack_110 = lStack_b0;
  uStack_108 = uStack_a8;
  puVar1 = (undefined8 *)0x19;
  __Znwm();
  puVar1[1] = 0x415252415f4d4152;
  *puVar1 = 0x41505f454c595453;
  *(undefined8 *)((long)puVar1 + 0xf) = 0x20455a49535f5941;
  *(undefined1 *)((long)puVar1 + 0x17) = 0;
  if (lStack_f0 < 0) {
    __ZdlPv(puStack_100);
  }
  lStack_f0 = -0x7fffffffffffffe7;
  uStack_f8 = 0x17;
  uStack_e8 = 0x30;
  puStack_100 = puVar1;
  lStack_e0 = lVar4;
  lStack_d8 = lVar3;
  if (uStack_130 < 0) {
    func_0x000107c3192c(&puStack_c0,puStack_140,uStack_138);
  }
  else {
    uStack_b8 = uStack_138;
    puStack_c0 = puStack_140;
    lStack_b0 = uStack_130;
  }
  uStack_a8 = uStack_128;
  if (uStack_110 < 0) {
    func_0x000107c3192c(&puStack_a0,puStack_120,uStack_118);
  }
  else {
    uStack_98 = uStack_118;
    puStack_a0 = puStack_120;
    lStack_90 = uStack_110;
  }
  uStack_88 = uStack_108;
  if (lStack_f0 < 0) {
    func_0x000107c3192c(&puStack_80,puStack_100,uStack_f8);
  }
  else {
    uStack_78 = uStack_f8;
    puStack_80 = puStack_100;
    lStack_70 = lStack_f0;
  }
  uStack_68 = CONCAT44(uStack_e4,uStack_e8);
  lStack_60 = lStack_e0;
  lStack_58 = lStack_d8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_c8 = 0;
  puVar2 = (undefined8 *)0x70;
  puStack_d0 = param_1;
  __Znwm();
  *param_1 = puVar2;
  param_1[1] = puVar2;
  puVar1 = puVar2 + 0xe;
  param_1[2] = puVar1;
  FUN_10a66d9fc();
  param_1[1] = puVar1;
  if (lStack_70 < 0) {
    puVar2 = puStack_80;
    __ZdlPv(puStack_80);
  }
  if (lStack_90 < 0) {
    puVar2 = puStack_a0;
    __ZdlPv(puStack_a0);
  }
  if (lStack_b0 < 0) {
    puVar2 = puStack_c0;
    __ZdlPv(puStack_c0);
  }
  if (lStack_f0 < 0) {
    puVar2 = puStack_100;
    __ZdlPv(puStack_100);
  }
  if (uStack_110 < 0) {
    puVar2 = puStack_120;
    __ZdlPv(puStack_120);
  }
  if (uStack_130 < 0) {
    puVar2 = puStack_140;
    __ZdlPv(puStack_140);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_90 < 0) {
    __ZdlPv(puStack_a0);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(puStack_c0);
  }
  FUN_10a65b670(&puStack_140);
  do {
    do {
      __Unwind_Resume(puVar2);
    } while (-1 < uStack_130);
    __ZdlPv(puStack_140);
  } while( true );
}



/* Entry: 10a65b670; end: 10a65b6bf;  */

undefined8 * FUN_10a65b670(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a65b6c0; end: 10a65b817;  */

long * FUN_10a65b6c0(long *param_1)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long *plStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 auStack_58 [2];
  char acStack_41 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b074(auStack_78,&PTR_DAT_110c06db8);
  func_0x000107c2b074(auStack_58,&PTR_DAT_110c06dd0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_80 = 0;
  lVar1 = 0x40;
  plStack_88 = param_1;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + 0x40;
  plVar2 = param_1;
  FUN_10a66dbe8(param_1,auStack_78,&lStack_38,lVar1);
  lVar1 = 0;
  param_1[1] = (long)plVar2;
  do {
    if (acStack_41[lVar1] < '\0') {
      plVar2 = *(long **)((long)auStack_58 + lVar1);
      __ZdlPv();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar2;
  }
  ___stack_chk_fail();
  param_1[1] = -0x40;
  FUN_10a044868(&plStack_88);
  lVar1 = -0x40;
  pcVar3 = acStack_41;
  do {
    if (*pcVar3 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
    }
    lVar1 = lVar1 + 0x20;
    pcVar3 = pcVar3 + -0x20;
  } while (lVar1 != 0);
  __Unwind_Resume();
  if (plVar2[0xf4] != 0) {
    return *(long **)(plVar2[0xf4] + 0x438);
  }
  return (long *)0x0;
}



/* Entry: 10a65b818; end: 10a65b82f;  */

undefined8 FUN_10a65b818(long param_1)

{
  if (*(long *)(param_1 + 0x7a0) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x7a0) + 0x438);
  }
  return 0;
}



/* Entry: 10a65b830; end: 10a65b87f;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4cb0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c47c0) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4860) */
/* WARNING: Removing unreachable block (ram,0x00010a1c477c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4a94) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4d1c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c482c) */
/* WARNING: Removing unreachable block (ram,0x00010a1c4820) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a65b830(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  undefined8 ******ppppppuVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  code *pcVar10;
  char cVar11;
  long *plVar12;
  char *pcVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 ******ppppppuVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined2 uStack_130;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  char cStack_119;
  undefined8 uStack_118;
  char cStack_101;
  undefined8 *******pppppppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 *******pppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 uStack_d0;
  undefined8 *******pppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 *******pppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 uStack_90;
  char acStack_80 [16];
  undefined7 uStack_70;
  byte bStack_69;
  long lStack_68;
  
  if (((*(long *)(*(long *)(param_2 + 0x608) + 0x18) != 0) &&
      (lVar19 = *(long *)(*(long *)(param_2 + 0x170) + 0x100), 99 < *(int *)(lVar19 + 0x288))) &&
     (*(int *)(lVar19 + 0x28c) == 1)) {
    puVar16 = &UNK_10f66af54;
    FUN_10a00946c();
    puVar3 = (undefined8 *)(puVar16 + 0x670);
    if ((char)puVar16[0x687] < '\0') {
      __ZdlPv(*puVar3);
    }
    uVar29 = param_3[1];
    uVar28 = *param_3;
    *(undefined8 *)(puVar16 + 0x680) = param_3[2];
    *(undefined8 *)(puVar16 + 0x678) = uVar29;
    *puVar3 = uVar28;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    if ((*(ushort *)(puVar16 + 0x180) >> 6 & 1) == 0) {
      return;
    }
    func_0x0001094f981c(*(undefined8 *)(puVar16 + 0x608));
    FUN_10a1c4e78(&uStack_70,puVar16 + 0x5f8,puVar3);
    for (lVar19 = CONCAT17(bStack_69,uStack_70); lVar19 != lStack_68; lVar19 = lVar19 + 0x18) {
      FUN_10a1d5490(*(undefined8 *)(puVar16 + 0x608),lVar19,lVar19,&UNK_10f642cb1);
      FUN_10a1c5098(puVar16 + 0x5f8,lVar19);
    }
    FUN_10a0426d8(&stack0xffffffffffffffa8);
    return;
  }
  plVar2 = (long *)(param_2 + 0x670);
  lVar22 = *(long *)(*(long *)(param_2 + 0x608) + 0x18);
  lVar25 = *(long *)(*(long *)(param_2 + 0x5f8) + 0x900);
  lVar19 = *(long *)(lVar25 + 0xa0);
  if ((lVar22 == 0) && (*(char *)(param_2 + 0x668) == '\x01')) {
    bVar7 = *(byte *)(param_2 + 0x63f);
    uVar20 = *(ulong *)(param_2 + 0x630);
    if (-1 < (char)bVar7) {
      uVar20 = (ulong)bVar7;
    }
    bVar8 = *(byte *)(param_2 + 0x687);
    uVar23 = *(ulong *)(param_2 + 0x678);
    if (-1 < (char)bVar8) {
      uVar23 = (ulong)bVar8;
    }
    if (uVar20 == uVar23) {
      plVar12 = (long *)*(long *)(param_2 + 0x628);
      if (-1 < (char)bVar7) {
        plVar12 = (long *)(param_2 + 0x628);
      }
      plVar4 = (long *)*plVar2;
      if (-1 < (char)bVar8) {
        plVar4 = plVar2;
      }
      _memcmp(plVar12,plVar4);
      if ((((int)plVar12 == 0) && (*(char *)(param_2 + 0x658) == *(char *)(param_2 + 0x600))) &&
         (*(long *)(param_2 + 0x660) == lVar19)) {
        if (-1 < *(char *)(param_2 + 0x657)) {
          lVar19 = *(long *)(param_2 + 0x640);
          param_1[1] = *(long *)(param_2 + 0x648);
          *param_1 = lVar19;
          param_1[2] = *(long *)(param_2 + 0x650);
          return;
        }
        lVar19 = *(long *)(param_2 + 0x640);
        uVar20 = *(ulong *)(param_2 + 0x648);
        if (uVar20 < 0x17) {
          *(char *)((long)param_1 + 0x17) = (char)uVar20;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(param_1,lVar19,uVar20 + 1);
          return;
        }
        if (uVar20 < 0x7ffffffffffffff7) {
          lVar19 = 0x19;
          if ((uVar20 | 7) != 0x17) {
            lVar19 = (uVar20 | 7) + 1;
          }
        }
        else {
          func_0x000104bd47d4();
        }
        func_0x000107c60e20(lVar19);
        return;
      }
    }
  }
  FUN_10a597328(acStack_80,lVar25,plVar2);
  func_0x000107c2b054(&pppppppuStack_a0,&UNK_10f642cb1);
  uVar27 = 0;
  uVar26 = 0xffffffff;
  while( true ) {
    uVar20 = (ulong)(int)uVar27;
    uVar23 = (ulong)(int)(uint)bStack_69;
    if (bStack_69 <= uVar27) break;
    if (uVar23 < uVar20) goto LAB_10a1c4d70;
    if ((acStack_80[uVar20] == '\\') && (uVar1 = uVar20 + 1, (uint)uVar1 < (uint)bStack_69)) {
      if (uVar23 < uVar1) goto LAB_10a1c4d70;
      if (acStack_80[uVar20 + 1] != '{') {
        if (uVar23 < uVar1) goto LAB_10a1c4d70;
        if (acStack_80[uVar20 + 1] != '}') goto joined_r0x00010a1c4834;
      }
      if (uVar23 < uVar1) goto LAB_10a1c4d70;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppppuStack_a0,(long)acStack_80[uVar20 + 1]);
      iVar17 = 2;
LAB_10a1c4928:
      uVar27 = uVar27 + iVar17;
    }
    else {
joined_r0x00010a1c4834:
      if ((int)uVar26 < 0) {
        if (uVar23 < uVar20) goto LAB_10a1c4d6c;
        uVar21 = uVar23 - uVar20;
        uVar1 = uVar21;
        if (1 < uVar21) {
          uVar1 = 2;
        }
        pcVar13 = acStack_80 + uVar20;
        _memcmp(pcVar13,&UNK_10f643d36,uVar1);
        if ((uVar21 < 2) || ((int)pcVar13 != 0)) {
          if (uVar20 <= uVar23) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (&pppppppuStack_a0,(long)acStack_80[uVar20]);
            iVar17 = 1;
            goto LAB_10a1c4928;
          }
          goto LAB_10a1c4d70;
        }
        uVar27 = uVar27 + 2;
        uVar26 = uVar27;
      }
      else {
        if (uVar23 < uVar20) {
LAB_10a1c4d6c:
          FUN_109ffddc8();
          goto LAB_10a1c4d70;
        }
        uVar23 = uVar23 - uVar20;
        uVar1 = uVar23;
        if (1 < uVar23) {
          uVar1 = 2;
        }
        pcVar13 = acStack_80 + uVar20;
        _memcmp(pcVar13,&UNK_10f643d39,uVar1);
        iVar17 = 1;
        if ((uVar23 < 2) || ((int)pcVar13 != 0)) goto LAB_10a1c4928;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&pppppppuStack_c0,acStack_80,uVar26,(long)(int)(uVar27 - uVar26),
                   &pppppppuStack_e0);
        lVar25 = *(long *)(param_2 + 0x608);
        FUN_109ce5028(lVar25,&pppppppuStack_c0);
        if (lVar25 == 0) {
          cStack_101 = '\x02';
          uStack_118._0_2_ = 0x7b7b;
          uStack_118._2_1_ = 0;
          ppppppuVar5 = ppppppuStack_b8;
          pppppppuVar14 = pppppppuStack_c0;
          if (-1 < (long)ppppppuStack_b0) {
            ppppppuVar5 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
            pppppppuVar14 = &pppppppuStack_c0;
          }
          plVar12 = &uStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (plVar12,pppppppuVar14,ppppppuVar5);
          uStack_f8 = plVar12[1];
          pppppppuStack_100 = (undefined8 *******)*plVar12;
          uStack_f0 = plVar12[2];
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = 0;
          cStack_119 = '\x02';
          uStack_130 = 0x7d7d;
          uStack_12e = 0;
          pppppppuVar14 = &pppppppuStack_100;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppppuVar14,&uStack_130,2);
          ppppppuStack_d8 = pppppppuVar14[1];
          pppppppuStack_e0 = (undefined8 *******)*pppppppuVar14;
          uStack_d0 = pppppppuVar14[2];
          pppppppuVar14[1] = (undefined8 ******)0x0;
          pppppppuVar14[2] = (undefined8 ******)0x0;
          *pppppppuVar14 = (undefined8 ******)0x0;
          ppppppuVar5 = ppppppuStack_d8;
          pppppppuVar14 = pppppppuStack_e0;
          if (-1 < (long)uStack_d0) {
            ppppppuVar5 = (undefined8 ******)((ulong)uStack_d0 >> 0x38);
            pppppppuVar14 = &pppppppuStack_e0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_a0,pppppppuVar14,ppppppuVar5);
          if ((long)uStack_d0 < 0) {
            __ZdlPv(pppppppuStack_e0);
          }
          if (cStack_119 < '\0') {
            __ZdlPv(CONCAT53(uStack_12d,CONCAT12(uStack_12e,uStack_130)));
          }
          if ((long)uStack_f0 < 0) {
            __ZdlPv(pppppppuStack_100);
          }
          if (cStack_101 < '\0') {
            __ZdlPv(CONCAT53(uStack_118._3_5_,CONCAT12(uStack_118._2_1_,(undefined2)uStack_118)));
          }
LAB_10a1c4a4c:
          uVar27 = uVar27 + 2;
          uVar26 = 0xffffffff;
          bVar9 = true;
        }
        else {
          cVar11 = *(char *)(lVar25 + 0x3f);
          if ((long)cVar11 < 0) {
            lVar18 = *(long *)(lVar25 + 0x30);
            if (lVar18 != 0) goto LAB_10a1c4a30;
          }
          else if (cVar11 != '\0') {
            lVar18 = *(long *)(lVar25 + 0x30);
LAB_10a1c4a30:
            plVar12 = (long *)*(long *)(lVar25 + 0x28);
            if (-1 < cVar11) {
              lVar18 = (long)cVar11;
              plVar12 = (long *)(lVar25 + 0x28);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppppppuStack_a0,plVar12,lVar18);
            goto LAB_10a1c4a4c;
          }
          func_0x000107c2b054(param_1,&UNK_10f642cb1);
          bVar9 = false;
        }
        if ((long)ppppppuStack_b0 < 0) {
          __ZdlPv(pppppppuStack_c0);
          if (!bVar9) {
            return;
          }
        }
        else if (!bVar9) {
          return;
        }
      }
    }
  }
  if (-1 < (int)uVar26) {
    uStack_d0 = (undefined8 ******)CONCAT17(2,(undefined7)uStack_d0);
    pppppppuStack_e0 = (undefined8 *******)CONCAT53(pppppppuStack_e0._3_5_,0x7b7b);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&pppppppuStack_100,acStack_80,uVar26,0xffffffffffffffff,&uStack_118);
    uVar20 = uStack_f8;
    pppppppuVar14 = pppppppuStack_100;
    if (-1 < (long)uStack_f0) {
      uVar20 = uStack_f0 >> 0x38;
      pppppppuVar14 = &pppppppuStack_100;
    }
    pppppppuVar15 = &pppppppuStack_e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar15,pppppppuVar14,uVar20);
    ppppppuStack_b8 = pppppppuVar15[1];
    pppppppuStack_c0 = (undefined8 *******)*pppppppuVar15;
    ppppppuStack_b0 = pppppppuVar15[2];
    pppppppuVar15[1] = (undefined8 ******)0x0;
    pppppppuVar15[2] = (undefined8 ******)0x0;
    *pppppppuVar15 = (undefined8 ******)0x0;
    ppppppuVar5 = ppppppuStack_b8;
    pppppppuVar14 = pppppppuStack_c0;
    if (-1 < (long)ppppppuStack_b0) {
      ppppppuVar5 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
      pppppppuVar14 = &pppppppuStack_c0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&pppppppuStack_a0,pppppppuVar14,ppppppuVar5);
    if ((long)ppppppuStack_b0 < 0) {
      __ZdlPv(pppppppuStack_c0);
    }
    if ((long)uStack_f0 < 0) {
      __ZdlPv(pppppppuStack_100);
    }
    if ((long)uStack_d0 < 0) {
      __ZdlPv(pppppppuStack_e0);
    }
  }
  if (*(char *)(param_2 + 0x600) == '\x01') {
    ppppppuVar5 = ppppppuStack_98;
    pppppppuVar14 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      ppppppuVar5 = (undefined8 ******)(ulong)uStack_90._7_1_;
      pppppppuVar14 = &pppppppuStack_a0;
    }
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_c0,ppppppuVar5,0);
    puVar16 = PTR___DefaultRuneLocale_11034bcf8;
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      ppppppuVar24 = (undefined8 ******)0x0;
      do {
        cVar11 = *(char *)((long)pppppppuVar14 + (long)ppppppuVar24);
        lVar25 = (long)cVar11;
        if ((-1 < lVar25) && ((*(uint *)(puVar16 + lVar25 * 4 + 0x3c) >> 0xf & 1) != 0)) {
          ___tolower();
          cVar11 = (char)lVar25;
        }
        ppppppuVar6 = ppppppuStack_b8;
        if (-1 < (long)ppppppuStack_b0) {
          ppppppuVar6 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
        }
        if (ppppppuVar6 < ppppppuVar24) goto LAB_10a1c4d70;
        pppppppuVar15 = pppppppuStack_c0;
        if (-1 < (long)ppppppuStack_b0) {
          pppppppuVar15 = &pppppppuStack_c0;
        }
        *(char *)((long)pppppppuVar15 + (long)ppppppuVar24) = cVar11;
        ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      } while (ppppppuVar5 != ppppppuVar24);
    }
  }
  else {
    if (*(char *)(param_2 + 0x600) != '\x02') goto LAB_10a1c4cc8;
    ppppppuVar5 = ppppppuStack_98;
    pppppppuVar14 = pppppppuStack_a0;
    if (-1 < (long)uStack_90) {
      ppppppuVar5 = (undefined8 ******)(ulong)uStack_90._7_1_;
      pppppppuVar14 = &pppppppuStack_a0;
    }
    ppppppuStack_b8 = (undefined8 ******)0x0;
    ppppppuStack_b0 = (undefined8 ******)0x0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&pppppppuStack_c0,ppppppuVar5,0);
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      ppppppuVar24 = (undefined8 ******)0x0;
      do {
        cVar11 = *(char *)((long)pppppppuVar14 + (long)ppppppuVar24);
        if (-1 < cVar11) {
          ___toupper();
        }
        ppppppuVar6 = ppppppuStack_b8;
        if (-1 < (long)ppppppuStack_b0) {
          ppppppuVar6 = (undefined8 ******)((ulong)ppppppuStack_b0 >> 0x38);
        }
        if (ppppppuVar6 < ppppppuVar24) {
LAB_10a1c4d70:
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10a1c4d74);
          (*pcVar10)();
        }
        pppppppuVar15 = pppppppuStack_c0;
        if (-1 < (long)ppppppuStack_b0) {
          pppppppuVar15 = &pppppppuStack_c0;
        }
        *(char *)((long)pppppppuVar15 + (long)ppppppuVar24) = cVar11;
        ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
      } while (ppppppuVar5 != ppppppuVar24);
    }
  }
  ppppppuStack_98 = ppppppuStack_b8;
  pppppppuStack_a0 = pppppppuStack_c0;
  uStack_90 = ppppppuStack_b0;
LAB_10a1c4cc8:
  if (lVar22 == 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2 + 0x628,plVar2)
    ;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_2 + 0x640,&pppppppuStack_a0);
    *(undefined1 *)(param_2 + 0x658) = *(undefined1 *)(param_2 + 0x600);
    *(long *)(param_2 + 0x660) = lVar19;
    *(undefined1 *)(param_2 + 0x668) = 1;
  }
  param_1[1] = (long)ppppppuStack_98;
  *param_1 = (long)pppppppuStack_a0;
  param_1[2] = (long)uStack_90;
  return;
}



/* Entry: 10a65b880; end: 10a65b8f3;  */

void FUN_10a65b880(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_48;
  
  puVar1 = (undefined8 *)(param_1 + 0x670);
  if (*(char *)(param_1 + 0x687) < '\0') {
    __ZdlPv(*puVar1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x680) = param_2[2];
  *(undefined8 *)(param_1 + 0x678) = uVar3;
  *puVar1 = uVar2;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if ((*(ushort *)(param_1 + 0x180) >> 6 & 1) == 0) {
    return;
  }
  func_0x0001094f981c(*(undefined8 *)(param_1 + 0x608));
  FUN_10a1c4e78(&lStack_60,param_1 + 0x5f8,puVar1);
  for (; lStack_60 != lStack_58; lStack_60 = lStack_60 + 0x18) {
    FUN_10a1d5490(*(undefined8 *)(param_1 + 0x608),lStack_60,lStack_60,&UNK_10f642cb1);
    FUN_10a1c5098(param_1 + 0x5f8,lStack_60);
  }
  puStack_48 = (undefined1 *)&lStack_60;
  FUN_10a0426d8(&puStack_48);
  return;
}


