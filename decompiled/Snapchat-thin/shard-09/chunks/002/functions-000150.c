/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ad42a8; end: 106ad4313; -[SCBlizzardFileRepository _estimateEventCount:forQueueWithName:region:] */

undefined8
FUN_106ad42a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010bf45e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfacba0();
  _objc_release(param_4);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ad4314; end: 106ad43e3; -[SCBlizzardFileRepository _getFileCreationTime:] */

long FUN_106ad4314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfad0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfac9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bfacae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_1;
    func_0x00010c26f600(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  func_0x00010bde9640(param_1,param_2,lVar3);
  _objc_release(lVar3);
  return param_1;
}



/* Entry: 106ad43e4; end: 106ad4413; -[SCBlizzardFileRepository setFileSystem:] */

void FUN_106ad43e4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad4414; end: 106ad441b; -[SCBlizzardFileRepository config] */

undefined8 FUN_106ad4414(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ad441c; end: 106ad444b; -[SCBlizzardFileRepository setConfig:] */

void FUN_106ad441c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad444c; end: 106ad4453; -[SCBlizzardFileRepository graphene] */

undefined8 FUN_106ad444c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ad4454; end: 106ad4483; -[SCBlizzardFileRepository setGraphene:] */

void FUN_106ad4454(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad4484; end: 106ad44b3; -[SCBlizzardFileRepository setQueueRegionNameFilePathMap:] */

void FUN_106ad4484(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad44b4; end: 106ad44bb; -[SCBlizzardFileRepository fileCompressor] */

undefined8 FUN_106ad44b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ad44bc; end: 106ad44eb; -[SCBlizzardFileRepository setFileCompressor:] */

void FUN_106ad44bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad44ec; end: 106ad451b; -[SCBlizzardFileRepository setTimeProvider:] */

void FUN_106ad44ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad451c; end: 106ad457b; -[SCBlizzardFileRepository .cxx_destruct] */

void FUN_106ad451c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ad457c; end: 106ad4717; -[SCBlizzardPrioritizedQueue eventCounts] */

long FUN_106ad457c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = param_1;
  func_0x00010c125b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  puVar7 = &uStack_130;
  lVar10 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,puVar7,auStack_f0,0x10);
  if (lVar10 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    lVar12 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar1);
        }
        lVar11 = 0;
        do {
          lVar2 = param_1;
          func_0x00010c125b40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c276500();
          lVar9 = lVar5 + lVar9;
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar10);
      puVar7 = &uStack_130;
      lVar10 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,puVar7,auStack_f0,0x10);
    } while (lVar10 != 0);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar10 = 0;
    lVar9 = 0;
    do {
      lVar12 = lVar1;
      func_0x00010c125b40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar12;
      func_0x00010c0e00e0(lVar12,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar8;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar11;
      func_0x00010bfacac0();
      lVar9 = lVar2 + lVar9;
      _objc_release(lVar11);
      _objc_release(lVar8);
      _objc_release(puVar6);
      _objc_release(lVar12);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
    return lVar9;
  }
  return lVar9;
}



/* Entry: 106ad4718; end: 106ad47f3; -[SCBlizzardPrioritizedQueue fileCountsInRegion:] */

long FUN_106ad4718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = 0;
  lVar6 = 0;
  do {
    lVar1 = param_1;
    func_0x00010c125b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfacac0();
    lVar6 = lVar5 + lVar6;
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  return lVar6;
}



/* Entry: 106ad47f4; end: 106ad48cf; -[SCBlizzardPrioritizedQueue fileBytesInRegion:] */

long FUN_106ad47f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = 0;
  lVar6 = 0;
  do {
    lVar1 = param_1;
    func_0x00010c125b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfaca40();
    lVar6 = lVar5 + lVar6;
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  return lVar6;
}



/* Entry: 106ad48d0; end: 106ad49ab; -[SCBlizzardPrioritizedQueue eventCountsInRegion:] */

long FUN_106ad48d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = 0;
  lVar6 = 0;
  do {
    lVar1 = param_1;
    func_0x00010c125b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c276500();
    lVar6 = lVar5 + lVar6;
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  return lVar6;
}



