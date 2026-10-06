/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10014f6e8; end: 10014f707;  */

void FUN_10014f6e8(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  if (*param_2 != 0x7fffffffffffffff) {
    lVar3 = *param_2 - param_2[1];
    if (*(char *)(param_1 + 0x74) == '\x02') {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      ppuVar2 = &PTR_PTR_110cd4a90;
      func_0x000107c2cb80();
      dVar4 = -INFINITY;
      if (-1 < (long)ppuVar2) {
        dVar4 = INFINITY;
      }
      if (1 < (long)ppuVar2 + 0x8000000000000001U) {
        dVar4 = (double)(long)ppuVar2 / 1000000.0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x74) == '\0') {
        *(undefined1 *)(param_1 + 0x74) = 1;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x70) == 1) {
        dVar4 = -INFINITY;
        if (-1 < lVar3) {
          dVar4 = INFINITY;
        }
        if (1 < lVar3 + 0x8000000000000001U) {
          dVar4 = (double)lVar3 / 1000000.0;
        }
        dVar4 = dVar4 * 0.5;
      }
      else {
        dVar4 = 0.0;
      }
    }
    func_0x000107c60834(dVar4,uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c60734();
    if (lVar3 + 0x8000000000000001U < 2) {
      dVar5 = -INFINITY;
      if (-1 < lVar3) {
        dVar5 = INFINITY;
      }
    }
    else {
      dVar5 = (double)lVar3 / 1000000.0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdba748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRunLoopTimerSetNextFireDate_11034a810)(dVar4 + dVar5,uVar1);
    return;
  }
  return;
}



/* Entry: 10014f708; end: 10014f85f;  */

void FUN_10014f708(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  double dVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 0x74) == '\x02') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar2 = &PTR_PTR_110cd4a90;
    func_0x000107c2cb80();
    dVar3 = -INFINITY;
    if (-1 < (long)ppuVar2) {
      dVar3 = INFINITY;
    }
    if (1 < (long)ppuVar2 + 0x8000000000000001U) {
      dVar3 = (double)(long)ppuVar2 / 1000000.0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x74) == '\0') {
      *(undefined1 *)(param_1 + 0x74) = 1;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x70) == 1) {
      dVar3 = -INFINITY;
      if (-1 < param_2) {
        dVar3 = INFINITY;
      }
      if (1 < param_2 + 0x8000000000000001U) {
        dVar3 = (double)param_2 / 1000000.0;
      }
      dVar3 = dVar3 * 0.5;
    }
    else {
      dVar3 = 0.0;
    }
  }
  func_0x000107c60834(dVar3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c60734();
  if (param_2 + 0x8000000000000001U < 2) {
    dVar4 = -INFINITY;
    if (-1 < param_2) {
      dVar4 = INFINITY;
    }
  }
  else {
    dVar4 = (double)param_2 / 1000000.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdba748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRunLoopTimerSetNextFireDate_11034a810)(dVar3 + dVar4,uVar1);
  return;
}



/* Entry: 10014f860; end: 10014f8a3;  */

undefined8 * FUN_10014f860(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      func_0x000107c60e14(piVar4);
    }
  }
  return param_1;
}



/* Entry: 10014f8a4; end: 10014f8d7;  */

void FUN_10014f8a4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10014f8d8; end: 10014f8df;  */

void FUN_10014f8d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126a7010;
  func_0x000107c61168(PTR_PTR_1126a7010,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c4ac7c();
  func_0x000107c61180();
  FUN_100083b20(&uStack_48);
  uVar1 = uStack_48;
  FUN_100083b20(&uStack_48);
  puVar3 = PTR_PTR_1126a7018;
  func_0x000107c610f8();
  func_0x000107c45ea4();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uStack_48);
  *param_1 = puVar3;
  return;
}



/* Entry: 10014f8e0; end: 10014f98f;  */

void FUN_10014f8e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126a7010;
  func_0x000107c61168(PTR_PTR_1126a7010);
  func_0x000107c4ac7c();
  func_0x000107c61180();
  FUN_100083b20(&uStack_48);
  uVar1 = uStack_48;
  FUN_100083b20(&uStack_48);
  puVar3 = PTR_PTR_1126a7018;
  func_0x000107c610f8();
  func_0x000107c45ea4();
  func_0x000107c61170(puVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c615e8(uStack_48);
  *param_1 = puVar3;
  return;
}



/* Entry: 10014f990; end: 10014f9e3; +[SCGrapheneNativeProcessor lazyNativeGraphene] */

