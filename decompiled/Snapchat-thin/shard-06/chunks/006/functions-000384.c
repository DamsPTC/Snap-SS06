/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a74c64; end: 104a74c8f;  */

void FUN_104a74c64(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a74c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 104a74c90; end: 104a74da3;  */

void FUN_104a74c90(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_88;
  undefined1 uStack_79;
  undefined *puStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  long lStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_2 + 0x30) != '\0') {
    func_0x00010bda9648();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a74d64);
    (*pcVar3)();
  }
  lVar8 = *(long *)(param_1 + 8);
  if (*(long *)(param_2 + 0x60) != 0) {
    func_0x000100481204(*(undefined8 *)(lVar8 + 0x60));
  }
  plVar7 = *(long **)(lVar8 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = *plVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  ppuStack_48 = &PTR_DAT_1107c1b88;
  puVar6 = &uStack_49;
  lStack_40 = lVar8;
  lStack_38 = param_2;
  pppuStack_30 = &ppuStack_48;
  func_0x0001004be2c8(*(undefined8 *)(lVar8 + 0x130),&ppuStack_48,puVar6);
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar4 = &ppuStack_48;
LAB_104a74d28:
    (*(code *)(*pppuVar4)[lVar8])();
  }
  else {
    pppuVar4 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar8 = 5;
      goto LAB_104a74d28;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar5 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a74d98;
    lVar8 = 5;
    pppuVar5 = pppuStack_30;
  }
  (*(code *)(*pppuVar5)[lVar8])();
LAB_104a74d98:
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  __Unwind_Resume();
  pcStack_58 = FUN_104a74da4;
  puVar9 = pppuVar5[2][0x22];
  pppuVar5[2][0x22] = (undefined *)0x0;
  puStack_78 = puVar9;
  pppuStack_70 = &ppuStack_48;
  pppuStack_68 = pppuVar4;
  puStack_60 = &stack0xfffffffffffffff0;
  FUN_104a7651c();
  if (puVar9 == (undefined *)0x0) {
    uStack_88 = 0;
    func_0x0001004bd7e8(&uStack_79,puVar6,&uStack_88);
    func_0x0001004bdf74(&uStack_88);
  }
  else {
    FUN_104a821ac(puVar9,puVar6);
  }
  func_0x0001004dfd58(&puStack_78);
  return;
}



/* Entry: 104a74da4; end: 104a74e37;  */

void FUN_104a74da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_38;
  undefined1 uStack_29;
  long lStack_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x110);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x110) = 0;
  lStack_28 = lVar1;
  FUN_104a7651c();
  if (lVar1 == 0) {
    uStack_38 = 0;
    func_0x0001004bd7e8(&uStack_29,param_3,&uStack_38);
    func_0x0001004bdf74(&uStack_38);
  }
  else {
    FUN_104a821ac(lVar1,param_3);
  }
  func_0x0001004dfd58(&lStack_28);
  return;
}



/* Entry: 104a74e38; end: 104a74e3f;  */

