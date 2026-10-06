/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10abd3df4; end: 10abd3eaf;  */

long FUN_10abd3df4(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_10a195718();
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),
                        *(undefined8 *)(param_2 + 0x30));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  return param_1;
}



/* Entry: 10abd3eb0; end: 10abd408b;  */

undefined8 * FUN_10abd3eb0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c50af0;
  if (param_1[0x28] != 0) {
    func_0x0001092b4274(param_1 + 0x28);
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a23037c(param_1 + 0x24);
    func_0x00010a061620(param_1 + 0x1f);
    if (*(char *)((long)param_1 + 0xf7) < '\0') {
      __ZdlPv(param_1[0x1c]);
    }
    plVar1 = (long *)param_1[0x1a];
    if (plVar1 == param_1 + 0x17) {
      lVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_10abd3f34;
      lVar2 = 0x28;
    }
    (**(code **)(*plVar1 + lVar2))();
  }
LAB_10abd3f34:
  *param_1 = &PTR_DAT_110be8e80;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abd408c; end: 10abd4273;  */

long ***** FUN_10abd408c(long *****param_1)

{
  code *pcVar1;
  long ****pppplVar2;
  long *****ppppplVar3;
  int iVar4;
  long *****ppppplVar5;
  long lVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****apppplStack_a8 [2];
  char cStack_91;
  long ****pppplStack_90;
  undefined1 auStack_88 [40];
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[0x10] & 1) != 0) {
    ppppplVar7 = (long *****)param_1[0x11];
    param_1[0x11] = (long ****)0x0;
    pppplVar2 = param_1[3];
    pppplStack_90 = (long ****)ppppplVar7;
    if (pppplVar2 != (long ****)0x0) {
      (*(code *)(*pppplVar2)[6])();
      pppplVar8 = param_1[4];
      pppplVar9 = param_1[0xd];
      uStack_58 = 0xf;
      puStack_60 = &DAT_10f695722;
      uStack_50 = 1;
      FUN_10abd9130(auStack_88,&puStack_60,1);
      FUN_10a30da10(apppplStack_a8,pppplVar2,pppplVar8,pppplVar9,auStack_88,param_1 + 5,0,0);
      func_0x00010a1954dc(auStack_88);
      ppppplVar5 = apppplStack_a8;
      ppppplVar3 = ppppplVar7;
      FUN_10a7258a4();
      if (cStack_91 < '\0') {
        __ZdlPv();
        ppppplVar3 = (long *****)apppplStack_a8[0];
      }
      do {
        if (*(char *)(param_1 + 0x10) == '\x01') {
          func_0x00010a23037c(param_1 + 0xd);
          func_0x00010a061620(param_1 + 8);
          if (*(char *)((long)param_1 + 0x3f) < '\0') {
            __ZdlPv(param_1[5]);
          }
          ppppplVar3 = (long *****)param_1[3];
          if (ppppplVar3 == param_1) {
            lVar6 = 0x20;
LAB_10abd41a4:
            (**(code **)((long)*ppppplVar3 + lVar6))();
          }
          else if (ppppplVar3 != (long *****)0x0) {
            lVar6 = 0x28;
            goto LAB_10abd41a4;
          }
          *(undefined1 *)(param_1 + 0x10) = 0;
        }
        pppplStack_90 = (long ****)0x0;
        if (ppppplVar7 != (long *****)0x0) {
          ppppplVar3 = &pppplStack_90;
          func_0x0001092b4274(ppppplVar3,ppppplVar7);
          ppppplVar5 = (long *****)pppplStack_90;
          if ((long *****)pppplStack_90 != (long *****)0x0) {
            ppppplVar3 = &pppplStack_90;
            func_0x0001092b4274();
          }
        }
        iVar4 = (int)ppppplVar5;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return ppppplVar3;
        }
        ___stack_chk_fail();
        if (iVar4 == 0) goto LAB_10abd4264;
        func_0x00010a1954dc(auStack_88);
        ___cxa_begin_catch(ppppplVar3);
        __ZSt17current_exceptionv(apppplStack_a8);
        ppppplVar5 = apppplStack_a8;
        func_0x000109d1b350(ppppplVar7);
        ppppplVar3 = apppplStack_a8;
        __ZNSt13exception_ptrD1Ev();
        ___cxa_end_catch();
      } while( true );
    }
    FUN_10a06186c();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abd4210);
  (*pcVar1)();
LAB_10abd4264:
  __Unwind_Resume(ppppplVar3);
  func_0x000104bd46a0();
  *ppppplVar3 = (long ****)&PTR_FUN_110c50b28;
  if (ppppplVar3[0x28] != (long ****)0x0) {
    func_0x0001092b4274(ppppplVar3 + 0x28);
  }
  if (*(char *)(ppppplVar3 + 0x27) == '\x01') {
    func_0x00010a23037c(ppppplVar3 + 0x24);
    func_0x00010a061620(ppppplVar3 + 0x1f);
    if (*(char *)((long)ppppplVar3 + 0xf7) < '\0') {
      __ZdlPv(ppppplVar3[0x1c]);
    }
    ppppplVar7 = (long *****)ppppplVar3[0x1a];
    if (ppppplVar7 == ppppplVar3 + 0x17) {
      lVar6 = 0x20;
    }
    else {
      if (ppppplVar7 == (long *****)0x0) goto LAB_10abd42f8;
      lVar6 = 0x28;
    }
    (**(code **)((long)*ppppplVar7 + lVar6))();
  }
LAB_10abd42f8:
  *ppppplVar3 = (long ****)&PTR_DAT_110be8e80;
  if ((*(char *)(ppppplVar3 + 0x16) == '\x01') && (*(char *)((long)ppppplVar3 + 0xaf) < '\0')) {
    __ZdlPv(ppppplVar3[0x13]);
  }
  *ppppplVar3 = (long ****)&PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(ppppplVar3 + 0x12);
  *ppppplVar3 = (long ****)&PTR_DAT_110ae8c08;
  return ppppplVar3;
}



/* Entry: 10abd4274; end: 10abd441f;  */

undefined8 * FUN_10abd4274(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c50b28;
  if (param_1[0x28] != 0) {
    func_0x0001092b4274(param_1 + 0x28);
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a23037c(param_1 + 0x24);
    func_0x00010a061620(param_1 + 0x1f);
    if (*(char *)((long)param_1 + 0xf7) < '\0') {
      __ZdlPv(param_1[0x1c]);
    }
    plVar1 = (long *)param_1[0x1a];
    if (plVar1 == param_1 + 0x17) {
      lVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_10abd42f8;
      lVar2 = 0x28;
    }
    (**(code **)(*plVar1 + lVar2))();
  }
LAB_10abd42f8:
  *param_1 = &PTR_DAT_110be8e80;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abd4420; end: 10abd44db;  */

long FUN_10abd4420(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_10a195718();
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x3f) < '\0') {
    func_0x000107c3192c(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),
                        *(undefined8 *)(param_2 + 0x30));
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x80) = 1;
  return param_1;
}



/* Entry: 10abd44dc; end: 10abd4687;  */

undefined8 * FUN_10abd44dc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c50b60;
  if (param_1[0x28] != 0) {
    func_0x0001092b4274(param_1 + 0x28);
  }
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a23037c(param_1 + 0x24);
    func_0x00010a061620(param_1 + 0x1f);
    if (*(char *)((long)param_1 + 0xf7) < '\0') {
      __ZdlPv(param_1[0x1c]);
    }
    plVar1 = (long *)param_1[0x1a];
    if (plVar1 == param_1 + 0x17) {
      lVar2 = 0x20;
    }
    else {
      if (plVar1 == (long *)0x0) goto LAB_10abd4560;
      lVar2 = 0x28;
    }
    (**(code **)(*plVar1 + lVar2))();
  }
LAB_10abd4560:
  *param_1 = &PTR_DAT_110be8e80;
  if ((*(char *)(param_1 + 0x16) == '\x01') && (*(char *)((long)param_1 + 0xaf) < '\0')) {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abd4688; end: 10abd4747;  */

void FUN_10abd4688(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcStack_48;
  long *plStack_40;
  undefined **ppuStack_38;
  
  param_1[param_2 * 2 + 4] = (long)param_1;
  func_0x0001092b4524(param_1 + param_2 * 2 + 3,param_3);
  lVar5 = param_1[param_2 * 2 + 3];
  plVar3 = (long *)(lVar5 + 0x10);
  do {
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        pcStack_48 = FUN_10a235dd4;
        ppuStack_38 = &PTR_PTR_1132fed68;
        plStack_40 = param_1 + param_2 * 2 + 3;
        func_0x000109d1b588(lVar5 + 0x18,&pcStack_48);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar4 >> 1 & 1) == 0);
  plVar3 = param_1 + 2;
  do {
    lVar5 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar5 == *param_1 + -1) {
    lVar5 = param_1[1];
    param_1[1] = 0;
    plVar3 = (long *)(lVar5 + 0x10);
    do {
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = 2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          FUN_109d1b4dc(lVar5 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar4 >> 1 & 1) == 0);
    if (lVar5 != 0) {
      func_0x0001092b4274(&stack0xffffffffffffffe8);
    }
  }
  return;
}



/* Entry: 10abd4748; end: 10abd47cf;  */

long FUN_10abd4748(long param_1)

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



/* Entry: 10abd47d0; end: 10abd49df;  */

void FUN_10abd47d0(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10abd499c);
    (*pcVar3)();
  }
  lVar6 = param_1[9];
  param_1[9] = 0;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = (long *)param_1[1];
  lStack_58 = lVar6;
  if (((plVar4 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_38 = plVar4, plVar4 == (long *)0x0)) ||
     (lVar7 = *param_1, lStack_40 = lVar7, lVar7 == 0)) {
    uStack_68 = 0;
    plStack_60 = (long *)0x0;
    plVar4 = plStack_38;
  }
  else {
    plVar5 = (long *)param_1[3];
    if ((plVar5 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_48 = plVar5, plVar5 == (long *)0x0)) {
      uStack_68 = 0;
      plStack_60 = (long *)0x0;
      plVar4 = plStack_38;
    }
    else {
      plStack_50 = (long *)param_1[2];
      if (plStack_50 == (long *)0x0) {
        uStack_68 = 0;
        plStack_60 = (long *)0x0;
      }
      else {
        (**(code **)(*plStack_50 + 0x30))
                  (&uStack_68,plStack_50,lVar7 + 0x20,(char)param_1[4],param_1 + 5);
      }
      plVar4 = plVar5 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plStack_38;
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar4 = plStack_38;
      }
    }
  }
  plStack_38 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  func_0x00010abd12a8(lVar6,&uStack_68);
  plVar4 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar5 = plStack_60 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if ((char)param_1[8] == '\x01') {
    FUN_10abd4748(param_1 + 5);
    if (param_1[3] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  lVar6 = lStack_58;
  lStack_58 = 0;
  if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_58), lStack_58 != 0)) {
    func_0x0001092b4274(&lStack_58);
  }
  return;
}



/* Entry: 10abd49e0; end: 10abd4db7;  */