void FUN_10014f990(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136bd3f8 != -1) {
    FUN_10002a2fc(0x1136bd3f8,&PTR___NSConcreteGlobalBlock_1108a55e0);
  }
  uVar1 = uRam00000001136bd3f0;
  func_0x000107c61174(uRam00000001136bd3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10014f9e4; end: 10014fb33;  */

ulong FUN_10014f9e4(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uVar7 = param_1;
  func_0x000107c49d0c();
  if (((uVar7 & 1) == 0) && (uVar7 = param_2, func_0x000107c49d0c(), (uVar7 & 1) == 0)) {
    lStack_60 = 0;
    uStack_58 = 0;
    uVar7 = param_1;
    FUN_10014fb70(param_1,&uStack_58,&lStack_60);
    uVar4 = uStack_58;
    func_0x000107c61174(uStack_58);
    lVar3 = lStack_60;
    func_0x000107c61174(lStack_60);
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uStack_70 = 0;
      uStack_68 = 0;
      uVar7 = param_2;
      FUN_10014fb70(param_2,&uStack_68,&uStack_70);
      uVar2 = uStack_68;
      func_0x000107c61174(uStack_68);
      uVar1 = uStack_70;
      func_0x000107c61174(uStack_70);
      if ((int)uVar7 != 0) {
        uVar5 = uVar4;
        func_0x000107c49d0c();
        if ((int)uVar5 == 0) {
          uVar7 = 0;
        }
        else {
          lVar6 = lVar3;
          func_0x000107c3fec4(lVar3);
          uVar7 = (ulong)(lVar6 != -1);
        }
      }
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
  }
  else {
    uVar7 = 0;
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return uVar7;
}



/* Entry: 10014fb34; end: 10014fb6f;  */

void FUN_10014fb34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108a5620);
  func_0x000107c61180();
  uVar1 = puRam00000001136bd3f0;
  puRam00000001136bd3f0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10014fb70; end: 10014fc37;  */

undefined * FUN_10014fb70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x000107c518a4(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,param_1);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x000107c413f4(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c51894();
  func_0x000107c61170(puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x000107c4b5e8(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c51894(puVar1);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 10014fc38; end: 10014fc3f;  */

void FUN_10014fc38(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10014fc40; end: 10014fddf; -[SCGrapheneManager initWithCollector:performerProvider:flipper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10014fc40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_1126e9838;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127272cc) = 0;
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127272d0) = 0;
    lVar4 = (long)_DAT_1127272d4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127272d8;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_1127272dc;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127272e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127272e0) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127272e4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127272e4) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127272e8);
    *(undefined ***)((long)puVar1 + (long)_DAT_1127272e8) = &PTR___NSConcreteGlobalBlock_1108a5510;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127272ec);
    *(undefined ***)((long)puVar1 + (long)_DAT_1127272ec) = &PTR___NSConcreteGlobalBlock_1108a5530;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x000107c4e60c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127272f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127272f0) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c40aa4(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x000107c611b0();
    func_0x000107c4dcf8(puVar1);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10014fde0; end: 10014ff6b; -[SCLazy createNow] */

void FUN_10014fde0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c611ec(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1c) != '\x02') {
    *(undefined1 *)(param_1 + 0x1c) = 2;
    lVar2 = *(long *)(param_1 + 8);
    (**(code **)(lVar2 + 0x10))();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    func_0x000107c61170(uVar6);
  }
  puVar7 = *(undefined **)(param_1 + 8);
  func_0x000107c61174(puVar7);
  lVar8 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar8);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x000107c61170(uVar6);
  func_0x000107c611f0(param_1 + 0x18);
  func_0x000107c61174(lVar8);
  lVar2 = lVar8;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar8);
      }
      (**(code **)(*(long *)(lVar9 * 8) + 0x10))(*(long *)(lVar9 * 8),puVar7);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = lVar8;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar8);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    func_0x000107c60e78();
    func_0x000107c611f0(0x18);
    func_0x000107c60bd8(lVar8);
    puVar3 = PTR_PTR_1126bc8c0;
    func_0x000107c610f4(PTR_PTR_1126bc8c0);
    puVar7 = PTR_PTR_1126b0380;
    func_0x000107c3dec4(PTR_PTR_1126b0380);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b0380;
    func_0x000107c51944();
    func_0x000107c61180();
    func_0x000107c45a90(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    puVar4 = PTR_PTR_1126bc8c8;
    func_0x000107c610f4(PTR_PTR_1126bc8c8);
    func_0x000107c45a80();
    puVar7 = PTR_PTR_1126bc8d0;
    func_0x000107c440bc(PTR_PTR_1126bc8d0);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10014ff6c; end: 100150067;  */

void FUN_10014ff6c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126bc8c0;
  func_0x000107c610f4(PTR_PTR_1126bc8c0);
  puVar3 = PTR_PTR_1126b0380;
  func_0x000107c3dec4(PTR_PTR_1126b0380);
  func_0x000107c61180();
  ppuVar4 = (undefined **)PTR_PTR_1126b0380;
  func_0x000107c51944();
  func_0x000107c61180();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df4118;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  func_0x000107c45a90(puVar2,param_2,puVar3,ppuVar1,2,
                      &PTR____CFConstantStringClassReference_110df40f8);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126bc8c8;
  func_0x000107c610f4(PTR_PTR_1126bc8c8);
  func_0x000107c45a80();
  puVar5 = PTR_PTR_1126bc8d0;
  func_0x000107c440bc(PTR_PTR_1126bc8d0,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100150068; end: 1001500bb; +[SCAPIUserAgentHelper appVersion] */

void FUN_100150068(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fc298 != -1) {
    FUN_10002a2fc(0x1137fc298,&PTR___NSConcreteGlobalBlock_110d66ab8);
  }
  uVar1 = uRam00000001137fc290;
  func_0x000107c61174(uRam00000001137fc290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1001500bc; end: 100150167;  */

/* WARNING: Possible PIC construction at 0x000100150148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010015014c) */

void FUN_1001500bc(undefined *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60760();
  func_0x000107c60764();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    func_0x000107c4539c();
    func_0x000107c61180();
    func_0x000107c4d9c0();
    func_0x000107c61180();
    uVar2 = puRam00000001137fc290;
    puRam00000001137fc290 = puVar1;
  }
  else {
    func_0x000107c61174();
    uVar2 = puRam00000001137fc290;
    puRam00000001137fc290 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100150168; end: 1001501a7;  */

undefined1 FUN_100150168(void)

{
  if (lRam00000001137fe8c8 != -1) {
    FUN_10002a2fc(0x1137fe8c8,&PTR___NSConcreteGlobalBlock_110da0268);
  }
  return uRam00000001137fe8c0;
}



/* Entry: 1001501a8; end: 1001501cb; +[SCAPIUserAgentHelper schemeName] */

undefined ** FUN_1001501a8(int param_1)

{
  undefined **ppuVar1;
  
  FUN_100150168();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f9c838;
  if (param_1 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



/* Entry: 1001501cc; end: 1001503b7;  */

void FUN_1001501cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10f8381da;
  func_0x000107c60f50(&UNK_10f8381da,0);
  puVar2 = puVar1;
  func_0x000107c60f34();
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_100150448;
  uStack_40 = 0x1001545e4;
  uStack_38 = 0;
  puStack_58 = &uStack_60;
  func_0x000107c60f38();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1001506dc;
  puStack_78 = &UNK_11084b9d0;
  puStack_68 = &uStack_60;
  func_0x000107c61174(puVar2);
  puStack_70 = puVar2;
  FUN_10007380c(puVar1,&puStack_90);
  uVar3 = 0;
  func_0x000107c60f94(0,50000000);
  puVar6 = puVar2;
  func_0x000107c60f40(puVar2,uVar3);
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  if (puVar6 == (undefined *)0x0) {
    puVar6 = (undefined *)puStack_58[5];
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c61174(puVar6);
      goto LAB_1001502dc;
    }
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c3de88();
    func_0x000107c61180();
  }
  else {
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c3de88();
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar5);
LAB_1001502dc:
  puVar5 = puVar6;
  func_0x000107c4e430();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    uRam00000001137fe8c0 = false;
  }
  else {
    puVar4 = puVar5;
    func_0x000107c4f890();
    uRam00000001137fe8c0 = puVar4 != (undefined *)0x7fffffffffffffff;
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puStack_70);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1001503b8; end: 1001503e3; -[SCCameraHardwareConfigurationImpl cameraDevicePositionExpirationInterval] */

double FUN_1001503b8(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = -1.0;
  func_0x000107c436e4(0xbf800000,*(undefined8 *)(param_1 + 0x10),param_2,
                      &PTR____CFConstantStringClassReference_110dd0c58,0);
  return (double)fVar1;
}



/* Entry: 1001503e4; end: 100150447; -[SCAppStartExperimentReader floatValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

undefined8 FUN_1001503e4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3cda4();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c436dc(param_2);
    param_1 = uVar1;
  }
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100150448; end: 100150457;  */

void FUN_100150448(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100150458; end: 10015055f;  */

undefined8 FUN_100150458(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_1;
  func_0x000107c61174();
  if (0.0 < param_1) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3e814();
    func_0x000107c61170(puVar1);
    func_0x000107c42230(param_2,param_3,&PTR____CFConstantStringClassReference_110f2d3f8);
    puVar1 = PTR_PTR_1126ae4e8;
    dVar4 = dVar3;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c42888();
    func_0x000107c61170(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    func_0x000107c61170(puVar1);
    if ((0.0 < dVar3) && (param_1 < dVar4 - dVar3)) {
      uVar2 = 0;
      goto LAB_10015053c;
    }
  }
  uVar2 = param_2;
  FUN_100150560(param_2);
LAB_10015053c:
  func_0x000107c61170(param_2);
  return uVar2;
}



/* Entry: 100150560; end: 1001505ff;  */

undefined8 FUN_100150560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c61174();
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  uVar2 = param_1;
  func_0x000107c4981c(param_1,param_2,&PTR____CFConstantStringClassReference_110f2d3d8);
  func_0x000107c61170(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  return uVar2;
}



/* Entry: 100150600; end: 1001506db; -[SCPreferences integerForKey:] */

ulong FUN_100150600(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x000107c4d9c0();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar5 = param_1;
  func_0x000107c6115c(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_1;
  if (uVar1 == 0) {
    func_0x000107c61174(param_1);
    func_0x000107c61158(puVar3);
    uVar4 = param_1;
    func_0x000107c6115c(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    if (uVar2 == 0) {
      uVar5 = 0;
    }
    else {
      func_0x000107c49820(param_1);
    }
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c49820(param_1);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return uVar5;
}



/* Entry: 1001506dc; end: 10015073f;  */

void FUN_1001506dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126e3258;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3de88();
  func_0x000107c61180();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100150740; end: 1001507c3; +[SCAppEnvironmentBindings shared] */

void FUN_100150740(void)

{
  if (lRam000000011369a740 != -1) {
    func_0x000107c61568(0x11369a740,0x1001507a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113815540);
  return;
}



/* Entry: 1001507c4; end: 10015080f; -[SCAppEnvironmentBindings init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001507c4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_11309c178);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100150810; end: 1001508e3; -[SCAppEnvironmentBindings appStoreReceiptURL] */

void FUN_100150810(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x000107c61174(param_1);
  FUN_1001508e4(puVar4);
  func_0x000107c61170(param_1);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1001508e4; end: 100150a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001508e4(undefined8 param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = 0x112d36580;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar3 - extraout_x12;
  pcVar5 = *(code **)(unaff_x20 + _DAT_11309c178);
  if (pcVar5 == (code *)0x0) {
    lVar6 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar4,1,1,lVar6);
  }
  else {
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_11309c178))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar5)(auStack_68);
    FUN_100a13d7c(pcVar5,uVar2);
    FUN_1000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(lVar4,uStack_50,lStack_48);
    func_0x0001000834e4(auStack_68);
  }
  FUN_1001021cc(lVar4,puVar3);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar5 = *(code **)(lVar6 + 0x30);
  puVar1 = puVar3;
  (*pcVar5)(puVar3,1,lVar4);
  if ((int)puVar1 == 1) {
    (**(code **)(lVar6 + 0x38))(param_1,1,1,lVar4);
    puVar1 = puVar3;
    (*pcVar5)(puVar3,1,lVar4);
    if ((int)puVar1 != 1) {
      func_0x0001000293e4(puVar3);
    }
  }
  else {
    (**(code **)(lVar6 + 0x20))(param_1,puVar3,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
  }
  return;
}



/* Entry: 100150aa0; end: 100150aaf; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices cameraHardwareServicesAPIImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100150aa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074f60));
  return;
}



/* Entry: 100150ab0; end: 100150ad7; -[SCCameraHardwareServicesAPIImpl startupCaptureHardwareWarmer] */

void FUN_100150ab0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100150ad8; end: 100150ae7; -[_TtC24SCCameraHardwareServices24SCCameraHardwareServices managedCaptureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100150ad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074f70));
  return;
}



/* Entry: 100150ae8; end: 100150bd3; -[SCStartupCaptureHardwareWarmerImpl warmupCaptureHardwareForNormalColdStart:managedCaptureSession:completion:] */

void FUN_100150ae8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_5);
  func_0x000107c4e524(uVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100150bd4; end: 100150c0b;  */

void FUN_100150bd4(long param_1,long param_2)

{
  func_0x000107c60bc8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 100150c0c; end: 100150d23; -[SCNGrapheneApplicationInformation initWithBuild:flavor:osType:variant:] */

undefined1 *
FUN_100150c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_11270b128;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    FUN_100150d24(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    FUN_100150d24(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_100150d24(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100150d24; end: 100150d2b;  */

void FUN_100150d24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100150d2c; end: 100150df3;  */

/* WARNING: Possible PIC construction at 0x000100150dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100150dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100150dc4) */
/* WARNING: Removing unreachable block (ram,0x000100150dd4) */

void FUN_100150d2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    param_1 = param_1 + 0x30;
    func_0x000107c61148(param_1);
    puVar2 = PTR_PTR_1126b00d0;
    puVar1 = PTR_PTR_1126b5a50;
    func_0x000107c43838(PTR_PTR_1126b5a50);
    func_0x000107c5bc44(puVar2,param_2,puVar1,0);
    func_0x000107c61180();
    func_0x000107c5c2bc(param_1,param_2,puVar2);
    func_0x000107c61180();
    func_0x000107c5362c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100150df4; end: 100150dfb; +[SCCameraHardwareAvailabilityOptions foreground] */

undefined8 FUN_100150df4(void)

{
  return 1;
}



/* Entry: 100150dfc; end: 100150e6b; +[SCCameraHardwareRequest startWithAvailabilityOptions:streamingDelegate:] */

void FUN_100150dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126b00d0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100150e6c; end: 100150f47;  */

/* WARNING: Possible PIC construction at 0x000100150f0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100150f10) */

void FUN_100150e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9d80;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c464c4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100150f48; end: 100151063; -[SCCameraHardwareStartOperation initWithDelegate:managedCaptureSession:cameraHardwareResource:deviceSubjectAreaHandler:availabilityOptions:systemConfiguration:streamingDelegate:featureStartupEventBus:applicationState:appStartExperimentReader:managedCapturerDeviceManager:] */

undefined8
FUN_100150f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  uVar1 = param_3;
  FUN_1001511b8(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                param_13);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c615e8(param_9);
  return uVar1;
}



/* Entry: 100151064; end: 1001511b7; -[SCNGrapheneStartupConfiguration initWithBufferSizeBytes:reservoirSize:appInfo:partitions:partitionOverridesForUpload:metricNames:] */

undefined1 *
FUN_100151064(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_11270b158;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_100151334(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    FUN_100151334(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    FUN_100151334(uVar3);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1001511b8; end: 100151333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001511b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112dd8858;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8858,0);
  lVar3 = _DAT_112dd8860;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8860,0);
  lVar4 = _DAT_112dd8868;
  func_0x000107c61614(unaff_x20 + _DAT_112dd8868,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  func_0x000107c61604(unaff_x20 + lVar3,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8870) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8878) = param_5;
  func_0x000107c61604(unaff_x20 + lVar4,param_7);
  *(undefined8 *)(unaff_x20 + _DAT_112dd8880) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8888) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8890) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112dd8898) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112dd88a0) = param_11;
  puVar1 = PTR_s_initWithDelegate__1125e0280;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar1,param_1);
  return;
}



/* Entry: 100151334; end: 10015133b;  */

void FUN_100151334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10015133c; end: 10015144b; +[SCNGrapheneClientMetricsProcessor getInstance:] */

void FUN_10015133c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  undefined ***pppuVar1;
  long lStack_e8;
  long lStack_e0;
  long lStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  
  func_0x000107c61174(param_3);
  FUN_10015144c();
  FUN_100151458();
  FUN_100151bb4(&lStack_48,&lStack_e8);
  FUN_10015bff4(&lStack_e8);
  if (lStack_48 == 0) {
    pppuVar1 = (undefined ***)0x0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb8a0;
    lStack_e8 = lStack_48;
    lStack_e0 = lStack_40;
    if (lStack_40 != 0) {
      do {
        FUN_10015c18c();
      } while (extraout_w10 != 0);
    }
    pppuVar1 = &ppuStack_38;
    FUN_10015c218(pppuVar1,&lStack_e8,FUN_10015c4b0);
    func_0x000107c61180();
    FUN_1000df524(&lStack_e8);
  }
  func_0x00010015c5e4(&lStack_48);
  func_0x00010015cacc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar1);
  return;
}



/* Entry: 10015144c; end: 100151457;  */

void FUN_10015144c(void)

{
  return;
}



/* Entry: 100151458; end: 100151607;  */

void FUN_100151458(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [80];
  
  func_0x000107c61174();
  uVar1 = param_2;
  func_0x000107c3ecbc(param_2);
  uVar2 = param_2;
  func_0x000107c504e4(param_2);
  uVar3 = param_2;
  func_0x000107c3ddc8(param_2);
  func_0x000107c61180();
  FUN_100151620(auStack_a0);
  uVar4 = param_2;
  func_0x000107c4e3b4(param_2);
  func_0x000107c61180();
  FUN_1000fbed0(auStack_b8);
  uVar5 = param_2;
  func_0x000107c4e3b0(param_2);
  func_0x000107c61180();
  FUN_1000fbed0(auStack_d0);
  func_0x000107c4ce74(param_2);
  func_0x000107c61180();
  FUN_1001517d8(auStack_e8);
  func_0x000100151a28(param_1,uVar1,uVar2,auStack_a0,auStack_b8,auStack_d0,auStack_e8);
  FUN_100151b50(auStack_e8);
  func_0x000107c61170(param_2);
  FUN_1000e30f4(auStack_d0);
  func_0x000107c61170(uVar5);
  FUN_1000e30f4(auStack_b8);
  func_0x000107c61170(uVar4);
  func_0x000100151b84(auStack_a0);
  func_0x000107c61170(uVar3);
  func_0x000100151a20();
  return;
}



/* Entry: 100151608; end: 10015160f; -[SCNGrapheneStartupConfiguration bufferSizeBytes] */

undefined4 FUN_100151608(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 100151610; end: 100151617; -[SCNGrapheneStartupConfiguration reservoirSize] */

undefined4 FUN_100151610(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 100151618; end: 10015161f; -[SCNGrapheneStartupConfiguration appInfo] */

undefined8 FUN_100151618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100151620; end: 10015178f;  */

void FUN_100151620(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174();
  func_0x000107c3ecc8(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_58);
  uVar1 = param_2;
  func_0x000107c436b4(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_70);
  uVar2 = param_2;
  func_0x000107c4e0cc();
  func_0x000107c5dc88(param_2);
  func_0x000107c61180();
  FUN_1000fbca4(&uStack_88);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[5] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(int *)(param_1 + 6) = (int)uVar2;
  param_1[8] = uStack_80;
  param_1[7] = uStack_88;
  param_1[9] = uStack_78;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x000107c60ca0(&uStack_88);
  func_0x000107c61170(param_2);
  func_0x000107c60ca0(&uStack_70);
  func_0x000107c61170(uVar1);
  func_0x000107c60ca0(&uStack_58);
  func_0x0001001517b0();
  func_0x0001001517b8();
  return;
}



/* Entry: 100151790; end: 100151797; -[SCNGrapheneApplicationInformation build] */

undefined8 FUN_100151790(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100151798; end: 10015179f; -[SCNGrapheneApplicationInformation flavor] */

undefined8 FUN_100151798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1001517a0; end: 1001517a7; -[SCNGrapheneApplicationInformation osType] */

undefined8 FUN_1001517a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1001517a8; end: 1001517bf; -[SCNGrapheneApplicationInformation variant] */

undefined8 FUN_1001517a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1001517c0; end: 1001517c7; -[SCNGrapheneStartupConfiguration partitions] */

undefined8 FUN_1001517c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1001517c8; end: 1001517cf; -[SCNGrapheneStartupConfiguration partitionOverridesForUpload] */

undefined8 FUN_1001517c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1001517d0; end: 1001517d7; -[SCNGrapheneStartupConfiguration metricNames] */

undefined8 FUN_1001517d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1001517d8; end: 100151953;  */

void FUN_1001517d8(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 *unaff_x22;
  long lVar7;
  undefined1 *puVar8;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  undefined8 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = param_2;
  func_0x000107c40808();
  FUN_100151954(param_1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  func_0x000107c61174();
  FUN_100151a0c();
  if (puVar2 != (undefined1 *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          func_0x000107c61128(param_2);
        }
        unaff_x22 = *(undefined1 **)(lStack_118 + (long)puVar8 * 8);
        func_0x000107c61174(unaff_x22);
        FUN_1000fbed0(auStack_138,unaff_x22);
        puVar1 = auStack_138;
        func_0x000107c2be04(param_1);
        FUN_1000e30f4(auStack_138);
        puVar3 = unaff_x22;
        func_0x000107c61170();
        puVar8 = puVar8 + 1;
      } while (puVar8 < puVar2);
      FUN_100151a0c();
      puVar2 = puVar3;
    } while (puVar3 != (undefined1 *)0x0);
  }
  plVar4 = (long *)0x0;
  func_0x000100151a20();
  func_0x000100151a20();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100151a20();
  FUN_100151b50(param_1);
  func_0x000100151a20();
  plVar5 = plVar4;
  func_0x000107c60bd8();
  pcStack_148 = FUN_100151954;
  lVar7 = *plVar5;
  if ((undefined1 *)((plVar5[2] - lVar7 >> 3) * -0x5555555555555555) < puVar1) {
    puStack_170 = unaff_x22;
    plStack_168 = plVar4;
    puStack_160 = param_1;
    puStack_158 = param_2;
    puStack_150 = &stack0xfffffffffffffff0;
    if ((undefined1 *)0xaaaaaaaaaaaaaaa < puVar1) {
      func_0x000107c2b08c();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_2,PTR_s_countByEnumeratingWithState_obje_1125b2440,&lStack_180,auStack_138,
                 0x10);
      return;
    }
    lVar6 = plVar5[1];
    plVar4 = plVar5;
    plStack_178 = plVar5;
    func_0x000107c2b090();
    lVar7 = (long)plVar4 + (lVar6 - lVar7);
    lVar6 = lVar7 - (plVar5[1] - *plVar5);
    func_0x000107c610b4(lVar6);
    lStack_198 = *plVar5;
    *plVar5 = lVar6;
    plVar5[1] = lVar7;
    lStack_180 = plVar5[2];
    plVar5[2] = (long)(plVar4 + (long)puVar1 * 3);
    lStack_190 = lStack_198;
    lStack_188 = lStack_198;
    func_0x000107f4e37c(&lStack_198);
  }
  return;
}



/* Entry: 100151954; end: 100151a0b;  */

void FUN_100151954(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000107c2b08c();
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    lVar3 = param_1[1];
    plVar1 = param_1;
    plStack_38 = param_1;
    func_0x000107c2b090();
    lVar2 = (long)plVar1 + (lVar3 - lVar2);
    lVar3 = lVar2 - (param_1[1] - *param_1);
    func_0x000107c610b4(lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar1 + param_2 * 3);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000107f4e37c(&lStack_58);
  }
  return;
}



/* Entry: 100151a0c; end: 100151adf;  */

void FUN_100151a0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf52a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100151ae0; end: 100151b4f;  */

void FUN_100151ae0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar3 != lVar4) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        FUN_10007e5dc(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    func_0x000107c60e14(lVar1);
  }
  return;
}



