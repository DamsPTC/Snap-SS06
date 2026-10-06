/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ecdbd0; end: 107ecdc3f; -[SCCloudUpdateEntryHighlightsOperation entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecdbd0(long param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_112771160);
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d8338);
    func_0x00010c03ab00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ecdc40; end: 107ecdc8b; -[SCCloudUpdateEntryHighlightsOperation makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecdc40(void)

{
  _objc_alloc(PTR_PTR_1126d8338);
  func_0x00010c03ab00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ecdc8c; end: 107ecde2b; -[SCCloudUpdateEntryHighlightsOperation initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ecdc8c(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5a80);
  if (uVar4 == 0 || (int)uVar2 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb990;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar6 = param_4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771158);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771158) = uVar6;
      _objc_release(uVar5);
      uVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11277115c);
      *(ulong *)((long)ppuVar3 + (long)_DAT_11277115c) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771160);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771160) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bfe3560();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771164);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771164) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771168);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771168) = uVar4;
      _objc_release(uVar6);
    }
    _objc_retain(ppuVar3);
    puVar7 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  return puVar7;
}



/* Entry: 107ecde2c; end: 107ece127; -[SCCloudUpdateEntryHighlightsOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107ecde2c(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar11 = (long)_DAT_112771160;
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + lVar11),param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + _DAT_112771158);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        *(undefined8 *)(param_1 + lVar11));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar10;
    puStack_160 = puVar4;
    func_0x00010c0a1ac0(param_5,param_2,puVar10,puVar3,0,0,5,1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar10 = (undefined8 *)PTR_PTR_1126af4d0;
    lStack_150 = lVar11;
    puStack_148 = puVar1;
    uStack_140 = param_5;
    lStack_138 = param_4;
    func_0x00010bfa7380(PTR_PTR_1126af4d0,param_2,puVar1,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar10);
    puVar8 = &uStack_130;
    puVar2 = puVar10;
    func_0x00010bf52a60(puVar10,param_2,puVar8,auStack_f0,0x10);
    if (puVar2 != (undefined8 *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(puVar10);
          }
          uVar12 = *(undefined8 *)(lStack_128 + (long)puVar8 * 8);
          uVar13 = *(undefined8 *)(param_1 + _DAT_112771164);
          uVar9 = uVar12;
          func_0x00010c241220(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900(uVar13,param_2,uVar9);
          _objc_release(uVar9);
          if ((int)uVar13 != 0) {
            func_0x00010befa120(puVar4,param_2,uVar12);
          }
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar2 != puVar8);
        puVar8 = &uStack_130;
        puVar2 = puVar10;
        func_0x00010bf52a60(puVar10,param_2,puVar8,auStack_f0,0x10);
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar10);
    puVar1 = puVar4;
    func_0x00010bf529e0();
    puVar3 = *(undefined **)(param_1 + _DAT_112771164);
    func_0x00010bf529e0();
    if (puVar1 == puVar3) {
      _objc_retain(param_1);
      puVar3 = param_1;
    }
    else {
      puVar3 = PTR_PTR_1126d7f50;
      _objc_alloc();
      puVar8 = *(undefined8 **)(param_1 + _DAT_11277115c);
      uVar9 = *(undefined8 *)(param_1 + lStack_150);
      puVar1 = puVar4;
      func_0x00010bf51e00(puVar4);
      func_0x00010c03ab00(puVar3,param_2,puVar8,uVar9,puVar1,
                          *(undefined8 *)(param_1 + _DAT_112771168));
      _objc_release(puVar1);
    }
    param_4 = lStack_138;
    param_5 = uStack_140;
    puVar1 = puStack_148;
    _objc_release(puVar4);
    _objc_release(puVar10);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  lVar11 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126af4c0;
  pcStack_168 = FUN_107ece128;
  uVar9 = *(undefined8 *)(lVar11 + _DAT_112771160);
  puStack_1a0 = puVar4;
  puStack_198 = puVar10;
  puStack_190 = puVar3;
  puStack_188 = puVar1;
  uStack_180 = param_5;
  lStack_178 = param_4;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  func_0x00010bfa70a0(puVar5,param_2,uVar9,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126af4d0;
  func_0x00010bfa7400(PTR_PTR_1126af4d0,param_2,puVar5,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12caa0(puVar3,param_2,puVar1);
  _objc_release(puVar1);
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380(PTR_PTR_1126af4d0,param_2,puVar5,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_107ece2cc;
  puStack_1b0 = &UNK_1108bbf88;
  puVar6 = puVar4;
  lStack_1a8 = lVar11;
  func_0x00010bfaea20(puVar4,param_2,&puStack_1c8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  puVar7 = puVar6;
  func_0x00010bf529e0();
  func_0x00010bfed320(puVar1,param_2,0,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066880(puVar3,param_2,puVar6,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c0f7a20(puVar3);
  func_0x00010c1da4e0(puVar3,param_2,(int)puVar1 + 1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar5);
  return (undefined *)0x1;
}



/* Entry: 107ece128; end: 107ece2cb; -[SCCloudUpdateEntryHighlightsOperation executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ece128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126af4c0;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112771160);
  _objc_retain(param_3);
  func_0x00010bfa70a0(puVar1,param_2,uVar7,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af4d0;
  func_0x00010bfa7400(PTR_PTR_1126af4d0,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12caa0(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380(PTR_PTR_1126af4d0,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107ece2cc;
  puStack_50 = &UNK_1108bbf88;
  puVar5 = puVar4;
  lStack_48 = param_1;
  func_0x00010bfaea20(puVar4,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  puVar6 = puVar5;
  func_0x00010bf529e0();
  func_0x00010bfed320(puVar3,param_2,0,puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066880(puVar2,param_2,puVar5,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c0f7a20(puVar2);
  func_0x00010c1da4e0(puVar2,param_2,(int)puVar3 + 1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return 1;
}



/* Entry: 107ece2cc; end: 107ece323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ece2cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112771164);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107ece324; end: 107ece32b; -[SCCloudUpdateEntryHighlightsOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107ece324(void)

{
  return 1;
}



/* Entry: 107ece32c; end: 107ece91f; -[SCCloudUpdateEntryHighlightsOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ece32c(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puVar1 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf993c0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    param_2 = puVar12;
    (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar12 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1968c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126af4d0;
    func_0x00010bfa74e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    puVar12 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf993c0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      param_2 = puVar12;
      (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar4);
      puVar12 = PTR_PTR_1126ae6b8;
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2046e0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a8980(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010bfbdda0(puVar2);
      FUN_107ee8bec((long)(int)puVar12);
      func_0x00010c196ba0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bf977c0(puVar2);
      func_0x00010c196b20(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c15e520(puVar2);
      func_0x00010c1fce80(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar12 = puVar2;
      func_0x00010bf9e140(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199560(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar2;
      func_0x00010c266b20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216240(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar12);
      func_0x00010c266aa0(puVar2);
      func_0x00010c1b3980(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126d8288;
      func_0x00010c2b1dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1966e0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar7 = puVar6;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126bbf20;
      func_0x00010bdc1920(PTR_PTR_1126bbf20);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      func_0x00010c0f98a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(in_stack_00000028);
      _objc_retain(in_stack_00000020);
      _objc_retain(in_stack_00000020);
      func_0x00010c25f400(param_7);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126ae6b8;
      func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(in_stack_00000020);
      _objc_release(in_stack_00000020);
      _objc_release(in_stack_00000028);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar11);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ece920; end: 107ece93f;  */

void FUN_107ece920(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ece940; end: 107eceaaf;  */

void FUN_107ece940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eceab0; end: 107eceaf7;  */

void FUN_107eceab0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eceaf8; end: 107ececeb; -[SCCloudUpdateEntryHighlightsOperation commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107eceaf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126af4c0;
  lVar9 = (long)_DAT_112771160;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfa70a0(puVar1,param_2,uVar8,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)(param_1 + lVar9));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar8;
  func_0x00010c0b4ca0(uVar8);
  func_0x00010c1fce60(puVar2,param_2,uVar3);
  puVar4 = puVar2;
  func_0x00010c0f7a20(puVar2);
  func_0x00010c1da4e0(puVar2,param_2,(int)puVar4 + -1);
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa7500(PTR_PTR_1126af4d0,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e820(puVar2,param_2,puVar4);
  _objc_release(puVar4);
  puVar5 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0(PTR_PTR_1126af4d0,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107ececec;
  puStack_60 = &UNK_1108bbf88;
  puVar6 = puVar5;
  lStack_58 = param_1;
  func_0x00010bfaea20(puVar5,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  puVar7 = puVar6;
  func_0x00010bf529e0();
  func_0x00010bfed320(puVar4,param_2,0,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067080(puVar2,param_2,puVar6,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return 0;
}



/* Entry: 107ececec; end: 107eced43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ececec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112771164);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107eced44; end: 107eced47; -[SCCloudUpdateEntryHighlightsOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107eced44(void)

{
  return;
}



/* Entry: 107eced48; end: 107eced4f; -[SCCloudUpdateEntryHighlightsOperation changedSnapContextsWithEntryUpdate:] */

undefined8 FUN_107eced48(void)

{
  return 0;
}



/* Entry: 107eced50; end: 107eceecf; -[SCCloudUpdateEntryHighlightsOperation logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107eced50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 5;
  func_0x00010bafc234(5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112771160),
                      &PTR____CFConstantStringClassReference_110e29c18);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771164);
  func_0x00010bf00560(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2b38);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112771158));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2858,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar4 = *(long *)(param_1 + _DAT_112771168);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107eceed0; end: 107eceed7; -[SCCloudUpdateEntryHighlightsOperation doesNotRequireMediaUpload] */

undefined8 FUN_107eceed0(void)

{
  return 1;
}



/* Entry: 107eceed8; end: 107eceedf; -[SCCloudUpdateEntryHighlightsOperation allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107eceed8(void)

{
  return 1;
}



/* Entry: 107eceee0; end: 107eceee7; -[SCCloudUpdateEntryHighlightsOperation requiresSyncStatusUpdate] */

undefined8 FUN_107eceee0(void)

{
  return 0;
}



/* Entry: 107eceee8; end: 107eceeef; -[SCCloudUpdateEntryHighlightsOperation eligibleForOutOfOrderExecution] */

undefined8 FUN_107eceee8(void)

{
  return 0;
}



/* Entry: 107eceef0; end: 107eceef7; -[SCCloudUpdateEntryHighlightsOperation needRunImmediately] */

undefined8 FUN_107eceef0(void)

{
  return 0;
}



/* Entry: 107eceef8; end: 107eceeff; -[SCCloudUpdateEntryHighlightsOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

undefined8 FUN_107eceef8(void)

{
  return 0;
}



/* Entry: 107ecef00; end: 107ecef07; -[SCCloudUpdateEntryHighlightsOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

undefined8 FUN_107ecef00(void)

{
  return 0;
}



/* Entry: 107ecef08; end: 107ecef47; -[SCCloudUpdateEntryHighlightsOperation isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ecef08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c080980();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ecef48; end: 107ecefb7; -[SCCloudUpdateEntryHighlightsOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecef48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112771168,0);
  _objc_storeStrong(param_1 + _DAT_112771164,0);
  _objc_storeStrong(param_1 + _DAT_112771160,0);
  _objc_storeStrong(param_1 + _DAT_11277115c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771158,0);
  return;
}



/* Entry: 107ecefb8; end: 107ecf05b; -[SCCloudUpdateEntryCleanupContext initWithAddedSnap:deletedSnap:] */

undefined1 *
FUN_107ecefb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fb998;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ecf05c; end: 107ecf063; -[SCCloudUpdateEntryCleanupContext deletedSnap] */

undefined8 FUN_107ecf05c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ecf064; end: 107ecf06b; -[SCCloudUpdateEntryCleanupContext addedSnap] */

undefined8 FUN_107ecf064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ecf06c; end: 107ecf09b; -[SCCloudUpdateEntryCleanupContext .cxx_destruct] */

void FUN_107ecf06c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ecf09c; end: 107ecf2eb; -[SCCloudUpdateEntryOperation initWithProfile:entryId:title:deletedSnapId:addSnapEntity:dataVaultEncryption:updatedSnapsOrder:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ecf09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fb9a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771174);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112771174) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112771178;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_11277117c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112771180;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112771184;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar3);
    uVar3 = param_7;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771188);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771188) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_7;
    func_0x00010bf6f520();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277118c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277118c) = uVar3;
    _objc_release(uVar4);
    uVar3 = param_7;
    FUN_107ee87e4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771190);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771190) = uVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_112771194;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar3);
    uVar3 = param_8;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112771198);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112771198) = uVar3;
    _objc_release(uVar4);
    lVar5 = (long)_DAT_11277119c;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107ecf2ec; end: 107ecf33f; -[SCCloudUpdateEntryOperation initWithEntryId:deleteSnapId:deleteSharedSnapForAll:profile:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecf2ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  *(undefined1 *)(param_1 + _DAT_1127711a0) = 0;
  *(undefined1 *)(param_1 + _DAT_1127711a4) = param_5;
  func_0x00010c03ab20(param_1,param_2,param_6,param_3,0,param_4,0,0,0,param_7);
  return;
}



