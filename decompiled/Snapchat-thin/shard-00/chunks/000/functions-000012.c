/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100073b28; end: 100073bd3; -[SCAppStartExperimentReader _waitForRecovery] */

/* WARNING: Possible PIC construction at 0x000100073b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073b74) */
/* WARNING: Removing unreachable block (ram,0x000100073b98) */
/* WARNING: Removing unreachable block (ram,0x000100073ba0) */

void FUN_100073b28(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c3e814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 100073bd4; end: 100073d1b; -[SCAppStartExperimentReader _logExposureFor:configId:] */

void FUN_100073bd4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x100074198;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    func_0x000107c61174(param_3);
    lStack_48 = param_3;
    func_0x000107c4e524(uVar5,param_2,&puStack_70);
    lVar1 = lStack_48;
  }
  else {
    lVar1 = param_3;
    func_0x000107c4d9c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f98bd8);
    func_0x000107c61180();
    lVar2 = param_3;
    func_0x000107c4d9c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e6e738);
    func_0x000107c61180();
    lVar3 = param_3;
    func_0x000107c4d9c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f98bf8);
    func_0x000107c61180();
    if (lVar1 != 0 && lVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = lVar3;
      func_0x000107c3ebcc(lVar3);
      func_0x000107c4bb44(uVar5,param_2,lVar1,lVar2,lVar4);
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100073d1c; end: 100073d57; -[SCQueuePerformer perform:] */

void FUN_100073d1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3becc();
  func_0x000107c61180();
  func_0x000107c3c0d8(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100073d58; end: 100073e1b; -[SCQueuePerformer _makeDispatchBlock:] */

void FUN_100073d58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  func_0x000107c61174(param_3);
  if ((*(char *)(param_1 + 0x50) == '\x01') && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    func_0x000107c5cd34(lVar1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    param_3 = lVar1;
  }
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1000740cc;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  lStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61184(&puStack_60);
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100073e1c; end: 100073e4f;  */

void FUN_100073e1c(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  return;
}



/* Entry: 100073e50; end: 100073e97; -[SCQueuePerformer _performBlock:] */

void FUN_100073e50(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x44);
  FUN_10007380c(*(undefined8 *)(param_1 + 0x10),param_3);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x44);
  return;
}



/* Entry: 100073e98; end: 100073f4f; -[SCAppStartExperimentReader _logConfigIdRead:] */

void FUN_100073e98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x100074210;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    func_0x000107c61174(param_3);
    uStack_38 = param_3;
    func_0x000107c4e524(uVar1,param_2,&puStack_60);
    func_0x000107c61170(uStack_38);
  }
  else {
    func_0x000107c3fcf0(*(long *)(param_1 + 0x20),param_2,param_3,
                        &PTR____CFConstantStringClassReference_110f98c98,1);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100073f50; end: 100073f8f;  */

undefined4 FUN_100073f50(void)

{
  if (lRam00000001137fc0f8 != -1) {
    FUN_10002a2fc(0x1137fc0f8,&PTR___NSConcreteGlobalBlock_110d66558);
  }
  return uRam00000001137fc044;
}



/* Entry: 100073f90; end: 100074013;  */

undefined * FUN_100073f90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e1960;
  func_0x000107c61174(0);
  func_0x000107c61174(param_1);
  func_0x000107c5a9f0(puVar1);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4980c();
  func_0x000107c61170(0);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100074014; end: 10007403b;  */

void FUN_100074014(void)

{
  undefined4 uVar1;
  
  uVar1 = 0x10f98718;
  FUN_100073f90(&PTR____CFConstantStringClassReference_110f98718,12000);
  uRam00000001137fc044 = uVar1;
  return;
}



/* Entry: 10007403c; end: 100074093; -[SCAppStartExperimentReader intValueForConfigKeySync:defaultValue:featureProvidedSignals:] */

long FUN_10007403c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c3cda4();
  func_0x000107c61180();
  if (param_1 != 0) {
    param_4 = param_1;
    func_0x000107c49804(param_1);
  }
  func_0x000107c61170(param_1);
  return param_4;
}



/* Entry: 100074094; end: 1000740cb; +[SCWorkSchedulerBootstrap configureParkingWithEnabled:failOpenTimeoutMs:] */

void FUN_100074094(undefined8 param_1,undefined8 param_2,undefined1 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  
  uRam0000000113815518 = param_3;
  if (0 < (long)param_4) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_4;
    if (SUB168(auVar1 * ZEXT816(1000000),8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000740cc);
      (*pcVar2)();
    }
    lRam00000001130971d0 = param_4 * 1000000;
  }
  return;
}



/* Entry: 1000740cc; end: 100074123;  */

void FUN_1000740cc(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = param_1;
  func_0x000107c612b0();
  FUN_100074124(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),lVar7);
  (*(code *)(&PTR_FUN_113403f88)[*(long *)(*(long *)(param_1 + 0x20) + 0x30)])
            (*(undefined8 *)(param_1 + 0x28));
  iVar8 = (int)lVar7;
  uVar2 = 2;
  if (iVar8 != 0x15) {
    uVar2 = (uint)(iVar8 == 0x19);
  }
  uVar4 = 3;
  if (iVar8 != 0x11) {
    uVar4 = uVar2;
  }
  uVar2 = 4;
  if (iVar8 != 9) {
    uVar2 = 0;
  }
  uVar3 = 5;
  if (iVar8 != 0) {
    uVar3 = uVar2;
  }
  if (iVar8 < 0x11) {
    uVar4 = uVar3;
  }
  piVar1 = (int *)((long)(int)(uVar4 + (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) * 6) *
                   4 + 0x113846ab8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}



/* Entry: 100074124; end: 100074253;  */

void FUN_100074124(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  
  uVar2 = 2;
  if (param_2 != 0x15) {
    uVar2 = (uint)(param_2 == 0x19);
  }
  uVar4 = 3;
  if (param_2 != 0x11) {
    uVar4 = uVar2;
  }
  uVar2 = 4;
  if (param_2 != 9) {
    uVar2 = 0;
  }
  uVar3 = 5;
  if (param_2 != 0) {
    uVar3 = uVar2;
  }
  if (param_2 < 0x11) {
    uVar4 = uVar3;
  }
  piVar1 = (int *)((long)(int)(uVar4 + param_1 * 6) * 4 + 0x113846ab8);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}



/* Entry: 100074254; end: 1000744f7;  */