/* Entry: 100151b50; end: 100151bb3;  */

undefined8 FUN_100151b50(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_100151ae0(&uStack_28);
  return param_1;
}



/* Entry: 100151bb4; end: 100151c5b;  */

void FUN_100151bb4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lStack_30;
  undefined8 *puStack_28;
  
  lVar1 = param_2;
  FUN_100077f84();
  puVar2 = (undefined8 *)0x20;
  lStack_30 = lVar1;
  func_0x000107c60e20();
  *puVar2 = &PTR_DAT_110cf0420;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0x11383d788;
  puStack_28 = puVar2;
  lVar1 = 0x11383d788;
  if (*(int *)(param_2 + 0x38) != 0) {
    FUN_100151c68(0x11383d788,param_2);
    lVar1 = lStack_30;
  }
  *param_1 = lVar1;
  param_1[1] = (long)puStack_28;
  lStack_30 = 0;
  puStack_28 = (undefined8 *)0x0;
  FUN_10015bfcc(&lStack_30);
  return;
}



/* Entry: 100151c5c; end: 100151c67;  */

void FUN_100151c5c(void)

{
  return;
}



/* Entry: 100151c68; end: 100151d7f;  */

void FUN_100151c68(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  FUN_100151c5c();
  func_0x000107c60c94(auStack_80,param_2 + 0x20);
  func_0x000107c60c94(auStack_98,unaff_x19 + 0x40);
  FUN_100151ff0(auStack_68,auStack_80,auStack_98,unaff_x19 + 8,*(undefined4 *)(unaff_x19 + 0x38));
  FUN_10015bc1c(unaff_x20 + 0xa0,auStack_68);
  func_0x00010015bc58(auStack_68);
  func_0x000107c60ca0(auStack_98);
  func_0x000107c60ca0(auStack_80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  FUN_10015bc98(auStack_b0,unaff_x19 + 0x58);
  FUN_10015bc98(auStack_c8,unaff_x19 + 0x70);
  FUN_10015bd98(auStack_e0,unaff_x19 + 0x88);
  FUN_10015be08(uVar1,auStack_b0,auStack_c8,auStack_e0);
  FUN_100151b50(auStack_e0);
  FUN_1000e30f4(auStack_c8);
  FUN_1000e30f4(auStack_b0);
  return;
}



/* Entry: 100151d80; end: 100151db3;  */

undefined8 FUN_100151d80(undefined8 param_1)

{
  func_0x000107c60dac();
  FUN_100152090();
  return param_1;
}



/* Entry: 100151db4; end: 100151e23;  */

long FUN_100151db4(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100151d80();
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x24) = 0;
  *(undefined8 *)(lVar1 + 0x1c) = 0;
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined8 *)(lVar1 + 0x2c) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  lVar1 = param_2;
  func_0x000107c613d0(param_2);
  FUN_1001521f0(param_1,param_2,param_2 + lVar1);
  return param_1;
}