/* Entry: 107ecf340; end: 107ecf4cb; -[SCCloudUpdateEntryOperation initWithEntryId:replaceSnapId:addSnapEntity:dataVaultEncryption:profile:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_107ecf340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c23f220(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_6;
  func_0x00010c0e00e0(param_6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  lVar4 = lVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010bdc1800(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(lVar4);
  *(undefined1 *)(param_1 + _DAT_1127711a0) = 1;
  *(undefined1 *)(param_1 + _DAT_1127711a4) = 0;
  func_0x00010c03ab20(param_1,param_2,param_7,param_3,0,param_4,param_5,param_6,0,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(param_6);
  return param_1;
}



/* Entry: 107ecf4cc; end: 107ecf51f; -[SCCloudUpdateEntryOperation initWithEntryId:title:profile:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecf4cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *(undefined1 *)(param_1 + _DAT_1127711a0) = 0;
  *(undefined1 *)(param_1 + _DAT_1127711a4) = 0;
  func_0x00010c03ab20(param_1,param_2,param_5,param_3,param_4,0,0,0,0,param_6);
  return;
}



/* Entry: 107ecf520; end: 107ecf573; -[SCCloudUpdateEntryOperation initWithEntryId:title:updatedSnapsOrder:profile:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecf520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *(undefined1 *)(param_1 + _DAT_1127711a0) = 0;
  *(undefined1 *)(param_1 + _DAT_1127711a4) = 0;
  func_0x00010c03ab20(param_1,param_2,param_6,param_3,param_4,0,0,0,param_5,param_7);
  return;
}



/* Entry: 107ecf574; end: 107ecf57b; -[SCCloudUpdateEntryOperation type] */

undefined8 FUN_107ecf574(void)

{
  return 4;
}



/* Entry: 107ecf57c; end: 107ecf583; -[SCCloudUpdateEntryOperation analyticsType] */

undefined8 FUN_107ecf57c(void)

{
  return 2;
}



/* Entry: 107ecf584; end: 107ecf5b3; -[SCCloudUpdateEntryOperation requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecf584(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771174);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ecf5b4; end: 107ecf623; -[SCCloudUpdateEntryOperation entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecf5b4(long param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_11277117c);
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d8340);
    func_0x00010c03ab40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ecf624; end: 107ecf6b7; -[SCCloudUpdateEntryOperation makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecf624(void)

{
  _objc_alloc(PTR_PTR_1126d8340);
  func_0x00010c03ab40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ecf6b8; end: 107ecf98f; -[SCCloudUpdateEntryOperation initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ecf6b8(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5a88);
  if (uVar4 == 0 || (int)uVar2 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    puVar8 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb9a0;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar6 = param_4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771174);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771174) = uVar6;
      _objc_release(uVar5);
      uVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771178);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771178) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11277117c);
      *(ulong *)((long)ppuVar3 + (long)_DAT_11277117c) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771180);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771180) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf6cfc0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771184);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771184) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c242480();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771188);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771188) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf6f600();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11277118c);
      *(ulong *)((long)ppuVar3 + (long)_DAT_11277118c) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c0ce240();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)_DAT_112771190;
      uVar6 = *(undefined8 *)((long)ppuVar3 + lVar9);
      *(ulong *)((long)ppuVar3 + lVar9) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771198);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771198) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c28d5a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112771194);
      *(ulong *)((long)ppuVar3 + (long)_DAT_112771194) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_11277119c);
      *(ulong *)((long)ppuVar3 + (long)_DAT_11277119c) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c137b40();
      *(char *)((long)ppuVar3 + (long)_DAT_1127711a0) = (char)uVar4;
      uVar4 = param_3;
      func_0x00010bf6c7c0();
      *(char *)((long)ppuVar3 + (long)_DAT_1127711a4) = (char)uVar4;
      if (*(long *)((long)ppuVar3 + lVar9) == 0) {
        uVar5 = 1;
        FUN_107ee8880();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)((long)ppuVar3 + lVar9);
        *(undefined8 *)((long)ppuVar3 + lVar9) = uVar6;
        _objc_release(uVar7);
        _objc_release(uVar5);
      }
      _objc_release(param_3);
    }
    _objc_retain(ppuVar3);
    puVar8 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  return puVar8;
}



/* Entry: 107ecf990; end: 107ed0033; -[SCCloudUpdateEntryOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ecf990(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
LAB_107ecfac8:
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar2);
  }
  else {
    puVar9 = puVar1;
    func_0x00010bfbdda0();
    func_0x00010b5fa33c();
    puVar10 = PTR_PTR_1126af4d0;
    if (puVar9 == (undefined *)0x8) {
LAB_107ecfa0c:
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = 0;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107ecfac8;
    }
    lVar12 = (long)_DAT_112771188;
    lVar3 = *(long *)(param_1 + lVar12);
    if (((lVar3 == 0) || (*(long *)(param_1 + _DAT_11277118c) == 0)) ||
       (*(long *)(param_1 + _DAT_112771190) == 0)) {
LAB_107ecfdc8:
      lVar3 = (long)_DAT_112771184;
      if (*(long *)(param_1 + lVar3) != 0) {
        puVar10 = PTR_PTR_1126af4d0;
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar10 != (undefined *)0x0) {
          _objc_release();
          goto LAB_107ecfdf8;
        }
        puVar10 = PTR_PTR_1126d7f18;
        _objc_alloc(PTR_PTR_1126d7f18);
        func_0x00010c00e960();
        param_1 = PTR_PTR_1126d7f38;
        _objc_alloc(PTR_PTR_1126d7f38);
        func_0x00010c03ab20();
LAB_107ed0028:
        _objc_release(puVar10);
        goto LAB_107ecfae0;
      }
LAB_107ecfdf8:
      lVar11 = (long)_DAT_112771194;
      lVar8 = *(long *)(param_1 + lVar11);
      func_0x00010bf529e0();
      if (lVar8 == 0) {
LAB_107ecff70:
        if (((*(long *)(param_1 + lVar3) == 0) && (*(long *)(param_1 + lVar12) == 0)) &&
           ((*(long *)(param_1 + _DAT_11277118c) == 0 &&
            ((*(long *)(param_1 + _DAT_112771180) == 0 && (*(long *)(param_1 + lVar11) == 0))))))
        goto LAB_107ecfa0c;
      }
      else if ((*(long *)(param_1 + lVar3) == 0) && (*(long *)(param_1 + lVar12) == 0)) {
        puVar10 = PTR_PTR_1126af4d0;
        func_0x00010bf52da0();
        puVar9 = *(undefined **)(param_1 + lVar11);
        func_0x00010bf529e0();
        if (puVar9 < puVar10) {
          puVar10 = PTR_PTR_1126af4d0;
          func_0x00010bfa7380(PTR_PTR_1126af4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar10;
          func_0x0001006372a4();
          _objc_release(puVar10);
          puVar10 = puVar9;
          func_0x00010c246ca0(puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
          puVar9 = puVar10;
          func_0x000100504554(puVar10,&PTR___NSConcreteGlobalBlock_110a118f0);
          puVar5 = puVar1;
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar5;
          func_0x00010b5fcecc();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
          param_1 = PTR_PTR_1126d7f38;
          _objc_alloc(PTR_PTR_1126d7f38);
          func_0x00010c03ab20();
          _objc_release(puVar4);
          _objc_release(puVar9);
          goto LAB_107ed0028;
        }
        goto LAB_107ecff70;
      }
      _objc_retain(param_1);
      goto LAB_107ecfae0;
    }
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (puVar10 == (undefined *)0x0) {
      puVar10 = *(undefined **)(param_1 + _DAT_112771198);
      uVar2 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar9 = puVar1;
      func_0x00010c07b240();
      puVar5 = puVar10;
      func_0x00010c0719c0();
      if ((int)puVar9 == (int)puVar5) {
        _objc_release(puVar10);
        goto LAB_107ecfdc8;
      }
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar2 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c241220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar6 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c0c5180(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520(puVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 3;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5);
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(uVar6);
      _objc_release(puVar9);
      _objc_release(uVar2);
    }
    else {
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar4 = *(undefined **)(param_1 + lVar12);
      func_0x00010c241220(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar2 = *(undefined8 *)(param_1 + lVar12);
      func_0x00010c0c5180(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da520(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5);
      _objc_release(puVar5);
      _objc_release(uVar2);
      _objc_release(puVar9);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar10);
  param_1 = (undefined *)0x0;
LAB_107ecfae0:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ed0034; end: 107ed009b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ed0034(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112771194);
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_2);
  return lVar1 == 0;
}



/* Entry: 107ed009c; end: 107ed011f;  */

undefined8 FUN_107ed009c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf59960(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107ed0120; end: 107ed0127;  */

void FUN_107ed0120(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 107ed0128; end: 107ed0b33; -[SCCloudUpdateEntryOperation executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ed0128(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfbdda0();
  *(long *)(param_1 + _DAT_1127711a8) = (long)(int)puVar2;
  puVar2 = PTR_PTR_1126bc830;
  func_0x00010bf35080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_112771184) == 0) {
    if (*(long *)(param_1 + _DAT_112771180) != 0) {
      func_0x00010c216240(puVar2);
    }
    goto LAB_107ed06c8;
  }
  lVar15 = (long)_DAT_112771188;
  if ((*(long *)(param_1 + lVar15) != 0) && (*(long *)(param_1 + _DAT_11277118c) != 0)) {
    puVar7 = PTR_PTR_1126bc7f8;
    func_0x00010bf5a9c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0();
    func_0x00010c1a7000(puVar7);
    puVar8 = PTR_PTR_1126bf8e8;
    func_0x00010bf5a9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0fd8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(puVar7);
    _objc_release(puVar9);
    lVar3 = *(long *)(param_1 + _DAT_112771190);
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puVar9 = PTR_PTR_1126bf8f0;
      func_0x00010bf5aa20(PTR_PTR_1126bf8f0);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0fd920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar7);
      _objc_release(puVar10);
      _objc_release(puVar9);
    }
    puVar9 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126af4d0;
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar9;
    func_0x00010bf529e0();
    if (puVar16 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        puVar17 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar17;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        _objc_release(puVar17);
        if ((int)puVar5 != 0) {
          puVar16 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
          func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar7;
          func_0x00010c0fd8c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c131100(puVar2);
          _objc_release(puVar4);
          _objc_release(puVar17);
          _objc_release(puVar16);
          puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          _objc_opt_new();
          puVar17 = puVar1;
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar17 != (undefined *)0x0) {
            puVar17 = puVar1;
            func_0x00010c245800(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar17;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar17);
            puVar17 = puVar1;
            func_0x00010c245800(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef7f60(puVar16);
            _objc_release(puVar17);
            func_0x00010c12d3e0(puVar16);
            uVar6 = *(undefined8 *)(param_1 + lVar15);
            func_0x00010c241220(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220220(puVar16);
            _objc_release(uVar6);
            _objc_release(puVar4);
          }
          if (puVar16 != (undefined *)0x0) {
            puVar17 = puVar16;
            func_0x00010bf51e00(puVar16);
            func_0x00010c2062e0(puVar2);
            _objc_release(puVar17);
          }
          puVar17 = PTR_PTR_1126af4d0;
          func_0x00010bfa7420();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar17;
          func_0x00010c246ca0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar17);
          puVar17 = puVar4;
          func_0x00010bf529e0();
          if (puVar17 == (undefined *)0x0) goto LAB_107ed03fc;
          puVar17 = (undefined *)0x0;
          goto LAB_107ed0a2c;
        }
        puVar16 = puVar16 + 1;
        puVar17 = puVar9;
        func_0x00010bf529e0();
      } while (puVar16 < puVar17);
    }
    puVar16 = puVar7;
    func_0x00010c0fd8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar2);