void FUN_100074254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  (*pcRam00000001137fbf80)(param_1,PTR_s_traitCollection_11267bf78);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5cea8();
  func_0x000107c61180();
  FUN_10007455c(param_1,&UNK_10f7c1657,&UNK_10f7c167f,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1000744f8; end: 10007453f;  */

void FUN_1000744f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1950;
  func_0x000107c61174(param_2);
  func_0x000107c61158(puVar1);
  func_0x000107c56950(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100074540; end: 10007454b; +[AppThemeTrait identifier] */

undefined ** FUN_100074540(void)

{
  return &PTR____CFConstantStringClassReference_110f97bf8;
}



/* Entry: 10007454c; end: 100074553; +[AppThemeTrait affectsColorAppearance] */

undefined8 FUN_10007454c(void)

{
  return 1;
}



/* Entry: 100074554; end: 10007455b; +[AppThemeTrait defaultValue] */

undefined8 FUN_100074554(void)

{
  return 0;
}



/* Entry: 10007455c; end: 10007483f;  */

undefined8 *****
FUN_10007455c(undefined8 *****param_1,undefined8 param_2,undefined8 param_3,undefined8 *****param_4)

{
  long lVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ****ppppuStack_1a0;
  undefined *puStack_198;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  pppppuVar13 = param_1;
  func_0x000107c61134(param_1,param_2);
  func_0x000107c61180();
  if ((pppppuVar13 == (undefined8 *****)0x0) ||
     ((pppppuVar13 != param_4 &&
      (pppppuVar2 = pppppuVar13, func_0x000107c49cec(), (int)pppppuVar2 == 0)))) {
    func_0x000107c611ec(0x1137fbf78);
    pppppuVar2 = param_1;
    func_0x000107c61134(param_1,param_2);
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar13);
    if ((pppppuVar2 == (undefined8 *****)0x0) ||
       ((pppppuVar2 != param_4 &&
        (pppppuVar13 = pppppuVar2, func_0x000107c49cec(), (int)pppppuVar13 == 0)))) {
      pppppuVar3 = param_1;
      func_0x000107c61134(param_1,param_3);
      func_0x000107c61180();
      if (pppppuVar2 != (undefined8 *****)0x0) {
        if (pppppuVar3 == (undefined8 *****)0x0) {
          pppppuVar3 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x000107c3e15c();
          func_0x000107c61180();
          func_0x000107c61188(param_1,param_3,pppppuVar3,0x301);
        }
        pppppuVar13 = pppppuVar3;
        func_0x000107c45344();
        if (pppppuVar13 == (undefined8 *****)0x7fffffffffffffff) {
          func_0x000107c3d798(pppppuVar3);
        }
      }
      func_0x000107c61174(pppppuVar3);
      pppppuVar4 = pppppuVar3;
      func_0x000107c4080c();
      lVar1 = lRam0000000000000000;
      while (pppppuVar4 != (undefined8 *****)0x0) {
        pppppuVar14 = (undefined8 *****)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            func_0x000107c61128(pppppuVar3);
          }
          pppppuVar13 = *(undefined8 ******)((long)pppppuVar14 * 8);
          if ((pppppuVar13 == param_4) ||
             (pppppuVar5 = pppppuVar13, func_0x000107c49cec(), (int)pppppuVar5 != 0)) {
            func_0x000107c61188(param_1,param_2,pppppuVar13,0x301);
            func_0x000107c61174(pppppuVar13);
            func_0x000107c61170(pppppuVar3);
            goto LAB_1000747a0;
          }
          pppppuVar14 = (undefined8 *****)((long)pppppuVar14 + 1);
        } while (pppppuVar4 != pppppuVar14);
        pppppuVar4 = pppppuVar3;
        func_0x000107c4080c();
      }
      func_0x000107c61170(pppppuVar3);
      func_0x000107c61188(param_1,param_2,param_4,0x301);
      func_0x000107c61174(param_4);
      pppppuVar13 = param_4;
LAB_1000747a0:
      func_0x000107c61170(pppppuVar3);
    }
    else {
      func_0x000107c61174(pppppuVar2);
      pppppuVar13 = pppppuVar2;
    }
    func_0x000107c611f0(0x1137fbf78);
  }
  else {
    func_0x000107c61174(pppppuVar13);
    pppppuVar2 = pppppuVar13;
  }
  func_0x000107c61170(pppppuVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppppuVar13);
    return pppppuVar13;
  }
  func_0x000107c60e78();
  func_0x000107c611f0(0x1137fbf78);
  func_0x000107c60bd8();
  func_0x000107c5afc8(PTR_PTR_1126ae4e0);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar6);
  func_0x000107c4fc4c(PTR_PTR_1126ae4f0);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126ae4f8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4f8);
  func_0x000107c61180();
  func_0x000107c5aff8();
  func_0x000107c61170(puVar6);
  func_0x000107c5aff4(PTR_PTR_1126ae4e0);
  func_0x000107c4e5a4(param_1);
  func_0x000107c5afe8(PTR_PTR_1126ae4e0);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar6);
  func_0x000107c3e914(PTR_PTR_1126ae4d8);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar6);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar7);
  FUN_100077124();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae500;
  func_0x000107c5198c(PTR_PTR_1126ae500);
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae510;
  puVar10 = puVar9;
  FUN_1000778b8();
  func_0x000107c61180();
  puVar11 = puVar7;
  FUN_100077df4(puVar7,puVar9);
  func_0x000107c61180();
  func_0x000107c5aa60(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  puVar10 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar10);
  puStack_198 = PTR_PTR_1126e3668;
  pppppuVar13 = &ppppuStack_1a0;
  ppppuStack_1a0 = param_1;
  func_0x000107c61154(pppppuVar13,PTR_s_initWithScopeGraph_contextStream_1125256d8,puVar6,puVar7);
  puVar10 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar10);
  func_0x000107c5afcc(PTR_PTR_1126ae4e0);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  return pppppuVar13;
}



/* Entry: 100074840; end: 100074b6f; -[SCAppDelegate init] */

undefined8 * FUN_100074840(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c5afc8(PTR_PTR_1126ae4e0);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  func_0x000107c4fc4c(PTR_PTR_1126ae4f0);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4f8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4f8);
  func_0x000107c61180();
  func_0x000107c5aff8();
  func_0x000107c61170(puVar1);
  func_0x000107c5aff4(PTR_PTR_1126ae4e0);
  func_0x000107c4e5a4(param_1);
  func_0x000107c5afe8(PTR_PTR_1126ae4e0);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar1);
  func_0x000107c3e914(PTR_PTR_1126ae4d8);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c3e814();
  func_0x000107c61170(puVar2);
  FUN_100077124();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae500;
  func_0x000107c5198c(PTR_PTR_1126ae500);
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae510;
  puVar5 = puVar4;
  FUN_1000778b8();
  func_0x000107c61180();
  puVar6 = puVar2;
  FUN_100077df4(puVar2,puVar4);
  func_0x000107c61180();
  func_0x000107c5aa60(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar5);
  puStack_68 = PTR_PTR_1126e3668;
  puVar7 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar7,PTR_s_initWithScopeGraph_contextStream_1125256d8,puVar1,puVar2);
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
  func_0x000107c61170(puVar5);
  func_0x000107c5afcc(PTR_PTR_1126ae4e0);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return puVar7;
}



/* Entry: 100074b70; end: 100074b8b; +[SCAppLaunchSignaler signalAppDelegateInitBegin] */

void FUN_100074b70(undefined8 param_1)

{
  func_0x000107c6106c();
  uRam0000000113813688 = param_1;
  return;
}



/* Entry: 100074b8c; end: 100074bab; +[SCAppResourceUsage registerMainThread] */

void FUN_100074b8c(undefined4 param_1)

{
  func_0x000107c61294();
  func_0x000107c61254();
  uRam00000001137f0f40 = param_1;
  return;
}



/* Entry: 100074bac; end: 100074bb3; -[SCStartupJournalManager signalProcessCreated] */

/* WARNING: Removing unreachable block (ram,0x000100074c04) */

void FUN_100074bac(undefined8 param_1)