/* Entry: 100151e24; end: 100151fef;  */

undefined1  [16] FUN_100151e24(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_138 [24];
  undefined1 *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [72];
  
  FUN_100151db4(auStack_a8,&UNK_10f773b9d,0);
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_118 = 0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_ff = 0;
  uStack_107 = 0;
  uStack_100 = 0;
  func_0x0001001534c8(param_1,&puStack_120,auStack_a8,0);
  if ((int)param_1 != 0) {
    uVar2 = (lStack_118 - (long)puStack_120) / 0x18;
    puVar4 = puStack_120;
    lVar3 = -1;
    while (lVar6 = lVar3, lVar6 != 3) {
      pcVar1 = puVar4 + 0x28;
      if (uVar2 <= lVar6 + 2U) {
        pcVar1 = (char *)((long)&uStack_ff + 7);
      }
      puVar4 = puVar4 + 0x18;
      lVar3 = lVar6 + 1;
      if (*pcVar1 == '\x01') {
        if (uVar2 <= lVar6 + 2U) {
          puVar4 = &uStack_108;
        }
        func_0x00010015b1f8(auStack_138,puVar4);
        uVar5 = 0;
        func_0x000107c60d84(auStack_138,0,10);
        puVar4 = auStack_138;
        func_0x000107c60ca0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000100151f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e5b46f5)[lVar6] * 4 + 0x100151f40))();
        auVar7._8_8_ = uVar5;
        auVar7._0_8_ = puVar4;
        return auVar7;
      }
    }
  }
  FUN_10015b3ec(&puStack_120);
  FUN_10015b424(auStack_a8);
  return ZEXT816(0);
}