LAB_107ed03f4:
    _objc_release(puVar17);
    goto LAB_107ed03fc;
  }
  puVar7 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12e3a0(puVar2);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12caa0(puVar2);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380(PTR_PTR_1126af4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100(PTR_PTR_1126bc7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d7bc0();
  func_0x00010c1d7be0(puVar10);
  puVar16 = puVar9;
  func_0x00010bf59960(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar2);
  _objc_release(puVar16);
  puVar16 = puVar2;
  func_0x00010c245780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010b704538();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(puVar2);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  goto LAB_107ed06a8;
  while( true ) {
    puVar17 = puVar17 + 1;
    puVar5 = puVar4;
    func_0x00010bf529e0();
    if (puVar5 <= puVar17) break;
LAB_107ed0a2c:
    puVar5 = puVar4;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0720c0();
    _objc_release(puVar11);
    _objc_release(puVar5);
    if (((ulong)puVar12 & 1) != 0) {
      if (puVar17 != (undefined *)0x7fffffffffffffff) {
        puVar17 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c0fd8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130e80(puVar2);
        _objc_release(puVar11);
        _objc_release(puVar5);
        goto LAB_107ed03f4;
      }
      break;
    }
  }
LAB_107ed03fc:
  _objc_release(puVar4);
  _objc_release(puVar16);
  if (puVar10 != (undefined *)0x0) {
    puVar16 = PTR_PTR_1126bc7f8;
    func_0x00010bf35100(PTR_PTR_1126bc7f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7bc0();
    func_0x00010c1d7be0(puVar16);
    puVar17 = puVar2;
    func_0x00010c245780(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar17;
    func_0x00010b704538();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206280(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar17);
    _objc_release(puVar16);
  }
  puVar16 = puVar2;
  func_0x00010c245780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar15);
  func_0x00010c241220(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010b704538(puVar16,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206280(puVar2);
  _objc_release(puVar17);
  _objc_release(uVar6);
  _objc_release(puVar16);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
LAB_107ed06a8:
  _objc_release(puVar7);
LAB_107ed06c8:
  if (*(long *)(param_1 + _DAT_112771194) != 0) {
    func_0x00010c2062e0(puVar2);
  }
  func_0x00010c0f7a20(puVar2);
  func_0x00010c1da4e0(puVar2);
  puVar7 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189c00(puVar2);
  func_0x00010bf529e0(puVar7);
  puVar8 = puVar2;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x1) {
      func_0x00010c1a1e00(puVar2);
      puVar8 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0ed100();
      if ((int)puVar9 != 2) {
        func_0x00010c0ed100(puVar8);
      }
      func_0x00010c222da0(puVar2);
      _objc_release(puVar8);
    }
    else {
      puVar8 = puVar7;
      func_0x00010bf529e0();
      if ((undefined *)0x1 < puVar8) {
        func_0x00010c1a1e00(puVar2);
        func_0x00010c222da0(puVar2);
      }
    }
  }
  FUN_107ee8c84(puVar7);
  func_0x00010c207320(puVar2);
  uVar6 = 0;
  puVar8 = puVar7;
  func_0x00010b5fb890(puVar7,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2062c0(puVar2);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    func_0x00010bf59960(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010bf59960(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar13 = uVar6;
    func_0x00010bf433a0(uVar6);
    _objc_release(puVar1);
    _objc_release(uVar6);
    return uVar13;
  }
  return 1;
}



/* Entry: 107ed0b34; end: 107ed0bb7;  */

undefined8 FUN_107ed0b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf59960(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf59960(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 107ed0bb8; end: 107ed0bbf; -[SCCloudUpdateEntryOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107ed0bb8(void)

{
  return 1;
}



/* Entry: 107ed0bc0; end: 107ed0cf3; -[SCCloudUpdateEntryOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed0bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_PTR_1126d8270;
  _objc_retain(in_stack_00000018);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0093a0();
  _objc_release(param_5);
  func_0x00010be6e2c0(param_1,param_2,param_3,param_7,param_4,puVar1,param_6,param_8,
                      in_stack_00000018);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000018);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ed0cf4; end: 107ed13f7; -[SCCloudUpdateEntryOperation commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed0cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = PTR_PTR_1126af4d0;
  lVar1 = *(long *)(param_1 + _DAT_112771188);
  if ((lVar1 == 0) || (*(long *)(param_1 + _DAT_11277118c) == 0)) {
    puVar11 = (undefined *)0x0;
  }
  else {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bc830;
  func_0x00010bf35080(PTR_PTR_1126bc830);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c1fce60(puVar3);
  func_0x00010c0f7a20(puVar3);
  func_0x00010c1da4e0(puVar3);
  if (*(long *)(param_1 + _DAT_112771184) == 0 || puVar11 == (undefined *)0x0) {
    if (*(long *)(param_1 + _DAT_112771184) == 0) {
      if (*(long *)(param_1 + _DAT_112771180) != 0) {
        func_0x00010c210f40(puVar3);
      }
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126af4d0;
      func_0x00010bfa72e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12e860(puVar3);
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12e820(puVar3);
        _objc_release(puVar5);
        puVar5 = PTR_PTR_1126bc7f8;
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6bf20(puVar5);
        _objc_release(puVar6);
        puVar5 = PTR_PTR_1126bc810;
        puVar6 = puVar12;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72c0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar6);
        func_0x00010bf6bf00(PTR_PTR_1126bc818);
        _objc_release(puVar5);
      }
    }
    puVar5 = (undefined *)0x0;
    goto LAB_107ed11ec;
  }
  puVar5 = PTR_PTR_1126bc7f8;
  func_0x00010bf35100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  puVar6 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar6;
  func_0x00010bf529e0();
  if (puVar12 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      puVar13 = puVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar13;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0720c0();
      _objc_release(puVar7);
      _objc_release(puVar13);
      if ((int)puVar8 != 0) {
        puVar12 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1311c0(puVar3);
        _objc_release(puVar13);
        _objc_release(puVar12);
        puVar12 = PTR_PTR_1126af4d0;
        func_0x00010bfa7500();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010bf529e0();
        if (puVar13 == (undefined *)0x0) goto LAB_107ed10b0;
        puVar13 = (undefined *)0x0;
        goto LAB_107ed131c;
      }
      puVar12 = puVar12 + 1;
      puVar13 = puVar6;
      func_0x00010bf529e0();
    } while (puVar12 < puVar13);
  }
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
  func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0670a0(puVar3);
LAB_107ed10a4:
  _objc_release(puVar13);
  goto LAB_107ed10b0;
  while( true ) {
    puVar13 = puVar13 + 1;
    puVar7 = puVar12;
    func_0x00010bf529e0();
    if (puVar7 <= puVar13) break;
LAB_107ed131c:
    puVar7 = puVar12;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    if (((ulong)puVar9 & 1) != 0) {
      if (puVar13 != (undefined *)0x7fffffffffffffff) {
        puVar13 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1311a0(puVar3);
        _objc_release(puVar7);
        goto LAB_107ed10a4;
      }
      break;
    }
  }
LAB_107ed10b0:
  _objc_release(puVar12);
  _objc_retain(puVar11);
  puVar12 = PTR_PTR_1126af4d0;
  func_0x00010bfa72e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bc7f8;
  if (puVar12 != (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bf20(puVar13);
    _objc_release(puVar7);
    puVar13 = PTR_PTR_1126bc810;
    puVar7 = puVar12;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72c0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    func_0x00010bf6bf00(PTR_PTR_1126bc818);
    _objc_release(puVar13);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar11;
LAB_107ed11ec:
  puVar6 = PTR_PTR_1126d8348;
  _objc_alloc(PTR_PTR_1126d8348);
  puVar13 = puVar5;
  puVar7 = puVar12;
  func_0x00010bff2500();
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  _objc_retain(puVar7);
  if (puVar13 != (undefined *)0x0) {
    _objc_retain(puVar13);
    puVar11 = puVar13;
    func_0x00010bf6cfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = puVar13;
      func_0x00010bf6cfa0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080194b4();
      _objc_release(puVar11);
    }
    puVar11 = puVar13;
    func_0x00010befcd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 != (undefined *)0x0) {
      puVar11 = puVar13;
      func_0x00010befcd20(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar7;
      func_0x00010c13a8c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bb0c0();
      _objc_release(puVar2);
      _objc_release(puVar11);
    }
    _objc_release(puVar13);
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 107ed13f8; end: 107ed14eb; -[SCCloudUpdateEntryOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ed13f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf6cfa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010bf6cfa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080194b4();
      _objc_release(lVar1);
    }
    lVar1 = param_3;
    func_0x00010befcd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010befcd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c13a8c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bb0c0();
      _objc_release(uVar2);
      _objc_release(lVar1);
    }
    _objc_release(param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ed14ec; end: 107ed16ff; -[SCCloudUpdateEntryOperation changedSnapContextsWithEntryUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_107ed14ec(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar7 = (undefined **)0x0;
  }
  else {
    _objc_retain(param_3);
    ppuVar7 = param_3;
    func_0x00010befcd20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_3;
    if (ppuVar7 == (undefined **)0x0) {
LAB_107ed1588:
      ppuVar7 = param_3;
      func_0x00010bf6cfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar7 != (undefined **)0x0) {
        func_0x00010bf6cfa0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107ed15b4;
      }
LAB_107ed16ac:
      ppuVar7 = (undefined **)0x0;
    }
    else {
      ppuVar1 = param_3;
      func_0x00010bf6cfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppuVar7);
      if (ppuVar1 == (undefined **)0x0) goto LAB_107ed1588;
      func_0x00010befcd20();
      _objc_retainAutoreleasedReturnValue();
LAB_107ed15b4:
      puVar5 = PTR_PTR_1126d8278;
      if (ppuVar8 == (undefined **)0x0) goto LAB_107ed16ac;
      ppuVar1 = ppuVar8;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277119c);
      func_0x00010bf31200(uVar2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar8;
      func_0x00010c0c5180(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + _DAT_11277117c);
      lVar4 = param_1;
      func_0x00010c079400(param_1);
      func_0x00010c23f7c0(puVar5,param_2,ppuVar1,uVar2,ppuVar3,uVar9,0xffffd8f1,lVar4,
                          *(undefined8 *)(param_1 + _DAT_112771174));
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &puStack_70;
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,ppuVar6,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(ppuVar3);
      _objc_release(uVar2);
      _objc_release(ppuVar1);
      _objc_release(ppuVar8);
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar7 = ppuVar6;
  if (*(long *)((long)param_3 + (long)_DAT_112771188) == 0) {
    if (*(long *)((long)param_3 + (long)_DAT_112771184) == 0) goto LAB_107ed1778;
    func_0x00010c269d40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c080900();
  }
  else if (*(long *)((long)param_3 + (long)_DAT_112771184) == 0) {
LAB_107ed1778:
    if (*(long *)((long)param_3 + (long)_DAT_112771180) == 0) {
      if (*(long *)((long)param_3 + (long)_DAT_112771194) == 0) {
        ppuVar8 = (undefined **)0x0;
        goto LAB_107ed17dc;
      }
    }
    else if (*(long *)((long)param_3 + (long)_DAT_112771194) == 0) {
      func_0x00010c269d40(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar7;
      func_0x00010c080920();
      goto LAB_107ed17d0;
    }
    func_0x00010c269d40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c0809a0();
  }
  else {
    func_0x00010c269d40(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c080940();
  }
LAB_107ed17d0:
  _objc_release(ppuVar7);
LAB_107ed17dc:
  _objc_release(ppuVar6);
  return ppuVar8;
}



/* Entry: 107ed1700; end: 107ed17ff; -[SCCloudUpdateEntryOperation isEligibleForTacomaWithCOFService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ed1700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  if (*(long *)(param_1 + _DAT_112771188) == 0) {
    if (*(long *)(param_1 + _DAT_112771184) == 0) goto LAB_107ed1778;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c080900();
  }
  else if (*(long *)(param_1 + _DAT_112771184) == 0) {
LAB_107ed1778:
    if (*(long *)(param_1 + _DAT_112771180) == 0) {
      if (*(long *)(param_1 + _DAT_112771194) == 0) {
        uVar2 = 0;
        goto LAB_107ed17dc;
      }
    }
    else if (*(long *)(param_1 + _DAT_112771194) == 0) {
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c080920();
      goto LAB_107ed17d0;
    }
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0809a0();
  }
  else {
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c080940();
  }
LAB_107ed17d0:
  _objc_release(uVar1);
LAB_107ed17dc:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107ed1800; end: 107ed1e4f; -[SCCloudUpdateEntryOperation _orchestrateUpdateEntryWithDependencyProvider:networker:thumbnailFileGenerator:dataVault:dataObjectContext:coreConfigProvider:progressHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed1800(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af4c0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar2 = param_2;
  func_0x00010be1dd60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d81c0;
  _objc_alloc();
  func_0x00010c055ae0();
  puVar4 = PTR_PTR_1126d8350;
  _objc_alloc();
  func_0x00010c00b4c0();
  lVar5 = *(long *)(param_2 + _DAT_112771188);
  if (((lVar5 == 0) || (*(long *)(param_2 + _DAT_11277118c) == 0)) ||
     (*(long *)(param_2 + _DAT_112771190) == 0)) {
    puVar7 = PTR_PTR_1126d8358;
    _objc_opt_new();
    puVar8 = puVar7;
    func_0x00010c2a7ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    puVar10 = puVar8;
    func_0x00010c2a90e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c2ad3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2bc1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2a82c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2bc080();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    lVar5 = 0;
  }
  else {
    func_0x00010b5fa34c();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    FUN_107ee8930(puVar15,puVar7,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar15);
    puVar7 = PTR_PTR_1126d8358;
    _objc_opt_new();
    puVar8 = puVar7;
    func_0x00010c2a7ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    puVar11 = puVar8;
    func_0x00010c2a90e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c2ad3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010c2bc1c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c2a82c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar14;
    func_0x00010c2bc080();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar9);
  }
  uVar16 = param_9;
  func_0x00010c269d40(param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  func_0x000108ec01e4(uVar16);
  _objc_release(uVar16);
  puVar7 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  uVar16 = param_4;
  uVar19 = param_7;
  FUN_107efc940(param_1,param_4,param_7,param_8,param_6,param_5,puVar15,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_retain(puVar15);
  _objc_retain(param_4);
  _objc_retain(puVar7);
  uVar17 = uVar16;
  func_0x00010bfb2660(uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar15);
  _objc_retain(lVar5);
  _objc_retain(param_4);
  uVar18 = uVar17;
  func_0x00010c0b8600(uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(uVar17);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar15);
  _objc_release(puVar15);
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(uVar16);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    uVar16 = *(undefined8 *)(puVar1 + 0x20);
    uVar17 = *(undefined8 *)(puVar1 + 0x28);
    uVar21 = *(undefined8 *)(puVar1 + 0x30);
    _objc_retain(uVar19);
    func_0x00010c0dc640(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar19;
    FUN_107f10fbc(uVar19,uVar16,uVar17,uVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar19);
    _objc_release(uVar21);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar18);
  return;
}



/* Entry: 107ed1e50; end: 107ed1ecb;  */

void FUN_107ed1e50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_2);
  func_0x00010c0dc640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  FUN_107f10fbc(param_2,uVar1,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107ed1ecc; end: 107ed21bb;  */

void FUN_107ed1ecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2537c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c253720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1760(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3760(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c253720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a16c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_107ed21bc;
  uStack_70 = 0x107ed21cc;
  uStack_68 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3032000000;
  pcStack_a8 = FUN_107ed21bc;
  uStack_a0 = 0x107ed21cc;
  uStack_98 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar8);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  func_0x00010c0c0800(uVar1);
  puVar3 = PTR_PTR_1126af5d0;
  if (puStack_b8[5] == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  __Block_object_dispose(&uStack_c0,8);
  _objc_release(uStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ed21bc; end: 107ed21d3;  */

void FUN_107ed21bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ed21d4; end: 107ed2323;  */

void FUN_107ed21d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0b3760(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1660();
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126d82d0;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010bf97280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c010400();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar2;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ed2324; end: 107ed23d3; -[SCCloudUpdateEntryOperation _getCloudSyncEntryData:] */

void FUN_107ed2324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d81b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf97200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c07b240(param_3);
  _objc_release(param_3);
  func_0x00010c010360(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ed23d4; end: 107ed2597; -[SCCloudUpdateEntryOperation logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed23d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 2;
  func_0x00010bafc234(2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_11277117c),
                      &PTR____CFConstantStringClassReference_110e29c18);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112771184),
                      &PTR____CFConstantStringClassReference_110ec2b78);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112771188);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2b98);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_112771174));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2858,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar4 = *(long *)(param_1 + _DAT_11277119c);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ed2598; end: 107ed25a7; -[SCCloudUpdateEntryOperation requiresSyncStatusUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107ed2598(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127711a0);
}



/* Entry: 107ed25a8; end: 107ed25af; -[SCCloudUpdateEntryOperation eligibleForOutOfOrderExecution] */

undefined8 FUN_107ed25a8(void)

{
  return 0;
}



/* Entry: 107ed25b0; end: 107ed25b7; -[SCCloudUpdateEntryOperation doesNotRequireMediaUpload] */

undefined8 FUN_107ed25b0(void)

{
  return 1;
}



/* Entry: 107ed25b8; end: 107ed25bf; -[SCCloudUpdateEntryOperation allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107ed25b8(void)

{
  return 1;
}



/* Entry: 107ed25c0; end: 107ed25c7; -[SCCloudUpdateEntryOperation needRunImmediately] */

undefined8 FUN_107ed25c0(void)

{
  return 0;
}



/* Entry: 107ed25c8; end: 107ed2727; -[SCCloudUpdateEntryOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_107ed25c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (*(long *)(param_1 + _DAT_112771184) != 0) {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa72e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (puVar2 != (undefined *)0x0) {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_107ed2728;
      puStack_68 = &UNK_110841f80;
      _objc_retain(puVar2);
      puStack_60 = puVar2;
      _objc_retain(param_4);
      puStack_b0 = puVar1;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_107ed2844;
      puStack_98 = &UNK_1108bbd78;
      uStack_58 = param_4;
      _objc_retain(puVar2);
      puStack_90 = puVar2;
      _objc_retain(param_3);
      uStack_88 = param_3;
      func_0x00010c0f8520(param_4,param_2,&puStack_80,param_6,&puStack_b0);
      _objc_release(uStack_88);
      _objc_release(puStack_90);
      _objc_release(uStack_58);
      _objc_release(puStack_60);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 107ed2728; end: 107ed2843;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined * FUN_107ed2728(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *in_x5;
  undefined *puVar10;
  undefined *puVar11;
  undefined *unaff_x23;
  undefined *puVar12;
  undefined *unaff_x24;
  undefined *puVar13;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined1 ***pppuVar14;
  undefined *puVar15;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1d8;
  undefined1 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_a8;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar8 = PTR_PTR_1126bc7f8;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6bf20(puVar8);
  _objc_release(puVar13);
  puVar5 = PTR_PTR_1126bc810;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_48 = uVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(uVar3);
  puVar8 = puVar5;
  func_0x00010bf6bf00(PTR_PTR_1126bc818);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar11 = *(undefined **)(puVar5 + 0x20);
  puVar5 = *(undefined **)(puVar5 + 0x28);
  puVar7 = &uStack_170;
  pcStack_58 = FUN_107ed2844;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar5);
  if (puVar5 != (undefined *)0x0) {
    puVar8 = puVar5;
    func_0x00010c13ac80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar8);
    puVar8 = puVar5;
    func_0x00010c13a8c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar8);
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    puStack_160 = (undefined8 *)0x0;
    puVar8 = puVar11;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      unaff_x24 = (undefined *)*puStack_160;
      do {
        unaff_x25 = (undefined *)0x0;
        do {
          if ((undefined *)*puStack_160 != unaff_x24) {
            _objc_enumerationMutation(puVar8);
          }
          uVar2 = (uint)*(undefined8 *)(lStack_168 + (long)unaff_x25 * 8);
          func_0x00010bf0b760();
          if (uVar2 < 0x16) {
            func_0x00010b697928();
          }
          unaff_x23 = puVar5;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c069d00();
          _objc_release(unaff_x23);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar4 != unaff_x25);
        puVar4 = puVar8;
        puVar7 = &uStack_170;
        func_0x00010bf52a60();
        puVar13 = (undefined *)0x0;
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    puVar8 = (undefined *)puVar7;
  }
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar11;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_2a0;
  puStack_178 = &SUB_108019660;
  pppuVar14 = &ppuStack_180;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  ppuStack_180 = &puStack_60;
  _objc_retain();
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  puStack_290 = (undefined8 *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  puVar5 = puVar6;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    unaff_x25 = (undefined *)*puStack_290;
    do {
      unaff_x26 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_290 != unaff_x25) {
          _objc_enumerationMutation(puVar6);
        }
        puVar13 = *(undefined **)(lStack_298 + (long)unaff_x26 * 8);
        unaff_x23 = puVar13;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar13 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = puVar8;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar5 != unaff_x26);
      puVar5 = puVar6;
      puVar7 = &uStack_2a0;
      func_0x00010bf52a60();
      puVar13 = (undefined *)0x0;
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  puVar5 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return puVar5;
  }
  puVar15 = &UNK_1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_2a0;
  do {
    puVar10 = in_x5;
    *(undefined **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined **)((long)puVar1 + -0x30) = puVar13;
    *(undefined **)((long)puVar1 + -0x28) = puVar8;
    *(undefined **)((long)puVar1 + -0x20) = puVar6;
    *(undefined **)((long)puVar1 + -0x18) = puVar11;
    *(undefined1 ****)((long)puVar1 + -0x10) = pppuVar14;
    *(undefined **)((long)puVar1 + -8) = puVar15;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined **)((long)puVar1 + -0x138) = puVar5;
    puVar6 = puVar4;
    _objc_retain();
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar15 = puVar4;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)((long)puVar1 + -0x130);
    puVar13 = (undefined *)((long)puVar1 + -0xf0);
    puVar9 = (undefined *)0x10;
    puVar5 = puVar15;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      unaff_x28 = (undefined *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        puVar11 = (undefined *)0x0;
        do {
          if ((undefined *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar15);
          }
          puVar13 = *(undefined **)(*(long *)((long)puVar1 + -0x128) + (long)puVar11 * 8);
          func_0x00010bf0b760();
          if ((uint)puVar13 < 0x16) {
            func_0x00010b697928();
          }
          else {
            puVar13 = (undefined *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined *)puVar7;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar8 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = puVar13;
          if ((int)puVar8 != 0) {
            unaff_x26 = puVar13;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = *(undefined **)((long)puVar1 + -0x138);
            puVar10 = (undefined *)0x0;
            unaff_x25 = (undefined *)puVar7;
            puVar9 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar12 = (undefined *)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        puVar8 = (undefined *)((long)puVar1 + -0x130);
        puVar13 = (undefined *)((long)puVar1 + -0xf0);
        puVar9 = (undefined *)0x10;
        puVar5 = puVar15;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    puVar12 = (undefined *)0x1;
code_r0x00010801998c:
    _objc_release(puVar15);
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar5 = *(undefined **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar12;
    }
    ___stack_chk_fail();
    *(undefined **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined **)((long)puVar1 + -400) = unaff_x26;
    *(undefined **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined **)((long)puVar1 + -0x178) = puVar12;
    *(undefined **)((long)puVar1 + -0x170) = puVar15;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar7;
    *(undefined **)((long)puVar1 + -0x160) = puVar4;
    *(undefined **)((long)puVar1 + -0x158) = puVar11;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x148) = &SUB_1080199ec;
    pppuVar14 = (undefined1 ***)((long)puVar1 + -0x150);
    in_x5 = puVar10;
    _objc_retain();
    _objc_retain(puVar6);
    _objc_retain(puVar8);
    _objc_retain(puVar13);
    _objc_retain(puVar10);
    unaff_x25 = puVar10;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar11 == 0) {
      unaff_x27 = (undefined *)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = puVar10;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar11 & 1) == 0) {
      unaff_x27 = puVar10;
      if (puVar13 == (undefined *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 == (undefined *)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        in_x5 = (undefined *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = puVar13;
        if (puVar8 != (undefined *)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        puVar11 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)puVar1 + -0x1a8) = puVar11;
        in_x5 = (undefined *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (puVar13 == (undefined *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined *)0x1;
    }
    if ((int)puVar9 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar10);
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      return unaff_x27;
    }
    puVar15 = &UNK_108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar4 = puVar6;
    puVar7 = (undefined8 *)puVar10;
    puVar11 = puVar5;
    unaff_x23 = puVar10;
    unaff_x24 = puVar9;
  } while( true );
}



/* Entry: 107ed2844; end: 107ed284f;  */

/* WARNING: Possible PIC construction at 0x000108019adc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108019ae0) */

undefined1 *
FUN_107ed2844(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *puVar10;
  undefined1 *unaff_x24;
  undefined1 *puVar11;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 **ppuVar12;
  undefined *puVar13;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = *(undefined1 **)(param_1 + 0x20);
  puVar4 = *(undefined1 **)(param_1 + 0x28);
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  _objc_retain();
  _objc_retain(puVar4);
  if (puVar4 != (undefined1 *)0x0) {
    puVar3 = puVar4;
    func_0x00010c13ac80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c13a8c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d00();
    _objc_release(puVar3);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    puStack_110 = (undefined8 *)0x0;
    puVar3 = puVar9;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010bf52a60();
    if (puVar11 != (undefined1 *)0x0) {
      unaff_x24 = (undefined1 *)*puStack_110;
      do {
        unaff_x25 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)*puStack_110 != unaff_x24) {
            _objc_enumerationMutation(puVar3);
          }
          uVar2 = (uint)*(undefined8 *)(lStack_118 + (long)unaff_x25 * 8);
          func_0x00010bf0b760();
          if (uVar2 < 0x16) {
            func_0x00010b697928();
          }
          unaff_x23 = puVar4;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c069d00();
          _objc_release(unaff_x23);
          unaff_x25 = unaff_x25 + 1;
        } while (puVar11 != unaff_x25);
        puVar11 = puVar3;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
        unaff_x22 = (undefined1 *)0x0;
      } while (puVar11 != (undefined1 *)0x0);
    }
    _objc_release(puVar3);
    param_3 = (undefined1 *)puVar6;
  }
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_250;
  puStack_128 = &SUB_108019660;
  ppuVar12 = &puStack_130;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar5);
  _objc_retain(param_3);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  puVar4 = puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    unaff_x25 = (undefined1 *)*puStack_240;
    do {
      unaff_x26 = (undefined1 *)0x0;
      do {
        if ((undefined1 *)*puStack_240 != unaff_x25) {
          _objc_enumerationMutation(puVar5);
        }
        puVar11 = *(undefined1 **)(lStack_248 + (long)unaff_x26 * 8);
        unaff_x23 = puVar11;
        func_0x00010bf0b260();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0b760();
        if ((uint)puVar11 < 0x16) {
          func_0x00010b697928();
        }
        unaff_x24 = param_3;
        func_0x00010c13a860();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x23);
        func_0x00010c069d00(unaff_x24);
        _objc_release(unaff_x24);
        unaff_x26 = unaff_x26 + 1;
      } while (puVar4 != unaff_x26);
      puVar4 = puVar5;
      puVar6 = &uStack_250;
      func_0x00010bf52a60();
      unaff_x22 = (undefined1 *)0x0;
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(puVar5);
  puVar4 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar4;
  }
  puVar13 = &UNK_1080197ec;
  ___stack_chk_fail();
  puVar1 = &uStack_250;
  do {
    puVar8 = param_6;
    *(undefined1 **)((long)puVar1 + -0x60) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -0x50) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)((long)puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)((long)puVar1 + -0x28) = param_3;
    *(undefined1 **)((long)puVar1 + -0x20) = puVar5;
    *(undefined1 **)((long)puVar1 + -0x18) = puVar9;
    *(undefined1 ***)((long)puVar1 + -0x10) = ppuVar12;
    *(undefined **)((long)puVar1 + -8) = puVar13;
    *(undefined8 *)((long)puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined1 **)((long)puVar1 + -0x138) = puVar4;
    puVar5 = puVar3;
    _objc_retain();
    _objc_retain(puVar3);
    _objc_retain(puVar6);
    *(undefined8 *)((long)puVar1 + -0x128) = 0;
    *(undefined8 *)((long)puVar1 + -0x130) = 0;
    *(undefined8 *)((long)puVar1 + -0x118) = 0;
    *(undefined8 *)((long)puVar1 + -0x120) = 0;
    *(undefined8 *)((long)puVar1 + -0x108) = 0;
    *(undefined8 *)((long)puVar1 + -0x110) = 0;
    *(undefined8 *)((long)puVar1 + -0xf8) = 0;
    *(undefined8 *)((long)puVar1 + -0x100) = 0;
    puVar11 = puVar3;
    func_0x00010c23f420();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)((long)puVar1 + -0x130);
    unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
    puVar7 = (undefined1 *)0x10;
    puVar4 = puVar11;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      unaff_x28 = (undefined1 *)**(undefined8 **)((long)puVar1 + -0x120);
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if ((undefined1 *)**(undefined8 **)((long)puVar1 + -0x120) != unaff_x28) {
            _objc_enumerationMutation(puVar11);
          }
          unaff_x22 = *(undefined1 **)(*(long *)((long)puVar1 + -0x128) + (long)puVar9 * 8);
          func_0x00010bf0b760();
          if ((uint)unaff_x22 < 0x16) {
            func_0x00010b697928();
          }
          else {
            unaff_x22 = (undefined1 *)0xfffffffffbadbeef;
          }
          unaff_x24 = (undefined1 *)puVar6;
          func_0x00010c13a8e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c06cde0();
          puVar7 = unaff_x24;
          func_0x00010c06cde0();
          unaff_x25 = unaff_x22;
          if ((int)puVar7 != 0) {
            unaff_x26 = unaff_x22;
            func_0x000108018d28();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = unaff_x24;
            func_0x00010bfaca60();
            _objc_retainAutoreleasedReturnValue();
            param_3 = *(undefined1 **)((long)puVar1 + -0x138);
            puVar8 = (undefined1 *)0x0;
            unaff_x25 = (undefined1 *)puVar6;
            puVar7 = unaff_x27;
            func_0x00010befb580();
            _objc_release(unaff_x27);
            _objc_release(unaff_x26);
            if (((ulong)unaff_x25 & 1) == 0) {
              _objc_release(unaff_x24);
              puVar10 = (undefined1 *)0x0;
              goto code_r0x00010801998c;
            }
          }
          _objc_release(unaff_x24);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        param_3 = (undefined1 *)((long)puVar1 + -0x130);
        unaff_x22 = (undefined1 *)((long)puVar1 + -0xf0);
        puVar7 = (undefined1 *)0x10;
        puVar4 = puVar11;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    puVar10 = (undefined1 *)0x1;