{
  undefined1 auStack_90 [96];
  
  func_0x000107c61174();
  FUN_100074c20(auStack_90,2,1);
  FUN_100074ef8(auStack_90);
  func_0x000107c61170(param_1);
  FUN_100076b30(auStack_90);
  return;
}



/* Entry: 100074bb4; end: 100074c1f;  */

/* WARNING: Removing unreachable block (ram,0x000100074c04) */

void FUN_100074bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_90 [96];
  
  func_0x000107c61174();
  FUN_100074c20(auStack_90,param_3,1);
  FUN_100074ef8(auStack_90);
  func_0x000107c61170(param_1);
  FUN_100076b30(auStack_90);
  return;
}



/* Entry: 100074c20; end: 100074d97;  */

void FUN_100074c20(undefined8 *param_1,double param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  if (lRam0000000113084448 != -1) {
    func_0x000107c61568(0x113084448,FUN_100074e84);
  }
  uVar1 = uRam0000000113813c40;
  if (lRam0000000113084450 != -1) {
    func_0x000107c61568(0x113084450,FUN_100074ea0);
  }
  uVar2 = uRam0000000113813c48;
  func_0x000107c5eea0(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100074d90);
    (*pcVar3)();
  }
  if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100074d94);
    (*pcVar3)();
  }
  if (param_2 < 1.8446744073709552e+19) {
    *param_1 = param_3;
    *(undefined1 *)(param_1 + 1) = param_4;
    param_1[2] = (long)param_2;
    param_1[3] = uVar2;
    param_1[4] = uVar1;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0xe000000000000000;
    param_1[0xb] = 0xc000000000000000;
    param_1[10] = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100074d98);
  (*pcVar3)();
}



/* Entry: 100074d98; end: 100074e83;  */

long FUN_100074d98(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_2c8;
  long alStack_2c0 [81];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60ee4(alStack_2c0,0x288);
  uStack_2c8 = 0x288;
  lVar2 = 0x112dd1f58;
  FUN_1000285a8(0x112dd1f58,&UNK_10dbcf190);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  *(undefined8 *)(lVar2 + 0x20) = 0xe00000001;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar3 = lVar2;
  func_0x000107c6100c();
  *(int *)(lVar2 + 0x2c) = (int)lVar3;
  func_0x000107c61660((undefined8 *)(lVar2 + 0x20),4,alStack_2c0,&uStack_2c8,0,0);
  func_0x000107c61574();
  if (alStack_2c0[0] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100074e80);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return alStack_2c0[0];
  }
  func_0x000107c60e78();
  FUN_100074d98();
  lRam0000000113813c40 = lVar2;
  return lVar2;
}



/* Entry: 100074e84; end: 100074e9f;  */

void FUN_100074e84(undefined8 param_1)

{
  FUN_100074d98();
  uRam0000000113813c40 = param_1;
  return;
}



/* Entry: 100074ea0; end: 100074ef7;  */

void FUN_100074ea0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4f2a8();
  func_0x000107c61170(puVar2);
  if (-1 < (int)puVar3) {
    uRam0000000113813c48 = (ulong)puVar3 & 0xffffffff;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100074ef8);
  (*pcVar1)();
}



/* Entry: 100074ef8; end: 100074fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100074ef8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x113084428;
  FUN_1000285a8(0x113084428,&UNK_10dd15948);
  func_0x000107c613fc();
  uVar3 = param_1[5];
  uVar2 = param_1[4];
  uVar4 = param_1[6];
  uVar6 = param_1[9];
  uVar5 = param_1[8];
  uVar8 = param_1[0xb];
  uVar7 = param_1[10];
  *(undefined8 *)(lVar1 + 0x58) = param_1[7];
  *(undefined8 *)(lVar1 + 0x50) = uVar4;
  *(undefined8 *)(lVar1 + 0x68) = uVar6;
  *(undefined8 *)(lVar1 + 0x60) = uVar5;
  *(undefined8 *)(lVar1 + 0x78) = uVar8;
  *(undefined8 *)(lVar1 + 0x70) = uVar7;
  uVar5 = param_1[1];
  uVar4 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  lStack_68 = lVar1 + 0x20;
  *(undefined8 *)(lVar1 + 0x38) = uVar7;
  *(undefined8 *)(lVar1 + 0x30) = uVar6;
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  uStack_58 = 3;
  uStack_60 = 0;
  lStack_70 = lVar1;
  FUN_100074ff8(param_1,auStack_e0);
  func_0x000107c6157c(lVar1);
  FUN_100075034(FUN_100075330,auStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61578(lVar1,2);
  return;
}



/* Entry: 100074fe8; end: 100074ff7;  */

undefined1  [16] FUN_100074fe8(void)

{
  return ZEXT816(0x110785f30);
}



/* Entry: 100074ff8; end: 100075033;  */

undefined8 FUN_100074ff8(undefined8 param_1,undefined8 param_2)

{
  FUN_10006bf94(param_2,param_1);
  return param_2;
}



/* Entry: 100075034; end: 1000750cb;  */

void FUN_100075034(undefined8 param_1,code *param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c611ec(*(undefined8 *)(unaff_x20[2] + 0x10));
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  func_0x000107c61428((long)unaff_x20 + lVar1,auStack_58,0x21,0);
  (*param_2)(param_1,(long)unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_58);
  func_0x000107c611f0(*(undefined8 *)(unaff_x20[2] + 0x10));
  return;
}



/* Entry: 1000750cc; end: 10007532f;  */

/* WARNING: Removing unreachable block (ram,0x0001000752c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000750cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,long param_6)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x21;
  long lVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  ulong uStack_68;
  
  lVar1 = (param_5 >> 1) - param_4;
  if (SBORROW8(param_5 >> 1,param_4)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100075310);
    (*pcVar4)();
  }
  uVar2 = 0x28 - lVar1;
  if (SBORROW8(0x28,lVar1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100075314);
    (*pcVar4)();
  }
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100075318);
    (*pcVar4)();
  }
  puVar10 = (undefined *)*param_1;
  uVar9 = *(ulong *)(puVar10 + 0x10);
  lStack_70 = 0;
  if (uVar2 <= uVar9) {
    lStack_70 = uVar9 - uVar2;
  }
  puStack_78 = puVar10 + 0x20;
  uStack_68 = uVar9 << 1 | 1;
  puStack_80 = puVar10;
  func_0x000107c61434(puVar10);
  func_0x000107c615f0();
  func_0x000107c615f0(param_2);
  FUN_100075350();
  uVar2 = uStack_68;
  lVar1 = lStack_70;
  puVar3 = puStack_78;
  puVar8 = puStack_80;
  puVar7 = puVar8;
  if ((uStack_68 & 1) != 0) {
    uVar5 = 0;
    func_0x000107c605fc(0);
    puVar6 = puVar8;
    func_0x000107c615f4(puVar8,3);
    func_0x000107c61480();
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c615e8(puVar8);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar11 = *(long *)(puVar6 + 0x10);
    func_0x000107c61574();
    uVar9 = uVar2 >> 1;
    if (SBORROW8(uVar9,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10007531c);
      (*pcVar4)();
    }
    if (lVar11 == uVar9 - lVar1) {
      func_0x000107c61480(puVar8,uVar5);
      func_0x000107c615ec(puVar8,2);
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c615e8(puVar8);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      puVar8 = puVar10;
      func_0x000107c6142c(puVar10);
      goto LAB_100075240;
    }
    func_0x000107c615ec(puVar8,2);
  }
  func_0x000104532d4c(puVar8,puVar3,lVar1,uVar2);
  func_0x000107c6142c(puVar10);
  func_0x000107c615e8(puVar8);
LAB_100075240:
  *param_1 = puVar7;
  lStack_70 = param_1[2];
  puStack_78 = (undefined *)param_1[1];
  puStack_80 = puVar7;
  FUN_10006ad8c();
  FUN_100075890(&uStack_90,0,0,&UNK_110785fd0,PTR___s10Foundation4DataVN_110350ae0,puVar8,
                &PTR_DAT_110789f58);
  if (unaff_x21 == 0) {
    func_0x000107c5ee40(param_6 + _DAT_1130843c8,0,uStack_90,uStack_88);
    func_0x00010006c090(uStack_90,uStack_88);
  }
  func_0x000107c615e8(puVar10);
  return;
}



/* Entry: 100075330; end: 10007534f;  */