/* Entry: 100151ff0; end: 100152083;  */

undefined8 *
FUN_100151ff0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_100151e24();
  param_1[6] = param_4;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = param_5;
  FUN_10015b950(param_1,0x10);
  func_0x00010015b954(param_1 + 3,0x10);
  return param_1;
}



/* Entry: 100152084; end: 10015208f;  */

void FUN_100152084(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_110346100)
            (param_1,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  return;
}



/* Entry: 100152090; end: 1001520bb;  */

void FUN_100152090(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100152084();
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = param_1;
  FUN_1001520bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1001520bc; end: 1001520d7;  */

void FUN_1001520bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_110346100)
            (param_1,PTR___ZNSt3__17collateIcE2idE_110346888);
  return;
}



/* Entry: 1001520d8; end: 1001521ef;  */

/* WARNING: Possible PIC construction at 0x00010688f468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010688f4a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010688f3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010688f414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f3e0) */
/* WARNING: Removing unreachable block (ram,0x00010688f4a4) */
/* WARNING: Removing unreachable block (ram,0x00010688f46c) */
/* WARNING: Removing unreachable block (ram,0x00010688f418) */

long * FUN_1001520d8(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x29;
  undefined *unaff_x30;
  undefined8 *in_stack_00000050;
  undefined *in_stack_00000058;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = (long *)0x8;
  func_0x000107c60e20();
  *plVar3 = (long)&PTR_DAT_110945880;
  plVar4 = (long *)0x10;
  func_0x000107c60e20();
  *plVar4 = (long)&PTR_DAT_110945950;
  plVar4[1] = (long)plVar3;
  plVar5 = (long *)(param_1 + 0x28);
  FUN_100152228();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  if (uVar1 == 0) {
    func_0x000100152308();
    func_0x000100152318();
    FUN_1001525d0();
    plVar4 = plVar5;
    if (plVar5 == unaff_x23) {
      func_0x000106890c34();
    }
    while ((plVar3 = plVar4, plVar5 != unaff_x19 && ((char)*plVar5 == '|'))) {
      func_0x000106890cf0();
      FUN_1001525d0();
      plVar4 = plVar3;
      if (plVar3 == unaff_x24) {
        func_0x000106890c34();
      }
      func_0x000106890c28();
      func_0x000106887af4();
      plVar5 = plVar3;
    }
    return plVar5;
  }
  if (uVar1 == 0x10) {
    func_0x000100152308();
    puVar2 = (undefined1 *)register0x00000008;
    plVar7 = param_3;
    goto code_r0x00010688f2ac;
  }
  plVar7 = unaff_x19;
  if ((uVar1 == 0x20) || (uVar1 == 0x40)) {
    func_0x000100152308();
    plVar3 = plVar5;
  }
  else {
    if (uVar1 == 0x80) {
      func_0x000100152308();
      puVar2 = (undefined1 *)register0x00000008;
      plVar3 = plVar5;
      goto code_r0x00010688f3b0;
    }
    if (uVar1 != 0x100) {
      func_0x0001068879ec();
      (**(code **)(*plVar3 + 8))();
      func_0x000106890c60();
      lStack_50 = param_2;
      plStack_48 = plVar5;
      FUN_1001520d8();
      if (plVar3 != param_3) {
        func_0x000106887738();
        return &lStack_50;
      }
      return plVar3;
    }
    func_0x000100152308();
    func_0x000100152c84();
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
    func_0x000100152318();
    func_0x000106890c00();
    if (plVar5 == unaff_x23) {
      plVar3 = plVar5;
      func_0x000106890c34();
      unaff_x23 = plVar5;
      while( true ) {
        unaff_x22 = plVar3;
        if (unaff_x23 != unaff_x19) {
          unaff_x23 = (long *)((long)unaff_x23 + 1);
        }
        if (unaff_x23 == unaff_x19) {
          return unaff_x23;
        }
        func_0x000106890c70();
        unaff_x24 = (long *)unaff_x20[7];
        if (unaff_x22 != unaff_x23) break;
        plVar3 = unaff_x22;
        func_0x000106890c34();
        func_0x000106890c28();
        func_0x000106887af4();
        param_3 = unaff_x24;
        unaff_x23 = unaff_x22;
      }
      plVar3 = unaff_x22;
      func_0x000106890c18();
      unaff_x30 = &UNK_10688f4a4;
      unaff_x29 = &stack0x00000050;
    }
    else {
      plVar3 = plVar5;
      func_0x000106890c18();
      unaff_x30 = &UNK_10688f46c;
      unaff_x22 = plVar5;
      unaff_x29 = &stack0x00000050;
    }
  }
  while( true ) {
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = plVar7;
    *(undefined8 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *)((long)register0x00000008 + -0x10);
    func_0x000100152318();
    func_0x0001068907ac();
    plVar5 = plVar3;
    plVar6 = plVar3;
    if (plVar3 != unaff_x23) {
      while( true ) {
        plVar3 = plVar5;
        if (plVar6 == plVar7) {
          return plVar6;
        }
        if ((char)*plVar6 != '|') {
          return plVar6;
        }
        func_0x000106890cf0();
        func_0x0001068907ac();
        if (plVar3 == unaff_x24) break;
        plVar5 = plVar3;
        func_0x000106890c28();
        param_3 = unaff_x23;
        func_0x000106887af4();
        plVar6 = plVar3;
      }
    }
    unaff_x30 = &LAB_10688f3b0;
    func_0x00010688ad94();
    unaff_x19 = plVar7;
code_r0x00010688f3b0:
    func_0x000100152c84();
    *(undefined8 **)(puVar2 + 0x50) = unaff_x29;
    *(undefined **)(puVar2 + 0x58) = unaff_x30;
    unaff_x29 = (undefined8 *)(puVar2 + 0x50);
    func_0x000100152318();
    func_0x000106890c00();
    if (plVar3 == unaff_x23) {
      plVar5 = plVar3;
      func_0x000106890c34();
      unaff_x23 = plVar3;
      while( true ) {
        unaff_x22 = plVar5;
        if (unaff_x23 != unaff_x19) {
          unaff_x23 = (long *)((long)unaff_x23 + 1);
        }
        if (unaff_x23 == unaff_x19) {
          return unaff_x23;
        }
        func_0x000106890c70();
        unaff_x24 = (long *)unaff_x20[7];
        if (unaff_x22 != unaff_x23) break;
        plVar5 = unaff_x22;
        func_0x000106890c34();
        func_0x000106890c28();
        func_0x000106887af4();
        param_3 = unaff_x24;
        unaff_x23 = unaff_x22;
      }
      plVar5 = unaff_x22;
      func_0x000106890c18();
      unaff_x30 = &UNK_10688f418;
      plVar7 = param_3;
    }
    else {
      plVar5 = plVar3;
      func_0x000106890c18();
      unaff_x30 = &UNK_10688f3e0;
      plVar7 = param_3;
      unaff_x22 = plVar3;
    }
code_r0x00010688f2ac:
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *)(puVar2 + -0x10);
    if (plVar4 == plVar7) {
      return plVar4;
    }
    plVar3 = plVar5;
    param_3 = plVar7;
    unaff_x20 = plVar4;
    if ((char)*plVar4 == '^') {
      plVar6 = plVar4;
      func_0x00010688816c();
      unaff_x20 = (long *)((long)plVar4 + 1);
      plVar4 = plVar6;
    }
    if (unaff_x20 != plVar7) {
      func_0x000100152308();
      func_0x000106890298();
      unaff_x22 = (long *)((long)plVar3 + 1);
      unaff_x20 = plVar3;
      if ((plVar3 != plVar7 && unaff_x22 == plVar7) && ((char)*plVar3 == '$')) {
        plVar3 = plVar5;
        func_0x000106888194();
        unaff_x20 = unaff_x22;
      }
    }
    if (unaff_x20 == plVar7) break;
    unaff_x30 = &LAB_10688f340;
    func_0x00010688ad94();
    unaff_x21 = plVar5;
  }
  return unaff_x20;
}