code_r0x00010801998c:
    _objc_release(puVar11);
    _objc_release(puVar6);
    _objc_release(puVar3);
    puVar4 = *(undefined1 **)((long)puVar1 + -0x138);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar1 + -0x70)) {
      return puVar10;
    }
    ___stack_chk_fail();
    *(undefined1 **)((long)puVar1 + -0x1a0) = unaff_x28;
    *(undefined1 **)((long)puVar1 + -0x198) = unaff_x27;
    *(undefined1 **)((long)puVar1 + -400) = unaff_x26;
    *(undefined1 **)((long)puVar1 + -0x188) = unaff_x25;
    *(undefined1 **)((long)puVar1 + -0x180) = unaff_x24;
    *(undefined1 **)((long)puVar1 + -0x178) = puVar10;
    *(undefined1 **)((long)puVar1 + -0x170) = puVar11;
    *(undefined8 **)((long)puVar1 + -0x168) = puVar6;
    *(undefined1 **)((long)puVar1 + -0x160) = puVar3;
    *(undefined1 **)((long)puVar1 + -0x158) = puVar9;
    *(undefined1 **)((long)puVar1 + -0x150) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x148) = &SUB_1080199ec;
    ppuVar12 = (undefined1 **)((long)puVar1 + -0x150);
    param_6 = puVar8;
    _objc_retain();
    _objc_retain(puVar5);
    _objc_retain(param_3);
    _objc_retain(unaff_x22);
    _objc_retain(puVar8);
    unaff_x25 = puVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = unaff_x25;
    func_0x00010c06cde0();
    if ((int)puVar9 == 0) {
      unaff_x27 = (undefined1 *)0x0;
      goto code_r0x000108019aec;
    }
    unaff_x26 = puVar8;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = unaff_x26;
    func_0x00010c06cde0();
    if (((ulong)puVar9 & 1) == 0) {
      unaff_x27 = puVar8;
      if (unaff_x22 == (undefined1 *)0x0) {
        unaff_x28 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == (undefined1 *)0x0) goto code_r0x000108019b64;
code_r0x000108019aa4:
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
      }
      else {
        unaff_x28 = unaff_x22;
        if (param_3 != (undefined1 *)0x0) goto code_r0x000108019aa4;
code_r0x000108019b64:
        puVar9 = unaff_x25;
        func_0x00010bfaca60();
        _objc_retainAutoreleasedReturnValue();
        *(undefined1 **)((long)puVar1 + -0x1a8) = puVar9;
        param_6 = (undefined1 *)0x0;
        func_0x00010befb560();
        _objc_release(*(undefined8 *)((long)puVar1 + -0x1a8));
      }
      if (unaff_x22 == (undefined1 *)0x0) {
        _objc_release(unaff_x28);
      }
    }
    else {
      unaff_x27 = (undefined1 *)0x1;
    }
    if ((int)puVar7 == 0) {
      _objc_release(unaff_x26);
code_r0x000108019aec:
      _objc_release(unaff_x25);
      _objc_release(puVar8);
      _objc_release(unaff_x22);
      _objc_release(param_3);
      _objc_release(puVar5);
      _objc_release(puVar4);
      return unaff_x27;
    }
    puVar13 = &UNK_108019ae0;
    puVar1 = (undefined8 *)((long)puVar1 + -0x1b0);
    puVar3 = puVar5;
    puVar6 = (undefined8 *)puVar8;
    puVar9 = puVar4;
    unaff_x23 = puVar8;
    unaff_x24 = puVar7;
  } while( true );
}