void FUN_100075330(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000750cc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 100075350; end: 1000755c7;  */

/* WARNING: Possible PIC construction at 0x0001000753c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100075490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000753cc) */
/* WARNING: Removing unreachable block (ram,0x000100075494) */

void FUN_100075350(long param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar10 = param_4 >> 1;
  lVar7 = uVar10 - param_3;
  if (SBORROW8(uVar10,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755a0);
    (*pcVar1)();
  }
  lVar5 = unaff_x20[2];
  uVar6 = (ulong)unaff_x20[3] >> 1;
  lVar4 = uVar6 - lVar5;
  if (SBORROW8(uVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755a4);
    (*pcVar1)();
  }
  lVar9 = lVar4;
  if ((unaff_x20[3] & 1U) != 0) {
    lVar8 = *unaff_x20;
    lVar3 = unaff_x20[1];
    func_0x000107c605fc(0);
    lVar2 = lVar8;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (lVar2 == 0) goto code_r0x000107c615e8;
    lVar8 = *(long *)(lVar2 + 0x10);
    if (lVar3 + lVar5 * 0x60 + lVar4 * 0x60 == lVar2 + lVar8 * 0x60 + 0x20) {
      uVar6 = *(ulong *)(lVar2 + 0x18);
      func_0x000107c61574();
      lVar8 = (uVar6 >> 1) - lVar8;
      lVar9 = lVar4 + lVar8;
      if (SCARRY8(lVar4,lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755c0);
        (*pcVar1)();
      }
    }
    else {
      func_0x000107c61574();
    }
  }
  lVar5 = lVar4 + lVar7;
  if (SCARRY8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755a8);
    (*pcVar1)();
  }
  lVar4 = lVar5;
  if (lVar9 < lVar5) {
    if (lVar9 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755b8);
      (*pcVar1)();
    }
    lVar4 = lVar9 * 2;
    if (lVar4 - lVar5 == 0 || lVar4 < lVar5) {
      lVar4 = lVar5;
    }
  }
  FUN_1000755c8(lVar4);
  lVar5 = unaff_x20[2];
  uVar6 = (ulong)unaff_x20[3] >> 1;
  lVar4 = uVar6 - lVar5;
  if (SBORROW8(uVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755ac);
    (*pcVar1)();
  }
  lVar9 = unaff_x20[1] + lVar5 * 0x60 + lVar4 * 0x60;
  lVar5 = lVar4;
  if ((unaff_x20[3] & 1U) != 0) {
    lVar8 = *unaff_x20;
    func_0x000107c605fc(0);
    lVar3 = lVar8;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (lVar3 == 0) goto code_r0x000107c615e8;
    lVar8 = *(long *)(lVar3 + 0x10);
    if (lVar9 == lVar3 + lVar8 * 0x60 + 0x20) {
      uVar6 = *(ulong *)(lVar3 + 0x18);
      func_0x000107c61574();
      lVar8 = (uVar6 >> 1) - lVar8;
      lVar5 = lVar4 + lVar8;
      if (SCARRY8(lVar4,lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755c4);
        (*pcVar1)();
      }
    }
    else {
      func_0x000107c61574();
    }
  }
  if (SBORROW8(lVar5,lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755b0);
    (*pcVar1)();
  }
  if (param_3 == uVar10) {
    if (0 < lVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755b4);
      (*pcVar1)();
    }
    lVar7 = 0;
    uVar10 = param_3;
  }
  else {
    if (lVar5 - lVar4 < lVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755bc);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar9,param_2 + param_3 * 0x60,lVar7,&UNK_110785f30);
    if (0 < lVar7) {
      if (SCARRY8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000755c8);
        (*pcVar1)();
      }
      FUN_1000757dc(lVar4 + lVar7);
    }
  }
  lVar8 = param_1;
  if (lVar7 == lVar5 - lVar4) {
    lStack_88 = param_1;
    lStack_80 = param_2;
    uStack_78 = param_3;
    uStack_70 = param_4;
    uStack_68 = uVar10;
    FUN_100089cb4(&lStack_88);
    return;
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar8);
  return;
}



/* Entry: 1000755c8; end: 10007574f;  */

void FUN_1000755c8(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar6 = (ulong)unaff_x20[3] >> 1;
  if ((unaff_x20[3] & 1) != 0) {
    puVar4 = (undefined *)*unaff_x20;
    puVar3 = puVar4;
    func_0x000107c6154c();
    *unaff_x20 = puVar4;
    if ((int)puVar3 != 0) {
      lVar8 = unaff_x20[2];
      lVar7 = uVar6 - lVar8;
      if (SBORROW8(uVar6,lVar8)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10007574c);
        (*pcVar1)();
      }
      lVar10 = unaff_x20[1];
      func_0x000107c605fc(0);
      puVar3 = puVar4;
      func_0x000107c615f0();
      func_0x000107c61480();
      if (puVar3 == (undefined *)0x0) {
        func_0x000107c615e8(puVar4);
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar5 = *(long *)(puVar3 + 0x10);
      if ((undefined *)(lVar10 + lVar8 * 0x60 + lVar7 * 0x60) == puVar3 + lVar5 * 0x60 + 0x20) {
        uVar9 = *(ulong *)(puVar3 + 0x18);
        func_0x000107c61574();
        lVar5 = (uVar9 >> 1) - lVar5;
        bVar2 = SCARRY8(lVar7,lVar5);
        lVar7 = lVar7 + lVar5;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100075750);
          (*pcVar1)();
        }
      }
      else {
        func_0x000107c61574();
      }
      if (param_1 <= lVar7) goto LAB_100075714;
    }
  }
  lVar7 = unaff_x20[2];
  puVar3 = (undefined *)(uVar6 - lVar7);
  if (SBORROW8(uVar6,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100075734);
    (*pcVar1)();
  }
  puVar4 = puVar3;
  FUN_100075750(puVar3,param_1);
  if ((long)uVar6 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100075738);
    (*pcVar1)();
  }
  func_0x000107c6140c(puVar4 + 0x20,unaff_x20[1] + lVar7 * 0x60,puVar3,&UNK_110785f30);
  if (SBORROW8(0,lVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10007573c);
    (*pcVar1)();
  }
  lVar8 = lVar7 + *(long *)(puVar4 + 0x10);
  if (SCARRY8(lVar7,*(long *)(puVar4 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100075740);
    (*pcVar1)();
  }
  if (lVar8 < lVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100075744);
    (*pcVar1)();
  }
  if (lVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100075748);
    (*pcVar1)();
  }
  func_0x000107c615e8(*unaff_x20);
  unaff_x20[1] = puVar4 + 0x20 + lVar7 * -0x60;
  unaff_x20[2] = lVar7;
  unaff_x20[3] = lVar8 * 2 | 1;