undefined8 * FUN_10abd49e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c50b98;
  if (param_1[0x1f] != 0) {
    func_0x0001092b4274();
  }
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    FUN_10abd4748(param_1 + 0x1b);
    if (param_1[0x19] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (param_1[0x17] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  *param_1 = &PTR_DAT_110c50a60;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_10abd89cc(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abd4db8; end: 10abd4dff;  */

void FUN_10abd4db8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
    if (*(long *)(lVar2 + -8) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10abd4e00; end: 10abd4e13;  */

long * FUN_10abd4e00(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plStack_a8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar6 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar10 = plVar6[1] - *plVar6;
  uVar1 = (lVar10 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_10a2321d4();
    func_0x0001098b7794(&plStack_68);
    __Unwind_Resume();
    plStack_a8 = plVar6 + 3;
    FUN_10abd4f80(&plStack_a8);
    plVar7 = (long *)*plVar6;
    if (plVar7 != (long *)0x0) {
      plVar6[1] = (long)plVar7;
      __ZdlPv();
    }
    return plVar7;
  }
  uVar8 = plVar6[2] - *plVar6;
  uVar9 = (long)uVar8 >> 2;
  if (uVar9 <= uVar1) {
    uVar9 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar8) {
    uVar9 = 0x1fffffffffffffff;
  }
  plStack_48 = plVar6;
  if (uVar9 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = plVar6;
    FUN_10a2321e8();
  }
  plStack_60 = (long *)((long)plVar7 + lVar10);
  plStack_50 = plVar7 + uVar9;
  lVar10 = *param_2;
  if (lVar10 != 0) {
    plVar2 = (long *)(lVar10 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = *plVar2 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *plStack_60 = lVar10;
  plStack_58 = plStack_60 + 1;
  puVar3 = (undefined *)((long)plStack_60 + (*plVar6 - plVar6[1]));
  plStack_68 = plVar7;
  func_0x00010a23221c(plVar6,*plVar6,plVar6[1],puVar3);
  plVar7 = plStack_58;
  plStack_68 = (long *)*plVar6;
  *plVar6 = (long)puVar3;
  lVar10 = plVar6[2];
  plVar6[2] = (long)plStack_50;
  plVar6[1] = (long)plStack_58;
  plStack_60 = plStack_68;
  plStack_58 = plStack_68;
  plStack_50 = (long *)lVar10;
  func_0x0001098b7794(&plStack_68);
  return plVar7;
}



/* Entry: 10abd4e14; end: 10abd4f3b;  */

long * FUN_10abd4e14(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar8 = param_1[1] - *param_1;
  uVar1 = (lVar8 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_10a2321d4();
    func_0x0001098b7794(&plStack_58);
    __Unwind_Resume();
    plStack_98 = param_1 + 3;
    FUN_10abd4f80(&plStack_98);
    plVar5 = (long *)*param_1;
    if (plVar5 != (long *)0x0) {
      param_1[1] = (long)plVar5;
      __ZdlPv();
    }
    return plVar5;
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 2;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar6) {
    uVar7 = 0x1fffffffffffffff;
  }
  plStack_38 = param_1;
  if (uVar7 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = param_1;
    FUN_10a2321e8();
  }
  plStack_50 = (long *)((long)plVar5 + lVar8);
  plStack_40 = plVar5 + uVar7;
  lVar8 = *param_2;
  if (lVar8 != 0) {
    plVar2 = (long *)(lVar8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *plStack_50 = lVar8;
  plStack_48 = plStack_50 + 1;
  lVar8 = (long)plStack_50 + (*param_1 - param_1[1]);
  plStack_58 = plVar5;
  func_0x00010a23221c(param_1,*param_1,param_1[1],lVar8);
  plVar5 = plStack_48;
  plStack_58 = (long *)*param_1;
  *param_1 = lVar8;
  lVar8 = param_1[2];
  param_1[2] = (long)plStack_40;
  param_1[1] = (long)plStack_48;
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  plStack_40 = (long *)lVar8;
  func_0x0001098b7794(&plStack_58);
  return plVar5;
}



/* Entry: 10abd4f3c; end: 10abd4f7f;  */

void FUN_10abd4f3c(long *param_1)

{
  long *plStack_28;
  
  plStack_28 = param_1 + 3;
  FUN_10abd4f80(&plStack_28);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 10abd4f80; end: 10abd4fef;  */

void FUN_10abd4f80(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a2768fc();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10abd4ff0; end: 10abd5117;  */

void FUN_10abd4ff0(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
  uVar4 = param_1[2];
  lVar13 = *param_1;
  if (param_4 <= (ulong)((long)(uVar4 - lVar13) >> 2)) {
    lVar11 = param_1[1];
    if ((ulong)(lVar11 - lVar13 >> 2) < param_4) {
      lVar1 = param_2 + (lVar11 - lVar13);
      if (lVar11 != lVar13) {
        _memmove(lVar13,param_2);
        lVar11 = param_1[1];
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar11,lVar1,param_3);
      }
      lVar11 = lVar11 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(lVar13,param_2,param_3);
      }
      lVar11 = lVar13 + param_3;
    }
LAB_10abd50fc:
    param_1[1] = lVar11;
    return;
  }
  uVar3 = param_2;
  if (lVar13 != 0) {
    param_1[1] = lVar13;
    __ZdlPv(lVar13);
    uVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar3 = (long)uVar4 >> 1;
    if ((ulong)((long)uVar4 >> 1) <= param_4) {
      uVar3 = param_4;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar3 = 0x3fffffffffffffff;
    }
    FUN_10a194188(param_1,uVar3);
    lVar11 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar11,param_2,param_3);
    }
    lVar11 = lVar11 + param_3;
    goto LAB_10abd50fc;
  }
  FUN_10a1941c0();
  plVar10 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar13 = plVar10[1];
  if (uVar3 <= (ulong)(plVar10[2] - lVar13 >> 3)) {
    if (uVar3 != 0) {
      _bzero(lVar13,uVar3 << 3);
      lVar13 = lVar13 + uVar3 * 8;
    }
    plVar10[1] = lVar13;
    return;
  }
  plVar9 = (long *)*plVar10;
  lVar13 = lVar13 - (long)plVar9;
  uVar4 = uVar3 + (lVar13 >> 3);
  if (uVar4 >> 0x3d == 0) {
    uVar5 = plVar10[2] - (long)plVar9;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar11 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_10abd523c;
      lVar11 = uVar6 << 3;
      __Znwm();
    }
    lVar1 = lVar11 + lVar13;
    _bzero(lVar1,uVar3 << 3);
    lVar7 = lVar1 + (lVar13 >> 3) * -8;
    _memcpy(lVar7,plVar9,lVar13);
    *plVar10 = lVar7;
    plVar10[1] = lVar1 + uVar3 * 8;
    plVar10[2] = lVar11 + uVar6 * 8;
    if (plVar9 == (long *)0x0) {
      return;
    }
  }
  else {
    FUN_10abd5240();
LAB_10abd523c:
    func_0x000109ffded8();
    puVar2 = (undefined8 *)&DAT_10f62a4d8;
    FUN_109ffde64();
    puVar8 = (undefined8 *)*puVar2;
    plVar10 = (long *)*puVar8;
    if (plVar10 == (long *)0x0) {
      return;
    }
    plVar12 = (long *)puVar8[1];
    plVar9 = plVar10;
    if (plVar12 != plVar10) {
      do {
        plVar12 = plVar12 + -1;
        plVar9 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))();
        }
      } while (plVar12 != plVar10);
      plVar9 = *(long **)*puVar2;
    }
    puVar8[1] = plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar9);
  return;
}



/* Entry: 10abd5118; end: 10abd512b;  */

void FUN_10abd5118(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  plVar10 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar11 = plVar10[1];
  if (param_2 <= (ulong)(plVar10[2] - lVar11 >> 3)) {
    if (param_2 != 0) {
      _bzero(lVar11,param_2 << 3);
      lVar11 = lVar11 + param_2 * 8;
    }
    plVar10[1] = lVar11;
    return;
  }
  plVar9 = (long *)*plVar10;
  lVar11 = lVar11 - (long)plVar9;
  uVar1 = param_2 + (lVar11 >> 3);
  if (uVar1 >> 0x3d == 0) {
    uVar5 = plVar10[2] - (long)plVar9;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_10abd523c;
      lVar3 = uVar6 << 3;
      __Znwm();
    }
    lVar2 = lVar3 + lVar11;
    _bzero(lVar2,param_2 << 3);
    lVar7 = lVar2 + (lVar11 >> 3) * -8;
    _memcpy(lVar7,plVar9,lVar11);
    *plVar10 = lVar7;
    plVar10[1] = lVar2 + param_2 * 8;
    plVar10[2] = lVar3 + uVar6 * 8;
    if (plVar9 == (long *)0x0) {
      return;
    }
  }
  else {
    FUN_10abd5240();
LAB_10abd523c:
    func_0x000109ffded8();
    puVar4 = (undefined8 *)&DAT_10f62a4d8;
    FUN_109ffde64();
    puVar8 = (undefined8 *)*puVar4;
    plVar10 = (long *)*puVar8;
    if (plVar10 == (long *)0x0) {
      return;
    }
    plVar12 = (long *)puVar8[1];
    plVar9 = plVar10;
    if (plVar12 != plVar10) {
      do {
        plVar12 = plVar12 + -1;
        plVar9 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))();
        }
      } while (plVar12 != plVar10);
      plVar9 = *(long **)*puVar4;
    }
    puVar8[1] = plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar9);
  return;
}



/* Entry: 10abd512c; end: 10abd523f;  */

void FUN_10abd512c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  lVar11 = param_1[1];
  if (param_2 <= (ulong)(param_1[2] - lVar11 >> 3)) {
    if (param_2 != 0) {
      _bzero(lVar11,param_2 << 3);
      lVar11 = lVar11 + param_2 * 8;
    }
    param_1[1] = lVar11;
    return;
  }
  plVar9 = (long *)*param_1;
  lVar11 = lVar11 - (long)plVar9;
  uVar1 = param_2 + (lVar11 >> 3);
  if (uVar1 >> 0x3d == 0) {
    uVar5 = param_1[2] - (long)plVar9;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar6 >> 0x3d != 0) goto LAB_10abd523c;
      lVar3 = uVar6 << 3;
      __Znwm();
    }
    lVar2 = lVar3 + lVar11;
    _bzero(lVar2,param_2 << 3);
    lVar7 = lVar2 + (lVar11 >> 3) * -8;
    _memcpy(lVar7,plVar9,lVar11);
    *param_1 = lVar7;
    param_1[1] = lVar2 + param_2 * 8;
    param_1[2] = lVar3 + uVar6 * 8;
    if (plVar9 == (long *)0x0) {
      return;
    }
  }
  else {
    FUN_10abd5240();
LAB_10abd523c:
    func_0x000109ffded8();
    puVar4 = (undefined8 *)&DAT_10f62a4d8;
    FUN_109ffde64();
    puVar8 = (undefined8 *)*puVar4;
    plVar10 = (long *)*puVar8;
    if (plVar10 == (long *)0x0) {
      return;
    }
    plVar12 = (long *)puVar8[1];
    plVar9 = plVar10;
    if (plVar12 != plVar10) {
      do {
        plVar12 = plVar12 + -1;
        plVar9 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x38))();
        }
      } while (plVar12 != plVar10);
      plVar9 = *(long **)*puVar4;
    }
    puVar8[1] = plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar9);
  return;
}



/* Entry: 10abd5240; end: 10abd5253;  */

void FUN_10abd5240(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  puVar3 = (undefined8 *)*puVar1;
  plVar4 = (long *)*puVar3;
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)puVar3[1];
    plVar2 = plVar4;
    if (plVar5 != plVar4) {
      do {
        plVar5 = plVar5 + -1;
        plVar2 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
      } while (plVar5 != plVar4);
      plVar2 = *(long **)*puVar1;
    }
    puVar3[1] = plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return;
  }
  return;
}



/* Entry: 10abd5254; end: 10abd52cf;  */

void FUN_10abd5254(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10abd52d0; end: 10abd5333;  */

void FUN_10abd52d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[3] != 0) {
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10abd5334; end: 10abd56e7;  */

long * FUN_10abd5334(long *param_1,long param_2,ulong param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar5 = uVar13 - 1;
    if ((uVar13 & uVar5) == 0) {
      unaff_x24 = uVar5 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar13 <= param_3) {
        uVar8 = 0;
        if (uVar13 != 0) {
          uVar8 = param_3 / uVar13;
        }
        unaff_x24 = param_3 - uVar8 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == param_3) {
          if (plVar7[2] == param_2 && plVar7[3] == param_3) {
            return plVar7;
          }
        }
        else {
          if ((uVar13 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar13 <= uVar8) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar8 / uVar13;
            }
            uVar8 = uVar8 - uVar6 * uVar13;
          }
          if (uVar8 != unaff_x24) break;
        }
      }
    }
  }
  plVar7 = (long *)0x28;
  __Znwm();
  *plVar7 = 0;
  plVar7[1] = param_3;
  lVar3 = *param_4;
  plVar7[3] = param_4[1];
  plVar7[2] = lVar3;
  *(undefined2 *)(plVar7 + 4) = 0;
  if ((uVar13 == 0) || (*(float *)(param_1 + 4) * (float)uVar13 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar13) {
      uVar5 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar5 = uVar5 | uVar13 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar13 = param_1[1];
    }
    if (uVar13 < uVar5) {
LAB_10abd548c:
      if (uVar5 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10abd56d4);
        (*pcVar2)();
      }
      lVar3 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar13 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar13 * 8) = 0;
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      plVar9 = (long *)param_1[2];
      uVar13 = uVar5;
      if (plVar9 != (long *)0x0) {
        uVar8 = plVar9[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar5 <= uVar8) {
          uVar12 = 0;
          if (uVar5 != 0) {
            uVar12 = uVar8 / uVar5;
          }
          uVar8 = uVar8 - uVar12 * uVar5;
        }
        *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar9;
        while (plVar10 != (long *)0x0) {
          uVar12 = plVar10[1];
          if ((uVar5 & uVar6) == 0) {
            uVar12 = uVar12 & uVar6;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          plVar11 = plVar10;
          if (uVar12 != uVar8) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar12 * 8) == 0) {
              *(long **)(lVar3 + uVar12 * 8) = plVar9;
              uVar8 = uVar12;
            }
            else {
              *plVar9 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + uVar12 * 8);
              **(long **)(lVar3 + uVar12 * 8) = (long)plVar10;
              plVar11 = plVar9;
            }
          }
          plVar9 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (uVar5 < uVar13) {
      uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar8) {
        uVar5 = uVar8;
      }
      if (uVar5 < uVar13) {
        if (uVar5 != 0) goto LAB_10abd548c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = param_1[1];
      }
    }
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x24 = uVar13 - 1 & param_3;
    }
    else {
      unaff_x24 = param_3;
      if (uVar13 <= param_3) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = param_3 / uVar13;
        }
        unaff_x24 = param_3 - uVar5 * uVar13;
      }
    }
  }
  lVar3 = *param_1;
  plVar9 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = param_1 + 2;
    *plVar7 = *plVar9;
    *plVar9 = (long)plVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar9;
    if (*plVar7 == 0) goto LAB_10abd566c;
    uVar5 = *(ulong *)(*plVar7 + 8);
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar5 = uVar5 & uVar13 - 1;
    }
    else if (uVar13 <= uVar5) {
      uVar8 = 0;
      if (uVar13 != 0) {
        uVar8 = uVar5 / uVar13;
      }
      uVar5 = uVar5 - uVar8 * uVar13;
    }
    plVar9 = (long *)(*param_1 + uVar5 * 8);
  }
  else {
    *plVar7 = *plVar9;
  }
  *plVar9 = (long)plVar7;
LAB_10abd566c:
  param_1[3] = param_1[3] + 1;
  return plVar7;
}



/* Entry: 10abd56e8; end: 10abd579f;  */