/* Entry: 107ed2850; end: 107ed28cf; -[SCCloudUpdateEntryOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed2850(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + _DAT_112771184) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa72e0(PTR_PTR_1126af4d0,param_2,*(long *)(param_1 + _DAT_112771184),param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126d8348;
  _objc_alloc(PTR_PTR_1126d8348);
  func_0x00010bff2500();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ed28d0; end: 107ed294b; -[SCCloudUpdateEntryOperation snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ed28d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lStack_60;
  long lStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_112771188) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_20 = *(long *)(param_1 + _DAT_112771188);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_107ed294c;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar1 = (long *)(puVar2 + _DAT_11277118c);
    puStack_30 = &stack0xfffffffffffffff0;
    if (*plVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_40 = *plVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      pcStack_48 = FUN_107ed29c8;
      lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar1 = (long *)(puVar2 + _DAT_112771190);
      ppuStack_50 = &puStack_30;
      if (*plVar1 == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_60 = *plVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
        _objc_retainAutoreleasedReturnValue();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        ___stack_chk_fail();
        return (undefined *)(ulong)(*(long *)(puVar2 + _DAT_112771188) != 0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 107ed294c; end: 107ed29c7; -[SCCloudUpdateEntryOperation detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ed294c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_11277118c) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_20 = *(long *)(param_1 + _DAT_11277118c);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_28 = FUN_107ed29c8;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar1 = (long *)(puVar2 + _DAT_112771190);
    puStack_30 = &stack0xfffffffffffffff0;
    if (*plVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_40 = *plVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      return (undefined *)(ulong)(*(long *)(puVar2 + _DAT_112771188) != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 107ed29c8; end: 107ed2a43; -[SCCloudUpdateEntryOperation miniThumbnailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ed29c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_112771190) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_20 = *(long *)(param_1 + _DAT_112771190);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_20,1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(*(long *)(puVar1 + _DAT_112771188) != 0);
}



/* Entry: 107ed2a44; end: 107ed2a5b; -[SCCloudUpdateEntryOperation numberOfSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_107ed2a44(long param_1)

{
  return *(long *)(param_1 + _DAT_112771188) != 0;
}



/* Entry: 107ed2a5c; end: 107ed2a8b; -[SCCloudUpdateEntryOperation dataVaultEncryption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed2a5c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112771198);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ed2a8c; end: 107ed2ae3; -[SCCloudUpdateEntryOperation isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ed2a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0(PTR_PTR_1126af4c0,param_2,*(undefined8 *)(param_1 + _DAT_11277117c),param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c07b240();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 107ed2ae4; end: 107ed2bb3; -[SCCloudUpdateEntryOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed2ae4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277119c,0);
  _objc_storeStrong(param_1 + _DAT_112771190,0);
  _objc_storeStrong(param_1 + _DAT_11277118c,0);
  _objc_storeStrong(param_1 + _DAT_112771188,0);
  _objc_storeStrong(param_1 + _DAT_112771194,0);
  _objc_storeStrong(param_1 + _DAT_112771198,0);
  _objc_storeStrong(param_1 + _DAT_112771180,0);
  _objc_storeStrong(param_1 + _DAT_112771184,0);
  _objc_storeStrong(param_1 + _DAT_11277117c,0);
  _objc_storeStrong(param_1 + _DAT_112771178,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112771174,0);
  return;
}



/* Entry: 107ed2bb4; end: 107ed2c7f; -[SCCloudUpdatePrivateEntriesCleanupContext initWithAddedSnaps:deletedSnaps:snapIdToEntryIdMap:] */