LAB_100075714:
  *unaff_x20 = puVar4;
  return;
}



/* Entry: 100075750; end: 1000757db;  */

undefined * FUN_100075750(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x113084428;
    FUN_1000285a8(0x113084428,&UNK_10dd15948);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x60) * 2;
  }
  return puVar1;
}



/* Entry: 1000757dc; end: 10007588f;  */

void FUN_1000757dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  ulong uVar7;
  
  uVar1 = unaff_x20[3];
  uVar7 = uVar1 >> 1;
  lVar2 = uVar7 - unaff_x20[2];
  if (SBORROW8(uVar7,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100075880);
    (*pcVar4)();
  }
  lVar3 = param_1 - lVar2;
  if (SBORROW8(param_1,lVar2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100075884);
    (*pcVar4)();
  }
  if (lVar3 != 0) {
    puVar6 = (undefined *)*unaff_x20;
    func_0x000107c605fc(0);
    puVar5 = puVar6;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(puVar6);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    if (SCARRY8(*(long *)(puVar5 + 0x10),lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100075888);
      (*pcVar4)();
    }
    *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + lVar3;
    func_0x000107c61574();
    if (SCARRY8(uVar7,lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10007588c);
      (*pcVar4)();
    }
    if ((long)(uVar7 + lVar3) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100075890);
      (*pcVar4)();
    }
    unaff_x20[3] = uVar1 & 1 | (uVar7 + lVar3) * 2;
  }
  return;
}



/* Entry: 100075890; end: 100075a07;  */

/* WARNING: Removing unreachable block (ram,0x000100075998) */

void FUN_100075890(undefined8 param_1,ulong param_2,byte param_3,undefined1 *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined1 *puVar1;
  long *plVar2;
  long unaff_x21;
  long alStack_a0 [2];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  byte bStack_70;
  
  plVar2 = alStack_a0;
  if (((param_2 & 1) != 0) ||
     (puVar1 = param_4, (**(code **)(param_6 + 0x20))(param_4,param_6), ((ulong)puVar1 & 1) != 0)) {
    alStack_a0[0] = 0;
    (**(code **)(param_6 + 0x48))(alStack_a0,&UNK_110786a78,&PTR_DAT_110786a90,param_4,param_6);
    if (unaff_x21 != 0) {
      return;
    }
    puVar1 = (undefined1 *)plVar2;
    if (alStack_a0[0] < 0x7fffffff) {
      (**(code **)(param_7 + 8))(param_1,0,alStack_a0[0],param_5,param_7);
      bStack_70 = param_3 & 1;
      puStack_90 = param_4;
      uStack_88 = param_5;
      lStack_80 = param_6;
      lStack_78 = param_7;
      (**(code **)(param_7 + 0x28))
                (FUN_100076724,alStack_a0,PTR___sytN_11034f1b0 + 8,param_5,param_7);
      return;
    }
  }
  func_0x0001045404d4();
  func_0x000107c613f8(&UNK_110786978,puVar1,0,0);
  *puVar1 = 1;
  func_0x000107c61654();
  return;
}



/* Entry: 100075a08; end: 100075aa3;  */

void FUN_100075a08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_10006b5fc();
    (*pcVar2)(param_2,6,&UNK_110785f30,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 100075aa4; end: 100075ac7;  */

void FUN_100075aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100075a08(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],param_2,param_3);
  return;
}



/* Entry: 100075ac8; end: 100075be7;  */

void FUN_100075ac8(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar3 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar3 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar3 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar3;
  }
  lVar3 = param_1;
  func_0x000107c5fc74(param_1,param_3);
  lVar6 = lVar3 * lVar1;
  if (SUB168(SEXT816(lVar3) * SEXT816(lVar1),8) == lVar6 >> 0x3f) {
    lVar1 = *unaff_x20 + lVar6;
    if (SCARRY8(*unaff_x20,lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100075be4);
      (*pcVar2)();
    }
    *unaff_x20 = lVar1;
    uStack_58 = 0;
    uVar4 = 0;
    uStack_70 = param_3;
    uStack_68 = param_4;
    lStack_50 = param_1;
    func_0x000107c5fc80(0,param_3);
    puVar5 = PTR___sSayxGSTsMc_11034dd08;
    func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar4);
    func_0x000107c5fc08(&lStack_48,&uStack_58,FUN_100075d50,auStack_80,uVar4,PTR___sSiN_11034deb0,
                        puVar5);
    if (unaff_x21 == 0) {
      if (SCARRY8(lVar1,lStack_48)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100075be8);
        (*pcVar2)();
      }
      *unaff_x20 = lVar1 + lStack_48;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100075be0);
  (*pcVar2)();
}



/* Entry: 100075be8; end: 100075bfb;  */

void FUN_100075be8(void)

{
  FUN_100075ac8();
  return;
}



/* Entry: 100075bfc; end: 100075c9b;  */

void FUN_100075bfc(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      param_1[9] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 100075c9c; end: 100075cdf;  */

undefined8 FUN_100075c9c(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  (**(code **)(param_2 + 0x48))(&uStack_18,&UNK_110786a78,&PTR_DAT_110786a90,param_1,param_2);
  return uStack_18;
}



/* Entry: 100075ce0; end: 100075d4f;  */

void FUN_100075ce0(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *param_2;
  FUN_100075c9c(param_4,param_5);
  if (unaff_x21 == 0) {
    if (param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100075d48);
      (*pcVar2)();
    }
    lVar3 = param_4;
    FUN_10007629c();
    lVar1 = lVar4 + lVar3;
    if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100075d4c);
      (*pcVar2)();
    }
    if (SCARRY8(lVar1,param_4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100075d50);
      (*pcVar2)();
    }
    *param_1 = lVar1 + param_4;
  }
  return;
}



/* Entry: 100075d50; end: 100075d67;  */

void FUN_100075d50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100075ce0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Entry: 100075d68; end: 100075ef3;  */