/* Entry: 1001521f0; end: 10015221b;  */

undefined1 * FUN_1001521f0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  FUN_1001520d8();
  if (param_1 == param_3) {
    return param_1;
  }
  func_0x000106887738();
  return &stack0xffffffffffffffe0;
}



/* Entry: 10015221c; end: 100152227;  */

void FUN_10015221c(void)

{
  return;
}



/* Entry: 100152228; end: 10015225f;  */

void FUN_100152228(void)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10015221c();
  FUN_10015226c();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x19[1] = uStack_28;
  *unaff_x19 = uStack_30;
  uStack_30 = uVar1;
  uStack_28 = uVar2;
  FUN_1001522d8(&uStack_30);
  return;
}



/* Entry: 100152260; end: 10015226b;  */

void FUN_100152260(void)

{
  return;
}



/* Entry: 10015226c; end: 1001522c3;  */

void FUN_10015226c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100152260();
  *param_1 = param_2;
  FUN_1001522c4();
  *param_1 = &PTR_DAT_1109458d8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = unaff_x19;
  *(undefined8 **)(unaff_x20 + 8) = param_1;
  return;
}



/* Entry: 1001522c4; end: 1001522d7;  */

void FUN_1001522c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 1001522d8; end: 1001522fb;  */

void FUN_1001522d8(long param_1)

{
  func_0x0001001522cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1001522fc; end: 10015232b;  */

void FUN_1001522fc(void)

{
  return;
}



/* Entry: 10015232c; end: 10015239f;  */

char * FUN_10015232c(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *unaff_x19;
  char *unaff_x23;
  char *unaff_x24;
  
  func_0x000100152318();
  FUN_1001525d0();
  pcVar1 = param_1;
  if (param_1 == unaff_x23) {
    func_0x000106890c34();
  }
  while ((pcVar2 = pcVar1, param_1 != unaff_x19 && (*param_1 == '|'))) {
    func_0x000106890cf0();
    FUN_1001525d0();
    pcVar1 = pcVar2;
    if (pcVar2 == unaff_x24) {
      func_0x000106890c34();
    }
    func_0x000106890c28();
    func_0x000106887af4();
    param_1 = pcVar2;
  }
  return param_1;
}



/* Entry: 1001523a0; end: 1001523ab;  */

void FUN_1001523a0(void)

{
  return;
}



/* Entry: 1001523ac; end: 10015255b;  */

char * FUN_1001523ac(long param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *unaff_x19;
  char acStack_70 [24];
  undefined4 uStack_58;
  
  pcVar4 = acStack_70;
  pcVar5 = acStack_70;
  FUN_1001523a0();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  cVar1 = *unaff_x19;
  if (cVar1 == '$') {
    func_0x000106888194(param_1);
  }
  else {
    if (cVar1 == '(') {
      if (unaff_x19 + 1 == param_3) {
        return unaff_x19;
      }
      if (unaff_x19[1] != '?' || unaff_x19 + 2 == param_3) {
        return unaff_x19;
      }
      cVar1 = unaff_x19[2];
      uVar3 = cVar1 == '!';
      if ((bool)uVar3) {
        func_0x0001068884d0();
        uStack_58 = *(undefined4 *)(param_1 + 0x18);
        func_0x000106890cac();
        func_0x0001068881f4(param_1,acStack_70,1,*(undefined4 *)(param_1 + 0x1c));
        func_0x000106890d3c();
        if (((bool)uVar3) || (*pcVar5 != ')')) {
          func_0x000106888248();
          goto LAB_10015253c;
        }
      }
      else {
        uVar3 = cVar1 == '=';
        if (!(bool)uVar3) {
          return unaff_x19;
        }
        func_0x0001068884d0();
        uStack_58 = *(undefined4 *)(param_1 + 0x18);
        func_0x000106890cac();
        func_0x0001068881f4(param_1,acStack_70,0,*(undefined4 *)(param_1 + 0x1c));
        func_0x000106890d3c();
        if (((bool)uVar3) || (pcVar5 = pcVar4, *pcVar4 != ')')) {
          func_0x000106888248();
LAB_10015253c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100152540);
          (*pcVar2)();
        }
      }
      FUN_10015b424(acStack_70);
      return pcVar5 + 1;
    }
    if (cVar1 == '\\') {
      if (unaff_x19 + 1 == param_3) {
        return unaff_x19;
      }
      cVar1 = unaff_x19[1];
      if (cVar1 == 'B') {
        uVar6 = 1;
      }
      else {
        if (cVar1 != 'b') {
          return unaff_x19;
        }
        uVar6 = 0;
      }
      func_0x0001068881bc(param_1,uVar6);
      return unaff_x19 + 2;
    }
    if (cVar1 != '^') {
      return unaff_x19;
    }
    func_0x00010688816c(param_1);
  }
  return unaff_x19 + 1;
}