undefined1 *
FUN_107ed2bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fb9a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ed2c80; end: 107ed2c87; -[SCCloudUpdatePrivateEntriesCleanupContext deletedSnaps] */

undefined8 FUN_107ed2c80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107ed2c88; end: 107ed2c8f; -[SCCloudUpdatePrivateEntriesCleanupContext addedSnaps] */

undefined8 FUN_107ed2c88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107ed2c90; end: 107ed2c97; -[SCCloudUpdatePrivateEntriesCleanupContext snapIdToEntryIdMap] */

undefined8 FUN_107ed2c90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107ed2c98; end: 107ed2cd3; -[SCCloudUpdatePrivateEntriesCleanupContext .cxx_destruct] */

void FUN_107ed2c98(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107ed2cd4; end: 107ed2eff; -[SCCloudUpdatePrivateEntriesOperation initWithProfile:entryId:addSnapEntities:isPrivate:dataVaultEncryption:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107ed2cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_f0 = PTR_PTR_1126fb9b0;
  puVar2 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127711b8);
    *(undefined8 **)((long)puVar2 + (long)_DAT_1127711b8) = puVar3;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_1127711bc;
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_4;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_1127711c0;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_3;
    _objc_release(uVar4);
    lVar6 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127711c4);
    *(long *)((long)puVar2 + (long)_DAT_1127711c4) = lVar6;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar2 + (long)_DAT_1127711c8) = param_6;
    uVar4 = param_7;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127711cc);
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127711cc) = uVar4;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_1127711d0;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_8;
    _objc_release(uVar4);
    _objc_retain(param_5);
    lVar6 = param_5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_5);
        }
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      lVar6 = param_5;
      func_0x00010bf52a60();
    }
    _objc_release(param_5);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined8 *)0x5;
}



/* Entry: 107ed2f00; end: 107ed2f07; -[SCCloudUpdatePrivateEntriesOperation type] */

undefined8 FUN_107ed2f00(void)

{
  return 5;
}



/* Entry: 107ed2f08; end: 107ed2f0f; -[SCCloudUpdatePrivateEntriesOperation analyticsType] */

undefined8 FUN_107ed2f08(void)

{
  return 4;
}



/* Entry: 107ed2f10; end: 107ed2f3f; -[SCCloudUpdatePrivateEntriesOperation requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed2f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127711b8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ed2f40; end: 107ed2faf; -[SCCloudUpdatePrivateEntriesOperation entryIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed2f40(long param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_1127711bc);
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    _objc_alloc(PTR_PTR_1126d8360);
    func_0x00010c03aac0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ed2fb0; end: 107ed3007; -[SCCloudUpdatePrivateEntriesOperation makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed2fb0(void)

{
  _objc_alloc(PTR_PTR_1126d8360);
  func_0x00010c03aac0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ed3008; end: 107ed3233; -[SCCloudUpdatePrivateEntriesOperation initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ed3008(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5a90);
  if (uVar4 == 0 || (int)uVar2 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb9b0;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar4 = param_3;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 == 0) {
        _objc_release(param_3);
        puVar7 = (undefined1 *)0x0;
        goto LAB_107ed3200;
      }
      uVar6 = param_4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711b8);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711b8) = uVar6;
      _objc_release(uVar5);
      uVar4 = param_3;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711bc);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711bc) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711c0);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711c0) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c07b240();
      *(char *)((long)ppuVar3 + (long)_DAT_1127711c8) = (char)uVar4;
      uVar4 = param_3;
      func_0x00010bf64980();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711cc);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711cc) = uVar2;
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711d0);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711d0) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010befb600();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711c4);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711c4) = uVar2;
      _objc_release(uVar6);
      _objc_release(param_3);
    }
    _objc_retain(ppuVar3);
    puVar7 = (undefined1 *)ppuVar3;
  }
LAB_107ed3200:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  return puVar7;
}



/* Entry: 107ed3234; end: 107ed32a7;  */