/* Entry: 106ad49ac; end: 106ad4f73; -[SCBlizzardPrioritizedQueue getAndRemoveTopPriorityFilesFromPriority:region:bytes:isFrame:isSpectrum:] */

void FUN_106ad49ac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  int param_6,int param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 < 3) {
    _objc_alloc_init();
    lVar13 = param_1;
    func_0x00010c125b40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010c0e00e0(lVar13,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(puVar1);
    _objc_release(lVar13);
    lVar13 = lVar3;
    func_0x00010bfdef40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar13;
    func_0x00010c0d9820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar13);
    lVar13 = 0;
    while( true ) {
      lVar4 = lVar3;
      func_0x00010c268540();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == lVar4) break;
      puVar1 = puVar11;
      func_0x00010bf529e0();
      if (puVar1 == (undefined *)0x0) {
        _objc_release(lVar4);
      }
      else {
        lVar5 = lVar2;
        func_0x00010bfac9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfaca40();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (param_5 < (ulong)(lVar6 + lVar13)) goto LAB_106ad4f04;
      }
      lVar4 = lVar2;
      func_0x00010bfac9c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c073620();
      lVar6 = lVar2;
      if (param_6 == (int)lVar5) {
        lVar5 = lVar2;
        func_0x00010bfac9c0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar5;
        func_0x00010c07f1c0();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (param_7 != (int)lVar12) goto LAB_106ad4b84;
        lVar12 = *(long *)(param_1 + 0x28);
        lVar4 = lVar2;
        func_0x00010bfac9c0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf8bd60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfc5860(lVar12,param_2,lVar5);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar12 < 2) {
          if (lVar12 == 0) {
            lVar4 = lVar2;
            func_0x00010bfac9c0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar11,param_2,lVar4);
            _objc_release(lVar4);
            lVar4 = lVar2;
            func_0x00010bfac9c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bfaca40();
            _objc_release(lVar4);
            func_0x00010c0d9820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar6;
            func_0x00010c1101e0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d2e0(lVar3,param_2,lVar2);
          }
          else {
            if (lVar12 == 1) {
              lVar4 = param_1;
              func_0x00010bfad020(param_1);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar2;
              func_0x00010bfac9c0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              lVar12 = lVar5;
              func_0x00010bfacec0();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar2;
              func_0x00010bfac9c0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar7;
              func_0x00010c0ad4a0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar2;
              func_0x00010bfac9c0(lVar2);
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010c125a80();
              func_0x00010bf6bda0(lVar4,param_2,lVar12,lVar8,lVar10);
              _objc_release(lVar9);
              _objc_release(lVar8);
              _objc_release(lVar7);
              _objc_release(lVar12);
              _objc_release(lVar5);
              _objc_release(lVar4);
              func_0x00010c0d9820();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar2);
              lVar2 = lVar6;
              func_0x00010c1101e0(lVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d2e0(lVar3,param_2,lVar2);
              goto LAB_106ad4b98;
            }
LAB_106ad4d24:
            lVar4 = lVar2;
            func_0x00010bfac9c0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar11,param_2,lVar4);
            _objc_release(lVar4);
            lVar4 = lVar2;
            func_0x00010bfac9c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bfaca40();
            _objc_release(lVar4);
            func_0x00010c0d9820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar6;
            func_0x00010c1101e0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d2e0(lVar3,param_2,lVar2);
          }
LAB_106ad4ee8:
          lVar13 = lVar5 + lVar13;
        }
        else {
          if (lVar12 == 2) {
            lVar4 = lVar2;
            func_0x00010bfac9c0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1932a0();
            _objc_release(lVar4);
            lVar4 = lVar2;
            func_0x00010bfac9c0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar11,param_2,lVar4);
            _objc_release(lVar4);
            lVar4 = lVar2;
            func_0x00010bfac9c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bfaca40();
            _objc_release(lVar4);
            func_0x00010c0d9820();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar6;
            func_0x00010c1101e0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d2e0(lVar3,param_2,lVar2);
            goto LAB_106ad4ee8;
          }
          if (lVar12 != 3) goto LAB_106ad4d24;
          func_0x00010c0d9820();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        _objc_release(lVar4);
LAB_106ad4b84:
        func_0x00010c0d9820();
        _objc_retainAutoreleasedReturnValue();
      }