long * FUN_10abd56e8(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar2 <= param_3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_3 / uVar2;
        }
        uVar4 = param_3 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_3) {
          if (plVar5[2] == param_2 && plVar5[3] == param_3) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10abd57a0; end: 10abd58db;  */

ulong FUN_10abd57a0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_70;
  long lStack_68;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0xc);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar7 = lVar2 - lVar6;
  uVar1 = uVar5 - uVar7;
  lStack_70 = param_2;
  lStack_68 = param_3;
  if (uVar5 < uVar7 || uVar1 == 0) {
    if (uVar5 < uVar7) {
      *(ulong *)(param_1 + 0x18) = lVar6 + uVar5;
    }
  }
  else if ((ulong)(*(long *)(param_1 + 0x20) - lVar2) < uVar1) {
    uVar3 = *(long *)(param_1 + 0x20) - lVar6;
    uVar4 = uVar3 * 2;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = uVar5;
    }
    if (0x3ffffffffffffffe < uVar3) {
      uVar4 = 0x7fffffffffffffff;
    }
    uVar3 = uVar4;
    __Znwm();
    _bzero(uVar3 + uVar7,uVar1);
    _memcpy(uVar3,lVar6,uVar7);
    *(ulong *)(param_1 + 0x10) = uVar3;
    *(ulong *)(param_1 + 0x18) = uVar3 + uVar5;
    *(ulong *)(param_1 + 0x20) = uVar3 + uVar4;
    if (lVar6 != 0) {
      __ZdlPv(lVar6);
      uVar5 = (ulong)*(ushort *)(param_1 + 0xc);
    }
  }
  else {
    _bzero(lVar2,uVar1);
    *(ulong *)(param_1 + 0x18) = lVar2 + uVar1;
  }
  if ((param_2 != -1) || (param_3 != -1)) {
    lVar2 = param_1 + 0x28;
    FUN_10abd5334(lVar2,param_2,param_3,&lStack_70);
    *(short *)(lVar2 + 0x20) = (short)uVar5;
    uVar5 = (ulong)*(ushort *)(param_1 + 0xc);
  }
  *(short *)(param_1 + 0xc) = (short)uVar5 + 1;
  return uVar5;
}



/* Entry: 10abd58dc; end: 10abd5913;  */

undefined2 FUN_10abd58dc(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  FUN_10abd56e8();
  puVar1 = (undefined2 *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = (undefined2 *)(lVar2 + 0x20);
  }
  return *puVar1;
}



/* Entry: 10abd5914; end: 10abd5983;  */

void FUN_10abd5914(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10abd5984(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10abd5984; end: 10abd5a03;  */

long * FUN_10abd5984(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 >> 0x3d != 0) {
    FUN_10a87f424();
    plVar1 = (long *)param_1[2];
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  plVar1 = param_1;
  FUN_10a87f438();
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar1;
  param_1[2] = (long)(plVar1 + param_2);
  return plVar1;
}



/* Entry: 10abd5a04; end: 10abd5b17;  */

void FUN_10abd5a04(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10abd4f3c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10abd5b18; end: 10abd5c0b;  */

undefined8 * FUN_10abd5b18(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10abd5c0c; end: 10abd5c1f;  */

long * FUN_10abd5c0c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x50;
    FUN_10a2768c0();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10abd5c20; end: 10abd5c6b;  */

long * FUN_10abd5c20(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x50;
    FUN_10a2768c0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abd5c6c; end: 10abd5cbb;  */

void FUN_10abd5c6c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  while (lVar3 != lVar2) {
    lVar3 = lVar3 + -0x178;
    func_0x00010abd5f6c(lVar3);
  }
  *(long *)(param_1 + 0x18) = lVar2;
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 10);
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10abd5cbc; end: 10abd5f33;  */

short FUN_10abd5cbc(long param_1,long param_2,long param_3)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lStack_70;
  long lStack_68;
  
  uVar15 = (ulong)*(ushort *)(param_1 + 0xc);
  lVar13 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x18);
  lVar14 = lVar12 - lVar13;
  lVar9 = lVar14 >> 3;
  bVar6 = uVar15 < (ulong)(lVar9 * 0x51b3bea3677d46cf);
  uVar5 = uVar15 + lVar9 * -0x51b3bea3677d46cf;
  lStack_70 = param_2;
  lStack_68 = param_3;
  if (bVar6 || uVar5 == 0) {
    if (bVar6) {
      lVar13 = lVar13 + uVar15 * 0x178;
      while (lVar12 != lVar13) {
        lVar12 = lVar12 + -0x178;
        func_0x00010abd5f6c(lVar12);
      }
      *(long *)(param_1 + 0x18) = lVar13;
    }
  }
  else if ((ulong)((*(long *)(param_1 + 0x20) - lVar12 >> 3) * 0x51b3bea3677d46cf) < uVar5) {
    lVar10 = *(long *)(param_1 + 0x20) - lVar13 >> 3;
    uVar11 = lVar10 * -0x5c9882b931057262;
    if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
      uVar11 = uVar15;
    }
    if (0x572620ae4c415b < (ulong)(lVar10 * 0x51b3bea3677d46cf)) {
      uVar11 = 0xae4c415c9882b9;
    }
    if (0xae4c415c9882b9 < uVar11) {
      func_0x000109ffded8();
      lVar13 = param_1 + 0x28;
      FUN_10abd56e8();
      psVar1 = (short *)(param_1 + 8);
      if (lVar13 != 0) {
        psVar1 = (short *)(lVar13 + 0x20);
      }
      return *psVar1;
    }
    lVar7 = uVar11 * 0x178;
    __Znwm();
    lVar10 = lVar7 + lVar14;
    lVar16 = uVar15 * 0x178 + lVar9 * -8;
    lVar9 = lVar10;
    do {
      FUN_10abd5fb0(lVar9);
      lVar9 = lVar9 + 0x178;
      lVar16 = lVar16 + -0x178;
    } while (lVar16 != 0);
    lVar9 = lVar13;
    lVar16 = lVar10 - lVar14;
    if (lVar13 != lVar12) {
      do {
        _memcpy(lVar16,lVar9,0x128);
        *(undefined8 *)(lVar16 + 0x128) = *(undefined8 *)(lVar9 + 0x128);
        uVar8 = *(undefined8 *)(lVar9 + 0x130);
        *(undefined8 *)(lVar16 + 0x138) = *(undefined8 *)(lVar9 + 0x138);
        *(undefined8 *)(lVar16 + 0x130) = uVar8;
        uVar2 = *(undefined8 *)(lVar9 + 0x148);
        *(undefined8 *)(lVar16 + 0x140) = *(undefined8 *)(lVar9 + 0x140);
        *(undefined8 *)(lVar9 + 0x138) = 0;
        *(undefined8 *)(lVar9 + 0x140) = 0;
        *(undefined8 *)(lVar9 + 0x130) = 0;
        uVar8 = *(undefined8 *)(lVar9 + 0x150);
        uVar3 = *(undefined8 *)(lVar9 + 0x158);
        *(undefined8 *)(lVar16 + 0x148) = uVar2;
        *(undefined8 *)(lVar16 + 0x150) = uVar8;
        *(undefined8 *)(lVar9 + 0x148) = 0;
        *(undefined8 *)(lVar9 + 0x150) = 0;
        uVar8 = *(undefined8 *)(lVar9 + 0x160);
        *(undefined8 *)(lVar16 + 0x158) = uVar3;
        *(undefined8 *)(lVar16 + 0x160) = uVar8;
        *(undefined8 *)(lVar9 + 0x158) = 0;
        *(undefined8 *)(lVar9 + 0x160) = 0;
        uVar8 = *(undefined8 *)(lVar9 + 0x168);
        *(undefined8 *)(lVar16 + 0x170) = *(undefined8 *)(lVar9 + 0x170);
        *(undefined8 *)(lVar16 + 0x168) = uVar8;
        lVar9 = lVar9 + 0x178;
        lVar16 = lVar16 + 0x178;
      } while (lVar9 != lVar12);
      do {
        func_0x00010abd5f6c(lVar13);
        lVar13 = lVar13 + 0x178;
      } while (lVar13 != lVar12);
      lVar13 = *(long *)(param_1 + 0x10);
    }
    *(long *)(param_1 + 0x10) = lVar10 - lVar14;
    *(ulong *)(param_1 + 0x18) = lVar10 + (uVar5 & 0xffffffff) * 0x178;
    *(ulong *)(param_1 + 0x20) = lVar7 + uVar11 * 0x178;
    if (lVar13 != 0) {
      __ZdlPv(lVar13);
    }
  }
  else {
    lVar14 = lVar12 + (uVar5 & 0xffffffff) * 0x178;
    lVar13 = uVar15 * 0x178 + lVar9 * -8;
    do {
      FUN_10abd5fb0(lVar12);
      lVar12 = lVar12 + 0x178;
      lVar13 = lVar13 + -0x178;
    } while (lVar13 != 0);
    *(long *)(param_1 + 0x18) = lVar14;
  }
  sVar4 = *(short *)(param_1 + 0xc);
  if ((param_2 != -1) || (param_3 != -1)) {
    lVar13 = param_1 + 0x28;
    FUN_10abd5334(lVar13,param_2,param_3,&lStack_70);
    *(short *)(lVar13 + 0x20) = sVar4;
    sVar4 = *(short *)(param_1 + 0xc);
  }
  *(short *)(param_1 + 0xc) = sVar4 + 1;
  return sVar4;
}



/* Entry: 10abd5f34; end: 10abd5faf;  */

undefined2 FUN_10abd5f34(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  FUN_10abd56e8();
  puVar1 = (undefined2 *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = (undefined2 *)(lVar2 + 0x20);
  }
  return *puVar1;
}



/* Entry: 10abd5fb0; end: 10abd606b;  */

void FUN_10abd5fb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[1] = 0x4280000042800000;
  *param_1 = 0x4280000042800000;
  param_1[3] = 0x4280000042800000;
  param_1[2] = 0x4280000041000000;
  *(undefined4 *)(param_1 + 4) = 0x40;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  lVar2 = 0x48;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    puVar1[1] = 0;
    *puVar1 = 0x3f800000;
    puVar1[3] = 0;
    puVar1[2] = 0x3f80000000000000;
    puVar1[5] = 0x3f800000;
    puVar1[4] = 0;
    puVar1[7] = 0x3f80000000000000;
    puVar1[6] = 0;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x108);
  param_1[0x22] = 0x4120000000000000;
  param_1[0x21] = 0;
  param_1[0x24] = 0x413000003f800000;
  param_1[0x23] = 0x4120000041200000;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0xffffffffffffffff;
  param_1[0x2e] = 0xffffffffffffffff;
  return;
}



/* Entry: 10abd606c; end: 10abd60b3;  */

void FUN_10abd606c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10abd606c(*param_1);
    FUN_10abd606c(param_1[1]);
    func_0x00010a05248c(param_1 + 8);
    func_0x00010a35e87c(param_1 + 6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10abd60b4; end: 10abd611b;  */

void FUN_10abd60b4(long *param_1)

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
        lVar2 = lVar2 + -0x178;
        func_0x00010abd5f6c(lVar2);
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



/* Entry: 10abd611c; end: 10abd6133;  */

void FUN_10abd611c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 10);
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10abd6134; end: 10abd632f;  */

short FUN_10abd6134(long param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lStack_60;
  long lStack_58;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0xc);
  lVar5 = *(long *)(param_1 + 0x10);
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  lVar11 = (long)puVar7 - lVar5;
  bVar4 = uVar8 < (ulong)((lVar11 >> 3) * -0x71c71c71c71c71c7);
  uVar3 = uVar8 + (lVar11 >> 3) * 0x71c71c71c71c71c7;
  lStack_60 = param_2;
  lStack_58 = param_3;
  if (bVar4 || uVar3 == 0) {
    if (bVar4) {
      *(ulong *)(param_1 + 0x18) = lVar5 + uVar8 * 0x48;
    }
  }
  else if ((ulong)((*(long *)(param_1 + 0x20) - (long)puVar7 >> 3) * -0x71c71c71c71c71c7) < uVar3) {
    lVar6 = *(long *)(param_1 + 0x20) - lVar5 >> 3;
    uVar10 = lVar6 * 0x1c71c71c71c71c72;
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar10 = uVar8;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
      uVar10 = 0x38e38e38e38e38e;
    }
    if (0x38e38e38e38e38e < uVar10) {
      func_0x000109ffded8();
      lVar5 = param_1 + 0x28;
      FUN_10abd56e8();
      psVar1 = (short *)(param_1 + 8);
      if (lVar5 != 0) {
        psVar1 = (short *)(lVar5 + 0x20);
      }
      return *psVar1;
    }
    lVar6 = uVar10 * 0x48;
    __Znwm();
    puVar9 = (undefined8 *)(lVar6 + lVar11);
    puVar7 = puVar9;
    do {
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined2 *)((long)puVar7 + 1) = 0x404;
      *(undefined4 *)(puVar7 + 2) = 0x3f800000;
      *(undefined8 *)((long)puVar7 + 0x14) = 0;
      *(undefined1 *)((long)puVar7 + 0x1c) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      *(undefined8 *)((long)puVar7 + 0x24) = 0;
      *(undefined8 *)((long)puVar7 + 0x3c) = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined4 *)((long)puVar7 + 0x44) = 0;
      puVar7 = puVar7 + 9;
    } while (puVar7 != puVar9 + (uVar3 & 0xffffffff) * 9);
    _memcpy((long)puVar9 - lVar11,lVar5,lVar11);
    *(long *)(param_1 + 0x10) = (long)puVar9 - lVar11;
    *(undefined8 **)(param_1 + 0x18) = puVar9 + (uVar3 & 0xffffffff) * 9;
    *(ulong *)(param_1 + 0x20) = lVar6 + uVar10 * 0x48;
    if (lVar5 != 0) {
      __ZdlPv(lVar5);
    }
  }
  else {
    puVar9 = puVar7 + (uVar3 & 0xffffffff) * 9;
    do {
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined2 *)((long)puVar7 + 1) = 0x404;
      *(undefined4 *)(puVar7 + 2) = 0x3f800000;
      *(undefined8 *)((long)puVar7 + 0x14) = 0;
      *(undefined1 *)((long)puVar7 + 0x1c) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      *(undefined8 *)((long)puVar7 + 0x24) = 0;
      *(undefined8 *)((long)puVar7 + 0x3c) = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined4 *)((long)puVar7 + 0x44) = 0;
      puVar7 = puVar7 + 9;
    } while (puVar7 != puVar9);
    *(undefined8 **)(param_1 + 0x18) = puVar9;
  }
  sVar2 = *(short *)(param_1 + 0xc);
  if ((param_2 != -1) || (param_3 != -1)) {
    lVar5 = param_1 + 0x28;
    FUN_10abd5334(lVar5,param_2,param_3,&lStack_60);
    *(short *)(lVar5 + 0x20) = sVar2;
    sVar2 = *(short *)(param_1 + 0xc);
  }
  *(short *)(param_1 + 0xc) = sVar2 + 1;
  return sVar2;
}