void FUN_107ed3234(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d8368;
  func_0x00010c2aa800(PTR_PTR_1126d8368,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c192ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ed32a8; end: 107ed37c3; -[SCCloudUpdatePrivateEntriesOperation detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_107ed32a8(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar24 = *(undefined8 **)(param_1 + _DAT_1127711b8);
    uVar6 = 1;
    func_0x00010baa2848();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1ac0(param_5);
    _objc_release(uVar6);
    param_1 = (undefined *)0x0;
    goto LAB_107ed376c;
  }
  lVar25 = (long)_DAT_1127711c4;
  lVar2 = *(long *)(param_1 + lVar25);
  _objc_retain();
  puVar3 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar28 = *plStack_1a0;
    do {
      puVar29 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar28) {
          _objc_enumerationMutation(puVar3);
        }
        uVar6 = *(undefined8 *)(lStack_1a8 + (long)puVar29 * 8);
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar6);
        puVar29 = puVar29 + 1;
      } while (puVar5 != puVar29);
      puVar5 = puVar3;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(lVar2);
  puVar24 = &uStack_1f0;
  lVar28 = lVar2;
  func_0x00010bf52a60();
  if (lVar28 != 0) {
    lVar31 = *plStack_1e0;
    do {
      lVar30 = 0;
      do {
        if (*plStack_1e0 != lVar31) {
          _objc_enumerationMutation(lVar2);
        }
        lVar32 = *(long *)(lStack_1e8 + lVar30 * 8);
        lVar7 = lVar32;
        func_0x00010c23f220(lVar32);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar4;
        func_0x00010bf4b900();
        if ((int)puVar29 == 0) {
LAB_107ed3580:
          _objc_release(lVar8);
          _objc_release(lVar7);
LAB_107ed3590:
          func_0x00010befa120(puVar5);
        }
        else {
          lVar9 = lVar32;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          if (lVar9 == 0) goto LAB_107ed3580;
          lVar10 = lVar32;
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 == 0) {
            _objc_release(lVar10);
            _objc_release(lVar9);
            goto LAB_107ed3580;
          }
          func_0x00010bf6f520();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          if (lVar32 == 0) goto LAB_107ed3590;
        }
        lVar30 = lVar30 + 1;
      } while (lVar28 != lVar30);
      puVar24 = &uStack_1f0;
      lVar28 = lVar2;
      func_0x00010bf52a60();
    } while (lVar28 != 0);
  }
  _objc_release(lVar2);
  puVar29 = puVar5;
  func_0x00010bf529e0();
  if (puVar29 == (undefined *)0x0) {
    lVar25 = lVar2;
    func_0x00010bf529e0();
    if (lVar25 == 0) goto LAB_107ed36f0;
    _objc_retain(param_1);
  }
  else {
    lVar28 = *(long *)(param_1 + lVar25);
    func_0x00010c0d3c80();
    func_0x00010c12d500();
    lVar25 = lVar28;
    func_0x00010bf51e00();
    _objc_release(lVar2);
    _objc_release(lVar28);
    lVar28 = lVar25;
    func_0x00010bf529e0();
    lVar2 = lVar25;
    if (lVar28 == 0) {
LAB_107ed36f0:
      puVar24 = *(undefined8 **)(param_1 + _DAT_1127711b8);
      uVar6 = 2;
      func_0x00010baa2848();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a1ac0(param_5);
      _objc_release(uVar6);
      param_1 = (undefined *)0x0;
    }
    else {
      puVar29 = PTR_PTR_1126d7f58;
      _objc_alloc();
      puVar24 = *(undefined8 **)(param_1 + _DAT_1127711c0);
      func_0x00010c03aac0();
      param_1 = puVar29;
    }
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
LAB_107ed376c:
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar24);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfbdda0();
  *(long *)(param_4 + _DAT_1127711d4) = (long)(int)puVar3;
  puVar3 = PTR_PTR_1126bc830;
  func_0x00010bf35080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar4;
  func_0x00010bf529e0();
  if (puVar29 != (undefined *)0x0) {
    puVar29 = (undefined *)0x0;
    do {
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar26;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar13);
      _objc_release(puVar26);
      _objc_release(puVar12);
      puVar29 = puVar29 + 1;
      puVar12 = puVar4;
      func_0x00010bf529e0();
    } while (puVar29 < puVar12);
  }
  puVar29 = PTR_PTR_1126af4d0;
  func_0x00010bfa7400();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar29;
  func_0x00010bf529e0();
  if (puVar26 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar29;
      func_0x00010c0dfd40(puVar29);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar12);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar26 = puVar26 + 1;
      puVar13 = puVar29;
      func_0x00010bf529e0();
    } while (puVar26 < puVar13);
  }
  lVar31 = *(long *)(param_4 + _DAT_1127711c4);
  _objc_retain(lVar31);
  lVar25 = lVar31;
  func_0x00010bf52a60();
  lVar28 = lRam0000000000000000;
  while (lVar25 != 0) {
    lVar30 = 0;
    do {
      if (lRam0000000000000000 != lVar28) {
        _objc_enumerationMutation(lVar31);
      }
      uVar27 = *(undefined8 *)(lVar30 * 8);
      uVar6 = uVar27;
      func_0x00010c23f220(uVar27);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar6;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(puVar26);
      _objc_release(uVar16);
      _objc_release(uVar6);
      puVar26 = PTR_PTR_1126bc7f8;
      uVar6 = uVar27;
      func_0x00010c23f220(uVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      func_0x00010c1d7bc0(puVar26);
      func_0x00010c1a7000(puVar26);
      puVar13 = PTR_PTR_1126bf8f8;
      uVar6 = uVar27;
      func_0x00010bf6f520(uVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(uVar6);
      puVar14 = PTR_PTR_1126bf8e8;
      func_0x00010bf5a9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar14;
      func_0x00010c0fd8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c580(puVar26);
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126bf900;
      uVar6 = uVar27;
      func_0x00010c0ce1e0(uVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aec40();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar13;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      _objc_release(puVar13);
      _objc_release(uVar6);
      puVar13 = PTR_PTR_1126bf8f0;
      func_0x00010bf5aa20();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar13;
      func_0x00010c0fd920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar26);
      _objc_release(puVar17);
      puVar17 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar26;
      func_0x00010c0fd8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131100(puVar3);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar17);
      uVar6 = uVar27;
      func_0x00010c23f220(uVar27);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar6;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar12;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar16);
      _objc_release(uVar6);
      if (puVar17 != (undefined *)0x0) {
        func_0x00010c067fc0(puVar17);
        puVar19 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
        _objc_retainAutoreleasedReturnValue();
        puVar20 = puVar26;
        func_0x00010c0fd8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130e80(puVar3);
        _objc_release(puVar21);
        _objc_release(puVar20);
        _objc_release(puVar19);
      }
      puVar19 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR_PTR_1126bc7f8;
      func_0x00010bf35100(PTR_PTR_1126bc7f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7bc0();
      func_0x00010c1d7be0(puVar20);
      puVar21 = puVar3;
      func_0x00010c245780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar19;
      func_0x00010c241220(puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar21;
      func_0x00010b704538(puVar21,puVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(puVar3);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      puVar21 = puVar3;
      func_0x00010c245780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23f220(uVar27);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar27;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar21;
      func_0x00010b704538(puVar21,uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(puVar3);
      _objc_release(puVar22);
      _objc_release(uVar6);
      _objc_release(uVar27);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar17);
      _objc_release(puVar13);
      _objc_release(puVar18);
      _objc_release(puVar14);
      _objc_release(puVar15);
      _objc_release(puVar26);
      lVar30 = lVar30 + 1;
    } while (lVar25 != lVar30);
    lVar25 = lVar31;
    func_0x00010bf52a60();
  }
  _objc_release(lVar31);
  func_0x00010c1b3960(puVar3);
  func_0x00010c0f7a20(puVar3);
  func_0x00010c1da4e0(puVar3);
  _objc_release(puVar12);
  _objc_release(puVar29);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar24);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return (undefined *)0x1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 107ed37c4; end: 107ed4047; -[SCCloudUpdatePrivateEntriesOperation executeOptimisticallyWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107ed37c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfbdda0();
  *(long *)(param_1 + _DAT_1127711d4) = (long)(int)puVar3;
  puVar3 = PTR_PTR_1126bc830;
  func_0x00010bf35080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af4d0;
  func_0x00010bfa7380();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar4;
  func_0x00010bf529e0();
  if (puVar21 != (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar22;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar22);
      _objc_release(puVar6);
      puVar21 = puVar21 + 1;
      puVar6 = puVar4;
      func_0x00010bf529e0();
    } while (puVar21 < puVar6);
  }
  puVar21 = PTR_PTR_1126af4d0;
  func_0x00010bfa7400();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010bf529e0();
  if (puVar22 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar21;
      func_0x00010c0dfd40(puVar21);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar22 = puVar22 + 1;
      puVar7 = puVar21;
      func_0x00010bf529e0();
    } while (puVar22 < puVar7);
  }
  lVar23 = *(long *)(param_1 + _DAT_1127711c4);
  _objc_retain(lVar23);
  lVar10 = lVar23;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar10 != 0) {
    lVar24 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar23);
      }
      uVar25 = *(undefined8 *)(lVar24 * 8);
      uVar11 = uVar25;
      func_0x00010c23f220(uVar25);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar5;
      func_0x00010c0e00e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(puVar22);
      _objc_release(uVar12);
      _objc_release(uVar11);
      puVar22 = PTR_PTR_1126bc7f8;
      uVar11 = uVar25;
      func_0x00010c23f220(uVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      func_0x00010c1d7bc0(puVar22);
      func_0x00010c1a7000(puVar22);
      puVar7 = PTR_PTR_1126bf8f8;
      uVar11 = uVar25;
      func_0x00010bf6f520(uVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aebe0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar11);
      puVar8 = PTR_PTR_1126bf8e8;
      func_0x00010bf5a9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar8;
      func_0x00010c0fd8e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c580(puVar22);
      _objc_release(puVar7);
      puVar7 = PTR_PTR_1126bf900;
      uVar11 = uVar25;
      func_0x00010c0ce1e0(uVar25);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2aec40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar7;
      func_0x00010c1d0720();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar7);
      _objc_release(uVar11);
      puVar7 = PTR_PTR_1126bf8f0;
      func_0x00010bf5aa20();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar7;
      func_0x00010c0fd920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar22);
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar22;
      func_0x00010c0fd8c0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c131100(puVar3);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar13);
      uVar11 = uVar25;
      func_0x00010c23f220(uVar25);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar11;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar6;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar12);
      _objc_release(uVar11);
      if (puVar13 != (undefined *)0x0) {
        func_0x00010c067fc0(puVar13);
        puVar15 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar22;
        func_0x00010c0fd8c0();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130e80(puVar3);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
      }
      puVar15 = puVar4;
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_PTR_1126bc7f8;
      func_0x00010bf35100(PTR_PTR_1126bc7f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d7bc0();
      func_0x00010c1d7be0(puVar16);
      puVar17 = puVar3;
      func_0x00010c245780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar15;
      func_0x00010c241220(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar17;
      func_0x00010b704538(puVar17,puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(puVar3);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      puVar17 = puVar3;
      func_0x00010c245780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23f220(uVar25);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar25;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar17;
      func_0x00010b704538(puVar17,uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206280(puVar3);
      _objc_release(puVar18);
      _objc_release(uVar11);
      _objc_release(uVar25);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar7);
      _objc_release(puVar14);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar22);
      lVar24 = lVar24 + 1;
    } while (lVar10 != lVar24);
    lVar10 = lVar23;
    func_0x00010bf52a60();
  }
  _objc_release(lVar23);
  func_0x00010c1b3960(puVar3);
  func_0x00010c0f7a20(puVar3);
  func_0x00010c1da4e0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar21);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
    return 1;
  }
  ___stack_chk_fail();
  return 1;
}



/* Entry: 107ed4048; end: 107ed404f; -[SCCloudUpdatePrivateEntriesOperation isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107ed4048(void)

{
  return 1;
}



/* Entry: 107ed4050; end: 107ed4317; -[SCCloudUpdatePrivateEntriesOperation remoteSyncWithDependencyProvider:thumbnailFileGenerator:dataVault:dataObjectContext:networker:coreConfigProvider:memoriesBackupTranscodingServices:snapUploadWorkflow:snapDocManager:progressHandler:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed4050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puVar1 = PTR_PTR_1126d8270;
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c0093a0();
  _objc_release(param_5);
  lVar2 = *(long *)(param_1 + _DAT_1127711c4);
  func_0x00010bf51e00();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    func_0x00010bed77e0(param_1);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127711d4);
    lVar3 = lVar2;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127711bc);
    uVar4 = param_3;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107ed4318;
    puStack_a8 = &UNK_110a11980;
    _objc_retain(lVar2);
    lStack_a0 = lVar2;
    _objc_retain(param_3);
    uStack_98 = param_3;
    lStack_90 = param_1;
    uStack_70 = uVar9;
    _objc_retain(param_7);
    uStack_88 = param_7;
    _objc_retain(in_stack_00000020);
    uStack_80 = in_stack_00000020;
    _objc_retain(in_stack_00000028);
    uStack_78 = in_stack_00000028;
    FUN_107eecc84(param_3,lVar3,uVar8,0,0,puVar1,param_6,param_7,param_4,0,4,uVar6,in_stack_00000020
                  ,&puStack_c0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_98);
    _objc_release(lStack_a0);
  }
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107ed4318; end: 107ed43df;  */