void FUN_100075d68(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x00010006bba8();
    (*pcVar4)(&lStack_50,1,&UNK_110785eb8,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((((((unaff_x20[2] == 0) ||
         ((**(code **)(param_3 + 0x30))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) &&
        ((unaff_x20[3] == 0 ||
         ((**(code **)(param_3 + 0x30))(unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)))) &&
       ((unaff_x20[4] == 0 ||
        ((**(code **)(param_3 + 0x30))(unaff_x20[4],4,param_2,param_3), unaff_x21 == 0)))) &&
      (((int)unaff_x20[5] == 0 ||
       ((**(code **)(param_3 + 0x28))((int)unaff_x20[5],0x15,param_2,param_3), unaff_x21 == 0)))) &&
     (((unaff_x20[6] == 0 ||
       ((**(code **)(param_3 + 0x30))(unaff_x20[6],0x65,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[7] == 0 ||
       ((**(code **)(param_3 + 0x30))(unaff_x20[7],0x66,param_2,param_3), unaff_x21 == 0)))))) {
    uVar2 = unaff_x20[9];
    uVar1 = unaff_x20[8] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,0x67,param_2,param_3), unaff_x21 == 0)) {
      FUN_100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
    }
  }
  return;
}



/* Entry: 100075ef4; end: 100075f07;  */

void FUN_100075ef4(void)

{
  FUN_100075d68();
  return;
}



/* Entry: 100075f08; end: 100075f0f;  */

undefined8 FUN_100075f08(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 100075f10; end: 100075faf;  */

void FUN_100075f10(undefined8 param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = 4;
  if ((param_2 & 0x1fffffff) >> 0x19 != 0) {
    lVar1 = 5;
  }
  lVar2 = 3;
  if (0x1fffff < param_2 << 3) {
    lVar2 = lVar1;
  }
  if ((param_2 & 0x1fffffff) >> 0xb == 0) {
    lVar2 = 2;
  }
  lVar1 = 1;
  if (0x7f < param_2 << 3) {
    lVar1 = lVar2;
  }
  lVar2 = *unaff_x20 + lVar1;
  if (!SCARRY8(*unaff_x20,lVar1)) {
    (**(code **)(param_4 + 0x28))(param_3,param_4);
    FUN_100075fc4();
    if (!SCARRY8(lVar2,param_3)) {
      *unaff_x20 = lVar2 + param_3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100075fb0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100075fac);
  (*pcVar3)();
}



/* Entry: 100075fb0; end: 100075fc3;  */

void FUN_100075fb0(void)

{
  FUN_100075f10();
  return;
}



/* Entry: 100075fc4; end: 1000761e3;  */

undefined8 FUN_100075fc4(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = 4;
  if ((param_1 >> 0x1c & 0xf) != 0) {
    uVar1 = 5;
  }
  uVar3 = (uint)param_1;
  uVar2 = 3;
  if (0x1fffff < uVar3) {
    uVar2 = uVar1;
  }
  uVar1 = 2;
  if (0x3fff < uVar3) {
    uVar1 = uVar2;
  }
  uVar2 = 1;
  if (0x7f < uVar3) {
    uVar2 = uVar1;
  }
  uVar1 = 10;
  if ((param_1 & 0x80000000) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1000761e4; end: 100076223;  */

void FUN_1000761e4(void)

{
  func_0x000100076008();
  return;
}



/* Entry: 100076224; end: 10007629b;  */

void FUN_100076224(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_3 & 0xff000000000000) == 0) {
        return;
      }
    }
    else if ((long)(int)param_2 == param_2 >> 0x20) {
      return;
    }
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    if (*(long *)(param_2 + 0x10) == *(long *)(param_2 + 0x18)) {
      return;
    }
  }
  (**(code **)(param_5 + 0x1c0))(param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10007629c; end: 10007631f;  */

long FUN_10007629c(ulong param_1)

{
  long lVar1;
  
  if (param_1 < 0x80) {
    return 1;
  }
  if ((long)param_1 < 0) {
    return 10;
  }
  if (param_1 >> 0x23 == 0) {
    if (param_1 < 0x200000) {
      lVar1 = 2;
      if (param_1 < 0x4000) {
        return 2;
      }
      goto LAB_100076318;
    }
    lVar1 = 4;
    param_1 = param_1 >> 0x1c;
  }
  else if (param_1 >> 0x31 == 0) {
    lVar1 = 6;
    param_1 = param_1 >> 0x2a;
  }
  else {
    lVar1 = 8;
    param_1 = param_1 >> 0x38;
  }
  if (param_1 == 0) {
    return lVar1;
  }
LAB_100076318:
  return lVar1 + 1;
}



/* Entry: 100076320; end: 1000763bb;  */

void FUN_100076320(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000763bc);
        (*pcVar1)();
      }
    }
    else {
      func_0x000107c5ec40();
      func_0x000107c613fc();
      func_0x000107c5ec34(param_1);
      if (0x7ffffffe < param_1) {
        lVar2 = 0;
        func_0x000107c5ee0c();
        func_0x000107c613fc();
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(ulong *)(lVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}



/* Entry: 1000763bc; end: 100076407;  */

void FUN_1000763bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  FUN_100076320();
  *param_1 = param_3;
  param_1[1] = uVar1;
  FUN_100076408(param_1,param_2);
  return;
}



/* Entry: 100076408; end: 10007666b;  */

void FUN_100076408(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *param_2;
  uVar11 = param_2[1];
  uVar5 = (uint)(uVar11 >> 0x20);
  uVar10 = uVar5 >> 0x1e;
  if (uVar5 >> 0x1e < 2) {
    if (uVar10 == 0) {
      func_0x00010006c090(lVar1,uVar11);
      uStack_70._0_7_ = (undefined7)uVar11;
      lStack_78 = lVar1;
      func_0x000107c610bc(&lStack_78,param_3 & 0xffffffff,uVar11 >> 0x30 & 0xff);
      uVar11 = uStack_70 & 0xffffffffffffff;
    }
    else {
      func_0x000107c6157c(uVar11 & 0x3fffffffffffffff);
      func_0x00010006c090(lVar1,uVar11);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      lStack_78 = lVar1;
      uStack_70 = uVar11 & 0x3fffffffffffffff;
      func_0x00010006c090(0,0xc000000000000000);
      FUN_10007666c(param_1,&lStack_78,param_3);
      uVar11 = uStack_70 | 0x4000000000000000;
    }
    *param_2 = lStack_78;
    param_2[1] = uVar11;
  }
  else if (uVar10 == 2) {
    func_0x000107c6157c(lVar1);
    func_0x000107c6157c(uVar11 & 0x3fffffffffffffff);
    func_0x00010006c090(lVar1,uVar11);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar8 = 0;
    lStack_78 = lVar1;
    uStack_70 = uVar11 & 0x3fffffffffffffff;
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c5ede4();
    uVar11 = uStack_70;
    lVar6 = lStack_78;
    lVar1 = *(long *)(lStack_78 + 0x10);
    lVar2 = *(long *)(lStack_78 + 0x18);
    func_0x000107c5ec30();
    if (lVar8 == 0) goto LAB_100076668;
    lVar9 = lVar8;
    func_0x000107c5ec3c();
    lVar3 = lVar1 - lVar9;
    if (SBORROW8(lVar1,lVar9)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100076660);
      (*pcVar7)();
    }
    lVar4 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100076664);
      (*pcVar7)();
    }
    func_0x000107c5ec38();
    if (lVar4 <= lVar9) {
      lVar9 = lVar4;
    }
    func_0x000107c610bc(lVar8 + lVar3,param_3,lVar9);
    *param_2 = lVar6;
    param_2[1] = uVar11 | 0x8000000000000000;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_100076668:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10007666c);
  (*pcVar7)();
}



/* Entry: 10007666c; end: 10007670f;  */

void FUN_10007666c(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x000107c5edf0();
  lVar7 = (long)*param_1;
  iVar1 = param_1[1];
  if (iVar1 < *param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100076708);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_1 + 2);
  lVar4 = lVar6;
  func_0x000107c6157c();
  func_0x000107c5ec30();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5ec3c();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      func_0x000107c5ec38();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      func_0x000107c610bc(lVar4 + lVar2,param_2,lVar5);
      func_0x000107c61574(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10007670c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100076710);
  (*pcVar3)();
}



