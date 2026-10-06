/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054edd98; end: 1054ede37; -[SCAppUserLifecycleEventHandlerV2 .cxx_destruct] */

void FUN_1054edd98(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ede38; end: 1054edfeb; -[SCChatContentDeliveringEntryPoint _chatContentDeliveryImpl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ede38(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112724d78;
    _objc_loadWeakRetained(lVar8);
  }
  lVar1 = lVar8;
  func_0x00010bf4c240(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112724d7c;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010c0cb4c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112724d80;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010bfcdfa0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  puVar4 = PTR_PTR_1126ba138;
  _objc_alloc(PTR_PTR_1126ba138);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_112724d84;
    _objc_loadWeakRetained(lVar8);
  }
  lVar5 = lVar8;
  func_0x00010bf21e60(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112724d88;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010bf398e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002ee0(puVar4,param_2,lVar1,lVar5,lVar2,lVar3,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054edfec; end: 1054ee073; -[SCChatContentDeliveringEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054edfec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724d70,0);
  _objc_storeStrong(param_1 + _DAT_112724d6c,0);
  _objc_destroyWeak(param_1 + _DAT_112724d88);
  _objc_destroyWeak(param_1 + _DAT_112724d84);
  _objc_destroyWeak(param_1 + _DAT_112724d80);
  _objc_destroyWeak(param_1 + _DAT_112724d7c);
  _objc_destroyWeak(param_1 + _DAT_112724d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724d74);
  return;
}



/* Entry: 1054ee074; end: 1054ee097;  */

undefined8 FUN_1054ee074(long param_1)

{
  if (param_1 - 2U < 0x10) {
    return *(undefined8 *)(&UNK_10ddb0e70 + (param_1 - 2U) * 8);
  }
  return 0x12;
}



/* Entry: 1054ee098; end: 1054ee1a3;  */

void FUN_1054ee098(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9620;
  _objc_opt_new(PTR_PTR_1126b9620);
  func_0x00010c181bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054ee1a4; end: 1054ee1af;  */

void FUN_1054ee1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1054ee1b0; end: 1054ee2ff;  */

void FUN_1054ee1b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc();
  func_0x00010c032f60();
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain();
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054ee300; end: 1054ee38f;  */

void FUN_1054ee300(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054ee390; end: 1054ee63f; -[SCChatContentDeliveryImpl initWithContentDelivery:bufferedContentFetcher:messagingExperimentService:grapheneRegistry:configProvider:] */

undefined8 *
FUN_1054ee390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR_PTR_1126e8be8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ba140;
    _objc_alloc_init();
    uVar3 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[8];
    puVar1[8] = param_6;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1054ee640; end: 1054ee6f7;  */

void FUN_1054ee640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf11840();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054ee6f8; end: 1054ee71f; -[SCChatContentDeliveryImpl mediaFileManager] */

void FUN_1054ee6f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054ee720; end: 1054ee747; -[SCChatContentDeliveryImpl localMediaSavedObservable] */

void FUN_1054ee720(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054ee748; end: 1054eeaf7; -[SCChatContentDeliveryImpl registerChatMedia:completion:] */

void FUN_1054ee748(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 auStack_78 [8];
  undefined **ppuStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != (undefined **)0x0) && (param_4 != 0)) {
    ppuVar1 = param_3;
    func_0x00010c0cb2a0();
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    ppuVar3 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(ppuVar3);
    func_0x00010c0c6c20(param_3);
    func_0x00010bf1f140();
    ppuVar4 = param_3;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar4);
    ppuVar5 = param_3;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar4 = ppuVar5;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar5);
    func_0x00010be41ce0();
    ppuVar5 = param_3;
    func_0x00010c0ec1a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppuVar5);
    ppuVar5 = param_3;
    if (ppuVar6 == (undefined **)0x0) {
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0ec1a0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar6 == (undefined **)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else {
      ppuVar6 = param_3;
      func_0x00010c0cb8c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = param_3;
      func_0x00010c26d980(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar5;
      func_0x00010c071cc0(ppuVar5);
      ppuVar9 = ppuVar1;
      func_0x0001054ee0d0(ppuVar1,ppuVar6,ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_initWeak(auStack_68,param_1);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(0x4132750000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar9;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_copyWeak(auStack_78,auStack_68);
      ppuStack_70 = ppuVar1;
      _objc_retain(ppuVar3);
      _objc_retain(ppuVar4);
      _objc_retain(param_4);
      func_0x00010c125e00(uVar10);
      _objc_release(ppuVar6);
      _objc_release(puVar11);
      _objc_release(uVar10);
      _objc_release(param_4);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_destroyWeak(auStack_78);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_68);
      _objc_release(ppuVar9);
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054eeaf8; end: 1054eeb4b;  */

void FUN_1054eeaf8(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be89bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001054eeb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 1054eeb4c; end: 1054eed87; -[SCChatContentDeliveryImpl _registerOverlayIfNecessaryForMedia:messageBodyType:encodedKey:encodedIv:completion:] */

void FUN_1054eeb4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c0ef6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,1);
  }
  else {
    lVar1 = param_3;
    func_0x000108543920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    uVar4 = 0x2b;
    FUN_1054ee098();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0ef6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4132750000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_7);
    _objc_retain(lVar1);
    func_0x00010c125e00(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(param_7);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054eed88; end: 1054eed93;  */

void FUN_1054eed88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054eed90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 1054eed94; end: 1054eee2b; -[SCChatContentDeliveryImpl _isMediaEligibleForStreaming:] */

uint FUN_1054eed94(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c0c6c20();
  if (lVar2 == 1) {
    uVar4 = 1;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0c6c20(param_3);
    uVar4 = (uint)(lVar2 == 2);
  }
  lVar2 = param_3;
  func_0x00010c0ec1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c071640(param_3);
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = (uint)lVar2 & uVar4;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1054eee2c; end: 1054eefbb; -[SCChatContentDeliveryImpl _buildRequestContextForContentKey:pageInfo:trackingId:fetchPriorityOverride:messageBodyType:requestSource:] */

void FUN_1054eee2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    bVar1 = false;
  }
  else {
    lVar7 = param_6;
    func_0x00010c067ec0();
    bVar1 = (int)lVar7 != 2;
  }
  if (param_8 == 1) {
    uVar2 = *(ulong *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_1054eeed0;
  }
  else {
LAB_1054eeed0:
    if (bVar1) {
      lVar7 = param_6;
      func_0x00010c067ec0(param_6);
      lVar7 = (long)(int)lVar7;
      goto LAB_1054eeef4;
    }
    if (6 < param_8 - 4U) {
      if (param_8 == 1) {
        uVar5 = *(undefined8 *)(param_1 + 0x58);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf1f3c0();
        _objc_release(uVar5);
        if ((int)uVar6 != 0) goto LAB_1054eeef0;
      }
      lVar7 = 3;
      goto LAB_1054eeef4;
    }
  }
LAB_1054eeef0:
  lVar7 = 2;
LAB_1054eeef4:
  puVar4 = PTR_PTR_1126b1378;
  uVar6 = param_3;
  func_0x00010c0c46a0(param_3);
  FUN_1054ee074(param_8);
  func_0x00010c2add60(puVar4,param_2,lVar7,uVar6,param_4,0,500,param_8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054eefbc; end: 1054eefdb; -[SCChatContentDeliveryImpl _isCodecBlockedFetchForMediaId:shouldBlockDownload:requestSource:] */

undefined * FUN_1054eefbc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  if (param_4 != 0) {
    puVar1 = PTR_PTR_1126ba150;
                    /* WARNING: Could not recover jumptable at 0x00010c22e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126ba150,PTR_s_shouldBlockDownload__112669348,
               *(undefined8 *)(param_1 + 0x50));
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 1054eefdc; end: 1054ef593; -[SCChatContentDeliveryImpl downloadContentForConversationId:messageId:media:mediaId:analyticsMessageId:contentObject:messageBodyType:userInitiated:requestSource:completionBlock:] */

void FUN_1054eefdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,long param_14)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_14);
  func_0x00010c22e460(param_6);
  lVar1 = param_2;
  func_0x00010be3ef60();
  if ((int)lVar1 != 0) {
    if (param_14 != 0) {
      puVar2 = PTR_PTR_1126ba158;
      func_0x00010bf3efe0(PTR_PTR_1126ba158);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_14 + 0x10))(param_14,0,0,0,0,puVar2);
      _objc_release(puVar2);
    }
    goto LAB_1054ef4fc;
  }
  _objc_initWeak(auStack_80,param_2);
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc();
  func_0x00010c0295e0();
  uVar5 = param_4;
  FUN_1054ee1b0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bdd6960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(uVar5);
  uVar5 = param_6;
  func_0x00010c0cb8c0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010c26d980(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_9;
  func_0x00010c071cc0(param_9);
  func_0x0001054ee0d0(param_10,uVar5,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain();
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar9);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1054ef594;
  puStack_c8 = &UNK_1108925f0;
  _objc_retain(param_7);
  uStack_c0 = param_7;
  uStack_98 = param_1;
  _objc_retain(uVar5);
  uStack_b8 = uVar5;
  _objc_copyWeak(auStack_a0,auStack_80);
  _objc_retain(param_6);
  uStack_90 = param_13;
  bStack_88 = param_11;
  uStack_b0 = param_6;
  _objc_retain(param_14);
  lStack_a8 = param_14;
  ppuVar6 = &puStack_e0;
  _objc_retainBlock();
  func_0x00010c0c6c20(param_6);
  func_0x00010bf1f140();
  lVar4 = param_9;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    if (ppuVar6 != (undefined **)0x0) {
      puVar7 = auStack_80;
      _objc_loadWeakRetained(puVar7);
      uVar3 = param_6;
      func_0x00010c0c5180(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20(param_6);
      uVar8 = param_6;
      func_0x00010c0cb9a0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52720(puVar7);
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(puVar7);
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_new(PTR__OBJC_CLASS___NSError_1126ae858);
      (**(code **)(param_14 + 0x10))(param_14,0,0,0,0,puVar9);
      goto LAB_1054ef490;
    }
  }
  else {
    if ((param_11 & 1) == 0) {
      lVar4 = lVar1;
      func_0x00010c11fca0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa96c0();
      _objc_release(lVar4);
    }
    puVar9 = *(undefined **)(param_2 + 0x18);
    func_0x00010c269d40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_6;
    func_0x00010c086560(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010c085300(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4132750000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_10;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf889a0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(puVar10);
    _objc_release(uVar8);
    _objc_release(uVar3);
LAB_1054ef490:
    _objc_release(puVar9);
  }
  _objc_release(ppuVar6);
  _objc_release(lStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uVar5);
  _objc_release(param_10);
  _objc_release(lVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
LAB_1054ef4fc:
  _objc_release(param_14);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054ef594; end: 1054ef78b;  */

void FUN_1054ef594(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = PTR_PTR_1126ba160;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010bf88d80(uVar9,param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
  lVar8 = param_2 + 0x40;
  _objc_loadWeakRetained(lVar8);
  func_0x00010c0c6c20(*(undefined8 *)(param_2 + 0x30));
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c0cb9a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c1e0(param_4);
  func_0x00010be52720(lVar8);
  _objc_release(uVar9);
  _objc_release(lVar8);
  lVar8 = *(long *)(param_2 + 0x38);
  uVar9 = param_4;
  func_0x00010c0d7ca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  func_0x00010c0f66a0();
  uVar4 = param_4;
  func_0x00010c0d7ca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c13b780();
  uVar6 = param_4;
  func_0x00010bf987e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar7 = uVar6;
  func_0x00010b7f5498(uVar6);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar8 + 0x10))(lVar8,param_3 == 0,uVar3,0,(long)(int)uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054ef78c; end: 1054ef8f3; -[SCChatContentDeliveryImpl postProcessStoryMediaId:mediaType:requestSource:completionBlock:] */

void FUN_1054ef78c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010be856c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  if (lVar1 == 0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    func_0x00010be76780();
    _objc_release(puVar2);
  }
  else {
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(param_3);
    uStack_58 = param_4;
    uStack_50 = param_5;
    _objc_retain(param_6);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1054ef8f4; end: 1054ef92b;  */

void FUN_1054ef8f4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054ef92c; end: 1054efa8b; -[SCChatContentDeliveryImpl postProcessChatMedia:requestSource:completionBlock:] */

void FUN_1054ef92c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be856c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  if (lVar1 == 0) {
    puVar2 = auStack_48;
    _objc_loadWeakRetained(puVar2);
    func_0x00010be766e0();
    _objc_release(puVar2);
  }
  else {
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    _objc_retain(param_5);
    func_0x00010c0f7fc0(lVar1);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054efa8c; end: 1054efac3;  */

void FUN_1054efa8c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be766e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054efac4; end: 1054efacf; -[SCChatContentDeliveryImpl saveLocalContent:dedupeKey:expirationDate:completion:] */

void FUN_1054efac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be994b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveLocalContent_dedupeKey_expi_112583ec8);
  return;
}



/* Entry: 1054efad0; end: 1054efccf; -[SCChatContentDeliveryImpl _saveLocalContent:dedupeKey:expirationDate:serializedFeatureMetadata:completion:] */

void FUN_1054efad0(long param_1,undefined8 param_2,long param_3,long param_4,undefined *param_5,
                  undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 == 0) || (param_4 == 0)) {
    if (param_7 != 0) {
      (**(code **)(param_7 + 0x10))(param_7,0);
    }
  }
  else {
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_5;
    if (param_5 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf65600(0x4132750000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_7);
    func_0x00010c14a880(uVar2);
    if (param_5 == (undefined *)0x0) {
      _objc_release(puVar3);
    }
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054efcd0; end: 1054efd83;  */

void FUN_1054efcd0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 != 0) {
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + 0x38));
    }
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      _objc_retain(lVar2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1054efd84; end: 1054efd97;  */

void FUN_1054efd84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054efd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1054efd98; end: 1054effa3; -[SCChatContentDeliveryImpl removeContentForBundleMediaId:] */

void FUN_1054efd98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010c0c4ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_1054f66a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(lVar3);
  lVar5 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar6 = PTR_PTR_1126b08b8;
      _objc_alloc(PTR_PTR_1126b08b8);
      func_0x00010c0295e0();
      func_0x00010befa120(puVar4);
      _objc_release(puVar6);
      lVar10 = lVar10 + 1;
    } while (lVar5 != lVar10);
    lVar5 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(lVar2);
  func_0x00010c12b940(uVar7);
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x28);
  _objc_retain();
  func_0x0001085438ec(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bd80(uVar7);
  _objc_release(uVar7);
  _objc_release(uVar8);
  return;
}



/* Entry: 1054effa4; end: 1054effaf;  */

void FUN_1054effa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain();
  func_0x0001085438ec(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bd80(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1054effb0; end: 1054f018f; -[SCChatContentDeliveryImpl contains:] */

bool FUN_1054effb0(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11d220();
    _objc_release(lVar3);
    if ((lVar4 == 0) ||
       (uVar5 = param_1, func_0x00010bde7320(param_1,param_2,puVar2), (uVar5 & 1) != 0)) {
      bVar1 = true;
    }
    else {
      lVar4 = param_3;
      FUN_1054f0190();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        bVar1 = false;
      }
      else {
        lVar3 = lVar4;
        func_0x00010c0dfd40(lVar4,param_2,0);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        FUN_1054f0300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        lVar3 = lVar6;
        func_0x00010bf529e0();
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar3 == 0) {
          bVar1 = false;
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126b08b8;
          _objc_alloc(PTR_PTR_1126b08b8);
          lVar3 = lVar4;
          func_0x00010c0dfd40(lVar4,param_2,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0295e0(puVar8,param_2,lVar3,3);
          uVar9 = uVar7;
          func_0x00010c11dbe0(uVar7,param_2,puVar8,lVar6);
          func_0x00010c0df780(puVar10,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(lVar3);
          _objc_release(uVar7);
          puVar8 = puVar10;
          func_0x00010c067fc0(puVar10);
          bVar1 = puVar8 == (undefined *)0x0;
          _objc_release(puVar10);
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1054f0190; end: 1054f02ff;  */

void FUN_1054f0190(undefined **param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **unaff_x20;
  undefined **ppuVar5;
  undefined **unaff_x22;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined ***pppuStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010c11f420(param_1);
  if (param_2 == 0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    ppuVar5 = param_1;
    func_0x00010c260c20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    ppuStack_58 = ppuVar5;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 2;
    unaff_x20 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_50 = unaff_x22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(ppuVar5);
    ppuVar5 = unaff_x20;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar1 == (undefined **)0x0) {
      _objc_release(ppuVar5);
LAB_1054f02b4:
      ppuVar5 = (undefined **)0x0;
    }
    else {
      unaff_x22 = unaff_x20;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = unaff_x22;
      func_0x00010c08fa60();
      _objc_release(unaff_x22);
      _objc_release(ppuVar5);
      if (ppuVar1 == (undefined **)0x0) goto LAB_1054f02b4;
      _objc_retain(unaff_x20);
      ppuVar5 = unaff_x20;
    }
    _objc_release(unaff_x20);
  }
  ppuVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_68 = FUN_1054f0300;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_90 = unaff_x22;
  ppuStack_88 = ppuVar5;
  ppuStack_80 = unaff_x20;
  ppuStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain();
  ppuVar5 = &PTR____CFConstantStringClassReference_110de6f58;
  ppuVar4 = ppuVar5;
  func_0x00010c11f420();
  func_0x00010c08fa60();
  if ((ppuVar4 == (undefined **)0x0) && (param_2 == (long)ppuVar5 + -1)) {
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110db9458;
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110de7678;
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110db6dd8;
    ppuVar4 = (undefined **)&ppuStack_b0;
    param_4 = 3;
LAB_1054f03e4:
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar5 = ppuVar1;
    func_0x00010c071ae0();
    if (((ulong)ppuVar5 & 1) != 0) {
LAB_1054f03d0:
      ppuVar4 = (undefined **)&ppuStack_b8;
      param_4 = 1;
      ppuStack_b8 = ppuVar1;
      goto LAB_1054f03e4;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110edc8f8;
    ppuVar5 = ppuVar1;
    func_0x00010c071ae0();
    if ((int)ppuVar5 != 0) goto LAB_1054f03d0;
    ppuVar5 = (undefined **)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
    _objc_retain(param_4);
    if (((undefined ***)ppuVar4 != (undefined ***)0x0) && (param_4 != 0)) {
      _objc_initWeak(auStack_108,ppuVar1);
      puVar2 = PTR_PTR_1126b08b8;
      _objc_alloc();
      func_0x00010c0295e0();
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_1054f05b4;
      puStack_130 = &UNK_110892650;
      _objc_retain(param_4);
      lStack_118 = param_4;
      _objc_copyWeak(auStack_110,auStack_108);
      _objc_retain(puVar2);
      puStack_128 = puVar2;
      _objc_retain(ppuVar4);
      ppuVar5 = &puStack_148;
      pppuStack_120 = (undefined ***)ppuVar4;
      _objc_retainBlock(ppuVar5);
      puVar3 = ppuVar1[3];
      func_0x00010c269d40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11d240();
      _objc_release(puVar3);
      _objc_release(ppuVar5);
      _objc_release(pppuStack_120);
      _objc_release(puStack_128);
      _objc_destroyWeak(auStack_110);
      _objc_release(lStack_118);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_108);
    }
    _objc_release(param_4);
    _objc_release(ppuVar4);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1054f0300; end: 1054f0437;  */

void FUN_1054f0300(undefined **param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar3 = &PTR____CFConstantStringClassReference_110de6f58;
  ppuVar1 = ppuVar3;
  func_0x00010c11f420();
  func_0x00010c08fa60();
  if ((ppuVar1 == (undefined **)0x0) && (param_2 == (long)ppuVar3 + -1)) {
    ppuStack_50 = &PTR____CFConstantStringClassReference_110db9458;
    ppuStack_48 = &PTR____CFConstantStringClassReference_110de7678;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110db6dd8;
    ppuVar3 = (undefined **)&ppuStack_50;
    param_4 = 3;
  }
  else {
    ppuVar3 = param_1;
    func_0x00010c071ae0();
    if (((ulong)ppuVar3 & 1) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110edc8f8;
      ppuVar1 = param_1;
      func_0x00010c071ae0();
      if ((int)ppuVar1 == 0) {
        puVar4 = (undefined *)0x0;
        goto LAB_1054f03f4;
      }
    }
    ppuVar3 = (undefined **)&ppuStack_58;
    param_4 = 1;
    ppuStack_58 = param_1;
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
LAB_1054f03f4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar3);
  _objc_retain(param_4);
  if (((undefined ***)ppuVar3 != (undefined ***)0x0) && (param_4 != 0)) {
    _objc_initWeak(auStack_a8,param_1);
    puVar4 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1054f05b4;
    puStack_d0 = &UNK_110892650;
    _objc_retain(param_4);
    lStack_b8 = param_4;
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(puVar4);
    puStack_c8 = puVar4;
    _objc_retain(ppuVar3);
    ppuVar1 = &puStack_e8;
    pppuStack_c0 = (undefined ***)ppuVar3;
    _objc_retainBlock(ppuVar1);
    puVar2 = param_1[3];
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d240();
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(pppuStack_c0);
    _objc_release(puStack_c8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lStack_b8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_release(param_4);
  _objc_release(ppuVar3);
  return;
}



/* Entry: 1054f0438; end: 1054f05b3; -[SCChatContentDeliveryImpl contains:completion:] */

void FUN_1054f0438(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1054f05b4;
    puStack_70 = &UNK_110892650;
    _objc_retain(param_4);
    lStack_58 = param_4;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar1);
    puStack_68 = puVar1;
    _objc_retain(param_3);
    ppuVar2 = &puStack_88;
    lStack_60 = param_3;
    _objc_retainBlock(ppuVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11d240();
    _objc_release(uVar3);
    _objc_release(ppuVar2);
    _objc_release(lStack_60);
    _objc_release(puStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_58);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054f05b4; end: 1054f07b7;  */

void FUN_1054f05b4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bde7320();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      lVar1 = param_1 + 0x38;
      _objc_loadWeakRetained();
      if (lVar1 == 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
      }
      else {
        lVar2 = *(long *)(param_1 + 0x28);
        FUN_1054f0190();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
        }
        else {
          lVar3 = lVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          FUN_1054f0300();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar4;
          func_0x00010bf529e0();
          if (lVar3 == 0) {
            (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
          }
          else {
            uVar5 = *(undefined8 *)(lVar1 + 0x18);
            func_0x00010c269d40(uVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126b08b8;
            _objc_alloc(PTR_PTR_1126b08b8);
            lVar3 = lVar2;
            func_0x00010c0dfd40(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0295e0(puVar6);
            uVar7 = *(undefined8 *)(param_1 + 0x30);
            _objc_retain(uVar7);
            func_0x00010c11dbc0(uVar5);
            _objc_release(puVar6);
            _objc_release(lVar3);
            _objc_release(uVar5);
            _objc_release(uVar7);
          }
          _objc_release(lVar4);
        }
        _objc_release(lVar2);
      }
      _objc_release(lVar1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001054f0620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
  return;
}



/* Entry: 1054f07b8; end: 1054f07cb;  */

void FUN_1054f07b8(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001054f07c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 1054f07cc; end: 1054f08fb; -[SCChatContentDeliveryImpl _containedInBufferedContentFetcher:] */

undefined8 FUN_1054f07cc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((int)uVar6 != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfc33c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0b5640();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf4bee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar6;
        func_0x00010bfc4140();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar6 = uVar1;
        func_0x00010c06cd80(uVar1);
        _objc_release(uVar1);
      }
      _objc_release(lVar5);
      goto LAB_1054f08dc;
    }
  }
  uVar6 = 0;
LAB_1054f08dc:
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1054f08fc; end: 1054f0ad3; -[SCChatContentDeliveryImpl retrieveContentForDedupeKey:mediaType:requestSource:completion:] */

void FUN_1054f08fc(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = param_1;
  func_0x00010be856c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  if (puVar1 == (undefined *)0x0) {
    uVar2 = param_3;
    FUN_1054ee300(param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    param_1 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_retain(param_3);
    uStack_68 = param_4;
    uStack_60 = param_5;
    _objc_retain(param_6);
    _objc_retain(param_1);
    func_0x00010c0f7fc0(puVar1);
    _objc_retain(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054f0ad4; end: 1054f0b87;  */

void FUN_1054f0ad4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_1054ee300(uVar3,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be96560(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar1);
  func_0x00010bef7460(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1054f0b88; end: 1054f0dff; -[SCChatContentDeliveryImpl retrieveContentForMedia:analyticsMessageId:requestSource:completion:] */

void FUN_1054f0b88(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = param_1;
  func_0x00010be856c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    func_0x00010c0cb2a0(param_3);
    func_0x00010c22e460(param_3);
    uVar4 = param_3;
    func_0x00010c0cb9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    param_1 = PTR_PTR_1126b2798;
    _objc_opt_new();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(puVar2);
    uStack_70 = param_5;
    _objc_retain(param_6);
    _objc_retain(param_1);
    func_0x00010c0f7fc0(puVar1);
    _objc_retain(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_78);
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054f0e00; end: 1054f0ef3;  */

void FUN_1054f0e00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c6c20(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb2a0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c22e460(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb9a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010be96560(lVar1,param_2,uVar2,uVar3,uVar4,uVar5,uVar6,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar1);
  func_0x00010bef7460(*(undefined8 *)(param_1 + 0x30),param_2,lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar7);
  return;
}



/* Entry: 1054f0ef4; end: 1054f112b; -[SCChatContentDeliveryImpl retrieveContentForMedia:analyticsMessageId:messageType:requestSource:fetchPriority:completion:] */

void FUN_1054f0ef4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1054f112c;
  puStack_88 = &UNK_11085a668;
  _objc_retain(param_8);
  ppuVar1 = &puStack_a0;
  uStack_80 = param_8;
  _objc_retainBlock();
  puVar2 = param_1;
  func_0x00010be856c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_a8,param_1);
  if (puVar2 == (undefined *)0x0) {
    func_0x00010be96580(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = PTR_PTR_1126b2798;
    _objc_alloc_init();
    _objc_copyWeak(auStack_c8,auStack_a8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_c0 = param_5;
    uStack_b8 = param_6;
    uStack_b0 = param_7;
    _objc_retain(ppuVar1);
    _objc_retain(param_1);
    func_0x00010c0f7fc0(puVar2);
    _objc_retain(param_1);
    _objc_release(param_1);
    _objc_release(ppuVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054f112c; end: 1054f113f;  */

void FUN_1054f112c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001054f113c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_2 != 0);
  return;
}



/* Entry: 1054f1140; end: 1054f11a7;  */

void FUN_1054f1140(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be96580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bef7460(*(undefined8 *)(param_1 + 0x30),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1054f11a8; end: 1054f12e7; -[SCChatContentDeliveryImpl retrieveImageForMedia:analyticsMessageId:requestSource:fetchPriority:completion:] */

void FUN_1054f11a8(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bf4cce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,0);
    param_1 = PTR_PTR_1126b2798;
    _objc_alloc_init(PTR_PTR_1126b2798);
  }
  else {
    func_0x00010c0cb2a0(param_3);
    _objc_retain(param_7);
    func_0x00010c13e500(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054f12e8; end: 1054f134f;  */

void FUN_1054f12e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if ((int)param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054f1350; end: 1054f139b; -[SCChatContentDeliveryImpl videoExistsOnDiskForMediaId:] */

undefined8 FUN_1054f1350(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001085438ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfacc40(uVar1,param_2,param_3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1054f139c; end: 1054f13ef; -[SCChatContentDeliveryImpl videoUrlForMediaId:] */

void FUN_1054f139c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001085438ec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad180(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f13f0; end: 1054f1417; -[SCChatContentDeliveryImpl logItemObservable] */

void FUN_1054f13f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f1418; end: 1054f16c7; -[SCChatContentDeliveryImpl _postProcessStoryMediaId:mediaType:requestSource:completionBlock:] */

void FUN_1054f1418(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  if ((param_6 == 0x11) && (lVar1 = param_2, func_0x00010be3ef60(), (int)lVar1 != 0)) {
    (**(code **)(param_7 + 0x10))(param_7,3);
  }
  else {
    _objc_initWeak(auStack_78,param_2);
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    uVar3 = 0;
    FUN_1054ee1b0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bdd6960(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    uStack_90 = param_1;
    _objc_retain(uVar5);
    _objc_copyWeak(auStack_98,auStack_78);
    uStack_88 = param_5;
    _objc_retain(puVar2);
    lStack_80 = param_6;
    _objc_retain(param_7);
    func_0x00010c13e5c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(param_7);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(uVar5);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f16c8; end: 1054f17df;  */

void FUN_1054f16c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126ba160;
  _objc_retain(param_3);
  func_0x00010bfcaaa0(param_3);
  uVar1 = param_3;
  func_0x00010bfc79a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c13e660(uVar4,param_1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
  param_2 = param_2 + 0x40;
  _objc_loadWeakRetained(param_2);
  func_0x00010be1c1a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054f17e0; end: 1054f1af7; -[SCChatContentDeliveryImpl _postProcessChatMedia:requestSource:completionBlock:] */

void FUN_1054f17e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar5 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22e460(param_4);
  lVar1 = param_2;
  func_0x00010be3ef60();
  _objc_release(uVar5);
  if ((int)lVar1 == 0) {
    _objc_initWeak(auStack_78,param_2);
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    uVar5 = param_4;
    func_0x00010c0c5180(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(uVar5);
    uVar3 = 0;
    FUN_1054ee1b0(0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb2a0(param_4);
    lVar1 = param_2;
    func_0x00010bdd6960(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    uStack_88 = param_1;
    _objc_retain(uVar3);
    _objc_copyWeak(auStack_90,auStack_78);
    _objc_retain(puVar2);
    uStack_80 = param_5;
    _objc_retain(param_6);
    func_0x00010c13e5c0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_90);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_78);
  }
  else {
    (**(code **)(param_6 + 0x10))(param_6,0,3,0);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f1af8; end: 1054f1c1f;  */

void FUN_1054f1af8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126ba160;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0c5180(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcaaa0(param_3);
  uVar1 = param_3;
  func_0x00010bfc79a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c13e660(uVar5,param_1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
  param_2 = param_2 + 0x40;
  _objc_loadWeakRetained(param_2);
  func_0x00010be1c160();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054f1c20; end: 1054f2107; -[SCChatContentDeliveryImpl _retrieveContentForDedupeKey:mediaType:messageBodyType:shouldBlockDownload:messageTimestamp:trackingId:requestSource:completion:] */

void FUN_1054f1c20(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lStack_138;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  lVar1 = param_1;
  func_0x00010be3ef60();
  if ((int)lVar1 != 0) {
    (**(code **)(param_10 + 0x10))(param_10,0,0);
    puVar6 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
    goto LAB_1054f2080;
  }
  _objc_initWeak(auStack_70,param_1);
  uVar2 = 0;
  FUN_1054ee1b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar10 = param_3;
  func_0x00010bfda7c0();
  if ((uVar10 & 1) == 0) {
    uVar10 = param_3;
    func_0x00010bfda7c0();
    if (((int)uVar10 != 0) && (uVar10 = param_3, func_0x00010bfda7c0(), (int)uVar10 == 0)) {
      ppuVar9 = &PTR_PTR_110a49f20;
      ppuVar3 = &PTR____CFConstantStringClassReference_110de6f78;
      goto LAB_1054f1d94;
    }
    uVar10 = param_3;
    func_0x00010bfda7c0();
    if ((int)uVar10 != 0) {
      ppuVar9 = &PTR_PTR_110a49f30;
      ppuVar3 = &PTR____CFConstantStringClassReference_110de6fb8;
      goto LAB_1054f1d94;
    }
    uVar10 = 0;
    puVar11 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
  }
  else {
    ppuVar9 = &PTR_PTR_110a49f08;
    ppuVar3 = &PTR____CFConstantStringClassReference_110de6f58;
LAB_1054f1d94:
    func_0x00010c08fa60(ppuVar3);
    uVar10 = param_3;
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar12 = *ppuVar9;
    _objc_retainAutorelease(puVar12);
  }
  _objc_release(param_3);
  _objc_retain(uVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  puVar5 = PTR_PTR_1126b08b8;
  lStack_138 = param_1;
  if (uVar10 == 0) {
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    func_0x00010bdd6960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = auStack_e8;
    _objc_copyWeak(puVar8,auStack_70);
    _objc_retain(param_3);
    uStack_e0 = param_4;
    _objc_retain(param_7);
    uStack_d8 = param_9;
    _objc_retain(param_10);
    puVar6 = puVar4;
    func_0x00010c13e5c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(param_10);
    _objc_release(param_7);
    uVar7 = param_3;
  }
  else {
    _objc_alloc();
    func_0x00010c0295e0();
    func_0x00010bdd6960();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1054f2108;
    puStack_b8 = &UNK_110892740;
    puVar8 = auStack_88;
    _objc_copyWeak(puVar8,auStack_70);
    _objc_retain(param_3);
    uStack_b0 = param_3;
    uStack_80 = param_4;
    _objc_retain(param_7);
    uStack_78 = param_9;
    uStack_a8 = param_7;
    _objc_retain(param_10);
    lStack_90 = param_10;
    _objc_retain(puVar11);
    puStack_a0 = puVar11;
    _objc_retain(puVar12);
    puVar6 = puVar4;
    puStack_98 = puVar12;
    func_0x00010c13e5c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puStack_98);
    _objc_release(puStack_a0);
    _objc_release(lStack_90);
    _objc_release(uStack_a8);
    uVar7 = uStack_b0;
  }
  _objc_release(uVar7);
  _objc_destroyWeak(puVar8);
  _objc_release(lStack_138);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
LAB_1054f2080:
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054f2108; end: 1054f25d3;  */

void FUN_1054f2108(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  int iVar18;
  long lVar20;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  code *pcStack_3e8;
  undefined *puStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  ulong uStack_3c8;
  undefined1 auStack_3c0 [8];
  undefined *puStack_3b8;
  undefined1 auStack_3b0 [16];
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined *puStack_278;
  long lStack_1f0;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  ulong uVar19;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar1;
  func_0x00010c09c1e0();
  ppuVar16 = param_2;
  func_0x00010bfcaaa0();
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar16 = param_2;
    func_0x00010bfc68c0();
    if (((ulong)ppuVar16 & 1) == 0) {
      puVar15 = param_1[6];
      func_0x00010c067fc0();
      ppuVar16 = param_1 + 9;
      _objc_loadWeakRetained();
      if (puVar15 != (undefined *)0x1) {
        ppuStack_168 = &PTR____CFConstantStringClassReference_110de70f8;
        goto LAB_1054f2194;
      }
      uStack_170 = 0;
      ppuStack_168 = &PTR____CFConstantStringClassReference_110de70d8;
      func_0x00010be57e60(ppuVar16);
      _objc_release(ppuVar16);
      puVar15 = param_1[8];
      ppuVar16 = param_2;
      func_0x00010b7f5374();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar16;
      (**(code **)(puVar15 + 0x10))(puVar15,ppuVar16,ppuVar17);
    }
    else {
      ppuStack_160 = param_1;
      ppuStack_158 = ppuVar17;
      ppuStack_150 = ppuVar1;
      ppuStack_148 = param_2;
      func_0x000108461ea8();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain(param_2);
      ppuVar1 = param_2;
      func_0x00010bf52a60();
      if (ppuVar1 != (undefined **)0x0) {
        lVar20 = *plStack_120;
        unaff_x27 = &PTR____CFConstantStringClassReference_110de7678;
        unaff_x28 = &PTR____CFConstantStringClassReference_110db6dd8;
        ppuStack_138 = &PTR____CFConstantStringClassReference_110edc8f8;
        ppuStack_140 = &PTR____CFConstantStringClassReference_110dceed8;
        do {
          ppuVar17 = (undefined **)0x0;
          do {
            if (*plStack_120 != lVar20) {
              _objc_enumerationMutation(param_2);
            }
            uVar19 = *(ulong *)(lStack_128 + (long)ppuVar17 * 8);
            iVar18 = (int)uVar19;
            uVar14 = uVar19;
            func_0x00010bfda7c0();
            if ((((((uVar14 & 1) != 0) ||
                  (uVar14 = uVar19, func_0x00010bfda7c0(), (uVar14 & 1) != 0)) ||
                 (uVar14 = uVar19, func_0x00010bfda7c0(), (uVar14 & 1) != 0)) ||
                ((uVar14 = uVar19, func_0x00010bfda7c0(), (uVar14 & 1) != 0 ||
                 (func_0x00010bfda7c0(), (uVar19 & 1) != 0)))) ||
               (func_0x00010bfda7c0(), iVar18 != 0)) {
              func_0x00010c1d0640(ppuVar16);
            }
            ppuVar17 = (undefined **)((long)ppuVar17 + 1);
          } while (ppuVar1 != ppuVar17);
          ppuVar1 = param_2;
          func_0x00010bf52a60();
        } while (ppuVar1 != (undefined **)0x0);
      }
      unaff_x25 = (undefined **)0x0;
      _objc_release(param_2);
      _objc_release(param_2);
      _objc_release(param_2);
      unaff_x26 = ppuStack_160;
      ppuVar1 = ppuVar16;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (ppuVar1 == (undefined **)0x0) {
        ppuVar1 = unaff_x26 + 9;
        _objc_loadWeakRetained();
        ppuVar17 = ppuStack_158;
        uStack_170 = 3;
        ppuStack_168 = &PTR____CFConstantStringClassReference_110de7118;
        func_0x00010be57e60();
        _objc_release(ppuVar1);
        ppuVar12 = (undefined **)0x0;
        (**(code **)(unaff_x26[8] + 0x10))(unaff_x26[8],0,ppuVar17);
        param_2 = ppuStack_148;
        ppuVar1 = ppuStack_150;
      }
      else {
        ppuVar1 = ppuVar16;
        func_0x00010c0e00e0(ppuVar16);
        _objc_retainAutoreleasedReturnValue();
        param_2 = ppuStack_148;
        ppuVar2 = ppuStack_148;
        func_0x00010bfcc4e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        ppuVar17 = unaff_x26 + 9;
        _objc_loadWeakRetained();
        ppuVar1 = ppuStack_150;
        ppuVar3 = ppuStack_158;
        if (ppuVar2 == (undefined **)0x0) {
          uStack_170 = 3;
          ppuStack_168 = &PTR____CFConstantStringClassReference_110de7138;
          func_0x00010be57e60(ppuVar17);
          _objc_release(ppuVar17);
          ppuVar12 = (undefined **)0x0;
          (**(code **)(unaff_x26[8] + 0x10))(unaff_x26[8],0,ppuVar3);
        }
        else {
          uStack_170 = 0;
          ppuStack_168 = &PTR____CFConstantStringClassReference_110de70d8;
          func_0x00010be57e60(ppuVar17);
          _objc_release(ppuVar17);
          puVar15 = unaff_x26[8];
          ppuVar17 = ppuVar2;
          func_0x00010bfc48a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar17;
          (**(code **)(puVar15 + 0x10))(puVar15,ppuVar17,ppuVar3);
          _objc_release(ppuVar17);
          unaff_x25 = ppuVar3;
        }
        _objc_release(ppuVar2);
      }
    }
    _objc_release(ppuVar16);
  }
  else {
    ppuVar16 = param_1 + 9;
    _objc_loadWeakRetained();
    ppuStack_168 = &PTR____CFConstantStringClassReference_110de70b8;
LAB_1054f2194:
    uStack_170 = 3;
    func_0x00010be57e60();
    _objc_release(ppuVar16);
    ppuVar12 = (undefined **)0x0;
    (**(code **)(param_1[8] + 0x10))(param_1[8],0,ppuVar17);
  }
  ppuVar17 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcStack_178 = FUN_1054f25d4;
    lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_180 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar12);
    ppuVar16 = ppuVar12;
    func_0x00010bfcaaa0();
    ppuVar3 = ppuVar12;
    func_0x00010bfc79a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    func_0x00010c09c1e0();
    if (ppuVar16 == (undefined **)0x0) {
      ppuVar16 = ppuVar12;
      func_0x00010bfc68c0();
      if ((int)ppuVar16 == 0) {
        unaff_x26 = ppuVar12;
        func_0x00010b7f5374();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar16 = ppuVar12;
        func_0x00010bfcc4c0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar16 == (undefined **)0x0) {
          ppuVar1 = ppuVar12;
          func_0x000108461f24();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          ppuStack_330 = ppuVar16;
          ppuStack_328 = ppuVar2;
          ppuStack_320 = ppuVar17;
          ppuStack_318 = ppuVar3;
          ppuStack_310 = ppuVar12;
          if ((ppuVar1 == (undefined **)0x0) ||
             (ppuVar17 = ppuVar1, func_0x00010bf529e0(), ppuVar17 == (undefined **)0x0)) {
            unaff_x26 = (undefined **)0x0;
          }
          else {
            unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_alloc();
            func_0x00010bf529e0(ppuVar1);
            ppuVar17 = unaff_x25;
            func_0x00010bffc4a0();
            lStack_2b8 = 0;
            uStack_2c0 = 0;
            uStack_2a8 = 0;
            plStack_2b0 = (long *)0x0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_288 = 0;
            uStack_290 = 0;
            ppuStack_308 = ppuVar17;
            _objc_retain(ppuVar1);
            ppuVar17 = ppuVar1;
            func_0x00010bf52a60();
            puVar15 = PTR___NSConcreteStackBlock_11034bd00;
            if (ppuVar17 != (undefined **)0x0) {
              lVar20 = *plStack_2b0;
              unaff_x25 = &puStack_2f0;
              do {
                ppuVar16 = (undefined **)0x0;
                do {
                  if (*plStack_2b0 != lVar20) {
                    _objc_enumerationMutation(ppuVar1);
                  }
                  unaff_x28 = (undefined **)PTR_PTR_1126b9fa8;
                  uVar7 = *(undefined8 *)(lStack_2b8 + (long)ppuVar16 * 8);
                  puStack_2f0 = puVar15;
                  uStack_2e8 = 0xc2000000;
                  pcStack_2e0 = FUN_1054ee1a4;
                  puStack_2d8 = &UNK_110892590;
                  _objc_retain(ppuVar1);
                  puVar4 = (undefined *)unaff_x28;
                  ppuStack_2d0 = ppuVar1;
                  uStack_2c8 = uVar7;
                  func_0x00010bf09600(unaff_x28);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(ppuStack_308);
                  _objc_release(puVar4);
                  _objc_release(ppuStack_2d0);
                  ppuVar16 = (undefined **)((long)ppuVar16 + 1);
                } while (ppuVar17 != ppuVar16);
                ppuVar17 = ppuVar1;
                func_0x00010bf52a60();
              } while (ppuVar17 != (undefined **)0x0);
            }
            _objc_release(ppuVar1);
            ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR_PTR_1126b9fb0;
            _objc_alloc();
            ppuStack_280 = &PTR____CFConstantStringClassReference_110f769d8;
            puStack_278 = PTR____kCFBooleanTrue_11034ab68;
            puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            ppuStack_2f8 = (undefined **)0x0;
            func_0x00010c008480();
            unaff_x27 = ppuStack_2f8;
            _objc_retain(ppuStack_2f8);
            _objc_release(puVar4);
            if (puVar15 == (undefined *)0x0) {
              unaff_x26 = (undefined **)0x0;
            }
            else {
              ppuStack_300 = (undefined **)0x0;
              puVar4 = puVar15;
              func_0x00010c2858e0();
              unaff_x28 = ppuStack_300;
              _objc_retain(ppuStack_300);
              _objc_release(unaff_x27);
              unaff_x27 = unaff_x28;
              if ((int)puVar4 == 0) {
                unaff_x26 = (undefined **)0x0;
              }
              else {
                _objc_retain(ppuVar17);
                unaff_x26 = ppuVar17;
              }
            }
            _objc_release(puVar15);
            _objc_release(ppuVar17);
            _objc_release(unaff_x27);
            _objc_release(ppuStack_308);
          }
          _objc_release(ppuVar1);
          _objc_release(ppuVar1);
          ppuVar12 = ppuStack_310;
          ppuVar3 = ppuStack_318;
          ppuVar17 = ppuStack_320;
          ppuVar2 = ppuStack_328;
          ppuVar16 = ppuStack_330;
        }
        else {
          unaff_x26 = ppuVar16;
          func_0x00010bfc48a0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(ppuVar16);
      }
      ppuVar16 = ppuVar17 + 7;
      _objc_loadWeakRetained();
      puVar4 = ppuVar17[5];
      puVar15 = ppuVar17[8];
      puVar10 = ppuVar17[9];
      if (unaff_x26 == (undefined **)0x0) {
        uStack_340 = 3;
        ppuStack_338 = &PTR____CFConstantStringClassReference_110de7178;
      }
      else {
        uStack_340 = 0;
        ppuStack_338 = &PTR____CFConstantStringClassReference_110de70d8;
      }
      uVar14 = (ulong)(unaff_x26 != (undefined **)0x0);
      func_0x00010be57e60(ppuVar16);
      _objc_release(ppuVar16);
      ppuVar13 = ppuVar2;
      (**(code **)(ppuVar17[6] + 0x10))(ppuVar17[6],unaff_x26);
      _objc_release(unaff_x26);
      param_2 = ppuVar12;
    }
    else {
      ppuVar16 = ppuVar17 + 7;
      _objc_loadWeakRetained();
      puVar4 = ppuVar17[5];
      puVar15 = ppuVar17[8];
      puVar10 = ppuVar17[9];
      uStack_340 = 3;
      ppuStack_338 = &PTR____CFConstantStringClassReference_110de7158;
      uVar14 = 0;
      func_0x00010be57e60();
      _objc_release(ppuVar16);
      ppuVar13 = ppuVar2;
      (**(code **)(ppuVar17[6] + 0x10))(ppuVar17[6],0);
      param_2 = ppuVar12;
    }
    ppuVar12 = ppuVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1f0) {
      ___stack_chk_fail();
      __Unwind_Resume();
      pcStack_348 = FUN_1054f2a54;
      ppuStack_3a0 = unaff_x28;
      ppuStack_398 = unaff_x27;
      ppuStack_390 = unaff_x26;
      ppuStack_388 = unaff_x25;
      ppuStack_380 = ppuVar1;
      ppuStack_378 = ppuVar16;
      ppuStack_370 = ppuVar2;
      ppuStack_368 = ppuVar17;
      ppuStack_360 = ppuVar3;
      ppuStack_358 = param_2;
      ppuStack_350 = &puStack_180;
      _objc_retain(ppuVar13);
      _objc_retain(puVar15);
      _objc_retain(uVar14);
      ppuVar1 = ppuVar13;
      func_0x00010c0c5180(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22e460(ppuVar13);
      ppuVar17 = ppuVar12;
      func_0x00010be3ef60();
      _objc_release(ppuVar1);
      if ((int)ppuVar17 == 0) {
        _objc_initWeak(auStack_3b0,ppuVar12);
        puVar5 = PTR_PTR_1126b08b8;
        _objc_alloc();
        ppuVar1 = ppuVar13;
        func_0x00010c0c5180(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0295e0();
        _objc_release(ppuVar1);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = 0;
        FUN_1054ee1b0(0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        ppuVar17 = ppuVar12;
        func_0x00010bdd6960();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(uVar7);
        puStack_3f8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_3f0 = 0xc2000000;
        pcStack_3e8 = FUN_1054f2ea8;
        puStack_3e0 = &UNK_1108927a0;
        _objc_retain(ppuVar13);
        ppuStack_3d8 = ppuVar13;
        _objc_copyWeak(auStack_3c0,auStack_3b0);
        _objc_retain(puVar6);
        puStack_3d0 = puVar6;
        puStack_3b8 = puVar10;
        _objc_retain(uVar14);
        ppuVar1 = &puStack_3f8;
        uStack_3c8 = uVar14;
        _objc_retainBlock();
        func_0x00010c0c6c20(ppuVar13);
        func_0x00010bf1f140();
        ppuVar16 = ppuVar17;
        func_0x00010c11fca0(ppuVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa96c0();
        _objc_release(ppuVar16);
        ppuVar16 = ppuVar13;
        func_0x00010c0cb8c0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001054ee0d0(puVar4,ppuVar16,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar16);
        puVar9 = ppuVar12[3];
        func_0x00010c269d40(puVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar13;
        func_0x00010bf4cce0(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar13;
        func_0x00010c086560(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar13;
        func_0x00010c085300(ppuVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf65600(0x4132750000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar4;
        func_0x00010bf63640();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar9;
        func_0x00010bf889a0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar10);
        _objc_release(ppuVar3);
        _objc_release(ppuVar12);
        _objc_release(ppuVar16);
        _objc_release(puVar9);
        _objc_release(puVar4);
        _objc_release(ppuVar1);
        _objc_release(uStack_3c8);
        _objc_release(puStack_3d0);
        _objc_destroyWeak(auStack_3c0);
        _objc_release(ppuStack_3d8);
        _objc_release(ppuVar17);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_destroyWeak(auStack_3b0);
      }
      else {
        (**(code **)(uVar14 + 0x10))(uVar14,0,0);
        puVar11 = PTR_PTR_1126b2798;
        _objc_opt_new(PTR_PTR_1126b2798);
      }
      _objc_release(uVar14);
      _objc_release(puVar15);
      _objc_release(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054f25d4; end: 1054f2a53;  */

void FUN_1054f25d4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 uVar17;
  undefined *unaff_x28;
  undefined *puStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [8];
  undefined8 uStack_248;
  undefined1 auStack_240 [16];
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
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
  undefined **ppuStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfcaaa0();
  puVar2 = param_2;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar2;
  func_0x00010c09c1e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010bfc68c0();
    if ((int)puVar1 == 0) {
      unaff_x26 = param_2;
      func_0x00010b7f5374();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_2;
      func_0x00010bfcc4c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        unaff_x24 = param_2;
        func_0x000108461f24();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puStack_1c0 = puVar1;
        puStack_1b8 = puVar15;
        lStack_1b0 = param_1;
        puStack_1a8 = puVar2;
        puStack_1a0 = param_2;
        if ((unaff_x24 == (undefined *)0x0) ||
           (puVar1 = unaff_x24, func_0x00010bf529e0(), puVar1 == (undefined *)0x0)) {
          unaff_x26 = (undefined *)0x0;
        }
        else {
          unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc();
          func_0x00010bf529e0(unaff_x24);
          ppuVar3 = unaff_x25;
          func_0x00010bffc4a0();
          lStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          plStack_140 = (long *)0x0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          ppuStack_198 = ppuVar3;
          _objc_retain(unaff_x24);
          puVar2 = unaff_x24;
          func_0x00010bf52a60();
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          if (puVar2 != (undefined *)0x0) {
            lVar16 = *plStack_140;
            unaff_x25 = &puStack_180;
            do {
              puVar15 = (undefined *)0x0;
              do {
                if (*plStack_140 != lVar16) {
                  _objc_enumerationMutation(unaff_x24);
                }
                unaff_x28 = PTR_PTR_1126b9fa8;
                uVar17 = *(undefined8 *)(lStack_148 + (long)puVar15 * 8);
                puStack_180 = puVar1;
                uStack_178 = 0xc2000000;
                pcStack_170 = FUN_1054ee1a4;
                puStack_168 = &UNK_110892590;
                _objc_retain(unaff_x24);
                puVar4 = unaff_x28;
                puStack_160 = unaff_x24;
                uStack_158 = uVar17;
                func_0x00010bf09600(unaff_x28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(ppuStack_198);
                _objc_release(puVar4);
                _objc_release(puStack_160);
                puVar15 = puVar15 + 1;
              } while (puVar2 != puVar15);
              puVar2 = unaff_x24;
              func_0x00010bf52a60();
            } while (puVar2 != (undefined *)0x0);
          }
          _objc_release(unaff_x24);
          puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_PTR_1126b9fb0;
          _objc_alloc();
          ppuStack_110 = &PTR____CFConstantStringClassReference_110f769d8;
          puStack_108 = PTR____kCFBooleanTrue_11034ab68;
          puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          puStack_188 = (undefined *)0x0;
          func_0x00010c008480();
          unaff_x27 = puStack_188;
          _objc_retain(puStack_188);
          _objc_release(puVar15);
          if (puVar2 == (undefined *)0x0) {
            unaff_x26 = (undefined *)0x0;
          }
          else {
            puStack_190 = (undefined *)0x0;
            puVar15 = puVar2;
            func_0x00010c2858e0();
            unaff_x28 = puStack_190;
            _objc_retain(puStack_190);
            _objc_release(unaff_x27);
            unaff_x27 = unaff_x28;
            if ((int)puVar15 == 0) {
              unaff_x26 = (undefined *)0x0;
            }
            else {
              _objc_retain(puVar1);
              unaff_x26 = puVar1;
            }
          }
          _objc_release(puVar2);
          _objc_release(puVar1);
          _objc_release(unaff_x27);
          _objc_release(ppuStack_198);
        }
        _objc_release(unaff_x24);
        _objc_release(unaff_x24);
        param_2 = puStack_1a0;
        puVar2 = puStack_1a8;
        param_1 = lStack_1b0;
        puVar15 = puStack_1b8;
        puVar1 = puStack_1c0;
      }
      else {
        unaff_x26 = puVar1;
        func_0x00010bfc48a0();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar1);
    }
    lVar16 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    if (unaff_x26 == (undefined *)0x0) {
      uStack_1d0 = 3;
      ppuStack_1c8 = &PTR____CFConstantStringClassReference_110de7178;
    }
    else {
      uStack_1d0 = 0;
      ppuStack_1c8 = &PTR____CFConstantStringClassReference_110de70d8;
    }
    uVar14 = (ulong)(unaff_x26 != (undefined *)0x0);
    func_0x00010be57e60(lVar16);
    _objc_release(lVar16);
    puVar1 = puVar15;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),unaff_x26);
    _objc_release(unaff_x26);
  }
  else {
    lVar16 = param_1 + 0x38;
    _objc_loadWeakRetained();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    uStack_1d0 = 3;
    ppuStack_1c8 = &PTR____CFConstantStringClassReference_110de7158;
    uVar14 = 0;
    func_0x00010be57e60();
    _objc_release(lVar16);
    puVar1 = puVar15;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_1d8 = FUN_1054f2a54;
  puStack_230 = unaff_x28;
  puStack_228 = unaff_x27;
  puStack_220 = unaff_x26;
  ppuStack_218 = unaff_x25;
  puStack_210 = unaff_x24;
  lStack_208 = lVar16;
  puStack_200 = puVar15;
  lStack_1f8 = param_1;
  puStack_1f0 = puVar2;
  puStack_1e8 = param_2;
  puStack_1e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(uVar17);
  _objc_retain(uVar14);
  puVar2 = puVar1;
  func_0x00010c0c5180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22e460(puVar1);
  puVar15 = puVar4;
  func_0x00010be3ef60();
  _objc_release(puVar2);
  if ((int)puVar15 == 0) {
    _objc_initWeak(auStack_240,puVar4);
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    puVar15 = puVar1;
    func_0x00010c0c5180(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(puVar15);
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0;
    FUN_1054ee1b0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bdd6960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar5);
    puStack_288 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_280 = 0xc2000000;
    pcStack_278 = FUN_1054f2ea8;
    puStack_270 = &UNK_1108927a0;
    _objc_retain(puVar1);
    puStack_268 = puVar1;
    _objc_copyWeak(auStack_250,auStack_240);
    _objc_retain(puVar15);
    puStack_260 = puVar15;
    uStack_248 = uVar12;
    _objc_retain(uVar14);
    ppuVar3 = &puStack_288;
    uStack_258 = uVar14;
    _objc_retainBlock();
    func_0x00010c0c6c20(puVar1);
    func_0x00010bf1f140();
    puVar6 = puVar7;
    func_0x00010c11fca0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa96c0();
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010c0cb8c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001054ee0d0(uVar8,puVar6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar9 = *(undefined **)(puVar4 + 0x18);
    func_0x00010c269d40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4cce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010c086560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c085300(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4132750000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar8;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010bf889a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(ppuVar3);
    _objc_release(uStack_258);
    _objc_release(puStack_260);
    _objc_destroyWeak(auStack_250);
    _objc_release(puStack_268);
    _objc_release(puVar7);
    _objc_release(puVar15);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_240);
  }
  else {
    (**(code **)(uVar14 + 0x10))(uVar14,0,0);
    puVar13 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
  }
  _objc_release(uVar14);
  _objc_release(uVar17);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1054f2a54; end: 1054f2ea7; -[SCChatContentDeliveryImpl _retrieveContentForMedia:analyticsMessageId:messageType:requestSource:fetchPriority:completion:] */

void FUN_1054f2a54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  uVar4 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22e460(param_3);
  lVar1 = param_1;
  func_0x00010be3ef60();
  _objc_release(uVar4);
  if ((int)lVar1 == 0) {
    _objc_initWeak(auStack_70,param_1);
    puVar2 = PTR_PTR_1126b08b8;
    _objc_alloc();
    uVar4 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0295e0();
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    FUN_1054ee1b0(0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bdd6960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(uVar4);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1054f2ea8;
    puStack_a0 = &UNK_1108927a0;
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(puVar3);
    puStack_90 = puVar3;
    uStack_78 = param_6;
    _objc_retain(param_8);
    ppuVar6 = &puStack_b8;
    lStack_88 = param_8;
    _objc_retainBlock();
    func_0x00010c0c6c20(param_3);
    func_0x00010bf1f140();
    lVar7 = lVar1;
    func_0x00010c11fca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa96c0();
    _objc_release(lVar7);
    uVar4 = param_3;
    func_0x00010c0cb8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001054ee0d0(param_5,uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar8 = *(undefined **)(param_1 + 0x18);
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf4cce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_3;
    func_0x00010c085300(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4132750000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_5;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010bf889a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(puVar5);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(puVar8);
    _objc_release(param_5);
    _objc_release(ppuVar6);
    _objc_release(lStack_88);
    _objc_release(puStack_90);
    _objc_destroyWeak(auStack_80);
    _objc_release(uStack_98);
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_70);
  }
  else {
    (**(code **)(param_8 + 0x10))(param_8,0,0);
    puVar12 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1054f2ea8; end: 1054f3003;  */

void FUN_1054f2ea8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c09c1e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001054f2f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0,param_3);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0c6c20();
  if (lVar2 - 1U < 0x15) {
    uVar3 = *(undefined8 *)(&UNK_10ddb0ef0 + (lVar2 - 1U) * 8);
  }
  else {
    uVar3 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001085436d4(uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0cb2a0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c22e460(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb9a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be96560(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1054f3004; end: 1054f3183; -[SCChatContentDeliveryImpl _logDownloadContentForMediaId:mediaType:messageTimestamp:requestSource:loadSource:success:prefetch:] */

void FUN_1054f3004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_8 != 0) {
    FUN_1054f6b24(param_6,param_4,param_7,param_5);
  }
  puVar1 = PTR_PTR_1126ba168;
  func_0x00010bf88a00(PTR_PTR_1126ba168);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf36260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054f3184; end: 1054f3437; -[SCChatContentDeliveryImpl _logRetrieveContentForMediaId:mediaType:messageTimestamp:requestSource:loadSource:success:error:message:] */

void FUN_1054f3184(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ba168;
  _objc_retain(param_11);
  func_0x00010c13e400(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  if (param_8 == 0) {
    uVar2 = param_3;
    func_0x00010bfda7c0();
    if ((((int)uVar2 == 0) && (uVar2 = param_3, func_0x00010bfda7c0(), (int)uVar2 == 0)) &&
       (uVar2 = param_3, func_0x00010bfda7c0(), (int)uVar2 == 0)) {
      puVar5 = PTR_PTR_1126ba138;
      func_0x00010bddce40(PTR_PTR_1126ba138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ac460(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    else {
      func_0x00010c2ac460(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
    }
    _objc_release(puVar5);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar5);
    FUN_1054f6b24(param_6,param_4,param_7,param_5);
  }
  puVar1 = puVar6;
  func_0x00010c2ac460(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_11);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf36260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054f3438; end: 1054f3793; -[SCChatContentDeliveryImpl _generateThumbnailAndSaveWithMediaIfVideoForChatMedia:result:bundleContentKey:publisher:requestSource:completionBlock:] */

void FUN_1054f3438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_70,param_1);
  func_0x00010be41ce0();
  uVar1 = param_3;
  func_0x00010c0ef6e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 1;
  func_0x0001085436d4(1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x000108543920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 4;
  func_0x0001085436d4(4,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 3;
  func_0x0001085436d4(3,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  func_0x00010c0c6c20();
  uVar10 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x0001085438ec();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_70);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uStack_78 = param_7;
  _objc_retain(param_8);
  func_0x00010be1c180(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054f3794; end: 1054f38b3;  */

void FUN_1054f3794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfc79a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c1e0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0c5180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0cb9a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be57e60(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),param_2,param_3,param_4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054f38b4; end: 1054f3b07; -[SCChatContentDeliveryImpl _generateThumbnailAndSaveWithMediaIfVideoForStoryMediaId:mediaType:result:bundleContentKey:publisher:requestSource:completionBlock:] */

void FUN_1054f38b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = 1;
  func_0x000108543814(1,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 2;
  func_0x000108543814(2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 3;
  func_0x000108543814(3,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x0001085438ec();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_copyWeak(auStack_88,auStack_70);
  _objc_retain(param_3);
  uStack_80 = param_4;
  uStack_78 = param_8;
  _objc_retain(param_9);
  func_0x00010be1c180(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054f3b08; end: 1054f3bab;  */

void FUN_1054f3b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc79a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c1e0();
  _objc_release(uVar1);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be57e60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001054f3ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_3);
  return;
}



/* Entry: 1054f3bac; end: 1054f3bd3; +[SCChatContentDeliveryImpl _chatMediaContentErrorToString:] */

undefined ** FUN_1054f3bac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0xb) {
    return (undefined **)(&PTR_PTR_110892950)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dd32f8;
}



/* Entry: 1054f3bd4; end: 1054f45f3; -[SCChatContentDeliveryImpl _generateThumbnailAndSaveWithMediaIfVideoForResult:mediaId:contentCacheId:overlayCacheId:overlayContent:lensAssetCacheId:thumbnailCacheId:containsVideo:isEligibleForStreaming:mediaType:bundleContentKey:publisher:videoFileName:requestSource:completionBlock:] */

void FUN_1054f3bd4(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined **param_4,
                  undefined **param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,uint param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,long param_18)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined **ppuVar15;
  long lVar16;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined **ppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  ulong uVar14;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_18);
  ppuVar2 = param_4;
  func_0x00010bfc79a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c1e0();
  _objc_release(ppuVar2);
  ppuVar2 = param_4;
  func_0x00010bfcaaa0();
  ppuVar4 = param_4;
  if (ppuVar2 == (undefined **)0x0) {
    puVar12 = param_2;
    _objc_initWeak(auStack_160,param_2);
    ppuVar2 = param_4;
    func_0x00010bfc68c0();
    if ((int)ppuVar2 == 0) {
      ppuVar2 = param_4;
      func_0x00010bfc68a0();
      if ((param_11 >> 8 & 0xff & (uint)ppuVar2) == 1) {
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_2 + 8);
        func_0x00010c11de00(uVar10);
        _objc_retainAutoreleasedReturnValue();
        puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_1e8 = 0xc2000000;
        pcStack_1e0 = FUN_1054f45f4;
        puStack_1d8 = &UNK_110892830;
        puVar12 = auStack_160;
        _objc_copyWeak(auStack_180,puVar12);
        _objc_retain(param_5);
        ppuStack_1d0 = param_5;
        _objc_retain(param_6);
        uStack_1c8 = param_6;
        _objc_retain(param_7);
        uStack_1c0 = param_7;
        _objc_retain(param_8);
        lStack_1b8 = param_8;
        _objc_retain(param_9);
        uStack_1b0 = param_9;
        _objc_retain(param_10);
        uStack_168 = (undefined1)param_11;
        uStack_1a8 = param_10;
        uStack_178 = param_13;
        _objc_retain(param_14);
        uStack_1a0 = param_14;
        _objc_retain(param_15);
        uStack_198 = param_15;
        _objc_retain(param_16);
        uStack_190 = param_16;
        uStack_170 = param_17;
        _objc_retain(param_18);
        lStack_188 = param_18;
        func_0x00010c13e420(uVar9);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(lStack_188);
        _objc_release(uStack_190);
        _objc_release(uStack_198);
        _objc_release(uStack_1a0);
        _objc_release(uStack_1a8);
        _objc_release(uStack_1b0);
        _objc_release(lStack_1b8);
        _objc_release(uStack_1c0);
        _objc_release(uStack_1c8);
        _objc_release(ppuStack_1d0);
        _objc_destroyWeak(auStack_180);
        ppuVar4 = &puStack_1f0;
      }
      else {
        lVar16 = param_8;
        func_0x00010c08fa60();
        if (lVar16 == 0) {
          ppuVar2 = param_4;
          func_0x00010b7f5374(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be9a280(param_2);
          _objc_release(ppuVar2);
          ppuVar4 = param_5;
        }
        else {
          ppuVar2 = param_4;
          func_0x00010b7f5374();
          _objc_retainAutoreleasedReturnValue();
          puStack_278 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_270 = 0xc2000000;
          pcStack_268 = FUN_1054f4704;
          puStack_260 = &UNK_110892860;
          puVar12 = auStack_160;
          _objc_copyWeak(auStack_208,puVar12);
          _objc_retain(ppuVar2);
          ppuStack_258 = ppuVar2;
          _objc_retain(param_5);
          ppuStack_250 = param_5;
          _objc_retain(param_6);
          uStack_248 = param_6;
          _objc_retain(param_7);
          uStack_240 = param_7;
          _objc_retain(param_9);
          uStack_238 = param_9;
          _objc_retain(param_10);
          uStack_1f8 = (undefined1)param_11;
          uStack_230 = param_10;
          uStack_200 = param_13;
          _objc_retain(param_14);
          uStack_228 = param_14;
          _objc_retain(param_15);
          uStack_220 = param_15;
          _objc_retain(param_16);
          uStack_218 = param_16;
          _objc_retain(param_18);
          lStack_210 = param_18;
          func_0x00010c13e4e0(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(lStack_210);
          _objc_release(uStack_218);
          _objc_release(uStack_220);
          _objc_release(uStack_228);
          _objc_release(uStack_230);
          _objc_release(uStack_238);
          _objc_release(uStack_240);
          _objc_release(uStack_248);
          _objc_release(ppuStack_250);
          _objc_release(ppuStack_258);
          _objc_destroyWeak(auStack_208);
          _objc_release(ppuVar2);
          ppuVar4 = &puStack_278;
        }
      }
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      uVar9 = param_1;
      _objc_release(puVar3);
      func_0x000108461f24();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar4 == (undefined **)0x0) {
        func_0x00010be57e60(param_2);
        puVar3 = PTR_PTR_1126ba160;
        puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c1277a0(param_1,uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        func_0x00010c0d9840(param_15);
        puVar12 = (undefined1 *)0x0;
        (**(code **)(param_18 + 0x10))(param_18,0,2,0);
      }
      else {
        _objc_retain(ppuVar4);
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_alloc_init();
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        lStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        plStack_140 = (long *)0x0;
        _objc_retain(ppuVar4);
        ppuVar2 = ppuVar4;
        func_0x00010bf52a60();
        if (ppuVar2 != (undefined **)0x0) {
          lVar16 = *plStack_140;
          do {
            ppuVar15 = (undefined **)0x0;
            do {
              if (*plStack_140 != lVar16) {
                _objc_enumerationMutation(ppuVar4);
              }
              uVar14 = *(ulong *)(lStack_148 + (long)ppuVar15 * 8);
              iVar13 = (int)uVar14;
              uVar5 = uVar14;
              func_0x00010bfda7c0();
              ppuVar6 = ppuVar4;
              if ((((uVar5 & 1) == 0) && (func_0x00010bfda7c0(), (uVar14 & 1) == 0)) &&
                 (iVar1 = iVar13, func_0x00010bfda7c0(), iVar1 == 0)) {
                iVar1 = iVar13;
                func_0x00010bfda7c0();
                if (iVar1 != 0) {
                  func_0x00010c0e00e0(ppuVar4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar3);
                  goto LAB_1054f3ed4;
                }
                iVar1 = iVar13;
                func_0x00010bfda7c0();
                if (iVar1 != 0) {
                  func_0x00010c0e00e0(ppuVar4);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar3);
                  goto LAB_1054f3ed4;
                }
                func_0x00010bfda7c0();
                if (iVar13 != 0) {
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  if (ppuVar6 != (undefined **)0x0) {
                    uStack_158 = 0;
                    puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
                    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(puVar3);
                    _objc_release(puVar11);
                  }
                  goto LAB_1054f3ed4;
                }
              }
              else {
                func_0x00010c0e00e0(ppuVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar3);
LAB_1054f3ed4:
                _objc_release(ppuVar6);
              }
              ppuVar15 = (undefined **)((long)ppuVar15 + 1);
            } while (ppuVar2 != ppuVar15);
            ppuVar2 = ppuVar4;
            func_0x00010bf52a60();
          } while (ppuVar2 != (undefined **)0x0);
        }
        _objc_release(ppuVar4);
        _objc_release(ppuVar4);
        puVar11 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9a260(param_2);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar11);
      }
      _objc_release(puVar3);
      _objc_release(ppuVar4);
    }
    _objc_destroyWeak(auStack_160);
  }
  else {
    func_0x00010be57e60(param_2);
    puVar12 = (undefined1 *)0x0;
    (**(code **)(param_18 + 0x10))(param_18,0,3,0);
  }
  _objc_release(param_18);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar4 + 0xe);
  _objc_destroyWeak(auStack_160);
  __Unwind_Resume();
  _objc_retain(puVar12);
  param_4 = param_4 + 0xe;
  _objc_loadWeakRetained(param_4);
  func_0x00010be29ba0();
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054f45f4; end: 1054f4683;  */

void FUN_1054f45f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054f4684; end: 1054f4703;  */

void FUN_1054f4684(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 1054f4704; end: 1054f478b;  */

void FUN_1054f4704(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054f478c; end: 1054f4a73; -[SCChatContentDeliveryImpl _saveToDiskAndGenerateThumbnailIfVideoForNonZipContent:mediaId:contentCacheId:overlayCacheId:overlayData:lensAssetCacheId:thumbnailCacheId:containsVideo:mediaType:bundleContentKey:publisher:videoFileName:completionBlock:] */

void FUN_1054f478c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_initWeak(auStack_80,param_2);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4132750000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  uStack_98 = param_1;
  _objc_retain(param_15);
  _objc_retain(param_17);
  _objc_copyWeak(auStack_a0,auStack_80);
  _objc_retain(param_4);
  _objc_retain(param_8);
  uStack_88 = param_11;
  _objc_retain(param_10);
  uStack_90 = param_13;
  _objc_retain(param_16);
  func_0x00010c14a8a0(param_2);
  _objc_release(puVar2);
  _objc_release(param_16);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_a0);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f4a74; end: 1054f4b83;  */

void FUN_1054f4a74(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ba160;
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c2579c0(uVar3,param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
  if ((param_3 & 1) == 0) {
    (**(code **)(*(long *)(param_2 + 0x50) + 0x10))(*(long *)(param_2 + 0x50),0,4,0);
  }
  else {
    param_2 = param_2 + 0x58;
    _objc_loadWeakRetained(param_2);
    func_0x00010be9a260();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054f4b84; end: 1054f4eaf; -[SCChatContentDeliveryImpl _handleFetchedStreamingContent:success:mediaId:contentCacheId:overlayCacheId:overlayContent:lensAssetCacheId:thumbnailCacheId:containsVideo:mediaType:bundleContentKey:publisher:videoFileName:requestSource:completionBlock:] */

void FUN_1054f4b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,long param_19)

{
  long lVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  if ((param_4 & 1) == 0) {
    (**(code **)(param_19 + 0x10))(param_19,0,9,0);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    lVar1 = param_8;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010be9a280(param_1);
    }
    else {
      _objc_copyWeak(auStack_88,auStack_70);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(param_7);
      _objc_retain(param_9);
      _objc_retain(param_10);
      uStack_78 = param_11;
      uStack_80 = param_13;
      _objc_retain(param_14);
      _objc_retain(param_15);
      _objc_retain(param_16);
      _objc_retain(param_19);
      func_0x00010c13e4e0(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_19);
      _objc_release(param_16);
      _objc_release(param_15);
      _objc_release(param_14);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_7);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_88);
    }
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054f4eb0; end: 1054f4f37;  */

void FUN_1054f4eb0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29ac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054f4f38; end: 1054f50bb; -[SCChatContentDeliveryImpl _handleFetchedOverlayForVideoContent:overlayData:mediaId:contentCacheId:overlayCacheId:lensAssetCacheId:thumbnailCacheId:containsVideo:mediaType:bundleContentKey:publisher:videoFileName:completionBlock:] */

void FUN_1054f4f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  _objc_retain(in_stack_00000030);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    (**(code **)(in_stack_00000030 + 0x10))(in_stack_00000030,0,10,0);
  }
  else {
    func_0x00010be9a280(param_1);
  }
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054f50bc; end: 1054f5553; -[SCChatContentDeliveryImpl _saveToDiskAndGenerateAndSaveThumbnailIfVideoForContentData:overlayData:metadataDict:mediaId:containsVideo:thumbnailCacheId:mediaType:videoFileName:publisher:withCompletionHandler:] */

void FUN_1054f50bc(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9,
                  ulong param_10,undefined8 param_11,undefined8 param_12,long param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_118;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar6 = param_1;
  _objc_release(puVar1);
  if (param_8 == 0) {
    if ((param_10 < 0x14) && ((1L << (param_10 & 0x3f) & 0x9c080U) != 0)) {
      func_0x00010be1a960(param_2);
    }
    else {
      (**(code **)(param_13 + 0x10))(param_13,1,0,param_6);
    }
    goto LAB_1054f53d4;
  }
  puVar1 = param_2;
  func_0x00010c0c4ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfad180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c0c4ec0();
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = 0;
    puVar3 = puVar1;
    func_0x00010c14a320();
    uStack_118 = uStack_80;
    _objc_retain();
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126ba160;
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    if (((ulong)puVar3 & 1) != 0) goto joined_r0x0001054f5484;
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c2579c0(param_1,uVar6,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c0d9840(param_12);
    (**(code **)(param_13 + 0x10))(param_13,0,5,param_6);
  }
  else {
    uStack_118 = 0;
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
joined_r0x0001054f5484:
    PTR__OBJC_CLASS___UIImage_1126aea68 = puVar1;
    if (param_5 == 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      func_0x00010c14d040(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_2;
      func_0x00010c0c4ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bfad180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    _objc_release(puVar2);
    _objc_initWeak(auStack_88,param_2);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1054f5554;
    puStack_d0 = &UNK_1108928c0;
    _objc_copyWeak(auStack_a0,auStack_88);
    _objc_retain(param_9);
    uStack_c8 = param_9;
    _objc_retain(param_7);
    uStack_c0 = param_7;
    uStack_98 = uVar6;
    _objc_retain(param_12);
    uStack_b8 = param_12;
    _objc_retain(param_13);
    lStack_a8 = param_13;
    _objc_retain(param_6);
    uStack_b0 = param_6;
    uStack_90 = param_1;
    func_0x0001054f6804(param_7,puVar1,puVar4,
                        (uint)(param_10 < 0x16) & 0x3ff6b0U >> (ulong)((uint)param_10 & 0x1f),
                        (uint)(param_10 < 0x13) & 0x7f6b0U >> (ulong)((uint)param_10 & 0x1f),uVar5,
                        &puStack_e8);
    _objc_release(uStack_b0);
    _objc_release(lStack_a8);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar1);
  }
  _objc_release(puVar4);
  _objc_release(uStack_118);
LAB_1054f53d4:
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054f5554; end: 1054f57db;  */

void FUN_1054f5554(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_5);
  puVar4 = PTR_PTR_1126ba160;
  if (param_3 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010bfc0520(uVar3,param_1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x30));
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))
              (*(long *)(param_2 + 0x40),0,param_4,*(undefined8 *)(param_2 + 0x38));
  }
  else {
    lVar1 = param_2 + 0x48;
    _objc_loadWeakRetained(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4132750000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_2 + 0x28);
    _objc_retain(puVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar6);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar3);
    func_0x00010c14a8a0(lVar1);
    _objc_release(puVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
  _objc_release(param_5);
  return;
}



/* Entry: 1054f57dc; end: 1054f582b; -[SCChatContentDeliveryImpl _queueForContentRetrieval:] */

void FUN_1054f57dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  uVar2 = 0;
  if ((param_3 == 0) && ((int)puVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054f582c; end: 1054f5aa7; -[SCChatContentDeliveryImpl _generateAndSaveThumbnailForSpectaclesImageForMediaId:mediaType:contentData:overlayData:metadataDict:thumbnailCacheId:publisher:withCompletionHandler:] */

void FUN_1054f582c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_8);
  _objc_retain(param_6);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  if ((puVar1 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) {
    _objc_retain(param_5);
    puVar4 = param_5;
  }
  else {
    func_0x00010c23d0a0(puVar1);
    puVar3 = puVar2;
    func_0x00010854478c(puVar2,0,puVar1,
                        (uint)(param_4 < 0x13) & 0x7f6b0U >> (ulong)((uint)param_4 & 0x1f));
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x4132750000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_3);
  func_0x00010c14a8a0(param_1);
  _objc_release(param_8);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_5);
  return;
}



/* Entry: 1054f5aa8; end: 1054f5b67;  */

void FUN_1054f5aa8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126ba160;
  uVar1 = 0;
  if ((int)param_3 == 0) {
    uVar1 = 6;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010bfc0520(uVar4,param_1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x28));
  (**(code **)(*(long *)(param_2 + 0x38) + 0x10))
            (*(long *)(param_2 + 0x38),param_3,uVar1,*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1054f5b68; end: 1054f5f77; -[SCChatContentDeliveryImpl imageForContentObject:key:iv:mediaId:localMediaId:conversationId:requestSource:completion:] */

void FUN_1054f5b68(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined **param_5,long param_6,long param_7,long param_8,long param_9,
                  long param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_e8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  if (((((param_3 == 0) == (param_6 != 0)) || (param_6 == 0 && param_7 == 0)) || (param_8 == 0)) ||
     (param_10 == 0)) {
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))(param_10,0);
    }
    param_1 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b08b8;
    _objc_alloc();
    func_0x00010c0295e0();
    lVar2 = param_8;
    FUN_1054ee1b0();
    _objc_retainAutoreleasedReturnValue();
    if (param_9 == 0xf) {
      uStack_e8 = 0x2c;
      FUN_1054ee098();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uStack_e8 = 0;
    }
    lVar3 = param_1;
    func_0x00010bdd6960();
    _objc_retainAutoreleasedReturnValue();
    if (param_4 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar4 = param_4;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
    }
    if (param_5 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar5 = param_5;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
    }
    if (param_7 == 0) {
      uVar8 = uStack_e8;
      func_0x00010bf63640(uStack_e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8b1c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
    }
    else {
      puVar6 = PTR_PTR_1126b08b8;
      _objc_alloc();
      func_0x00010c0295e0();
      _objc_initWeak(auStack_70,param_1);
      lVar7 = *(long *)(param_1 + 0x18);
      func_0x00010c269d40(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_10);
      _objc_copyWeak(auStack_78,auStack_70);
      _objc_retain(puVar1);
      _objc_retain(param_3);
      _objc_retain(ppuVar4);
      _objc_retain(ppuVar5);
      _objc_retain(lVar3);
      _objc_retain(uStack_e8);
      param_1 = lVar7;
      func_0x00010c13e4a0(lVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_e8);
      _objc_release(lVar3);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      _objc_release(param_3);
      _objc_release(puVar1);
      _objc_destroyWeak(auStack_78);
      _objc_release(param_10);
      _objc_release(lVar7);
      _objc_destroyWeak(auStack_70);
      _objc_release(puVar6);
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(lVar3);
    _objc_release(uStack_e8);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1054f5f78; end: 1054f604f;  */

void FUN_1054f5f78(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    puVar1 = (undefined *)(param_1 + 0x58);
    _objc_loadWeakRetained(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf63640(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8b1c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x50);
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054f6050; end: 1054f624f; -[SCChatContentDeliveryImpl _remoteImageForContentKey:contentObject:key:iv:requestContext:serializedFeatureMetadata:completion:] */

void FUN_1054f6050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,uVar1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_9);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_7);
  uVar1 = uVar2;
  func_0x00010bf889a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_9);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054f6250; end: 1054f6317;  */

void FUN_1054f6250(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054f6288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    return;
  }
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010c13e4a0(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1054f6318; end: 1054f6363;  */

void FUN_1054f6318(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054f6364; end: 1054f64cb; -[SCChatContentDeliveryImpl saveContentFromExtension:media:boltContentId:completion:] */

void FUN_1054f6364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0c6c20(param_4);
  uVar2 = param_4;
  func_0x00010c0cb9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_1054f6b24(7,uVar1,2,uVar2);
  _objc_release(uVar2);
  uVar1 = param_4;
  func_0x00010c0cb2a0(param_4);
  uVar2 = param_4;
  func_0x00010c0cb8c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001054ee0d0(uVar1,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c181f40(uVar1);
  _objc_release(param_5);
  uVar2 = param_4;
  func_0x00010c0c5180(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be994a0(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054f64cc; end: 1054f655f; -[SCChatContentDeliveryImpl logConsumedForMediaId:useCase:] */

void FUN_1054f64cc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b08b8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c0295e0();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3980();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1054f6560; end: 1054f6607; -[SCChatContentDeliveryImpl .cxx_destruct] */

void FUN_1054f6560(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054f6608; end: 1054f663b; +[SCChatContentDeliveryRequestCreationHelper boltTrackingMediaTypeForMessageBodyType:mediaType:] */

undefined8 FUN_1054f6608(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 8) {
    return 5;
  }
  if (param_4 + 1U < 0x17) {
    return *(undefined8 *)(&UNK_10ddb0f98 + (param_4 + 1U) * 8);
  }
  return 2;
}



/* Entry: 1054f663c; end: 1054f669f;  */

void FUN_1054f663c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  func_0x0001085438ec(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bd80(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054f66a0; end: 1054f6abb;  */

void FUN_1054f66a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_retain();
  uVar1 = 0;
  func_0x0001085436d4(0,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 1;
  func_0x0001085436d4(1,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 3;
  func_0x0001085436d4(3,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 2;
  func_0x0001085436d4(2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 4;
  func_0x0001085436d4(4,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 5;
  func_0x0001085436d4(5,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 6;
  func_0x0001085436d4(6,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c226900(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1054f6abc; end: 1054f6acb; -[SCChatV3MediaFileManager saveData:toMediaDirectoryWithFilename:error:] */

void FUN_1054f6abc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14a390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b33d0,PTR_s_saveData_DEPRECATED_toMediaDirec_112630300);
  return;
}



/* Entry: 1054f6acc; end: 1054f6adb; -[SCChatV3MediaFileManager removeDataWithFilename:error:] */

void FUN_1054f6acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b33d0,PTR_s_removeDataWithFilename_DEPRECATE_112628988,param_3,param_4,1);
  return;
}



/* Entry: 1054f6adc; end: 1054f6aeb; -[SCChatV3MediaFileManager fileURLForFilenameIfExists:] */

void FUN_1054f6adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b33d0,PTR_s_fileURLForFilenameIfExists_DEPRE_1125c8e10,param_3,1);
  return;
}



/* Entry: 1054f6aec; end: 1054f6b23; -[SCChatV3MediaFileManager fileExistsWithFilename:] */

void FUN_1054f6aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfacc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b33d0,PTR_s_fileExistsWithFilename_DEPRECATE_1125c8cc0,param_3,1);
  return;
}



/* Entry: 1054f6b24; end: 1054f6c77;  */

void FUN_1054f6b24(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ba178;
  _objc_opt_new(PTR_PTR_1126ba178);
  ppuVar4 = &PTR____CFConstantStringClassReference_110de3db8;
  if (param_3 != 1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110de7698;
  }
  if (param_2 + 1U < 0x17) {
    ppuVar5 = (undefined **)(&PTR_PTR_110892a30)[param_2 + 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db6dd8;
  }
  _objc_retain(ppuVar4);
  uVar2 = param_1;
  func_0x0001054f6afc(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1054f6f68(puVar1,ppuVar4,ppuVar5,uVar2,1);
  _objc_release(ppuVar4);
  _objc_release(uVar2);
  if ((param_3 == 2) && (param_4 != 0)) {
    if (param_2 + 1U < 0x17) {
      ppuVar4 = (undefined **)(&PTR_PTR_110892a30)[param_2 + 1U];
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110db6dd8;
    }
    func_0x0001054f6afc(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65820(PTR__OBJC_CLASS___NSDate_1126ae770);
    FUN_1054f7228(puVar1,ppuVar4,param_1,puVar3);
    _objc_release(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054f6c78; end: 1054f6ca3; +[SCGrapheneChatContentDeliveryMetric downloadChatMediaCm] */

void FUN_1054f6c78(void)

{
  _objc_alloc(PTR_PTR_1126ba168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054f6ca4; end: 1054f6ccf; +[SCGrapheneChatContentDeliveryMetric retrieveChatMediaCm] */

void FUN_1054f6ca4(void)

{
  _objc_alloc(PTR_PTR_1126ba168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054f6cd0; end: 1054f6cfb; +[SCGrapheneChatContentDeliveryMetric chatMediaImagePrepLatency] */

void FUN_1054f6cd0(void)

{
  _objc_alloc(PTR_PTR_1126ba168);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054f6cfc; end: 1054f6d9b; -[SCGrapheneChatContentDeliveryMetric description] */

void FUN_1054f6cfc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110de76b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110de76b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8bf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}