/* Entry: 10abd6330; end: 10abd6367;  */

undefined2 FUN_10abd6330(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  FUN_10abd56e8();
  puVar1 = (undefined2 *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = (undefined2 *)(lVar2 + 0x20);
  }
  return *puVar1;
}



/* Entry: 10abd6368; end: 10abd636b;  */

void FUN_10abd6368(void)

{
  return;
}



/* Entry: 10abd636c; end: 10abd6713;  */

long * FUN_10abd636c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lStack_70;
  long lStack_68;
  
  plVar9 = param_1;
  lStack_70 = param_2;
  lStack_68 = param_3;
  (**(code **)(*param_1 + 0x10))();
  if ((uint)plVar9 != (uint)*(ushort *)(param_1 + 1)) {
    return plVar9;
  }
  uVar23 = (ulong)*(ushort *)((long)param_1 + 0xc);
  puVar21 = (undefined8 *)param_1[2];
  puVar20 = (undefined8 *)param_1[3];
  lVar22 = (long)puVar20 - (long)puVar21;
  lVar12 = lVar22 >> 3;
  bVar8 = uVar23 < (ulong)(lVar12 * -0x500ee500ee500ee5);
  uVar5 = uVar23 + lVar12 * 0x500ee500ee500ee5;
  if (bVar8 || uVar5 == 0) {
    if (!bVar8) goto LAB_10abd66b4;
    puVar21 = puVar21 + uVar23 * 0x113;
    while (puVar20 != puVar21) {
      puVar20 = puVar20 + -0x113;
      func_0x00010abd6830(puVar20);
    }
  }
  else {
    if ((ulong)((param_1[4] - (long)puVar20 >> 3) * -0x500ee500ee500ee5) < uVar5) {
      lVar13 = param_1[4] - (long)puVar21 >> 3;
      uVar14 = lVar13 * 0x5fe235fe235fe236;
      if (uVar14 < uVar23 || uVar14 - uVar23 == 0) {
        uVar14 = uVar23;
      }
      if (0xee500ee500ee4 < (ulong)(lVar13 * -0x500ee500ee500ee5)) {
        uVar14 = 0x1dca01dca01dca;
      }
      if (0x1dca01dca01dca < uVar14) {
        func_0x000109ffded8();
        plVar11 = plVar9 + 5;
        FUN_10abd56e8();
        puVar3 = (ushort *)(plVar9 + 1);
        if (plVar11 != (long *)0x0) {
          puVar3 = (ushort *)(plVar11 + 4);
        }
        return (long *)(ulong)*puVar3;
      }
      lVar10 = uVar14 * 0x898;
      __Znwm();
      lVar13 = lVar10 + lVar22;
      lVar19 = uVar23 * 0x898 + lVar12 * -8;
      lVar12 = lVar13;
      do {
        FUN_10abd674c(lVar12);
        lVar12 = lVar12 + 0x898;
        lVar19 = lVar19 + -0x898;
      } while (lVar19 != 0);
      puVar24 = puVar21;
      puVar25 = (undefined8 *)(lVar13 - lVar22);
      if (puVar21 != puVar20) {
        do {
          lVar12 = 0;
          uVar16 = *puVar24;
          *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(puVar24 + 1);
          *puVar25 = uVar16;
          bVar8 = false;
          do {
            puVar1 = puVar25 + lVar12 * 0x81 + 2;
            puVar2 = puVar24 + lVar12 * 0x81 + 2;
            *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
            lVar19 = puVar2[1];
            puVar1[1] = lVar19;
            if (lVar19 != 0) {
              lVar15 = lVar12 * 0x408;
              do {
                uVar16 = *(undefined8 *)((long)puVar24 + lVar15 + 0x20);
                uVar27 = *(undefined8 *)((long)puVar24 + lVar15 + 0x38);
                uVar26 = *(undefined8 *)((long)puVar24 + lVar15 + 0x30);
                *(undefined8 *)((long)puVar25 + lVar15 + 0x28) =
                     *(undefined8 *)((long)puVar24 + lVar15 + 0x28);
                *(undefined8 *)((long)puVar25 + lVar15 + 0x20) = uVar16;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x38) = uVar27;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x30) = uVar26;
                uVar26 = *(undefined8 *)((long)puVar24 + lVar15 + 0x48);
                uVar16 = *(undefined8 *)((long)puVar24 + lVar15 + 0x40);
                uVar28 = *(undefined8 *)((long)puVar24 + lVar15 + 0x58);
                uVar27 = *(undefined8 *)((long)puVar24 + lVar15 + 0x50);
                uVar29 = *(undefined8 *)((long)puVar24 + lVar15 + 0x60);
                uVar31 = *(undefined8 *)((long)puVar24 + lVar15 + 0x78);
                uVar30 = *(undefined8 *)((long)puVar24 + lVar15 + 0x70);
                *(undefined8 *)((long)puVar25 + lVar15 + 0x68) =
                     *(undefined8 *)((long)puVar24 + lVar15 + 0x68);
                *(undefined8 *)((long)puVar25 + lVar15 + 0x60) = uVar29;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x78) = uVar31;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x70) = uVar30;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x48) = uVar26;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x40) = uVar16;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x58) = uVar28;
                *(undefined8 *)((long)puVar25 + lVar15 + 0x50) = uVar27;
                lVar15 = lVar15 + 0x60;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            _memcpy(puVar1 + 0x1a,puVar2 + 0x1a,0x110);
            lVar19 = puVar2[0x3c];
            puVar1[0x3c] = lVar19;
            if (lVar19 != 0) {
              lVar12 = lVar12 * 0x408;
              do {
                _memcpy((long)puVar25 + lVar12 + 0x1f8,(long)puVar24 + lVar12 + 0x1f8,0x110);
                lVar12 = lVar12 + 0x110;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            lVar12 = 1;
            bVar7 = !bVar8;
            bVar8 = true;
          } while (bVar7);
          lVar12 = 0;
          do {
            lVar19 = *(long *)((long)puVar24 + lVar12 + 0x820);
            *(undefined8 *)((long)puVar24 + lVar12 + 0x820) = 0;
            *(long *)((long)puVar25 + lVar12 + 0x820) = lVar19;
            uVar23 = *(ulong *)((long)puVar24 + lVar12 + 0x828);
            *(ulong *)((long)puVar25 + lVar12 + 0x828) = uVar23;
            *(undefined8 *)((long)puVar24 + lVar12 + 0x828) = 0;
            lVar15 = *(long *)((long)puVar24 + lVar12 + 0x830);
            *(long *)((long)puVar25 + lVar12 + 0x830) = lVar15;
            lVar18 = *(long *)((long)puVar24 + lVar12 + 0x838);
            *(long *)((long)puVar25 + lVar12 + 0x838) = lVar18;
            *(undefined4 *)((long)puVar25 + lVar12 + 0x840) =
                 *(undefined4 *)((long)puVar24 + lVar12 + 0x840);
            if (lVar18 != 0) {
              uVar17 = *(ulong *)(lVar15 + 8);
              if ((uVar23 & uVar23 - 1) == 0) {
                uVar17 = uVar17 & uVar23 - 1;
              }
              else if (uVar23 <= uVar17) {
                uVar6 = 0;
                if (uVar23 != 0) {
                  uVar6 = uVar17 / uVar23;
                }
                uVar17 = uVar17 - uVar6 * uVar23;
              }
              *(long *)(lVar19 + uVar17 * 8) = (long)puVar25 + lVar12 + 0x830;
              *(undefined8 *)((long)puVar24 + lVar12 + 0x830) = 0;
              *(undefined8 *)((long)puVar24 + lVar12 + 0x838) = 0;
            }
            lVar12 = lVar12 + 0x28;
          } while (lVar12 != 0x50);
          uVar16 = puVar24[0x10e];
          puVar25[0x10f] = puVar24[0x10f];
          puVar25[0x10e] = uVar16;
          puVar24[0x10f] = 0;
          puVar24[0x10e] = 0;
          uVar16 = puVar24[0x110];
          puVar25[0x111] = puVar24[0x111];
          puVar25[0x110] = uVar16;
          puVar24[0x111] = 0;
          puVar24[0x110] = 0;
          puVar25[0x112] = puVar24[0x112];
          puVar24 = puVar24 + 0x113;
          puVar25 = puVar25 + 0x113;
        } while (puVar24 != puVar20);
        do {
          func_0x00010abd6830(puVar21);
          puVar21 = puVar21 + 0x113;
        } while (puVar21 != puVar20);
        puVar21 = (undefined8 *)param_1[2];
      }
      param_1[2] = lVar13 - lVar22;
      param_1[3] = lVar13 + (uVar5 & 0xffffffff) * 0x898;
      param_1[4] = lVar10 + uVar14 * 0x898;
      if (puVar21 != (undefined8 *)0x0) {
        __ZdlPv(puVar21);
      }
      goto LAB_10abd66b4;
    }
    puVar21 = puVar20 + (uVar5 & 0xffffffff) * 0x113;
    lVar12 = uVar23 * 0x898 + lVar12 * -8;
    do {
      FUN_10abd674c(puVar20);
      puVar20 = puVar20 + 0x113;
      lVar12 = lVar12 + -0x898;
    } while (lVar12 != 0);
  }
  param_1[3] = (long)puVar21;
LAB_10abd66b4:
  uVar4 = *(ushort *)((long)param_1 + 0xc);
  if ((param_2 != -1) || (param_3 != -1)) {
    plVar9 = param_1 + 5;
    FUN_10abd5334(plVar9,param_2,param_3,&lStack_70);
    *(ushort *)(plVar9 + 4) = uVar4;
    uVar4 = *(ushort *)((long)param_1 + 0xc);
  }
  *(ushort *)((long)param_1 + 0xc) = uVar4 + 1;
  return (long *)(ulong)uVar4;
}



/* Entry: 10abd6714; end: 10abd674b;  */

undefined2 FUN_10abd6714(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  FUN_10abd56e8();
  puVar1 = (undefined2 *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = (undefined2 *)(lVar2 + 0x20);
  }
  return *puVar1;
}



/* Entry: 10abd674c; end: 10abd690f;  */

long FUN_10abd674c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _bzero(param_1,0x870);
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    *(undefined8 *)(lVar1 + 0xf8) = 0;
    *(undefined8 *)(lVar1 + 0xf0) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x108) = 0;
    *(undefined8 *)(lVar1 + 0x100) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x118) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x168) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x160) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x140) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x178) = 0;
    *(undefined8 *)(lVar1 + 0x170) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x188) = 0;
    *(undefined8 *)(lVar1 + 0x180) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x198) = 0x3f800000;
    *(undefined8 *)(lVar1 + 400) = 0;
    *(undefined8 *)(lVar1 + 0x1a8) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x1a0) = 0;
    *(undefined8 *)(lVar1 + 0x1d8) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x1d0) = 0;
    *(undefined8 *)(lVar1 + 0x1e8) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x1e0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined8 *)(lVar1 + 0x1c0) = 0x3f80000000000000;
    *(undefined8 *)(lVar1 + 0x1f0) = 1;
    _memcpy(lVar1 + 0x1f8,&UNK_10e4ff180,0x110);
    lVar2 = lVar2 + 0x408;
  } while (lVar2 != 0x810);
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x830) = 0;
  *(undefined8 *)(param_1 + 0x828) = 0;
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x840) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x850) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x878) = 0;
  *(undefined8 *)(param_1 + 0x870) = 0;
  *(undefined8 *)(param_1 + 0x888) = 0;
  *(undefined8 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x890) = 0;
  return param_1;
}



/* Entry: 10abd6910; end: 10abd69cf;  */

ulong * FUN_10abd6910(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 1;
    uVar4 = *param_1;
    puVar1 = param_2 + 1;
    uVar5 = *param_2;
    uVar6 = uVar4;
    if (uVar5 <= uVar4) {
      uVar6 = uVar5;
    }
    lVar3 = 0;
    if (uVar4 <= uVar5) {
      lVar3 = uVar5 - uVar4;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      _memcpy(puVar2,puVar1,0x110);
      puVar2 = puVar2 + 0x22;
      puVar1 = puVar1 + 0x22;
    }
    if (uVar4 < uVar5) {
      do {
        _memcpy(puVar2,puVar1,0x110);
        puVar2 = puVar2 + 0x22;
        puVar1 = puVar1 + 0x22;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    *param_1 = *param_2;
  }
  return param_1;
}



/* Entry: 10abd69d0; end: 10abd6a03;  */

void FUN_10abd69d0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  FUN_10abd6c5c((undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x10));
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 10);
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      __ZdlPv();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10abd6a04; end: 10abd6c23;  */