/* Entry: 100076710; end: 100076723;  */

void FUN_100076710(void)

{
  func_0x000107c5ee28();
  return;
}



/* Entry: 100076724; end: 10007677f;  */

void FUN_100076724(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    auStack_40[0] = *(undefined1 *)(unaff_x20 + 0x30);
    lStack_38 = param_1;
    lStack_30 = param_1;
    uStack_28 = param_2;
    (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x48))
              (auStack_40,&UNK_110786ed0,&PTR_DAT_110786ee8,*(undefined8 *)(unaff_x20 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100076780);
  (*pcVar1)();
}



/* Entry: 100076780; end: 1000768a7;  */

void FUN_100076780(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar4 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  lStack_60 = param_5;
  uStack_58 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5fc7c();
  if (lVar4 != 0) {
    lVar4 = 0;
    do {
      func_0x000107c5fc98(lVar6 - extraout_x12,lVar4,param_1,param_4);
      lVar1 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000768a8);
        (*pcVar2)();
      }
      (**(code **)(lVar5 + 0x20))(lVar6,lVar6 - extraout_x12,param_4);
      (**(code **)(lStack_60 + 0x88))(lVar6,uStack_70,param_4,uStack_58,uStack_68);
      (**(code **)(lVar5 + 8))(lVar6,param_4);
      if (unaff_x21 != 0) {
        return;
      }
      lVar3 = param_1;
      func_0x000107c5fc7c(param_1,param_4);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 1000768a8; end: 1000768cf;  */

void FUN_1000768a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100076780(param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Entry: 1000768d0; end: 100076913;  */

void FUN_1000768d0(int param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  
  uVar3 = (ulong)(uint)(param_1 << 3) | param_2 & 0xff;
  pbVar1 = (byte *)*unaff_x20;
  pbVar2 = pbVar1;
  uVar4 = uVar3;
  if (0x7f < uVar3) {
    do {
      pbVar1 = pbVar2 + 1;
      *pbVar2 = (byte)uVar4 | 0x80;
      uVar3 = uVar4 >> 7;
      uVar5 = uVar4 >> 0xe;
      pbVar2 = pbVar1;
      uVar4 = uVar3;
    } while (uVar5 != 0);
  }
  *pbVar1 = (byte)uVar3;
  *unaff_x20 = pbVar1 + 1;
  return;
}



/* Entry: 100076914; end: 1000769af;  */

void FUN_100076914(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  
  FUN_1000768d0(param_2,2);
  FUN_100075c9c(param_3,param_4);
  if (unaff_x21 == 0) {
    FUN_1000769c4();
    (**(code **)(param_4 + 0x48))();
  }
  return;
}



/* Entry: 1000769b0; end: 1000769c3;  */

void FUN_1000769b0(void)

{
  FUN_100076914();
  return;
}



/* Entry: 1000769c4; end: 1000769ff;  */

void FUN_1000769c4(ulong param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  
  pbVar2 = (byte *)*unaff_x20;
  uVar1 = param_1;
  pbVar3 = pbVar2;
  if (0x7f < param_1) {
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar1 | 0x80;
      param_1 = uVar1 >> 7;
      uVar4 = uVar1 >> 0xe;
      uVar1 = param_1;
      pbVar3 = pbVar2;
    } while (uVar4 != 0);
  }
  *pbVar2 = (byte)param_1;
  *unaff_x20 = pbVar2 + 1;
  return;
}



/* Entry: 100076a00; end: 100076a6b;  */

void FUN_100076a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  FUN_1000768d0(param_2,0);
  FUN_100076a80(param_3);
  return;
}



/* Entry: 100076a6c; end: 100076a7f;  */

void FUN_100076a6c(void)

{
  FUN_100076a00();
  return;
}



/* Entry: 100076a80; end: 100076a83;  */

void FUN_100076a80(ulong param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  
  pbVar2 = (byte *)*unaff_x20;
  uVar1 = param_1;
  pbVar3 = pbVar2;
  if (0x7f < param_1) {
    do {
      pbVar2 = pbVar3 + 1;
      *pbVar3 = (byte)uVar1 | 0x80;
      param_1 = uVar1 >> 7;
      uVar4 = uVar1 >> 0xe;
      uVar1 = param_1;
      pbVar3 = pbVar2;
    } while (uVar4 != 0);
  }
  *pbVar2 = (byte)param_1;
  *unaff_x20 = pbVar2 + 1;
  return;
}



/* Entry: 100076a84; end: 100076acf;  */

void FUN_100076a84(undefined8 param_1,undefined8 param_2)

{
  FUN_1000768d0(param_2,0);
  FUN_100076a80(param_1);
  return;
}



/* Entry: 100076ad0; end: 100076ae3;  */

void FUN_100076ad0(void)

{
  FUN_100076a84();
  return;
}



/* Entry: 100076ae4; end: 100076b2f;  */

void FUN_100076ae4(undefined4 param_1,undefined8 param_2)

{
  FUN_1000768d0(param_2,0);
  FUN_100076a80(param_1);
  return;
}



/* Entry: 100076b30; end: 100076b63;  */

undefined8 FUN_100076b30(undefined8 param_1)

{
  FUN_10006c068();
  return param_1;
}



/* Entry: 100076b64; end: 100076b7f; +[SCAppLaunchSignaler signalParamedicStart] */

void FUN_100076b64(undefined8 param_1)

{
  func_0x000107c6106c();
  uRam0000000113813698 = param_1;
  return;
}



/* Entry: 100076b80; end: 100076c63; -[SCAppDelegate performParamedicCrashChecksAndAttemptRecovery] */

/* WARNING: Possible PIC construction at 0x000100076bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100076c28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100076bb8) */
/* WARNING: Removing unreachable block (ram,0x000100076c08) */
/* WARNING: Removing unreachable block (ram,0x000100076bbc) */
/* WARNING: Removing unreachable block (ram,0x000100076c2c) */
/* WARNING: Removing unreachable block (ram,0x000100076c54) */
/* WARNING: Removing unreachable block (ram,0x000100076c30) */
/* WARNING: Removing unreachable block (ram,0x000107c4c8d8) */
/* WARNING: Removing unreachable block (ram,0x00010c0c37c0) */

void FUN_100076b80(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4f8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4f8);
  func_0x000107c61180();
  func_0x000107c49efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100076c64; end: 100076c97; -[SCStartupJournalManager isInCrashLoop] */

uint FUN_100076c64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100076d98();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 100076c98; end: 100076d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100076c98(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  double dVar3;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100075034(&uStack_58,0x100076dd8,0,&UNK_110785fd0);
  dVar3 = *(double *)(param_1 + _DAT_1130843d8);
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100076d90);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar3) {
    if (dVar3 < 9.223372036854776e+18) {
      uVar2 = uStack_58;
      FUN_100076e1c(uStack_58,uStack_50,uStack_48,(long)dVar3);
      func_0x000107c6142c(uStack_58);
      func_0x00010006c090(uStack_50,uStack_48);
      if ((uVar2 & 1) != 0) {
        func_0x000104533730(1);
      }
      return (uint)uVar2 & 1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100076d98);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100076d94);
  (*pcVar1)();
}