LAB_106ad4b98:
      _objc_release(lVar2);
      lVar2 = lVar6;
    }
    _objc_release(lVar4);
LAB_106ad4f04:
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  else {
    _objc_alloc_init();
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106ad4f74; end: 106ad52b3; -[SCBlizzardPrioritizedQueue getAndRemoveExpiredSpectrumFiles] */

undefined * FUN_106ad4f74(double param_1,undefined *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_2);
  puVar2 = param_2;
  func_0x00010c26f600(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puVar3 = param_2;
  func_0x00010c125b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar11 = &uStack_140;
  puVar12 = auStack_100;
  puVar3 = puVar4;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar13 = *plStack_130;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(puVar4);
        }
        lVar14 = 1;
        do {
          puVar5 = param_2;
          func_0x00010c125b40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = puVar7;
          func_0x00010c268540();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c1101e0();
          _objc_retainAutoreleasedReturnValue();
          while( true ) {
            _objc_release(puVar5);
            puVar5 = puVar7;
            func_0x00010bfdef40();
            _objc_retainAutoreleasedReturnValue();
            if (puVar6 == puVar5) break;
            puVar8 = puVar6;
            func_0x00010bfac9c0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bf5ab00();
            puVar10 = param_2;
            func_0x00010c249ae0();
            _objc_release(puVar8);
            _objc_release(puVar5);
            if ((undefined *)((long)(param_1 * 1000.0) - (long)puVar10) <= puVar9)
            goto LAB_106ad51dc;
            puVar5 = puVar6;
            func_0x00010bfac9c0(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2,param_3,puVar5);
            _objc_release(puVar5);
            puVar8 = puVar6;
            func_0x00010c1101e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar5 = puVar8;
            func_0x00010c0d9820();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d2e0(puVar7,param_3,puVar5);
            puVar6 = puVar8;
          }
          _objc_release(puVar5);
LAB_106ad51dc:
          _objc_release(puVar6);
          _objc_release(puVar7);
          bVar1 = lVar14 != 0;
          lVar14 = lVar14 + -1;
        } while (bVar1);
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar3);
      puVar11 = &uStack_140;
      puVar12 = auStack_100;
      puVar3 = puVar4;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_sync_exit(param_2);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_2);
  __Unwind_Resume(puVar3);
  if (puVar11 < (undefined8 *)0x3) {
    func_0x00010c125b40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0(puVar3,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010c276500();
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    return puVar5;
  }
  return (undefined *)0x0;
}



/* Entry: 106ad52b4; end: 106ad5377; -[SCBlizzardPrioritizedQueue eventCountsAtPriority:region:] */

undefined8 FUN_106ad52b4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 < 3) {
    func_0x00010c125b40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0e00e0(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c276500();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(param_1);
    return uVar4;
  }
  return 0;
}



/* Entry: 106ad5378; end: 106ad537f; -[SCBlizzardPrioritizedQueue setFileTTLInMs:] */