short FUN_10abd6a04(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  short *psVar2;
  undefined4 uVar3;
  short sVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lStack_70;
  long lStack_68;
  
  puVar13 = (undefined8 *)(param_1 + 0x10);
  puVar12 = (undefined8 *)*puVar13;
  uVar7 = (ulong)*(ushort *)(param_1 + 0xc);
  puVar14 = *(undefined8 **)(param_1 + 0x18);
  lVar15 = (long)puVar14 - (long)puVar12;
  bVar6 = uVar7 < (ulong)((lVar15 >> 3) * -0x3333333333333333);
  uVar5 = uVar7 + (lVar15 >> 3) * 0x3333333333333333;
  lStack_70 = param_2;
  lStack_68 = param_3;
  if (bVar6 || uVar5 == 0) {
    if (bVar6) {
      FUN_10abd6c5c(puVar13,puVar12 + uVar7 * 5);
    }
  }
  else if ((ulong)((*(long *)(param_1 + 0x20) - (long)puVar14 >> 3) * -0x3333333333333333) < uVar5)
  {
    lVar9 = *(long *)(param_1 + 0x20) - (long)puVar12 >> 3;
    uVar11 = lVar9 * -0x6666666666666666;
    if (uVar11 < uVar7 || uVar11 - uVar7 == 0) {
      uVar11 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar11 = 0x666666666666666;
    }
    if (0x666666666666666 < uVar11) {
      func_0x000109ffded8();
      lVar15 = param_1 + 0x28;
      FUN_10abd56e8();
      psVar2 = (short *)(param_1 + 8);
      if (lVar15 != 0) {
        psVar2 = (short *)(lVar15 + 0x20);
      }
      return *psVar2;
    }
    lVar9 = uVar11 * 0x28;
    __Znwm();
    puVar1 = (undefined8 *)(lVar9 + lVar15);
    puVar10 = puVar1;
    do {
      puVar10[4] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 4) = 0x43960000;
      puVar10 = puVar10 + 5;
    } while (puVar10 != puVar1 + (uVar5 & 0xffffffff) * 5);
    puVar8 = (undefined8 *)((long)puVar1 - lVar15);
    puVar10 = puVar12;
    if (puVar12 != puVar14) {
      do {
        uVar16 = *puVar10;
        puVar8[1] = puVar10[1];
        *puVar8 = uVar16;
        *puVar10 = 0;
        puVar10[1] = 0;
        uVar16 = puVar10[2];
        puVar8[3] = puVar10[3];
        puVar8[2] = uVar16;
        puVar10[2] = 0;
        puVar10[3] = 0;
        uVar3 = *(undefined4 *)(puVar10 + 4);
        *(undefined1 *)((long)puVar8 + 0x24) = *(undefined1 *)((long)puVar10 + 0x24);
        *(undefined4 *)(puVar8 + 4) = uVar3;
        puVar10 = puVar10 + 5;
        puVar8 = puVar8 + 5;
      } while (puVar10 != puVar14);
      do {
        func_0x00010a0523dc(puVar12 + 2);
        func_0x00010a0523dc(puVar12);
        puVar12 = puVar12 + 5;
      } while (puVar12 != puVar14);
      puVar12 = (undefined8 *)*puVar13;
    }
    *(undefined8 **)(param_1 + 0x10) = (undefined8 *)((long)puVar1 - lVar15);
    *(undefined8 **)(param_1 + 0x18) = puVar1 + (uVar5 & 0xffffffff) * 5;
    *(ulong *)(param_1 + 0x20) = lVar9 + uVar11 * 0x28;
    if (puVar12 != (undefined8 *)0x0) {
      __ZdlPv(puVar12);
    }
  }
  else {
    puVar12 = puVar14 + (uVar5 & 0xffffffff) * 5;
    do {
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
      puVar14[3] = 0;
      puVar14[2] = 0;
      *(undefined4 *)(puVar14 + 4) = 0x43960000;
      puVar14 = puVar14 + 5;
    } while (puVar14 != puVar12);
    *(undefined8 **)(param_1 + 0x18) = puVar12;
  }
  sVar4 = *(short *)(param_1 + 0xc);
  if ((param_2 != -1) || (param_3 != -1)) {
    lVar15 = param_1 + 0x28;
    FUN_10abd5334(lVar15,param_2,param_3,&lStack_70);
    *(short *)(lVar15 + 0x20) = sVar4;
    sVar4 = *(short *)(param_1 + 0xc);
  }
  *(short *)(param_1 + 0xc) = sVar4 + 1;
  return sVar4;
}



/* Entry: 10abd6c24; end: 10abd6c5b;  */

undefined2 FUN_10abd6c24(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  FUN_10abd56e8();
  puVar1 = (undefined2 *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = (undefined2 *)(lVar2 + 0x20);
  }
  return *puVar1;
}



/* Entry: 10abd6c5c; end: 10abd6cb3;  */

void FUN_10abd6c5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    func_0x00010a0523dc(lVar1 + -0x18);
    func_0x00010a0523dc(lVar1 + -0x28);
    lVar1 = lVar1 + -0x28;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10abd6cb4; end: 10abd6d2b;  */

void FUN_10abd6cb4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10abd6c5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*param_1);
    return;
  }
  return;
}



/* Entry: 10abd6d2c; end: 10abd6f87;  */

short FUN_10abd6d2c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  short *psVar4;
  short sVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lStack_60;
  long lStack_58;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0xc);
  puVar19 = *(undefined8 **)(param_1 + 0x10);
  puVar18 = *(undefined8 **)(param_1 + 0x18);
  lVar20 = (long)puVar18 - (long)puVar19;
  bVar8 = uVar9 < (ulong)((lVar20 >> 3) * -0x3333333333333333);
  uVar6 = uVar9 + (lVar20 >> 3) * 0x3333333333333333;
  lStack_60 = param_2;
  lStack_58 = param_3;
  if (bVar8 || uVar6 == 0) {
    if (bVar8) {
      while (puVar18 != puVar19 + uVar9 * 5) {
        puVar18 = puVar18 + -5;
        func_0x00010abd6fc0(puVar18);
      }
      *(undefined8 **)(param_1 + 0x18) = puVar19 + uVar9 * 5;
    }
  }
  else if ((ulong)((*(long *)(param_1 + 0x20) - (long)puVar18 >> 3) * -0x3333333333333333) < uVar6)
  {
    lVar11 = *(long *)(param_1 + 0x20) - (long)puVar19 >> 3;
    uVar12 = lVar11 * -0x6666666666666666;
    if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
      uVar12 = uVar9;
    }
    if (0x333333333333332 < (ulong)(lVar11 * -0x3333333333333333)) {
      uVar12 = 0x666666666666666;
    }
    if (0x666666666666666 < uVar12) {
      func_0x000109ffded8();
      lVar20 = param_1 + 0x28;
      FUN_10abd56e8();
      psVar4 = (short *)(param_1 + 8);
      if (lVar20 != 0) {
        psVar4 = (short *)(lVar20 + 0x20);
      }
      return *psVar4;
    }
    lVar11 = uVar12 * 0x28;
    __Znwm();
    puVar1 = (undefined8 *)(lVar11 + lVar20);
    puVar13 = puVar1;
    do {
      puVar13[4] = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar13[3] = 0;
      puVar13[2] = 0;
      *(undefined4 *)(puVar13 + 4) = 0x3f800000;
      puVar13 = puVar13 + 5;
    } while (puVar13 != puVar1 + (uVar6 & 0xffffffff) * 5);
    if (puVar19 != puVar18) {
      lVar10 = 0;
      do {
        plVar2 = (long *)((long)puVar19 + lVar10);
        plVar3 = (long *)(((long)puVar1 - lVar20) + lVar10);
        lVar14 = *plVar2;
        *plVar2 = 0;
        *plVar3 = lVar14;
        lVar15 = plVar2[2];
        uVar9 = plVar2[1];
        plVar3[2] = lVar15;
        plVar3[1] = uVar9;
        plVar2[1] = 0;
        lVar17 = plVar2[3];
        plVar3[3] = lVar17;
        *(int *)(plVar3 + 4) = (int)plVar2[4];
        if (lVar17 != 0) {
          uVar16 = *(ulong *)(lVar15 + 8);
          if ((uVar9 & uVar9 - 1) == 0) {
            uVar16 = uVar16 & uVar9 - 1;
          }
          else if (uVar9 <= uVar16) {
            uVar7 = 0;
            if (uVar9 != 0) {
              uVar7 = uVar16 / uVar9;
            }
            uVar16 = uVar16 - uVar7 * uVar9;
          }
          *(long **)(lVar14 + uVar16 * 8) = plVar3 + 2;
          plVar2[2] = 0;
          plVar2[3] = 0;
        }
        lVar10 = lVar10 + 0x28;
      } while ((undefined8 *)((long)puVar19 + lVar10) != puVar18);
      do {
        func_0x00010abd6fc0(puVar19);
        puVar19 = puVar19 + 5;
      } while (puVar19 != puVar18);
      puVar19 = *(undefined8 **)(param_1 + 0x10);
    }
    *(long *)(param_1 + 0x10) = (long)puVar1 - lVar20;
    *(undefined8 **)(param_1 + 0x18) = puVar1 + (uVar6 & 0xffffffff) * 5;
    *(ulong *)(param_1 + 0x20) = lVar11 + uVar12 * 0x28;
    if (puVar19 != (undefined8 *)0x0) {
      __ZdlPv(puVar19);
    }
  }
  else {
    puVar19 = puVar18 + (uVar6 & 0xffffffff) * 5;
    do {
      puVar18[4] = 0;
      puVar18[1] = 0;
      *puVar18 = 0;
      puVar18[3] = 0;
      puVar18[2] = 0;
      *(undefined4 *)(puVar18 + 4) = 0x3f800000;
      puVar18 = puVar18 + 5;
    } while (puVar18 != puVar19);
    *(undefined8 **)(param_1 + 0x18) = puVar19;
  }
  sVar5 = *(short *)(param_1 + 0xc);
  if ((param_2 != -1) || (param_3 != -1)) {
    lVar20 = param_1 + 0x28;
    FUN_10abd5334(lVar20,param_2,param_3,&lStack_60);
    *(short *)(lVar20 + 0x20) = sVar5;
    sVar5 = *(short *)(param_1 + 0xc);
  }
  *(short *)(param_1 + 0xc) = sVar5 + 1;
  return sVar5;
}



/* Entry: 10abd6f88; end: 10abd7033;  */

undefined2 FUN_10abd6f88(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  FUN_10abd56e8();
  puVar1 = (undefined2 *)(param_1 + 8);
  if (lVar2 != 0) {
    puVar1 = (undefined2 *)(lVar2 + 0x20);
  }
  return *puVar1;
}



/* Entry: 10abd7034; end: 10abd717b;  */

void FUN_10abd7034(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010abd6fc0();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10abd717c; end: 10abd7257;  */

void FUN_10abd717c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x20;
        func_0x00010a045fb4();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10abd7258; end: 10abd733b;  */

void FUN_10abd7258(long param_1,int param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) * 0x4fbcda3ac10c9715;
  if ((ulong)(long)param_2 <= uVar4 && uVar4 - (long)param_2 != 0) {
    if ((*(int *)(param_3 + 0x34) != 0) && (*(uint *)(param_3 + 0x14) < 0xc)) {
      lVar5 = *(long *)(param_1 + 0x10) + (long)param_2 * 0x1e8 +
              (ulong)*(uint *)(param_3 + 0x14) * 0x28;
      uVar2 = *(uint *)(lVar5 + 0x1c);
      if (uVar2 != 0) {
        uVar1 = *(uint *)(param_3 + 0x2c);
        if ((ulong)*(uint *)(param_3 + 0x28) + param_5 * (ulong)uVar1 <= (ulong)uVar2) {
          if (1 < *(uint *)(param_1 + 0x70)) goto LAB_10abd7338;
          if (param_5 != 0) {
            puVar6 = (undefined4 *)(param_4 + 0x14);
            puVar7 = (undefined4 *)
                     ((ulong)*(uint *)(param_3 + 0x28) +
                      *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x70) * 0x20 + 0x30) +
                      (ulong)*(uint *)(lVar5 + 0x20) + 0x18);
            do {
              uVar8 = puVar6[-3];
              uVar9 = *puVar6;
              uVar10 = puVar6[3];
              uVar11 = *(undefined8 *)(puVar6 + -2);
              uVar12 = *(undefined8 *)(puVar6 + 1);
              *(undefined8 *)(puVar7 + -6) = *(undefined8 *)(puVar6 + -5);
              puVar7[-4] = uVar8;
              puVar7[-3] = 0;
              *(undefined8 *)(puVar7 + -2) = uVar11;
              *puVar7 = uVar9;
              puVar7[1] = 0;
              *(undefined8 *)(puVar7 + 2) = uVar12;
              puVar6 = puVar6 + 9;
              puVar7[4] = uVar10;
              puVar7[5] = 0;
              puVar7 = (undefined4 *)((long)puVar7 + (ulong)uVar1);
              param_5 = param_5 + -1;
            } while (param_5 != 0);
          }
        }
      }
    }
    return;
  }
LAB_10abd7338:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10abd733c);
  (*pcVar3)();
}



/* Entry: 10abd733c; end: 10abd736b;  */

void FUN_10abd733c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x48);
  FUN_10abd736c();
                    /* WARNING: Could not recover jumptable at 0x00010abd7368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10abd736c; end: 10abd753b;  */

