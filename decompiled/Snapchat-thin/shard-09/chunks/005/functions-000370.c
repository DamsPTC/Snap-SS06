/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ea6830; end: 106ea690f; -[SCSpectaclesTransferController initiateContentTransferForContentIds:withStartSource:] */

void FUN_106ea6830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea6910; end: 106ea6a13;  */

void FUN_106ea6910(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f960();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ea6a14;
    puStack_50 = &UNK_110870ac0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    lVar5 = lVar4;
    uStack_48 = uVar6;
    func_0x00010bfaea20(lVar4,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bdc8d80(lVar1,param_2,lVar5,*(undefined8 *)(param_1 + 0x30),0);
    _objc_release(lVar5);
    _objc_release(uStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea6a14; end: 106ea6a5f;  */

undefined8 FUN_106ea6a14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc3540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106ea6a60; end: 106ea6b3f; -[SCSpectaclesTransferController initiateAnimatedThumbnailTransferForContentIds:withStartSource:] */

void FUN_106ea6a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea6b40; end: 106ea6c43;  */

void FUN_106ea6b40(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 8;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f960();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106ea6c44;
    puStack_50 = &UNK_110870ac0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    lVar5 = lVar4;
    uStack_48 = uVar6;
    func_0x00010bfaea20(lVar4,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bdc8d80(lVar1,param_2,lVar5,*(undefined8 *)(param_1 + 0x30),1);
    _objc_release(lVar5);
    _objc_release(uStack_48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea6c44; end: 106ea6cc7;  */

undefined8 FUN_106ea6c44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0c6c20();
  if ((int)uVar2 == 0xc) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010bdc3540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106ea6cc8; end: 106ea6d6f; -[SCSpectaclesTransferController cancelTransfer] */

void FUN_106ea6cc8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ea6d70; end: 106ea6da3;  */

void FUN_106ea6d70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddafa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea6da4; end: 106ea6eb7; -[SCSpectaclesTransferController currentTransferSession] */

void FUN_106ea6da4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106ea6eb8;
  uStack_40 = 0x106ea6ec8;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ea6eb8; end: 106ea6ecf;  */

void FUN_106ea6eb8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106ea6ed0; end: 106ea6f27;  */

void FUN_106ea6ed0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c27a300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea6f28; end: 106ea703b; -[SCSpectaclesTransferController currentMutableTransferSession] */

void FUN_106ea6f28(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106ea6eb8;
  uStack_40 = 0x106ea6ec8;
  uStack_38 = 0;
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ea703c; end: 106ea7093;  */

void FUN_106ea703c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea7094; end: 106ea7173; -[SCSpectaclesTransferController prioritizeTransferForContent:context:] */

void FUN_106ea7094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea7174; end: 106ea718b;  */

void FUN_106ea7174(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106ea718c; end: 106ea7263; -[SCSpectaclesTransferController dataFlowsRequestStartedPreparing:] */

void FUN_106ea718c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea7264; end: 106ea72ab;  */

void FUN_106ea7264(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x40))) {
    func_0x00010be51de0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea72ac; end: 106ea73db; -[SCSpectaclesTransferController dataFlowsRequest:startedExecutingTask:channelConnectionTimeInMs:] */

void FUN_106ea72ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea73dc; end: 106ea756b;  */

void FUN_106ea73dc(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((lVar1 != 0) && (*(long *)(param_2 + 0x20) == *(long *)(lVar1 + 0x40))) {
    if (*(long *)(lVar1 + 0x68) == 0) {
      if (*(long *)(param_2 + 0x28) != 0) {
        func_0x00010be51dc0(lVar1);
      }
    }
    else {
      func_0x00010c26f3a0();
      func_0x00010c0df720(param_1 * -1000.0,puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be51dc0(lVar1);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x70) = 0;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d3078;
    uVar7 = *(ulong *)(param_2 + 0x30);
    _objc_retain(uVar7);
    _objc_opt_class(puVar2);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar5 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    if (uVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar5 = uVar7;
      func_0x00010c07c8e0();
      if ((uVar5 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(lVar1 + 0x70);
        *(undefined **)(lVar1 + 0x70) = puVar2;
        _objc_release(uVar3);
      }
      lVar6 = lVar1;
      func_0x00010beb2720();
      if ((int)lVar6 != 0) {
        func_0x00010c187d80(*(undefined8 *)(lVar1 + 0x48));
        lVar6 = lVar1 + 0x10;
        _objc_loadWeakRetained(lVar6);
        uVar3 = *(undefined8 *)(lVar1 + 0x48);
        func_0x00010c27a300(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4da40(lVar6);
        _objc_release(uVar3);
        _objc_release(lVar6);
      }
    }
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea756c; end: 106ea766b; -[SCSpectaclesTransferController dataFlowsRequest:updatedProgressForTask:] */

void FUN_106ea756c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea766c; end: 106ea774f;  */

void FUN_106ea766c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126d3078;
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar2 + 0x40))) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    _objc_retain(uVar7);
    _objc_opt_class(puVar3);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar1 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar7);
    if ((uVar1 != 0) && (lVar5 = lVar2, func_0x00010beb2720(), (int)lVar5 != 0)) {
      lVar5 = lVar2 + 0x10;
      _objc_loadWeakRetained(lVar5);
      uVar6 = *(undefined8 *)(lVar2 + 0x48);
      func_0x00010c27a300(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4da80(lVar5);
      _objc_release(uVar6);
      _objc_release(lVar5);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106ea7750; end: 106ea784f; -[SCSpectaclesTransferController dataFlowsRequest:executedTask:] */

void FUN_106ea7750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea7850; end: 106ea7a07;  */

void FUN_106ea7850(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  puVar7 = PTR_PTR_1126d3078;
  if ((lVar1 == 0) || (*(long *)(param_2 + 0x20) != *(long *)(lVar1 + 0x40))) goto LAB_106ea79f0;
  uVar6 = *(ulong *)(param_2 + 0x28);
  _objc_retain(uVar6);
  _objc_opt_class(puVar7);
  uVar9 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar7);
  uVar3 = uVar6;
  if ((uVar9 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar6);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(long *)(lVar1 + 0x70) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      func_0x00010c26f3a0();
      func_0x00010c0df720(-param_1,puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c27a300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6740(uVar8);
    _objc_release(uVar2);
    lVar4 = lVar1;
    func_0x00010beb2720();
    if ((int)lVar4 != 0) {
      func_0x00010c0bbc20(*(undefined8 *)(lVar1 + 0x48));
      uVar3 = uVar6;
      func_0x00010bf4bc60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c137620();
      uVar9 = uVar3;
      func_0x00010c070dc0();
      if ((int)uVar9 == 0) {
        lVar4 = *(long *)(param_2 + 0x28);
        func_0x00010c27dd80();
        if (lVar4 == 0x15) {
          uVar9 = 0;
          goto LAB_106ea79b8;
        }
      }
      else {
        uVar9 = uVar3;
        func_0x00010c0745a0();
        lVar4 = *(long *)(param_2 + 0x28);
        func_0x00010c27dd80();
        if (lVar4 == 0x15) {
LAB_106ea79b8:
          uVar5 = uVar3;
          func_0x00010c070dc0();
          if (((uVar5 & 1) == 0) && ((uVar9 & 1) == 0)) goto LAB_106ea79d8;
        }
        else if ((int)uVar9 == 0) goto LAB_106ea79d8;
        func_0x00010bde2a20(lVar1);
      }
LAB_106ea79d8:
      _objc_release(uVar3);
    }
    _objc_release(puVar7);
  }
  _objc_release(uVar6);
LAB_106ea79f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea7a08; end: 106ea7a93; -[SCSpectaclesTransferController _completeContent:] */

void FUN_106ea7a08(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23e340();
  if ((uVar1 & 1) == 0) {
    func_0x00010be5d300(param_1,param_2,param_3);
  }
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c27a300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d9e0(lVar2,param_2,param_1,uVar3);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea7a94; end: 106ea7b6b; -[SCSpectaclesTransferController dataFlowsRequestCompleted:] */

void FUN_106ea7a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea7b6c; end: 106ea7c2b;  */

void FUN_106ea7b6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x40))) {
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c27a300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1ec0(uVar4,param_2,uVar2,1);
    _objc_release(uVar2);
    lVar3 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar3);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c27a300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4da00(lVar3,param_2,lVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010bddf3e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea7c2c; end: 106ea7d03; -[SCSpectaclesTransferController dataFlowsRequestCancelled:] */

void FUN_106ea7c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea7d04; end: 106ea7d93;  */

void FUN_106ea7d04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == *(long *)(lVar1 + 0x40))) {
    lVar2 = lVar1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c27a300(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4d9c0(lVar2,param_2,lVar1,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    func_0x00010bddf3e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea7d94; end: 106ea7e93; -[SCSpectaclesTransferController dataFlowsRequest:failedWithError:] */

void FUN_106ea7d94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea7e94; end: 106ea80ef;  */

void FUN_106ea7e94(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar2 == 0) || (*(long *)(param_1 + 0x20) != *(long *)(lVar2 + 0x40))) goto LAB_106ea80b4;
  lVar8 = *(long *)(lVar2 + 0x58);
  uVar3 = *(undefined8 *)(lVar2 + 0x48);
  func_0x00010c27a300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b1ee0(*(undefined8 *)(lVar2 + 0x20));
  lVar6 = lVar2 + 0x10;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf4da20();
  _objc_release(lVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0720c0();
  if ((int)uVar5 == 0) {
    _objc_release(uVar4);
LAB_106ea7f80:
    func_0x00010be51da0(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar5 == 0) {
      bVar1 = false;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x28);
      func_0x00010bf3ec40();
      bVar1 = lVar6 == 5;
    }
    _objc_release(uVar4);
    if ((lVar8 != 0) || (bVar1)) {
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = auStack_80;
      _objc_copyWeak(puVar7,param_1 + 0x30);
      func_0x00010c0f7fc0(uVar4);
    }
    else {
      *(undefined8 *)(lVar2 + 0x58) = 1;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106ea80f0;
      puStack_60 = &UNK_1108434b0;
      puVar7 = auStack_58;
      _objc_copyWeak(puVar7,param_1 + 0x30);
      func_0x00010c0f7fc0(uVar4);
    }
    _objc_release(uVar4);
    _objc_destroyWeak(puVar7);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010bf3ec40();
    _objc_release(uVar4);
    if (lVar6 != 3) goto LAB_106ea7f80;
    func_0x00010be59ea0(lVar2);
  }
  func_0x00010bddf3e0(lVar2);
  _objc_release(uVar3);
LAB_106ea80b4:
  _objc_release(lVar2);
  return;
}



/* Entry: 106ea80f0; end: 106ea815f;  */

void FUN_106ea80f0(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be04560(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea8160; end: 106ea828b; -[SCSpectaclesTransferController _logTransferFlowStarted] */

void FUN_106ea8160(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c27a300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126d3080;
  _objc_alloc(PTR_PTR_1126d3080);
  uVar3 = uVar1;
  func_0x00010bf16f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c282ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  uVar7 = uVar1;
  func_0x00010c1603a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 8;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c055320(puVar2,param_2,uVar3,uVar6,uVar7,lVar8);
  func_0x00010c0b02e0(uVar9,param_2,puVar2,*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar2);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea828c; end: 106ea83b3; -[SCSpectaclesTransferController _logTransferFlowCancelled] */

void FUN_106ea828c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c27a300(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3080;
  _objc_alloc(PTR_PTR_1126d3080);
  uVar3 = uVar1;
  func_0x00010bf16f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c282ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  uVar7 = uVar1;
  func_0x00010c1603a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 8;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c055320(puVar2,param_2,uVar3,uVar6,uVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c0b02c0(*(undefined8 *)(param_1 + 0x20),param_2,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea83b4; end: 106ea83ef; -[SCSpectaclesTransferController _logConnectionStart] */

void FUN_106ea83b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bebe8e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b01c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea83f0; end: 106ea853b; -[SCSpectaclesTransferController _logConnectionOpenWithConnectionTimeInMs:] */

void FUN_106ea83f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c24cc20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c2a52c0(uVar6,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x00010c27a300();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf35520();
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = 0;
    uVar6 = param_3;
  }
  else {
    lVar2 = lVar4;
    func_0x00010bf35520();
    if (lVar2 != 1) goto LAB_106ea84e0;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = 0;
    uVar1 = param_3;
  }
  func_0x00010c0b1f00(uVar5,param_2,lVar4,uVar6,uVar1,uVar3);
LAB_106ea84e0:
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x00010bebe8e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0220(uVar6,param_2,lVar2);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar6);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea853c; end: 106ea859f; -[SCSpectaclesTransferController _logConnectionFailure] */

void FUN_106ea853c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bebe8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 10;
  func_0x000109026a90(10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0160(uVar2,param_2,param_1,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea85a0; end: 106ea891f; -[SCSpectaclesTransferController _specsConnectionInfo] */

void FUN_106ea85a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c27a300();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1888;
  _objc_alloc();
  uVar4 = uVar1;
  func_0x00010bf16f40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c24cc20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar8 = param_1;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c2a52c0(uVar7,param_2,lVar8);
  uVar10 = uVar2;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar2;
  func_0x00010bf40c40();
  uVar16 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c06e420();
  uVar18 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf17500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar20 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c257160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar22 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246060();
  uVar23 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db2a0();
  uVar24 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52980();
  uVar25 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5660();
  uVar26 = uVar2;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c08a3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf98540();
  func_0x00010c045300(puVar3,param_2,uVar5,1,uVar9,uVar10,uVar12,uVar14,uVar15,(char)uVar17);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ea8920; end: 106ea89a3; -[SCSpectaclesTransferController _addTransferRequestWithStartSource:] */

void FUN_106ea8920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27f960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bdc8d80(param_1,param_2,lVar3,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106ea89a4; end: 106ea8dfb; -[SCSpectaclesTransferController _addTransferRequestForContents:withStartSource:animatedThumbnailOnly:] */

void FUN_106ea89a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_3;
  _objc_retain(param_3);
  lVar3 = param_3;
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar10 = param_3;
    func_0x00010bf529e0();
    if (lVar10 == 0) goto LAB_106ea8db8;
    lVar4 = param_3;
    func_0x00010bdda4e0(param_1,param_2,param_3);
    lVar10 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010c06e7e0();
    _objc_release(lVar11);
    _objc_release(lVar10);
    if ((param_5 == 0) || ((int)lVar1 == 0)) {
      func_0x000106ebb224();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106ebb518();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar10 = lVar3;
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(lVar3);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
      if (lVar4 != 0) {
        lVar10 = *plStack_120;
        do {
          lVar11 = 0;
          do {
            if (*plStack_120 != lVar10) {
              _objc_enumerationMutation(lVar3);
            }
            uVar2 = *(undefined8 *)(lStack_128 + lVar11 * 8);
            lVar1 = param_1 + 8;
            _objc_loadWeakRetained(lVar1);
            lVar5 = lVar1;
            func_0x00010c263480();
            func_0x00010c167000(uVar2,param_2,lVar5);
            _objc_release(lVar1);
            lVar11 = lVar11 + 1;
          } while (lVar4 != lVar11);
          lVar4 = lVar3;
          func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_e8,0x10);
        } while (lVar4 != 0);
      }
      _objc_release(lVar3);
      *(undefined8 *)(param_1 + 0x50) = param_4;
      puVar6 = PTR_PTR_1126b6720;
      _objc_alloc();
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      lVar10 = param_1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c100(puVar6,param_2,lVar4,1,uVar2,0,lVar3,1,param_1,lVar10,0);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined **)(param_1 + 0x40) = puVar6;
      _objc_release(uVar2);
      _objc_release(lVar10);
      _objc_release(lVar4);
      func_0x00010c064d40(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x40));
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      lVar10 = lVar4;
      func_0x00010bf02380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef95c0();
      _objc_release(lVar10);
      _objc_release(lVar4);
      lVar10 = param_1;
      func_0x00010be3e540(param_1);
      puVar6 = PTR_PTR_1126d2fe8;
      _objc_alloc();
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c00c120(puVar6,param_2,lVar4,(uint)lVar10 ^ 1);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      *(undefined **)(param_1 + 0x48) = puVar6;
      _objc_release(uVar2);
      _objc_release(lVar4);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c27a200(uVar2);
      func_0x00010c2197c0(*(undefined8 *)(param_1 + 0x48),param_2,uVar2);
      uVar7 = param_1 + 8;
      _objc_loadWeakRetained();
      uVar8 = uVar7;
      func_0x00010bfd38e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c06e7e0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((uVar9 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)(param_1 + 0x68);
        *(undefined **)(param_1 + 0x68) = puVar6;
        _objc_release(uVar2);
      }
      lVar10 = param_1 + 0x10;
      _objc_loadWeakRetained();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c27a300(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf4da60(lVar10,param_2,param_1,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar10);
      func_0x00010be59ec0(param_1);
    }
  }
  else {
    lVar10 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar11;
    func_0x00010c06e7e0();
    _objc_release(lVar11);
    _objc_release(lVar10);
    if ((int)lVar1 == 0) goto LAB_106ea8db8;
    if (param_5 == 0) {
      func_0x000106ebb224();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000106ebb518();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar10 = lVar3;
    func_0x00010bf529e0();
    if (lVar10 != 0) {
      func_0x00010befbe00(*(undefined8 *)(param_1 + 0x18),param_2,lVar3,
                          *(undefined8 *)(param_1 + 0x40));
      lVar4 = param_1 + 0x10;
      _objc_loadWeakRetained();
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c27a300(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4d9a0(lVar4,param_2,param_1,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar4);
      lVar4 = param_1;
    }
  }
  _objc_release(lVar3);
LAB_106ea8db8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  param_3 = param_3 + 8;
  _objc_loadWeakRetained(param_3);
  lVar3 = lVar4;
  func_0x00010c0b8600(lVar4,param_2,&PTR___NSConcreteGlobalBlock_110981ec8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  func_0x00010bf2df20(param_3,param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ea8dfc; end: 106ea8e73; -[SCSpectaclesTransferController _cancelBackupForContents:] */

void FUN_106ea8dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110981ec8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf2df20(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea8e74; end: 106ea8e7b;  */

void FUN_106ea8e74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 106ea8e7c; end: 106ea8ef7; -[SCSpectaclesTransferController _cancelTransferRequest] */

void FUN_106ea8e7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bf2e1e0(*(undefined8 *)(param_1 + 0x18));
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c27a300(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4d9c0(lVar1);
    _objc_release(uVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
    return;
  }
  return;
}



/* Entry: 106ea8ef8; end: 106ea8f3f; -[SCSpectaclesTransferController _isBackgrounded] */

bool FUN_106ea8ef8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0(PTR_PTR_1126ae520);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x2;
}



/* Entry: 106ea8f40; end: 106ea8fcb; -[SCSpectaclesTransferController _cleanup] */

void FUN_106ea8f40(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c13d340();
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf02380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cd20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 106ea8fcc; end: 106ea8fd3; -[SCSpectaclesTransferController _retryTransfer] */

void FUN_106ea8fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc8db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__addTransferRequestWithStartSour_11254fd08,
             *(undefined8 *)(param_1 + 0x50));
  return;
}



/* Entry: 106ea8fd4; end: 106ea913f; -[SCSpectaclesTransferController _markContentTransferredAfterTransferCompleteIfNeeded:] */

undefined * FUN_106ea8fd4(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c077660();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126b6720;
    _objc_alloc(PTR_PTR_1126b6720);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    puVar4 = PTR_PTR_1126d3088;
    _objc_alloc();
    func_0x00010c002b20();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c100(puVar3,param_2,lVar1,2,0,0,puVar5,1,param_1,lVar2,0);
    _objc_release(lVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar1);
    puVar4 = puVar3;
    func_0x00010c064d40(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bf4c0c0(puVar4);
  return (undefined *)(ulong)(((ulong)(puVar4 + -3) & 0xfffffffffffffffd) != 0);
}



/* Entry: 106ea9140; end: 106ea9163; -[SCSpectaclesTransferController _shouldAnnounceUpdatesForTask:] */

bool FUN_106ea9140(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf4c0c0(param_3);
  return (param_3 - 3U & 0xfffffffffffffffd) != 0;
}



/* Entry: 106ea9164; end: 106ea94a3; -[SCSpectaclesTransferController _displayErrorAlertViewShouldAddRetryButton:] */

void FUN_106ea9164(float param_1,undefined *param_2,undefined1 *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_4;
  func_0x00010be02aa0();
  puVar2 = PTR_PTR_1126af180;
  puStack_f8 = puVar1;
  if (param_2[0x30] == '\x01') {
    func_0x000109025078();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = auStack_88;
    _objc_initWeak(puVar3,param_2);
    puVar4 = PTR_PTR_1126af180;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if ((int)param_4 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_80 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_4 = puVar4;
    }
    else {
      func_0x000109025168();
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = puVar1;
      param_1 = -32.0;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106ea94a4;
      puStack_98 = &UNK_110848a18;
      _objc_copyWeak(auStack_90,auStack_88);
      func_0x00010beef320();
      _objc_retainAutoreleasedReturnValue();
      param_4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar4;
      puStack_70 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar4 = auStack_90;
      _objc_destroyWeak(puVar4);
    }
    unaff_x23 = PTR_PTR_1126af4d8;
    func_0x000109025240();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = unaff_x24;
    func_0x00010c267460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar5);
    _objc_release();
    if (14.0 <= (float)(int)param_1) {
      func_0x000109025270();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000109025258();
      _objc_retainAutoreleasedReturnValue();
    }
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_106ea95c4;
    puStack_c0 = &UNK_1108485e8;
    unaff_x25 = &puStack_d8;
    param_3 = auStack_88;
    _objc_copyWeak(auStack_b8,param_3);
    func_0x00010beff880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    _objc_release(puVar4);
    unaff_x22 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x23;
    func_0x00010c235c00();
    _objc_release(unaff_x22);
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    *(undefined **)(param_2 + 0x60) = unaff_x23;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_b8);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_88);
    _objc_release();
    puStack_f8 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 4);
  _objc_destroyWeak(auStack_88);
  puVar1 = puStack_f8;
  __Unwind_Resume();
  pcStack_e8 = FUN_106ea94a4;
  puStack_120 = unaff_x24;
  puStack_118 = unaff_x23;
  puStack_110 = unaff_x22;
  puStack_108 = param_4;
  puStack_100 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(puVar4);
  puVar2 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)(puVar2 + 0x38);
    _objc_copyWeak(auStack_128,puVar1 + 0x20);
    func_0x00010c0f7fc0(uVar6);
    _objc_destroyWeak(auStack_128);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea94a4; end: 106ea957f;  */

void FUN_106ea94a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106ea9580; end: 106ea95b3;  */

void FUN_106ea9580(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be970e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea95b4; end: 106ea95c3;  */

void FUN_106ea95b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,0);
  return;
}



/* Entry: 106ea95c4; end: 106ea95fb;  */

void FUN_106ea95c4(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea95fc; end: 106ea9653; -[SCSpectaclesTransferController _dismissErrorAlertView] */

void FUN_106ea95fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar1 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf83780();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106ea9654; end: 106ea96e7; -[SCSpectaclesTransferController .cxx_destruct] */

void FUN_106ea9654(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ea96e8; end: 106ea97c3; -[SCSpectaclesFirmwareUpdater initWithDevice:performer:] */

undefined1 *
FUN_106ea96e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7aa8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_3);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)((long)puVar1 + 0x38);
    _objc_loadWeakRetained(puVar3);
    puVar4 = puVar3;
    func_0x00010bf6ff00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ea97c4; end: 106ea9c4b; -[SCSpectaclesFirmwareUpdater _transitionToState:] */

void FUN_106ea97c4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010c252440();
  if (puVar1 == param_3) {
    return;
  }
  puVar1 = param_1;
  func_0x00010c252440();
  func_0x00010c209fc0(param_1);
  puVar3 = PTR_PTR_1126b6718;
  if ((long)param_3 < 4) {
    puVar3 = param_1;
    puVar1 = param_1;
    if ((long)param_3 < 2) {
      if (param_3 == (undefined *)0x0) {
        func_0x00010bec3b00(param_1);
        func_0x00010c1d7380(param_1);
        func_0x00010c1d8f40(param_1);
        goto LAB_106ea9ae0;
      }
      if (param_3 != (undefined *)0x1) goto LAB_106ea9ae0;
      func_0x00010bec2000(param_1);
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf6ff00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != (undefined *)0x2) {
        if (param_3 != (undefined *)0x3) goto LAB_106ea9ae0;
        puVar3 = PTR_PTR_1126b6718;
        func_0x00010bfb0a20(PTR_PTR_1126b6718);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106ea9ac8;
      }
      func_0x00010bec3b00(param_1);
      puVar2 = PTR_PTR_1126b6718;
      func_0x00010bfb08a0(PTR_PTR_1126b6718);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9fe40(param_1);
      _objc_release(puVar2);
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf6ff00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf6fe00(0,puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  else {
    if ((long)param_3 < 8) {
      if (param_3 == (undefined *)0x4) {
        func_0x00010bfb09c0(PTR_PTR_1126b6718);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_3 != (undefined *)0x6) goto LAB_106ea9ae0;
        puVar1 = param_1;
        func_0x00010bf6fd20(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf6ff00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010bf6fd20(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6fe00(0,puVar3);
        _objc_release(puVar2);
        _objc_release(puVar3);
        _objc_release(puVar1);
        puVar3 = PTR_PTR_1126b6718;
        func_0x00010bfb0980(PTR_PTR_1126b6718);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (param_3 != (undefined *)0x8) {
        puVar3 = param_1;
        if (param_3 == (undefined *)0x9) {
          func_0x00010bf6fd20(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar3;
          func_0x00010bf6ff00();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010bf6fd20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6fe00(0,puVar1);
          _objc_release(puVar2);
          _objc_release(puVar1);
        }
        else {
          if (param_3 != (undefined *)0xa) goto LAB_106ea9ae0;
          if (((undefined *)0x6 < puVar1 + -1) ||
             ((0x6fU >> (ulong)((uint)(puVar1 + -1) & 0x1f) & 1) == 0)) goto LAB_106ea9c30;
          func_0x00010bf6fd20(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar3;
          func_0x00010bf6ff00();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010bf6fd20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6fe00(0,puVar1);
          _objc_release(puVar2);
          _objc_release(puVar1);
        }
        _objc_release(puVar3);
LAB_106ea9c30:
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
        return;
      }
      func_0x00010bfb09e0(PTR_PTR_1126b6718);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106ea9ac8:
    func_0x00010be9fe40(param_1);
  }
  _objc_release(puVar3);
LAB_106ea9ae0:
  puVar1 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    func_0x00010c2197e0(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf02380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cd20();
  }
  else {
    func_0x00010c283380(param_1);
    func_0x00010c2197e0(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf02380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef95c0();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea9c4c; end: 106ea9d23; -[SCSpectaclesFirmwareUpdater startFirmwareUpdate:] */

void FUN_106ea9c4c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106ea9d24; end: 106ea9d6f;  */

void FUN_106ea9d24(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c252440();
  if (lVar2 == 0) {
    func_0x00010c21c480(lVar1,param_2,*(undefined1 *)(param_1 + 0x28));
    func_0x00010becf280(lVar1,param_2,4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ea9d70; end: 106ea9e67; -[SCSpectaclesFirmwareUpdater applyFirmwareUpdatePatch:] */

void FUN_106ea9d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea9e68; end: 106ea9f2b;  */

void FUN_106ea9e68(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c252440();
  if (lVar2 == 5) {
    lVar2 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2f9e0();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c283380();
    ppuVar1 = &PTR_PTR_1126c1aa0;
    if ((int)lVar2 == 0) {
      ppuVar1 = &PTR_PTR_1126c1a98;
    }
    puVar3 = *ppuVar1;
    _objc_alloc(puVar3);
    func_0x00010c012f20();
    func_0x00010c21cfe0(param_1,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010becf280(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea9f2c; end: 106ea9ff3; -[SCSpectaclesFirmwareUpdater revertFirmwareBinary] */

void FUN_106ea9f2c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ea9ff4; end: 106eaa033;  */

void FUN_106ea9ff4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 5) {
    func_0x00010becf280(param_1,param_2,3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaa034; end: 106eaa12b; -[SCSpectaclesFirmwareUpdater requestUpdateWithParameters:] */

void FUN_106eaa034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eaa12c; end: 106eaa18f;  */

void FUN_106eaa12c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c252440();
  if (lVar4 == 5) {
    func_0x00010c1d8f40(lVar3,param_2,*(undefined8 *)(param_1 + 0x20));
    iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c286a60();
    uVar1 = 6;
    if (iVar2 == 0) {
      uVar1 = 8;
    }
    func_0x00010becf280(lVar3,param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106eaa190; end: 106eaa257; -[SCSpectaclesFirmwareUpdater cancelUpdate] */

void FUN_106eaa190(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106eaa258; end: 106eaa287;  */

void FUN_106eaa258(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becf280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaa288; end: 106eaa2e3; -[SCSpectaclesFirmwareUpdater _sendRequest:] */

void FUN_106eaa288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1d7380(param_1,param_2,param_3);
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb0d00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106eaa2e4; end: 106eaa48b; -[SCSpectaclesFirmwareUpdater _startUpload] */

void FUN_106eaa2e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010c28e840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    puVar3 = PTR_PTR_1126b6720;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c28e840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c100();
    func_0x00010c21cc80(param_1);
    _objc_release(puVar3);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = param_1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28dae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064d40(lVar1);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar2;
  func_0x00010c28dae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = lVar2;
    func_0x00010bf6fd20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c28dae0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar1);
    func_0x00010c21cc80(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c21cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setUploadTask__112664e20,0);
    return;
  }
  return;
}



/* Entry: 106eaa48c; end: 106eaa547; -[SCSpectaclesFirmwareUpdater _stopUpload] */

void FUN_106eaa48c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010c28dae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c28dae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c21cc80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c21cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setUploadTask__112664e20,0);
    return;
  }
  return;
}



/* Entry: 106eaa548; end: 106eaa583; -[SCSpectaclesFirmwareUpdater _firmwareUploadTaskDidSucceed] */

void FUN_106eaa548(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,2);
    return;
  }
  return;
}



/* Entry: 106eaa584; end: 106eaa58b; -[SCSpectaclesFirmwareUpdater responseMonitorState] */

undefined8 FUN_106eaa584(void)

{
  return 0;
}



/* Entry: 106eaa58c; end: 106eaa65b; -[SCSpectaclesFirmwareUpdater handleResponse:] */

void FUN_106eaa58c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0ef2c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0ef2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar1 != lVar2) goto LAB_106eaa648;
    func_0x00010c1d7380(param_1,param_2,0);
    lVar1 = param_3;
    func_0x00010c13bcc0();
    if (lVar1 != 4) {
      func_0x00010becf280(param_1,param_2,10);
      goto LAB_106eaa648;
    }
  }
  lVar1 = param_3;
  func_0x00010bfd7220();
  if ((int)lVar1 != 0) {
    func_0x00010be28700(param_1,param_2,param_3);
  }
LAB_106eaa648:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eaa65c; end: 106eaa9fb; -[SCSpectaclesFirmwareUpdater _handlePassiveUpdateResponse:] */

void FUN_106eaa65c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf146a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  dVar10 = 60.0;
  lVar3 = lVar2;
  func_0x00010c0c1b80();
  _objc_release(lVar2);
  lVar2 = param_1;
  if ((int)lVar3 != 0) {
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf6ff00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fe00(0,lVar3,param_2,param_1,0xf);
    lVar4 = param_1;
    goto LAB_106eaa9b4;
  }
  lVar3 = lVar1;
  func_0x00010c28c3a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  dVar11 = dVar10;
  func_0x00010c28c380(lVar1);
  if (0.0 <= dVar10 + dVar11) {
LAB_106eaa82c:
    _objc_release(lVar3);
  }
  else {
    lVar4 = param_3;
    func_0x00010bf14680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = param_1;
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf6ff00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010c14ba80(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      func_0x00010bf14680(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd40(lVar4,param_2,lVar5,lVar7,lVar8);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      goto LAB_106eaa82c;
    }
  }
  lVar3 = param_1;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f5b40(param_1,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6ff00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  func_0x00010bf6fe00(0,lVar4,param_2,lVar5,0xe);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126b6718;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28c3a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  lVar4 = param_1;
  uVar13 = uVar12;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28c380();
  lVar5 = param_1;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c26a240();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb0a60(uVar12,uVar13,puVar9,param_2,lVar6,lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9fe40(param_1,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
LAB_106eaa9b4:
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eaa9fc; end: 106eaaca3; -[SCSpectaclesFirmwareUpdater _handleDiffUpdateResponse:] */

void FUN_106eaa9fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 < 4) {
    lVar2 = param_1;
    lVar3 = param_1;
    if (lVar1 == 2) {
      lVar1 = param_3;
      func_0x00010bfda080();
      if ((int)lVar1 == 0) goto LAB_106eaac8c;
      lVar1 = param_3;
      func_0x00010c0f5780();
      if ((int)lVar1 == 0) {
LAB_106eaac18:
        uVar5 = 10;
        goto LAB_106eaac84;
      }
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bf6ff00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 8;
    }
    else {
      if ((lVar1 != 3) || (lVar1 = param_3, func_0x00010bfb0ba0(), lVar1 != 1)) goto LAB_106eaac8c;
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010bf6ff00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6fd20(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = 1;
    }
    func_0x00010bf6fe00(0x3f800000,lVar1,param_2,lVar3,uVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(lVar2);
    uVar5 = 4;
  }
  else if (lVar1 == 4) {
    lVar1 = param_3;
    func_0x00010bfb0ba0();
    if (lVar1 != 0) goto LAB_106eaac8c;
    lVar1 = param_3;
    func_0x00010bfb08e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_106eaac18;
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf6ff00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bfb08e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf703c0(lVar2,param_2,lVar3,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar5 = 5;
  }
  else {
    if (lVar1 != 8) goto LAB_106eaac8c;
    lVar1 = param_3;
    func_0x00010bfb0ba0();
    if (lVar1 == 4) {
      lVar1 = param_3;
      func_0x00010bf146a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        lVar1 = param_1;
        func_0x00010bf6fd20(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf6ff00();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010bf6fd20(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6fe00(0,lVar2,param_2,lVar3,0xf);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
      }
      else {
        func_0x00010be2dc60(param_1,param_2,param_3);
      }
    }
    uVar5 = 0;
  }
LAB_106eaac84:
  func_0x00010becf280(param_1,param_2,uVar5);
LAB_106eaac8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106eaaca4; end: 106eaade7; -[SCSpectaclesFirmwareUpdater deviceDidUpdateState:] */

void FUN_106eaaca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106eaad4c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106eaade8; end: 106eaae8f; -[SCSpectaclesFirmwareUpdater device:didUpdateInfo:] */

void FUN_106eaade8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106eaae90;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106eaae90; end: 106eab063;  */

/* WARNING: Possible PIC construction at 0x000106eaaf28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106eaaf2c) */

void FUN_106eaae90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 7) {
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26a240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c072160();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if ((int)uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s__transitionToState__112591648,10);
      return;
    }
  }
  else {
    func_0x00010c14ba80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26a240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c072160();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar5 == 0) {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6fd20(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf6ff00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf6fd20(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c14ba80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6fd40(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1f5b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setSavedPassiveUpdateParameters__11265b0f8,0);
  return;
}



/* Entry: 106eab064; end: 106eab163; -[SCSpectaclesFirmwareUpdater dataFlowsRequest:executedTask:] */

void FUN_106eab064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106eab10c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106eab164; end: 106eab263; -[SCSpectaclesFirmwareUpdater dataFlowsRequest:failedToExecutedTask:error:] */

void FUN_106eab164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106eab20c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106eab264; end: 106eab30b; -[SCSpectaclesFirmwareUpdater dataFlowsRequest:updatedProgressForTask:] */

void FUN_106eab264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106eab30c;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 106eab30c; end: 106eab423;  */

void FUN_106eab30c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c28e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != lVar2) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6fd20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf6ff00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf6fd20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(ulong *)(param_1 + 0x28);
  func_0x00010c28e840(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf25fe0();
  uVar8 = *(ulong *)(param_1 + 0x28);
  func_0x00010c28e840(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfad040();
  func_0x00010bf6fe00((float)((double)uVar7 / (double)uVar9),uVar4,param_2,uVar5,5);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106eab424; end: 106eab527; -[SCSpectaclesFirmwareUpdater dataFlowsRequestCompleted:] */

void FUN_106eab424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106eab4cc;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106eab528; end: 106eab62b; -[SCSpectaclesFirmwareUpdater dataFlowsRequestCancelled:] */

void FUN_106eab528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106eab5d0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106eab62c; end: 106eab72b; -[SCSpectaclesFirmwareUpdater dataFlowsRequest:failedWithError:] */

void FUN_106eab62c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106eab6d4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 106eab72c; end: 106eab733; -[SCSpectaclesFirmwareUpdater savedPassiveUpdateParameters] */

undefined8 FUN_106eab72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106eab734; end: 106eab763; -[SCSpectaclesFirmwareUpdater setSavedPassiveUpdateParameters:] */

void FUN_106eab734(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eab764; end: 106eab76b; -[SCSpectaclesFirmwareUpdater parameters] */

undefined8 FUN_106eab764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106eab76c; end: 106eab79b; -[SCSpectaclesFirmwareUpdater setParameters:] */

void FUN_106eab76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eab79c; end: 106eab7a3; -[SCSpectaclesFirmwareUpdater updateActive] */

undefined1 FUN_106eab79c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106eab7a4; end: 106eab7ab; -[SCSpectaclesFirmwareUpdater setUpdateActive:] */

void FUN_106eab7a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106eab7ac; end: 106eab7b3; -[SCSpectaclesFirmwareUpdater uploadDataFlowRequest] */

undefined8 FUN_106eab7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106eab7b4; end: 106eab7e3; -[SCSpectaclesFirmwareUpdater setUploadDataFlowRequest:] */

void FUN_106eab7b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eab7e4; end: 106eab7eb; -[SCSpectaclesFirmwareUpdater uploadTask] */

undefined8 FUN_106eab7e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106eab7ec; end: 106eab81b; -[SCSpectaclesFirmwareUpdater setUploadTask:] */

void FUN_106eab7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eab81c; end: 106eab823; -[SCSpectaclesFirmwareUpdater outstandingRequest] */

undefined8 FUN_106eab81c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106eab824; end: 106eab853; -[SCSpectaclesFirmwareUpdater setOutstandingRequest:] */

void FUN_106eab824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106eab854; end: 106eab86b; -[SCSpectaclesFirmwareUpdater device] */

void FUN_106eab854(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106eab86c; end: 106eab877; -[SCSpectaclesFirmwareUpdater setDevice:] */

void FUN_106eab86c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 106eab878; end: 106eab87f; -[SCSpectaclesFirmwareUpdater state] */

undefined8 FUN_106eab878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106eab880; end: 106eab887; -[SCSpectaclesFirmwareUpdater setState:] */

void FUN_106eab880(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}