void FUN_106ad5378(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ad5380; end: 106ad5387; -[SCBlizzardPrioritizedQueue spectrumFileTTLMs] */

undefined8 FUN_106ad5380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ad5388; end: 106ad538f; -[SCBlizzardPrioritizedQueue setSpectrumFileTTLMs:] */

void FUN_106ad5388(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106ad5390; end: 106ad53bf; -[SCBlizzardPrioritizedQueue setTimeProvider:] */

void FUN_106ad5390(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad53c0; end: 106ad53ef; -[SCBlizzardPrioritizedQueue setRegionLinkedListArrayMap:] */

void FUN_106ad53c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad53f0; end: 106ad53f7; -[SCBlizzardPrioritizedQueue eagerUploadStatusManager] */

undefined8 FUN_106ad53f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ad53f8; end: 106ad5427; -[SCBlizzardPrioritizedQueue setEagerUploadStatusManager:] */

void FUN_106ad53f8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5428; end: 106ad542f; -[SCBlizzardPrioritizedQueue fileRepository] */

undefined8 FUN_106ad5428(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ad5430; end: 106ad545f; -[SCBlizzardPrioritizedQueue setFileRepository:] */

void FUN_106ad5430(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5460; end: 106ad54a7; -[SCBlizzardPrioritizedQueue .cxx_destruct] */

void FUN_106ad5460(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106ad54a8; end: 106ad54ef; -[SCBlizzardZstdCompressor dealloc] */

void FUN_106ad54a8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x0001099b10c0(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126f4b80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ad54f0; end: 106ad54ff; -[SCBlizzardZstdCompressor isZstdCompressionStudyEnabled] */

bool FUN_106ad54f0(long param_1)

{
  return *(long *)(param_1 + 0x20) != 0;
}



/* Entry: 106ad5500; end: 106ad556f; -[SCBlizzardZstdCompressor compressData:] */

void FUN_106ad5500(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (((param_3 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
     (lVar1 = param_1, func_0x00010be45a60(param_1,param_2,*(undefined8 *)(param_1 + 0x20)),
     (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    func_0x00010be50240(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ad5570; end: 106ad564b; -[SCBlizzardZstdCompressor _logAndGetCompressedData:] */

void FUN_106ad5570(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  lVar1 = param_2;
  dVar5 = param_1;
  func_0x00010bde41a0();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  if ((lVar1 != 0) && (uVar2 = param_4, func_0x00010c08fa60(), uVar2 != 0)) {
    FUN_106aca8c4(*(undefined8 *)(param_2 + 8),(long)((dVar5 - param_1) * 1000.0));
    uVar2 = param_4;
    func_0x00010c08fa60(param_4);
    lVar3 = lVar1;
    func_0x00010c08fa60(lVar1);
    uVar4 = param_4;
    func_0x00010c08fa60(param_4);
    FUN_106acaba0(*(undefined8 *)(param_2 + 8),
                  (long)(((double)(uVar2 - lVar3) / (double)uVar4) * 100.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ad564c; end: 106ad57f3; -[SCBlizzardZstdCompressor _compressData:] */

void FUN_106ad564c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf64b80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    uStack_48 = 0;
    uVar7 = param_3;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    uVar9 = param_3;
    uStack_58 = uVar7;
    func_0x00010c08fa60();
    uStack_50 = uVar9;
    if (uVar9 != 0) {
      do {
        uStack_60 = 0;
        puVar3 = puVar2;
        puStack_70 = puVar8;
        func_0x00010c08fa60();
        uVar9 = *(ulong *)(param_1 + 0x18);
        uVar7 = uVar9;
        puStack_68 = puVar3;
        func_0x0001099b2970(uVar9,&puStack_70,&uStack_58,0);
        if (0xffffffffffffff88 < uVar7) {
LAB_106ad5788:
          uVar5 = *(undefined8 *)(param_1 + 8);
          ppuVar6 = &PTR____CFConstantStringClassReference_110e6db38;
          goto LAB_106ad5794;
        }
        uVar7 = *(long *)(uVar9 + 0x400) - *(long *)(uVar9 + 0x3f8);
        if (uVar7 == 0) {
          uVar7 = *(ulong *)(uVar9 + 0x178);
        }
        if (0xffffffffffffff88 < uVar7) goto LAB_106ad5788;
        func_0x00010bf06a40(puVar1);
      } while (uStack_48 < uStack_50);
    }
    uStack_60 = 0;
    puVar3 = puVar2;
    puStack_70 = puVar8;
    func_0x00010c08fa60();
    lVar4 = *(long *)(param_1 + 0x18);
    puStack_68 = puVar3;
    func_0x0001099b304c(lVar4,&puStack_70);
    if (lVar4 == 0) {
      func_0x00010bf06a40(puVar1);
      _objc_retain(puVar1);
      puVar8 = puVar1;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 8);
      ppuVar6 = &PTR____CFConstantStringClassReference_110e6db58;
LAB_106ad5794:
      FUN_106acaa2c(uVar5,ppuVar6,1);
      puVar8 = (undefined *)0x0;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106ad57f4; end: 106ad5803; -[SCBlizzardZstdCompressor _isZstdCompressionLevelValid:] */

bool FUN_106ad57f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 1U < 0x16;
}



/* Entry: 106ad5804; end: 106ad5833; -[SCBlizzardZstdCompressor .cxx_destruct] */

void FUN_106ad5804(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad5834; end: 106ad5863; -[SCBlizzardFrameStart setAppBuild:] */

void FUN_106ad5834(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5864; end: 106ad586b; -[SCBlizzardFrameStart setAppDataSaverMode:] */

void FUN_106ad5864(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ad586c; end: 106ad589b; -[SCBlizzardFrameStart setAppStartupType:] */

void FUN_106ad586c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad589c; end: 106ad58cb; -[SCBlizzardFrameStart setAppVersion:] */

void FUN_106ad589c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad58cc; end: 106ad58fb; -[SCBlizzardFrameStart setClientId:] */

void FUN_106ad58cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad58fc; end: 106ad5903; -[SCBlizzardFrameStart setClientReferenceTsMillis:] */

void FUN_106ad58fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 106ad5904; end: 106ad5933; -[SCBlizzardFrameStart setDeviceModel:] */

void FUN_106ad5904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5934; end: 106ad5963; -[SCBlizzardFrameStart setLocale:] */

void FUN_106ad5934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5964; end: 106ad5993; -[SCBlizzardFrameStart setLogQueueName:] */

void FUN_106ad5964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5994; end: 106ad59c3; -[SCBlizzardFrameStart setOsVersion:] */

void FUN_106ad5994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad59c4; end: 106ad59f3; -[SCBlizzardFrameStart setOsMinorVersion:] */

void FUN_106ad59c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad59f4; end: 106ad59fb; -[SCBlizzardFrameStart setSequenceIdStart:] */

void FUN_106ad59f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 106ad59fc; end: 106ad5a2b; -[SCBlizzardFrameStart setSessionId:] */

void FUN_106ad59fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5a2c; end: 106ad5a5b; -[SCBlizzardFrameStart setUserGuid:] */

void FUN_106ad5a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5a5c; end: 106ad5a8b; -[SCBlizzardFrameStart setBlizzardSchemaVersion:] */

void FUN_106ad5a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5a8c; end: 106ad5a93; -[SCBlizzardFrameStart setAppUi:] */

void FUN_106ad5a8c(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106ad5a94; end: 106ad5a9b; -[SCBlizzardFrameStart experimentProvider] */

undefined8 FUN_106ad5a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106ad5a9c; end: 106ad5acb; -[SCBlizzardFrameStart setExperimentProvider:] */

void FUN_106ad5a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5acc; end: 106ad5ad3; -[SCBlizzardFrameStart setAppType:] */

void FUN_106ad5acc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106ad5ad4; end: 106ad5b03; -[SCBlizzardFrameStart setS2CellL13L16:] */

void FUN_106ad5ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5b04; end: 106ad5b33; -[SCBlizzardFrameStart setMobileCountryCode:] */

void FUN_106ad5b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5b34; end: 106ad5dcb; -[SCSpectrumFrameStart transformToCommonSequentialItem] */

void FUN_106ad5b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d03a8;
  _objc_opt_new(PTR_PTR_1126d03a8);
  uVar2 = param_1;
  func_0x00010c15ffa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fda20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c11df60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e67a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2922e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e4c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf04e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168840(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf066e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169460(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0edc80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6a20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c09e1e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf3e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf70ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18cba0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010beed3e0(param_1);
  func_0x00010c161360(puVar1,param_2,uVar2);
  uVar2 = param_1;
  func_0x00010bf061c0(param_1);
  func_0x00010c1691a0(puVar1,param_2,uVar2);
  func_0x00010c1d6a00(puVar1,param_2,1);
  uVar2 = param_1;
  func_0x00010c125a80(param_1);
  func_0x00010c1e96a0(puVar1,param_2,uVar2);
  puVar3 = PTR_PTR_1126d03b0;
  _objc_opt_new(PTR_PTR_1126d03b0);
  func_0x00010c18aee0();
  puVar4 = PTR_PTR_1126d03b8;
  _objc_opt_new(PTR_PTR_1126d03b8);
  puVar5 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd00(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  func_0x00010c15ffa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fda20(puVar4,param_2,param_1);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126d03c0;
  _objc_opt_new(PTR_PTR_1126d03c0);
  func_0x00010c1a77e0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106ad5dcc; end: 106ad5dd3; -[SCSpectrumFrameStart sessionId] */

undefined8 FUN_106ad5dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ad5dd4; end: 106ad5e03; -[SCSpectrumFrameStart setSessionId:] */

void FUN_106ad5dd4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5e04; end: 106ad5e0b; -[SCSpectrumFrameStart userGuid] */

undefined8 FUN_106ad5e04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ad5e0c; end: 106ad5e3b; -[SCSpectrumFrameStart setUserGuid:] */

void FUN_106ad5e0c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5e3c; end: 106ad5e43; -[SCSpectrumFrameStart appBuild] */

undefined8 FUN_106ad5e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ad5e44; end: 106ad5e73; -[SCSpectrumFrameStart setAppBuild:] */

void FUN_106ad5e44(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5e74; end: 106ad5e7b; -[SCSpectrumFrameStart appVersion] */

undefined8 FUN_106ad5e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ad5e7c; end: 106ad5eab; -[SCSpectrumFrameStart setAppVersion:] */

void FUN_106ad5e7c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5eac; end: 106ad5eb3; -[SCSpectrumFrameStart osVersion] */

undefined8 FUN_106ad5eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ad5eb4; end: 106ad5ee3; -[SCSpectrumFrameStart setOsVersion:] */

void FUN_106ad5eb4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad5ee4; end: 106ad5eeb; -[SCSpectrumFrameStart clientId] */

undefined8 FUN_106ad5ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ad5eec; end: 106ad5f1b; -[SCSpectrumFrameStart setClientId:] */

void FUN_106ad5eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5f1c; end: 106ad5f23; -[SCSpectrumFrameStart locale] */

undefined8 FUN_106ad5f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ad5f24; end: 106ad5f53; -[SCSpectrumFrameStart setLocale:] */

void FUN_106ad5f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5f54; end: 106ad5f5b; -[SCSpectrumFrameStart deviceModel] */

undefined8 FUN_106ad5f54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ad5f5c; end: 106ad5f8b; -[SCSpectrumFrameStart setDeviceModel:] */

void FUN_106ad5f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5f8c; end: 106ad5f93; -[SCSpectrumFrameStart accountAgeDays] */

undefined8 FUN_106ad5f8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ad5f94; end: 106ad5f9b; -[SCSpectrumFrameStart setAccountAgeDays:] */

void FUN_106ad5f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106ad5f9c; end: 106ad5fa3; -[SCSpectrumFrameStart appStartupType] */

undefined4 FUN_106ad5f9c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106ad5fa4; end: 106ad5fab; -[SCSpectrumFrameStart setAppStartupType:] */

void FUN_106ad5fa4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ad5fac; end: 106ad5fb3; -[SCSpectrumFrameStart queueName] */

undefined8 FUN_106ad5fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106ad5fb4; end: 106ad5fe3; -[SCSpectrumFrameStart setQueueName:] */

void FUN_106ad5fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad5fe4; end: 106ad5feb; -[SCSpectrumFrameStart region] */

undefined4 FUN_106ad5fe4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106ad5fec; end: 106ad5ff3; -[SCSpectrumFrameStart setRegion:] */

void FUN_106ad5fec(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106ad5ff4; end: 106ad6077; -[SCSpectrumFrameStart .cxx_destruct] */

void FUN_106ad5ff4(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ad6078; end: 106ad6103; -[SCBlizzardCachedGeoSignal initWithS2Token:level:collectTsMs:] */

undefined1 *
FUN_106ad6078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4b98;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ad6104; end: 106ad6227; -[SCBlizzardCachedGeoSignal toDictionary] */

undefined * FUN_106ad6104(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e6dcd8;
  lVar1 = param_1;
  func_0x00010c142f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110df40d8;
  lVar2 = param_1;
  lStack_50 = lVar1;
  func_0x00010c098a00(param_1);
  func_0x00010c0df780(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e6dcf8;
  puStack_48 = puVar3;
  func_0x00010bf3fc00(param_1);
  func_0x00010c0df7c0(puVar4,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&ppuStack_68,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  return *(undefined **)(lVar1 + 8);
}



/* Entry: 106ad6228; end: 106ad622f; -[SCBlizzardCachedGeoSignal s2Token] */

undefined8 FUN_106ad6228(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ad6230; end: 106ad6237; -[SCBlizzardCachedGeoSignal level] */

undefined8 FUN_106ad6230(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ad6238; end: 106ad623f; -[SCBlizzardCachedGeoSignal collectTsMs] */

undefined8 FUN_106ad6238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ad6240; end: 106ad624b; -[SCBlizzardCachedGeoSignal .cxx_destruct] */

void FUN_106ad6240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad624c; end: 106ad62d3; -[SCBlizzardCachedMccSignal initWithMcc:collectTsMs:] */

undefined1 *
FUN_106ad624c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4ba0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ad62d4; end: 106ad63b7; -[SCBlizzardCachedMccSignal toDictionary] */

undefined * FUN_106ad62d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e6d838;
  lVar1 = param_1;
  func_0x00010c0c3c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e6dcf8;
  lStack_48 = lVar1;
  func_0x00010bf3fc00(param_1);
  func_0x00010c0df7c0(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(lVar1 + 8);
}



/* Entry: 106ad63b8; end: 106ad63bf; -[SCBlizzardCachedMccSignal mcc] */

undefined8 FUN_106ad63b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ad63c0; end: 106ad63c7; -[SCBlizzardCachedMccSignal collectTsMs] */

undefined8 FUN_106ad63c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ad63c8; end: 106ad63d3; -[SCBlizzardCachedMccSignal .cxx_destruct] */

void FUN_106ad63c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad63d4; end: 106ad64f7; +[SCBlizzardGeoSignalCoarsener cachedSignalForLocation:collectTsMs:] */

void FUN_106ad63d4(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar2;
  
  _objc_retain(param_4);
  if ((param_4 != 0) && (func_0x00010bfe4080(param_4), 0.0 <= param_1)) {
    lVar2 = param_4;
    func_0x00010bf51c80();
    iVar1 = (int)lVar2;
    _CLLocationCoordinate2DIsValid();
    puVar3 = PTR_PTR_1126b6598;
    if (iVar1 != 0) {
      func_0x00010bfe4080(param_4);
      func_0x00010c098a40(puVar3,param_3,0xd,0x10);
      puVar3 = PTR_PTR_1126b6598;
      func_0x00010bf51c80(param_4);
      func_0x00010bf33ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0f3ae0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010c272ec0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR_PTR_1126d03c8;
        _objc_alloc(PTR_PTR_1126d03c8);
        func_0x00010c040de0();
      }
      _objc_release(puVar3);
      _objc_release(puVar4);
      goto LAB_106ad64c0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_106ad64c0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106ad64f8; end: 106ad6543; -[SCBlizzardGeoSignalGrapheneMetrics logGeoReadOfType:outcome:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad64f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e6d938;
  if (param_4 != 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  if (param_4 != 2) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e6d818;
  if (param_3 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e6d838;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(ppuVar1);
  func_0x000107c61174(ppuVar2);
  if (lVar5 != 0) {
    plVar3 = *(long **)(lVar5 + 8);
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_11095db90);
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(lVar5 + 8);
      func_0x000107c61174(ppuVar1);
      if (ppuVar1 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f3adf9b;
      }
      else {
        ppuVar4 = ppuVar1;
        func_0x000107c61178(ppuVar1);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(ppuVar1);
      func_0x00010002b838(auStack_78,ppuVar4);
      func_0x000107c61174(ppuVar2);
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f3adf9b;
      }
      else {
        func_0x000107c61178(ppuVar2);
        ppuVar4 = ppuVar2;
        func_0x000107c3ac4c(ppuVar2);
      }
      func_0x000107c61170(ppuVar2);
      func_0x00010002b838(auStack_60,ppuVar4);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11095db90,&uStack_98,100);
      puStack_80 = &uStack_98;
      func_0x00010007e5dc(&puStack_80);
      lVar5 = 0;
      do {
        if ((&cStack_49)[lVar5] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  func_0x000107c61170(ppuVar2);
  ppuVar4 = ppuVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(ppuVar2);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(ppuVar2);
  func_0x000107c61170(ppuVar1);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)((long)ppuVar4 + _DAT_112f52cc0));
  return;
}



/* Entry: 106ad6544; end: 106ad6567; -[SCBlizzardGeoSignalGrapheneMetrics logRefreshSuccessOfType:] */

void FUN_106ad6544(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e6d818;
  if (param_3 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e6d838;
  }
  puVar8 = (undefined1 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar3;
  _objc_retain(ppuVar3);
  if (lVar5 != 0) {
    plVar9 = *(long **)(lVar5 + 8);
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar1 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_60,ppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar1 = (undefined **)&UNK_11095dcd0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095dcd0,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106acc104;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar1;
  puVar7 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  if (ppuVar2 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar3 = (undefined **)&UNK_11095dd20;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095dd20,&uStack_100,puVar8);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_106acc278;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar3;
  puVar8 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(ppuVar3);
  if (ppuVar2 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar2[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar1 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_160,ppuVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    ppuVar1 = (undefined **)&UNK_11095dd70;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095dd70,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar8 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar8 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  pcStack_188 = FUN_106acc3ec;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(ppuVar1);
  if (ppuVar2 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_1e0,ppuVar3);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    ppuVar3 = (undefined **)&UNK_11095ddc0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095ddc0,&uStack_200,puVar8);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar2;
  __Unwind_Resume();
  puStack_228 = (undefined1 *)&uStack_240;
  pcStack_208 = FUN_106acc560;
  if (ppuVar4 != (undefined **)0x0) {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    ppuStack_220 = ppuVar2;
    ppuStack_218 = ppuVar1;
    pppuStack_210 = &pppuStack_190;
    (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_11095de10,&uStack_240,ppuVar3);
    func_0x00010007e5dc(&puStack_228);
  }
  return;
}



/* Entry: 106ad6568; end: 106ad658b; -[SCBlizzardGeoSignalGrapheneMetrics logUpdateDebouncedOfType:] */

void FUN_106ad6568(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e6d818;
  if (param_3 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e6d838;
  }
  puVar8 = (undefined1 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar3;
  _objc_retain(ppuVar3);
  if (lVar5 != 0) {
    plVar9 = *(long **)(lVar5 + 8);
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar1 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_60,ppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar1 = (undefined **)&UNK_11095dd20;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095dd20,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106acc278;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar1;
  puVar7 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  if (ppuVar2 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar3 = (undefined **)&UNK_11095dd70;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095dd70,&uStack_100,puVar8);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106acc3ec;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(ppuVar3);
  if (ppuVar2 != (undefined **)0x0) {
    plVar9 = (long *)ppuVar2[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar1 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_160,ppuVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    ppuVar1 = (undefined **)&UNK_11095ddc0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11095ddc0,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar2;
  __Unwind_Resume();
  puStack_1a8 = (undefined1 *)&uStack_1c0;
  pcStack_188 = FUN_106acc560;
  if (ppuVar4 != (undefined **)0x0) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    ppuStack_1a0 = ppuVar2;
    ppuStack_198 = ppuVar3;
    pppuStack_190 = &ppuStack_110;
    (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_11095de10,&uStack_1c0,ppuVar1);
    func_0x00010007e5dc(&puStack_1a8);
  }
  return;
}



/* Entry: 106ad658c; end: 106ad65af; -[SCBlizzardGeoSignalGrapheneMetrics logCacheWriteFailureOfType:] */

void FUN_106ad658c(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar5 = *(long *)(param_1 + 8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e6d818;
  if (param_3 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e6d838;
  }
  puVar7 = (undefined1 *)0x1;
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar3;
  _objc_retain(ppuVar3);
  if (lVar5 != 0) {
    plVar8 = *(long **)(lVar5 + 8);
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar1 = ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_60,ppuVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    ppuVar1 = (undefined **)&UNK_11095dd70;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095dd70,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  ppuVar2 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  pcStack_88 = FUN_106acc3ec;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  if (ppuVar2 != (undefined **)0x0) {
    plVar8 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_e0,ppuVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar3 = (undefined **)&UNK_11095ddc0;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11095ddc0,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106acc560;
  if (ppuVar4 != (undefined **)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    ppuStack_120 = ppuVar2;
    ppuStack_118 = ppuVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(*(long *)ppuVar4[1] + 0x18))(ppuVar4[1],&UNK_11095de10,&uStack_140,ppuVar3);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106ad65b0; end: 106ad6617; -[SCBlizzardGeoSignalGrapheneMetrics logGpsS2Level:] */

void FUN_106ad65b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_106acc3ec(uVar3,puVar2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