/* Entry: 100076d98; end: 100076e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100076d98(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1130843a8;
  uVar2 = (uint)*(byte *)(unaff_x20 + _DAT_1130843a8);
  if (*(byte *)(unaff_x20 + _DAT_1130843a8) == 2) {
    lVar3 = unaff_x20;
    FUN_100076c98();
    uVar2 = (uint)lVar3;
    *(byte *)(unaff_x20 + lVar1) = (byte)lVar3 & 1;
  }
  return uVar2 & 1;
}



/* Entry: 100076e1c; end: 100077017;  */

bool FUN_100076e1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar13 = lVar11;
    do {
      bVar1 = 2 < uVar10;
      puVar14 = (undefined8 *)(param_1 + 0x18 + lVar13 * 0x60);
      lVar13 = lVar13 + -1;
LAB_100076e9c:
      if (lVar11 <= lVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100077010);
        (*pcVar6)();
      }
      if (2 < uVar10) {
        return bVar1;
      }
      uVar12 = puVar14[-0xb];
      cVar5 = *(char *)(puVar14 + -10);
      lVar15 = puVar14[-9];
      uVar3 = puVar14[-1];
      uVar4 = *puVar14;
      uVar16 = puVar14[-2];
      puVar7 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
      func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
      func_0x000107c61434(uVar16);
      FUN_10006c00c(uVar3,uVar4);
      func_0x000107c4f2b0(puVar7);
      func_0x000107c61180();
      puVar8 = puVar7;
      func_0x000107c3e148();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = puVar8;
      func_0x000107c5fc54(puVar8,PTR___sSSN_11034da80);
      func_0x000107c61170(puVar8);
      uVar9 = 0;
      FUN_100077018(0x6964656d61726150,0xed00007473655463,puVar7);
      func_0x000107c6142c(uVar16);
      func_0x000107c6142c(puVar7);
      func_0x00010006c090(uVar3,uVar4);
      lVar2 = 600;
      if ((uVar9 & 1) == 0) {
        lVar2 = 0x3c;
      }
      if (lVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100077014);
        (*pcVar6)();
      }
      if (SBORROW8(param_4,lVar15)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100077018);
        (*pcVar6)();
      }
      if (lVar2 < param_4 - lVar15) {
        return bVar1;
      }
      if (cVar5 != '\x01') {
        if (uVar12 == 10) {
          return bVar1;
        }
        if (uVar12 == 3) goto LAB_100076fc4;
LAB_100076e88:
        lVar13 = lVar13 + -1;
        puVar14 = puVar14 + -0xc;
        if (lVar13 == -1) break;
        goto LAB_100076e9c;
      }
      if ((uVar12 - 4 < 6) || (uVar12 < 3)) goto LAB_100076e88;
      if (uVar12 != 3) {
        return bVar1;
      }
LAB_100076fc4:
      uVar10 = uVar10 + 1;
    } while (lVar13 != 0);
  }
  return 2 < uVar10;
}



/* Entry: 100077018; end: 100077083;  */

bool FUN_100077018(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(param_3 + 0x28);
  lVar4 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) break;
    uVar2 = plVar3[-1];
    lVar1 = *plVar3;
    if (uVar2 == param_1 && lVar1 == param_2) break;
    plVar3 = plVar3 + 2;
    func_0x000107c605b8(uVar2,lVar1,param_1,param_2,0);
  } while ((uVar2 & 1) == 0);
  return lVar4 != 0;
}



/* Entry: 100077084; end: 10007709f; +[SCAppLaunchSignaler signalParamedicComplete] */

void FUN_100077084(undefined8 param_1)

{
  func_0x000107c6106c();
  uRam00000001138136a0 = param_1;
  return;
}



/* Entry: 1000770a0; end: 1000770ab; +[SCGrapheneV2Impl bindGrapheneImplementation] */

void FUN_1000770a0(void)

{
  code **ppcStack_30;
  code *pcStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&ppcStack_30;
  ppcStack_30 = &pcStack_28;
  pcStack_28 = FUN_100077ef8;
  if (lRam0000000113846aa8 != -1) {
    ppuStack_20 = &puStack_18;
    func_0x000107c60c38(0x113846aa8,&ppuStack_20,FUN_100077108);
  }
  return;
}



/* Entry: 1000770ac; end: 100077107;  */

void FUN_1000770ac(undefined8 param_1)

{
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&puStack_30;
  puStack_30 = &uStack_28;
  if (lRam0000000113846aa8 != -1) {
    ppuStack_20 = &puStack_18;
    uStack_28 = param_1;
    func_0x000107c60c38(0x113846aa8,&ppuStack_20,FUN_100077108);
  }
  return;
}



/* Entry: 100077108; end: 100077123;  */

void FUN_100077108(undefined8 *param_1)

{
  PTR_DAT_113403208 = *(undefined **)**(undefined8 **)*param_1;
  return;
}



/* Entry: 100077124; end: 10007713f;  */

void FUN_100077124(void)

{
  func_0x000107c61160(PTR_PTR_1126b6be8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100077140; end: 1000771c3; -[SCDelayedEntryPointHandlerContextStreamImpl init] */

undefined1 * FUN_100077140(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7340;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c435e4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    func_0x000107c61170(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000771c4; end: 100077263; -[SCBehaviorSubject init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000771c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270e5b8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c9690;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127967f4) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126e3010;
    func_0x000107c610f4();
    func_0x000107c47ba0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127967f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127967f8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100077264; end: 100077297; -[SCSubject init] */

void FUN_100077264(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270e5c8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100077298; end: 1000772b7; -[SCMulticastObserver .cxx_construct] */

void FUN_100077298(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1000772b8; end: 1000772bf; -[SCAssertingObserver .cxx_construct] */

void FUN_1000772b8(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1000772c0; end: 10007734f; -[SCAssertingObserver initWithObserver:] */

undefined1 * FUN_1000772c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270e628;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100077350; end: 100077357; -[SCObservable first] */

void FUN_100077350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c268570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_take__112677b80,1);
  return;
}



/* Entry: 100077358; end: 10007738f; -[SCObservable take:] */

void FUN_100077358(void)

{
  func_0x000107c610f4(PTR_PTR_1126e2f70);
  func_0x000107c47d90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100077390; end: 1000773df; -[SCTakeObservable initWithParentObservable:take:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100077390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e520;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithParentObservable__1125ea888);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112796730) = param_4;
  }
  return;
}



/* Entry: 1000773e0; end: 100077463; -[SCDerivedObservable initWithParentObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000773e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270e4e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127966f8;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100077464; end: 1000774c3; +[SCSystemServicesProviderImplementation scopeGraphAppStartupViolationMonitor] */

void FUN_100077464(void)

{
  if (lRam0000000112d7f138 != -1) {
    func_0x000107c61568(0x112d7f138,FUN_1000774c4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000112d7f140);
  return;
}



/* Entry: 1000774c4; end: 1000774fb;  */

void FUN_1000774c4(void)

{
  undefined8 uVar1;
  
  func_0x0001000774a4(0);
  func_0x000107c610f8();
  uVar1 = 1;
  FUN_1000774fc();
  uRam0000000112d7f140 = uVar1;
  return;
}