void FUN_10abd736c(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined *extraout_x8;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lStack_58;
  undefined4 auStack_50 [2];
  long *plStack_48;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10abd750c);
    (*pcVar4)();
  }
  lVar9 = param_1[8];
  param_1[8] = 0;
  ppuVar5 = &PTR___tlv_bootstrap_11340dee8;
  lStack_58 = lVar9;
  (*(code *)PTR___tlv_bootstrap_11340dee8)(*(undefined8 *)(*param_1 + 0x858));
  puVar10 = *ppuVar5;
  *ppuVar5 = extraout_x8;
  FUN_10abbc2fc(auStack_50);
  if (plStack_48 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_48 + 1);
    do {
      uVar7 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar7 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plStack_48 + 8))();
      }
    }
  }
  *ppuVar5 = puVar10;
  plVar6 = (long *)(lVar9 + 0x10);
  do {
    lVar8 = *plVar6;
    if (lVar8 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        *(undefined4 *)(lVar9 + 0x98) = auStack_50[0];
        *(undefined1 *)(lVar9 + 0x9c) = 1;
        *(undefined8 *)(lVar9 + 0x10) = 2;
        FUN_109d1b4dc(lVar9 + 0x18);
        goto LAB_10abd7474;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar8 >> 1 & 1) != 0) {
LAB_10abd7474:
      if ((char)param_1[7] == '\x01') {
        plVar6 = (long *)param_1[4];
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar7 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar7 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar7 & 0x1fffffffc) == 4) {
            do {
              uVar7 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar7 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar7 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      lVar9 = lStack_58;
      lStack_58 = 0;
      if ((lVar9 != 0) && (func_0x0001092b4274(&lStack_58), lStack_58 != 0)) {
        func_0x0001092b4274(&lStack_58);
      }
      return;
    }
  } while( true );
}



/* Entry: 10abd753c; end: 10abd77d3;  */

undefined8 * FUN_10abd753c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_110c52fe8;
  if (param_1[0x1c] != 0) {
    func_0x0001092b4274();
  }
  if ((*(char *)(param_1 + 0x1b) == '\x01') &&
     (plVar4 = (long *)param_1[0x18], plVar4 != (long *)0x0)) {
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
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10abd77d4; end: 10abd79af;  */

undefined8 * FUN_10abd77d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  _bzero(param_1 + 0x12,0x220);
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar2 = 0xb0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    puVar1[5] = 0;
    puVar1[4] = 0xffffffff;
    puVar1[7] = 0;
    puVar1[6] = 0xffffffff;
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
    puVar1[3] = 0;
    puVar1[2] = 0xffffffff;
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x2b0);
  lVar2 = 0;
  param_1[0x69] = 0;
  *(undefined8 *)((long)param_1 + 0x34d) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 1;
  *(undefined4 *)((long)param_1 + 0x36c) = 7;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5b] = 0x100000000;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5d] = 0x100000000;
  param_1[0x58] = 0xffffffff;
  param_1[0x57] = 0x100000000;
  param_1[0x5a] = 0xffffffff;
  param_1[0x59] = 0x100000000;
  param_1[100] = 0xffffffff;
  param_1[99] = 0x100000000;
  param_1[0x66] = 0xffffffff;
  param_1[0x65] = 0x100000000;
  param_1[0x60] = 0xffffffff;
  param_1[0x5f] = 0x100000000;
  param_1[0x62] = 0xffffffff;
  param_1[0x61] = 0x100000000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  param_1[0x6b] = 0;
  *(undefined2 *)((long)param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)((long)param_1 + 0x37c) = 0x700000000;
  *(undefined8 *)((long)param_1 + 0x374) = 0;
  *(undefined4 *)((long)param_1 + 0x394) = 0;
  *(undefined8 *)((long)param_1 + 0x38c) = 0;
  *(undefined8 *)((long)param_1 + 900) = 0;
  param_1[0x73] = 7;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  do {
    *(undefined1 *)((long)param_1 + lVar2 + 0x3a8) = 0;
    *(undefined8 *)((long)param_1 + lVar2 + 0x3b4) = 0x100000000;
    *(undefined8 *)((long)param_1 + lVar2 + 0x3ac) = 1;
    *(undefined8 *)((long)param_1 + lVar2 + 0x3bc) = 0;
    *(undefined4 *)((long)param_1 + lVar2 + 0x3c4) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0xa3] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa4] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xb7] = 0;
  param_1[0xc0] = 0;
  param_1[0xc9] = param_2;
  *(undefined1 *)(param_1 + 0xca) = 0;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[9] = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[7] = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 10abd79b0; end: 10abd79c3;  */

void FUN_10abd79b0(undefined8 param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar2 != param_2) {
    puVar3 = puVar2 + 0x88;
    param_3 = param_3 + 0x88;
    do {
      uVar4 = *(undefined8 *)(puVar3 + -0x88);
      *(undefined8 *)(param_3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
      *(undefined8 *)(param_3 + -0x88) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + -0x70);
      uVar4 = *(undefined8 *)(puVar3 + -0x78);
      uVar7 = *(undefined8 *)(puVar3 + -0x60);
      uVar6 = *(undefined8 *)(puVar3 + -0x68);
      uVar9 = *(undefined8 *)(puVar3 + -0x50);
      uVar8 = *(undefined8 *)(puVar3 + -0x58);
      uVar10 = *(undefined8 *)(puVar3 + -0x48);
      *(undefined8 *)(param_3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
      *(undefined8 *)(param_3 + -0x48) = uVar10;
      *(undefined8 *)(param_3 + -0x50) = uVar9;
      *(undefined8 *)(param_3 + -0x58) = uVar8;
      *(undefined8 *)(param_3 + -0x60) = uVar7;
      *(undefined8 *)(param_3 + -0x68) = uVar6;
      *(undefined8 *)(param_3 + -0x70) = uVar5;
      *(undefined8 *)(param_3 + -0x78) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + -0x30);
      uVar4 = *(undefined8 *)(puVar3 + -0x38);
      uVar7 = *(undefined8 *)(puVar3 + -0x20);
      uVar6 = *(undefined8 *)(puVar3 + -0x28);
      uVar9 = *(undefined8 *)(puVar3 + -0x10);
      uVar8 = *(undefined8 *)(puVar3 + -0x18);
      *(undefined8 *)(param_3 + -8) = *(undefined8 *)(puVar3 + -8);
      *(undefined8 *)(param_3 + -0x10) = uVar9;
      *(undefined8 *)(param_3 + -0x18) = uVar8;
      *(undefined8 *)(param_3 + -0x20) = uVar7;
      *(undefined8 *)(param_3 + -0x28) = uVar6;
      *(undefined8 *)(param_3 + -0x30) = uVar5;
      *(undefined8 *)(param_3 + -0x38) = uVar4;
      func_0x000109295560(param_3,puVar3);
      uVar5 = *(undefined8 *)(puVar3 + 0x538);
      uVar4 = *(undefined8 *)(puVar3 + 0x530);
      uVar6 = *(undefined8 *)(puVar3 + 0x540);
      *(undefined8 *)(param_3 + 0x548) = *(undefined8 *)(puVar3 + 0x548);
      *(undefined8 *)(param_3 + 0x540) = uVar6;
      *(undefined8 *)(param_3 + 0x538) = uVar5;
      *(undefined8 *)(param_3 + 0x530) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + 0x558);
      uVar4 = *(undefined8 *)(puVar3 + 0x550);
      uVar7 = *(undefined8 *)(puVar3 + 0x568);
      uVar6 = *(undefined8 *)(puVar3 + 0x560);
      uVar9 = *(undefined8 *)(puVar3 + 0x578);
      uVar8 = *(undefined8 *)(puVar3 + 0x570);
      uVar10 = *(undefined8 *)(puVar3 + 0x580);
      *(undefined8 *)(param_3 + 0x588) = *(undefined8 *)(puVar3 + 0x588);
      *(undefined8 *)(param_3 + 0x580) = uVar10;
      *(undefined8 *)(param_3 + 0x578) = uVar9;
      *(undefined8 *)(param_3 + 0x570) = uVar8;
      *(undefined8 *)(param_3 + 0x568) = uVar7;
      *(undefined8 *)(param_3 + 0x560) = uVar6;
      *(undefined8 *)(param_3 + 0x558) = uVar5;
      *(undefined8 *)(param_3 + 0x550) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + 0x598);
      uVar4 = *(undefined8 *)(puVar3 + 0x590);
      uVar7 = *(undefined8 *)(puVar3 + 0x5a8);
      uVar6 = *(undefined8 *)(puVar3 + 0x5a0);
      uVar9 = *(undefined8 *)(puVar3 + 0x5b8);
      uVar8 = *(undefined8 *)(puVar3 + 0x5b0);
      uVar10 = *(undefined8 *)(puVar3 + 0x5b9);
      *(undefined8 *)(param_3 + 0x5c1) = *(undefined8 *)(puVar3 + 0x5c1);
      *(undefined8 *)(param_3 + 0x5b9) = uVar10;
      *(undefined8 *)(param_3 + 0x5b8) = uVar9;
      *(undefined8 *)(param_3 + 0x5b0) = uVar8;
      *(undefined8 *)(param_3 + 0x5a8) = uVar7;
      *(undefined8 *)(param_3 + 0x5a0) = uVar6;
      *(undefined8 *)(param_3 + 0x598) = uVar5;
      *(undefined8 *)(param_3 + 0x590) = uVar4;
      _memcpy(param_3 + 0x5d0,puVar3 + 0x5d0,0xa5c);
      puVar1 = puVar3 + 0x1030;
      puVar3 = puVar3 + 0x10b8;
      param_3 = param_3 + 0x10b8;
    } while (puVar1 != param_2);
    do {
      func_0x00010a09ad20(puVar2 + 0x568);
      puVar2 = puVar2 + 0x10b8;
    } while (puVar2 != param_2);
  }
  return;
}



/* Entry: 10abd79c4; end: 10abd7af3;  */

void FUN_10abd79c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    lVar2 = param_1 + 0x88;
    param_3 = param_3 + 0x88;
    do {
      uVar3 = *(undefined8 *)(lVar2 + -0x88);
      *(undefined8 *)(param_3 + -0x80) = *(undefined8 *)(lVar2 + -0x80);
      *(undefined8 *)(param_3 + -0x88) = uVar3;
      uVar4 = *(undefined8 *)(lVar2 + -0x70);
      uVar3 = *(undefined8 *)(lVar2 + -0x78);
      uVar6 = *(undefined8 *)(lVar2 + -0x60);
      uVar5 = *(undefined8 *)(lVar2 + -0x68);
      uVar8 = *(undefined8 *)(lVar2 + -0x50);
      uVar7 = *(undefined8 *)(lVar2 + -0x58);
      uVar9 = *(undefined8 *)(lVar2 + -0x48);
      *(undefined8 *)(param_3 + -0x40) = *(undefined8 *)(lVar2 + -0x40);
      *(undefined8 *)(param_3 + -0x48) = uVar9;
      *(undefined8 *)(param_3 + -0x50) = uVar8;
      *(undefined8 *)(param_3 + -0x58) = uVar7;
      *(undefined8 *)(param_3 + -0x60) = uVar6;
      *(undefined8 *)(param_3 + -0x68) = uVar5;
      *(undefined8 *)(param_3 + -0x70) = uVar4;
      *(undefined8 *)(param_3 + -0x78) = uVar3;
      uVar4 = *(undefined8 *)(lVar2 + -0x30);
      uVar3 = *(undefined8 *)(lVar2 + -0x38);
      uVar6 = *(undefined8 *)(lVar2 + -0x20);
      uVar5 = *(undefined8 *)(lVar2 + -0x28);
      uVar8 = *(undefined8 *)(lVar2 + -0x10);
      uVar7 = *(undefined8 *)(lVar2 + -0x18);
      *(undefined8 *)(param_3 + -8) = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(param_3 + -0x10) = uVar8;
      *(undefined8 *)(param_3 + -0x18) = uVar7;
      *(undefined8 *)(param_3 + -0x20) = uVar6;
      *(undefined8 *)(param_3 + -0x28) = uVar5;
      *(undefined8 *)(param_3 + -0x30) = uVar4;
      *(undefined8 *)(param_3 + -0x38) = uVar3;
      func_0x000109295560(param_3,lVar2);
      uVar4 = *(undefined8 *)(lVar2 + 0x538);
      uVar3 = *(undefined8 *)(lVar2 + 0x530);
      uVar5 = *(undefined8 *)(lVar2 + 0x540);
      *(undefined8 *)(param_3 + 0x548) = *(undefined8 *)(lVar2 + 0x548);
      *(undefined8 *)(param_3 + 0x540) = uVar5;
      *(undefined8 *)(param_3 + 0x538) = uVar4;
      *(undefined8 *)(param_3 + 0x530) = uVar3;
      uVar4 = *(undefined8 *)(lVar2 + 0x558);
      uVar3 = *(undefined8 *)(lVar2 + 0x550);
      uVar6 = *(undefined8 *)(lVar2 + 0x568);
      uVar5 = *(undefined8 *)(lVar2 + 0x560);
      uVar8 = *(undefined8 *)(lVar2 + 0x578);
      uVar7 = *(undefined8 *)(lVar2 + 0x570);
      uVar9 = *(undefined8 *)(lVar2 + 0x580);
      *(undefined8 *)(param_3 + 0x588) = *(undefined8 *)(lVar2 + 0x588);
      *(undefined8 *)(param_3 + 0x580) = uVar9;
      *(undefined8 *)(param_3 + 0x578) = uVar8;
      *(undefined8 *)(param_3 + 0x570) = uVar7;
      *(undefined8 *)(param_3 + 0x568) = uVar6;
      *(undefined8 *)(param_3 + 0x560) = uVar5;
      *(undefined8 *)(param_3 + 0x558) = uVar4;
      *(undefined8 *)(param_3 + 0x550) = uVar3;
      uVar4 = *(undefined8 *)(lVar2 + 0x598);
      uVar3 = *(undefined8 *)(lVar2 + 0x590);
      uVar6 = *(undefined8 *)(lVar2 + 0x5a8);
      uVar5 = *(undefined8 *)(lVar2 + 0x5a0);
      uVar8 = *(undefined8 *)(lVar2 + 0x5b8);
      uVar7 = *(undefined8 *)(lVar2 + 0x5b0);
      uVar9 = *(undefined8 *)(lVar2 + 0x5b9);
      *(undefined8 *)(param_3 + 0x5c1) = *(undefined8 *)(lVar2 + 0x5c1);
      *(undefined8 *)(param_3 + 0x5b9) = uVar9;
      *(undefined8 *)(param_3 + 0x5b8) = uVar8;
      *(undefined8 *)(param_3 + 0x5b0) = uVar7;
      *(undefined8 *)(param_3 + 0x5a8) = uVar6;
      *(undefined8 *)(param_3 + 0x5a0) = uVar5;
      *(undefined8 *)(param_3 + 0x598) = uVar4;
      *(undefined8 *)(param_3 + 0x590) = uVar3;
      _memcpy(param_3 + 0x5d0,lVar2 + 0x5d0,0xa5c);
      lVar1 = lVar2 + 0x1030;
      lVar2 = lVar2 + 0x10b8;
      param_3 = param_3 + 0x10b8;
    } while (lVar1 != param_2);
    do {
      func_0x00010a09ad20(param_1 + 0x568);
      param_1 = param_1 + 0x10b8;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10abd7af4; end: 10abd7b53;  */

long * FUN_10abd7af4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10b8;
    func_0x00010a09ad20(lVar2 + -0xb50);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abd7b54; end: 10abd7ba7;  */

void FUN_10abd7b54(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110c53048)[*(uint *)(param_1 + 0x40)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10abd7ba8; end: 10abd7be3;  */

void FUN_10abd7ba8(void)

{
  return;
}



/* Entry: 10abd7be4; end: 10abd7bf7;  */

void FUN_10abd7be4(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puStack_88;
  
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined *)0x38e38e38e38e38e < puVar2) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 0x40) = 0xffffffff;
        FUN_10abd7b54(param_3);
        uVar1 = *(uint *)(puVar3 + 0x40);
        if (uVar1 != 0xffffffff) {
          puStack_88 = param_3;
          (*(code *)(&PTR_FUN_110c53080)[uVar1])(&puStack_88,puVar3);
          *(uint *)(param_3 + 0x40) = uVar1;
        }
        puVar3 = puVar3 + 0x48;
        param_3 = param_3 + 0x48;
      } while (puVar3 != param_2);
      do {
        FUN_10abd7b54(puVar2);
        puVar2 = puVar2 + 0x48;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 * 0x48);
  return;
}