/* Entry: 10015255c; end: 1001525cf;  */

char * FUN_10015255c(char *param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5
                    ,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  int in_stack_0000000c;
  
  pcVar5 = param_1;
  FUN_1001523ac();
  if ((pcVar5 != param_2) || (FUN_100152610(param_1,param_2), pcVar5 = param_2, param_1 == param_2))
  {
    return pcVar5;
  }
  func_0x000100152c68();
  func_0x000100152c84();
  if (param_1 == param_3) {
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 0x18) & 0x1f0;
  cVar2 = *param_1;
  if (cVar2 != '{') {
    if (cVar2 == '+') {
      pcVar5 = param_1 + 1;
      bVar3 = uVar1 != 0 || pcVar5 == param_3;
      if ((bVar3) || (FUN_100152f1c(), !bVar3)) {
        lVar4 = 1;
LAB_100152e0c:
        func_0x000100152f28(param_2,lVar4,param_4,param_5,param_6);
        return pcVar5;
      }
      param_1 = param_1 + 2;
      lVar4 = 1;
LAB_100152d4c:
      func_0x00010688abec(param_2,lVar4,param_4,param_5,param_6);
      return param_1;
    }
    if (cVar2 != '?') {
      if (cVar2 != '*') {
        return param_1;
      }
      pcVar5 = param_1 + 1;
      if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
        lVar4 = 0;
        goto LAB_100152e0c;
      }
      param_1 = param_1 + 2;
      lVar4 = 0;
      goto LAB_100152d4c;
    }
    pcVar5 = param_1 + 1;
    if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
      func_0x000106890bbc();
      goto LAB_100152e84;
    }
    func_0x000106890bbc();
LAB_100152dec:
    pcVar5 = param_1 + 2;
LAB_100152e84:
    FUN_100152f50();
    return pcVar5;
  }
  pcVar5 = param_1 + 1;
  param_1 = param_2;
  func_0x000106890ca4(param_2,pcVar5);
  if (param_1 != pcVar5) {
    if (param_1 == param_3) goto LAB_100152f18;
    if (*param_1 == ',') {
      pcVar5 = param_1 + 1;
      if (pcVar5 != param_3) {
        if (*pcVar5 == '}') {
          pcVar5 = param_1 + 2;
          if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
            lVar4 = (long)in_stack_0000000c;
            goto LAB_100152e0c;
          }
          param_1 = param_1 + 3;
          lVar4 = (long)in_stack_0000000c;
          goto LAB_100152d4c;
        }
        func_0x000106890ca4(param_2,pcVar5);
        param_1 = param_2;
        if (((param_2 == pcVar5) || (param_2 == param_3)) || (*param_2 != '}')) goto LAB_100152f18;
        if (in_stack_0000000c < 0) {
          pcVar5 = param_2 + 1;
          if (((uVar1 == 0) && (pcVar5 != param_3)) && (param_2[1] == '?')) {
            pcVar5 = param_2 + 2;
          }
          func_0x000106890bbc();
          goto LAB_100152e84;
        }
      }
    }
    else if (*param_1 == '}') {
      pcVar5 = param_1 + 1;
      if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
        func_0x000106890bbc();
        goto LAB_100152e84;
      }
      func_0x000106890bbc();
      goto LAB_100152dec;
    }
  }
  func_0x00010688ac98();
LAB_100152f18:
  func_0x00010688acc0();
  return param_1;
}



/* Entry: 1001525d0; end: 10015260f;  */

long FUN_1001525d0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  do {
    lVar1 = param_2;
    param_2 = param_1;
    FUN_10015255c(param_1,lVar1,param_3);
  } while (param_2 != lVar1);
  return lVar1;
}



/* Entry: 100152610; end: 10015279f;  */

/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */

byte * FUN_100152610(byte *param_1,byte *param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *unaff_x19;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar2 = *param_2;
  if (bVar2 == 0x28) {
    if (param_2 + 1 == param_3) {
LAB_10015279c:
      func_0x000106888248();
      pbVar4 = (byte *)0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Znwm_110352280)(0x18);
      return pbVar4;
    }
    if (((param_2 + 2 == param_3) || (param_2[1] != 0x3f)) || (param_2[2] != 0x3a)) {
      FUN_1001527ac(param_1);
      uVar1 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      param_2 = param_1;
      func_0x000100152800();
      FUN_10015232c();
      if ((param_2 == param_3) || (*param_2 != 0x29)) goto LAB_10015279c;
      FUN_1001530e4(param_1,uVar1);
    }
    else {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pbVar4 = param_2 + 3;
      param_2 = param_1;
      FUN_10015232c(param_1,pbVar4,param_3);
      if ((param_2 == param_3) || (*param_2 != 0x29)) goto LAB_10015279c;
    }
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
LAB_100152788:
    return param_2 + 1;
  }
  if (bVar2 == 0x2e) {
    func_0x0001068887d0(param_1);
    goto LAB_100152788;
  }
  uVar7 = (uint)bVar2;
  if (uVar7 != 0x5b) {
    uVar3 = uVar7 == 0x5c;
    if ((bool)uVar3) {
      func_0x00010015280c();
      FUN_1001523a0();
      if ((bool)uVar3) {
        return unaff_x19;
      }
      if (*unaff_x19 != 0x5c) {
        return unaff_x19;
      }
      pbVar4 = unaff_x19 + 1;
      if (pbVar4 != param_3) {
        pbVar5 = param_1;
        func_0x000100152800();
        FUN_1001528a8();
        if (pbVar5 != pbVar4) {
          return pbVar5;
        }
        pbVar5 = param_1;
        func_0x000100152800();
        FUN_100152968();
        if (pbVar5 != pbVar4) {
          return pbVar5;
        }
        func_0x000100152800();
        FUN_100153138();
        if (param_1 == pbVar4) {
          return unaff_x19;
        }
        return param_1;
      }
      func_0x000106888a18();
      if (param_2 == param_3) {
        return param_2;
      }
      uVar7 = *param_2 - 0x30;
      if (uVar7 == 0) {
        FUN_10015341c();
        return param_2 + 1;
      }
      if (8 < *param_2 - 0x31) {
        return param_2;
      }
      uVar7 = uVar7 & 0xff;
      while ((param_2 = param_2 + 1, pbVar4 = param_3, param_2 != param_3 &&
             (pbVar4 = param_2, *param_2 - 0x30 < 10))) {
        if (0x19999998 < uVar7) goto LAB_10015295c;
        uVar7 = ((uint)*param_2 + uVar7 * 10) - 0x30;
      }
      if ((uVar7 != 0) && (uVar7 <= *(uint *)(param_1 + 0x1c))) {
        func_0x000106888ebc();
        return pbVar4;
      }
LAB_10015295c:
      func_0x000106888e94();
      return param_1;
    }
    if (((1 < uVar7 - 0x2a) && (uVar7 != 0x3f)) && (uVar3 = bVar2 == 0x7b, !(bool)uVar3)) {
      func_0x00010015280c();
      FUN_1001523a0();
      if (((!(bool)uVar3) &&
          (uVar7 = *unaff_x19 - 0x24,
          0x3a < uVar7 || (1L << ((ulong)uVar7 & 0x3f) & 0x7800000080004f1U) == 0)) &&
         (2 < *unaff_x19 - 0x7b)) {
        func_0x000106890c8c();
        unaff_x19 = unaff_x19 + 1;
      }
      return unaff_x19;
    }
    func_0x000106888978();
    goto LAB_10015279c;
  }
  func_0x00010015280c();
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 != 0x5b) {
    return param_2;
  }
  pbVar4 = param_1;
  pbVar5 = param_3;
  if (param_2 + 1 != param_3) {
    pbVar8 = (byte *)(ulong)(param_2[1] == 0x5e);
    pbVar6 = param_2 + 2;
    if (param_2[1] != 0x5e) {
      pbVar6 = param_2 + 1;
    }
    FUN_100152a30();
    param_2 = pbVar8;
    if (pbVar6 != param_3) {
      if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pbVar6 == 0x5d)) {
        func_0x0001068893d8(pbVar4,0x5d);
        pbVar6 = pbVar6 + 1;
      }
      goto code_r0x00010688f5b4;
    }
  }
  param_3 = pbVar5;
  pbVar6 = param_2;
  param_1 = pbVar4;
  func_0x000106889864();