void FUN_107ed4318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  FUN_107f59738(param_3,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0b3760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a4aa0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bed77e0(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ed43e0; end: 107ed4be3; -[SCCloudUpdatePrivateEntriesOperation commitWithEntryUpdates:dataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed43e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_180 = puVar10;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_188 = puVar11;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  puStack_190 = puVar10;
  func_0x00010bf97200(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_1c0 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar10 = PTR_PTR_1126bc830;
  func_0x00010bf35080();
  _objc_retainAutoreleasedReturnValue();
  uStack_1c8 = param_3;
  func_0x00010c0b4ca0(param_3);
  func_0x00010c1fce60(puVar10);
  func_0x00010c210ec0(puVar10);
  func_0x00010c0f7a20(puVar10);
  puStack_198 = puVar10;
  func_0x00010c1da4e0(puVar10);
  puVar10 = PTR_PTR_1126af4d0;
  puStack_178 = puVar1;
  uStack_158 = param_4;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar11);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar8);
      puVar7 = puVar7 + 1;
      puVar8 = puVar10;
      func_0x00010bf529e0();
    } while (puVar7 < puVar8);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_1a0 = puVar10;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126af4d0;
  func_0x00010bfa7500();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar10;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar10;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(puVar12);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar8 = puVar8 + 1;
      puVar2 = puVar10;
      func_0x00010bf529e0();
    } while (puVar8 < puVar2);
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  puVar8 = *(undefined **)(param_1 + _DAT_1127711c4);
  puStack_1d0 = puVar10;
  puStack_1a8 = puVar7;
  _objc_retain(puVar8);
  puStack_1b8 = puVar8;
  func_0x00010bf52a60();
  puVar7 = puStack_198;
  puStack_168 = puVar8;
  if (puVar8 != (undefined *)0x0) {
    lStack_170 = *plStack_140;
    puStack_1b0 = puVar11;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_140 != lStack_170) {
          _objc_enumerationMutation(puStack_1b8);
        }
        puVar8 = PTR_PTR_1126af4d0;
        puVar12 = *(undefined **)(lStack_148 + (long)puVar10 * 8);
        puVar1 = puVar12;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (puVar8 != (undefined *)0x0) {
          puVar1 = puVar12;
          func_0x00010c23f220(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0();
          _objc_release(puVar11);
          _objc_release(puVar2);
          _objc_release(puVar1);
          puVar1 = PTR_PTR_1126bc7f8;
          func_0x00010bf35100();
          _objc_retainAutoreleasedReturnValue();
          puStack_160 = puVar1;
          func_0x00010c1a7000();
          puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
          func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_f8 = puVar8;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1311c0(puVar7);
          _objc_release(puVar11);
          _objc_release(puVar1);
          func_0x00010c23f220(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar12;
          func_0x00010bf8b0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puStack_1a8;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          _objc_release(puVar12);
          if (puVar11 != (undefined *)0x0) {
            func_0x00010c067fc0(puVar11);
            puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
            func_0x00010bfed300(PTR__OBJC_CLASS___NSIndexSet_1126b6a48);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_100 = puVar8;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1311a0(puVar7);
            _objc_release(puVar2);
            _objc_release(puVar1);
          }
          func_0x00010befa120(puStack_180);
          puVar12 = puStack_178;
          puVar1 = puStack_178;
          func_0x00010bf97200(puStack_178);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar8;
          func_0x00010c241220(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puStack_190;
          func_0x00010c1d0640(puStack_190);
          _objc_release(puVar7);
          _objc_release(puVar1);
          puVar1 = puStack_1a0;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126bc7f8;
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_108 = puVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf6bf20(puVar7);
          _objc_release(puVar6);
          func_0x00010befa120(puStack_188);
          func_0x00010bf97200(puVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar1;
          func_0x00010c241220(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(puVar7);
          _objc_release(puVar12);
          puVar2 = PTR_PTR_1126bc810;
          puVar12 = puVar1;
          func_0x00010c241220();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_110 = puVar12;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa72c0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puStack_198;
          _objc_release(puVar6);
          _objc_release(puVar12);
          func_0x00010bf6bf00(PTR_PTR_1126bc818);
          _objc_release(puVar2);
          _objc_release(puVar1);
          _objc_release(puVar11);
          _objc_release(puStack_160);
          puVar11 = puStack_1b0;
        }
        _objc_release(puVar8);
        puVar10 = puVar10 + 1;
      } while (puStack_168 != puVar10);
      puVar8 = puStack_1b8;
      func_0x00010bf52a60();
      puStack_168 = puVar8;
    } while (puVar8 != (undefined *)0x0);
  }
  _objc_release(puStack_1b8);
  puVar6 = PTR_PTR_1126d8370;
  _objc_alloc();
  puVar12 = puStack_180;
  puVar2 = puStack_188;
  puVar8 = puStack_190;
  puVar3 = puStack_180;
  puVar5 = puStack_188;
  func_0x00010bff2540();
  _objc_release(puStack_1d0);
  _objc_release(puStack_1a8);
  _objc_release(puVar11);
  _objc_release(puStack_1a0);
  _objc_release(puVar7);
  _objc_release(uStack_1c8);
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar12);
  _objc_release(puStack_178);
  _objc_release(uStack_158);
  _objc_release(uStack_1c0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar4 = &uStack_3b0;
    puStack_200 = puVar8;
    puStack_1f8 = puVar2;
    puStack_1f0 = puVar12;
    pcStack_1d8 = FUN_107ed4be4;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar3;
    puStack_220 = puVar11;
    puStack_218 = puVar1;
    puStack_210 = puVar10;
    puStack_208 = puVar7;
    puStack_1e8 = puVar6;
    puStack_1e0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    if (puVar3 != (undefined *)0x0) {
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      lStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      plStack_360 = (long *)0x0;
      puVar1 = puVar3;
      func_0x00010bf6cfe0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar1;
      func_0x00010bf52a60();
      if (puVar10 != (undefined *)0x0) {
        lVar9 = *plStack_360;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_360 != lVar9) {
              _objc_enumerationMutation(puVar1);
            }
            func_0x0001080194b4(*(undefined8 *)(lStack_368 + (long)puVar11 * 8),puVar5);
            puVar11 = puVar11 + 1;
          } while (puVar10 != puVar11);
          puVar10 = puVar1;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined *)0x0);
      }
      _objc_release(puVar1);
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      plStack_3a0 = (long *)0x0;
      func_0x00010befcd40();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010bf52a60();
      if (puVar1 != (undefined *)0x0) {
        lVar9 = *plStack_3a0;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_3a0 != lVar9) {
              _objc_enumerationMutation(puVar3);
            }
            puVar11 = puVar5;
            func_0x00010c13a8c0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bb0c0();
            _objc_release(puVar11);
            puVar10 = puVar10 + 1;
          } while (puVar1 != puVar10);
          puVar1 = puVar3;
          puVar4 = &uStack_3b0;
          func_0x00010bf52a60();
        } while (puVar1 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      puVar8 = (undefined *)puVar4;
    }
    _objc_release(puVar5);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
      return;
    }
    ___stack_chk_fail();
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar8);
      puVar1 = puVar8;
      func_0x00010befcd40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar8);
      puVar6 = puVar1;
      func_0x00010c0b8600(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar8);
      _objc_release(puVar1);
    }
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ed4be4; end: 107ed4dc3; -[SCCloudUpdatePrivateEntriesOperation cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ed4be4(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_58;
  
  puVar3 = &uStack_1e0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined1 *)0x0) {
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    puVar1 = param_3;
    func_0x00010bf6cfe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf52a60();
    if (puVar6 != (undefined1 *)0x0) {
      lVar4 = *plStack_190;
      do {
        puVar5 = (undefined1 *)0x0;
        do {
          if (*plStack_190 != lVar4) {
            _objc_enumerationMutation(puVar1);
          }
          func_0x0001080194b4(*(undefined8 *)(lStack_198 + (long)puVar5 * 8),param_4);
          puVar5 = puVar5 + 1;
        } while (puVar6 != puVar5);
        puVar6 = puVar1;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined1 *)0x0);
    }
    _objc_release(puVar1);
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    func_0x00010befcd40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined1 *)0x0) {
      lVar4 = *plStack_1d0;
      do {
        puVar6 = (undefined1 *)0x0;
        do {
          if (*plStack_1d0 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          uVar2 = param_4;
          func_0x00010c13a8c0(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0bb0c0();
          _objc_release(uVar2);
          puVar6 = puVar6 + 1;
        } while (puVar1 != puVar6);
        puVar1 = param_3;
        puVar3 = &uStack_1e0;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar1 = (undefined1 *)puVar3;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar1);
  if (puVar1 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(puVar1);
    puVar5 = puVar1;
    func_0x00010befcd40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    puVar6 = puVar5;
    func_0x00010c0b8600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ed4dc4; end: 107ed4e97; -[SCCloudUpdatePrivateEntriesOperation changedSnapContextsWithEntryUpdate:] */

void FUN_107ed4dc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010befcd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107ed4e98;
    puStack_48 = &UNK_110a11520;
    lStack_40 = param_3;
    uStack_38 = param_1;
    _objc_retain(param_3);
    lVar2 = lVar1;
    func_0x00010c0b8600(lVar1,param_2,&puStack_60);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_40);
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107ed4e98; end: 107ed4fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed4e98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126d8278;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c241280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar3;
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079400(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c23f7c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107ed4fcc; end: 107ed500b; -[SCCloudUpdatePrivateEntriesOperation isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ed4fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0809c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107ed500c; end: 107ed58db; -[SCCloudUpdatePrivateEntriesOperation _updateEntriesFromNetworker:dependencyProvider:snapsUploadInfo:failureHandler:successHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed500c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = param_4;
  func_0x00010bf63f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126af4c0;
  func_0x00010bfa70a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af4d0;
  func_0x00010bfa74e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = *(long *)(param_1 + _DAT_1127711c4);
  _objc_retain(lVar16);
  lVar17 = lVar16;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar17 != 0) {
    lVar21 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar16);
      }
      uVar18 = *(undefined8 *)(lVar21 * 8);
      uVar2 = uVar18;
      func_0x00010c23f220(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23f220(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar18;
      func_0x00010bf8b0c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar7);
      _objc_release(uVar9);
      _objc_release(uVar18);
      _objc_release(uVar8);
      _objc_release(uVar2);
      lVar21 = lVar21 + 1;
    } while (lVar17 != lVar21);
    lVar17 = lVar16;
    func_0x00010bf52a60();
  }
  _objc_release(lVar16);
  _objc_retain(puVar5);
  puVar10 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar10 != (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      puVar19 = *(undefined **)((long)puVar15 * 8);
      puVar11 = puVar19;
      func_0x00010c241220(puVar19);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar22 == (undefined *)0x0) {
        func_0x00010c241220(puVar19);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar22);
        puVar19 = puVar22;
      }
      _objc_release(puVar22);
      _objc_release(puVar11);
      func_0x00010befa120(puVar6);
      _objc_release(puVar19);
      puVar15 = puVar15 + 1;
    } while (puVar10 != puVar15);
    puVar10 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  puVar15 = PTR_PTR_1126af4d0;
  func_0x00010bfa7500();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar15);
  puVar10 = puVar15;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar10 != (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar15);
      }
      puVar20 = *(undefined **)((long)puVar22 * 8);
      puVar19 = puVar20;
      func_0x00010c241220(puVar20);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar12 == (undefined *)0x0) {
        func_0x00010c241220(puVar20);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar12);
        puVar20 = puVar12;
      }
      _objc_release(puVar12);
      _objc_release(puVar19);
      func_0x00010befa120(puVar11);
      _objc_release(puVar20);
      puVar22 = puVar22 + 1;
    } while (puVar10 != puVar22);
    puVar10 = puVar15;
    func_0x00010bf52a60();
  }
  _objc_release(puVar15);
  puVar10 = PTR_PTR_1126d8280;
  func_0x00010c2b1ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar4;
  func_0x00010bf97200(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar22 = puVar4;
  func_0x00010bf9e140(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199560(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar22 = puVar4;
  func_0x00010bfbdda0(puVar4);
  FUN_107ee8bec((long)(int)puVar22);
  func_0x00010c196ba0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf977c0(puVar4);
  func_0x00010c196b20(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2046e0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar22 = puVar11;
  func_0x00010bf51e00(puVar11);
  func_0x00010c1a8980(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar22);
  func_0x00010c15e520(puVar4);
  func_0x00010c1fce80(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar22 = puVar4;
  func_0x00010bf59960(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c185380(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar22 = puVar4;
  func_0x00010c266b20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216240(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar22);
  func_0x00010c1b3980(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2063a0(puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126d8288;
  func_0x00010c2b1dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1966e0(puVar22);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar19);
  puVar19 = puVar22;
  func_0x00010bf21f60(puVar22);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126bbf20;
  func_0x00010bdc1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_6);
  ppuVar13 = &PTR____CFConstantStringClassReference_110ec2858;
  func_0x00010c25f400(param_3);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(puVar12);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar19);
  _objc_release(puVar22);
  _objc_release(puVar10);
  _objc_release(puVar11);
  _objc_release(puVar15);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126d8290;
  _objc_retain(ppuVar13);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(ppuVar13);
  puVar6 = puVar5;
  func_0x00010c15f8c0();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar6 == (undefined *)0x7d0) {
    puVar4 = puVar5;
    func_0x00010bf96fc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),puVar6);
  }
  else {
    lVar17 = *(long *)(param_3 + 0x28);
    func_0x00010c15f8c0(puVar5);
    puVar6 = puVar5;
    func_0x00010bf96fc0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf148e0(puVar5);
    puVar10 = puVar5;
    func_0x00010bf66200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar7,puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar17 + 0x10))(lVar17,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar10);
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107ed58dc; end: 107ed5a4b;  */

void FUN_107ed58dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d8290;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c0206e0();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c15f8c0();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (puVar2 == (undefined *)0x7d0) {
    puVar5 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_107ee8d90();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c15f8c0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf96fc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf148e0(puVar1);
    puVar4 = puVar1;
    func_0x00010bf66200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99480((double)(long)puVar3,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))(lVar6,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