long FUN_104a74e38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  FUN_104a759cc();
  func_0x00010048650c(*(undefined8 *)(lVar4 + 0x18));
  func_0x000104a74170(*(undefined8 *)(lVar4 + 0x60));
  func_0x000100748390(*(undefined8 *)(lVar4 + 0x60));
  func_0x000104a7f414(lVar4 + 0x290,*(undefined8 *)(lVar4 + 0x298));
  func_0x0001005a5f48(lVar4 + 0x250);
  if (*(char *)(lVar4 + 0x24f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x238));
  }
  if (*(char *)(lVar4 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x220));
  }
  func_0x0001005a5f48(lVar4 + 0x1e0);
  if ((*(ulong *)(lVar4 + 0x1d8) & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x000104a7f3d4(lVar4 + 0x1b8,*(undefined8 *)(lVar4 + 0x1c0));
  func_0x000104a7f394(lVar4 + 0x1a0,*(undefined8 *)(lVar4 + 0x1a8));
  plVar5 = *(long **)(lVar4 + 0x198);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  puVar6 = *(undefined8 **)(lVar4 + 400);
  *(undefined8 *)(lVar4 + 400) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  plVar5 = *(long **)(lVar4 + 0x188);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = *(long **)(lVar4 + 0x180);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  puVar6 = *(undefined8 **)(lVar4 + 0x170);
  *(undefined8 *)(lVar4 + 0x170) = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)();
  }
  FUN_104add5e8(lVar4 + 0x140);
  func_0x0001004c05d4(lVar4 + 0x130);
  plVar5 = *(long **)(lVar4 + 0x120);
  *(undefined8 *)(lVar4 + 0x120) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x0001005a5f48(lVar4 + 0xe0);
  plVar5 = *(long **)(lVar4 + 0xd8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = *(long **)(lVar4 + 0xd0);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = *(long **)(lVar4 + 200);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((*(ulong *)(lVar4 + 0xb8) & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x0001005a5f48(lVar4 + 0x70);
  if (*(char *)(lVar4 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x40));
  }
  if (*(char *)(lVar4 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(lVar4 + 0x28));
  }
  plVar5 = *(long **)(lVar4 + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return lVar4;
}



/* Entry: 104a74e40; end: 104a74edf;  */

void FUN_104a74e40(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x000100460448(lVar2 + 0x1e0);
  if (*param_2 != 0) {
    plVar1 = (long *)(lVar2 + 0x220);
    if (*(char *)(lVar2 + 0x237) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    func_0x0001004601ac();
    *(long **)*param_2 = plVar1;
  }
  if (param_2[1] != 0) {
    plVar1 = (long *)(lVar2 + 0x238);
    if (*(char *)(lVar2 + 0x24f) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    func_0x0001004601ac();
    *(long **)param_2[1] = plVar1;
  }
  func_0x000100466b80(lVar2 + 0x1e0);
  return;
}



/* Entry: 104a74ee0; end: 104a7516b;  */

long * FUN_104a74ee0(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined4 *param_5,long param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar5 = param_1;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long *)((long)register0x00000008 + -0x70) = param_6;
    unaff_x22 = plVar5 + 1;
    *unaff_x22 = 1;
    *plVar5 = (long)&PTR_FUN_1107c0ff0;
    plVar5[2] = (long)param_2;
    plVar5[3] = (long)param_3;
    plVar5[4] = (long)param_4;
    *(undefined4 *)(plVar5 + 5) = *param_5;
    plVar5[6] = (long)param_5;
    plVar5[7] = param_6;
    plVar5[8] = param_7;
    *(undefined1 *)(plVar5 + 9) = 0;
    func_0x0001004bdfa0(plVar5 + 3,*(undefined8 *)(param_2 + 0x60));
    plVar8 = *(long **)(plVar5[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar5[2];
    func_0x000100460448(lVar9 + 0x250);
    param_2 = param_2 + 0x290;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    puVar6 = param_2;
    FUN_104a7ebb8(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_10dd5b8f9,
                  (undefined1 *)((long)register0x00000008 + -0x60),
                  (undefined1 *)((long)register0x00000008 + -0x61));
    if (*(long *)(puVar6 + 0x28) != 0) {
      *(char **)((long)register0x00000008 + -0x80) =
           "chand->external_watchers_[on_complete] == nullptr";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                          ,0x2c8,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a750c0);
      (*pcVar4)();
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
      if (bVar3) {
        *unaff_x22 = *unaff_x22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x60);
    param_5 = (undefined4 *)((long)register0x00000008 + -0x61);
    FUN_104a7ebb8(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_10dd5b8f9);
    plVar8 = *(long **)(param_2 + 0x28);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(long **)(param_2 + 0x28) = plVar5;
    func_0x000100466b80(lVar9 + 0x250);
    uVar7 = *(undefined8 *)(plVar5[2] + 0x130);
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_1107c1380;
    *(long **)((long)register0x00000008 + -0x50) = plVar5;
    unaff_x20 = (long *)((long)register0x00000008 + -0x58);
    *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x58);
    param_3 = (undefined1 *)((long)register0x00000008 + -0x60);
    func_0x0001004be2c8(uVar7);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x40);
    if (unaff_x21 == unaff_x20) {
      lVar9 = 4;
      unaff_x21 = (long *)((long)register0x00000008 + -0x58);
LAB_104a75054:
      (**(code **)(*unaff_x21 + lVar9 * 8))();
    }
    else if (unaff_x21 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_104a75054;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return plVar5;
    }
    ___stack_chk_fail();
    plVar8 = *(long **)((long)register0x00000008 + -0x40);
    if (plVar8 == unaff_x20) {
      lVar9 = 4;
      plVar8 = (long *)((long)register0x00000008 + -0x58);
LAB_104a750f8:
      (**(code **)(*plVar8 + lVar9 * 8))();
    }
    else if (plVar8 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_104a750f8;
    }
    __Unwind_Resume(unaff_x21);
    unaff_x30 = FUN_104a7516c;
    param_1 = unaff_x21;
    FUN_104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = plVar5;
  } while( true );
}



/* Entry: 104a7516c; end: 104a7516f;  */

long * FUN_104a7516c(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                    undefined4 *param_5,long param_6,long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    plVar7 = param_1;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(long *)((long)register0x00000008 + -0x70) = param_6;
    unaff_x22 = plVar7 + 1;
    *unaff_x22 = 1;
    *plVar7 = (long)&PTR_FUN_1107c0ff0;
    plVar7[2] = (long)param_2;
    plVar7[3] = (long)param_3;
    plVar7[4] = (long)param_4;
    *(undefined4 *)(plVar7 + 5) = *param_5;
    plVar7[6] = (long)param_5;
    plVar7[7] = param_6;
    plVar7[8] = param_7;
    *(undefined1 *)(plVar7 + 9) = 0;
    func_0x0001004bdfa0(plVar7 + 3,*(undefined8 *)(param_2 + 0x60));
    plVar8 = *(long **)(plVar7[2] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar9 = plVar7[2];
    func_0x000100460448(lVar9 + 0x250);
    param_2 = param_2 + 0x290;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    puVar5 = param_2;
    FUN_104a7ebb8(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_10dd5b8f9,
                  (undefined1 *)((long)register0x00000008 + -0x60),
                  (undefined1 *)((long)register0x00000008 + -0x61));
    if (*(long *)(puVar5 + 0x28) != 0) {
      *(char **)((long)register0x00000008 + -0x80) =
           "chand->external_watchers_[on_complete] == nullptr";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                          ,0x2c8,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a750c0);
      (*pcVar4)();
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(unaff_x22,0x10);
      if (bVar3) {
        *unaff_x22 = *unaff_x22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    param_4 = (undefined1 *)((long)register0x00000008 + -0x60);
    param_5 = (undefined4 *)((long)register0x00000008 + -0x61);
    FUN_104a7ebb8(param_2,(undefined1 *)((long)register0x00000008 + -0x70),&UNK_10dd5b8f9);
    plVar8 = *(long **)(param_2 + 0x28);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar10 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(long **)(param_2 + 0x28) = plVar7;
    func_0x000100466b80(lVar9 + 0x250);
    uVar6 = *(undefined8 *)(plVar7[2] + 0x130);
    *(undefined ***)((long)register0x00000008 + -0x58) = &PTR_FUN_1107c1380;
    *(long **)((long)register0x00000008 + -0x50) = plVar7;
    unaff_x20 = (long *)((long)register0x00000008 + -0x58);
    *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
    param_2 = (undefined1 *)((long)register0x00000008 + -0x58);
    param_3 = (undefined1 *)((long)register0x00000008 + -0x60);
    func_0x0001004be2c8(uVar6);
    unaff_x21 = *(long **)((long)register0x00000008 + -0x40);
    if (unaff_x21 == unaff_x20) {
      lVar9 = 4;
      unaff_x21 = (long *)((long)register0x00000008 + -0x58);
LAB_104a75054:
      (**(code **)(*unaff_x21 + lVar9 * 8))();
    }
    else if (unaff_x21 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_104a75054;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return plVar7;
    }
    ___stack_chk_fail();
    plVar8 = *(long **)((long)register0x00000008 + -0x40);
    if (plVar8 == unaff_x20) {
      lVar9 = 4;
      plVar8 = (long *)((long)register0x00000008 + -0x58);
LAB_104a750f8:
      (**(code **)(*plVar8 + lVar9 * 8))();
    }
    else if (plVar8 != (long *)0x0) {
      lVar9 = 5;
      goto LAB_104a750f8;
    }
    __Unwind_Resume(unaff_x21);
    unaff_x30 = FUN_104a7516c;
    param_1 = unaff_x21;
    FUN_104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = plVar7;
  } while( true );
}



/* Entry: 104a75170; end: 104a751cf;  */

undefined8 * FUN_104a75170(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c0ff0;
  func_0x0001004d9fe0(param_1 + 3,*(undefined8 *)(param_1[2] + 0x60));
  plVar3 = *(long **)(param_1[2] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a751d0; end: 104a751d3;  */

undefined8 * FUN_104a751d0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c0ff0;
  func_0x0001004d9fe0(param_1 + 3,*(undefined8 *)(param_1[2] + 0x60));
  plVar3 = *(long **)(param_1[2] + 8);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a751d4; end: 104a751e7;  */

void FUN_104a751d4(void)

{
  FUN_104a75170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a751e8; end: 104a7531f;  */

void FUN_104a751e8(long param_1,ulong param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  func_0x000100460448(param_1 + 0x250);
  plVar5 = *(long **)(param_1 + 0x298);
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)(param_1 + 0x298);
    do {
      plVar3 = plVar5 + 1;
      if (param_2 <= (ulong)plVar5[4]) {
        plVar4 = plVar5;
        plVar3 = plVar5;
      }
      plVar5 = (long *)*plVar3;
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != (long *)(param_1 + 0x298)) && ((ulong)plVar4[4] <= param_2)) {
      plVar5 = (long *)plVar4[5];
      plVar4[5] = 0;
      FUN_104a7ed70(param_1 + 0x290);
      goto LAB_104a75258;
    }
  }
  plVar5 = (long *)0x0;
LAB_104a75258:
  func_0x000100466b80(param_1 + 0x250);
  if ((plVar5 == (long *)0x0) || (param_3 == 0)) {
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
    FUN_104a75320(plVar5);
  }
  plVar4 = plVar5 + 1;
  do {
    lVar6 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a752c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return;
}



/* Entry: 104a75320; end: 104a75463;  */

void FUN_104a75320(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined ***pppuStack_f8;
  ulong uStack_f0;
  undefined1 uStack_e1;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined ***pppuStack_b8;
  undefined1 uStack_a9;
  undefined **ppuStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_90;
  long lStack_88;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_58;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_1 + 9;
  do {
    if (*(char *)pppuVar3 != '\0') {
      ClearExclusiveLocal();
      goto LAB_104a753dc;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
    if (bVar2) {
      *(char *)pppuVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_58 = 4;
  func_0x0001004bd7e8(&uStack_49,param_1[7],&uStack_58);
  if ((uStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  ppuStack_48 = &PTR_DAT_1107c1480;
  param_2 = &ppuStack_48;
  pppuStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  func_0x0001004be2c8(param_1[2][0x26],param_2,&uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar5 = 4;
    param_1 = &ppuStack_48;
LAB_104a753d0:
    (*(code *)(*param_1)[lVar5])();
  }
  else {
    param_1 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar5 = 5;
      goto LAB_104a753d0;
    }
  }
LAB_104a753dc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    FUN_104bd46a0();
    if (pppuStack_30 == &ppuStack_48) {
      lVar5 = 4;
      pppuVar3 = &ppuStack_48;
    }
    else {
      if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a7545c;
      lVar5 = 5;
      pppuVar3 = pppuStack_30;
    }
    (*(code *)(*pppuVar3)[lVar5])();
  }
LAB_104a7545c:
  __Unwind_Resume();
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_104a75464;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_1 + 9;
  do {
    if (*(char *)pppuVar3 != '\0') {
      ClearExclusiveLocal();
      pppuVar3 = param_1;
      goto LAB_104a75540;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
    if (bVar2) {
      *(char *)pppuVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_104a751e8(param_1[2],param_1[7],0);
  *(int *)param_1[6] = (int)param_2;
  pppuStack_b8 = (undefined ***)0x0;
  func_0x0001004bd7e8(&uStack_a9,param_1[7],&pppuStack_b8);
  pppuVar3 = pppuStack_b8;
  if (((ulong)pppuStack_b8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((int)param_2 != 4) {
    ppuStack_a8 = &PTR_DAT_1107c1400;
    param_2 = &ppuStack_a8;
    pppuStack_a0 = param_1;
    pppuStack_90 = param_2;
    func_0x0001004be2c8(param_1[2][0x26],&ppuStack_a8,&uStack_a9);
    if (pppuStack_90 == param_2) {
      lVar5 = 4;
      pppuVar3 = &ppuStack_a8;
    }
    else {
      pppuVar3 = pppuStack_90;
      if (pppuStack_90 == (undefined ***)0x0) goto LAB_104a75540;
      lVar5 = 5;
    }
    (*(code *)(*pppuVar3)[lVar5])();
  }
LAB_104a75540:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_90 == param_2) {
    lVar5 = 4;
    pppuVar4 = &ppuStack_a8;
  }
  else {
    if (pppuStack_90 == (undefined ***)0x0) goto LAB_104a755bc;
    lVar5 = 5;
    pppuVar4 = pppuStack_90;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_104a755bc:
  pppuVar4 = pppuVar3;
  __Unwind_Resume();
  pppuStack_e0 = param_2;
  pppuStack_d8 = pppuVar3;
  ppuStack_d0 = &puStack_70;
  pcStack_c8 = FUN_104a755c4;
  uStack_f0 = 0;
  func_0x00010082b8d4(&uStack_e1,pppuVar4[8],&uStack_f0);
  if ((uStack_f0 & 1) != 0) {
    func_0x00010084dad0();
  }
  pppuStack_f8 = pppuVar4;
  func_0x0001008de004(pppuVar4[2] + 0x28,*(undefined4 *)(pppuVar4 + 5),&pppuStack_f8);
  pppuVar3 = pppuStack_f8;
  pppuStack_f8 = (undefined ***)0x0;
  if (pppuVar3 != (undefined ***)0x0) {
    (*(code *)**pppuVar3)();
  }
  return;
}



/* Entry: 104a75464; end: 104a755c3;  */

void FUN_104a75464(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined ***pppuStack_98;
  ulong uStack_90;
  undefined1 uStack_81;
  undefined ***pppuStack_80;
  undefined ***pppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined ***pppuStack_58;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_1 + 9;
  do {
    if (*(char *)pppuVar3 != '\0') {
      ClearExclusiveLocal();
      pppuVar3 = param_1;
      goto LAB_104a75540;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
    if (bVar2) {
      *(char *)pppuVar3 = '\x01';
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_104a751e8(param_1[2],param_1[7],0);
  *(int *)param_1[6] = (int)param_2;
  pppuStack_58 = (undefined ***)0x0;
  func_0x0001004bd7e8(&uStack_49,param_1[7],&pppuStack_58);
  pppuVar3 = pppuStack_58;
  if (((ulong)pppuStack_58 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((int)param_2 != 4) {
    ppuStack_48 = &PTR_DAT_1107c1400;
    param_2 = &ppuStack_48;
    pppuStack_40 = param_1;
    pppuStack_30 = param_2;
    func_0x0001004be2c8(param_1[2][0x26],&ppuStack_48,&uStack_49);
    if (pppuStack_30 == param_2) {
      lVar5 = 4;
      pppuVar3 = &ppuStack_48;
    }
    else {
      pppuVar3 = pppuStack_30;
      if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a75540;
      lVar5 = 5;
    }
    (*(code *)(*pppuVar3)[lVar5])();
  }
LAB_104a75540:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == param_2) {
    lVar5 = 4;
    pppuVar4 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_104a755bc;
    lVar5 = 5;
    pppuVar4 = pppuStack_30;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_104a755bc:
  pppuVar4 = pppuVar3;
  __Unwind_Resume();
  pcStack_68 = FUN_104a755c4;
  uStack_90 = 0;
  pppuStack_80 = param_2;
  pppuStack_78 = pppuVar3;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010082b8d4(&uStack_81,pppuVar4[8],&uStack_90);
  if ((uStack_90 & 1) != 0) {
    func_0x00010084dad0();
  }
  pppuStack_98 = pppuVar4;
  func_0x0001008de004(pppuVar4[2] + 0x28,*(undefined4 *)(pppuVar4 + 5),&pppuStack_98);
  pppuVar3 = pppuStack_98;
  pppuStack_98 = (undefined ***)0x0;
  if (pppuVar3 != (undefined ***)0x0) {
    (*(code *)**pppuVar3)();
  }
  return;
}



/* Entry: 104a755c4; end: 104a75677;  */

void FUN_104a755c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_38;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = 0;
  func_0x00010082b8d4(&uStack_21,param_1[8],&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  puStack_38 = param_1;
  func_0x0001008de004(param_1[2] + 0x140,*(undefined4 *)(param_1 + 5),&puStack_38);
  puVar1 = puStack_38;
  puStack_38 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return;
}



/* Entry: 104a75678; end: 104a756af;  */

undefined8 FUN_104a75678(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  FUN_104aab068();
  if ((undefined **)*puVar1 == &PTR_DAT_1107c0f78) {
    uVar2 = puVar1[1];
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 104a756b0; end: 104a756eb;  */

long * FUN_104a756b0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a756ec; end: 104a75727;  */

long * FUN_104a756ec(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a75728; end: 104a759cb;  */

long FUN_104a75728(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_104a759cc();
  func_0x00010048650c(*(undefined8 *)(param_1 + 0x18));
  func_0x000104a74170(*(undefined8 *)(param_1 + 0x60));
  func_0x000100748390(*(undefined8 *)(param_1 + 0x60));
  func_0x000104a7f414(param_1 + 0x290,*(undefined8 *)(param_1 + 0x298));
  func_0x0001005a5f48(param_1 + 0x250);
  if (*(char *)(param_1 + 0x24f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x238));
  }
  if (*(char *)(param_1 + 0x237) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x220));
  }
  func_0x0001005a5f48(param_1 + 0x1e0);
  if ((*(ulong *)(param_1 + 0x1d8) & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x000104a7f3d4(param_1 + 0x1b8,*(undefined8 *)(param_1 + 0x1c0));
  func_0x000104a7f394(param_1 + 0x1a0,*(undefined8 *)(param_1 + 0x1a8));
  plVar4 = *(long **)(param_1 + 0x198);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  plVar4 = *(long **)(param_1 + 0x188);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  plVar4 = *(long **)(param_1 + 0x180);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)();
  }
  FUN_104add5e8(param_1 + 0x140);
  func_0x0001004c05d4(param_1 + 0x130);
  plVar4 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x0001005a5f48(param_1 + 0xe0);
  plVar4 = *(long **)(param_1 + 0xd8);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  plVar4 = *(long **)(param_1 + 0xd0);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  plVar4 = *(long **)(param_1 + 200);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if ((*(ulong *)(param_1 + 0xb8) & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x0001005a5f48(param_1 + 0x70);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104a759cc; end: 104a75a33;  */

void FUN_104a759cc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x170);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    (**(code **)*puVar1)();
    if (*(long *)(param_1 + 400) != 0) {
      func_0x000104abe9c0(*(undefined8 *)(*(long *)(param_1 + 400) + 0x20),
                          *(undefined8 *)(param_1 + 0x60));
      puVar1 = *(undefined8 **)(param_1 + 400);
      *(undefined8 *)(param_1 + 400) = 0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)();
      }
    }
  }
  return;
}



/* Entry: 104a75a34; end: 104a75cab;  */

void FUN_104a75a34(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((*(long *)(param_1 + 0x170) != 0) && (*(long *)(param_1 + 400) == 0)) {
    uStack_60 = *param_2;
    if ((uStack_60 & 1) != 0) {
      piVar5 = (int *)(uStack_60 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104addba0(&uStack_58,&uStack_60);
    if ((uStack_60 & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x000100460448(param_1 + 0x70);
    uVar3 = *(ulong *)(param_1 + 0xb8);
    uVar6 = *param_2;
    if (uVar6 != uVar3) {
      if ((uVar6 & 1) != 0) {
        piVar5 = (int *)(uVar6 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = *piVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar6 = *param_2;
      }
      *(ulong *)(param_1 + 0xb8) = uVar6;
      if ((uVar3 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    for (plVar9 = *(long **)(param_1 + 0xb0); plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      lVar7 = *plVar9;
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      uStack_68 = 0;
      uVar4 = uVar8;
      func_0x0001004bdd30(uVar8,lVar7,&uStack_68);
      uVar3 = uStack_68;
      if ((int)uVar4 == 0) {
        if ((uStack_68 & 1) != 0) goto LAB_104a75b50;
      }
      else {
        uStack_70 = uStack_68;
        if ((uStack_68 & 1) != 0) {
          piVar5 = (int *)(uStack_68 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar2) {
              *piVar5 = *piVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x0001004da0b0(uVar8,lVar7,&uStack_70);
        if ((uVar3 & 1) != 0) {
          func_0x00010084dad0(uVar3);
LAB_104a75b50:
          func_0x00010084dad0(uVar3);
        }
      }
    }
    func_0x000100466b80(param_1 + 0x70);
    plVar9 = (long *)0x10;
    __Znwm();
    uVar3 = *param_2;
    if ((uVar3 & 1) == 0) {
      *plVar9 = (long)&PTR_FUN_1107c1550;
      plVar9[1] = uVar3;
    }
    else {
      piVar5 = (int *)(uVar3 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      *plVar9 = (long)&PTR_FUN_1107c1550;
      plVar9[1] = uVar3;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      func_0x00010084dad0();
    }
    plStack_78 = plVar9;
    func_0x0001004c062c(param_1,3,param_2,"resolver failure",&plStack_78);
    plVar9 = plStack_78;
    plStack_78 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    if ((uStack_58 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return;
}



/* Entry: 104a75cac; end: 104a75d03;  */

ulong * FUN_104a75cac(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  if (uVar4 != uVar3) {
    if ((uVar4 & 1) != 0) {
      piVar5 = (int *)(uVar4 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = *piVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
    if ((uVar3 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return param_1;
}



/* Entry: 104a75d04; end: 104a760e7;  */

void FUN_104a75d04(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 **appuStack_110 [3];
  undefined8 *apuStack_f8 [2];
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **appuStack_c8 [3];
  undefined ***pppuStack_b0;
  undefined **appuStack_a8 [3];
  undefined ***pppuStack_90;
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = (int)param_2 + 0x140;
  func_0x0001004bdd28();
  if (iVar2 == 2) {
    uStack_e8 = 1;
    func_0x000100460448(param_2 + 0xe0);
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    (**(code **)(**(long **)(param_2 + 0x120) + 0x10))
              (appuStack_110,*(long **)(param_2 + 0x120),&uStack_130);
    FUN_104a77de4(apuStack_f8,appuStack_110);
    func_0x0001004e38fc(appuStack_110);
    func_0x000100466b80(param_2 + 0xe0);
    ppuStack_68 = &PTR_FUN_1107c1948;
    pppuStack_50 = &ppuStack_68;
    pppuStack_70 = appuStack_88;
    appuStack_88[0] = &PTR_DAT_1107c19d8;
    pppuStack_90 = appuStack_a8;
    pppuStack_b0 = appuStack_c8;
    appuStack_c8[0] = &PTR_DAT_1107c1af8;
    appuStack_a8[0] = &PTR_DAT_1107c1a68;
    uStack_60 = param_3;
    switch(uStack_e8) {
    case 0:
      appuStack_110[0] = apuStack_f8;
      FUN_104a8070c(param_1,&ppuStack_68,appuStack_110);
      break;
    case 1:
      FUN_104a80830(param_1);
      break;
    case 2:
      appuStack_110[0] = apuStack_f8;
      FUN_104a8092c(param_1);
      break;
    case 3:
      appuStack_110[0] = apuStack_f8;
      FUN_104a80a30(param_1);
      break;
    default:
      goto LAB_104a75f94;
    }
    if (pppuStack_b0 == appuStack_c8) {
      lVar4 = 4;
      pppuVar3 = appuStack_c8;
code_r0x000104a75ebc:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_b0 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_b0;
      goto code_r0x000104a75ebc;
    }
    if (pppuStack_90 == appuStack_a8) {
      lVar4 = 4;
      pppuVar3 = appuStack_a8;
code_r0x000104a75eec:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_90 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_90;
      goto code_r0x000104a75eec;
    }
    if (pppuStack_70 == appuStack_88) {
      lVar4 = 4;
      pppuVar3 = appuStack_88;
code_r0x000104a75f1c:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_70 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_70;
      goto code_r0x000104a75f1c;
    }
    if (pppuStack_50 == &ppuStack_68) {
      lVar4 = 4;
      pppuVar3 = &ppuStack_68;
code_r0x000104a75f4c:
      (*(code *)(*pppuVar3)[lVar4])();
    }
    else if (pppuStack_50 != (undefined ***)0x0) {
      lVar4 = 5;
      pppuVar3 = pppuStack_50;
      goto code_r0x000104a75f4c;
    }
    func_0x0001004e38fc(apuStack_f8);
  }
  else {
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    FUN_104ab5920(param_1,2,"channel not connected",0x15,appuStack_110,&uStack_e0);
    apuStack_f8[0] = &uStack_e0;
    func_0x000100482b64(apuStack_f8);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_104a75f94:
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                      ,0x695,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a75fc4);
  (*pcVar1)();
}



/* Entry: 104a760e8; end: 104a7651b;  */

ulong FUN_104a760e8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  ulong *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulong uVar12;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long *plStack_70;
  long *plStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 *puStack_38;
  
  puVar10 = (undefined8 *)param_2[1];
  if (puVar10 != (undefined8 *)0x0) {
    param_2[1] = 0;
    puStack_38 = puVar10;
    func_0x0001008de004(param_1 + 0x140,*(undefined4 *)(param_2 + 2),&puStack_38);
    puVar10 = puStack_38;
    puStack_38 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      (**(code **)*puVar10)();
    }
  }
  if (param_2[3] != 0) {
    FUN_104add5ec(param_1 + 0x140);
  }
  plVar7 = param_2 + 0xe;
  if ((*plVar7 != 0) || (param_2[0xf] != 0)) {
    FUN_104a75d04(&uStack_40,param_1,param_2);
    uStack_48 = CONCAT44(uStack_3c,uStack_40);
    if (uStack_48 == 0) {
      param_2[0xc] = 0;
      *plVar7 = 0;
      param_2[0xf] = 0;
    }
    else {
      lVar8 = *plVar7;
      if ((uStack_40 & 1) != 0) {
        piVar11 = (int *)(uStack_48 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001004bd7e8(&uStack_60,lVar8,&uStack_48);
      if ((uStack_48 & 1) != 0) {
        func_0x00010084dad0();
      }
      uVar9 = param_2[0xf];
      uStack_50 = CONCAT44(uStack_3c,uStack_40);
      if ((uStack_40 & 1) != 0) {
        piVar11 = (int *)(uStack_50 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001004bd7e8(&uStack_60,uVar9,&uStack_50);
      if ((uStack_50 & 1) != 0) {
        func_0x00010084dad0();
      }
      param_2[0xc] = 0;
      *plVar7 = 0;
      param_2[0xf] = 0;
      if ((uStack_40 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  if ((*(char *)(param_2 + 0x10) != '\0') && (*(long **)(param_1 + 400) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 400) + 0x30))();
  }
  if (param_2[4] != 0) {
    FUN_104a759cc(param_1);
    uStack_58 = param_2[4];
    if ((uStack_58 & 1) != 0) {
      piVar11 = (int *)(uStack_58 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar6 = &uStack_58;
    func_0x00010084d7f0(puVar6,0xd,&uStack_40);
    iVar5 = 0;
    if (uStack_40 == 0) {
      iVar5 = (int)puVar6;
    }
    uVar12 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      func_0x00010084dad0();
    }
    if (iVar5 == 0) {
      if (*(long *)(param_1 + 0x1d8) != 0) {
        func_0x00010bda9780();
        FUN_104bd46a0();
        if (plStack_68 != (long *)0x0) {
          (**(code **)(*plStack_68 + 8))();
        }
        func_0x0001004bdf74(&uStack_60);
        __Unwind_Resume();
        plVar7 = *(long **)(uVar12 + 0x48);
        if ((long *)0x1 < plVar7) {
          do {
            lVar8 = *plVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (*(code *)plVar7[1])();
          }
        }
        lVar8 = 0x118;
        do {
          if (*(long *)(uVar12 + lVar8) != 0) {
            func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                                ,0x76f,2,"assertion failed: %s");
            _abort();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x104a765e8);
            (*pcVar4)();
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0x148);
        if ((*(ulong *)(uVar12 + 0x148) & 1) != 0) {
          func_0x00010084dad0();
        }
        func_0x0001004dfd58(uVar12 + 0x110);
        plVar7 = *(long **)(uVar12 + 0x108);
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        if (*(long *)(uVar12 + 0x18) != 0) {
          func_0x0001005a5960(*(long *)(uVar12 + 0x18) + 8);
          *(undefined8 *)(uVar12 + 0x18) = 0;
        }
        return uVar12;
      }
      uVar12 = param_2[4];
      if (uVar12 == 0) {
        uStack_80 = 0;
      }
      else {
        if ((uVar12 & 1) != 0) {
          piVar11 = (int *)(uVar12 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar12 = param_2[4];
        }
        *(ulong *)(param_1 + 0x1d8) = uVar12;
        uStack_80 = param_2[4];
        if ((uStack_80 & 1) != 0) {
          piVar11 = (int *)(uStack_80 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar3) {
              *piVar11 = *piVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      uStack_60 = 0;
      FUN_104addac4(&uStack_78,&uStack_80);
      plVar7 = (long *)0x10;
      __Znwm();
      uVar12 = uStack_78;
      uStack_78 = 0x36;
      *plVar7 = (long)&PTR_FUN_1107c1550;
      plVar7[1] = uVar12;
      if ((uVar12 & 1) != 0) {
        piVar11 = (int *)(uVar12 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        func_0x00010084dad0();
      }
      plStack_70 = plVar7;
      func_0x0001004c062c(param_1,4,&uStack_60,"shutdown from API",&plStack_70);
      plVar7 = plStack_70;
      plStack_70 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if ((uStack_78 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_80 & 1) != 0) {
        func_0x00010084dad0();
      }
      if ((uStack_60 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else if (*(long *)(param_1 + 0x1d8) == 0) {
      plStack_68 = (long *)0x0;
      uStack_60 = 0;
      func_0x0001004c062c(param_1,0,&uStack_60,"channel entering IDLE",&plStack_68);
      plVar7 = plStack_68;
      plStack_68 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if ((uStack_60 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
  }
  plVar7 = *(long **)(param_1 + 8);
  do {
    lVar8 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 + -1 == 0) {
    func_0x000100836ca4();
  }
  uStack_88 = 0;
  func_0x0001004bd7e8(&uStack_40,*param_2,&uStack_88);
  if ((uStack_88 & 1) != 0) {
    func_0x00010084dad0();
  }
  return uStack_88;
}



/* Entry: 104a7651c; end: 104a765ff;  */

long FUN_104a7651c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x48);
  if ((long *)0x1 < plVar5) {
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plVar5[1])();
    }
  }
  lVar6 = 0x118;
  do {
    if (*(long *)(param_1 + lVar6) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                          ,0x76f,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a765e8);
      (*pcVar4)();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x148);
  if ((*(ulong *)(param_1 + 0x148) & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x0001004dfd58(param_1 + 0x110);
  plVar5 = *(long **)(param_1 + 0x108);
  if (plVar5 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001005a5960(*(long *)(param_1 + 0x18) + 8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 104a76600; end: 104a76693;  */

void FUN_104a76600(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar6 + 0x90) + 0x40);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x28) + 0x18))();
  }
  uVar4 = *(undefined8 *)(lVar6 + 0xe0);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar5 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_21,uVar4,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a76694; end: 104a7680f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_104a76694(long param_1,undefined8 param_2,ulong *param_3,code *param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_108;
  char *pcStack_100;
  long alStack_f8 [20];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_3 == 0) {
    func_0x00010bda97b4();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a767d0);
    (*pcVar3)();
  }
  lVar9 = 0;
  alStack_f8[1] = 0;
  do {
    lVar7 = param_1 + lVar9 * 8;
    lVar6 = *(long *)(lVar7 + 0x118);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar7 + 0x118);
      *(long *)(lVar6 + 0x18) = param_1;
      lVar7 = *plVar5;
      *(code **)(lVar7 + 0x28) = FUN_104a76818;
      *(long *)(lVar7 + 0x30) = lVar7;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      alStack_f8[0] = *plVar5;
      uStack_108 = *param_3;
      if ((uStack_108 & 1) != 0) {
        piVar8 = (int *)(uStack_108 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      alStack_f8[0] = alStack_f8[0] + 0x20;
      pcStack_100 = "PendingBatchesFail";
      func_0x0001004dfd88(alStack_f8 + 1,alStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        func_0x00010084dad0();
      }
      *plVar5 = 0;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 6);
  iVar4 = (int)alStack_f8 + 8;
  (*param_4)();
  if (iVar4 == 0) {
    func_0x000100616b08(alStack_f8 + 1,*(undefined8 *)(param_1 + 0x88));
  }
  else {
    func_0x0001004dffa0(alStack_f8 + 1);
  }
  plVar5 = alStack_f8 + 1;
  func_0x0001004e0194(plVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x0001004e0194(alStack_f8 + 1);
  __Unwind_Resume(plVar5);
  return (long *)0x0;
}



/* Entry: 104a76810; end: 104a76817;  */

undefined8 FUN_104a76810(void)

{
  return 0;
}



/* Entry: 104a76818; end: 104a7688b;  */

void FUN_104a76818(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104adfc18(param_1,&uStack_28,*(undefined8 *)(lVar3 + 0x88));
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a7688c; end: 104a768f7;  */

ulong * FUN_104a7688c(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x0001004d9fa0(param_1 + 3,param_1[4]);
  plVar4 = (long *)param_1[2];
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a768f8; end: 104a768ff;  */

undefined8 FUN_104a768f8(void)

{
  return 1;
}



/* Entry: 104a76900; end: 104a76a3f;  */

undefined8 * FUN_104a76900(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_1107c10b8;
  lVar6 = param_1[0x1c];
  if (lVar6 != 0) {
    func_0x000104a74130(lVar6 + 0x28,*(undefined8 *)(lVar6 + 0x30));
    func_0x000104a74130(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x18));
  }
  lVar6 = 0x1c0;
  do {
    if (*(long *)((long)param_1 + lVar6) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                          ,0xa52,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a76a20);
      (*pcVar4)();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x1f0);
  if (param_1[0xd] != 0) {
    uStack_30 = 0;
    func_0x0001004bd7e8(&uStack_21,param_1[0xd],&uStack_30);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x0001008dbe00(param_1 + 0x1e);
  plVar5 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = (long *)param_1[0x1b];
  if (plVar5 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((param_1[0x12] & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((param_1[0x11] & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x0001004b6d90(param_1 + 3);
  return param_1;
}



/* Entry: 104a76a40; end: 104a76a43;  */

undefined8 * FUN_104a76a40(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *param_1 = &PTR_FUN_1107c10b8;
  lVar6 = param_1[0x1c];
  if (lVar6 != 0) {
    func_0x000104a74130(lVar6 + 0x28,*(undefined8 *)(lVar6 + 0x30));
    func_0x000104a74130(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x18));
  }
  lVar6 = 0x1c0;
  do {
    if (*(long *)((long)param_1 + lVar6) != 0) {
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                          ,0xa52,2,"assertion failed: %s");
      _abort();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104a76a20);
      (*pcVar4)();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x1f0);
  if (param_1[0xd] != 0) {
    uStack_30 = 0;
    func_0x0001004bd7e8(&uStack_21,param_1[0xd],&uStack_30);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x0001008dbe00(param_1 + 0x1e);
  plVar5 = (long *)param_1[0x1d];
  param_1[0x1d] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = (long *)param_1[0x1b];
  if (plVar5 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((param_1[0x12] & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((param_1[0x11] & 1) != 0) {
    func_0x00010084dad0();
  }
  func_0x0001004b6d90(param_1 + 3);
  return param_1;
}



/* Entry: 104a76a44; end: 104a76a57;  */

void FUN_104a76a44(void)

{
  FUN_104a76900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a76a58; end: 104a76b1f;  */

void FUN_104a76a58(undefined8 param_1,long *param_2,long **param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  long **pplStack_30;
  long *plStack_28;
  
  plVar3 = param_2;
  if (param_2[0x31] == 0) {
    func_0x00010ae775b8(&plStack_28,"call cancelled",0xe);
    param_3 = &plStack_28;
    FUN_104a76b20(param_2);
    plVar3 = plStack_28;
    if (((ulong)plStack_28 & 1) != 0) {
      func_0x00010084dad0();
      plVar3 = plStack_28;
    }
  }
  if (param_2[0xf] != 0) {
    func_0x000100467750();
    func_0x000100836f04(param_1,param_2[0x10]);
    plStack_38 = plVar3;
    pplStack_30 = param_3;
    (**(code **)(*(long *)param_2[0xf] + 0x50))((long *)param_2[0xf],&plStack_38);
  }
  plVar3 = param_2 + 1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return;
}



/* Entry: 104a76b20; end: 104a76c9b;  */

void FUN_104a76b20(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  ulong uStack_78;
  undefined ***pppuStack_70;
  undefined ***pppuStack_68;
  ulong uStack_60;
  undefined ***pppuStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  plVar3 = *(long **)(param_1 + 0x78);
  if (plVar3 != (long *)0x0) {
    uStack_28 = *param_2;
    if ((uStack_28 & 1) != 0) {
      piVar4 = (int *)(uStack_28 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (**(code **)(*plVar3 + 0x40))
              (plVar3,&uStack_28,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400));
    if ((uStack_28 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  plVar3 = *(long **)(param_1 + 0xe8);
  if (plVar3 != (long *)0x0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x188);
    ppuStack_38 = &PTR_DAT_1107c1228;
    ppuStack_48 = &PTR_FUN_1107c1288;
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) {
      piVar4 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = *(long **)(param_1 + 0xe8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppuStack_50 = &ppuStack_48;
    pppuStack_58 = &ppuStack_38;
    pppuStack_68 = pppuStack_50;
    pppuStack_70 = pppuStack_58;
    uStack_78 = uVar5;
    uStack_60 = uVar5;
    lStack_40 = param_1;
    (**(code **)(*plVar3 + 0x18))(plVar3,&uStack_78);
    if ((uStack_78 & 1) != 0) {
      func_0x00010084dad0();
    }
    plVar3 = *(long **)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if ((uVar5 & 1) != 0) {
      func_0x00010084dad0(uVar5);
    }
  }
  return;
}



/* Entry: 104a76c9c; end: 104a76d0f;  */

void FUN_104a76c9c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  ulong uStack_28;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uStack_28 = *param_2;
  if ((uStack_28 & 1) != 0) {
    piVar4 = (int *)(uStack_28 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104adfc18(param_1,&uStack_28,*(undefined8 *)(lVar3 + 0x50));
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a76d10; end: 104a76ebf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a76d10(long param_1,ulong *param_2,code *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uStack_140;
  undefined1 uStack_131;
  code *pcStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  ulong uStack_108;
  char *pcStack_100;
  long alStack_f8 [20];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *param_2;
  if (uVar9 == 0) {
    func_0x00010bda98b0();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104a76e80);
    (*pcVar3)();
  }
  uVar5 = *(ulong *)(param_1 + 0x90);
  if (uVar9 != uVar5) {
    if ((uVar9 & 1) != 0) {
      piVar10 = (int *)(uVar9 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar9 = *param_2;
    }
    *(ulong *)(param_1 + 0x90) = uVar9;
    if ((uVar5 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  lVar13 = 0;
  alStack_f8[1] = 0;
  do {
    lVar12 = param_1 + lVar13 * 8;
    lVar11 = *(long *)(lVar12 + 0x1c0);
    if (lVar11 != 0) {
      plVar6 = (long *)(lVar12 + 0x1c0);
      *(long *)(lVar11 + 0x18) = param_1;
      lVar12 = *plVar6;
      *(code **)(lVar12 + 0x28) = FUN_104a76c9c;
      *(long *)(lVar12 + 0x30) = lVar12;
      *(undefined8 *)(lVar12 + 0x38) = 0;
      alStack_f8[0] = *plVar6;
      uStack_108 = *param_2;
      if ((uStack_108 & 1) != 0) {
        piVar10 = (int *)(uStack_108 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar2) {
            *piVar10 = *piVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      alStack_f8[0] = alStack_f8[0] + 0x20;
      pcStack_100 = "PendingBatchesFail";
      func_0x0001004dfd88(alStack_f8 + 1,alStack_f8,&uStack_108,&pcStack_100);
      if ((uStack_108 & 1) != 0) {
        func_0x00010084dad0();
      }
      *plVar6 = 0;
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 6);
  iVar4 = (int)alStack_f8 + 8;
  (*param_3)();
  puVar8 = *(ulong **)(param_1 + 0x50);
  if (iVar4 == 0) {
    func_0x000100616b08(alStack_f8 + 1);
  }
  else {
    func_0x0001004dffa0(alStack_f8 + 1);
  }
  plVar6 = alStack_f8 + 1;
  func_0x0001004e0194();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004e0194(alStack_f8 + 1);
  plVar7 = plVar6;
  __Unwind_Resume();
  pcStack_118 = FUN_104a76ec0;
  pcStack_130 = param_3;
  plStack_128 = plVar6;
  puStack_120 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)plVar7[0xf] + 0x18))((long *)plVar7[0xf],plVar7[0x1f]);
  lVar13 = plVar7[0x24];
  uStack_140 = *puVar8;
  if ((uStack_140 & 1) != 0) {
    piVar10 = (int *)(uStack_140 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar2) {
        *piVar10 = *piVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_131,lVar13,&uStack_140);
  if ((uStack_140 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a76ec0; end: 104a76f4f;  */

void FUN_104a76ec0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
            (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0xf8));
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar4 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a76f50; end: 104a76feb;  */

void FUN_104a76f50(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_2;
  if (uStack_30 == 0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x30))
              (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x128),0);
    uStack_30 = *param_2;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  if ((uStack_30 & 1) != 0) {
    piVar4 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a76fec; end: 104a77083;  */

void FUN_104a76fec(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (*(char *)(*(long *)(param_1 + 0x158) + 0x128) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x38))();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x180);
  uStack_30 = *param_2;
  if ((uStack_30 & 1) != 0) {
    piVar4 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a77084; end: 104a7731b;  */

void FUN_104a77084(long param_1,ulong *param_2)

{
  char cVar1;
  undefined8 ***pppuVar2;
  undefined8 **ppuVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  bool bVar10;
  ulong uStack_78;
  undefined8 **ppuStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined4 uStack_3c;
  undefined8 **ppuStack_38;
  
  if ((*(long *)(param_1 + 0x78) != 0) || (*(long *)(param_1 + 0xe8) != 0)) {
    ppuStack_38 = (undefined8 ***)0x0;
    uVar7 = *param_2;
    if (uVar7 == 0) {
      puVar9 = *(uint **)(param_1 + 0x188);
      if ((*puVar9 >> 10 & 1) == 0) {
        uVar4 = 2;
LAB_104a7716c:
        if ((*puVar9 >> 0xf & 1) == 0) {
          lVar6 = 0;
          uVar7 = 0;
        }
        else if (*(long *)(puVar9 + 0x4c) == 0) {
          lVar6 = (long)puVar9 + 0x139;
          uVar7 = (ulong)(byte)puVar9[0x4e];
        }
        else {
          uVar7 = *(ulong *)(puVar9 + 0x4e);
          lVar6 = *(long *)(puVar9 + 0x50);
        }
        func_0x00010047ad8c(&ppuStack_58,uVar4,lVar6,uVar7);
        ppuStack_68 = ppuStack_58;
        if ((undefined8 ***)ppuStack_58 != (undefined8 ***)0x0) {
          ppuStack_38 = ppuStack_58;
        }
        goto LAB_104a771b4;
      }
      uVar4 = puVar9[0x62];
      if (uVar4 != 0) goto LAB_104a7716c;
      ppuStack_70 = (undefined8 ***)0x0;
LAB_104a771bc:
      bVar10 = true;
    }
    else {
      ppuStack_58 = (undefined8 ***)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      if ((uVar7 & 1) != 0) {
        piVar8 = (int *)(uVar7 - 1);
        do {
          cVar1 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar10) {
            *piVar8 = *piVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uStack_60 = uVar7;
      func_0x000100831658(&uStack_60,*(undefined8 *)(param_1 + 0x38),&uStack_3c,&ppuStack_58,0,0);
      if ((uStack_60 & 1) != 0) {
        func_0x00010084dad0();
      }
      uVar7 = uStack_50;
      pppuVar2 = (undefined8 ***)ppuStack_58;
      if (-1 < (long)uStack_48) {
        uVar7 = uStack_48 >> 0x38;
        pppuVar2 = &ppuStack_58;
      }
      func_0x00010047ad8c(&ppuStack_68,uStack_3c,pppuVar2,uVar7);
      if ((undefined8 ***)ppuStack_68 != (undefined8 ***)0x0) {
        ppuStack_38 = ppuStack_68;
      }
      if ((long)uStack_48 < 0) {
        __ZdlPv(ppuStack_58);
      }
LAB_104a771b4:
      ppuStack_70 = ppuStack_68;
      if (((ulong)ppuStack_68 & 1) == 0) goto LAB_104a771bc;
      piVar8 = (int *)((long)ppuStack_68 + -1);
      do {
        cVar1 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar10) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      bVar10 = false;
    }
    ppuVar3 = ppuStack_70;
    FUN_104a76b20(param_1,&ppuStack_70);
    if (!bVar10) {
      func_0x00010084dad0(ppuVar3);
      func_0x00010084dad0(ppuVar3);
    }
  }
  uVar7 = *(ulong *)(param_1 + 0x90);
  uStack_78 = *param_2;
  if (uVar7 == 0) goto LAB_104a7725c;
  if (uVar7 == uStack_78) {
LAB_104a77240:
    *(undefined8 *)(param_1 + 0x90) = 0;
    ppuStack_58 = (undefined8 ***)0x36;
    if ((uVar7 & 1) != 0) {
      func_0x00010084dad0(uVar7);
    }
  }
  else {
    if ((uVar7 & 1) != 0) {
      piVar8 = (int *)(uVar7 - 1);
      do {
        cVar1 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar10) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar7 = *(ulong *)(param_1 + 0x90);
    }
    *param_2 = uVar7;
    if ((uStack_78 & 1) != 0) {
      func_0x00010084dad0();
    }
    uVar7 = *(ulong *)(param_1 + 0x90);
    if (uVar7 != 0) goto LAB_104a77240;
  }
  uStack_78 = *param_2;
LAB_104a7725c:
  uVar5 = *(undefined8 *)(param_1 + 0x1b8);
  if ((uStack_78 & 1) != 0) {
    piVar8 = (int *)(uStack_78 - 1);
    do {
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar10) {
        *piVar8 = *piVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&ppuStack_58,uVar5,&uStack_78);
  if ((uStack_78 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a7731c; end: 104a77323;  */

undefined8 FUN_104a7731c(void)

{
  return 0;
}



/* Entry: 104a77324; end: 104a77353;  */

ulong * FUN_104a77324(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a77354; end: 104a7735b;  */

void FUN_104a77354(void)

{
  return;
}



/* Entry: 104a7735c; end: 104a773b3;  */

long * FUN_104a7735c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  func_0x0001004b6d90(param_1 + 2);
  plVar4 = (long *)*param_1;
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  return param_1;
}



/* Entry: 104a773b4; end: 104a773bf;  */

undefined8 FUN_104a773b4(void)

{
  return 1;
}



/* Entry: 104a773c0; end: 104a77477;  */

long FUN_104a773c0(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x38;
  func_0x000100482ae0(&lStack_28);
  func_0x000100482900(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 104a77478; end: 104a77513;  */

long * FUN_104a77478(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    param_1 = param_1 + 0x10;
    plVar1 = (long *)*plVar3;
    do {
      while( true ) {
        plVar3 = plVar1;
        lVar2 = param_1;
        FUN_104a77514(param_1,param_3,plVar3 + 4);
        if ((int)lVar2 == 0) break;
        plVar1 = (long *)*plVar3;
        plVar4 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_104a774f8;
      }
      lVar2 = param_1;
      FUN_104a77514(param_1,plVar3 + 4,param_3);
      if ((int)lVar2 == 0) break;
      plVar4 = plVar3 + 1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_104a774f8:
  *param_2 = plVar3;
  return plVar4;
}



/* Entry: 104a77514; end: 104a7757b;  */

bool FUN_104a77514(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar6 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar1 = (undefined8 *)*param_3;
  uVar5 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar1 = param_3;
    uVar5 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar2 = uVar5;
  if (uVar4 <= uVar5) {
    uVar2 = uVar4;
  }
  _memcmp(puVar6,puVar1,uVar2);
  bVar3 = uVar4 < uVar5;
  if ((int)puVar6 != 0) {
    bVar3 = (int)puVar6 < 0;
  }
  return bVar3;
}



/* Entry: 104a7757c; end: 104a775a3;  */

void FUN_104a7757c(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)0x8;
  ___cxa_allocate_exception();
  __ZNSt20bad_array_new_lengthC1Ev();
  ___cxa_throw();
  plVar2 = (long *)plVar1[2];
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)*plVar2;
    if (plVar3 == plVar1) {
      *plVar2 = 0;
      while (plVar1 = (long *)plVar2[1], (long *)plVar2[1] != (long *)0x0) {
        do {
          plVar2 = plVar1;
          plVar1 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
    }
    else {
      plVar2[1] = 0;
      while (plVar3 != (long *)0x0) {
        do {
          plVar1 = plVar3;
          plVar3 = (long *)*plVar1;
        } while (plVar3 != (long *)0x0);
        plVar3 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 104a775a4; end: 104a775f7;  */

void FUN_104a775a4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[2];
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)*plVar1;
    if (plVar2 == param_1) {
      *plVar1 = 0;
      while (plVar2 = (long *)plVar1[1], (long *)plVar1[1] != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
    else {
      plVar1[1] = 0;
      while (plVar2 != (long *)0x0) {
        do {
          plVar1 = plVar2;
          plVar2 = (long *)*plVar1;
        } while (plVar2 != (long *)0x0);
        plVar2 = (long *)plVar1[1];
      }
    }
  }
  return;
}



/* Entry: 104a775f8; end: 104a776ab;  */

undefined8 * FUN_104a775f8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000100482900(*param_1,param_1[2]);
  if (param_1[1] != 0) {
    lVar1 = *(long *)(param_1[1] + 0x10);
    if (lVar1 != 0) {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 0x10);
      } while (lVar1 != 0);
      param_1[1] = lVar2;
    }
    func_0x000100482900(*param_1);
  }
  return param_1;
}



/* Entry: 104a776ac; end: 104a7781b;  */

void FUN_104a776ac(long *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1 + 2;
  if ((ulong)((*plVar1 - *param_1 >> 4) * -0x3333333333333333) < param_4) {
    FUN_104a7781c(param_1);
    if (0x333333333333333 < param_4) {
      plVar1 = param_1;
      FUN_104a77a24();
      param_1[1] = param_2;
      __Unwind_Resume();
      param_1[1] = param_4;
      __Unwind_Resume();
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        lVar5 = plVar1[1];
        lVar2 = lVar3;
        if (lVar5 != lVar3) {
          do {
            lVar5 = lVar5 + -0x50;
            func_0x0001004c74fc(plVar1 + 2,lVar5);
          } while (lVar5 != lVar3);
          lVar2 = *plVar1;
        }
        plVar1[1] = lVar3;
        __ZdlPv(lVar2);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar3 = param_1[2] - *param_1 >> 4;
    uVar4 = lVar3 * -0x6666666666666666;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x199999999999998 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar4 = 0x333333333333333;
    }
    FUN_104a77888(param_1,uVar4);
    FUN_104a778d8(plVar1,param_2,param_3,param_1[1]);
  }
  else {
    lVar3 = param_1[1] - *param_1 >> 4;
    if (param_4 <= (ulong)(lVar3 * -0x3333333333333333)) {
      func_0x000104a779c8(param_2);
      lVar3 = param_1[1];
      while (lVar3 != param_3) {
        lVar3 = lVar3 + -0x50;
        func_0x0001004c74fc(plVar1,lVar3);
      }
      param_1[1] = param_3;
      return;
    }
    lVar3 = param_2 + lVar3 * 0x10;
    func_0x000104a779c8(param_2,lVar3);
    FUN_104a778d8(plVar1,lVar3,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 104a7781c; end: 104a77887;  */

void FUN_104a7781c(long *param_1)

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
        lVar2 = lVar2 + -0x50;
        func_0x0001004c74fc(param_1 + 2,lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 104a77888; end: 104a778d7;  */

long * FUN_104a77888(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < 0x333333333333334) {
    plVar1 = param_1 + 2;
    FUN_104a77a38();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 10);
    return plVar1;
  }
  FUN_104a77a24();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x0001004c6870(param_4,param_2);
    param_4 = plStack_58 + 10;
  }
  uStack_68 = 1;
  func_0x0001004c6cc8(&plStack_80);
  return param_4;
}



/* Entry: 104a778d8; end: 104a77977;  */

long FUN_104a778d8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  lStack_40 = param_4;
  uStack_60 = param_1;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x50) {
    func_0x0001004c6870(param_4,param_2);
    param_4 = lStack_38 + 0x50;
  }
  uStack_48 = 1;
  func_0x0001004c6cc8(&uStack_60);
  return param_4;
}



/* Entry: 104a77978; end: 104a77a23;  */

void FUN_104a77978(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)param_1[2];
  lVar3 = *(long *)param_1[1];
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      lVar1 = lVar1 + -0x50;
      func_0x0001004c74fc(uVar2,lVar1);
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 104a77a24; end: 104a77a37;  */

void FUN_104a77a24(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puStack_58;
  
  puVar1 = (ulong *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 < (ulong *)0x333333333333334) {
    __Znwm((long)param_2 * 0x50);
    return;
  }
  FUN_104a7757c();
  if (*puVar1 == 0) {
    puStack_58 = puVar1 + 1;
    func_0x0001004c4cbc(&puStack_58);
  }
  puVar2 = (ulong *)*param_2;
  *param_2 = 0x36;
  puVar3 = (ulong *)*puVar1;
  if (puVar2 == puVar3) {
    puStack_58 = puVar2;
    if (((ulong)puVar2 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *puVar1 = (ulong)puVar2;
    puStack_58 = (ulong *)0x36;
    if (((ulong)puVar3 & 1) == 0) goto LAB_104a77af0;
    func_0x00010084dad0(puVar3);
  }
  puVar2 = (ulong *)*puVar1;
LAB_104a77af0:
  if (puVar2 == (ulong *)0x0) {
    func_0x00010ae77b40(puVar1);
  }
  return;
}



/* Entry: 104a77a38; end: 104a77a7b;  */

void FUN_104a77a38(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puStack_48;
  
  if (param_2 < (ulong *)0x333333333333334) {
    __Znwm((long)param_2 * 0x50);
    return;
  }
  FUN_104a7757c();
  if (*param_1 == 0) {
    puStack_48 = param_1 + 1;
    func_0x0001004c4cbc(&puStack_48);
  }
  puVar1 = (ulong *)*param_2;
  *param_2 = 0x36;
  puVar2 = (ulong *)*param_1;
  if (puVar1 == puVar2) {
    puStack_48 = puVar1;
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_1 = (ulong)puVar1;
    puStack_48 = (ulong *)0x36;
    if (((ulong)puVar2 & 1) == 0) goto LAB_104a77af0;
    func_0x00010084dad0(puVar2);
  }
  puVar1 = (ulong *)*param_1;
LAB_104a77af0:
  if (puVar1 == (ulong *)0x0) {
    func_0x00010ae77b40(param_1);
  }
  return;
}



/* Entry: 104a77a7c; end: 104a77b27;  */

void FUN_104a77a7c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    func_0x0001004c4cbc(&puStack_28);
  }
  puVar1 = (ulong *)*param_2;
  *param_2 = 0x36;
  puVar2 = (ulong *)*param_1;
  if (puVar1 == puVar2) {
    puStack_28 = puVar1;
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_1 = (ulong)puVar1;
    puStack_28 = (ulong *)0x36;
    if (((ulong)puVar2 & 1) == 0) goto LAB_104a77af0;
    func_0x00010084dad0(puVar2);
  }
  puVar1 = (ulong *)*param_1;
LAB_104a77af0:
  if (puVar1 == (ulong *)0x0) {
    func_0x00010ae77b40(param_1);
  }
  return;
}



/* Entry: 104a77b28; end: 104a77baf;  */

uint FUN_104a77b28(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104a77bb0; end: 104a77c4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104a77bb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  long alStack_38 [3];
  
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_48 = **(undefined8 **)(param_1 + 8);
  uStack_68 = 0;
  uStack_60 = *(undefined8 *)(lVar1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  uStack_88 = *(undefined8 *)(lVar1 + 0x30);
  uStack_80 = 0;
  uStack_50 = *(undefined8 *)(lVar1 + 0x38);
  lStack_78 = *(long *)(lVar1 + 0x40);
  alStack_38[0] = *(long *)(lStack_78 + 0x40) + 0x28;
  alStack_38[1] = 0;
  uStack_39 = 0;
  lStack_70 = lVar1;
  uStack_58 = uVar2;
  alStack_38[2] = param_2;
  func_0x0001004e10ac(uVar2,&uStack_48,&uStack_88,alStack_38 + 2,alStack_38 + 1,alStack_38,
                      &uStack_39);
  puVar3 = *(undefined8 **)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)();
  }
  return;
}



/* Entry: 104a77c4c; end: 104a77d63;  */

void FUN_104a77c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  lStack_38 = 0;
  lVar6 = puVar5[9];
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0xf0) == 0) {
      lVar6 = 0;
    }
    else {
      FUN_104a8dbe4();
      lVar6 = *(long *)(lVar6 + 0xf0);
      if (lStack_38 != 0) {
        func_0x000104a8dc18();
      }
    }
    uStack_40 = 0;
    lStack_38 = lVar6;
    func_0x0001008dbe00(&uStack_40);
  }
  plVar3 = (long *)*puVar5;
  if ((long *)0x1 < plVar3) {
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plVar3[1])();
    }
  }
  puVar4 = (undefined8 *)puVar5[9];
  puVar5[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  if (lStack_38 == 0) {
    uStack_48 = 0;
    func_0x0001004bd7e8(&uStack_40,param_3,&uStack_48);
    func_0x0001004bdf74(&uStack_48);
  }
  else {
    func_0x0001008dbe30(lStack_38,param_3);
  }
  func_0x0001008dbe00(&lStack_38);
  return;
}



/* Entry: 104a77d64; end: 104a77ddb;  */

void FUN_104a77d64(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    func_0x00010bda991c();
  }
  else if ((undefined **)*param_2 == &PTR_DAT_1107c1040) {
    puVar3 = (undefined8 *)param_2[1];
    piVar1 = *(int **)(param_3 + 8);
    func_0x00010047fdf4(piVar1,"grpc.internal.client_channel");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(piVar1 + 4);
    }
    *puVar3 = uVar2;
    *param_1 = 0;
    return;
  }
  func_0x00010bda9950();
  return;
}



/* Entry: 104a77ddc; end: 104a77de3;  */

void FUN_104a77ddc(void)

{
  return;
}



/* Entry: 104a77de4; end: 104a77e6f;  */

void FUN_104a77de4(long param_1,long param_2)

{
  uint uVar1;
  long lStack_30;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(uint *)(param_1 + 0x10) == 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      return;
    }
  }
  else if (uVar1 == 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return;
  }
  lStack_30 = param_1;
  (*(code *)(&PTR_FUN_1107c1178)[uVar1])(&lStack_30,param_1,param_2);
  return;
}



/* Entry: 104a77e70; end: 104a77e8f;  */

void FUN_104a77e70(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a77e90; end: 104a77eaf;  */

void FUN_104a77e90(undefined8 param_1,ulong *param_2)

{
  if ((*param_2 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a77eb0; end: 104a77ee3;  */

long * FUN_104a77eb0(undefined8 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_28;
  
  plVar4 = (long *)*param_1;
  if ((int)plVar4[2] != 0) {
    if (*(uint *)(plVar4 + 2) != 0xffffffff) {
      (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(plVar4 + 2)])((long)&uStack_28 + 7,plVar4);
    }
    *plVar4 = 0;
    *plVar4 = *param_3;
    lVar5 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    plVar4[1] = lVar5;
    *(undefined4 *)(plVar4 + 2) = 0;
    return plVar4;
  }
  lVar5 = *param_3;
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      uStack_28 = param_2;
      (**(code **)(*plVar4 + 8))();
      param_2 = uStack_28;
    }
  }
  *param_2 = lVar5;
  lVar5 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plVar4 = (long *)param_2[1];
  param_2[1] = lVar5;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a77f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 104a77ee4; end: 104a77f83;  */

long * FUN_104a77ee4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_28;
  
  if ((int)param_1[2] != 0) {
    if (*(uint *)(param_1 + 2) != 0xffffffff) {
      (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(param_1 + 2)])((long)&uStack_28 + 7,param_1);
    }
    *param_1 = 0;
    *param_1 = *param_3;
    lVar5 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    param_1[1] = lVar5;
    *(undefined4 *)(param_1 + 2) = 0;
    return param_1;
  }
  lVar5 = *param_3;
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) {
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
    if (lVar6 + -1 == 0) {
      uStack_28 = param_2;
      (**(code **)(*plVar4 + 8))();
      param_2 = uStack_28;
    }
  }
  *param_2 = lVar5;
  lVar5 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plVar4 = (long *)param_2[1];
  param_2[1] = lVar5;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a77f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return plVar4;
  }
  return (long *)0x0;
}



/* Entry: 104a77f84; end: 104a77ff3;  */

undefined8 * FUN_104a77f84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 2) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(param_1 + 2)])(&uStack_21,param_1);
  }
  *param_1 = 0;
  *param_1 = *param_2;
  uVar1 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 104a77ff4; end: 104a7804b;  */

long FUN_104a77ff4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  return param_1;
}



/* Entry: 104a7804c; end: 104a78087;  */

/* WARNING: Possible PIC construction at 0x00010084db18: Changing call to branch */

ulong * FUN_104a7804c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined1 uStack_21;
  
  if ((int)param_1[2] != 2) {
    if ((uint)param_1[2] != 0xffffffff) {
      (*(code *)(&PTR_DAT_1107c1158)[(uint)param_1[2]])(&uStack_21,param_1);
    }
    *param_1 = *param_3;
    *param_3 = 0x36;
    *(undefined4 *)(param_1 + 2) = 2;
    return param_1;
  }
  puVar4 = (ulong *)*param_2;
  if ((ulong *)*param_3 != puVar4) {
    *param_2 = *param_3;
    *param_3 = 0x36;
    if (((ulong)puVar4 & 1) != 0) {
      puVar5 = (ulong *)((long)puVar4 - 1);
      if ((int)*puVar5 != 1) {
        do {
          iVar3 = (int)*puVar5 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(int *)puVar5 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 != 0) {
          return puVar4;
        }
      }
      func_0x00010084d1dc((long)puVar4 + 0x1f,0);
      if (*(char *)((long)puVar4 + 0x1e) < '\0') {
        puVar5 = *(ulong **)((long)puVar4 + 7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return puVar5;
    }
  }
  return puVar4;
}



/* Entry: 104a78088; end: 104a780f3;  */

undefined8 * FUN_104a78088(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 2) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(param_1 + 2)])(&uStack_21,param_1);
  }
  *param_1 = *param_2;
  *param_2 = 0x36;
  *(undefined4 *)(param_1 + 2) = 2;
  return param_1;
}



/* Entry: 104a780f4; end: 104a7812f;  */

/* WARNING: Possible PIC construction at 0x00010084db18: Changing call to branch */

ulong * FUN_104a780f4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined1 uStack_21;
  
  if ((int)param_1[2] != 3) {
    if ((uint)param_1[2] != 0xffffffff) {
      (*(code *)(&PTR_DAT_1107c1158)[(uint)param_1[2]])(&uStack_21,param_1);
    }
    *param_1 = *param_3;
    *param_3 = 0x36;
    *(undefined4 *)(param_1 + 2) = 3;
    return param_1;
  }
  puVar4 = (ulong *)*param_2;
  if ((ulong *)*param_3 != puVar4) {
    *param_2 = *param_3;
    *param_3 = 0x36;
    if (((ulong)puVar4 & 1) != 0) {
      puVar5 = (ulong *)((long)puVar4 - 1);
      if ((int)*puVar5 != 1) {
        do {
          iVar3 = (int)*puVar5 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(int *)puVar5 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 != 0) {
          return puVar4;
        }
      }
      func_0x00010084d1dc((long)puVar4 + 0x1f,0);
      if (*(char *)((long)puVar4 + 0x1e) < '\0') {
        puVar5 = *(ulong **)((long)puVar4 + 7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar5);
      return puVar5;
    }
  }
  return puVar4;
}



/* Entry: 104a78130; end: 104a7819b;  */

undefined8 * FUN_104a78130(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 2) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1107c1158)[*(uint *)(param_1 + 2)])(&uStack_21,param_1);
  }
  *param_1 = *param_2;
  *param_2 = 0x36;
  *(undefined4 *)(param_1 + 2) = 3;
  return param_1;
}



/* Entry: 104a7819c; end: 104a782db;  */

undefined1 * FUN_104a7819c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puStack_60;
  ulong uStack_58;
  
  ppuVar2 = &puStack_60;
  puVar6 = param_1 + 1;
  uVar8 = *param_1;
  if ((uVar8 & 1) == 0) {
    uVar3 = 0xc;
  }
  else {
    puVar6 = (ulong *)param_1[1];
    uVar3 = param_1[2] << 1;
  }
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  FUN_104a782dc();
  uVar7 = uVar8 >> 1;
  lVar1 = uVar7 * 0x18;
  puStack_60 = (undefined1 *)ppuVar2;
  uStack_58 = uVar3;
  func_0x0001004dff3c(param_1,(undefined1 *)((long)ppuVar2 + lVar1),param_2,param_3,param_4);
  if (1 < uVar8) {
    puVar4 = (ulong *)(puStack_60 + 0x10);
    uVar8 = uVar7;
    puVar5 = puVar6;
    do {
      uVar3 = *puVar5;
      puVar4[-1] = puVar5[1];
      puVar4[-2] = uVar3;
      puVar5[1] = 0x36;
      *puVar4 = puVar5[2];
      puVar5 = puVar5 + 3;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar8 != 0);
    puVar6 = puVar6 + uVar7 * 3;
    do {
      puVar6 = puVar6 + -3;
      uVar7 = uVar7 - 1;
      func_0x0001004e0174(param_1,puVar6);
    } while (uVar7 != 0);
  }
  uVar8 = *param_1;
  if ((uVar8 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar8 = *param_1;
  }
  param_1[1] = (ulong)puStack_60;
  param_1[2] = uStack_58;
  *param_1 = (uVar8 | 1) + 2;
  return (undefined1 *)((long)ppuVar2 + lVar1);
}



/* Entry: 104a782dc; end: 104a7831f;  */

void FUN_104a782dc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  FUN_104a7757c();
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      puVar2 = puVar2 + -3;
      uVar1 = uVar1 - 1;
      func_0x0001004e0174(param_1,puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*puVar3);
    return;
  }
  return;
}



/* Entry: 104a78320; end: 104a783ab;  */

void FUN_104a78320(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 3;
    do {
      puVar2 = puVar2 + -3;
      uVar1 = uVar1 - 1;
      func_0x0001004e0174(param_1,puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*puVar3);
    return;
  }
  return;
}



/* Entry: 104a783ac; end: 104a783bb;  */

bool FUN_104a783ac(ulong *param_1)

{
  return 1 < *param_1;
}



/* Entry: 104a783bc; end: 104a783ef;  */

void FUN_104a783bc(void)

{
  long *plVar1;
  
  plVar1 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar1 = (long)(PTR___ZTVSt19bad_optional_access_110346b78 + 0x10);
  ___cxa_throw();
  return;
}



/* Entry: 104a783f0; end: 104a783f7;  */

void FUN_104a783f0(void)

{
  return;
}



/* Entry: 104a783f8; end: 104a7842b;  */

void FUN_104a783f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c11a8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a7842c; end: 104a7842f;  */

void FUN_104a7842c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a78430; end: 104a7846b;  */

long FUN_104a78430(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1208);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a7846c; end: 104a7847b;  */

undefined ** FUN_104a7846c(void)

{
  return &PTR_DAT_1107c1208;
}



/* Entry: 104a7847c; end: 104a785a3;  */

void FUN_104a7847c(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *extraout_x8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(uint **)(param_1 + 8);
  if (puVar3 != (uint *)0x0) {
    if ((param_3 == 0x13) &&
       ((*param_2 == 0x635f626c63707267 && param_2[1] == 0x74735f746e65696c) &&
        *(long *)((long)param_2 + 0xb) == 0x73746174735f746e)) {
      *puVar3 = *puVar3 | 0x200000;
      *(undefined8 *)(puVar3 + 0x22) = param_4;
    }
    else {
      puStack_48 = (uint *)0x1;
      uStack_40 = param_5;
      uStack_38 = param_4;
      func_0x0001004bcaf0();
      puVar3 = puStack_48;
      if ((uint *)0x1 < puStack_48) {
        do {
          lVar5 = *(long *)puStack_48;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puStack_48,0x10);
          if (bVar2) {
            *(long *)puStack_48 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(puStack_48 + 2))();
        }
      }
    }
  }
  iVar4 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&puStack_48);
  }
  __Unwind_Resume();
  puStack_88 = (undefined1 *)&uStack_a0;
  if (*(long *)(puVar3 + 2) == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
  }
  else {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    FUN_104a79d1c(*(long *)(puVar3 + 2),&uStack_a0);
    extraout_x8[1] = uStack_98;
    *extraout_x8 = uStack_a0;
    extraout_x8[2] = uStack_90;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    FUN_104a7c75c(&puStack_88);
  }
  return;
}



/* Entry: 104a785a4; end: 104a7862b;  */

void FUN_104a785a4(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_104a79d1c(*(long *)(param_2 + 8),&uStack_40);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    puStack_28 = (undefined1 *)&uStack_40;
    FUN_104a7c75c(&puStack_28);
  }
  return;
}



/* Entry: 104a7862c; end: 104a7866f;  */

void FUN_104a7862c(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *(long *)(param_2 + 8);
  if (lStack_20 == 0) {
    *param_1 = 0;
    param_1[0x10] = 0;
  }
  else {
    uStack_18 = param_5;
    FUN_104a7c7e0(param_3,param_4,&lStack_20);
  }
  return;
}



/* Entry: 104a78670; end: 104a78733;  */

void FUN_104a78670(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  long *aplStack_98 [4];
  long lStack_78;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_1;
  func_0x00010084bc58(aplStack_48,param_1 + 1,param_1[5],param_1[6]);
  iVar5 = (int)aplStack_48;
  func_0x0001004b8034(uVar7);
  plVar3 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar6 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar3 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *plVar3;
  func_0x00010084bc58(aplStack_98,plVar3 + 1,plVar3[5],plVar3[6]);
  iVar5 = (int)aplStack_98;
  func_0x0001008dc020(lVar6);
  plVar3 = aplStack_98[0];
  if ((long *)0x1 < aplStack_98[0]) {
    do {
      lVar6 = *aplStack_98[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_98[0],0x10);
      if (bVar2) {
        *aplStack_98[0] = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)aplStack_98[0][1])();
      plVar3 = aplStack_98[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_98);
  }
  __Unwind_Resume();
  puVar8 = (uint *)*plVar3;
  plVar4 = plVar3 + 1;
  FUN_104a78834(plVar4,plVar3[5],plVar3[6]);
  *puVar8 = *puVar8 | 4;
  puVar8[0x6a] = (uint)plVar4;
  return;
}



/* Entry: 104a78734; end: 104a787f7;  */

void FUN_104a78734(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  long *aplStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *param_1;
  func_0x00010084bc58(aplStack_48,param_1 + 1,param_1[5],param_1[6]);
  iVar5 = (int)aplStack_48;
  func_0x0001008dc020(uVar7);
  plVar3 = aplStack_48[0];
  if ((long *)0x1 < aplStack_48[0]) {
    do {
      lVar6 = *aplStack_48[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_48[0],0x10);
      if (bVar2) {
        *aplStack_48[0] = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)aplStack_48[0][1])();
      plVar3 = aplStack_48[0];
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(aplStack_48);
  }
  __Unwind_Resume();
  puVar8 = (uint *)*plVar3;
  plVar4 = plVar3 + 1;
  FUN_104a78834(plVar4,plVar3[5],plVar3[6]);
  *puVar8 = *puVar8 | 4;
  puVar8[0x6a] = (uint)plVar4;
  return;
}



/* Entry: 104a787f8; end: 104a78833;  */

void FUN_104a787f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_104a78834(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 4;
  puVar2[0x6a] = (uint)puVar1;
  return;
}



/* Entry: 104a78834; end: 104a788eb;  */

long * FUN_104a78834(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000100744a40(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  FUN_104a78928(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x10;
  puVar7[0x68] = (uint)plVar5;
  return plVar5;
}



/* Entry: 104a788ec; end: 104a78927;  */

void FUN_104a788ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_104a78928(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x10;
  puVar2[0x68] = (uint)puVar1;
  return;
}



/* Entry: 104a78928; end: 104a78a07;  */

long * FUN_104a78928(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  plStack_40 = (long *)param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar6 = uStack_48 & 0xff;
  plVar3 = (long *)((ulong)&plStack_50 | 9);
  if (plStack_50 != (long *)0x0) {
    uVar6 = uStack_48;
    plVar3 = plStack_40;
  }
  func_0x0001005612f0(plVar3,uVar6,param_2,param_3);
  iVar5 = (int)uVar6;
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar7 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    if (iVar5 != 0) {
      FUN_104bd46a0();
      func_0x0001004b6d90(&plStack_50);
    }
    __Unwind_Resume();
    puVar8 = (uint *)*plVar4;
    plVar3 = plVar4 + 1;
    FUN_104a78a44(plVar3,plVar4[5],plVar4[6]);
    *puVar8 = *puVar8 | 0x40;
    *(char *)(puVar8 + 0x66) = (char)plVar3;
    return plVar3;
  }
  return plVar3;
}



/* Entry: 104a78a08; end: 104a78a43;  */

void FUN_104a78a08(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  FUN_104a78a44(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x40;
  *(char *)(puVar2 + 0x66) = (char)puVar1;
  return;
}



/* Entry: 104a78a44; end: 104a78afb;  */

long * FUN_104a78a44(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_104adef98(&plStack_50);
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  func_0x00010082af78(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x100;
  puVar7[100] = (uint)plVar5;
  return plVar5;
}



/* Entry: 104a78afc; end: 104a78b73;  */

void FUN_104a78afc(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  func_0x00010082af78(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x100;
  puVar2[100] = (uint)puVar1;
  return;
}



/* Entry: 104a78b74; end: 104a78c2f;  */

long * FUN_104a78b74(undefined8 *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  pplVar3 = &plStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_1[1];
  plStack_50 = (long *)*param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_104adeec0(&plStack_50);
  FUN_104adef14();
  plVar4 = plStack_50;
  if ((long *)0x1 < plStack_50) {
    do {
      lVar6 = *plStack_50;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plStack_50,0x10);
      if (bVar2) {
        *plStack_50 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)plStack_50[1])();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (long *)pplVar3;
  }
  ___stack_chk_fail();
  if (param_2 != 0) {
    FUN_104bd46a0();
    func_0x0001004b6d90(&plStack_50);
  }
  __Unwind_Resume();
  puVar7 = (uint *)*plVar4;
  plVar5 = plVar4 + 1;
  func_0x00010082ad24(plVar5,plVar4[5],plVar4[6]);
  *puVar7 = *puVar7 | 0x1000;
  puVar7[0x5e] = (uint)plVar5;
  return plVar5;
}



/* Entry: 104a78c30; end: 104a78ca7;  */

void FUN_104a78c30(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  puVar1 = param_1 + 1;
  func_0x00010082ad24(puVar1,param_1[5],param_1[6]);
  *puVar2 = *puVar2 | 0x1000;
  puVar2[0x5e] = (uint)puVar1;
  return;
}