/* Entry: 10abd7bf8; end: 10abd7c3f;  */

void FUN_10abd7bf8(ulong param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puStack_78;
  
  if (0x38e38e38e38e38e < param_1) {
    func_0x000109ffded8();
    uVar2 = param_1;
    if (param_1 != param_2) {
      do {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 0x40) = 0xffffffff;
        FUN_10abd7b54(param_3);
        uVar1 = *(uint *)(uVar2 + 0x40);
        if (uVar1 != 0xffffffff) {
          puStack_78 = param_3;
          (*(code *)(&PTR_FUN_110c53080)[uVar1])(&puStack_78,uVar2);
          *(uint *)(param_3 + 0x40) = uVar1;
        }
        uVar2 = uVar2 + 0x48;
        param_3 = param_3 + 0x48;
      } while (uVar2 != param_2);
      do {
        FUN_10abd7b54(param_1);
        param_1 = param_1 + 0x48;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm(param_1 * 0x48);
  return;
}



/* Entry: 10abd7c40; end: 10abd7cf7;  */

void FUN_10abd7c40(long param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 *puStack_58;
  
  lVar2 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 0x40) = 0xffffffff;
      FUN_10abd7b54(param_3);
      uVar1 = *(uint *)(lVar2 + 0x40);
      if (uVar1 != 0xffffffff) {
        puStack_58 = param_3;
        (*(code *)(&PTR_FUN_110c53080)[uVar1])(&puStack_58,lVar2);
        *(uint *)(param_3 + 0x40) = uVar1;
      }
      lVar2 = lVar2 + 0x48;
      param_3 = param_3 + 0x48;
    } while (lVar2 != param_2);
    do {
      FUN_10abd7b54(param_1);
      param_1 = param_1 + 0x48;
    } while (param_1 != param_2);
  }
  return;
}



/* Entry: 10abd7cf8; end: 10abd7d9b;  */

void FUN_10abd7cf8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  return;
}



/* Entry: 10abd7d9c; end: 10abd7de7;  */

long * FUN_10abd7d9c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x48;
    FUN_10abd7b54();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10abd7de8; end: 10abd7f1f;  */

undefined8 * FUN_10abd7de8(ulong *param_1,undefined4 param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_58;
  undefined4 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar1 = (ulong *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar2 - (long)puVar1;
  uVar4 = (lVar9 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar4 < 0x38e38e38e38e38f) {
    lVar7 = (long)(param_1[2] - (long)puVar1) >> 3;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x38e38e38e38e38e;
    }
    puStack_38 = param_1;
    if (uVar8 == 0) {
      puVar5 = (undefined8 *)0x0;
      puVar3 = puVar2;
      lVar7 = lVar9;
    }
    else {
      FUN_10abd7bf8();
      puVar1 = (ulong *)*param_1;
      puVar3 = (undefined8 *)param_1[1];
      puVar5 = puVar2;
      lVar7 = (long)param_1[1] - (long)puVar1;
    }
    puStack_50 = (undefined4 *)(uVar8 + lVar9);
    uVar10 = uVar8 + (long)puVar5 * 0x48;
    *puStack_50 = param_2;
    puStack_50[0x10] = 1;
    puVar2 = (undefined8 *)(puStack_50 + 0x12);
    uVar4 = (long)puStack_50 - lVar7;
    uStack_58 = uVar8;
    puStack_48 = puVar2;
    uStack_40 = uVar10;
    FUN_10abd7c40(puVar1,puVar3,uVar4);
    uStack_58 = *param_1;
    *param_1 = uVar4;
    param_1[1] = (ulong)puVar2;
    uStack_40 = param_1[2];
    param_1[2] = uVar10;
    puStack_50 = (undefined4 *)uStack_58;
    puStack_48 = (undefined8 *)uStack_58;
    FUN_10abd7d9c(&uStack_58);
    return puVar2;
  }
  FUN_10abd7be4();
  FUN_10abd7d9c(&uStack_58);
  __Unwind_Resume();
  lVar9 = puVar1[1] - *puVar1;
  uVar4 = (lVar9 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar4 < 0x38e38e38e38e38f) {
    lVar7 = (long)(puVar1[2] - *puVar1) >> 3;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x38e38e38e38e38e;
    }
    puStack_98 = puVar1;
    if (uVar8 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = puVar2;
      FUN_10abd7bf8();
    }
    puStack_b0 = (undefined8 *)(uVar8 + lVar9);
    uVar10 = uVar8 + (long)puVar3 * 0x48;
    uVar6 = puVar2[4];
    uVar13 = *puVar2;
    uVar12 = puVar2[3];
    uVar11 = puVar2[2];
    puStack_b0[1] = puVar2[1];
    *puStack_b0 = uVar13;
    puStack_b0[3] = uVar12;
    puStack_b0[2] = uVar11;
    puStack_b0[4] = uVar6;
    *(undefined4 *)(puStack_b0 + 8) = 3;
    puVar2 = puStack_b0 + 9;
    uVar4 = (long)puStack_b0 + (*puVar1 - puVar1[1]);
    uStack_b8 = uVar8;
    puStack_a8 = puVar2;
    uStack_a0 = uVar10;
    FUN_10abd7c40(*puVar1,puVar1[1],uVar4);
    uStack_b8 = *puVar1;
    *puVar1 = uVar4;
    puVar1[1] = (ulong)puVar2;
    uStack_a0 = puVar1[2];
    puVar1[2] = uVar10;
    puStack_b0 = (undefined8 *)uStack_b8;
    puStack_a8 = (undefined8 *)uStack_b8;
    FUN_10abd7d9c(&uStack_b8);
    return puVar2;
  }
  FUN_10abd7be4();
  FUN_10abd7d9c(&uStack_b8);
  __Unwind_Resume();
  lVar9 = puVar1[1] - *puVar1;
  uVar4 = (lVar9 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar4 < 0x38e38e38e38e38f) {
    lVar7 = (long)(puVar1[2] - *puVar1) >> 3;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x38e38e38e38e38e;
    }
    puStack_f8 = puVar1;
    if (uVar8 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = puVar2;
      FUN_10abd7bf8();
    }
    puStack_110 = (undefined8 *)(uVar8 + lVar9);
    uVar10 = uVar8 + (long)puVar3 * 0x48;
    uVar6 = puVar2[4];
    uVar13 = *puVar2;
    uVar12 = puVar2[3];
    uVar11 = puVar2[2];
    puStack_110[1] = puVar2[1];
    *puStack_110 = uVar13;
    puStack_110[3] = uVar12;
    puStack_110[2] = uVar11;
    puStack_110[4] = uVar6;
    *(undefined4 *)(puStack_110 + 8) = 4;
    puVar2 = puStack_110 + 9;
    uVar4 = (long)puStack_110 + (*puVar1 - puVar1[1]);
    uStack_118 = uVar8;
    puStack_108 = puVar2;
    uStack_100 = uVar10;
    FUN_10abd7c40(*puVar1,puVar1[1],uVar4);
    uStack_118 = *puVar1;
    *puVar1 = uVar4;
    puVar1[1] = (ulong)puVar2;
    uStack_100 = puVar1[2];
    puVar1[2] = uVar10;
    puStack_110 = (undefined8 *)uStack_118;
    puStack_108 = (undefined8 *)uStack_118;
    FUN_10abd7d9c(&uStack_118);
    return puVar2;
  }
  FUN_10abd7be4();
  FUN_10abd7d9c(&uStack_118);
  __Unwind_Resume(puVar1);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x00010a09dbbc(puVar2 + 2);
  lVar9 = puVar2[1];
  puVar2[1] = 0;
  if (lVar9 != 0) {
    FUN_10a1944f0();
  }
  return puVar2;
}



/* Entry: 10abd7f20; end: 10abd8053;  */

undefined8 * FUN_10abd7f20(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar4 < 0x38e38e38e38e38f) {
    lVar2 = (long)(param_1[2] - *param_1) >> 3;
    uVar5 = lVar2 * 0x1c71c71c71c71c72;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar2 * -0x71c71c71c71c71c7)) {
      uVar5 = 0x38e38e38e38e38e;
    }
    puStack_38 = param_1;
    if (uVar5 == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = param_2;
      FUN_10abd7bf8();
    }
    puStack_50 = (undefined8 *)(uVar5 + lVar6);
    uVar7 = uVar5 + (long)puVar1 * 0x48;
    uVar3 = param_2[4];
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puStack_50[1] = param_2[1];
    *puStack_50 = uVar10;
    puStack_50[3] = uVar9;
    puStack_50[2] = uVar8;
    puStack_50[4] = uVar3;
    *(undefined4 *)(puStack_50 + 8) = 3;
    puVar1 = puStack_50 + 9;
    uVar4 = (long)puStack_50 + (*param_1 - param_1[1]);
    uStack_58 = uVar5;
    puStack_48 = puVar1;
    uStack_40 = uVar7;
    FUN_10abd7c40(*param_1,param_1[1],uVar4);
    uStack_58 = *param_1;
    *param_1 = uVar4;
    param_1[1] = (ulong)puVar1;
    uStack_40 = param_1[2];
    param_1[2] = uVar7;
    puStack_50 = (undefined8 *)uStack_58;
    puStack_48 = (undefined8 *)uStack_58;
    FUN_10abd7d9c(&uStack_58);
    return puVar1;
  }
  FUN_10abd7be4();
  FUN_10abd7d9c(&uStack_58);
  __Unwind_Resume();
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar4 < 0x38e38e38e38e38f) {
    lVar2 = (long)(param_1[2] - *param_1) >> 3;
    uVar5 = lVar2 * 0x1c71c71c71c71c72;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar2 * -0x71c71c71c71c71c7)) {
      uVar5 = 0x38e38e38e38e38e;
    }
    puStack_98 = param_1;
    if (uVar5 == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = param_2;
      FUN_10abd7bf8();
    }
    puStack_b0 = (undefined8 *)(uVar5 + lVar6);
    uVar7 = uVar5 + (long)puVar1 * 0x48;
    uVar3 = param_2[4];
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puStack_b0[1] = param_2[1];
    *puStack_b0 = uVar10;
    puStack_b0[3] = uVar9;
    puStack_b0[2] = uVar8;
    puStack_b0[4] = uVar3;
    *(undefined4 *)(puStack_b0 + 8) = 4;
    puVar1 = puStack_b0 + 9;
    uVar4 = (long)puStack_b0 + (*param_1 - param_1[1]);
    uStack_b8 = uVar5;
    puStack_a8 = puVar1;
    uStack_a0 = uVar7;
    FUN_10abd7c40(*param_1,param_1[1],uVar4);
    uStack_b8 = *param_1;
    *param_1 = uVar4;
    param_1[1] = (ulong)puVar1;
    uStack_a0 = param_1[2];
    param_1[2] = uVar7;
    puStack_b0 = (undefined8 *)uStack_b8;
    puStack_a8 = (undefined8 *)uStack_b8;
    FUN_10abd7d9c(&uStack_b8);
    return puVar1;
  }
  FUN_10abd7be4();
  FUN_10abd7d9c(&uStack_b8);
  __Unwind_Resume(param_1);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x00010a09dbbc(puVar1 + 2);
  lVar6 = puVar1[1];
  puVar1[1] = 0;
  if (lVar6 != 0) {
    FUN_10a1944f0();
  }
  return puVar1;
}



/* Entry: 10abd8054; end: 10abd8187;  */