code_r0x00010688f5b4:
  pbVar4 = pbVar6;
  if (pbVar6 != param_3) {
    do {
      pbVar6 = pbVar4;
      pbVar4 = param_1;
      func_0x00010688f60c();
    } while (pbVar4 != pbVar6);
  }
  return pbVar6;
}



/* Entry: 1001527a0; end: 1001527ab;  */

void FUN_1001527a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 1001527ac; end: 1001527ff;  */

void FUN_1001527ac(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
    FUN_1001527a0();
    iVar1 = *(int *)(unaff_x19 + 0x1c) + 1;
    *(int *)(unaff_x19 + 0x1c) = iVar1;
    lVar2 = *(long *)(unaff_x19 + 0x38);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    *param_1 = &PTR_DAT_110945d58;
    param_1[1] = uVar3;
    *(int *)(param_1 + 2) = iVar1;
    *(undefined8 **)(lVar2 + 8) = param_1;
    *(undefined8 **)(unaff_x19 + 0x38) = param_1;
  }
  return;
}



/* Entry: 100152800; end: 10015281b;  */

void FUN_100152800(void)

{
  return;
}



/* Entry: 10015281c; end: 1001528a7;  */

byte * FUN_10015281c(byte *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 in_ZR;
  byte *pbVar3;
  byte *unaff_x19;
  
  FUN_1001523a0();
  pbVar3 = unaff_x19;
  if ((!(bool)in_ZR) && (*unaff_x19 == 0x5c)) {
    pbVar1 = unaff_x19 + 1;
    if (pbVar1 == param_3) {
      func_0x000106888a18();
      if (param_2 != param_3) {
        uVar2 = *param_2 - 0x30;
        if (uVar2 == 0) {
          FUN_10015341c();
          param_2 = param_2 + 1;
        }
        else if (*param_2 - 0x31 < 9) {
          uVar2 = uVar2 & 0xff;
          pbVar3 = param_2;
          while ((pbVar3 = pbVar3 + 1, param_2 = param_3, pbVar3 != param_3 &&
                 (param_2 = pbVar3, *pbVar3 - 0x30 < 10))) {
            if (0x19999998 < uVar2) goto LAB_10015295c;
            uVar2 = ((uint)*pbVar3 + uVar2 * 10) - 0x30;
          }
          if ((uVar2 == 0) || (*(uint *)(param_1 + 0x1c) < uVar2)) {
LAB_10015295c:
            func_0x000106888e94();
            param_2 = param_1;
          }
          else {
            func_0x000106888ebc();
          }
        }
      }
      return param_2;
    }
    pbVar3 = param_1;
    FUN_100152800();
    FUN_1001528a8();
    if (pbVar3 == pbVar1) {
      pbVar3 = param_1;
      FUN_100152800();
      FUN_100152968();
      if (pbVar3 == pbVar1) {
        FUN_100152800();
        FUN_100153138();
        pbVar3 = unaff_x19;
        if (param_1 != pbVar1) {
          pbVar3 = param_1;
        }
      }
    }
  }
  return pbVar3;
}



/* Entry: 1001528a8; end: 10015295f;  */

void FUN_1001528a8(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = *param_2 - 0x30;
    if (uVar1 == 0) {
      FUN_10015341c(param_1,0);
    }
    else if (*param_2 - 0x31 < 9) {
      uVar1 = uVar1 & 0xff;
      while ((param_2 = param_2 + 1, param_2 != param_3 && (*param_2 - 0x30 < 10))) {
        if (0x19999998 < uVar1) goto LAB_10015295c;
        uVar1 = ((uint)*param_2 + uVar1 * 10) - 0x30;
      }
      if ((uVar1 == 0) || (*(uint *)(param_1 + 0x1c) < uVar1)) {
LAB_10015295c:
        func_0x000106888e94();
      }
      else {
        func_0x000106888ebc();
      }
    }
  }
  return;
}



/* Entry: 100152960; end: 100152967;  */

void FUN_100152960(void)

{
  return;
}



/* Entry: 100152968; end: 100152a23;  */

char * FUN_100152968(long param_1)

{
  char cVar1;
  undefined1 in_ZR;
  uint uVar2;
  char *unaff_x19;
  
  FUN_1001523a0();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  cVar1 = *unaff_x19;
  if (cVar1 == 'D') {
LAB_100152a04:
    FUN_100152a30();
    uVar2 = *(uint *)(param_1 + 0xa0) | 0x400;
  }
  else {
    if (cVar1 != 'S') {
      if ((cVar1 == 'W') || (cVar1 == 'w')) {
        FUN_100152a30();
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x500;
        func_0x0001068893d8();
        goto LAB_100152a14;
      }
      if (cVar1 != 's') {
        if (cVar1 != 'd') {
          return unaff_x19;
        }
        goto LAB_100152a04;
      }
    }
    FUN_100152a30();
    uVar2 = *(uint *)(param_1 + 0xa0) | 0x4000;
  }
  *(uint *)(param_1 + 0xa0) = uVar2;
LAB_100152a14:
  return unaff_x19 + 1;
}



/* Entry: 100152a24; end: 100152a2f;  */

void FUN_100152a24(void)

{
  return;
}



/* Entry: 100152a30; end: 100152a87;  */

undefined8 FUN_100152a30(void)

{
  undefined8 uVar1;
  
  FUN_100152a24();
  uVar1 = 0xb0;
  func_0x000107c60e20(0xb0);
  FUN_100152a9c();
  func_0x000100152c40();
  return uVar1;
}



/* Entry: 100152a88; end: 100152a9b;  */

void FUN_100152a88(void)

{
  return;
}



/* Entry: 100152a9c; end: 100152b87;  */

void FUN_100152a9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  FUN_100152a88();
  *param_1 = extraout_x8;
  param_1[1] = param_3;
  FUN_100152b88(param_1 + 2);
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined1 *)(unaff_x19 + 0xa8) = param_4;
  *(undefined1 *)(unaff_x19 + 0xa9) = param_5;
  *(undefined1 *)(unaff_x19 + 0xaa) = param_6;
  func_0x000107c60da8(auStack_60,unaff_x19 + 0x10);
  func_0x000107c60bf8(auStack_58,auStack_60);
  puVar1 = auStack_58;
  FUN_100152bb8(puVar1,&DAT_10f31a1fb);
  FUN_100152c24();
  func_0x000107c60db0(auStack_60);
  *(byte *)(unaff_x19 + 0xab) = (byte)puVar1 ^ 1;
  return;
}


