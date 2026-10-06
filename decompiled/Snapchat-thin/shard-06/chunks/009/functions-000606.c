/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f9ccf0; end: 104f9cdc3;  */

void FUN_104f9ccf0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar2 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    lVar1 = param_2;
    func_0x0001080694e0(param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b3078;
    _objc_alloc(PTR_PTR_1126b3078);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c09da80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3080;
    func_0x00010bfad3e0(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    func_0x00010bff44a0(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f9cdc4; end: 104f9cf27; +[SCMusicSyncActionHandler _musicSyncAssetForImageAsset:imageImporter:temporaryFileWriter:cancelGroup:] */

void FUN_104f9cdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bdc1860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bf2f5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460(param_6,param_2,uVar2);
  _objc_release(param_6);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104f9cf28;
  puStack_58 = &UNK_11085f9e8;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f9cf28; end: 104f9d0d3;  */

void FUN_104f9cf28(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    uVar3 = uVar2;
    func_0x00010c2bda80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_58;
    _objc_retain(lStack_58);
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar8 = (undefined *)0x0;
    if (lVar1 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        _CMTimeMakeWithSeconds(auStack_70,0x4008000000000000,600);
        lVar5 = param_2;
        func_0x00010806926c(param_2,auStack_70);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b3078;
        _objc_alloc(PTR_PTR_1126b3078);
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c09da80(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126b3080;
        func_0x00010bfad3e0(PTR_PTR_1126b3080);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff44a0(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar6);
        _objc_release(lVar5);
      }
      _objc_release(puVar4);
    }
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 104f9d0d4; end: 104f9d207; +[SCMusicSyncActionHandler _getMusicSyncTrackWithMusicSyncTrackLoader:performer:] */

void FUN_104f9d0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcb6a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_104f9d208;
  puStack_60 = &UNK_11085fa48;
  puStack_58 = puVar1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar3,param_2,&puStack_78,param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f9d208; end: 104f9d3db;  */

void FUN_104f9d208(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    lVar1 = param_2;
    func_0x00010c278180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2791e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_2;
      func_0x00010c278180(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2791e0();
      _arc4random_uniform();
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010c278180();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2791c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 == 0) {
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c277e80(lVar3);
        uVar5 = uVar4;
        func_0x00010bfc7be0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar6);
        func_0x00010c297260(uVar5);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar6);
      }
      _objc_release(lVar3);
      goto LAB_104f9d3b0;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  func_0x00010bf43ca0(uVar5);
LAB_104f9d3b0:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f9d3dc; end: 104f9d3f3;  */

void FUN_104f9d3dc(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0);
  return;
}



/* Entry: 104f9d3f4; end: 104f9d5e3; +[SCMusicSyncActionHandler _updateSnapDocWithSmartTemplate:snapDocMediaLayers:musicSyncTrack:snapDocEditor:cancelGroup:performer:] */

void FUN_104f9d3f4(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuStack_118;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126ae560;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = param_4;
  uStack_70 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104f9d5e4;
  puStack_a0 = &UNK_11085fa78;
  uStack_98 = param_7;
  puStack_90 = puVar2;
  uStack_88 = param_6;
  uStack_80 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(puVar2);
  _objc_retain(param_7);
  ppuVar7 = &puStack_b8;
  func_0x00010c297260(puVar4);
  _objc_release(param_8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(puStack_90);
  _objc_release(uStack_98);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(ppuVar7);
  iVar1 = (int)*(undefined8 *)(param_4 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    if (ppuVar7 != (undefined **)0x0) {
      func_0x00010bf43ca0(*(undefined8 *)(param_4 + 0x28));
      goto LAB_104f9d66c;
    }
    uVar5 = param_2;
    func_0x00010bf529e0();
    if (uVar5 < 2) {
      uVar8 = *(undefined8 *)(param_4 + 0x28);
      ppuStack_118 = &PTR____CFConstantStringClassReference_110dbe2d8;
      goto LAB_104f9d634;
    }
    uVar5 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3048;
    uVar8 = *(undefined8 *)(param_4 + 0x30);
    func_0x00010c23fe00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf17960(uVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_118 = (undefined **)0x0;
    func_0x00010bdcec60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(uVar6);
    _objc_release(uVar8);
    if (puVar4 == (undefined *)0x0) {
      func_0x00010bf43ca0(*(undefined8 *)(param_4 + 0x28));
    }
    else {
      func_0x00010bf43d60();
    }
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  else {
    uVar8 = *(undefined8 *)(param_4 + 0x28);
    ppuStack_118 = &PTR____CFConstantStringClassReference_110dbe2b8;
LAB_104f9d634:
    func_0x000108091430(ppuStack_118);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar8);
  }
  _objc_release(ppuStack_118);
LAB_104f9d66c:
  _objc_release(ppuVar7);
  _objc_release(param_2);
  return;
}



/* Entry: 104f9d5e4; end: 104f9d77b;  */

void FUN_104f9d5e4(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    if (param_3 != 0) {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
      goto LAB_104f9d66c;
    }
    uVar2 = param_2;
    func_0x00010bf529e0();
    if (uVar2 < 2) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      ppuStack_58 = &PTR____CFConstantStringClassReference_110dbe2d8;
      goto LAB_104f9d634;
    }
    uVar2 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3048;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c23fe00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf17960(uVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = (undefined **)0x0;
    func_0x00010bdcec60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(uVar3);
    _objc_release(uVar5);
    if (puVar4 == (undefined *)0x0) {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    }
    else {
      func_0x00010bf43d60();
    }
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dbe2b8;
LAB_104f9d634:
    func_0x000108091430(ppuStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar5);
  }
  _objc_release(ppuStack_58);
LAB_104f9d66c:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f9d77c; end: 104f9d963; +[SCMusicSyncActionHandler _applyTemplateToSnapDoc:withMusicMetadata:error:smartTemplateService:] */

void FUN_104f9d77c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b3088;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1ca380();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b3090;
  _objc_opt_new(PTR_PTR_1126b3090);
  func_0x00010c1dcf40();
  func_0x00010c16fc40(puVar2,param_2,puVar1);
  lVar7 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010c09a2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = *param_5;
  if ((lVar7 == 0) && (lVar3 != 0)) {
    lVar7 = lVar3;
    func_0x00010bf529e0();
    if (lVar7 == 1) {
      lVar7 = param_6;
      func_0x00010c269d40(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0dfd40(lVar3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar7;
      func_0x00010bf08980(lVar7,param_2,lVar4,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar7);
      lVar7 = 0;
      if (*param_5 == 0) {
        _objc_retain(lVar5);
        lVar7 = lVar5;
      }
      _objc_release(lVar5);
      goto LAB_104f9d91c;
    }
    lVar7 = *param_5;
  }
  if (lVar7 == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110dbe238,
                        &PTR____CFConstantStringClassReference_110dbe2f8,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    lVar7 = 0;
    *param_5 = (long)puVar6;
  }
  else {
    lVar7 = 0;
  }
LAB_104f9d91c:
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 104f9d964; end: 104f9dabf; +[SCMusicSyncActionHandler _updateSnapDocWithMusicSyncAssets:snapDocEditor:performer:cancelGroup:] */

void FUN_104f9d964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae558;
  func_0x00010beffb40(PTR_PTR_1126ae558,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f9dac0;
  puStack_68 = &UNK_11085fa78;
  uStack_60 = param_6;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010c297260(puVar2,param_2,&puStack_80,param_5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f9dac0; end: 104f9dcb7;  */

void FUN_104f9dac0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    if (param_3 != 0) {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
      goto LAB_104f9dc88;
    }
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae558;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104f9dcb8;
    puStack_70 = &UNK_11085faa8;
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = uVar4;
    uStack_68 = uVar5;
    func_0x000100504554(uVar4,&puStack_88);
    func_0x00010beffb40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    _objc_retain(uVar4);
    func_0x00010c297260(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(uStack_68);
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbe318;
    func_0x000108091430(&PTR____CFConstantStringClassReference_110dbe318);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar4);
  }
  _objc_release(ppuVar2);
LAB_104f9dc88:
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f9dcb8; end: 104f9dd37;  */

void FUN_104f9dcb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c53c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_2);
  _objc_release(param_2);
  func_0x00010bef9c20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104f9dd38; end: 104f9df7b;  */

void FUN_104f9dd38(long param_1,undefined **param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == (undefined **)0x0) || (param_3 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (param_3 != 0) {
      func_0x00010bf43ca0(uVar3);
      goto LAB_104f9de50;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbe358;
    func_0x000108091430(&PTR____CFConstantStringClassReference_110dbe358);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010bf97e80(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
    _objc_release(puVar1);
    _objc_release(uVar4);
    ppuVar2 = param_2;
  }
  _objc_release(ppuVar2);
LAB_104f9de50:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f9df7c; end: 104f9e0b3; +[SCMusicSyncActionHandler _updateSnapDocWithMusicSyncTrack:snapDocEditor:performer:cancelGroup:] */

void FUN_104f9df7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104f9e0b4;
  puStack_68 = &UNK_11085fb68;
  uStack_60 = param_6;
  puStack_58 = puVar1;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010c297260(param_3,param_2,&puStack_80,param_5);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f9e0b4; end: 104f9e693;  */

/* WARNING: Removing unreachable block (ram,0x000104f9e280) */

void FUN_104f9e0b4(double param_1,long param_2,undefined *param_3,long param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined1 auStack_78 [24];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    if ((param_3 == (undefined *)0x0) || (param_4 != 0)) {
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      if (param_4 != 0) {
        func_0x00010bf43ca0(uVar10);
        goto LAB_104f9e664;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110dbe398;
      goto LAB_104f9e108;
    }
    ppuVar2 = (undefined **)PTR_PTR_1126b3098;
    _objc_opt_new();
    puVar3 = param_3;
    func_0x00010c277900(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c277e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af28d38();
    func_0x00010c218f80(ppuVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_3;
    func_0x00010c277900(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24fb60();
    _CMTimeMakeWithSeconds(auStack_78,param_1 / 1000.0,600);
    _CMTimeGetSeconds(auStack_78);
    func_0x00010c209700(ppuVar2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b25f8;
    _objc_alloc(PTR_PTR_1126b25f8);
    puVar4 = param_3;
    func_0x00010c277900(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf93480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar3);
    _objc_retain(0);
    func_0x00010c182620(ppuVar2);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = param_3;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c277900();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf0f2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c079d80();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    if ((int)puVar6 == 0) {
      puVar3 = param_3;
      func_0x00010c277900(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf0ef80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16bb20(ppuVar2);
      _objc_release(puVar4);
    }
    else {
      puVar3 = PTR_PTR_1126b30a0;
      _objc_opt_new(PTR_PTR_1126b30a0);
      puVar4 = param_3;
      func_0x00010c277900(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21afe0(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195ce0(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c277900();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf0f2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195cc0(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010c1ea260(ppuVar2);
    }
    _objc_release(puVar3);
    ppuVar9 = ppuVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar9 == (undefined **)0x0) {
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      ppuVar11 = &PTR____CFConstantStringClassReference_110dbe3d8;
      func_0x000108091430(&PTR____CFConstantStringClassReference_110dbe3d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar10);
    }
    else {
      puVar3 = PTR_PTR_1126b25c8;
      _objc_alloc_init();
      func_0x00010c16a960();
      ppuVar11 = *(undefined ***)(param_2 + 0x30);
      puVar4 = PTR_PTR_1126b3080;
      func_0x00010bf64b00(PTR_PTR_1126b3080);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9c20(ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      _objc_retain(uVar10);
      uVar12 = *(undefined8 *)(param_2 + 0x30);
      _objc_retain(uVar12);
      _objc_retain(param_3);
      _objc_retain(puVar3);
      func_0x00010c297260(ppuVar11);
      _objc_release(param_3);
      _objc_release(uVar12);
      _objc_release(puVar3);
      _objc_release(uVar10);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar9);
    _objc_release(0);
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbe378;
LAB_104f9e108:
    func_0x000108091430(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar10);
  }
  _objc_release(ppuVar2);
LAB_104f9e664:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f9e694; end: 104f9e79f;  */

void FUN_104f9e694(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (param_3 != 0) {
      func_0x00010bf43ca0(uVar3);
      goto LAB_104f9e780;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbe3f8;
    func_0x000108091430(&PTR____CFConstantStringClassReference_110dbe3f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar3);
  }
  else {
    func_0x00010c1c4880(*(undefined8 *)(param_1 + 0x28));
    ppuVar2 = (undefined **)PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(ppuVar2);
LAB_104f9e780:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f9e7a0; end: 104f9e8ff; -[SCMusicSyncActionHandler _presentPreviewWithSnapDoc:cancelGroup:mediaSegments:startDate:] */

void FUN_104f9e7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f9e900; end: 104f9ec17;  */

void FUN_104f9e900(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      _objc_retain(param_2);
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(*(undefined8 *)(param_1 + 0x30));
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar3);
      func_0x00010be03260(lVar2);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_release(param_2);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104f9ec18; end: 104f9ed13; -[SCMusicSyncActionHandler _presentProgressOverlayWithProgressObservable:] */

void FUN_104f9ec18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aff58;
    _objc_alloc(PTR_PTR_1126aff58);
    lVar1 = param_1;
    func_0x00010be5f260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038f60(puVar2,param_2,lVar1,0,5);
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    func_0x000107e483d0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23f00(uVar3,param_2,puVar2,param_3,param_1,1,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x90),param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f9ed14; end: 104f9edeb; -[SCMusicSyncActionHandler _dismissProgressOverlayIfNeededWithCompletion:] */

void FUN_104f9ed14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x90);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_104f9edec;
    puStack_40 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c2a4ae0(uVar2,param_2,&puStack_58);
    _objc_release(uVar2);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f9edec; end: 104f9edff;  */

void FUN_104f9edec(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f9edf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 104f9ee00; end: 104f9eef7; -[SCMusicSyncActionHandler _cacheMusicSyncAsset:] */

void FUN_104f9ee00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar4 = *(long *)(param_1 + 0xa8);
    lVar1 = param_3;
    func_0x00010bf0b260(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar4 == 0) {
      lVar1 = *(long *)(param_1 + 0xa8);
      func_0x00010bf529e0();
      if (lVar1 == 0x28) {
        uVar2 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010bf002e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xa8),param_2,uVar3);
        _objc_release(uVar3);
      }
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      lVar1 = param_3;
      func_0x00010bf0b260(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,param_3,lVar1);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f9eef8; end: 104f9f13b; -[SCMusicSyncActionHandler _presentErrorDialogWithMediaSegments:] */

void FUN_104f9eef8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1;
  func_0x00010be5f260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar2);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b30b0;
  _objc_alloc(PTR_PTR_1126b30b0);
  puVar7 = puVar6;
  func_0x000104f9f394();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x000104f9f3ac();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x000104f9f3c4();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x000104f9f3dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053b40(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  func_0x00010c10b180(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104f9f13c; end: 104f9f1ab;  */

void FUN_104f9f13c(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126b3048;
      func_0x00010be209e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x88);
      *(undefined **)(param_1 + 0x88) = puVar1;
      _objc_release(uVar2);
      func_0x00010be7da20(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 104f9f1ac; end: 104f9f1eb; -[SCMusicSyncActionHandler _memoriesPickerViewController] */

void FUN_104f9f1ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f9f1ec; end: 104f9f31b; -[SCMusicSyncActionHandler .cxx_destruct] */

void FUN_104f9f1ec(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104f9f31c; end: 104f9f3f3;  */

void FUN_104f9f31c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db94d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db94d8,
                      &PTR____CFConstantStringClassReference_110dbe418,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 104f9f3f4; end: 104f9f4ab; -[SCLocationARLensNotificationsEntryPoint begin] */

void FUN_104f9f3f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104f9f4ac;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f9f4ac; end: 104f9f4d7;  */

void FUN_104f9f4ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beae660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9f4d8; end: 104f9f6cb; -[SCLocationARLensNotificationsEntryPoint _setupNotificationsManagerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9f4d8(long param_1,undefined8 param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  puVar1 = PTR_PTR_1126b30b8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112718744;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112718748;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271874c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112718750;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0d6a60();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112718754;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112718758;
  _objc_loadWeakRetained(lVar15);
  lVar16 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c026ec0(puVar1,param_2,lVar4,lVar7,lVar9,lVar11,lVar14,lVar16);
  uVar17 = *(undefined8 *)(param_1 + _DAT_11271875c);
  *(undefined **)(param_1 + _DAT_11271875c) = puVar1;
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104f9f6cc; end: 104f9f75b; -[SCLocationARLensNotificationsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f9f6cc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112718744);
  _objc_destroyWeak(param_1 + _DAT_11271874c);
  _objc_destroyWeak(param_1 + _DAT_112718758);
  _objc_destroyWeak(param_1 + _DAT_112718754);
  _objc_destroyWeak(param_1 + _DAT_112718748);
  _objc_destroyWeak(param_1 + _DAT_112718750);
  _objc_destroyWeak(param_1 + _DAT_112718764);
  _objc_destroyWeak(param_1 + _DAT_112718760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271875c,0);
  return;
}



/* Entry: 104f9f75c; end: 104f9fa5b;  */

undefined * FUN_104f9f75c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      param_1 = 0.0;
      puVar4 = puVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          dVar11 = param_1;
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar3);
            dVar11 = param_1;
          }
          lVar10 = *(long *)((long)puVar9 * 8);
          lVar5 = lVar10;
          func_0x00010c0dff20(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar12 = dVar11;
          _objc_release(lVar5);
          lVar5 = lVar10;
          func_0x00010c0dff20(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(lVar5);
          _CLLocationCoordinate2DMake();
          lVar5 = lVar10;
          dVar13 = dVar11;
          func_0x00010c0dff20(lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          _objc_release(lVar5);
          lVar5 = lVar10;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar10;
          param_1 = dVar11;
          _CLLocationCoordinate2DIsValid(dVar11,dVar12);
          if (((int)lVar6 != 0) && ((0.0 <= dVar13 && lVar5 != 0) && lVar10 != 0)) {
            puVar7 = PTR_PTR_1126b30c0;
            _objc_alloc(PTR_PTR_1126b30c0);
            func_0x00010bffd520(dVar11,dVar12,dVar13);
            func_0x00010befa120(puVar2);
            _objc_release(puVar7);
            param_1 = dVar11;
          }
          _objc_release(lVar10);
          _objc_release(lVar5);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      }
    }
    _objc_release(puVar3);
  }
  puVar3 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar2);
  func_0x00010bf34640(param_2);
  func_0x00010bf34640(param_2);
  func_0x00010c021a60(puVar2);
  func_0x00010bf86f80(param_3);
  dVar11 = param_1;
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010c11ef60(param_2);
  _objc_release(param_2);
  return (undefined *)(ulong)(param_1 < dVar11);
}



/* Entry: 104f9fa5c; end: 104f9fb0f;  */

bool FUN_104f9fa5c(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010bf34640(param_2);
  func_0x00010bf34640(param_2);
  func_0x00010c021a60(puVar1);
  func_0x00010bf86f80(param_3);
  dVar2 = param_1;
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010c11ef60(param_2);
  _objc_release(param_2);
  return param_1 < dVar2;
}



/* Entry: 104f9fb10; end: 104f9fc13; -[SCLocationARLensNotificationGeofenceDataFetcher initWithOnDemandResourceDownloader:circumstanceEngine:] */

undefined1 *
FUN_104f9fb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e55f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010be123e0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f9fc14; end: 104f9fd1b; -[SCLocationARLensNotificationGeofenceDataFetcher locationARLensNotificationGeofencesWithCompletionQueue:completionHandler:] */

void FUN_104f9fc14(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f9fd1c; end: 104f9fd4f;  */

void FUN_104f9fd1c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9fd50; end: 104f9fe87; -[SCLocationARLensNotificationGeofenceDataFetcher _fetchLocationARLensNotificationGeofences] */

void FUN_104f9fd50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c25d780(lVar1,param_2,&PTR____CFConstantStringClassReference_110dbe5b8,
                      &PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126aebd8;
    func_0x00010c14e320();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_38,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf887c0(uVar4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104f9fe88; end: 104f9fef7;  */

void FUN_104f9fe88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdfb1c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f9fef8; end: 104f9ffd3; -[SCLocationARLensNotificationGeofenceDataFetcher _deserializeNotificationGeofencesData:] */

void FUN_104f9fef8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f9ffd4; end: 104fa0023;  */

void FUN_104f9ffd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_104f9f75c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104fa0024; end: 104fa00b3; -[SCLocationARLensNotificationGeofenceDataFetcher _locationARLensNotificationGeofencesWithCompletionQueue:completionHandler:] */

void FUN_104fa0024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104fa00b4;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 104fa00b4; end: 104fa00c7;  */

void FUN_104fa00b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104fa00c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  return;
}



/* Entry: 104fa00c8; end: 104fa011b; -[SCLocationARLensNotificationGeofenceDataFetcher .cxx_destruct] */

void FUN_104fa00c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fa011c; end: 104fa0383; -[SCLocationARLensNotificationsManager initWithLocationProvider:notificationManager:onDemandResourceDownloader:navigationPageState:featureSettingsService:circumstanceEngine:] */

undefined8 *
FUN_104fa011c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e55f8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar3 = puVar1[1];
    func_0x00010c09f820();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b30d0;
    _objc_alloc();
    func_0x00010c0312a0();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104fa0384; end: 104fa042f;  */

void FUN_104fa0384(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 104fa0430; end: 104fa045b;  */

void FUN_104fa0430(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7e400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa045c; end: 104fa054f; -[SCLocationARLensNotificationsManager didUpdateLocation] */

void FUN_104fa045c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000107f49238();
  if (((int)uVar3 != 0) && (lVar2 = param_1, func_0x00010beb61c0(), (int)lVar2 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 104fa0550; end: 104fa0583;  */

void FUN_104fa0550(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff4a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa0584; end: 104fa0683; -[SCLocationARLensNotificationsManager _didReceiveLocationUpdate:] */

void FUN_104fa0584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c09ea40(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa0684; end: 104fa06cb;  */

void FUN_104fa0684(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32dc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa06cc; end: 104fa080f; -[SCLocationARLensNotificationsManager _handleUserLocationUpdateWithNotificationGeofences:] */

void FUN_104fa06cc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf52a60();
  puVar4 = param_3;
  if (puVar1 != (undefined1 *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = *(undefined1 **)(lStack_118 + (long)puVar6 * 8);
        puVar2 = puVar4;
        FUN_104f9fa5c(puVar4,*(undefined8 *)(param_1 + 0x30));
        if (((ulong)puVar2 & 1) != 0) {
          _objc_retain(puVar4);
          _objc_release(param_3);
          if (puVar4 == (undefined1 *)0x0) goto LAB_104fa07d0;
          puVar3 = (undefined8 *)puVar4;
          func_0x00010bee6b40(param_1);
          goto LAB_104fa07c8;
        }
        puVar6 = puVar6 + 1;
      } while (puVar1 != puVar6);
      puVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
      puVar4 = param_3;
    } while (puVar1 != (undefined1 *)0x0);
  }
LAB_104fa07c8:
  _objc_release(puVar4);
LAB_104fa07d0:
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_104fa0810;
    lStack_140 = param_1;
    puStack_138 = param_3;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_104fa0898;
    puStack_158 = &UNK_110841f80;
    puStack_150 = puVar1;
    puStack_148 = (undefined1 *)puVar3;
    _objc_retain(puVar3);
    func_0x0001000d76cc("APPSTORE",&puStack_170);
    _objc_release(puStack_148);
    _objc_release(puVar3);
    return;
  }
  return;
}



/* Entry: 104fa0810; end: 104fa0897; -[SCLocationARLensNotificationsManager _userDidMoveToNotificationGeofence:] */

void FUN_104fa0810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104fa0898;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa0898; end: 104fa08a3;  */

void FUN_104fa0898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0a190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__enqueueNotificationIfNecessary__112560200,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104fa08a4; end: 104fa091f; -[SCLocationARLensNotificationsManager _enqueueNotificationIfNecessary:] */

void FUN_104fa08a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010beb61c0();
  if (((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010be41b80(), (int)uVar1 != 0)) {
    uVar1 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc7940(param_1,param_2,uVar1);
    _objc_release(uVar1);
    func_0x00010bea7180(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104fa0920; end: 104fa097b; -[SCLocationARLensNotificationsManager _isMainCameraVisible] */

bool FUN_104fa0920(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29ffa0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 2;
}



/* Entry: 104fa097c; end: 104fa0b7f; -[SCLocationARLensNotificationsManager _addNotificationWithLensId:] */

void FUN_104fa097c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d0640(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dbe638;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbe638,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(ppuVar3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110dbe658;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbe658,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(ppuVar3);
  uVar4 = 1;
  func_0x000107fcbeb0(1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar4);
  func_0x00010c1d0640(puVar1);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c030320(puVar2);
  _objc_release(puVar5);
  func_0x00010befa0a0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104fa0b80; end: 104fa0bb7; -[SCLocationARLensNotificationsManager _shouldShowLocationARLensNotification] */

void FUN_104fa0b80(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dbea0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c233b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_shouldShowLocationARLensNotifica_11266a8e8);
    return;
  }
  return;
}



/* Entry: 104fa0bb8; end: 104fa0bc3; -[SCLocationARLensNotificationsManager _setSeenLocationARLensNotification] */

void FUN_104fa0bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2011f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setShouldShowLocationARLensNotif_11265dea0,0);
  return;
}



/* Entry: 104fa0bc4; end: 104fa0c37; -[SCLocationARLensNotificationsManager .cxx_destruct] */

void FUN_104fa0bc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104fa0c38; end: 104fa0d07; -[SCLocationARLensNotificationGeofence initWithCenterCoordinate:radius:locationName:lensId:] */

undefined1 *
FUN_104fa0c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e5600;
  uStack_60 = param_4;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 104fa0d08; end: 104fa0d2b; -[SCLocationARLensNotificationGeofence copyWithZone:] */

undefined8 FUN_104fa0d08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104fa0d2c; end: 104fa0e03; -[SCLocationARLensNotificationGeofence hash] */

ulong * FUN_104fa0d2c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_104fa0ee8:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104fa0ef4;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20)) <=
         2.220446049250313e-16 &&
        (ABS(*(double *)((long)puVar4 + 0x28) - *(double *)(param_3 + 0x28)) <=
         2.220446049250313e-16)))) {
      dVar10 = ABS(*(double *)((long)puVar4 + 8) - *(double *)(param_3 + 8));
      dVar9 = ABS(*(double *)((long)puVar4 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = *(long *)((long)puVar4 + 0x10), lVar6 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = *(undefined1 **)((long)puVar4 + 0x18);
        if (puVar8 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104fa0ef4;
        }
        goto LAB_104fa0ee8;
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_104fa0ef4:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 104fa0e04; end: 104fa0f0f; -[SCLocationARLensNotificationGeofence isEqual:] */

long FUN_104fa0e04(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104fa0ee8:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104fa0ef4;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20)) <= 2.220446049250313e-16 &&
        (ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28)) <= 2.220446049250313e-16))))
    {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104fa0ef4;
        }
        goto LAB_104fa0ee8;
      }
    }
    lVar4 = 0;
  }
LAB_104fa0ef4:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 104fa0f10; end: 104fa0f17; -[SCLocationARLensNotificationGeofence centerCoordinate] */

undefined1  [16] FUN_104fa0f10(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* Entry: 104fa0f18; end: 104fa0f1f; -[SCLocationARLensNotificationGeofence radius] */

undefined8 FUN_104fa0f18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104fa0f20; end: 104fa0f27; -[SCLocationARLensNotificationGeofence locationName] */

undefined8 FUN_104fa0f20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104fa0f28; end: 104fa0f2f; -[SCLocationARLensNotificationGeofence lensId] */

undefined8 FUN_104fa0f28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104fa0f30; end: 104fa0f5f; -[SCLocationARLensNotificationGeofence .cxx_destruct] */

void FUN_104fa0f30(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104fa0f60; end: 104fa1113; -[SCRealTimeScanCodeClassificationOperation initWithScannableData:modelProvider:realTimeScanLogger:realTimeScanConfiguration:odinBenchmarkMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104fa0f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e5608;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_1127187ac;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127187b0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_1127187b4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127187b8) = param_8;
    lVar5 = (long)_DAT_1127187bc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf3f0c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127187c0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127187c0) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf45e00();
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127187c4) = param_1;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3d80();
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127187c8) = param_1;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 104fa1114; end: 104fa116f; -[SCRealTimeScanCodeClassificationOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1114(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5608;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_start_112671080);
  func_0x00010bdca6a0(param_1);
  func_0x00010bfafa20(param_1);
  return;
}



/* Entry: 104fa1170; end: 104fa122f; -[SCRealTimeScanCodeClassificationOperation cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1170(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010c072f20();
  if ((uVar1 & 1) == 0) {
    puStack_38 = PTR_PTR_1126e5608;
    uStack_40 = param_1;
    _objc_msgSendSuper2(&uStack_40,PTR_s_cancel_1125a9090);
    uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127187bc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf2e560();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + (long)_DAT_1127187cc);
      func_0x00010bf04b00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe70c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2e540();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  return;
}



/* Entry: 104fa1230; end: 104fa126b; -[SCRealTimeScanCodeClassificationOperation image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1230(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b30d8;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127187d0);
  func_0x00010c0fca00(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bfe7b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_imageFromPixelBuffer_rotate__1125d7898,uVar2,1);
  return;
}



/* Entry: 104fa126c; end: 104fa141b; -[SCRealTimeScanCodeClassificationOperation _analyzeImageWithScannableData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa126c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127187ac);
  func_0x00010bfe7e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa3e0(param_2,param_3,uVar1);
  _objc_release(uVar1);
  _CACurrentMediaTime();
  lVar2 = *(long *)(param_2 + _DAT_1127187b0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d0160();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    lVar3 = lVar4;
    func_0x00010bf04b00(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bfe70c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_104fa141c;
    puStack_68 = &UNK_11085fc58;
    lStack_60 = param_2;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010c0be460(param_4,param_3,&puStack_80);
    if (*(long *)(param_2 + _DAT_1127187d0) != 0) {
      lVar3 = param_2;
      func_0x00010bdded80(param_1,param_2,param_3,lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_2 + _DAT_1127187d8);
      *(long *)(param_2 + _DAT_1127187d8) = lVar3;
      _objc_release(uVar1);
    }
    _objc_release(uStack_58);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104fa141c; end: 104fa14cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa141c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010bfe81c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127187d4);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127187d4) = uVar2;
  _objc_release(uVar1);
  func_0x00010c0be4a0(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 104fa14d0; end: 104fa150b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa14d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127187d0);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127187d0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fa150c; end: 104fa1853; -[SCRealTimeScanCodeClassificationOperation _classifiedClassWithModel:modelFetchStartTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa150c(double param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  double dStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar7 = (long)_DAT_1127187d0;
  if ((*(long *)(param_2 + lVar7) != 0) &&
     (uVar1 = param_2, func_0x00010c06e0e0(), (uVar1 & 1) == 0)) {
    func_0x00010c1c0660(param_4);
    lVar2 = param_4;
    func_0x00010c262f40();
    if ((int)lVar2 != 0) {
      puVar3 = PTR_PTR_1126b30e0;
      _objc_alloc(PTR_PTR_1126b30e0);
      dVar8 = 0.0;
      func_0x00010bff3e00();
      uStack_90 = *(undefined8 *)(param_2 + lVar7);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_4;
      func_0x00010c1064c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _CACurrentMediaTime();
      if (*(char *)(param_2 + (long)_DAT_1127187b8) == '\x01') {
        func_0x00010c133540(PTR_PTR_1126b30e8);
      }
      uStack_c0 = 0;
      uStack_b0 = 0x3032000000;
      pcStack_a8 = FUN_104fa1854;
      uStack_a0 = 0x104fa1864;
      uStack_98 = 0;
      uStack_f0 = 0;
      uStack_e0 = 0x3032000000;
      pcStack_d8 = FUN_104fa1854;
      uStack_d0 = 0x104fa1864;
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puStack_e8 = &uStack_f0;
      puStack_b8 = &uStack_c0;
      _objc_alloc_init();
      puVar4 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0;
      uStack_100 = 0x2020000000;
      uStack_f8 = 0;
      uStack_130 = 0;
      uStack_120 = 0x2020000000;
      uStack_118 = 0;
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_104fa186c;
      puStack_140 = &UNK_110845bb0;
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_104fa1908;
      puStack_180 = &UNK_11085fc88;
      uStack_178 = param_2;
      puStack_170 = &uStack_110;
      puStack_168 = &uStack_130;
      puStack_160 = &uStack_f0;
      puStack_138 = &uStack_c0;
      puStack_128 = &uStack_130;
      puStack_108 = &uStack_110;
      puStack_c8 = puVar5;
      func_0x00010c0bf0a0(lVar7);
      puStack_1d0 = puVar4;
      uStack_1c8 = 0xc2000000;
      dStack_1a0 = (dVar8 - param_1) * 1000.0;
      pcStack_1c0 = FUN_104fa1b34;
      puStack_1b8 = &UNK_11085fcb8;
      puStack_1b0 = &uStack_110;
      puStack_1a8 = &uStack_130;
      func_0x0001000d76cc("APPSTORE",&puStack_1d0);
      uVar6 = puStack_e8[5];
      func_0x00010bf00560(uVar6);
      _objc_retainAutoreleasedReturnValue();
      __Block_object_dispose(&uStack_130,8);
      __Block_object_dispose(&uStack_110,8);
      __Block_object_dispose(&uStack_f0,8);
      _objc_release(puStack_c8);
      __Block_object_dispose(&uStack_c0,8);
      _objc_release(uStack_98);
      _objc_release(lVar7);
      _objc_release(puVar3);
      goto LAB_104fa17b8;
    }
  }
  uVar6 = 0;
LAB_104fa17b8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_c0);
  __Unwind_Resume();
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 104fa1854; end: 104fa186b;  */

void FUN_104fa1854(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104fa186c; end: 104fa1907;  */

void FUN_104fa186c(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbe698;
  }
  else {
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    _strlen(param_2);
    func_0x00010bffa180();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
  _objc_release(uVar2);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
  return;
}



/* Entry: 104fa1908; end: 104fa1b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1908(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18) = param_1;
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bfb1920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18) = param_1;
  _objc_release(uVar1);
  _objc_release(uVar2);
  lVar3 = (long)_DAT_1127187c4;
  dVar4 = *(double *)(*(long *)(param_2 + 0x20) + lVar3);
  if (dVar4 < (double)*(float *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18)) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28));
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28));
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_1127187b4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121ca0((double)*(float *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 0x18));
    _objc_release(uVar2);
    dVar4 = *(double *)(*(long *)(param_2 + 0x20) + lVar3);
  }
  if (dVar4 < (double)*(float *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18)) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28));
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_1127187b4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c121ca0((double)*(float *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104fa1b34; end: 104fa1b63;  */

void FUN_104fa1b34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aa490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),
             *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18),
             *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18),PTR_PTR_1126b30e8,
             PTR_s_logMetricsWithPrefix_latency_sna_112608330,
             &PTR____CFConstantStringClassReference_110dbe6b8);
  return;
}



/* Entry: 104fa1b64; end: 104fa1b73; -[SCRealTimeScanCodeClassificationOperation imageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fa1b64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127187dc);
}



/* Entry: 104fa1b74; end: 104fa1bb3; -[SCRealTimeScanCodeClassificationOperation setImageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127187dc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fa1bb4; end: 104fa1bc3; -[SCRealTimeScanCodeClassificationOperation imageMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fa1bb4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127187d4);
}



/* Entry: 104fa1bc4; end: 104fa1c03; -[SCRealTimeScanCodeClassificationOperation setImageMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127187d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fa1c04; end: 104fa1c13; -[SCRealTimeScanCodeClassificationOperation classifiedModelTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104fa1c04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127187d8);
}



/* Entry: 104fa1c14; end: 104fa1c53; -[SCRealTimeScanCodeClassificationOperation setClassifiedModelTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1c14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127187d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104fa1c54; end: 104fa1d13; -[SCRealTimeScanCodeClassificationOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1c54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127187d8,0);
  _objc_storeStrong(param_1 + _DAT_1127187d4,0);
  _objc_storeStrong(param_1 + _DAT_1127187dc,0);
  _objc_storeStrong(param_1 + _DAT_1127187d0,0);
  _objc_storeStrong(param_1 + _DAT_1127187c0,0);
  _objc_storeStrong(param_1 + _DAT_1127187bc,0);
  _objc_storeStrong(param_1 + _DAT_1127187b4,0);
  _objc_storeStrong(param_1 + _DAT_1127187b0,0);
  _objc_storeStrong(param_1 + _DAT_1127187cc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127187ac,0);
  return;
}



/* Entry: 104fa1d14; end: 104fa1dcf; -[SCRealTimeScanCodeDecodeOperation initWithCodeDecoder:resultSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104fa1d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e5610;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127187e0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_1127187e4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fa1dd0; end: 104fa20eb; -[SCRealTimeScanCodeDecodeOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa1dd0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e5610;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_start_112671080);
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b30f0;
  _objc_opt_class(PTR_PTR_1126b30f0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    func_0x00010bfafa20(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126b30f0;
    _objc_opt_class(PTR_PTR_1126b30f0);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar1 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf39d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar4 == 0) {
      func_0x00010bfafa20(param_1);
    }
    else {
      uVar2 = uVar1;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        func_0x00010bfafa20(param_1);
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + (long)_DAT_1127187e0);
        uVar4 = uVar1;
        func_0x00010bf39d20(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010bfe7e60(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf66e60(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_retain(uVar1);
        _objc_retain(uVar2);
        func_0x00010c297260(uVar6);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(uVar6);
      }
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 104fa20ec; end: 104fa217b; -[SCRealTimeScanCodeDecodeOperation isReady] */

bool FUN_104fa20ec(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    bVar1 = true;
  }
  else {
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 104fa217c; end: 104fa21cb;  */

uint FUN_104fa217c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c072f20();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c06e0e0(param_2);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 104fa21cc; end: 104fa232b; -[SCRealTimeScanCodeDecodeOperation _publishUpdatedImageMetadata:withScannableImage:imageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_104fa21cc(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = (long)_DAT_1127187e8;
  if (((*(byte *)(param_1 + lVar5) & 1) == 0) &&
     (uVar1 = param_3, func_0x00010bf529e0(), uVar1 != 0)) {
    lVar6 = param_1;
    func_0x00010c06e0e0();
    if ((int)lVar6 == 0) {
      puVar2 = PTR_PTR_1126b3100;
      func_0x00010bfe9500(PTR_PTR_1126b3100,param_2,param_4,param_5,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = (long)_DAT_1127187e4;
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4,param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010bf436e0(*(undefined8 *)(param_1 + lVar6));
      *(undefined1 *)(param_1 + lVar5) = 1;
      _objc_release(puVar2);
    }
    else {
      func_0x00010bfafa20(param_1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  return (ulong)(*(byte *)(param_3 + (long)_DAT_1127187e8) & 1);
}



/* Entry: 104fa232c; end: 104fa233f; -[SCRealTimeScanCodeDecodeOperation didPublishScannableDataUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_104fa232c(long param_1)

{
  return *(byte *)(param_1 + _DAT_1127187e8) & 1;
}



/* Entry: 104fa2340; end: 104fa234f; -[SCRealTimeScanCodeDecodeOperation setDidPublishScannableDataUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa2340(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127187e8) = param_3;
  return;
}



/* Entry: 104fa2350; end: 104fa238f; -[SCRealTimeScanCodeDecodeOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104fa2350(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127187e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127187e0,0);
  return;
}



/* Entry: 104fa2390; end: 104fa259b; -[SCRealTimeScanCodeTrigger initWithModelProvider:identifierProvider:performerProvider:realTimeScanConfiguration:deepScanConfiguration:odinConfiguration:realTimeScanLogger:] */

undefined1 *
FUN_104fa2390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e5618;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar4;
    _objc_release(uVar2);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bdf0d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined1 **)((long)puVar1 + 0x48) = puVar5;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104fa259c; end: 104fa26af; -[SCRealTimeScanCodeTrigger beginWithContext:] */

void FUN_104fa259c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104fa26b0; end: 104fa26e3;  */

void FUN_104fa26b0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd3e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104fa26e4; end: 104fa27bb; -[SCRealTimeScanCodeTrigger endWithCompletion:] */

void FUN_104fa26e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104fa27bc; end: 104fa27ef;  */

void FUN_104fa27bc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be09fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