undefined8 * FUN_10abd8054(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x71c71c71c71c71c7 + 1;
  if (uVar4 < 0x38e38e38e38e38f) {
    lVar2 = (long)(param_1[2] - *param_1) >> 3;
    uVar5 = lVar2 * 0x1c71c71c71c71c72;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x1c71c71c71c71c6 < (ulong)(lVar2 * -0x71c71c71c71c71c7)) {
      uVar5 = 0x38e38e38e38e38e;
    }
    puStack_38 = param_1;
    if (uVar5 == 0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = param_2;
      FUN_10abd7bf8();
    }
    puStack_50 = (undefined8 *)(uVar5 + lVar6);
    uVar7 = uVar5 + (long)puVar1 * 0x48;
    uVar3 = param_2[4];
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    puStack_50[1] = param_2[1];
    *puStack_50 = uVar10;
    puStack_50[3] = uVar9;
    puStack_50[2] = uVar8;
    puStack_50[4] = uVar3;
    *(undefined4 *)(puStack_50 + 8) = 4;
    puVar1 = puStack_50 + 9;
    uVar4 = (long)puStack_50 + (*param_1 - param_1[1]);
    uStack_58 = uVar5;
    puStack_48 = puVar1;
    uStack_40 = uVar7;
    FUN_10abd7c40(*param_1,param_1[1],uVar4);
    uStack_58 = *param_1;
    *param_1 = uVar4;
    param_1[1] = (ulong)puVar1;
    uStack_40 = param_1[2];
    param_1[2] = uVar7;
    puStack_50 = (undefined8 *)uStack_58;
    puStack_48 = (undefined8 *)uStack_58;
    FUN_10abd7d9c(&uStack_58);
    return puVar1;
  }
  FUN_10abd7be4();
  FUN_10abd7d9c(&uStack_58);
  __Unwind_Resume(param_1);
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x00010a09dbbc(puVar1 + 2);
  lVar6 = puVar1[1];
  puVar1[1] = 0;
  if (lVar6 != 0) {
    FUN_10a1944f0();
  }
  return puVar1;
}



/* Entry: 10abd8188; end: 10abd81af;  */

undefined * FUN_10abd8188(void)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  func_0x00010a09dbbc(puVar1 + 0x10);
  lVar2 = *(long *)(puVar1 + 8);
  *(long *)(puVar1 + 8) = 0;
  if (lVar2 != 0) {
    FUN_10a1944f0();
  }
  return puVar1;
}



/* Entry: 10abd81b0; end: 10abd8297;  */

long FUN_10abd81b0(long param_1)

{
  long lVar1;
  
  func_0x00010a09dbbc(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    FUN_10a1944f0();
  }
  return param_1;
}



/* Entry: 10abd8298; end: 10abd8313;  */

long * FUN_10abd8298(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10abd8314; end: 10abd83a7;  */

undefined1  [16]
FUN_10abd8314(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10abd83a8(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10abd842c(alStack_60,param_1,param_3,param_4,param_5);
    FUN_10abd84d0(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10abd83a8; end: 10abd842b;  */

long * FUN_10abd83a8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, FUN_10a003e3c(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10abd8414;
    }
    plVar2 = plVar4 + 4;
    FUN_10a003e3c(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10abd8414:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10abd842c; end: 10abd84cf;  */

void FUN_10abd842c(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x40;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10abd84d0; end: 10abd870f;  */

void FUN_10abd84d0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10abd8710; end: 10abd8757;  */

void FUN_10abd8710(void)

{
  return;
}



/* Entry: 10abd8758; end: 10abd891b;  */

void FUN_10abd8758(long param_1,long param_2,undefined8 param_3,float *param_4)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = (param_2 - param_1 >> 2) * -0xf0f0f0f0f0f0f0f;
  iVar3 = (int)param_3;
  if ((ulong)(long)iVar3 <= uVar4 && uVar4 - (long)iVar3 != 0) {
    pfVar5 = (float *)(param_1 + (long)iVar3 * 0x44);
    bVar1 = *(byte *)(pfVar5 + 0x10);
    if ((param_1 == 0) || (bVar1 != 0x10)) {
      if (0x11 < bVar1) goto LAB_10abd8918;
    }
    else if (((((*pfVar5 == *param_4) && (pfVar5[1] == param_4[1])) && (pfVar5[2] == param_4[2])) &&
             (((pfVar5[3] == param_4[3] && (pfVar5[4] == param_4[4])) &&
              ((pfVar5[5] == param_4[5] && ((pfVar5[6] == param_4[6] && (pfVar5[7] == param_4[7]))))
              )))) && ((pfVar5[8] == param_4[8] &&
                       (((((pfVar5[9] == param_4[9] && (pfVar5[10] == param_4[10])) &&
                          (pfVar5[0xb] == param_4[0xb])) &&
                         ((pfVar5[0xc] == param_4[0xc] && (pfVar5[0xd] == param_4[0xd])))) &&
                        ((pfVar5[0xe] == param_4[0xe] && (pfVar5[0xf] == param_4[0xf])))))))) {
      return;
    }
    (*(code *)(&PTR_FUN_110c530b8)[bVar1])(pfVar5);
    *(undefined1 *)(pfVar5 + 0x10) = 0x11;
    uVar7 = *(undefined8 *)(param_4 + 2);
    uVar6 = *(undefined8 *)param_4;
    uVar9 = *(undefined8 *)(param_4 + 6);
    uVar8 = *(undefined8 *)(param_4 + 4);
    uVar10 = *(undefined8 *)(param_4 + 8);
    uVar12 = *(undefined8 *)(param_4 + 0xe);
    uVar11 = *(undefined8 *)(param_4 + 0xc);
    *(undefined8 *)(pfVar5 + 10) = *(undefined8 *)(param_4 + 10);
    *(undefined8 *)(pfVar5 + 8) = uVar10;
    *(undefined8 *)(pfVar5 + 0xe) = uVar12;
    *(undefined8 *)(pfVar5 + 0xc) = uVar11;
    *(undefined8 *)(pfVar5 + 2) = uVar7;
    *(undefined8 *)pfVar5 = uVar6;
    *(undefined8 *)(pfVar5 + 6) = uVar9;
    *(undefined8 *)(pfVar5 + 4) = uVar8;
    *(undefined1 *)(pfVar5 + 0x10) = 0x10;
    FUN_10a303694(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glUniformMatrix4fv_11034b8c0)(param_3,1,0,param_4);
    return;
  }
LAB_10abd8918:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10abd891c);
  (*pcVar2)();
}



/* Entry: 10abd891c; end: 10abd89cb;  */

/* WARNING: Possible PIC construction at 0x00010abd894c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010abd8968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010abd8984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010abd896c) */
/* WARNING: Removing unreachable block (ram,0x00010abd8950) */
/* WARNING: Removing unreachable block (ram,0x00010abd8988) */

void FUN_10abd891c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = **(long **)*param_1;
  lVar1 = 0x500;
  __Znwm();
  FUN_10ab8ed3c();
  lVar2 = *(long *)(lVar3 + 0xdc8);
  *(long *)(lVar3 + 0xdc8) = lVar1;
  if (lVar2 != 0) {
    FUN_10a30206c(lVar2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10abd89cc; end: 10abd8a67;  */

long FUN_10abd89cc(long param_1)

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



/* Entry: 10abd8a68; end: 10abd8a73;  */

void FUN_10abd8a68(void)

{
  return;
}



/* Entry: 10abd8a74; end: 10abd8c43;  */

void FUN_10abd8a74(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  plVar6 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar5);
      }
      else if (param_2 <= plVar6) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)param_2;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
      plVar9 = (long *)*plVar4;
      while (plVar9 != (long *)0x0) {
        plVar8 = (long *)plVar9[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar9;
        if (plVar8 != plVar6) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar6 = plVar8;
          }
          else {
            *plVar4 = *plVar9;
            *plVar9 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar9;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar9 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000109ffded8();
  if ((((ulong)plVar4 & 1) != 0) && (*(char *)((long)plVar6 + 0x27) < '\0')) {
    __ZdlPv(plVar6[2]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar6);
  return;
}



/* Entry: 10abd8c44; end: 10abd8c77;  */

void FUN_10abd8c44(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10abd8c78; end: 10abd8eb3;  */

void FUN_10abd8c78(long *param_1,ulong param_2,long *param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x25;
  long lVar16;
  long lVar17;
  
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar10 = uVar15 - 1;
    if ((uVar15 & uVar10) == 0) {
      unaff_x25 = uVar10 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar15 <= param_2) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = param_2 / uVar15;
        }
        unaff_x25 = param_2 - uVar14 * uVar15;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_10abd8d2c;
          uVar14 = plVar12[1];
          if (uVar14 != param_2) break;
          if (plVar12[5] == param_2) {
            return;
          }
        }
        if ((uVar15 & uVar10) == 0) {
          uVar14 = uVar14 & uVar10;
        }
        else if (uVar15 <= uVar14) {
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar14 / uVar15;
          }
          uVar14 = uVar14 - uVar9 * uVar15;
        }
      } while (uVar14 == unaff_x25);
    }
  }
LAB_10abd8d2c:
  plVar12 = (long *)0x48;
  __Znwm();
  puVar1 = (undefined2 *)*param_4;
  puVar3 = (undefined4 *)param_4[1];
  puVar2 = (undefined4 *)param_4[2];
  puVar4 = (undefined4 *)param_4[3];
  lVar17 = param_3[1];
  lVar16 = *param_3;
  lVar11 = param_3[2];
  lVar5 = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  *plVar12 = 0;
  plVar12[1] = param_2;
  plVar12[3] = lVar17;
  plVar12[2] = lVar16;
  plVar12[4] = lVar11;
  plVar12[5] = lVar5;
  uVar6 = *puVar3;
  uVar7 = *puVar2;
  uVar8 = *puVar4;
  *(undefined2 *)(plVar12 + 7) = *puVar1;
  plVar12[6] = (long)&PTR_DAT_110c53158;
  *(undefined4 *)((long)plVar12 + 0x3c) = uVar7;
  *(undefined4 *)(plVar12 + 8) = uVar8;
  *(undefined4 *)((long)plVar12 + 0x44) = uVar6;
  if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar15) {
      uVar10 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar10 = uVar10 | uVar15 << 1;
    uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar15) {
      uVar10 = uVar15;
    }
    FUN_10abd8a74(param_1,uVar10);
    uVar15 = param_1[1];
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x25 = uVar15 - 1 & param_2;
    }
    else {
      unaff_x25 = param_2;
      if (uVar15 <= param_2) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = param_2 / uVar15;
        }
        unaff_x25 = param_2 - uVar10 * uVar15;
      }
    }
  }
  lVar11 = *param_1;
  plVar13 = *(long **)(lVar11 + unaff_x25 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = param_1 + 2;
    *plVar12 = *plVar13;
    *plVar13 = (long)plVar12;
    *(long **)(lVar11 + unaff_x25 * 8) = plVar13;
    if (*plVar12 != 0) {
      uVar10 = *(ulong *)(*plVar12 + 8);
      if ((uVar15 & uVar15 - 1) == 0) {
        uVar10 = uVar10 & uVar15 - 1;
      }
      else if (uVar15 <= uVar10) {
        uVar14 = 0;
        if (uVar15 != 0) {
          uVar14 = uVar10 / uVar15;
        }
        uVar10 = uVar10 - uVar14 * uVar15;
      }
      *(long **)(*param_1 + uVar10 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar13;
    *plVar13 = (long)plVar12;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 10abd8eb4; end: 10abd8f83;  */

void FUN_10abd8eb4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined **appuStack_150 [2];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a10bd84(appuStack_150,param_1);
  appuStack_150[0] = &PTR_FUN_110baa3e8;
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110baa3e8;
  ___cxa_throw(puVar2,&PTR_DAT_110baa3c0,FUN_10a196f18);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abd8f6c);
  (*pcVar1)();
}



/* Entry: 10abd8f84; end: 10abd8f87;  */

void FUN_10abd8f84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd8f88; end: 10abd8fbb;  */

void FUN_10abd8f88(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10abd8fbc; end: 10abd9103;  */

long * FUN_10abd8fbc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
    if ((uVar2 & uVar3) == 0) {
      uVar4 = uVar3 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)*plVar5;
      do {
        if (plVar5 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[5] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar2 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar4) {
            return (long *)0x0;
          }
        }
        plVar5 = (long *)*plVar5;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10abd9104; end: 10abd9123;  */

void FUN_10abd9104(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c531c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd9124; end: 10abd912f;  */

long FUN_10abd9124(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x240);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[3] != 0) {
      plVar1[4] = plVar1[3];
      __ZdlPv();
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)*(long *)(param_1 + 0x178);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010abd95a8(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x168) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x148);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x130);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x118);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x100);
    __ZdlPv();
  }
  FUN_10a276ef4(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10abd9130; end: 10abd91a7;  */

undefined8 * FUN_10abd9130(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    do {
      FUN_10a32069c(param_1,param_2,param_2);
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 10abd91a8; end: 10abd91b7;  */

void FUN_10abd91a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53218;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10abd91b8; end: 10abd91d7;  */

void FUN_10abd91b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53218;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10abd91d8; end: 10abd91e7;  */

void FUN_10abd91d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010abd91e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10abd91e8; end: 10abd923f;  */

long FUN_10abd91e8(long param_1)

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



/* Entry: 10abd9240; end: 10abd92b3;  */

void FUN_10abd9240(long *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c53268;
  FUN_10ab9b660(puVar1 + 3,*param_3,*param_4);
  FUN_10ab9b76c(puVar1 + 0x17,param_3);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}



/* Entry: 10abd92b4; end: 10abd92c3;  */

void FUN_10abd92b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c53268;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


