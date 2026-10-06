/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106666a54; end: 106666b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cc650;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c009d80();
  lVar3 = (long)_DAT_11274d27c;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c15d260(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106666b18; end: 106666c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666b18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cc650;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c009d80();
  _objc_release(param_6);
  _objc_release(param_5);
  lVar3 = (long)_DAT_11274d27c;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c15d260(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106666c18; end: 106666da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cc650;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010c009dc0();
  lVar3 = (long)_DAT_11274d27c;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined **)(*(long *)(param_1 + 0x20) + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c15d280(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106666da4; end: 106666def; -[SCDeeplinkSendToController didFinishShareSessionWithRecipientsCount:groupsCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666da4(long param_1)

{
  param_1 = param_1 + _DAT_11274d268;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106666df0; end: 106666e7b; -[SCDeeplinkSendToController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106666df0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274d274,0);
  _objc_storeStrong(param_1 + _DAT_11274d278,0);
  _objc_storeStrong(param_1 + _DAT_11274d270,0);
  _objc_storeStrong(param_1 + _DAT_11274d26c,0);
  _objc_storeStrong(param_1 + _DAT_11274d27c,0);
  _objc_destroyWeak(param_1 + _DAT_11274d268);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274d264,0);
  return;
}



/* Entry: 106666e7c; end: 106666e9f;  */

undefined8 FUN_106666e7c(long param_1)

{
  if (param_1 - 1U < 6) {
    return *(undefined8 *)(&UNK_10dddd2f0 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106666ea0; end: 10666711f; -[SCDeeplinkShareController initWithDeeplinkURL:attachedImageFuture:snapSource:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:posterId:snapId:] */

undefined1 *
FUN_106666ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f23c8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bdb40);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_8;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c07b760();
    *(char *)((long)puVar1 + 0x90) = (char)uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be810);
    uVar2 = uVar3;
    func_0x00010beecc40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106667120; end: 10666712f;  */

void FUN_106667120(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_legacySendToScopeLauncher_112601750);
  return;
}



/* Entry: 106667130; end: 106667243; -[SCDeeplinkShareController initWithDeeplinkURL:attachedImage:snapSource:urlPreviewProvider:simpleContentFetcher:externalLinkSendingService:posterId:snapId:] */

undefined8
FUN_106667130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae558;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bfe9ca0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009dc0(param_1,param_2,param_3,puVar1,param_5,param_6,param_7,param_8,param_9,
                      param_10);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106667244; end: 10666734b; -[SCDeeplinkShareController initWithDeeplinkURL:attachedImage:snapSource:urlPreviewProvider:simpleContentFetcher:offPlatformLinkGenerationService:externalLinkSendingService:] */

long FUN_106667244(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae558;
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bfe9ca0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c009dc0(param_1,param_2,param_3,puVar1,param_5,param_6,param_7,param_9,0,0);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_8;
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10666734c; end: 10666760b; -[SCDeeplinkShareController sendToFromViewController:lensMetadata:] */

void FUN_10666734c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cc688;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c01ca40();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar9);
  *(undefined8 *)(param_1 + 0x28) = 1;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar10);
  uVar11 = *(ulong *)(param_1 + 0x28);
  uVar3 = uVar11;
  FUN_106666e7c();
  puVar4 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10666760c;
  puStack_90 = &UNK_1109322d8;
  uStack_88 = param_4;
  uStack_80 = uVar10;
  uStack_78 = uVar3;
  _objc_retain(uVar10);
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar4,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1a18;
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = param_4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048780(puVar5,param_2,uVar9,8,0x49,uVar11 == 2 || (uVar11 & 0xfffffffffffffffb) == 1,
                      puVar6);
  _objc_release(puVar6);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126b2498;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  puVar7 = puVar5;
  func_0x00010c15d5c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037ea0(puVar6,param_2,uVar2,uVar9,puVar7,0,0);
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126b0808;
  _objc_alloc();
  func_0x00010c051820();
  func_0x00010be47ac0(param_1,param_2,param_3,puVar1,puVar5,puVar7);
  _objc_release(param_3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar10);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126b24a8;
  _objc_alloc(PTR_PTR_1126b24a8);
  uVar9 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c094540(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c83e0;
  func_0x00010bef2c40(PTR_PTR_1126c83e0,param_2,*(undefined8 *)(puVar1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c2813a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024300(puVar5,param_2,uVar9,puVar4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(uVar9);
  puVar6 = PTR_PTR_1126b24b0;
  _objc_alloc(PTR_PTR_1126b24b0);
  func_0x00010c027880();
  puVar4 = PTR_PTR_1126ae558;
  puVar7 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar9 = *(undefined8 *)(puVar1 + 0x28);
  puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010c04e820();
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c0d4f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar7,param_2,uVar9,puVar8,uVar2,*(undefined8 *)(puVar1 + 0x30),0,puVar6);
  func_0x00010bfe9ca0(puVar4,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10666760c; end: 1066677a7;  */

void FUN_10666760c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b24a8;
  _objc_alloc(PTR_PTR_1126b24a8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c83e0;
  func_0x00010bef2c40(PTR_PTR_1126c83e0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2813a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bef4d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c024300(puVar1,param_2,uVar2,puVar3,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b24b0;
  _objc_alloc(PTR_PTR_1126b24b0);
  func_0x00010c027880();
  puVar3 = PTR_PTR_1126ae558;
  puVar6 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
  func_0x00010c04e820();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d4f60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar6,param_2,uVar2,puVar7,uVar8,*(undefined8 *)(param_1 + 0x30),0,puVar5);
  func_0x00010bfe9ca0(puVar3,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066677a8; end: 1066678f3; -[SCDeeplinkShareController sendToFromViewController:deepLinkType:url:attachedImage:] */

void FUN_1066677a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c082f40();
  uVar4 = param_5;
  if ((int)uVar3 != 0) {
    if (param_6 == 0) {
      puVar2 = PTR_PTR_1126b5860;
      _objc_alloc(PTR_PTR_1126b5860);
      func_0x00010c057cc0();
      func_0x00010c18b5e0();
    }
    else {
      puVar2 = PTR_PTR_1126b4458;
      _objc_alloc(PTR_PTR_1126b4458);
      func_0x00010c01c300();
    }
    if (param_4 == 6) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfbf800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      _objc_release(uVar3);
    }
    func_0x00010bea0ac0(param_1,param_2,param_3,param_4,uVar4,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066678f4; end: 1066679ef; -[SCDeeplinkShareController sendToFromViewController:deepLinkType:url:attachedImageFuture:] */

void FUN_1066678f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c082f40();
  if ((int)uVar2 != 0) {
    if (param_6 == 0) {
      puVar3 = PTR_PTR_1126b5860;
      _objc_alloc(PTR_PTR_1126b5860);
      func_0x00010c057cc0();
      func_0x00010c18b5e0();
    }
    else {
      puVar3 = PTR_PTR_1126cc688;
      _objc_alloc(PTR_PTR_1126cc688);
      func_0x00010c01ca40();
    }
    func_0x00010bea0ac0(param_1,param_2,param_3,param_4,param_5,puVar3);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066679f0; end: 106667c37; -[SCDeeplinkShareController _sendToFromViewController:deepLinkType:url:previewModel:] */

void FUN_1066679f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_5;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c082f40();
  if ((int)uVar7 != 0) {
    uVar7 = param_4;
    FUN_106666e7c();
    puVar3 = PTR_PTR_1126ae720;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106667c38;
    puStack_80 = &UNK_1109322d8;
    _objc_retain(uVar2);
    uStack_78 = uVar2;
    _objc_retain(param_5);
    uStack_70 = param_5;
    uStack_68 = uVar7;
    func_0x00010bf11fe0(puVar3,param_2,&puStack_98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1a18;
    _objc_alloc(PTR_PTR_1126b1a18);
    func_0x00010c048780();
    puVar5 = PTR_PTR_1126b2498;
    _objc_alloc(PTR_PTR_1126b2498);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar6 = puVar4;
    func_0x00010c15d5c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037ea0(puVar5,param_2,uVar7,uVar1,puVar6,0,0);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b0808;
    _objc_alloc(PTR_PTR_1126b0808);
    func_0x00010c051820();
    func_0x00010be47ac0(param_1,param_2,param_3,param_6,puVar4,puVar6);
    _objc_retain(uVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    _objc_release(uVar7);
    *(undefined8 *)(param_1 + 0x28) = param_4;
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
  }
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106667c38; end: 106667ca7;  */

void FUN_106667c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae558;
  puVar1 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  func_0x00010c051840();
  func_0x00010bfe9ca0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106667ca8; end: 106667e67; -[SCDeeplinkShareController _launchLegacySendToScopeFromViewController:previewViewModel:attribution:shareSheetConfiguration:] */

void FUN_106667ca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c076220();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126b1a20;
    _objc_alloc(PTR_PTR_1126b1a20);
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      func_0x00010c01d640(puVar3,param_2,1,1,0,0);
    }
    else {
      lVar4 = param_6;
      func_0x00010c26b9e0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d640(puVar3,param_2,1,1,0,lVar4 != 0);
      _objc_release(lVar4);
    }
    if (*(long *)(param_1 + 0x68) == 0) {
      puVar5 = PTR_PTR_1126b1a28;
      _objc_alloc();
      func_0x00010c038ea0();
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar5;
      _objc_release(uVar6);
    }
    puVar5 = PTR_PTR_1126b1a30;
    _objc_alloc(PTR_PTR_1126b1a30);
    func_0x00010bff5040();
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010bfe63a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106667e68; end: 106668077; -[SCDeeplinkShareController _sendDeeplinkShareToRecipients:groups:additionalText:textConfiguration:] */

void FUN_106667e68(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (((lVar1 != 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = param_4;
    func_0x000107e327dc(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108605534();
    lVar2 = param_3;
    func_0x00010bf529e0();
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126be718);
    lVar3 = lVar2;
    func_0x00010beecc40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bfe63a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c246920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    uVar6 = param_6;
    _objc_retain(param_6);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar5);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106668078; end: 10666807f;  */

void FUN_106668078(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf501b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_conversationDestinationParser_1125b1a10);
  return;
}



/* Entry: 106668080; end: 106668163;  */

void FUN_106668080(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x0001086063f4(uVar2,*(undefined8 *)(param_1 + 0x38),0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9ee20(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106668164; end: 106668317; -[SCDeeplinkShareController _sendDeeplinkShareToSortedRecipients:additionalText:destinationInfo:textConfiguration:] */

void FUN_106668164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) {
    func_0x00010be9ee00(param_1,param_2,param_3,param_4,param_5,0);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1066682a0;
    puStack_68 = &UNK_110932328;
    uStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uVar1 = param_5;
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297280(param_6,param_2,&puStack_80,uVar1,1);
    _objc_release(uVar1);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106668318; end: 1066685cb; -[SCDeeplinkShareController _sendDeeplinkShareToSortedRecipients:additionalText:destinationInfo:lensLoggingInfo:] */

void FUN_106668318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac2e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cc690;
  _objc_alloc(PTR_PTR_1126cc690);
  uVar3 = param_6;
  func_0x00010bef2c20(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010bef4d20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff16c0(puVar2);
  func_0x00010c2b9c80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf37880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010c15d840(uVar4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066685cc; end: 106668603;  */

void FUN_1066685cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2ff40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106668604; end: 106668763; -[SCDeeplinkShareController _handleShareDeeplinkComplete:] */

void FUN_106668604(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126afca8;
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 < 4) {
    if (lVar5 - 2U < 2) {
LAB_106668664:
      if (param_3 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e582b8;
        goto LAB_1066686e0;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e58298;
    }
    else {
      if (lVar5 != 1) goto LAB_10666874c;
      if (param_3 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e58278;
        goto LAB_1066686e0;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e58258;
    }
LAB_10666869c:
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar5 != 4) {
      if (lVar5 != 5) goto LAB_10666874c;
      goto LAB_106668664;
    }
    if (param_3 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dbbb98;
      goto LAB_10666869c;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1e378;
LAB_1066686e0:
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
LAB_10666874c:
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 106668764; end: 10666887b; -[SCDeeplinkShareController didUpdateUrlSummary:] */

void FUN_106668764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1066687ec;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10666887c; end: 10666887f;  */

void FUN_10666887c(void)

{
  return;
}



/* Entry: 106668880; end: 1066688af;  */

void FUN_106668880(long param_1,undefined8 param_2)

{
  func_0x00010c1e2480(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bf03410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
             PTR_s_animateWithDuration_animations__11259e6a8,&PTR___NSConcreteGlobalBlock_110932378)
  ;
  return;
}



/* Entry: 1066688b0; end: 1066688b3;  */

void FUN_1066688b0(void)

{
  return;
}



/* Entry: 1066688b4; end: 1066689d3; -[SCDeeplinkShareController legacySendToScopeDidDismiss:selectedItems:] */

void FUN_1066688b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010bf94c40(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066689d4; end: 106668a17;  */

void FUN_1066689d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar2);
  func_0x00010bdfd580(lVar1,param_2,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106668a18; end: 106668b2b; -[SCDeeplinkShareController legacySendToScopeWillSend:sendToSelection:] */

void FUN_106668a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106668b2c; end: 106668b8b;  */

void FUN_106668b2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c22aec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfd2e0(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106668b8c; end: 106668cab; -[SCDeeplinkShareController _didDetachUIWithSendToSelection:shareSheetConfiguration:] */

void FUN_106668b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf94c40(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106668cac; end: 106668d4f;  */

void FUN_106668cac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea1240(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010bea0b60(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c122f00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfcf800(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf529e0();
    func_0x00010bdfd580(lVar1,param_2,uVar3,uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106668d50; end: 106668ec7; -[SCDeeplinkShareController _sendToPhoneNumbersWithSendToSelection:shareSheetConfiguration:] */

void FUN_106668d50(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x90) != '\x01') goto LAB_106668ea4;
  lVar2 = param_3;
  func_0x00010c0fb120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (lVar1 != 0)) {
    lVar1 = param_4;
    func_0x00010c26b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 == 0) goto LAB_106668ea4;
    lVar2 = param_4;
    func_0x00010c26b9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar1 == 0) goto LAB_106668ea4;
    lVar2 = *(long *)(param_1 + 0x88);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0fb120(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010c26b9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_4;
    func_0x00010c22c620(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c5a0(lVar2,param_2,lVar1,lVar4,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
LAB_106668ea4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106668ec8; end: 1066690bf; -[SCDeeplinkShareController _sendWithSendToSelection:shareSheetConfiguration:] */

void FUN_106668ec8(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar2 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = param_3;
    func_0x00010c122f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bf529e0();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf529e0();
      if (ppuVar5 == (undefined **)0x0) {
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        goto LAB_10666903c;
      }
      lVar7 = *(long *)(param_1 + 0x20);
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x20);
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
    }
    if (lVar7 == 0) goto LAB_10666903c;
LAB_106668fa0:
    ppuVar2 = param_3;
    func_0x00010c122f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010bfcf800(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010befd440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c26b9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9ede0(param_1);
    _objc_release(uVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    _objc_release(ppuVar2);
    if (lVar7 != 0) goto LAB_106668fa0;
LAB_10666903c:
    ppuVar2 = param_3;
    func_0x00010bf9e060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf529e0();
    _objc_release(ppuVar2);
    puVar1 = PTR_PTR_1126afca8;
    if (ppuVar3 != (undefined **)0x0) goto LAB_10666909c;
    ppuVar2 = &PTR____CFConstantStringClassReference_110e582d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e582d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar1);
  }
  _objc_release(ppuVar2);
LAB_10666909c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066690c0; end: 106669163; -[SCDeeplinkShareController _didDismissSendViewControllerWithRecipientsCount:groupsCount:] */

void FUN_1066690c0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc20();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14dc60();
  _objc_release(puVar1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf76f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106669164; end: 10666917b; -[SCDeeplinkShareController delegate] */

void FUN_106669164(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10666917c; end: 106669187; -[SCDeeplinkShareController setDelegate:] */

void FUN_10666917c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 106669188; end: 106669243; -[SCDeeplinkShareController .cxx_destruct] */

void FUN_106669188(long param_1)

{
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106669244; end: 106669617; +[FriendStories storiesFromFeedCardSnaps:feedCardCompositeId:storyTitle:storySubtitle:storyLogoURL:startingSnapId:creatorUserId:creatorUsername:creatorDisplayName:creatorEligibility:] */

void FUN_106669244(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_138;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126c6d90;
  _objc_alloc_init();
  lVar2 = param_4;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010bfe5ec0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar1,param_2,lVar3);
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c298be0(lVar2);
    func_0x00010c220e20(puVar1,param_2,lVar3);
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0(puVar10,param_2,lVar3);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = param_3;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar3);
          }
          puStack_138 = (undefined *)0x0;
          puVar5 = PTR_PTR_1126b7640;
          func_0x00010c0f40e0(PTR_PTR_1126b7640,param_2,*(undefined8 *)(lStack_128 + lVar13 * 8),
                              &puStack_138);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puStack_138;
          _objc_retain(puStack_138);
          puVar6 = puVar5;
          if (puVar11 == (undefined *)0x0) {
            puVar6 = PTR_PTR_1126cbca0;
            _objc_alloc();
            lVar7 = lVar2;
            func_0x00010bfe5ec0(lVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0123e0(puVar6,param_2,puVar5,lVar7,param_5,param_6,param_7,param_9);
            _objc_release(lVar7);
            puVar11 = puVar5;
            if (puVar6 != (undefined *)0x0) {
              func_0x00010befa120(puVar10,param_2,puVar6);
              lVar7 = param_8;
              func_0x00010c08fa60();
              if (lVar7 != 0) {
                puVar8 = puVar5;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar8;
                func_0x00010c0720c0();
                _objc_release(puVar8);
                if ((int)puVar9 != 0) {
                  _objc_release(puVar6);
                  _objc_release(puVar5);
                  goto LAB_106669534;
                }
              }
            }
          }
          _objc_release(puVar6);
          _objc_release(puVar11);
          lVar13 = lVar13 + 1;
        } while (lVar4 != lVar13);
        lVar4 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar4 != 0);
    }
LAB_106669534:
    _objc_release(lVar3);
    func_0x00010c20c480(puVar1,param_2,puVar10);
    func_0x00010c1b1b00(puVar1,param_2,1);
    _objc_retain(puVar1);
    _objc_release(puVar10);
    puVar10 = puVar1;
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126cc530;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      puVar10 = PTR_PTR_1126c6d90;
      func_0x00010c2586c0(PTR_PTR_1126c6d90,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106669618; end: 106669693; +[FriendStories storiesFromEncodedStoryDoc:] */

void FUN_106669618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cc530;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c6d90;
    func_0x00010c2586c0(PTR_PTR_1126c6d90,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106669694; end: 106669c6f; +[FriendStories storiesFromStoryDoc:] */

undefined * FUN_106669694(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf981c0(param_3);
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_3;
  func_0x00010bf981a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar5 != (undefined *)0x0) {
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar4);
        }
        uVar19 = *(undefined8 *)((long)puVar17 * 8);
        uVar6 = uVar19;
        func_0x00010bf44560();
        iVar2 = (int)uVar6;
        if (iVar2 == 0) {
          ppuVar16 = &PTR_PTR_1126cc698;
LAB_1066697a4:
          puVar7 = *ppuVar16;
          _objc_opt_class();
          if (puVar7 != (undefined *)0x0) {
            uVar6 = uVar19;
            func_0x00010bf44380(uVar19);
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar6;
            func_0x000108f12c3c();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            _objc_release(uVar6);
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf44560(uVar19);
            func_0x00010c0df760(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar3);
            _objc_release(puVar7);
            _objc_release(uVar8);
            _objc_release(0);
          }
        }
        else {
          ppuVar16 = &PTR_PTR_1126cc6a8;
          if ((iVar2 == 7) || (ppuVar16 = &PTR_PTR_1126cc6a0, iVar2 == 1)) goto LAB_1066697a4;
        }
        puVar17 = puVar17 + 1;
      } while (puVar5 != puVar17);
      puVar5 = puVar4;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  puVar5 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cc698;
  _objc_opt_class(PTR_PTR_1126cc698);
  puVar17 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar4);
  puVar4 = puVar5;
  if (((ulong)puVar17 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar5);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  puVar5 = puVar4;
  func_0x00010c23f3e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bffc4a0();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c23f3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar7);
      }
      puVar9 = param_3;
      func_0x00010bfe5ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d54e0();
      _objc_release(puVar9);
      puVar9 = puVar4;
      func_0x00010bf97700(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c26e940();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126cbca0;
      _objc_alloc(PTR_PTR_1126cbca0);
      puVar10 = puVar12;
      func_0x00010c2711a0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar12;
      func_0x00010c260dc0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c0b4520(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047580(puVar9);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar10);
      func_0x00010befa120(puVar17);
      _objc_release(puVar9);
      _objc_release(puVar12);
      puVar18 = puVar18 + 1;
    } while (puVar5 != puVar18);
    puVar5 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  puVar5 = PTR_PTR_1126c6d90;
  _objc_alloc_init();
  func_0x00010c20c480();
  puVar7 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar7;
  func_0x00010c0d54e0();
  _objc_release(puVar7);
  if ((int)puVar18 == 4) {
    func_0x00010c1b1b00(puVar5);
    puVar7 = puVar5;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar18;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar18);
    _objc_release(puVar7);
    FUN_106669c70(puVar3);
    func_0x00010c220e20(puVar5);
  }
  else {
    puVar7 = param_3;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar7;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar5);
    _objc_release(puVar18);
    _objc_release(puVar7);
  }
  _objc_release(puVar17);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar15) {
    ___stack_chk_fail();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cc6a0;
    _objc_opt_class(PTR_PTR_1126cc6a0);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    puVar3 = param_3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(param_3);
    puVar4 = puVar3;
    func_0x00010c0897e0();
    puVar5 = puVar3;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010bfb1ac0();
      if (puVar4 == (undefined *)0x0) {
        func_0x00010c089b40(puVar3);
      }
      else {
        func_0x00010bfb1ac0(puVar3);
      }
    }
    else {
      func_0x00010c0897e0(puVar3);
    }
    _objc_release(puVar3);
    return puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 106669c70; end: 106669d17;  */

ulong FUN_106669c70(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6700);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cc6a0;
  _objc_opt_class(PTR_PTR_1126cc6a0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0897e0();
  uVar4 = uVar1;
  if (uVar3 == 0) {
    uVar3 = uVar1;
    func_0x00010bfb1ac0();
    if (uVar3 == 0) {
      func_0x00010c089b40(uVar1);
    }
    else {
      func_0x00010bfb1ac0(uVar1);
    }
  }
  else {
    func_0x00010c0897e0(uVar1);
  }
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 106669d18; end: 106669deb;  */

void FUN_106669d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c6980;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
  FUN_106669c70(param_3);
  _objc_release(param_3);
  func_0x00010c005fa0(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106669dec; end: 106669f9f;  */

void FUN_106669dec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uStack_34;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf35920(param_1,param_2,0);
  uVar2 = param_1;
  if ((int)uVar1 == 0x23) {
    func_0x00010c260c00(param_1,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  uStack_34 = 0;
  puVar3 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6320();
  func_0x00010c14ec80(puVar3,param_2,&uStack_34);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620((double)(uStack_34 >> 0x10 & 0xff) / 255.0,
                      (double)(uStack_34 >> 8 & 0xff) / 255.0,(double)(uStack_34 & 0xff) / 255.0,
                      0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106669fa0; end: 10666bb8b;  */

/* WARNING: Possible PIC construction at 0x00010666b05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010666bf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010666d2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010666daa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010666d2d0) */
/* WARNING: Removing unreachable block (ram,0x00010666d310) */
/* WARNING: Removing unreachable block (ram,0x00010666d328) */
/* WARNING: Removing unreachable block (ram,0x00010666d444) */
/* WARNING: Removing unreachable block (ram,0x00010666d368) */
/* WARNING: Removing unreachable block (ram,0x00010666d3a0) */
/* WARNING: Removing unreachable block (ram,0x00010666d3fc) */
/* WARNING: Removing unreachable block (ram,0x00010666d3b8) */
/* WARNING: Removing unreachable block (ram,0x00010666d454) */
/* WARNING: Removing unreachable block (ram,0x00010666d3f8) */
/* WARNING: Removing unreachable block (ram,0x00010666d40c) */
/* WARNING: Removing unreachable block (ram,0x00010666d418) */
/* WARNING: Removing unreachable block (ram,0x00010666d434) */
/* WARNING: Removing unreachable block (ram,0x00010666d458) */
/* WARNING: Removing unreachable block (ram,0x00010666bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010666bf94) */
/* WARNING: Removing unreachable block (ram,0x00010666bfc4) */
/* WARNING: Removing unreachable block (ram,0x00010666bfd4) */
/* WARNING: Removing unreachable block (ram,0x00010666c010) */
/* WARNING: Removing unreachable block (ram,0x00010666c0c0) */
/* WARNING: Removing unreachable block (ram,0x00010666c10c) */
/* WARNING: Removing unreachable block (ram,0x00010666c158) */
/* WARNING: Removing unreachable block (ram,0x00010666c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010666c370) */
/* WARNING: Removing unreachable block (ram,0x00010666c5e4) */
/* WARNING: Removing unreachable block (ram,0x00010666c640) */
/* WARNING: Removing unreachable block (ram,0x00010666c66c) */
/* WARNING: Removing unreachable block (ram,0x00010666c648) */
/* WARNING: Removing unreachable block (ram,0x00010666c5ec) */
/* WARNING: Removing unreachable block (ram,0x00010666c374) */
/* WARNING: Removing unreachable block (ram,0x00010666c38c) */
/* WARNING: Removing unreachable block (ram,0x00010666c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010666c394) */
/* WARNING: Removing unreachable block (ram,0x00010666c20c) */
/* WARNING: Removing unreachable block (ram,0x00010666c21c) */
/* WARNING: Removing unreachable block (ram,0x00010666c220) */
/* WARNING: Removing unreachable block (ram,0x00010666c230) */
/* WARNING: Removing unreachable block (ram,0x00010666c238) */
/* WARNING: Removing unreachable block (ram,0x00010666c2cc) */
/* WARNING: Removing unreachable block (ram,0x00010666c30c) */
/* WARNING: Removing unreachable block (ram,0x00010666c250) */
/* WARNING: Removing unreachable block (ram,0x00010666c258) */
/* WARNING: Removing unreachable block (ram,0x00010666c298) */
/* WARNING: Removing unreachable block (ram,0x00010666c334) */
/* WARNING: Removing unreachable block (ram,0x00010666c344) */
/* WARNING: Removing unreachable block (ram,0x00010666c350) */
/* WARNING: Removing unreachable block (ram,0x00010666c36c) */
/* WARNING: Removing unreachable block (ram,0x00010666c398) */
/* WARNING: Removing unreachable block (ram,0x00010666c40c) */
/* WARNING: Removing unreachable block (ram,0x00010666c5c4) */
/* WARNING: Removing unreachable block (ram,0x00010666c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010666c678) */
/* WARNING: Removing unreachable block (ram,0x00010666b060) */
/* WARNING: Removing unreachable block (ram,0x00010666b098) */
/* WARNING: Removing unreachable block (ram,0x00010666b0b0) */
/* WARNING: Removing unreachable block (ram,0x00010666b118) */
/* WARNING: Removing unreachable block (ram,0x00010666b0c0) */
/* WARNING: Removing unreachable block (ram,0x00010666b0dc) */
/* WARNING: Removing unreachable block (ram,0x00010666daa8) */
/* WARNING: Removing unreachable block (ram,0x00010666dae4) */
/* WARNING: Removing unreachable block (ram,0x00010666dc00) */
/* WARNING: Removing unreachable block (ram,0x00010666db38) */
/* WARNING: Removing unreachable block (ram,0x00010666db70) */
/* WARNING: Removing unreachable block (ram,0x00010666dc10) */
/* WARNING: Removing unreachable block (ram,0x00010666dbc8) */
/* WARNING: Removing unreachable block (ram,0x00010666dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010666dbf0) */
/* WARNING: Removing unreachable block (ram,0x00010666dc14) */

undefined ** FUN_106669fa0(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 in_x5;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined *puVar28;
  undefined8 unaff_x22;
  undefined **ppuVar29;
  undefined *unaff_x23;
  long unaff_x24;
  long lVar30;
  undefined **ppuVar31;
  undefined *unaff_x25;
  undefined *puVar32;
  undefined *unaff_x26;
  undefined **ppuVar33;
  undefined8 uVar34;
  long unaff_x27;
  undefined **ppuVar35;
  undefined8 unaff_x28;
  undefined **ppuVar36;
  undefined8 *****pppppuVar37;
  undefined **ppuStack_8e0;
  undefined **ppuStack_8d8;
  undefined8 uStack_8d0;
  undefined8 *puStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  long lStack_810;
  undefined **ppuStack_800;
  undefined **ppuStack_7f8;
  undefined **ppuStack_7f0;
  undefined **ppuStack_7e8;
  undefined **ppuStack_7e0;
  undefined **ppuStack_7d8;
  undefined **ppuStack_7d0;
  undefined **ppuStack_7c8;
  undefined *puStack_7c0;
  undefined **ppuStack_7b8;
  undefined8 ****ppppuStack_7b0;
  undefined8 uStack_7a8;
  undefined **ppuStack_7a0;
  undefined **ppuStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined **ppuStack_770;
  long lStack_768;
  undefined **ppuStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined **ppuStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined1 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined **ppuStack_708;
  undefined **ppuStack_700;
  undefined8 uStack_6f8;
  undefined2 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined **ppuStack_6c8;
  undefined **ppuStack_6c0;
  undefined1 uStack_6b8;
  undefined1 uStack_6b7;
  undefined1 uStack_6b6;
  undefined8 uStack_6b0;
  undefined1 uStack_6a8;
  undefined4 uStack_6a4;
  undefined **ppuStack_6a0;
  undefined **ppuStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined8 uStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined8 uStack_640;
  undefined **ppuStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined **ppuStack_600;
  undefined **ppuStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined **ppuStack_5e0;
  undefined **ppuStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined **ppuStack_5a8;
  undefined8 uStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined *puStack_558;
  undefined8 uStack_550;
  code *pcStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined *puStack_460;
  undefined8 uStack_458;
  code *pcStack_450;
  undefined *puStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  long lStack_3e0;
  undefined8 ****ppppuStack_370;
  code *pcStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined8 uStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  uint uStack_2e4;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined4 uStack_2cc;
  undefined **ppuStack_2c8;
  int iStack_2c0;
  int iStack_2bc;
  undefined **ppuStack_2b8;
  undefined *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined8 ***pppuStack_160;
  undefined8 uStack_158;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
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
  _objc_retain();
  ppuVar27 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf981c0(param_1);
  ppuVar31 = ppuVar27;
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar23 = param_1;
  ppuStack_148 = param_1;
  ppuStack_140 = ppuVar31;
  func_0x00010bf981a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = SUB84(auStack_f0,0);
  iVar3 = 0x10;
  ppuVar31 = ppuVar23;
  func_0x00010bf52a60();
  iVar17 = (int)in_x5;
  if (ppuVar31 != (undefined **)0x0) {
    unaff_x27 = *plStack_120;
    unaff_x28 = 0x848f;
    param_1 = &PTR_PTR_110932418;
    do {
      ppuVar27 = (undefined **)0x0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(ppuVar23);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)ppuVar27 * 8);
        puVar24 = unaff_x23;
        func_0x00010bf44560();
        if (((uint)puVar24 < 0x10) && ((0x848fU >> (ulong)((uint)puVar24 & 0x1f) & 1) != 0)) {
          ppuVar4 = *(undefined ***)(&PTR_PTR_110932418)[(ulong)puVar24 & 0xffffffff];
          _objc_opt_class();
          if (ppuVar4 != (undefined **)0x0) {
            unaff_x26 = unaff_x23;
            func_0x00010bf44380();
            _objc_retainAutoreleasedReturnValue();
            lStack_138 = 0;
            unaff_x25 = unaff_x26;
            func_0x000108f12c3c();
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = lStack_138;
            _objc_retain(lStack_138);
            _objc_release(unaff_x26);
            puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            param_2 = ppuVar4;
            if (unaff_x24 == 0) {
              func_0x00010bf44560(unaff_x23);
              unaff_x23 = puVar24;
              func_0x00010c0df760();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0560(ppuStack_140);
              _objc_release(unaff_x23);
              param_2 = ppuVar4;
              unaff_x26 = puVar24;
            }
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
          }
        }
        ppuVar27 = (undefined **)((long)ppuVar27 + 1);
      } while (ppuVar31 != ppuVar27);
      uVar14 = SUB84(auStack_f0,0);
      iVar3 = 0x10;
      ppuVar31 = ppuVar23;
      func_0x00010bf52a60();
      iVar17 = (int)in_x5;
      unaff_x22 = 0;
    } while (ppuVar31 != (undefined **)0x0);
  }
  _objc_release(ppuVar23);
  ppuVar31 = ppuStack_148;
  _objc_release();
  ppuVar4 = ppuStack_140;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uStack_158 = 0x10666a1ac;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_2cc = uVar14;
    iStack_2c0 = iVar3;
    iStack_2bc = iVar17;
    uStack_1b0 = unaff_x28;
    lStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    lStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    uStack_180 = unaff_x22;
    ppuStack_178 = ppuVar23;
    ppuStack_170 = ppuVar27;
    ppuStack_168 = param_1;
    pppuStack_160 = (undefined8 ***)&stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(param_2);
    ppuVar23 = ppuVar31;
    FUN_106669fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2a8 = ppuVar31;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_288 = ppuVar31;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_290 = ppuVar31;
    _objc_retain(ppuVar23);
    _objc_retain(param_2);
    ppuVar4 = ppuVar23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126cc6a0;
    _objc_opt_class(PTR_PTR_1126cc6a0);
    ppuVar18 = ppuVar4;
    _objc_opt_isKindOfClass(ppuVar4,puVar24);
    ppuVar27 = ppuVar4;
    if (((ulong)ppuVar18 & 1) == 0) {
      ppuVar27 = (undefined **)0x0;
    }
    _objc_retain(ppuVar27);
    _objc_release(ppuVar4);
    ppuVar18 = ppuVar23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126cc6c8;
    _objc_opt_class(PTR_PTR_1126cc6c8);
    ppuVar19 = ppuVar18;
    _objc_opt_isKindOfClass(ppuVar18,puVar24);
    ppuVar4 = ppuVar18;
    if (((ulong)ppuVar19 & 1) == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar18);
    ppuVar19 = ppuVar23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126cc6c0;
    _objc_opt_class(PTR_PTR_1126cc6c0);
    ppuVar10 = ppuVar19;
    _objc_opt_isKindOfClass(ppuVar19,puVar24);
    ppuVar18 = ppuVar19;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar18 = (undefined **)0x0;
    }
    _objc_retain(ppuVar18);
    _objc_release(ppuVar19);
    ppuVar19 = ppuVar23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2a0 = ppuVar23;
    _objc_release(ppuVar23);
    puVar24 = PTR_PTR_1126cc6e8;
    _objc_opt_class(PTR_PTR_1126cc6e8);
    ppuVar10 = ppuVar19;
    _objc_opt_isKindOfClass(ppuVar19,puVar24);
    ppuVar23 = ppuVar19;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar23 = (undefined **)0x0;
    }
    _objc_retain(ppuVar23);
    _objc_release(ppuVar19);
    puVar32 = PTR_PTR_1126cc6f0;
    _objc_alloc();
    puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_2b0 = puVar32;
    func_0x00010c0b4ca0(ppuVar31);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar31 = param_2;
    ppuStack_2b8 = (undefined **)puVar24;
    func_0x00010c11b1e0();
    ppuVar19 = param_2;
    ppuStack_2c8 = ppuVar31;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuVar31 = ppuVar27;
    ppuStack_2d8 = ppuVar19;
    func_0x00010c297b00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_298 = ppuVar31;
    _objc_release(ppuVar27);
    func_0x00010c0b4ca0(ppuVar31);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar27 = ppuVar23;
    ppuStack_2e0 = (undefined **)puVar24;
    func_0x00010c22aca0();
    _objc_release(ppuVar23);
    uStack_2e4 = (uint)((int)ppuVar27 == 1);
    ppuVar19 = param_2;
    func_0x00010c11b180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_2;
    ppuStack_2f0 = ppuVar19;
    func_0x00010c11b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar29 = param_2;
    ppuStack_2f8 = ppuVar10;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar18;
    func_0x00010c237cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar18);
    ppuVar12 = param_2;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar27 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c250f20(ppuVar4);
    _objc_release(ppuVar4);
    func_0x00010c0df7c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar35 = param_2;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    ppuVar4 = ppuStack_2b8;
    ppuVar23 = ppuStack_2d8;
    ppuVar31 = ppuStack_2e0;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_308 = 0;
    uStack_318 = 0;
    uStack_338 = CONCAT71(uStack_338._1_7_,ppuVar18 != (undefined **)0x0);
    uVar21 = 1;
    puVar24 = puStack_2b0;
    ppuStack_360 = ppuVar19;
    ppuStack_358 = ppuVar10;
    ppuStack_340 = ppuVar29;
    ppuStack_330 = ppuVar5;
    ppuStack_328 = ppuVar12;
    ppuStack_320 = ppuVar27;
    ppuStack_310 = ppuVar35;
    func_0x00010c00ed60();
    _objc_release(ppuVar35);
    _objc_release(ppuVar27);
    _objc_release(ppuVar12);
    _objc_release(ppuVar5);
    _objc_release(ppuVar29);
    _objc_release(ppuStack_2f8);
    _objc_release(ppuStack_2f0);
    _objc_release(ppuVar31);
    _objc_release(ppuStack_298);
    _objc_release(ppuVar23);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_290);
    _objc_release(ppuStack_288);
    ppuStack_2c8 = param_2;
    func_0x00010c2828e0();
    _objc_retain(puVar24);
    puVar32 = PTR_PTR_1126ca868;
    func_0x00010bf82780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar24;
    func_0x00010bf8c980(puVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x000108072414(puVar7,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bbde0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2acc80(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c11b220(puVar24);
    func_0x00010c2b6500(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar24;
    func_0x00010c11b3a0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6520(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar24;
    func_0x00010bf8c9e0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc5e0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar8);
    func_0x00010c22b680(puVar24);
    func_0x00010c2b14a0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c25fce0(puVar24);
    func_0x00010c2b17a0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar24;
    func_0x00010c11b180(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b64e0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar24;
    func_0x00010c11b180(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b65a0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar24;
    func_0x00010c11b080(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b64c0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c2bc8c0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar24;
    func_0x00010c112dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    if (puVar11 != (undefined *)0x0) {
      puVar8 = puVar24;
      func_0x00010c112dc0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      FUN_106669dec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6000(puVar32);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
    puVar8 = puVar24;
    func_0x00010c154ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    if (puVar11 != (undefined *)0x0) {
      puVar8 = puVar24;
      func_0x00010c154ea0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      FUN_106669dec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7d80(puVar32);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
    puVar8 = puVar24;
    func_0x00010c11b040(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b64a0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c07dee0(puVar24);
    func_0x00010c2b1560(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar24;
    func_0x00010c237cc0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8de0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar24;
    func_0x00010bf24ec0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9ae0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar24;
    func_0x00010bf8c9c0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    func_0x00010c2ba5c0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar24;
    func_0x00010c080120(puVar24);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17e0(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar24;
    func_0x00010bfad740();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar11 != (undefined *)0x0) {
      puVar11 = puVar24;
      func_0x00010bfad740(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b3220(puVar32);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar11);
    }
    puVar8 = puVar24;
    func_0x00010bfe4200();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010c08fa60();
    _objc_release(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar11 != (undefined *)0x0) {
      puVar11 = puVar24;
      func_0x00010bfe4200(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af840(puVar32);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar11);
    }
    puVar8 = PTR_PTR_1126cc6b0;
    _objc_alloc(PTR_PTR_1126cc6b0);
    ppuVar18 = (undefined **)0x0;
    ppuVar19 = (undefined **)0x0;
    func_0x00010bff1f20();
    func_0x00010c2a7a40(puVar32);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = puVar32;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b0 = puVar11;
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar32);
    _objc_release(puVar24);
    ppuVar31 = ppuStack_2a8;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar31;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar31);
    ppuStack_2b8 = ppuVar23;
    func_0x000108072414(ppuVar23,0);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_290 = ppuVar23;
    _objc_retain();
    ppuVar23 = ppuStack_2a0;
    _objc_retain(ppuStack_2a0);
    puVar32 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_288 = (undefined **)puVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = PTR_PTR_1126cc698;
    _objc_opt_class(PTR_PTR_1126cc698);
    ppuVar4 = ppuVar23;
    _objc_opt_isKindOfClass(ppuVar23,puVar32);
    ppuVar31 = ppuVar23;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar31 = (undefined **)0x0;
    }
    _objc_retain(ppuVar31);
    _objc_release(ppuVar23);
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puStack_278 = (undefined8 *)0x0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    ppuStack_2e0 = ppuVar31;
    func_0x00010c23f3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_298 = ppuVar31;
    func_0x00010bf52a60();
    iVar17 = iStack_2bc;
    iVar3 = iStack_2c0;
    ppuStack_2d8 = (undefined **)puVar24;
    if (ppuVar31 != (undefined **)0x0) {
      lVar30 = *plStack_270;
      do {
        ppuVar23 = (undefined **)0x0;
        do {
          if (*plStack_270 != lVar30) {
            _objc_enumerationMutation(ppuStack_298);
          }
          ppuVar4 = *(undefined ***)((long)puStack_278 + (long)ppuVar23 * 8);
          if (iVar3 == 0 && iVar17 == 0) {
            ppuVar27 = ppuVar4;
            func_0x00010bfe5ea0(ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            ppuVar18 = ppuVar27;
            func_0x00010bfe5ea0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar10 = ppuVar18;
            func_0x0001080724f0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar18);
            _objc_release(ppuVar27);
          }
          else {
            ppuVar10 = ppuVar4;
            func_0x000108f55418();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar24 = PTR_PTR_1126c9870;
          _objc_alloc(PTR_PTR_1126c9870);
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar27 = ppuVar4;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          puVar32 = PTR_PTR_1126cc6f8;
          _objc_alloc(PTR_PTR_1126cc6f8);
          func_0x00010c0473c0();
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          ppuStack_340 = (undefined **)0x0;
          ppuStack_358 = (undefined **)0x0;
          ppuStack_360 = (undefined **)0x0;
          ppuVar18 = (undefined **)0x0;
          ppuVar19 = (undefined **)0x0;
          uVar21 = 0;
          func_0x00010c01ba80(puVar24);
          _objc_release(puVar32);
          _objc_release(ppuVar27);
          _objc_release(ppuVar4);
          func_0x00010befa120(ppuStack_288);
          _objc_release(puVar24);
          _objc_release(ppuVar10);
          ppuVar23 = (undefined **)((long)ppuVar23 + 1);
        } while (ppuVar31 != ppuVar23);
        ppuVar31 = ppuStack_298;
        func_0x00010bf52a60();
      } while (ppuVar31 != (undefined **)0x0);
    }
    _objc_release(ppuStack_298);
    ppuVar4 = ppuStack_2a0;
    ppuVar23 = ppuStack_2a0;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126cc6a8;
    _objc_opt_class(PTR_PTR_1126cc6a8);
    ppuVar10 = ppuVar23;
    _objc_opt_isKindOfClass(ppuVar23,puVar24);
    ppuVar31 = ppuVar23;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuVar31 = (undefined **)0x0;
    }
    _objc_retain(ppuVar31);
    _objc_release(ppuVar23);
    if (ppuVar31 != (undefined **)0x0) {
      ppuVar4 = ppuVar23;
      ppuStack_298 = ppuVar31;
      func_0x00010befde00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246ca0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar10 = ppuVar4;
      func_0x00010bf529e0();
      ppuVar31 = ppuStack_290;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar10 = (undefined **)0x0;
        do {
          ppuVar5 = ppuVar4;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar23 = (undefined **)PTR_PTR_1126c9870;
          _objc_alloc();
          ppuVar27 = ppuVar5;
          func_0x00010666e16c(ppuVar5,ppuVar31);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar5;
          func_0x00010c26a4a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = (undefined **)((long)ppuVar10 + 1);
          ppuVar35 = ppuVar12;
          FUN_10666e224();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_360 = (undefined **)0x0;
          ppuStack_358 = (undefined **)0x0;
          uStack_338 = 0;
          uStack_350 = 0;
          uStack_348 = 1;
          ppuVar18 = (undefined **)0x0;
          ppuVar19 = (undefined **)0x0;
          uVar21 = 0;
          ppuStack_340 = ppuVar35;
          func_0x00010c01ba80();
          _objc_release(ppuVar35);
          _objc_release(ppuVar12);
          _objc_release(ppuVar27);
          ppuVar12 = ppuVar5;
          func_0x00010bfec9e0();
          ppuVar35 = ppuStack_288;
          func_0x00010bf529e0();
          if ((undefined *)((long)ppuVar10 + ((ulong)ppuVar12 & 0xffffffff)) <= ppuVar35) {
            func_0x00010c066b00(ppuStack_288);
          }
          _objc_release(ppuVar23);
          _objc_release(ppuVar5);
          ppuVar5 = ppuVar4;
          func_0x00010bf529e0();
          ppuVar10 = ppuVar29;
        } while (ppuVar29 < ppuVar5);
      }
      _objc_release(ppuVar4);
      ppuVar4 = ppuStack_2a0;
      ppuVar31 = ppuStack_298;
    }
    _objc_release(ppuVar31);
    _objc_release(ppuStack_2e0);
    _objc_release(ppuVar4);
    _objc_release(ppuStack_290);
    ppuVar31 = (undefined **)PTR_PTR_1126ca868;
    func_0x00010bf827a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuStack_2a8;
    ppuStack_298 = ppuVar31;
    FUN_106669fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2e0 = ppuVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR_PTR_1126cc698;
    _objc_opt_class(PTR_PTR_1126cc698);
    ppuVar4 = ppuVar10;
    _objc_opt_isKindOfClass(ppuVar10,puVar24);
    ppuVar31 = ppuVar10;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar31 = (undefined **)0x0;
    }
    _objc_retain(ppuVar31);
    _objc_release(ppuVar10);
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puStack_278 = (undefined8 *)0x0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (undefined8 *)0x0;
    ppuVar5 = ppuVar31;
    func_0x00010c23f3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = SUB84(auStack_240,0);
    uVar16 = 0x10;
    ppuVar29 = ppuVar5;
    func_0x00010bf52a60();
    if (ppuVar29 != (undefined **)0x0) {
      ppuVar33 = (undefined **)*plStack_270;
      ppuVar12 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c67d8;
      ppuVar35 = &PTR_PTR_1126cc000;
      ppuVar36 = (undefined **)0x0;
      if ((undefined **)*plStack_270 != ppuVar33) {
        _objc_enumerationMutation(ppuVar5);
      }
      ppuVar9 = (undefined **)*puStack_278;
      uVar16 = 0x10666b060;
      pppuVar2 = &ppuStack_360;
      pppppuVar37 = (undefined8 *****)&pppuStack_160;
SUB_10666d4b4:
      do {
        *(undefined ***)((long)pppuVar2 + -0x60) = ppuVar36;
        *(undefined ***)((long)pppuVar2 + -0x58) = ppuVar35;
        *(undefined ***)((long)pppuVar2 + -0x50) = ppuVar33;
        *(undefined ***)((long)pppuVar2 + -0x48) = ppuVar5;
        *(undefined ***)((long)pppuVar2 + -0x40) = ppuVar31;
        *(undefined ***)((long)pppuVar2 + -0x38) = ppuVar27;
        *(undefined ***)((long)pppuVar2 + -0x30) = ppuVar29;
        *(undefined ***)((long)pppuVar2 + -0x28) = ppuVar12;
        *(undefined ***)((long)pppuVar2 + -0x20) = ppuVar23;
        *(undefined ***)((long)pppuVar2 + -0x18) = ppuVar10;
        *(undefined8 ******)((long)pppuVar2 + -0x10) = pppppuVar37;
        *(undefined8 *)((long)pppuVar2 + -8) = uVar16;
        *(undefined8 *)((long)pppuVar2 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf981c0(ppuVar9);
        ppuVar4 = ppuVar12;
        func_0x00010bf71fe0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)pppuVar2 + -0x128) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x130) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x118) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x120) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x108) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x110) = 0;
        *(undefined8 *)((long)pppuVar2 + -0xf8) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x100) = 0;
        *(undefined ***)((long)pppuVar2 + -0x180) = ppuVar9;
        func_0x00010bf981a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010bf52a60();
        ppuVar23 = ppuVar31;
        if (ppuVar10 != (undefined **)0x0) {
          ppuVar29 = (undefined **)**(undefined8 **)((long)pppuVar2 + -0x120);
          ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c67a8;
          do {
            ppuVar23 = (undefined **)0x0;
            do {
              if ((undefined **)**(undefined8 **)((long)pppuVar2 + -0x120) != ppuVar29) {
                _objc_enumerationMutation(ppuVar9);
              }
              ppuVar35 = *(undefined ***)(*(long *)((long)pppuVar2 + -0x128) + (long)ppuVar23 * 8);
              ppuVar33 = ppuVar35;
              func_0x00010bf44380();
              _objc_retainAutoreleasedReturnValue();
              ppuVar27 = ppuVar35;
              func_0x00010bf44560();
              iVar3 = (int)ppuVar27;
              if (iVar3 < 0x27) {
                if (0x12 < iVar3) {
                  if (iVar3 == 0x13) {
                    puVar24 = PTR_PTR_1126cc700;
                    _objc_opt_class(PTR_PTR_1126cc700);
                    *(undefined8 *)((long)pppuVar2 + -0x170) = 0;
                    ppuVar35 = ppuVar33;
                    func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x170));
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x170);
                    _objc_retain(ppuVar36);
                  }
                  else if (iVar3 == 0x19) {
                    puVar24 = PTR_PTR_1126cc760;
                    _objc_opt_class(PTR_PTR_1126cc760);
                    *(undefined8 *)((long)pppuVar2 + -0x138) = 0;
                    ppuVar35 = ppuVar33;
                    func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x138));
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x138);
                    _objc_retain(ppuVar36);
                  }
                  else {
                    if (iVar3 != 0x1d) goto LAB_10666d92c;
                    puVar24 = PTR_PTR_1126cc740;
                    _objc_opt_class(PTR_PTR_1126cc740);
                    *(undefined8 *)((long)pppuVar2 + -0x178) = 0;
                    ppuVar35 = ppuVar33;
                    func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x178));
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x178);
                    _objc_retain(ppuVar36);
                  }
LAB_10666d918:
                  func_0x00010c1d0640(ppuVar4);
                  goto LAB_10666d91c;
                }
                if (iVar3 == 0xe) {
                  puVar24 = PTR_PTR_1126cc738;
                  _objc_opt_class(PTR_PTR_1126cc738);
                  *(undefined8 *)((long)pppuVar2 + -0x168) = 0;
                  ppuVar35 = ppuVar33;
                  func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x168));
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x168);
                  _objc_retain(ppuVar36);
                  goto LAB_10666d918;
                }
                if (iVar3 == 0x12) {
                  puVar24 = PTR_PTR_1126cc768;
                  _objc_opt_class(PTR_PTR_1126cc768);
                  *(undefined8 *)((long)pppuVar2 + -0x140) = 0;
                  ppuVar35 = ppuVar33;
                  func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x140));
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x140);
                  _objc_retain(ppuVar36);
                  goto LAB_10666d918;
                }
              }
              else {
                if (iVar3 < 0x30) {
                  if (iVar3 == 0x27) {
                    puVar24 = PTR_PTR_1126cc720;
                    _objc_opt_class(PTR_PTR_1126cc720);
                    *(undefined8 *)((long)pppuVar2 + -0x148) = 0;
                    ppuVar35 = ppuVar33;
                    func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x148));
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x148);
                    _objc_retain(ppuVar36);
                  }
                  else {
                    if (iVar3 != 0x2a) goto LAB_10666d92c;
                    puVar24 = PTR_PTR_1126b3068;
                    _objc_opt_class(PTR_PTR_1126b3068);
                    *(undefined8 *)((long)pppuVar2 + -0x158) = 0;
                    ppuVar35 = ppuVar33;
                    func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x158));
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x158);
                    _objc_retain(ppuVar36);
                  }
                  goto LAB_10666d918;
                }
                if (iVar3 != 0x30) {
                  if (iVar3 == 0x35) {
                    puVar24 = PTR_PTR_1126cc6d8;
                    _objc_opt_class(PTR_PTR_1126cc6d8);
                    *(undefined8 *)((long)pppuVar2 + -0x150) = 0;
                    ppuVar35 = ppuVar33;
                    func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x150));
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x150);
                    _objc_retain(ppuVar36);
                  }
                  else {
                    if (iVar3 != 0x36) goto LAB_10666d92c;
                    puVar24 = PTR_PTR_1126cc6e0;
                    _objc_opt_class(PTR_PTR_1126cc6e0);
                    *(undefined8 *)((long)pppuVar2 + -0x160) = 0;
                    ppuVar35 = ppuVar33;
                    func_0x000108f12c3c(ppuVar33,puVar24,(undefined1 *)((long)pppuVar2 + -0x160));
                    _objc_retainAutoreleasedReturnValue();
                    ppuVar36 = *(undefined ***)((long)pppuVar2 + -0x160);
                    _objc_retain(ppuVar36);
                  }
                  goto LAB_10666d918;
                }
                ppuVar36 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
                _objc_alloc();
                func_0x00010c008340();
                ppuVar35 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
                func_0x00010c2a4bc0();
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = ppuVar36;
                func_0x00010c25d0a0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuVar4);
                _objc_release(ppuVar12);
LAB_10666d91c:
                _objc_release(ppuVar35);
                _objc_release(ppuVar36);
              }
LAB_10666d92c:
              _objc_release(ppuVar33);
              ppuVar23 = (undefined **)((long)ppuVar23 + 1);
            } while (ppuVar10 != ppuVar23);
            ppuVar10 = ppuVar9;
            func_0x00010bf52a60();
            ppuVar27 = (undefined **)0x0;
          } while (ppuVar10 != (undefined **)0x0);
        }
        _objc_release(ppuVar9);
        ppuVar10 = *(undefined ***)((long)pppuVar2 + -0x180);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar2 + -0x70))
        goto _objc_autoreleaseReturnValue;
        ___stack_chk_fail();
        *(undefined ***)((long)pppuVar2 + -0x1e0) = ppuVar36;
        *(undefined ***)((long)pppuVar2 + -0x1d8) = ppuVar35;
        *(undefined ***)((long)pppuVar2 + -0x1d0) = ppuVar33;
        *(undefined ***)((long)pppuVar2 + -0x1c8) = ppuVar5;
        *(undefined ***)((long)pppuVar2 + -0x1c0) = ppuVar23;
        *(undefined ***)((long)pppuVar2 + -0x1b8) = ppuVar27;
        *(undefined ***)((long)pppuVar2 + -0x1b0) = ppuVar29;
        *(undefined ***)((long)pppuVar2 + -0x1a8) = ppuVar9;
        *(undefined ***)((long)pppuVar2 + -0x1a0) = ppuVar4;
        *(undefined ***)((long)pppuVar2 + -0x198) = ppuVar12;
        *(undefined1 **)((long)pppuVar2 + -400) = (undefined1 *)((long)pppuVar2 + -0x10);
        *(undefined8 *)((long)pppuVar2 + -0x188) = 0x10666d9ac;
        pppppuVar37 = (undefined8 *****)((long)pppuVar2 + -400);
        *(undefined8 *)((long)pppuVar2 + -0x1f0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        FUN_106669fa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar31 = ppuVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR_PTR_1126cc698;
        _objc_opt_class(PTR_PTR_1126cc698);
        ppuVar29 = ppuVar31;
        _objc_opt_isKindOfClass(ppuVar31,puVar24);
        ppuVar4 = ppuVar31;
        if (((ulong)ppuVar29 & 1) == 0) {
          ppuVar4 = (undefined **)0x0;
        }
        _objc_retain(ppuVar4);
        _objc_release(ppuVar31);
        *(undefined8 *)((long)pppuVar2 + -0x288) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x290) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x278) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x280) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x2a8) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x2b0) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x298) = 0;
        *(undefined8 *)((long)pppuVar2 + -0x2a0) = 0;
        ppuVar12 = ppuVar4;
        func_0x00010c23f3e0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = (undefined1 *)((long)pppuVar2 + -0x2b0);
        puVar15 = (undefined1 *)((long)pppuVar2 + -0x270);
        uVar16 = 0x10;
        ppuVar31 = ppuVar12;
        func_0x00010bf52a60();
        uVar20 = (undefined4)uVar21;
        uVar14 = SUB84(ppuVar19,0);
        if (ppuVar31 == (undefined **)0x0) {
          _objc_release(ppuVar12);
          _objc_release(ppuVar4);
          ppuVar31 = ppuVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar2 + -0x1f0)) {
            return (undefined **)0x0;
          }
          ___stack_chk_fail();
          *(undefined ***)((long)pppuVar2 + -800) = ppuVar36;
          *(undefined ***)((long)pppuVar2 + -0x318) = ppuVar35;
          *(undefined ***)((long)pppuVar2 + -0x310) = ppuVar33;
          *(undefined ***)((long)pppuVar2 + -0x308) = ppuVar5;
          *(undefined ***)((long)pppuVar2 + -0x300) = ppuVar23;
          *(undefined ***)((long)pppuVar2 + -0x2f8) = ppuVar27;
          *(undefined8 *)((long)pppuVar2 + -0x2f0) = 0;
          *(undefined ***)((long)pppuVar2 + -0x2e8) = ppuVar12;
          *(undefined ***)((long)pppuVar2 + -0x2e0) = ppuVar4;
          *(undefined ***)((long)pppuVar2 + -0x2d8) = ppuVar10;
          *(undefined8 ******)((long)pppuVar2 + -0x2d0) = pppppuVar37;
          *(code **)((long)pppuVar2 + -0x2c8) = FUN_10666dc70;
          *(undefined4 *)((long)pppuVar2 + -0x380) = uVar14;
          *(undefined4 *)((long)pppuVar2 + -0x37c) = uVar20;
          *(undefined1 **)((long)pppuVar2 + -0x388) = puVar15;
          *(undefined1 **)((long)pppuVar2 + -0x350) = puVar13;
          *(undefined ***)((long)pppuVar2 + -0x370) = ppuVar31;
          *(undefined8 *)((long)pppuVar2 + -0x378) = *(undefined8 *)((long)pppuVar2 + -0x268);
          *(undefined8 *)((long)pppuVar2 + -0x340) = *(undefined8 *)((long)pppuVar2 + -0x270);
          *(undefined8 *)((long)pppuVar2 + -0x360) = *(undefined8 *)((long)pppuVar2 + -0x278);
          puVar24 = *(undefined **)((long)pppuVar2 + -0x288);
          uVar21 = *(undefined8 *)((long)pppuVar2 + -0x280);
          puVar28 = *(undefined **)((long)pppuVar2 + -0x290);
          puVar32 = *(undefined **)((long)pppuVar2 + -0x2a8);
          puVar7 = *(undefined **)((long)pppuVar2 + -0x2a0);
          puVar6 = *(undefined **)((long)pppuVar2 + -0x2b8);
          puVar8 = *(undefined **)((long)pppuVar2 + -0x2b0);
          uVar34 = *(undefined8 *)((long)pppuVar2 + -0x2c0);
          _objc_retain(puVar13);
          *(undefined8 *)((long)pppuVar2 + -0x348) = uVar16;
          _objc_retain(uVar16);
          _objc_retain(ppuVar18);
          *(undefined8 *)((long)pppuVar2 + -0x368) = uVar34;
          _objc_retain(uVar34);
          _objc_retain(puVar6);
          _objc_retain(puVar8);
          _objc_retain(puVar32);
          _objc_retain(puVar7);
          _objc_retain(puVar28);
          _objc_retain(puVar24);
          *(undefined8 *)((long)pppuVar2 + -0x358) = uVar21;
          puVar25 = *(undefined **)((long)pppuVar2 + -0x360);
          _objc_retain(uVar21);
          _objc_retain(puVar25);
          _objc_retain(*(undefined8 *)((long)pppuVar2 + -0x340));
          puVar11 = *(undefined **)((long)pppuVar2 + -0x378);
          _objc_retain();
          *(undefined8 *)((long)pppuVar2 + -0x338) = *(undefined8 *)((long)pppuVar2 + -0x370);
          *(undefined **)((long)pppuVar2 + -0x330) = PTR_PTR_1126f23d0;
          ppuVar27 = (undefined **)((long)pppuVar2 + -0x338);
          _objc_msgSendSuper2(ppuVar27,PTR_s_init_1125d9248);
          if (ppuVar27 != (undefined **)0x0) {
            *(uint *)((long)pppuVar2 + -0x370) = (uint)*(byte *)((long)pppuVar2 + -0x298);
            puVar26 = *(undefined **)((long)pppuVar2 + -0x350);
            _objc_retain(puVar26);
            puVar25 = ppuVar27[2];
            ppuVar27[2] = puVar26;
            _objc_release(puVar25);
            ppuVar27[3] = *(undefined **)((long)pppuVar2 + -0x388);
            puVar25 = *(undefined **)((long)pppuVar2 + -0x348);
            func_0x00010bf51e00();
            puVar26 = ppuVar27[4];
            ppuVar27[4] = puVar25;
            _objc_release(puVar26);
            _objc_retain(ppuVar18);
            puVar25 = ppuVar27[5];
            ppuVar27[5] = (undefined *)ppuVar18;
            _objc_release(puVar25);
            uVar14 = *(undefined4 *)((long)pppuVar2 + -0x37c);
            *(char *)(ppuVar27 + 1) = (char)*(undefined4 *)((long)pppuVar2 + -0x380);
            *(char *)((long)ppuVar27 + 9) = (char)uVar14;
            puVar25 = *(undefined **)((long)pppuVar2 + -0x368);
            func_0x00010bf51e00();
            puVar26 = ppuVar27[6];
            ppuVar27[6] = puVar25;
            _objc_release(puVar26);
            puVar25 = puVar6;
            func_0x00010bf51e00();
            puVar26 = ppuVar27[7];
            ppuVar27[7] = puVar25;
            _objc_release(puVar26);
            puVar25 = puVar8;
            func_0x00010bf51e00();
            puVar26 = ppuVar27[8];
            ppuVar27[8] = puVar25;
            _objc_release(puVar26);
            puVar25 = puVar32;
            func_0x00010bf51e00();
            puVar26 = ppuVar27[9];
            ppuVar27[9] = puVar25;
            _objc_release(puVar26);
            puVar25 = puVar7;
            func_0x00010bf51e00();
            puVar26 = ppuVar27[10];
            ppuVar27[10] = puVar25;
            _objc_release(puVar26);
            *(char *)((long)ppuVar27 + 10) = (char)*(undefined4 *)((long)pppuVar2 + -0x370);
            puVar25 = puVar28;
            func_0x00010bf51e00();
            puVar26 = ppuVar27[0xb];
            ppuVar27[0xb] = puVar25;
            _objc_release(puVar26);
            puVar25 = puVar24;
            func_0x00010bf51e00();
            puVar26 = ppuVar27[0xc];
            ppuVar27[0xc] = puVar25;
            _objc_release(puVar26);
            puVar25 = *(undefined **)((long)pppuVar2 + -0x358);
            _objc_retain(puVar25);
            puVar26 = ppuVar27[0xd];
            ppuVar27[0xd] = puVar25;
            puVar25 = *(undefined **)((long)pppuVar2 + -0x360);
            _objc_release(puVar26);
            _objc_retain(puVar25);
            puVar26 = ppuVar27[0xe];
            ppuVar27[0xe] = puVar25;
            _objc_release(puVar26);
            puVar26 = *(undefined **)((long)pppuVar2 + -0x340);
            func_0x00010bf51e00();
            puVar22 = ppuVar27[0xf];
            ppuVar27[0xf] = puVar26;
            _objc_release(puVar22);
            puVar26 = puVar11;
            func_0x00010bf51e00();
            puVar22 = ppuVar27[0x10];
            ppuVar27[0x10] = puVar26;
            _objc_release(puVar22);
          }
          _objc_release(puVar11);
          _objc_release(*(undefined8 *)((long)pppuVar2 + -0x340));
          _objc_release(puVar25);
          _objc_release(*(undefined8 *)((long)pppuVar2 + -0x358));
          _objc_release(puVar24);
          _objc_release(puVar28);
          _objc_release(puVar7);
          _objc_release(puVar32);
          _objc_release(puVar8);
          _objc_release(puVar6);
          _objc_release(*(undefined8 *)((long)pppuVar2 + -0x368));
          _objc_release(ppuVar18);
          _objc_release(*(undefined8 *)((long)pppuVar2 + -0x348));
          _objc_release(*(undefined8 *)((long)pppuVar2 + -0x350));
          return ppuVar27;
        }
        *(undefined ***)((long)pppuVar2 + -0x2c0) = ppuVar4;
        *(undefined ***)((long)pppuVar2 + -0x2b8) = ppuVar10;
        ppuVar23 = (undefined **)**(undefined8 **)((long)pppuVar2 + -0x2a0);
        ppuVar29 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6790;
        ppuVar27 = (undefined **)0x0;
        if ((undefined **)**(undefined8 **)((long)pppuVar2 + -0x2a0) != ppuVar23) {
          _objc_enumerationMutation(ppuVar12);
        }
        ppuVar9 = (undefined **)**(undefined8 **)((long)pppuVar2 + -0x2a8);
        uVar16 = 0x10666daa8;
        pppuVar2 = (undefined ***)((long)pppuVar2 + -0x2c0);
      } while( true );
    }
    _objc_release(ppuVar5);
    _objc_release(ppuVar31);
    _objc_release(ppuStack_2e0);
    ppuVar23 = ppuStack_298;
    func_0x00010c2bbde0(ppuStack_298);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2acc80(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b9540(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2af100(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2af380(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bc8c0(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    ppuVar27 = ppuStack_2c8;
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar31 = ppuStack_2c8;
    func_0x00010c11b1e0();
    ppuStack_360 = ppuVar31;
    func_0x00010c14de00(puVar24);
    _objc_retainAutoreleasedReturnValue();
    ppuVar31 = ppuStack_2a0;
    puVar32 = puVar24;
    FUN_106669d18();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aabc0(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar32);
    _objc_release(puVar24);
    ppuVar4 = ppuVar27;
    func_0x00010c11b1e0();
    ppuVar29 = ppuVar18;
    ppuVar10 = ppuVar19;
    uVar34 = uVar21;
    if (ppuVar4 != (undefined **)0x0) {
      func_0x00010c11b1e0(ppuVar27);
      func_0x00010c2b6500(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      ppuVar29 = ppuVar18;
      ppuVar10 = ppuVar19;
      uVar34 = uVar21;
    }
    ppuVar4 = ppuVar27;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar4 = ppuVar27;
      func_0x00010c11b3a0(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6520(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar27;
    func_0x00010c11b180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar4 = ppuVar27;
      func_0x00010c11b180(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b64e0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      ppuVar4 = ppuVar27;
      func_0x00010c11b180(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b65a0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar27;
    func_0x00010c11b080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar4 = ppuVar27;
      func_0x00010c11b080(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b64c0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar27;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar4 = ppuVar27;
      func_0x00010bf25140(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a9ae0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar27;
    func_0x00010bfe4640();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar4 = ppuVar27;
      func_0x00010bfe4640(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2af860(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar27;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar4 = ppuVar27;
      func_0x00010bf68960(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b64a0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar27;
    func_0x00010c06d880();
    if ((int)ppuVar4 != 0) {
      func_0x00010c06d880(ppuVar27);
      func_0x00010c2b0fc0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    ppuVar4 = ppuVar27;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar18 = ppuVar4;
    func_0x00010c08fa60();
    _objc_release(ppuVar4);
    puVar24 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (ppuVar18 != (undefined **)0x0) {
      ppuVar4 = ppuVar27;
      func_0x00010c0b4680(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b3220(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar24);
      _objc_release(ppuVar4);
    }
    ppuVar4 = ppuVar31;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = (undefined **)PTR_PTR_1126cc6c0;
    _objc_opt_class();
    ppuVar19 = ppuVar4;
    _objc_opt_isKindOfClass();
    ppuVar18 = ppuVar4;
    if (((ulong)ppuVar19 & 1) == 0) {
      ppuVar18 = (undefined **)0x0;
    }
    _objc_retain(ppuVar18);
    _objc_release(ppuVar4);
    ppuVar19 = ppuVar18;
    func_0x00010c23aa60();
    if ((((int)ppuVar19 != 2) && (ppuVar19 = ppuVar18, func_0x00010c154b00(), 0 < (int)ppuVar19)) &&
       (ppuVar19 = ppuVar18, func_0x00010bf984c0(), puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0,
       0 < (int)ppuVar19)) {
      ppuVar19 = &PTR____CFConstantStringClassReference_110e58318;
      ppuVar12 = (undefined **)0x0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e58318);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar18;
      func_0x00010c154b00();
      ppuVar35 = ppuVar18;
      func_0x00010bf984c0();
      ppuStack_360 = ppuVar5;
      ppuStack_358 = ppuVar35;
      func_0x00010c14de00(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ab920(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar24);
      _objc_release(ppuVar19);
    }
    puVar24 = PTR_PTR_1126b64a0;
    if (ppuVar27 == (undefined **)0x0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      _objc_retain(ppuVar27);
      _objc_opt_new();
      ppuVar19 = ppuVar27;
      func_0x00010bf25140(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1745a0(puVar24);
      _objc_release(ppuVar19);
      puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c11b1e0(ppuVar27);
      func_0x00010c0df7c0(puVar32);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar32;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b60(puVar24);
      _objc_release(puVar6);
      _objc_release(puVar32);
      ppuVar19 = ppuVar27;
      func_0x00010c11b3a0(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5ba0(puVar24);
      _objc_release(ppuVar19);
      puVar32 = PTR_PTR_1126cc708;
      _objc_opt_new(PTR_PTR_1126cc708);
      func_0x00010c1c73c0(puVar24);
      _objc_release(puVar32);
      ppuVar19 = ppuVar27;
      func_0x00010c11b180(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar24;
      func_0x00010c0cc0c0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b20();
      _objc_release(puVar32);
      _objc_release(ppuVar19);
      ppuVar19 = ppuVar27;
      func_0x00010c11b080(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar24;
      func_0x00010c0cc0c0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c140();
      _objc_release(puVar32);
      _objc_release(ppuVar19);
      ppuVar19 = ppuVar27;
      func_0x00010c0b4680(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar24;
      func_0x00010c0cc0c0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c0ae0();
      _objc_release(puVar32);
      _objc_release(ppuVar19);
      ppuVar19 = ppuVar27;
      func_0x00010bf68960(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar27);
      puVar32 = puVar24;
      func_0x00010c0cc0c0(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18a720();
      _objc_release(puVar32);
      _objc_release(ppuVar19);
    }
    puVar32 = puVar24;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar32;
    func_0x00010c08fa60();
    _objc_release(puVar32);
    if (puVar6 != (undefined *)0x0) {
      puVar32 = puVar24;
      func_0x00010bf25140(puVar24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2a9ae0(ppuVar23);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar32);
    }
    puVar32 = PTR_PTR_1126b64b8;
    if (ppuVar18 == (undefined **)0x0) {
      puVar32 = (undefined *)0x0;
      ppuVar19 = ppuStack_2d8;
    }
    else {
      _objc_retain(ppuVar4);
      _objc_retain(ppuVar27);
      _objc_opt_new();
      ppuVar19 = ppuVar27;
      func_0x00010bf25140(ppuVar27);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c174420(puVar32);
      _objc_release(ppuVar19);
      func_0x00010c11b1e0(ppuVar27);
      _objc_release(ppuVar27);
      func_0x00010c1e5b60(puVar32);
      ppuVar19 = ppuVar4;
      func_0x00010c237cc0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c201be0(puVar32);
      _objc_release(ppuVar19);
      func_0x00010c23aa60(ppuVar4);
      _objc_release(ppuVar4);
      func_0x00010c2021e0(puVar32);
      ppuVar19 = ppuStack_2d8;
      if (puVar32 != (undefined *)0x0) {
        puVar6 = puVar32;
        func_0x00010c237cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c08fa60();
        _objc_release(puVar6);
        if (puVar7 != (undefined *)0x0) {
          func_0x00010c2b1560(ppuVar23);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar6 = puVar32;
          func_0x00010c237cc0(puVar32);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b8de0(ppuVar23);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
        puVar6 = puVar32;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c08fa60();
        _objc_release(puVar6);
        if (puVar7 != (undefined *)0x0) {
          puVar6 = puVar32;
          func_0x00010bf24ec0(puVar32);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2a9ae0(ppuVar23);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
        puVar6 = puVar32;
        func_0x00010c0ef600();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c08fa60();
        _objc_release(puVar6);
        if (puVar7 != (undefined *)0x0) {
          puVar6 = puVar32;
          func_0x00010c0ef600(puVar32);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b8f00(ppuVar23);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
      }
    }
    func_0x00010c2b8ee0(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6540(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    ppuVar5 = ppuVar27;
    func_0x00010c22ed80();
    func_0x00010c2b87e0(ppuVar23);
    _objc_unsafeClaimAutoreleasedReturnValue();
    ppuVar35 = ppuVar23;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar35;
    func_0x00010bf51e00();
    _objc_release(ppuVar35);
    _objc_release(puVar32);
    _objc_release(puVar24);
    _objc_release(ppuVar18);
    _objc_release(ppuVar23);
    _objc_release(ppuStack_288);
    _objc_release(ppuStack_290);
    _objc_release(ppuStack_2b8);
    _objc_release(puStack_2b0);
    _objc_release(ppuVar19);
    _objc_release(ppuVar31);
    _objc_release(ppuVar27);
    ppuVar27 = ppuStack_2a8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      pcStack_368 = FUN_10666bb8c;
      lStack_3e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppuVar18 = ppuVar29;
      ppuVar19 = ppuVar10;
      uVar21 = uVar34;
      uStack_6a4 = uVar14;
      uStack_640 = uVar34;
      ppppuStack_370 = &pppuStack_160;
      _objc_retain();
      _objc_retain(ppuVar12);
      ppuStack_678 = ppuVar5;
      _objc_retain(ppuVar5);
      _objc_retain(uVar16);
      _objc_retain(ppuVar29);
      _objc_retain(ppuVar10);
      _objc_retain(uVar34);
      ppuVar31 = ppuVar27;
      FUN_106669fa0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar31;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR_PTR_1126cc698;
      _objc_opt_class(PTR_PTR_1126cc698);
      ppuVar4 = ppuVar23;
      _objc_opt_isKindOfClass(ppuVar23,puVar24);
      ppuVar35 = ppuVar23;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar35 = (undefined **)0x0;
      }
      _objc_retain(ppuVar35);
      _objc_release(ppuVar23);
      ppuVar23 = ppuVar31;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR_PTR_1126cc6c8;
      _objc_opt_class(PTR_PTR_1126cc6c8);
      ppuVar4 = ppuVar23;
      _objc_opt_isKindOfClass(ppuVar23,puVar24);
      ppuStack_698 = ppuVar23;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuStack_698 = (undefined **)0x0;
      }
      _objc_retain();
      _objc_release(ppuVar23);
      ppuVar23 = ppuVar31;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR_PTR_1126cc6c0;
      _objc_opt_class(PTR_PTR_1126cc6c0);
      ppuVar4 = ppuVar23;
      _objc_opt_isKindOfClass(ppuVar23,puVar24);
      ppuStack_648 = ppuVar23;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuStack_648 = (undefined **)0x0;
      }
      _objc_retain();
      _objc_release(ppuVar23);
      ppuVar23 = ppuVar31;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR_PTR_1126cc6b8;
      _objc_opt_class(PTR_PTR_1126cc6b8);
      ppuVar4 = ppuVar23;
      _objc_opt_isKindOfClass(ppuVar23,puVar24);
      ppuVar36 = ppuVar23;
      if (((ulong)ppuVar4 & 1) == 0) {
        ppuVar36 = (undefined **)0x0;
      }
      _objc_retain(ppuVar36);
      _objc_release(ppuVar23);
      ppuStack_690 = ppuVar31;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = PTR_PTR_1126cc6a8;
      _objc_opt_class(PTR_PTR_1126cc6a8);
      ppuVar23 = ppuVar31;
      _objc_opt_isKindOfClass(ppuVar31,puVar24);
      ppuStack_660 = ppuVar31;
      if (((ulong)ppuVar23 & 1) == 0) {
        ppuStack_660 = (undefined **)0x0;
      }
      _objc_retain(ppuStack_660);
      _objc_release(ppuVar31);
      ppuStack_670 = ppuVar27;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(ppuVar35);
      _objc_retain(ppuVar36);
      _objc_retain(ppuStack_660);
      _objc_retain(ppuVar12);
      _objc_retain(uVar16);
      _objc_retain(ppuVar29);
      ppuStack_650 = ppuVar10;
      _objc_retain(ppuVar10);
      _objc_retain(uStack_640);
      ppuVar31 = ppuVar36;
      func_0x00010c29ba60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar23 = ppuVar31;
      func_0x00010bf529e0();
      _objc_release(ppuVar31);
      ppuStack_6a0 = ppuVar36;
      ppuStack_688 = ppuVar29;
      uStack_680 = uVar16;
      ppuStack_668 = ppuVar27;
      ppuStack_658 = ppuVar35;
      ppuStack_638 = ppuVar12;
      if (ppuVar23 == (undefined **)0x0) {
        ppuVar27 = (undefined **)0x0;
      }
      else {
        ppuVar10 = ppuVar36;
        func_0x00010c29ba60();
        _objc_retainAutoreleasedReturnValue();
        puStack_558 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_550 = 0xc2000000;
        pcStack_548 = FUN_10666e59c;
        puStack_540 = &UNK_1109323b8;
        _objc_retain(uVar16);
        uStack_538 = uVar16;
        _objc_retain(ppuVar29);
        ppuStack_530 = ppuVar29;
        _objc_retain(ppuVar27);
        ppuVar23 = ppuVar10;
        ppuStack_528 = ppuVar27;
        func_0x000100504554(ppuVar10,&puStack_558);
        ppuVar27 = ppuVar23;
        func_0x00010c0d3c80();
        ppuStack_5b0 = ppuVar27;
        _objc_release(ppuVar23);
        _objc_release(ppuVar10);
        uStack_578 = 0;
        uStack_580 = 0;
        uStack_568 = 0;
        uStack_570 = 0;
        puStack_598 = (undefined8 *)0x0;
        uStack_5a0 = 0;
        uStack_588 = 0;
        puStack_590 = (undefined8 *)0x0;
        func_0x00010c23f3e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar35;
        func_0x00010bf52a60();
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar29 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c67f0;
          ppuVar27 = &PTR_PTR_1126cc000;
          ppuVar31 = (undefined **)*puStack_590;
          ppuVar33 = (undefined **)0x0;
          ppuStack_630 = ppuVar31;
          ppuStack_628 = ppuVar35;
          ppuStack_620 = ppuVar5;
          if ((undefined **)*puStack_590 != ppuVar31) {
            _objc_enumerationMutation(ppuVar35);
          }
          ppuVar9 = (undefined **)*puStack_598;
          uVar16 = 0x10666bf5c;
          pppuVar2 = &ppuStack_7a0;
          pppppuVar37 = &ppppuStack_370;
          ppuStack_5a8 = ppuVar9;
          goto SUB_10666d4b4;
        }
        _objc_release(ppuVar35);
        ppuVar27 = ppuStack_660;
        ppuVar31 = ppuStack_660;
        func_0x00010bfb21e0(ppuStack_660);
        _objc_retainAutoreleasedReturnValue();
        ppuVar23 = ppuVar31;
        func_0x00010befde00();
        _objc_retainAutoreleasedReturnValue();
        FUN_10666e790();
        _objc_release(ppuVar23);
        _objc_release(ppuVar31);
        func_0x00010bfb21e0(ppuVar27);
        _objc_retainAutoreleasedReturnValue();
        ppuVar31 = ppuVar27;
        func_0x00010c0ec680();
        _objc_retainAutoreleasedReturnValue();
        FUN_10666e790();
        _objc_release(ppuVar31);
        _objc_release(ppuVar27);
        ppuVar27 = ppuStack_658;
        func_0x00010c23f3e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar31 = ppuVar27;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar23 = ppuVar31;
        func_0x000108f55418();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar31);
        _objc_release(ppuVar27);
        ppuVar27 = ppuStack_650;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c11b1e0(ppuStack_638);
        func_0x00010c0df7c0(puVar24);
        _objc_retainAutoreleasedReturnValue();
        puVar32 = puVar24;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar31 = ppuVar27;
        func_0x00010bf5b7e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar32);
        _objc_release(puVar24);
        _objc_release(ppuVar27);
        ppuVar27 = ppuVar23;
        func_0x000108f56d38();
        if (((int)ppuVar27 == 0) ||
           (ppuVar27 = ppuVar31, func_0x00010c080120(), ((ulong)ppuVar27 & 1) != 0)) {
          puVar24 = (undefined *)0x0;
        }
        else {
          puVar24 = PTR_PTR_1126cc730;
          _objc_alloc();
          ppuVar27 = ppuVar23;
          func_0x00010c0f0b40();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_5a8 = ppuVar27;
          func_0x00010c0f0b20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar23;
          ppuStack_5d0 = ppuVar27;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_5b8 = ppuVar4;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = (undefined **)PTR_PTR_1126cc6f8;
          ppuStack_5e0 = ppuVar4;
          _objc_alloc();
          ppuVar27 = ppuVar23;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_5c0 = ppuVar27;
          func_0x00010bfe5ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_5c8 = ppuVar27;
          func_0x0001080724f0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_5d8 = ppuVar27;
          func_0x00010c0473c0();
          ppuVar19 = ppuVar23;
          ppuStack_5e8 = ppuVar18;
          func_0x00010c1197a0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar19;
          func_0x00010bfe45e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar29 = ppuVar10;
          func_0x00010bfe2ee0();
          ppuVar5 = ppuVar23;
          func_0x00010c1197a0(ppuVar23);
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar5;
          func_0x00010bfe45e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar27 = ppuVar12;
          func_0x00010c0b5940();
          func_0x000100c4a928(ppuVar29,ppuVar27);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuStack_5d0;
          ppuVar27 = ppuStack_5e0;
          uStack_740 = 0;
          uStack_748 = 0;
          puStack_758 = (undefined *)0x0;
          ppuStack_760 = (undefined **)0x0;
          lStack_768 = 0;
          uStack_778 = 0xffffffffffffffff;
          uStack_780 = 0;
          ppuStack_788 = (undefined **)((ulong)ppuStack_788 & 0xffffffffffff0000);
          ppuStack_790 = (undefined **)0x0;
          ppuStack_798 = (undefined **)((ulong)ppuStack_798 & 0xffffffffffffff00);
          ppuStack_7a0 = (undefined **)0x0;
          ppuStack_770 = ppuVar18;
          ppuStack_750 = ppuVar29;
          func_0x00010c048a80();
          _objc_release(ppuVar29);
          _objc_release(ppuVar12);
          _objc_release(ppuVar5);
          _objc_release(ppuVar10);
          _objc_release(ppuVar19);
          _objc_release(ppuStack_5e8);
          _objc_release(ppuStack_5d8);
          _objc_release(ppuStack_5c8);
          _objc_release(ppuStack_5c0);
          _objc_release(ppuVar27);
          _objc_release(ppuStack_5b8);
          _objc_release(ppuVar4);
          _objc_release(ppuStack_5a8);
        }
        ppuVar4 = ppuStack_668;
        ppuVar36 = ppuStack_6a0;
        puVar32 = PTR___NSConcreteStackBlock_11034bd00;
        ppuVar27 = ppuStack_668;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar27;
        func_0x000108072414();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar27);
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puStack_460 = puVar32;
        uStack_458 = 0xc2000000;
        pcStack_450 = FUN_10666eaf0;
        puStack_448 = &UNK_1109323e8;
        _objc_retain(ppuVar18);
        ppuStack_440 = ppuVar18;
        _objc_retain(ppuVar4);
        ppuVar27 = ppuStack_5b0;
        ppuStack_438 = ppuVar4;
        func_0x000100504554(ppuStack_5b0,&puStack_460);
        ppuVar19 = ppuVar27;
        func_0x00010c0d3c80();
        _objc_release(ppuVar27);
        if (puVar24 != (undefined *)0x0) {
          puVar32 = PTR_PTR_1126c9a80;
          func_0x00010c11b520(PTR_PTR_1126c9a80);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar19);
          _objc_release(puVar32);
        }
        ppuVar27 = ppuVar19;
        func_0x00010bf51e00();
        _objc_release(ppuVar19);
        _objc_release(ppuStack_438);
        _objc_release(ppuStack_440);
        _objc_release(ppuVar4);
        _objc_release(ppuVar18);
        _objc_release(ppuVar31);
        _objc_release(ppuVar23);
        _objc_release(puVar24);
        _objc_release(ppuStack_5b0);
        _objc_release(ppuStack_528);
        _objc_release(ppuStack_530);
        _objc_release(uStack_538);
      }
      ppuVar23 = ppuStack_638;
      _objc_release(uStack_640);
      _objc_release(ppuStack_650);
      _objc_release(ppuStack_688);
      _objc_release(uStack_680);
      _objc_release(ppuVar23);
      _objc_release(ppuStack_660);
      _objc_release(ppuVar36);
      _objc_release(ppuStack_658);
      ppuVar31 = ppuStack_668;
      _objc_release(ppuStack_668);
      _objc_release(ppuVar31);
      ppuVar31 = ppuStack_678;
      if ((ppuStack_678 == (undefined **)0x0) ||
         (ppuVar4 = ppuStack_678, func_0x00010bfdcdc0(), (int)ppuVar4 == 0)) {
        ppuStack_5a8 = (undefined **)0x0;
      }
      else {
        ppuVar23 = ppuVar31;
        func_0x00010c25e5c0(ppuVar31);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar23;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar27;
        func_0x000107a53668(ppuVar27,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(ppuVar23);
        ppuVar23 = ppuVar31;
        func_0x00010c25e5c0(ppuVar31);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar23;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = ppuVar27;
        func_0x000107a539dc(ppuVar27,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(ppuVar23);
        if (ppuVar18 == (undefined **)0x0) {
          ppuStack_5a8 = (undefined **)0x0;
        }
        else {
          ppuVar23 = (undefined **)PTR_PTR_1126cc6d0;
          _objc_alloc();
          func_0x00010c250f20(ppuVar18);
          ppuVar4 = ppuVar31;
          func_0x00010c25e5e0(ppuVar31);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          ppuVar10 = ppuVar31;
          func_0x00010bf08ca0(ppuVar31);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c296d80();
          func_0x00010bfbbf60(ppuVar31);
          func_0x00010c021980();
          ppuStack_5a8 = ppuVar23;
          _objc_release(ppuVar10);
          _objc_release(ppuVar4);
        }
        ppuVar23 = ppuStack_638;
        _objc_release(ppuVar19);
        _objc_release(ppuVar18);
      }
      ppuVar31 = (undefined **)PTR_PTR_1126cc6b0;
      _objc_alloc();
      func_0x00010c2828e0();
      func_0x00010bff1f20();
      ppuVar4 = ppuStack_670;
      ppuVar18 = ppuStack_670;
      ppuStack_5b0 = ppuVar31;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = ppuVar18;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar18);
      ppuVar31 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      ppuVar18 = ppuVar23;
      func_0x00010c11b1e0();
      ppuStack_7a0 = ppuVar18;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar31;
      FUN_106669d18();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar31);
      ppuVar31 = ppuVar18;
      func_0x000108f51f98();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = (undefined **)PTR_PTR_1126bdd30;
      ppuStack_5b8 = ppuVar31;
      _objc_alloc();
      ppuStack_618 = ppuVar10;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar31 = ppuVar4;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_5f8 = ppuVar31;
      func_0x000108072414();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar23;
      ppuStack_600 = ppuVar31;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuStack_648;
      ppuVar31 = ppuStack_648;
      ppuStack_608 = ppuVar10;
      func_0x00010c237cc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar23;
      ppuStack_610 = ppuVar31;
      func_0x00010c11b1e0();
      ppuVar31 = ppuVar19;
      ppuStack_620 = ppuVar10;
      func_0x00010c0b4ca0();
      ppuVar10 = ppuVar23;
      ppuStack_630 = ppuVar31;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar31 = ppuVar23;
      ppuStack_5c0 = ppuVar10;
      func_0x00010c11b180();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar23;
      ppuStack_5c8 = ppuVar31;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar33 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
      ppuStack_5d0 = ppuVar10;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_628 = ppuVar23;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      ppuVar31 = ppuVar29;
      func_0x00010c23aa60();
      ppuVar23 = ppuStack_648;
      uVar16 = 0;
      iVar3 = (int)ppuVar31;
      if (iVar3 < 2) {
        if (iVar3 == -0x4524111) {
          uVar16 = 2;
        }
        else if (iVar3 == 1) {
          uVar16 = 1;
        }
      }
      else if (iVar3 == 2) {
        uVar16 = 3;
      }
      else if (iVar3 == 3) {
        uVar16 = 4;
      }
      ppuVar10 = ppuStack_648;
      ppuStack_5f0 = ppuVar4;
      ppuStack_5e8 = ppuVar18;
      ppuStack_5e0 = ppuVar19;
      ppuStack_5d8 = ppuVar27;
      func_0x00010bf984c0();
      func_0x00010c154b00();
      ppuVar12 = ppuStack_698;
      func_0x00010c250f20();
      ppuVar4 = ppuStack_638;
      ppuVar36 = ppuStack_638;
      func_0x00010bf68960();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar36;
      func_0x00010c08fa60();
      puVar24 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (ppuVar9 == (undefined **)0x0) {
        puVar24 = (undefined *)0x0;
      }
      else {
        ppuVar29 = ppuVar4;
        func_0x00010bf68960();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c22ed80();
      ppuVar5 = ppuStack_5d8;
      ppuVar1 = ppuStack_600;
      ppuVar27 = ppuStack_608;
      ppuVar31 = ppuStack_610;
      uStack_6a8 = 0;
      uStack_6b0 = 0;
      uStack_6b6 = 0;
      uStack_6b7 = SUB81(ppuVar4,0);
      uStack_6b8 = 0;
      ppuStack_6c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6748;
      ppuStack_6c0 = ppuStack_5b8;
      uStack_6d8 = 0;
      uStack_6d0 = 0x16;
      uStack_6e8 = 0;
      uStack_6e0 = 0xffffffffffffffff;
      uStack_6f0 = 0;
      ppuStack_700 = ppuStack_5a8;
      uStack_6f8 = 0;
      ppuStack_708 = ppuStack_5d8;
      uStack_710 = 0;
      uStack_718 = 0;
      uStack_720 = 0;
      uStack_728 = 0;
      uStack_730 = 0;
      uStack_740 = 0;
      ppuStack_738 = ppuStack_5b8;
      uStack_748 = CONCAT62(uStack_748._2_6_,0x100);
      uStack_748 = CONCAT71(uStack_748._1_7_,(char)uStack_6a4);
      ppuStack_750 = ppuStack_5b0;
      uStack_780 = 0;
      ppuStack_798 = ppuStack_5c8;
      ppuStack_790 = ppuStack_5d0;
      ppuStack_7a0 = ppuStack_5c0;
      uVar21 = 0;
      ppuVar35 = ppuStack_618;
      ppuVar18 = ppuStack_620;
      ppuVar19 = ppuStack_630;
      ppuStack_788 = ppuVar33;
      uStack_778 = uVar16;
      ppuStack_770 = (undefined **)(long)(int)ppuVar10;
      lStack_768 = (long)(int)ppuVar23;
      ppuStack_760 = ppuVar12;
      puStack_758 = puVar24;
      func_0x00010c059080();
      if (ppuVar9 != (undefined **)0x0) {
        _objc_release(puVar24);
        _objc_release(ppuVar29);
      }
      _objc_release(ppuVar36);
      _objc_release(ppuVar33);
      _objc_release(ppuStack_628);
      _objc_release(ppuStack_5d0);
      _objc_release(ppuStack_5c8);
      _objc_release(ppuStack_5c0);
      _objc_release(ppuVar31);
      _objc_release(ppuVar27);
      _objc_release(ppuVar1);
      _objc_release(ppuStack_5f8);
      _objc_release(ppuStack_5f0);
      _objc_release(ppuStack_5b8);
      _objc_release(ppuStack_5e8);
      _objc_release(ppuStack_5e0);
      _objc_release(ppuStack_5b0);
      _objc_release(ppuStack_5a8);
      _objc_release(ppuVar5);
      _objc_release(ppuStack_660);
      _objc_release(ppuStack_6a0);
      _objc_release(ppuStack_648);
      _objc_release(ppuStack_698);
      _objc_release(ppuStack_658);
      _objc_release(ppuStack_690);
      _objc_release(uStack_640);
      _objc_release(ppuStack_650);
      _objc_release(ppuStack_688);
      _objc_release(uStack_680);
      _objc_release(ppuStack_678);
      _objc_release(ppuStack_638);
      ppuVar10 = ppuStack_670;
      _objc_release();
      ppuVar4 = ppuVar35;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3e0) {
        ___stack_chk_fail();
        ppuStack_7e8 = ppuVar5;
        ppuStack_7e0 = ppuVar31;
        ppuStack_7d8 = ppuVar27;
        ppuStack_7c8 = ppuVar1;
        uStack_7a8 = 0x10666d1dc;
        pppppuVar37 = &ppppuStack_7b0;
        lStack_810 = *(long *)PTR____stack_chk_guard_11034bdc0;
        ppuStack_800 = ppuVar36;
        ppuStack_7f8 = ppuVar35;
        ppuStack_7f0 = ppuVar33;
        ppuStack_7d0 = ppuVar29;
        puStack_7c0 = puVar24;
        ppuStack_7b8 = ppuVar9;
        ppppuStack_7b0 = &ppppuStack_370;
        FUN_106669fa0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar10;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR_PTR_1126cc698;
        _objc_opt_class(PTR_PTR_1126cc698);
        ppuVar29 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar24);
        ppuVar23 = ppuVar4;
        if (((ulong)ppuVar29 & 1) == 0) {
          ppuVar23 = (undefined **)0x0;
        }
        _objc_retain(ppuVar23);
        _objc_release(ppuVar4);
        uStack_8a8 = 0;
        uStack_8b0 = 0;
        uStack_898 = 0;
        uStack_8a0 = 0;
        puStack_8c8 = (undefined8 *)0x0;
        uStack_8d0 = 0;
        uStack_8b8 = 0;
        puStack_8c0 = (undefined8 *)0x0;
        ppuVar12 = ppuVar23;
        func_0x00010c23f3e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar12;
        func_0x00010bf52a60();
        if (ppuVar4 == (undefined **)0x0) {
          ppuVar29 = (undefined **)0x0;
          _objc_release(ppuVar12);
          _objc_release(ppuVar23);
          ppuVar9 = ppuVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_810) {
            return (undefined **)0x0;
          }
          uVar16 = 0x10666d4b4;
          ___stack_chk_fail();
          pppuVar2 = &ppuStack_8e0;
        }
        else {
          ppuVar27 = (undefined **)*puStack_8c0;
          ppuVar29 = (undefined **)0x0;
          ppuStack_8e0 = ppuVar23;
          ppuStack_8d8 = ppuVar10;
          if ((undefined **)*puStack_8c0 != ppuVar27) {
            _objc_enumerationMutation(ppuVar12);
          }
          ppuVar9 = (undefined **)*puStack_8c8;
          uVar16 = 0x10666d2d0;
          pppuVar2 = &ppuStack_8e0;
          ppuVar31 = ppuVar4;
        }
        goto SUB_10666d4b4;
      }
    }
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return ppuVar4;
}



/* Entry: 10666bb8c; end: 10666d1db;  */

/* WARNING: Possible PIC construction at 0x00010666bf58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010666d2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010666daa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010666d2d0) */
/* WARNING: Removing unreachable block (ram,0x00010666d310) */
/* WARNING: Removing unreachable block (ram,0x00010666d328) */
/* WARNING: Removing unreachable block (ram,0x00010666d444) */
/* WARNING: Removing unreachable block (ram,0x00010666d368) */
/* WARNING: Removing unreachable block (ram,0x00010666d3a0) */
/* WARNING: Removing unreachable block (ram,0x00010666d3fc) */
/* WARNING: Removing unreachable block (ram,0x00010666d3b8) */
/* WARNING: Removing unreachable block (ram,0x00010666d454) */
/* WARNING: Removing unreachable block (ram,0x00010666d3f8) */
/* WARNING: Removing unreachable block (ram,0x00010666d40c) */
/* WARNING: Removing unreachable block (ram,0x00010666d418) */
/* WARNING: Removing unreachable block (ram,0x00010666d434) */
/* WARNING: Removing unreachable block (ram,0x00010666d458) */
/* WARNING: Removing unreachable block (ram,0x00010666bf5c) */
/* WARNING: Removing unreachable block (ram,0x00010666bf94) */
/* WARNING: Removing unreachable block (ram,0x00010666bfc4) */
/* WARNING: Removing unreachable block (ram,0x00010666bfd4) */
/* WARNING: Removing unreachable block (ram,0x00010666c010) */
/* WARNING: Removing unreachable block (ram,0x00010666c0c0) */
/* WARNING: Removing unreachable block (ram,0x00010666c10c) */
/* WARNING: Removing unreachable block (ram,0x00010666c158) */
/* WARNING: Removing unreachable block (ram,0x00010666c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010666c370) */
/* WARNING: Removing unreachable block (ram,0x00010666c5e4) */
/* WARNING: Removing unreachable block (ram,0x00010666c640) */
/* WARNING: Removing unreachable block (ram,0x00010666c66c) */
/* WARNING: Removing unreachable block (ram,0x00010666c648) */
/* WARNING: Removing unreachable block (ram,0x00010666c5ec) */
/* WARNING: Removing unreachable block (ram,0x00010666c374) */
/* WARNING: Removing unreachable block (ram,0x00010666c38c) */
/* WARNING: Removing unreachable block (ram,0x00010666c1c0) */
/* WARNING: Removing unreachable block (ram,0x00010666c394) */
/* WARNING: Removing unreachable block (ram,0x00010666c20c) */
/* WARNING: Removing unreachable block (ram,0x00010666c21c) */
/* WARNING: Removing unreachable block (ram,0x00010666c220) */
/* WARNING: Removing unreachable block (ram,0x00010666c230) */
/* WARNING: Removing unreachable block (ram,0x00010666c238) */
/* WARNING: Removing unreachable block (ram,0x00010666c2cc) */
/* WARNING: Removing unreachable block (ram,0x00010666c30c) */
/* WARNING: Removing unreachable block (ram,0x00010666c250) */
/* WARNING: Removing unreachable block (ram,0x00010666c258) */
/* WARNING: Removing unreachable block (ram,0x00010666c298) */
/* WARNING: Removing unreachable block (ram,0x00010666c334) */
/* WARNING: Removing unreachable block (ram,0x00010666c344) */
/* WARNING: Removing unreachable block (ram,0x00010666c350) */
/* WARNING: Removing unreachable block (ram,0x00010666c36c) */
/* WARNING: Removing unreachable block (ram,0x00010666c398) */
/* WARNING: Removing unreachable block (ram,0x00010666c40c) */
/* WARNING: Removing unreachable block (ram,0x00010666c5c4) */
/* WARNING: Removing unreachable block (ram,0x00010666c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010666c678) */
/* WARNING: Removing unreachable block (ram,0x00010666daa8) */
/* WARNING: Removing unreachable block (ram,0x00010666dae4) */
/* WARNING: Removing unreachable block (ram,0x00010666dc00) */
/* WARNING: Removing unreachable block (ram,0x00010666db38) */
/* WARNING: Removing unreachable block (ram,0x00010666db70) */
/* WARNING: Removing unreachable block (ram,0x00010666dc10) */
/* WARNING: Removing unreachable block (ram,0x00010666dbc8) */
/* WARNING: Removing unreachable block (ram,0x00010666dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010666dbf0) */
/* WARNING: Removing unreachable block (ram,0x00010666dc14) */

undefined **
FUN_10666bb8c(undefined **param_1,undefined **param_2,long param_3,undefined4 param_4,
             undefined8 param_5,undefined **param_6,undefined **param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  undefined8 uVar34;
  undefined **ppuVar35;
  undefined **ppuVar36;
  undefined8 *****pppppuVar37;
  undefined8 uVar38;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  undefined8 uStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_4b0;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined *puStack_460;
  undefined **ppuStack_458;
  undefined8 ****ppppuStack_450;
  undefined8 uStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined **ppuStack_410;
  long lStack_408;
  undefined **ppuStack_400;
  undefined *puStack_3f8;
  undefined **ppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined1 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 uStack_398;
  undefined2 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined1 uStack_358;
  undefined1 uStack_357;
  undefined1 uStack_356;
  undefined8 uStack_350;
  undefined1 uStack_348;
  undefined4 uStack_344;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined8 uStack_320;
  long lStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_6;
  ppuVar12 = param_7;
  uVar23 = param_8;
  uStack_344 = param_4;
  uStack_2e0 = param_8;
  _objc_retain();
  _objc_retain(param_2);
  lStack_318 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar8 = param_1;
  FUN_106669fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar36 = ppuVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc698;
  _objc_opt_class(PTR_PTR_1126cc698);
  ppuVar32 = ppuVar36;
  _objc_opt_isKindOfClass(ppuVar36,puVar25);
  ppuVar35 = ppuVar36;
  if (((ulong)ppuVar32 & 1) == 0) {
    ppuVar35 = (undefined **)0x0;
  }
  _objc_retain(ppuVar35);
  _objc_release(ppuVar36);
  ppuVar36 = ppuVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc6c8;
  _objc_opt_class(PTR_PTR_1126cc6c8);
  ppuVar32 = ppuVar36;
  _objc_opt_isKindOfClass(ppuVar36,puVar25);
  ppuStack_338 = ppuVar36;
  if (((ulong)ppuVar32 & 1) == 0) {
    ppuStack_338 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar36);
  ppuVar36 = ppuVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc6c0;
  _objc_opt_class(PTR_PTR_1126cc6c0);
  ppuVar32 = ppuVar36;
  _objc_opt_isKindOfClass(ppuVar36,puVar25);
  ppuStack_2e8 = ppuVar36;
  if (((ulong)ppuVar32 & 1) == 0) {
    ppuStack_2e8 = (undefined **)0x0;
  }
  _objc_retain();
  _objc_release(ppuVar36);
  ppuVar32 = ppuVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc6b8;
  _objc_opt_class(PTR_PTR_1126cc6b8);
  ppuVar17 = ppuVar32;
  _objc_opt_isKindOfClass(ppuVar32,puVar25);
  ppuVar36 = ppuVar32;
  if (((ulong)ppuVar17 & 1) == 0) {
    ppuVar36 = (undefined **)0x0;
  }
  _objc_retain(ppuVar36);
  _objc_release(ppuVar32);
  ppuStack_330 = ppuVar8;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc6a8;
  _objc_opt_class(PTR_PTR_1126cc6a8);
  ppuVar32 = ppuVar8;
  _objc_opt_isKindOfClass(ppuVar8,puVar25);
  ppuStack_300 = ppuVar8;
  if (((ulong)ppuVar32 & 1) == 0) {
    ppuStack_300 = (undefined **)0x0;
  }
  _objc_retain(ppuStack_300);
  _objc_release(ppuVar8);
  ppuStack_310 = param_1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(ppuVar35);
  _objc_retain(ppuVar36);
  _objc_retain(ppuStack_300);
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuStack_2f0 = param_7;
  _objc_retain(param_7);
  _objc_retain(uStack_2e0);
  ppuVar8 = ppuVar36;
  func_0x00010c29ba60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = ppuVar8;
  func_0x00010bf529e0();
  _objc_release(ppuVar8);
  ppuStack_340 = ppuVar36;
  ppuStack_328 = param_6;
  uStack_320 = param_5;
  ppuStack_308 = param_1;
  ppuStack_2f8 = ppuVar35;
  ppuStack_2d8 = param_2;
  if (ppuVar32 == (undefined **)0x0) {
    ppuVar35 = (undefined **)0x0;
  }
  else {
    ppuVar17 = ppuVar36;
    func_0x00010c29ba60();
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1f0 = 0xc2000000;
    pcStack_1e8 = FUN_10666e59c;
    puStack_1e0 = &UNK_1109323b8;
    _objc_retain(param_5);
    uStack_1d8 = param_5;
    _objc_retain(param_6);
    ppuStack_1d0 = param_6;
    _objc_retain(param_1);
    ppuVar32 = ppuVar17;
    ppuStack_1c8 = param_1;
    func_0x000100504554(ppuVar17,&puStack_1f8);
    ppuVar8 = ppuVar32;
    func_0x00010c0d3c80();
    ppuStack_250 = ppuVar8;
    _objc_release(ppuVar32);
    _objc_release(ppuVar17);
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    puStack_238 = (undefined8 *)0x0;
    uStack_240 = 0;
    uStack_228 = 0;
    puStack_230 = (undefined8 *)0x0;
    func_0x00010c23f3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar35;
    func_0x00010bf52a60();
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar29 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c67f0;
      ppuVar30 = &PTR_PTR_1126cc000;
      ppuVar31 = (undefined **)*puStack_230;
      ppuVar33 = (undefined **)0x0;
      ppuStack_2d0 = ppuVar31;
      ppuStack_2c8 = ppuVar35;
      ppuStack_2c0 = ppuVar8;
      if ((undefined **)*puStack_230 != ppuVar31) {
        _objc_enumerationMutation(ppuVar35);
      }
      ppuVar9 = (undefined **)*puStack_238;
      uVar38 = 0x10666bf5c;
      pppuVar6 = &ppuStack_440;
      pppppuVar37 = (undefined8 *****)&stack0xfffffffffffffff0;
      ppuStack_248 = ppuVar9;
      goto SUB_10666d4b4;
    }
    _objc_release(ppuVar35);
    ppuVar35 = ppuStack_300;
    ppuVar8 = ppuStack_300;
    func_0x00010bfb21e0(ppuStack_300);
    _objc_retainAutoreleasedReturnValue();
    ppuVar36 = ppuVar8;
    func_0x00010befde00();
    _objc_retainAutoreleasedReturnValue();
    FUN_10666e790();
    _objc_release(ppuVar36);
    _objc_release(ppuVar8);
    func_0x00010bfb21e0(ppuVar35);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar35;
    func_0x00010c0ec680();
    _objc_retainAutoreleasedReturnValue();
    FUN_10666e790();
    _objc_release(ppuVar8);
    _objc_release(ppuVar35);
    ppuVar35 = ppuStack_2f8;
    func_0x00010c23f3e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar35;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar8;
    func_0x000108f55418();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar35);
    ppuVar35 = ppuStack_2f0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c11b1e0(ppuStack_2d8);
    func_0x00010c0df7c0(puVar25);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar25;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar35;
    func_0x00010bf5b7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar25);
    _objc_release(ppuVar35);
    ppuVar35 = ppuVar32;
    func_0x000108f56d38();
    if (((int)ppuVar35 == 0) ||
       (ppuVar35 = ppuVar8, func_0x00010c080120(), ((ulong)ppuVar35 & 1) != 0)) {
      puVar25 = (undefined *)0x0;
    }
    else {
      puVar25 = PTR_PTR_1126cc730;
      _objc_alloc();
      ppuVar35 = ppuVar32;
      func_0x00010c0f0b40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_248 = ppuVar35;
      func_0x00010c0f0b20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar36 = ppuVar32;
      ppuStack_270 = ppuVar35;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_258 = ppuVar36;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = (undefined **)PTR_PTR_1126cc6f8;
      ppuStack_280 = ppuVar36;
      _objc_alloc();
      ppuVar35 = ppuVar32;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_260 = ppuVar35;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_268 = ppuVar35;
      func_0x0001080724f0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_278 = ppuVar35;
      func_0x00010c0473c0();
      ppuVar12 = ppuVar32;
      ppuStack_288 = ppuVar11;
      func_0x00010c1197a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = ppuVar12;
      func_0x00010bfe45e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar29 = ppuVar17;
      func_0x00010bfe2ee0();
      ppuVar30 = ppuVar32;
      func_0x00010c1197a0(ppuVar32);
      _objc_retainAutoreleasedReturnValue();
      ppuVar33 = ppuVar30;
      func_0x00010bfe45e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar35 = ppuVar33;
      func_0x00010c0b5940();
      func_0x000100c4a928(ppuVar29,ppuVar35);
      _objc_retainAutoreleasedReturnValue();
      ppuVar36 = ppuStack_270;
      ppuVar35 = ppuStack_280;
      uStack_3e0 = 0;
      uStack_3e8 = 0;
      puStack_3f8 = (undefined *)0x0;
      ppuStack_400 = (undefined **)0x0;
      lStack_408 = 0;
      uStack_418 = 0xffffffffffffffff;
      uStack_420 = 0;
      ppuStack_428 = (undefined **)((ulong)ppuStack_428 & 0xffffffffffff0000);
      ppuStack_430 = (undefined **)0x0;
      ppuStack_438 = (undefined **)((ulong)ppuStack_438 & 0xffffffffffffff00);
      ppuStack_440 = (undefined **)0x0;
      ppuStack_410 = ppuVar11;
      ppuStack_3f0 = ppuVar29;
      func_0x00010c048a80();
      _objc_release(ppuVar29);
      _objc_release(ppuVar33);
      _objc_release(ppuVar30);
      _objc_release(ppuVar17);
      _objc_release(ppuVar12);
      _objc_release(ppuStack_288);
      _objc_release(ppuStack_278);
      _objc_release(ppuStack_268);
      _objc_release(ppuStack_260);
      _objc_release(ppuVar35);
      _objc_release(ppuStack_258);
      _objc_release(ppuVar36);
      _objc_release(ppuStack_248);
    }
    ppuVar11 = ppuStack_308;
    ppuVar36 = ppuStack_340;
    puVar10 = PTR___NSConcreteStackBlock_11034bd00;
    ppuVar35 = ppuStack_308;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar35;
    func_0x000108072414();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar35);
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = puVar10;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10666eaf0;
    puStack_e8 = &UNK_1109323e8;
    _objc_retain(ppuVar12);
    ppuStack_e0 = ppuVar12;
    _objc_retain(ppuVar11);
    ppuVar35 = ppuStack_250;
    ppuStack_d8 = ppuVar11;
    func_0x000100504554(ppuStack_250,&puStack_100);
    ppuVar17 = ppuVar35;
    func_0x00010c0d3c80();
    _objc_release(ppuVar35);
    if (puVar25 != (undefined *)0x0) {
      puVar10 = PTR_PTR_1126c9a80;
      func_0x00010c11b520(PTR_PTR_1126c9a80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(ppuVar17);
      _objc_release(puVar10);
    }
    ppuVar35 = ppuVar17;
    func_0x00010bf51e00();
    _objc_release(ppuVar17);
    _objc_release(ppuStack_d8);
    _objc_release(ppuStack_e0);
    _objc_release(ppuVar11);
    _objc_release(ppuVar12);
    _objc_release(ppuVar8);
    _objc_release(ppuVar32);
    _objc_release(puVar25);
    _objc_release(ppuStack_250);
    _objc_release(ppuStack_1c8);
    _objc_release(ppuStack_1d0);
    _objc_release(uStack_1d8);
  }
  ppuVar32 = ppuStack_2d8;
  _objc_release(uStack_2e0);
  _objc_release(ppuStack_2f0);
  _objc_release(ppuStack_328);
  _objc_release(uStack_320);
  _objc_release(ppuVar32);
  _objc_release(ppuStack_300);
  _objc_release(ppuVar36);
  _objc_release(ppuStack_2f8);
  ppuVar8 = ppuStack_308;
  _objc_release(ppuStack_308);
  _objc_release(ppuVar8);
  lVar4 = lStack_318;
  if ((lStack_318 == 0) || (lVar13 = lStack_318, func_0x00010bfdcdc0(), (int)lVar13 == 0)) {
    ppuStack_248 = (undefined **)0x0;
  }
  else {
    lVar13 = lVar4;
    func_0x00010c25e5c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar35;
    func_0x000107a53668(ppuVar35,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar13);
    lVar13 = lVar4;
    func_0x00010c25e5c0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar36 = ppuVar35;
    func_0x000107a539dc(ppuVar35,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar13);
    if (ppuVar8 == (undefined **)0x0) {
      ppuStack_248 = (undefined **)0x0;
    }
    else {
      ppuVar32 = (undefined **)PTR_PTR_1126cc6d0;
      _objc_alloc();
      func_0x00010c250f20(ppuVar8);
      lVar13 = lVar4;
      func_0x00010c25e5e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      lVar14 = lVar4;
      func_0x00010bf08ca0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010bfbbf60(lVar4);
      func_0x00010c021980();
      ppuStack_248 = ppuVar32;
      _objc_release(lVar14);
      _objc_release(lVar13);
    }
    ppuVar32 = ppuStack_2d8;
    _objc_release(ppuVar36);
    _objc_release(ppuVar8);
  }
  ppuVar8 = (undefined **)PTR_PTR_1126cc6b0;
  _objc_alloc();
  func_0x00010c2828e0();
  func_0x00010bff1f20();
  ppuVar36 = ppuStack_310;
  ppuVar11 = ppuStack_310;
  ppuStack_250 = ppuVar8;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar11);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar11 = ppuVar32;
  func_0x00010c11b1e0();
  ppuStack_440 = ppuVar11;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar8;
  FUN_106669d18();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  ppuVar8 = ppuVar11;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = (undefined **)PTR_PTR_1126bdd30;
  ppuStack_258 = ppuVar8;
  _objc_alloc();
  ppuStack_2b8 = ppuVar17;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar36;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_298 = ppuVar8;
  func_0x000108072414();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar32;
  ppuStack_2a0 = ppuVar8;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar29 = ppuStack_2e8;
  ppuVar8 = ppuStack_2e8;
  ppuStack_2a8 = ppuVar17;
  func_0x00010c237cc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar32;
  ppuStack_2b0 = ppuVar8;
  func_0x00010c11b1e0();
  ppuVar8 = ppuVar12;
  ppuStack_2c0 = ppuVar17;
  func_0x00010c0b4ca0();
  ppuVar17 = ppuVar32;
  ppuStack_2d0 = ppuVar8;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar32;
  ppuStack_260 = ppuVar17;
  func_0x00010c11b180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar32;
  ppuStack_268 = ppuVar8;
  func_0x00010c11b3a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar33 = (undefined **)PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuStack_270 = ppuVar17;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_2c8 = ppuVar32;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar29;
  func_0x00010c23aa60();
  ppuVar32 = ppuStack_2e8;
  uVar38 = 0;
  iVar7 = (int)ppuVar8;
  if (iVar7 < 2) {
    if (iVar7 == -0x4524111) {
      uVar38 = 2;
    }
    else if (iVar7 == 1) {
      uVar38 = 1;
    }
  }
  else if (iVar7 == 2) {
    uVar38 = 3;
  }
  else if (iVar7 == 3) {
    uVar38 = 4;
  }
  ppuVar17 = ppuStack_2e8;
  ppuStack_290 = ppuVar36;
  ppuStack_288 = ppuVar11;
  ppuStack_280 = ppuVar12;
  ppuStack_278 = ppuVar35;
  func_0x00010bf984c0();
  func_0x00010c154b00();
  ppuVar9 = ppuStack_338;
  func_0x00010c250f20();
  ppuVar35 = ppuStack_2d8;
  ppuVar36 = ppuStack_2d8;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar36;
  func_0x00010c08fa60();
  puVar25 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (ppuVar15 == (undefined **)0x0) {
    puVar25 = (undefined *)0x0;
  }
  else {
    ppuVar29 = ppuVar35;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c22ed80();
  ppuVar8 = ppuStack_278;
  ppuVar5 = ppuStack_2a0;
  ppuVar30 = ppuStack_2a8;
  ppuVar31 = ppuStack_2b0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_356 = 0;
  uStack_357 = SUB81(ppuVar35,0);
  uStack_358 = 0;
  ppuStack_368 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6748;
  ppuStack_360 = ppuStack_258;
  uStack_378 = 0;
  uStack_370 = 0x16;
  uStack_388 = 0;
  uStack_380 = 0xffffffffffffffff;
  uStack_390 = 0;
  ppuStack_3a0 = ppuStack_248;
  uStack_398 = 0;
  ppuStack_3a8 = ppuStack_278;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3e0 = 0;
  ppuStack_3d8 = ppuStack_258;
  uStack_3e8 = CONCAT62(uStack_3e8._2_6_,0x100);
  uStack_3e8 = CONCAT71(uStack_3e8._1_7_,(char)uStack_344);
  ppuStack_3f0 = ppuStack_250;
  uStack_420 = 0;
  ppuStack_438 = ppuStack_268;
  ppuStack_430 = ppuStack_270;
  ppuStack_440 = ppuStack_260;
  uVar23 = 0;
  ppuVar16 = ppuStack_2b8;
  ppuVar11 = ppuStack_2c0;
  ppuVar12 = ppuStack_2d0;
  ppuStack_428 = ppuVar33;
  uStack_418 = uVar38;
  ppuStack_410 = (undefined **)(long)(int)ppuVar17;
  lStack_408 = (long)(int)ppuVar32;
  ppuStack_400 = ppuVar9;
  puStack_3f8 = puVar25;
  func_0x00010c059080();
  if (ppuVar15 != (undefined **)0x0) {
    _objc_release(puVar25);
    _objc_release(ppuVar29);
  }
  _objc_release(ppuVar36);
  _objc_release(ppuVar33);
  _objc_release(ppuStack_2c8);
  _objc_release(ppuStack_270);
  _objc_release(ppuStack_268);
  _objc_release(ppuStack_260);
  _objc_release(ppuVar31);
  _objc_release(ppuVar30);
  _objc_release(ppuVar5);
  _objc_release(ppuStack_298);
  _objc_release(ppuStack_290);
  _objc_release(ppuStack_258);
  _objc_release(ppuStack_288);
  _objc_release(ppuStack_280);
  _objc_release(ppuStack_250);
  _objc_release(ppuStack_248);
  _objc_release(ppuVar8);
  _objc_release(ppuStack_300);
  _objc_release(ppuStack_340);
  _objc_release(ppuStack_2e8);
  _objc_release(ppuStack_338);
  _objc_release(ppuStack_2f8);
  _objc_release(ppuStack_330);
  _objc_release(uStack_2e0);
  _objc_release(ppuStack_2f0);
  _objc_release(ppuStack_328);
  _objc_release(uStack_320);
  _objc_release(lStack_318);
  _objc_release(ppuStack_2d8);
  ppuVar17 = ppuStack_310;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
    return ppuVar16;
  }
  ___stack_chk_fail();
  ppuStack_488 = ppuVar8;
  ppuStack_480 = ppuVar31;
  ppuStack_478 = ppuVar30;
  ppuStack_468 = ppuVar5;
  uStack_448 = 0x10666d1dc;
  pppppuVar37 = &ppppuStack_450;
  lStack_4b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_4a0 = ppuVar36;
  ppuStack_498 = ppuVar16;
  ppuStack_490 = ppuVar33;
  ppuStack_470 = ppuVar29;
  puStack_460 = puVar25;
  ppuStack_458 = ppuVar15;
  ppppuStack_450 = (undefined8 ****)&stack0xfffffffffffffff0;
  FUN_106669fa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar35 = ppuVar17;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126cc698;
  _objc_opt_class(PTR_PTR_1126cc698);
  ppuVar29 = ppuVar35;
  _objc_opt_isKindOfClass(ppuVar35,puVar25);
  ppuVar32 = ppuVar35;
  if (((ulong)ppuVar29 & 1) == 0) {
    ppuVar32 = (undefined **)0x0;
  }
  _objc_retain(ppuVar32);
  _objc_release(ppuVar35);
  uStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  puStack_568 = (undefined8 *)0x0;
  uStack_570 = 0;
  uStack_558 = 0;
  puStack_560 = (undefined8 *)0x0;
  param_2 = ppuVar32;
  func_0x00010c23f3e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = param_2;
  func_0x00010bf52a60();
  ppuVar35 = ppuVar16;
  if (ppuVar15 == (undefined **)0x0) {
    ppuVar29 = (undefined **)0x0;
    _objc_release(param_2);
    _objc_release(ppuVar32);
    ppuVar9 = ppuVar17;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b0) {
      return (undefined **)0x0;
    }
    uVar38 = 0x10666d4b4;
    ___stack_chk_fail();
    pppuVar6 = &ppuStack_580;
  }
  else {
    ppuVar30 = (undefined **)*puStack_560;
    ppuVar29 = (undefined **)0x0;
    ppuStack_580 = ppuVar32;
    ppuStack_578 = ppuVar17;
    if ((undefined **)*puStack_560 != ppuVar30) {
      _objc_enumerationMutation(param_2);
    }
    ppuVar9 = (undefined **)*puStack_568;
    uVar38 = 0x10666d2d0;
    pppuVar6 = &ppuStack_580;
    ppuVar31 = ppuVar15;
  }
SUB_10666d4b4:
  do {
    *(undefined ***)((long)pppuVar6 + -0x60) = ppuVar36;
    *(undefined ***)((long)pppuVar6 + -0x58) = ppuVar35;
    *(undefined ***)((long)pppuVar6 + -0x50) = ppuVar33;
    *(undefined ***)((long)pppuVar6 + -0x48) = ppuVar8;
    *(undefined ***)((long)pppuVar6 + -0x40) = ppuVar31;
    *(undefined ***)((long)pppuVar6 + -0x38) = ppuVar30;
    *(undefined ***)((long)pppuVar6 + -0x30) = ppuVar29;
    *(undefined ***)((long)pppuVar6 + -0x28) = param_2;
    *(undefined ***)((long)pppuVar6 + -0x20) = ppuVar32;
    *(undefined ***)((long)pppuVar6 + -0x18) = ppuVar17;
    *(undefined8 ******)((long)pppuVar6 + -0x10) = pppppuVar37;
    *(undefined8 *)((long)pppuVar6 + -8) = uVar38;
    *(undefined8 *)((long)pppuVar6 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf981c0(ppuVar9);
    ppuVar16 = ppuVar15;
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)pppuVar6 + -0x128) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x130) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x118) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x120) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x108) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x110) = 0;
    *(undefined8 *)((long)pppuVar6 + -0xf8) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x100) = 0;
    *(undefined ***)((long)pppuVar6 + -0x180) = ppuVar9;
    func_0x00010bf981a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar9;
    func_0x00010bf52a60();
    ppuVar32 = ppuVar31;
    if (ppuVar17 != (undefined **)0x0) {
      ppuVar29 = (undefined **)**(undefined8 **)((long)pppuVar6 + -0x120);
      ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c67a8;
      do {
        ppuVar32 = (undefined **)0x0;
        do {
          if ((undefined **)**(undefined8 **)((long)pppuVar6 + -0x120) != ppuVar29) {
            _objc_enumerationMutation(ppuVar9);
          }
          ppuVar35 = *(undefined ***)(*(long *)((long)pppuVar6 + -0x128) + (long)ppuVar32 * 8);
          ppuVar33 = ppuVar35;
          func_0x00010bf44380();
          _objc_retainAutoreleasedReturnValue();
          ppuVar30 = ppuVar35;
          func_0x00010bf44560();
          iVar7 = (int)ppuVar30;
          if (iVar7 < 0x27) {
            if (0x12 < iVar7) {
              if (iVar7 == 0x13) {
                puVar25 = PTR_PTR_1126cc700;
                _objc_opt_class(PTR_PTR_1126cc700);
                *(undefined8 *)((long)pppuVar6 + -0x170) = 0;
                ppuVar35 = ppuVar33;
                func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x170));
                _objc_retainAutoreleasedReturnValue();
                ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x170);
                _objc_retain(ppuVar36);
              }
              else if (iVar7 == 0x19) {
                puVar25 = PTR_PTR_1126cc760;
                _objc_opt_class(PTR_PTR_1126cc760);
                *(undefined8 *)((long)pppuVar6 + -0x138) = 0;
                ppuVar35 = ppuVar33;
                func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x138));
                _objc_retainAutoreleasedReturnValue();
                ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x138);
                _objc_retain(ppuVar36);
              }
              else {
                if (iVar7 != 0x1d) goto LAB_10666d92c;
                puVar25 = PTR_PTR_1126cc740;
                _objc_opt_class(PTR_PTR_1126cc740);
                *(undefined8 *)((long)pppuVar6 + -0x178) = 0;
                ppuVar35 = ppuVar33;
                func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x178));
                _objc_retainAutoreleasedReturnValue();
                ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x178);
                _objc_retain(ppuVar36);
              }
LAB_10666d918:
              func_0x00010c1d0640(ppuVar16);
              goto LAB_10666d91c;
            }
            if (iVar7 == 0xe) {
              puVar25 = PTR_PTR_1126cc738;
              _objc_opt_class(PTR_PTR_1126cc738);
              *(undefined8 *)((long)pppuVar6 + -0x168) = 0;
              ppuVar35 = ppuVar33;
              func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x168));
              _objc_retainAutoreleasedReturnValue();
              ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x168);
              _objc_retain(ppuVar36);
              goto LAB_10666d918;
            }
            if (iVar7 == 0x12) {
              puVar25 = PTR_PTR_1126cc768;
              _objc_opt_class(PTR_PTR_1126cc768);
              *(undefined8 *)((long)pppuVar6 + -0x140) = 0;
              ppuVar35 = ppuVar33;
              func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x140));
              _objc_retainAutoreleasedReturnValue();
              ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x140);
              _objc_retain(ppuVar36);
              goto LAB_10666d918;
            }
          }
          else {
            if (iVar7 < 0x30) {
              if (iVar7 == 0x27) {
                puVar25 = PTR_PTR_1126cc720;
                _objc_opt_class(PTR_PTR_1126cc720);
                *(undefined8 *)((long)pppuVar6 + -0x148) = 0;
                ppuVar35 = ppuVar33;
                func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x148));
                _objc_retainAutoreleasedReturnValue();
                ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x148);
                _objc_retain(ppuVar36);
              }
              else {
                if (iVar7 != 0x2a) goto LAB_10666d92c;
                puVar25 = PTR_PTR_1126b3068;
                _objc_opt_class(PTR_PTR_1126b3068);
                *(undefined8 *)((long)pppuVar6 + -0x158) = 0;
                ppuVar35 = ppuVar33;
                func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x158));
                _objc_retainAutoreleasedReturnValue();
                ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x158);
                _objc_retain(ppuVar36);
              }
              goto LAB_10666d918;
            }
            if (iVar7 != 0x30) {
              if (iVar7 == 0x35) {
                puVar25 = PTR_PTR_1126cc6d8;
                _objc_opt_class(PTR_PTR_1126cc6d8);
                *(undefined8 *)((long)pppuVar6 + -0x150) = 0;
                ppuVar35 = ppuVar33;
                func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x150));
                _objc_retainAutoreleasedReturnValue();
                ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x150);
                _objc_retain(ppuVar36);
              }
              else {
                if (iVar7 != 0x36) goto LAB_10666d92c;
                puVar25 = PTR_PTR_1126cc6e0;
                _objc_opt_class(PTR_PTR_1126cc6e0);
                *(undefined8 *)((long)pppuVar6 + -0x160) = 0;
                ppuVar35 = ppuVar33;
                func_0x000108f12c3c(ppuVar33,puVar25,(undefined1 *)((long)pppuVar6 + -0x160));
                _objc_retainAutoreleasedReturnValue();
                ppuVar36 = *(undefined ***)((long)pppuVar6 + -0x160);
                _objc_retain(ppuVar36);
              }
              goto LAB_10666d918;
            }
            ppuVar36 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc();
            func_0x00010c008340();
            ppuVar35 = (undefined **)PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4bc0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = ppuVar36;
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar16);
            _objc_release(ppuVar15);
LAB_10666d91c:
            _objc_release(ppuVar35);
            _objc_release(ppuVar36);
          }
LAB_10666d92c:
          _objc_release(ppuVar33);
          ppuVar32 = (undefined **)((long)ppuVar32 + 1);
        } while (ppuVar17 != ppuVar32);
        ppuVar17 = ppuVar9;
        func_0x00010bf52a60();
        ppuVar30 = (undefined **)0x0;
      } while (ppuVar17 != (undefined **)0x0);
    }
    _objc_release(ppuVar9);
    ppuVar17 = *(undefined ***)((long)pppuVar6 + -0x180);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar6 + -0x70))
    goto _objc_autoreleaseReturnValue;
    ___stack_chk_fail();
    *(undefined ***)((long)pppuVar6 + -0x1e0) = ppuVar36;
    *(undefined ***)((long)pppuVar6 + -0x1d8) = ppuVar35;
    *(undefined ***)((long)pppuVar6 + -0x1d0) = ppuVar33;
    *(undefined ***)((long)pppuVar6 + -0x1c8) = ppuVar8;
    *(undefined ***)((long)pppuVar6 + -0x1c0) = ppuVar32;
    *(undefined ***)((long)pppuVar6 + -0x1b8) = ppuVar30;
    *(undefined ***)((long)pppuVar6 + -0x1b0) = ppuVar29;
    *(undefined ***)((long)pppuVar6 + -0x1a8) = ppuVar9;
    *(undefined ***)((long)pppuVar6 + -0x1a0) = ppuVar16;
    *(undefined ***)((long)pppuVar6 + -0x198) = ppuVar15;
    *(undefined1 **)((long)pppuVar6 + -400) = (undefined1 *)((long)pppuVar6 + -0x10);
    *(undefined8 *)((long)pppuVar6 + -0x188) = 0x10666d9ac;
    pppppuVar37 = (undefined8 *****)((long)pppuVar6 + -400);
    *(undefined8 *)((long)pppuVar6 + -0x1f0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_106669fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar31 = ppuVar17;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_PTR_1126cc698;
    _objc_opt_class(PTR_PTR_1126cc698);
    ppuVar9 = ppuVar31;
    _objc_opt_isKindOfClass(ppuVar31,puVar25);
    ppuVar29 = ppuVar31;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar29 = (undefined **)0x0;
    }
    _objc_retain(ppuVar29);
    _objc_release(ppuVar31);
    *(undefined8 *)((long)pppuVar6 + -0x288) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x290) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x278) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x280) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x2a8) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x2b0) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x298) = 0;
    *(undefined8 *)((long)pppuVar6 + -0x2a0) = 0;
    param_2 = ppuVar29;
    func_0x00010c23f3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = (undefined1 *)((long)pppuVar6 + -0x2b0);
    puVar20 = (undefined1 *)((long)pppuVar6 + -0x270);
    uVar38 = 0x10;
    ppuVar31 = param_2;
    func_0x00010bf52a60();
    uVar22 = (undefined4)uVar23;
    uVar21 = SUB84(ppuVar12,0);
    if (ppuVar31 == (undefined **)0x0) {
      _objc_release(param_2);
      _objc_release(ppuVar29);
      ppuVar12 = ppuVar17;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pppuVar6 + -0x1f0)) {
        return (undefined **)0x0;
      }
      ___stack_chk_fail();
      *(undefined ***)((long)pppuVar6 + -800) = ppuVar36;
      *(undefined ***)((long)pppuVar6 + -0x318) = ppuVar35;
      *(undefined ***)((long)pppuVar6 + -0x310) = ppuVar33;
      *(undefined ***)((long)pppuVar6 + -0x308) = ppuVar8;
      *(undefined ***)((long)pppuVar6 + -0x300) = ppuVar32;
      *(undefined ***)((long)pppuVar6 + -0x2f8) = ppuVar30;
      *(undefined8 *)((long)pppuVar6 + -0x2f0) = 0;
      *(undefined ***)((long)pppuVar6 + -0x2e8) = param_2;
      *(undefined ***)((long)pppuVar6 + -0x2e0) = ppuVar29;
      *(undefined ***)((long)pppuVar6 + -0x2d8) = ppuVar17;
      *(undefined8 ******)((long)pppuVar6 + -0x2d0) = pppppuVar37;
      *(code **)((long)pppuVar6 + -0x2c8) = FUN_10666dc70;
      *(undefined4 *)((long)pppuVar6 + -0x380) = uVar21;
      *(undefined4 *)((long)pppuVar6 + -0x37c) = uVar22;
      *(undefined1 **)((long)pppuVar6 + -0x388) = puVar20;
      *(undefined1 **)((long)pppuVar6 + -0x350) = puVar19;
      *(undefined ***)((long)pppuVar6 + -0x370) = ppuVar12;
      *(undefined8 *)((long)pppuVar6 + -0x378) = *(undefined8 *)((long)pppuVar6 + -0x268);
      *(undefined8 *)((long)pppuVar6 + -0x340) = *(undefined8 *)((long)pppuVar6 + -0x270);
      *(undefined8 *)((long)pppuVar6 + -0x360) = *(undefined8 *)((long)pppuVar6 + -0x278);
      puVar25 = *(undefined **)((long)pppuVar6 + -0x288);
      uVar23 = *(undefined8 *)((long)pppuVar6 + -0x280);
      puVar28 = *(undefined **)((long)pppuVar6 + -0x290);
      puVar10 = *(undefined **)((long)pppuVar6 + -0x2a8);
      puVar2 = *(undefined **)((long)pppuVar6 + -0x2a0);
      puVar1 = *(undefined **)((long)pppuVar6 + -0x2b8);
      puVar3 = *(undefined **)((long)pppuVar6 + -0x2b0);
      uVar34 = *(undefined8 *)((long)pppuVar6 + -0x2c0);
      _objc_retain(puVar19);
      *(undefined8 *)((long)pppuVar6 + -0x348) = uVar38;
      _objc_retain(uVar38);
      _objc_retain(ppuVar11);
      *(undefined8 *)((long)pppuVar6 + -0x368) = uVar34;
      _objc_retain(uVar34);
      _objc_retain(puVar1);
      _objc_retain(puVar3);
      _objc_retain(puVar10);
      _objc_retain(puVar2);
      _objc_retain(puVar28);
      _objc_retain(puVar25);
      *(undefined8 *)((long)pppuVar6 + -0x358) = uVar23;
      puVar26 = *(undefined **)((long)pppuVar6 + -0x360);
      _objc_retain(uVar23);
      _objc_retain(puVar26);
      _objc_retain(*(undefined8 *)((long)pppuVar6 + -0x340));
      puVar18 = *(undefined **)((long)pppuVar6 + -0x378);
      _objc_retain();
      *(undefined8 *)((long)pppuVar6 + -0x338) = *(undefined8 *)((long)pppuVar6 + -0x370);
      *(undefined **)((long)pppuVar6 + -0x330) = PTR_PTR_1126f23d0;
      ppuVar35 = (undefined **)((long)pppuVar6 + -0x338);
      _objc_msgSendSuper2(ppuVar35,PTR_s_init_1125d9248);
      if (ppuVar35 != (undefined **)0x0) {
        *(uint *)((long)pppuVar6 + -0x370) = (uint)*(byte *)((long)pppuVar6 + -0x298);
        puVar27 = *(undefined **)((long)pppuVar6 + -0x350);
        _objc_retain(puVar27);
        puVar26 = ppuVar35[2];
        ppuVar35[2] = puVar27;
        _objc_release(puVar26);
        ppuVar35[3] = *(undefined **)((long)pppuVar6 + -0x388);
        puVar26 = *(undefined **)((long)pppuVar6 + -0x348);
        func_0x00010bf51e00();
        puVar27 = ppuVar35[4];
        ppuVar35[4] = puVar26;
        _objc_release(puVar27);
        _objc_retain(ppuVar11);
        puVar26 = ppuVar35[5];
        ppuVar35[5] = (undefined *)ppuVar11;
        _objc_release(puVar26);
        uVar21 = *(undefined4 *)((long)pppuVar6 + -0x37c);
        *(char *)(ppuVar35 + 1) = (char)*(undefined4 *)((long)pppuVar6 + -0x380);
        *(char *)((long)ppuVar35 + 9) = (char)uVar21;
        puVar26 = *(undefined **)((long)pppuVar6 + -0x368);
        func_0x00010bf51e00();
        puVar27 = ppuVar35[6];
        ppuVar35[6] = puVar26;
        _objc_release(puVar27);
        puVar26 = puVar1;
        func_0x00010bf51e00();
        puVar27 = ppuVar35[7];
        ppuVar35[7] = puVar26;
        _objc_release(puVar27);
        puVar26 = puVar3;
        func_0x00010bf51e00();
        puVar27 = ppuVar35[8];
        ppuVar35[8] = puVar26;
        _objc_release(puVar27);
        puVar26 = puVar10;
        func_0x00010bf51e00();
        puVar27 = ppuVar35[9];
        ppuVar35[9] = puVar26;
        _objc_release(puVar27);
        puVar26 = puVar2;
        func_0x00010bf51e00();
        puVar27 = ppuVar35[10];
        ppuVar35[10] = puVar26;
        _objc_release(puVar27);
        *(char *)((long)ppuVar35 + 10) = (char)*(undefined4 *)((long)pppuVar6 + -0x370);
        puVar26 = puVar28;
        func_0x00010bf51e00();
        puVar27 = ppuVar35[0xb];
        ppuVar35[0xb] = puVar26;
        _objc_release(puVar27);
        puVar26 = puVar25;
        func_0x00010bf51e00();
        puVar27 = ppuVar35[0xc];
        ppuVar35[0xc] = puVar26;
        _objc_release(puVar27);
        puVar26 = *(undefined **)((long)pppuVar6 + -0x358);
        _objc_retain(puVar26);
        puVar27 = ppuVar35[0xd];
        ppuVar35[0xd] = puVar26;
        puVar26 = *(undefined **)((long)pppuVar6 + -0x360);
        _objc_release(puVar27);
        _objc_retain(puVar26);
        puVar27 = ppuVar35[0xe];
        ppuVar35[0xe] = puVar26;
        _objc_release(puVar27);
        puVar27 = *(undefined **)((long)pppuVar6 + -0x340);
        func_0x00010bf51e00();
        puVar24 = ppuVar35[0xf];
        ppuVar35[0xf] = puVar27;
        _objc_release(puVar24);
        puVar27 = puVar18;
        func_0x00010bf51e00();
        puVar24 = ppuVar35[0x10];
        ppuVar35[0x10] = puVar27;
        _objc_release(puVar24);
      }
      _objc_release(puVar18);
      _objc_release(*(undefined8 *)((long)pppuVar6 + -0x340));
      _objc_release(puVar26);
      _objc_release(*(undefined8 *)((long)pppuVar6 + -0x358));
      _objc_release(puVar25);
      _objc_release(puVar28);
      _objc_release(puVar2);
      _objc_release(puVar10);
      _objc_release(puVar3);
      _objc_release(puVar1);
      _objc_release(*(undefined8 *)((long)pppuVar6 + -0x368));
      _objc_release(ppuVar11);
      _objc_release(*(undefined8 *)((long)pppuVar6 + -0x348));
      _objc_release(*(undefined8 *)((long)pppuVar6 + -0x350));
      return ppuVar35;
    }
    *(undefined ***)((long)pppuVar6 + -0x2c0) = ppuVar29;
    *(undefined ***)((long)pppuVar6 + -0x2b8) = ppuVar17;
    ppuVar32 = (undefined **)**(undefined8 **)((long)pppuVar6 + -0x2a0);
    ppuVar29 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6790;
    ppuVar30 = (undefined **)0x0;
    if ((undefined **)**(undefined8 **)((long)pppuVar6 + -0x2a0) != ppuVar32) {
      _objc_enumerationMutation(param_2);
    }
    ppuVar9 = (undefined **)**(undefined8 **)((long)pppuVar6 + -0x2a8);
    uVar38 = 0x10666daa8;
    pppuVar6 = (undefined ***)((long)pppuVar6 + -0x2c0);
  } while( true );
}



/* Entry: 10666d1dc; end: 10666dc6f;  */

/* WARNING: Possible PIC construction at 0x00010666d2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010666daa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010666d2d0) */
/* WARNING: Removing unreachable block (ram,0x00010666d310) */
/* WARNING: Removing unreachable block (ram,0x00010666d328) */
/* WARNING: Removing unreachable block (ram,0x00010666d444) */
/* WARNING: Removing unreachable block (ram,0x00010666d368) */
/* WARNING: Removing unreachable block (ram,0x00010666d3a0) */
/* WARNING: Removing unreachable block (ram,0x00010666d3fc) */
/* WARNING: Removing unreachable block (ram,0x00010666d3b8) */
/* WARNING: Removing unreachable block (ram,0x00010666d454) */
/* WARNING: Removing unreachable block (ram,0x00010666d3f8) */
/* WARNING: Removing unreachable block (ram,0x00010666d40c) */
/* WARNING: Removing unreachable block (ram,0x00010666d418) */
/* WARNING: Removing unreachable block (ram,0x00010666d434) */
/* WARNING: Removing unreachable block (ram,0x00010666d458) */
/* WARNING: Removing unreachable block (ram,0x00010666daa8) */
/* WARNING: Removing unreachable block (ram,0x00010666dae4) */
/* WARNING: Removing unreachable block (ram,0x00010666dc00) */
/* WARNING: Removing unreachable block (ram,0x00010666db38) */
/* WARNING: Removing unreachable block (ram,0x00010666db70) */
/* WARNING: Removing unreachable block (ram,0x00010666dc10) */
/* WARNING: Removing unreachable block (ram,0x00010666dbc8) */
/* WARNING: Removing unreachable block (ram,0x00010666dbd4) */
/* WARNING: Removing unreachable block (ram,0x00010666dbf0) */
/* WARNING: Removing unreachable block (ram,0x00010666dc14) */

undefined1 * FUN_10666d1dc(ulong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 in_x5;
  undefined4 in_w6;
  undefined4 in_w7;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long unaff_x23;
  ulong unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined8 uVar23;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar24;
  ulong uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar15 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_106669fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126cc698;
  _objc_opt_class(PTR_PTR_1126cc698);
  uVar11 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar10);
  uVar20 = uVar9;
  if ((uVar11 & 1) == 0) {
    uVar20 = 0;
  }
  _objc_retain(uVar20);
  _objc_release(uVar9);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_128 = (ulong *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uVar9 = uVar20;
  func_0x00010c23f3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010bf52a60();
  if (uVar11 == 0) {
    ppuVar22 = (undefined **)0x0;
    _objc_release(uVar9);
    _objc_release(uVar20);
    uVar12 = param_1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return (undefined1 *)0x0;
    }
    uVar24 = 0x10666d4b4;
    ___stack_chk_fail();
    puVar7 = &uStack_140;
  }
  else {
    unaff_x23 = *plStack_120;
    ppuVar22 = (undefined **)0x0;
    uStack_140 = uVar20;
    uStack_138 = param_1;
    if (*plStack_120 != unaff_x23) {
      _objc_enumerationMutation(uVar9);
    }
    uVar12 = *puStack_128;
    uVar24 = 0x10666d2d0;
    puVar7 = &uStack_140;
    unaff_x24 = uVar11;
  }
  do {
    *(undefined **)((long)puVar7 + -0x60) = unaff_x28;
    *(undefined **)((long)puVar7 + -0x58) = unaff_x27;
    *(undefined **)((long)puVar7 + -0x50) = unaff_x26;
    *(undefined ***)((long)puVar7 + -0x48) = unaff_x25;
    *(ulong *)((long)puVar7 + -0x40) = unaff_x24;
    *(long *)((long)puVar7 + -0x38) = unaff_x23;
    *(undefined ***)((long)puVar7 + -0x30) = ppuVar22;
    *(ulong *)((long)puVar7 + -0x28) = uVar9;
    *(ulong *)((long)puVar7 + -0x20) = uVar20;
    *(ulong *)((long)puVar7 + -0x18) = param_1;
    *(undefined1 **)((long)puVar7 + -0x10) = puVar15;
    *(undefined8 *)((long)puVar7 + -8) = uVar24;
    *(undefined8 *)((long)puVar7 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf981c0(uVar12);
    puVar13 = puVar10;
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)puVar7 + -0x128) = 0;
    *(undefined8 *)((long)puVar7 + -0x130) = 0;
    *(undefined8 *)((long)puVar7 + -0x118) = 0;
    *(undefined8 *)((long)puVar7 + -0x120) = 0;
    *(undefined8 *)((long)puVar7 + -0x108) = 0;
    *(undefined8 *)((long)puVar7 + -0x110) = 0;
    *(undefined8 *)((long)puVar7 + -0xf8) = 0;
    *(undefined8 *)((long)puVar7 + -0x100) = 0;
    *(ulong *)((long)puVar7 + -0x180) = uVar12;
    func_0x00010bf981a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar12;
    func_0x00010bf52a60();
    if (uVar20 != 0) {
      ppuVar22 = (undefined **)**(undefined8 **)((long)puVar7 + -0x120);
      unaff_x25 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c67a8;
      do {
        unaff_x24 = 0;
        do {
          if ((undefined **)**(undefined8 **)((long)puVar7 + -0x120) != ppuVar22) {
            _objc_enumerationMutation(uVar12);
          }
          unaff_x27 = *(undefined **)(*(long *)((long)puVar7 + -0x128) + unaff_x24 * 8);
          unaff_x26 = unaff_x27;
          func_0x00010bf44380();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = unaff_x27;
          func_0x00010bf44560();
          iVar8 = (int)puVar14;
          if (iVar8 < 0x27) {
            if (0x12 < iVar8) {
              if (iVar8 == 0x13) {
                puVar14 = PTR_PTR_1126cc700;
                _objc_opt_class(PTR_PTR_1126cc700);
                *(undefined8 *)((long)puVar7 + -0x170) = 0;
                unaff_x27 = unaff_x26;
                func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x170));
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = *(undefined **)((long)puVar7 + -0x170);
                _objc_retain(unaff_x28);
              }
              else if (iVar8 == 0x19) {
                puVar14 = PTR_PTR_1126cc760;
                _objc_opt_class(PTR_PTR_1126cc760);
                *(undefined8 *)((long)puVar7 + -0x138) = 0;
                unaff_x27 = unaff_x26;
                func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x138));
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = *(undefined **)((long)puVar7 + -0x138);
                _objc_retain(unaff_x28);
              }
              else {
                if (iVar8 != 0x1d) goto LAB_10666d92c;
                puVar14 = PTR_PTR_1126cc740;
                _objc_opt_class(PTR_PTR_1126cc740);
                *(undefined8 *)((long)puVar7 + -0x178) = 0;
                unaff_x27 = unaff_x26;
                func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x178));
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = *(undefined **)((long)puVar7 + -0x178);
                _objc_retain(unaff_x28);
              }
LAB_10666d918:
              func_0x00010c1d0640(puVar13);
              goto LAB_10666d91c;
            }
            if (iVar8 == 0xe) {
              puVar14 = PTR_PTR_1126cc738;
              _objc_opt_class(PTR_PTR_1126cc738);
              *(undefined8 *)((long)puVar7 + -0x168) = 0;
              unaff_x27 = unaff_x26;
              func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x168));
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = *(undefined **)((long)puVar7 + -0x168);
              _objc_retain(unaff_x28);
              goto LAB_10666d918;
            }
            if (iVar8 == 0x12) {
              puVar14 = PTR_PTR_1126cc768;
              _objc_opt_class(PTR_PTR_1126cc768);
              *(undefined8 *)((long)puVar7 + -0x140) = 0;
              unaff_x27 = unaff_x26;
              func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x140));
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = *(undefined **)((long)puVar7 + -0x140);
              _objc_retain(unaff_x28);
              goto LAB_10666d918;
            }
          }
          else {
            if (iVar8 < 0x30) {
              if (iVar8 == 0x27) {
                puVar14 = PTR_PTR_1126cc720;
                _objc_opt_class(PTR_PTR_1126cc720);
                *(undefined8 *)((long)puVar7 + -0x148) = 0;
                unaff_x27 = unaff_x26;
                func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x148));
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = *(undefined **)((long)puVar7 + -0x148);
                _objc_retain(unaff_x28);
              }
              else {
                if (iVar8 != 0x2a) goto LAB_10666d92c;
                puVar14 = PTR_PTR_1126b3068;
                _objc_opt_class(PTR_PTR_1126b3068);
                *(undefined8 *)((long)puVar7 + -0x158) = 0;
                unaff_x27 = unaff_x26;
                func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x158));
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = *(undefined **)((long)puVar7 + -0x158);
                _objc_retain(unaff_x28);
              }
              goto LAB_10666d918;
            }
            if (iVar8 != 0x30) {
              if (iVar8 == 0x35) {
                puVar14 = PTR_PTR_1126cc6d8;
                _objc_opt_class(PTR_PTR_1126cc6d8);
                *(undefined8 *)((long)puVar7 + -0x150) = 0;
                unaff_x27 = unaff_x26;
                func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x150));
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = *(undefined **)((long)puVar7 + -0x150);
                _objc_retain(unaff_x28);
              }
              else {
                if (iVar8 != 0x36) goto LAB_10666d92c;
                puVar14 = PTR_PTR_1126cc6e0;
                _objc_opt_class(PTR_PTR_1126cc6e0);
                *(undefined8 *)((long)puVar7 + -0x160) = 0;
                unaff_x27 = unaff_x26;
                func_0x000108f12c3c(unaff_x26,puVar14,(undefined1 *)((long)puVar7 + -0x160));
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = *(undefined **)((long)puVar7 + -0x160);
                _objc_retain(unaff_x28);
              }
              goto LAB_10666d918;
            }
            unaff_x28 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc();
            func_0x00010c008340();
            unaff_x27 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c2a4bc0();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = unaff_x28;
            func_0x00010c25d0a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar13);
            _objc_release(puVar10);
LAB_10666d91c:
            _objc_release(unaff_x27);
            _objc_release(unaff_x28);
          }
LAB_10666d92c:
          _objc_release(unaff_x26);
          unaff_x24 = unaff_x24 + 1;
        } while (uVar20 != unaff_x24);
        uVar20 = uVar12;
        func_0x00010bf52a60();
        unaff_x23 = 0;
      } while (uVar20 != 0);
    }
    _objc_release(uVar12);
    param_1 = *(ulong *)((long)puVar7 + -0x180);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar7 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
      return puVar13;
    }
    ___stack_chk_fail();
    *(undefined **)((long)puVar7 + -0x1e0) = unaff_x28;
    *(undefined **)((long)puVar7 + -0x1d8) = unaff_x27;
    *(undefined **)((long)puVar7 + -0x1d0) = unaff_x26;
    *(undefined ***)((long)puVar7 + -0x1c8) = unaff_x25;
    *(ulong *)((long)puVar7 + -0x1c0) = unaff_x24;
    *(long *)((long)puVar7 + -0x1b8) = unaff_x23;
    *(undefined ***)((long)puVar7 + -0x1b0) = ppuVar22;
    *(ulong *)((long)puVar7 + -0x1a8) = uVar12;
    *(undefined **)((long)puVar7 + -0x1a0) = puVar13;
    *(undefined **)((long)puVar7 + -0x198) = puVar10;
    *(undefined1 **)((long)puVar7 + -400) = (undefined1 *)((long)puVar7 + -0x10);
    *(undefined8 *)((long)puVar7 + -0x188) = 0x10666d9ac;
    puVar15 = (undefined1 *)((long)puVar7 + -400);
    *(undefined8 *)((long)puVar7 + -0x1f0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    FUN_106669fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126cc698;
    _objc_opt_class(PTR_PTR_1126cc698);
    uVar11 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar10);
    uVar20 = uVar9;
    if ((uVar11 & 1) == 0) {
      uVar20 = 0;
    }
    _objc_retain(uVar20);
    _objc_release(uVar9);
    *(undefined8 *)((long)puVar7 + -0x288) = 0;
    *(undefined8 *)((long)puVar7 + -0x290) = 0;
    *(undefined8 *)((long)puVar7 + -0x278) = 0;
    *(undefined8 *)((long)puVar7 + -0x280) = 0;
    *(undefined8 *)((long)puVar7 + -0x2a8) = 0;
    *(undefined8 *)((long)puVar7 + -0x2b0) = 0;
    *(undefined8 *)((long)puVar7 + -0x298) = 0;
    *(undefined8 *)((long)puVar7 + -0x2a0) = 0;
    uVar9 = uVar20;
    func_0x00010c23f3e0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined1 *)((long)puVar7 + -0x2b0);
    puVar18 = (undefined1 *)((long)puVar7 + -0x270);
    uVar24 = 0x10;
    uVar11 = uVar9;
    func_0x00010bf52a60();
    if (uVar11 == 0) {
      _objc_release(uVar9);
      _objc_release(uVar20);
      uVar11 = param_1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)puVar7 + -0x1f0)) {
        return (undefined1 *)0x0;
      }
      ___stack_chk_fail();
      *(undefined **)((long)puVar7 + -800) = unaff_x28;
      *(undefined **)((long)puVar7 + -0x318) = unaff_x27;
      *(undefined **)((long)puVar7 + -0x310) = unaff_x26;
      *(undefined ***)((long)puVar7 + -0x308) = unaff_x25;
      *(ulong *)((long)puVar7 + -0x300) = unaff_x24;
      *(long *)((long)puVar7 + -0x2f8) = unaff_x23;
      *(undefined8 *)((long)puVar7 + -0x2f0) = 0;
      *(ulong *)((long)puVar7 + -0x2e8) = uVar9;
      *(ulong *)((long)puVar7 + -0x2e0) = uVar20;
      *(ulong *)((long)puVar7 + -0x2d8) = param_1;
      *(undefined1 **)((long)puVar7 + -0x2d0) = puVar15;
      *(code **)((long)puVar7 + -0x2c8) = FUN_10666dc70;
      *(undefined4 *)((long)puVar7 + -0x380) = in_w6;
      *(undefined4 *)((long)puVar7 + -0x37c) = in_w7;
      *(undefined1 **)((long)puVar7 + -0x388) = puVar18;
      *(undefined1 **)((long)puVar7 + -0x350) = puVar17;
      *(ulong *)((long)puVar7 + -0x370) = uVar11;
      *(undefined8 *)((long)puVar7 + -0x378) = *(undefined8 *)((long)puVar7 + -0x268);
      *(undefined8 *)((long)puVar7 + -0x340) = *(undefined8 *)((long)puVar7 + -0x270);
      *(undefined8 *)((long)puVar7 + -0x360) = *(undefined8 *)((long)puVar7 + -0x278);
      uVar2 = *(undefined8 *)((long)puVar7 + -0x288);
      uVar16 = *(undefined8 *)((long)puVar7 + -0x280);
      uVar21 = *(undefined8 *)((long)puVar7 + -0x290);
      uVar3 = *(undefined8 *)((long)puVar7 + -0x2a8);
      uVar5 = *(undefined8 *)((long)puVar7 + -0x2a0);
      uVar4 = *(undefined8 *)((long)puVar7 + -0x2b8);
      uVar6 = *(undefined8 *)((long)puVar7 + -0x2b0);
      uVar23 = *(undefined8 *)((long)puVar7 + -0x2c0);
      _objc_retain(puVar17);
      *(undefined8 *)((long)puVar7 + -0x348) = uVar24;
      _objc_retain(uVar24);
      _objc_retain(in_x5);
      *(undefined8 *)((long)puVar7 + -0x368) = uVar23;
      _objc_retain(uVar23);
      _objc_retain(uVar4);
      _objc_retain(uVar6);
      _objc_retain(uVar3);
      _objc_retain(uVar5);
      _objc_retain(uVar21);
      _objc_retain(uVar2);
      *(undefined8 *)((long)puVar7 + -0x358) = uVar16;
      uVar23 = *(undefined8 *)((long)puVar7 + -0x360);
      _objc_retain(uVar16);
      _objc_retain(uVar23);
      _objc_retain(*(undefined8 *)((long)puVar7 + -0x340));
      uVar24 = *(undefined8 *)((long)puVar7 + -0x378);
      _objc_retain();
      *(undefined8 *)((long)puVar7 + -0x338) = *(undefined8 *)((long)puVar7 + -0x370);
      *(undefined **)((long)puVar7 + -0x330) = PTR_PTR_1126f23d0;
      puVar15 = (undefined1 *)((long)puVar7 + -0x338);
      _objc_msgSendSuper2(puVar15,PTR_s_init_1125d9248);
      if (puVar15 != (undefined1 *)0x0) {
        *(uint *)((long)puVar7 + -0x370) = (uint)*(byte *)((long)puVar7 + -0x298);
        uVar23 = *(undefined8 *)((long)puVar7 + -0x350);
        _objc_retain(uVar23);
        uVar16 = *(undefined8 *)(puVar15 + 0x10);
        *(undefined8 *)(puVar15 + 0x10) = uVar23;
        _objc_release(uVar16);
        *(undefined8 *)(puVar15 + 0x18) = *(undefined8 *)((long)puVar7 + -0x388);
        uVar16 = *(undefined8 *)((long)puVar7 + -0x348);
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x20);
        *(undefined8 *)(puVar15 + 0x20) = uVar16;
        _objc_release(uVar23);
        _objc_retain(in_x5);
        uVar16 = *(undefined8 *)(puVar15 + 0x28);
        *(undefined8 *)(puVar15 + 0x28) = in_x5;
        _objc_release(uVar16);
        uVar1 = *(undefined4 *)((long)puVar7 + -0x37c);
        puVar15[8] = (char)*(undefined4 *)((long)puVar7 + -0x380);
        puVar15[9] = (char)uVar1;
        uVar16 = *(undefined8 *)((long)puVar7 + -0x368);
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x30);
        *(undefined8 *)(puVar15 + 0x30) = uVar16;
        _objc_release(uVar23);
        uVar16 = uVar4;
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x38);
        *(undefined8 *)(puVar15 + 0x38) = uVar16;
        _objc_release(uVar23);
        uVar16 = uVar6;
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x40);
        *(undefined8 *)(puVar15 + 0x40) = uVar16;
        _objc_release(uVar23);
        uVar16 = uVar3;
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x48);
        *(undefined8 *)(puVar15 + 0x48) = uVar16;
        _objc_release(uVar23);
        uVar16 = uVar5;
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x50);
        *(undefined8 *)(puVar15 + 0x50) = uVar16;
        _objc_release(uVar23);
        puVar15[10] = (char)*(undefined4 *)((long)puVar7 + -0x370);
        uVar16 = uVar21;
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x58);
        *(undefined8 *)(puVar15 + 0x58) = uVar16;
        _objc_release(uVar23);
        uVar16 = uVar2;
        func_0x00010bf51e00();
        uVar23 = *(undefined8 *)(puVar15 + 0x60);
        *(undefined8 *)(puVar15 + 0x60) = uVar16;
        _objc_release(uVar23);
        uVar23 = *(undefined8 *)((long)puVar7 + -0x358);
        _objc_retain(uVar23);
        uVar16 = *(undefined8 *)(puVar15 + 0x68);
        *(undefined8 *)(puVar15 + 0x68) = uVar23;
        uVar23 = *(undefined8 *)((long)puVar7 + -0x360);
        _objc_release(uVar16);
        _objc_retain(uVar23);
        uVar16 = *(undefined8 *)(puVar15 + 0x70);
        *(undefined8 *)(puVar15 + 0x70) = uVar23;
        _objc_release(uVar16);
        uVar16 = *(undefined8 *)((long)puVar7 + -0x340);
        func_0x00010bf51e00();
        uVar19 = *(undefined8 *)(puVar15 + 0x78);
        *(undefined8 *)(puVar15 + 0x78) = uVar16;
        _objc_release(uVar19);
        uVar16 = uVar24;
        func_0x00010bf51e00();
        uVar19 = *(undefined8 *)(puVar15 + 0x80);
        *(undefined8 *)(puVar15 + 0x80) = uVar16;
        _objc_release(uVar19);
      }
      _objc_release(uVar24);
      _objc_release(*(undefined8 *)((long)puVar7 + -0x340));
      _objc_release(uVar23);
      _objc_release(*(undefined8 *)((long)puVar7 + -0x358));
      _objc_release(uVar2);
      _objc_release(uVar21);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(*(undefined8 *)((long)puVar7 + -0x368));
      _objc_release(in_x5);
      _objc_release(*(undefined8 *)((long)puVar7 + -0x348));
      _objc_release(*(undefined8 *)((long)puVar7 + -0x350));
      return puVar15;
    }
    *(ulong *)((long)puVar7 + -0x2c0) = uVar20;
    *(ulong *)((long)puVar7 + -0x2b8) = param_1;
    uVar20 = **(ulong **)((long)puVar7 + -0x2a0);
    ppuVar22 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6790;
    unaff_x23 = 0;
    if (**(ulong **)((long)puVar7 + -0x2a0) != uVar20) {
      _objc_enumerationMutation(uVar9);
    }
    uVar12 = **(ulong **)((long)puVar7 + -0x2a8);
    uVar24 = 0x10666daa8;
    puVar7 = (ulong *)((long)puVar7 + -0x2c0);
    unaff_x24 = uVar11;
  } while( true );
}



/* Entry: 10666dc70; end: 10666df8b; -[SCImpalaDiscoverChannelResponse initWithEditionId:publisherIdValue:publisherName:editionVersion:shareableValue:subscribableValue:publisherFormalName:publisherDescription:primaryColor:secondaryColor:publisherDeeplink:isShowValue:showId:businessId:editionPublishingTimestamp:isSubscribed:filledIcon:horizontalIcon:] */

undefined8 *
FUN_10666dc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain();
  puStack_70 = PTR_PTR_1126f23d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_14;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_18);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10666df8c; end: 10666df93; -[SCImpalaDiscoverChannelResponse editionId] */

undefined8 FUN_10666df8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10666df94; end: 10666df9b; -[SCImpalaDiscoverChannelResponse publisherIdValue] */

undefined8 FUN_10666df94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10666df9c; end: 10666dfa3; -[SCImpalaDiscoverChannelResponse publisherName] */

undefined8 FUN_10666df9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10666dfa4; end: 10666dfab; -[SCImpalaDiscoverChannelResponse editionVersion] */

undefined8 FUN_10666dfa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10666dfac; end: 10666dfb3; -[SCImpalaDiscoverChannelResponse shareableValue] */

undefined1 FUN_10666dfac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10666dfb4; end: 10666dfbb; -[SCImpalaDiscoverChannelResponse subscribableValue] */

undefined1 FUN_10666dfb4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10666dfbc; end: 10666dfc3; -[SCImpalaDiscoverChannelResponse publisherFormalName] */

undefined8 FUN_10666dfbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10666dfc4; end: 10666dfcb; -[SCImpalaDiscoverChannelResponse publisherDescription] */

undefined8 FUN_10666dfc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10666dfcc; end: 10666dfd3; -[SCImpalaDiscoverChannelResponse primaryColor] */

undefined8 FUN_10666dfcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10666dfd4; end: 10666dfdb; -[SCImpalaDiscoverChannelResponse secondaryColor] */

undefined8 FUN_10666dfd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10666dfdc; end: 10666dfe3; -[SCImpalaDiscoverChannelResponse publisherDeeplink] */

undefined8 FUN_10666dfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10666dfe4; end: 10666dfeb; -[SCImpalaDiscoverChannelResponse isShowValue] */

undefined1 FUN_10666dfe4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10666dfec; end: 10666dff3; -[SCImpalaDiscoverChannelResponse showId] */

undefined8 FUN_10666dfec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10666dff4; end: 10666dffb; -[SCImpalaDiscoverChannelResponse businessId] */

undefined8 FUN_10666dff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10666dffc; end: 10666e003; -[SCImpalaDiscoverChannelResponse editionPublishingTimestamp] */

undefined8 FUN_10666dffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10666e004; end: 10666e00b; -[SCImpalaDiscoverChannelResponse isSubscribed] */

undefined8 FUN_10666e004(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10666e00c; end: 10666e013; -[SCImpalaDiscoverChannelResponse filledIcon] */

undefined8 FUN_10666e00c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10666e014; end: 10666e01b; -[SCImpalaDiscoverChannelResponse horizontalIcon] */

undefined8 FUN_10666e014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10666e01c; end: 10666e0db; -[SCImpalaDiscoverChannelResponse .cxx_destruct] */

void FUN_10666e01c(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10666e0dc; end: 10666e223;  */

undefined8 FUN_10666e0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar3 = param_2;
  func_0x00010bfec9e0();
  uVar1 = param_3;
  func_0x00010bfec9e0();
  if ((int)uVar3 == (int)uVar1) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfec9e0();
    uVar2 = param_3;
    func_0x00010bfec9e0();
    uVar3 = 0xffffffffffffffff;
    if ((uint)uVar1 < (uint)uVar2) {
      uVar3 = 1;
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10666e224; end: 10666e59b;  */

void FUN_10666e224(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  double dVar25;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c11af80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar5 = param_1;
  func_0x00010c116320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar7 = param_1;
  func_0x00010bf356e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar9 = param_1;
  func_0x00010c06a380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar11 = param_1;
  func_0x00010c06a4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar13 = param_1;
  func_0x00010bf8c920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar15 = param_1;
  func_0x00010bf35700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar17 = param_1;
  func_0x00010c06a3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(puVar16);
  _objc_release(lVar15);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(puVar12);
  _objc_release(lVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar24) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar2 = param_2;
    func_0x00010bfe3b00(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010bf8bc40();
    puVar8 = puVar2;
    if ((int)puVar6 == 1) {
      uVar20 = *(undefined8 *)(lVar1 + 0x20);
      func_0x00010c269d40(uVar20);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar20);
      uVar22 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c269d40(uVar22);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = *(undefined8 *)(lVar1 + 0x30);
      func_0x00010bfe5ea0(uVar23);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar22;
      func_0x00010bfb7c00(uVar22);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar23);
      _objc_release(uVar22);
      puVar6 = PTR_PTR_1126cc710;
      func_0x00010bf1bfa0(PTR_PTR_1126cc710);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(uVar20);
      _objc_release(uVar21);
    }
    puVar2 = param_2;
    func_0x00010c26f700();
    if ((int)puVar2 == 0) {
      dVar25 = 0.0;
    }
    else {
      puVar2 = param_2;
      func_0x00010bf8b160(param_2);
      puVar6 = param_2;
      func_0x00010c26f700(param_2);
      dVar25 = (double)(((float)(long)puVar2 * 1000.0) / (float)(int)puVar6);
    }
    puVar19 = PTR_PTR_1126cc718;
    _objc_alloc(PTR_PTR_1126cc718);
    puVar2 = param_2;
    func_0x00010c29a460(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060e80(dVar25,puVar19);
    _objc_release(puVar2);
    _objc_release(puVar8);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 10666e59c; end: 10666e78f;  */

void FUN_10666e59c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfe3b00(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf8bc40();
  puVar7 = puVar1;
  if ((int)puVar2 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfe5ea0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010bfb7c00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126cc710;
    func_0x00010bf1bfa0(PTR_PTR_1126cc710);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  puVar1 = param_2;
  func_0x00010c26f700();
  if ((int)puVar1 == 0) {
    dVar8 = 0.0;
  }
  else {
    puVar1 = param_2;
    func_0x00010bf8b160(param_2);
    puVar2 = param_2;
    func_0x00010c26f700(param_2);
    dVar8 = (double)(((float)(long)puVar1 * 1000.0) / (float)(int)puVar2);
  }
  puVar1 = PTR_PTR_1126cc718;
  _objc_alloc(PTR_PTR_1126cc718);
  puVar2 = param_2;
  func_0x00010c29a460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060e80(dVar8,puVar1);
  _objc_release(puVar2);
  _objc_release(puVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10666e790; end: 10666eaef;  */

void FUN_10666e790(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  
  iVar11 = (int)param_3;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar13 = param_2;
  func_0x00010bf529e0();
  if (uVar13 != 0) {
    uVar13 = 0;
    do {
      uVar1 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfec9e0();
      uVar3 = param_5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf358a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      if (uVar5 <= (uVar2 & 0xffffffff)) {
        _objc_release(uVar1);
        break;
      }
      uVar2 = uVar1;
      func_0x00010c26a4a0();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar13 + 1;
      uVar3 = uVar2;
      FUN_10666e224();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bf64b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_release(uVar2);
      puVar6 = PTR_PTR_1126ca548;
      _objc_alloc(PTR_PTR_1126ca548);
      uVar2 = param_5;
      func_0x00010bfb1920(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf358a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec9e0(uVar1);
      uVar4 = uVar3;
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c250f20();
      uVar8 = param_4;
      uVar15 = param_1;
      func_0x00010bfe5ea0(param_4);
      fVar14 = (float)uVar15;
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010666e16c(uVar1,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar1;
      func_0x00010c150c20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c296d80();
      func_0x00010c04bb60(param_1,(double)fVar14,puVar6);
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_5;
      func_0x00010bfb1920(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      param_3 = uVar2;
      if (iVar11 == 0) {
        func_0x0001084733c4(puVar6,uVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108473554();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c1d04c0(param_5);
      _objc_release(puVar10);
      _objc_release(uVar2);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(uVar1);
      uVar1 = param_2;
      func_0x00010bf529e0();
    } while (uVar13 < uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126c9a80,PTR_s_longformSnapWithUniqueIdentifier_11260aef8,
               *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),param_3);
    return;
  }
  return;
}



/* Entry: 10666eaf0; end: 10666eb07;  */

void FUN_10666eaf0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126c9a80,PTR_s_longformSnapWithUniqueIdentifier_11260aef8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10666eb08; end: 10666fbf3; -[Story initWithSnapDoc:title:subtitle:logoURL:decorateWithHighlightInfo:] */

undefined **
FUN_10666eb08(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8)

{
  long lVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined8 uVar23;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_258;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar21 = param_3;
  ppuVar20 = param_4;
  ppuVar18 = param_5;
  ppuVar15 = param_6;
  ppuVar19 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfee200();
  ppuVar16 = param_5;
  if (param_1 != (undefined **)0x0) {
    _objc_retain(param_3);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf981c0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010bf981a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = apuStack_f0;
    ppuVar18 = (undefined **)0x10;
    ppuVar21 = ppuVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (ppuVar21 != (undefined **)0x0) {
      ppuVar20 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar23 = *(undefined8 *)((long)ppuVar20 * 8);
        uVar5 = uVar23;
        func_0x00010bf44560();
        iVar2 = (int)uVar5;
        if (iVar2 < 7) {
          if (3 < iVar2) {
            if (iVar2 == 4) {
              ppuVar18 = &PTR_PTR_1126cc7a0;
            }
            else if (iVar2 == 5) {
              ppuVar18 = &PTR_PTR_1126cc790;
            }
            else {
              if (iVar2 != 6) goto LAB_10666eddc;
              ppuVar18 = &PTR_PTR_1126cc798;
            }
            goto LAB_10666ed38;
          }
          if (iVar2 == 1) {
            ppuVar18 = &PTR_PTR_1126b25c8;
            goto LAB_10666ed38;
          }
          if (iVar2 == 2) {
            ppuVar18 = &PTR_PTR_1126cc788;
            goto LAB_10666ed38;
          }
          if (iVar2 == 3) {
            ppuVar18 = &PTR_PTR_1126bcf30;
            goto LAB_10666ed38;
          }
        }
        else {
          if (iVar2 < 0x22) {
            if (iVar2 == 7) {
              ppuVar18 = &PTR_PTR_1126cc7b8;
            }
            else if (iVar2 == 9) {
              ppuVar18 = &PTR_PTR_1126cc780;
            }
            else {
              if (iVar2 != 0x16) goto LAB_10666eddc;
              ppuVar18 = &PTR_PTR_1126cc7a8;
            }
          }
          else if (iVar2 == 0x22) {
            ppuVar18 = &PTR_PTR_1126cc770;
          }
          else if (iVar2 == 0x28) {
            ppuVar18 = &PTR_PTR_1126cc778;
          }
          else {
            if (iVar2 != 0x36) goto LAB_10666eddc;
            ppuVar18 = &PTR_PTR_1126cc6e0;
          }
LAB_10666ed38:
          puVar6 = *ppuVar18;
          _objc_opt_class();
          if (puVar6 != (undefined *)0x0) {
            uVar5 = uVar23;
            func_0x00010bf44380(uVar23);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            func_0x000108f12c3c();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(0);
            _objc_release(uVar5);
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010bf44560(uVar23);
            func_0x00010c0df760(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(ppuVar3);
            _objc_release(puVar6);
            _objc_release(uVar7);
            _objc_release(0);
          }
        }
LAB_10666eddc:
        ppuVar20 = (undefined **)((long)ppuVar20 + 1);
      } while (ppuVar21 != ppuVar20);
      ppuVar20 = apuStack_f0;
      ppuVar18 = (undefined **)0x10;
      ppuVar21 = ppuVar4;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar4);
    _objc_release(param_3);
    ppuVar21 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b25c8;
    _objc_opt_class(PTR_PTR_1126b25c8);
    ppuVar8 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar6);
    ppuVar4 = ppuVar21;
    if (((ulong)ppuVar8 & 1) == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar21);
    ppuVar21 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc770;
    _objc_opt_class(PTR_PTR_1126cc770);
    _objc_opt_isKindOfClass(ppuVar21,puVar6);
    _objc_release(ppuVar21);
    ppuVar21 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bcf30;
    _objc_opt_class(PTR_PTR_1126bcf30);
    ppuVar9 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar6);
    ppuVar8 = ppuVar21;
    if (((ulong)ppuVar9 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain();
    _objc_release(ppuVar21);
    ppuVar9 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc778;
    _objc_opt_class(PTR_PTR_1126cc778);
    ppuVar10 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar6);
    ppuStack_190 = ppuVar9;
    if (((ulong)ppuVar10 & 1) == 0) {
      ppuStack_190 = (undefined **)0x0;
    }
    _objc_retain();
    _objc_release(ppuVar9);
    ppuVar10 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc780;
    _objc_opt_class(PTR_PTR_1126cc780);
    ppuVar11 = ppuVar10;
    _objc_opt_isKindOfClass(ppuVar10,puVar6);
    ppuVar9 = ppuVar10;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar9 = (undefined **)0x0;
    }
    _objc_retain(ppuVar9);
    _objc_release(ppuVar10);
    ppuVar11 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc6e0;
    _objc_opt_class(PTR_PTR_1126cc6e0);
    ppuVar12 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar6);
    ppuVar10 = ppuVar11;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar10 = (undefined **)0x0;
    }
    _objc_retain(ppuVar10);
    _objc_release(ppuVar11);
    func_0x00010c175de0(param_1);
    _objc_release(ppuVar10);
    ppuVar10 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227d40(param_1);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar10 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(param_1);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar9;
    func_0x00010c2923e0(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df740(param_1);
    _objc_release(ppuVar10);
    func_0x00010c27dd80();
    func_0x00010bfdc680();
    func_0x00010c21acc0(param_1);
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    ppuVar10 = ppuVar4;
    func_0x00010c08f1c0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010bf7ef40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5520(param_1);
    _objc_release(puVar6);
    _objc_release(ppuVar12);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar4;
    func_0x00010c08f1c0(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c2478e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(param_1);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar4;
    func_0x00010bf93e40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010c08fa60();
    if (ppuVar12 == (undefined **)0x0) {
      func_0x00010c1c49e0(param_1);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar12 = ppuVar4;
      func_0x00010bf93e40(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar12;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = (undefined **)0x4;
      func_0x00010c008340(puVar6);
      func_0x00010c1c49e0(param_1);
      _objc_release(puVar6);
      _objc_release(ppuVar22);
      _objc_release(ppuVar12);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar4;
    func_0x00010bf93e40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010c08fa60();
    if (ppuVar12 == (undefined **)0x0) {
      func_0x00010c1c49c0(param_1);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      ppuVar12 = ppuVar4;
      func_0x00010bf93e40(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar12;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = (undefined **)0x4;
      func_0x00010c008340(puVar6);
      func_0x00010c1c49c0(param_1);
      _objc_release(puVar6);
      _objc_release(ppuVar22);
      _objc_release(ppuVar12);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    ppuVar10 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f100(param_1);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    if (param_4 != (undefined **)0x0) {
      func_0x00010c21f760(param_1);
    }
    if (ppuVar8 != (undefined **)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c270b80(ppuVar21);
      func_0x00010c052380((double)((ulong)ppuVar21 & 0xffffffff),puVar6);
      func_0x00010c215dc0(param_1);
      _objc_release(puVar6);
    }
    ppuVar21 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc788;
    _objc_opt_class(PTR_PTR_1126cc788);
    ppuVar11 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar6);
    ppuVar10 = ppuVar21;
    if (((ulong)ppuVar11 & 1) == 0) {
      ppuVar10 = (undefined **)0x0;
    }
    _objc_retain(ppuVar10);
    _objc_release(ppuVar21);
    ppuVar21 = ppuVar10;
    func_0x00010bf85640();
    iVar2 = (int)ppuVar21;
    if (iVar2 < 2) {
      if ((iVar2 == 0) || (iVar2 == 1)) {
LAB_10666f478:
        func_0x00010c1ac2c0(param_1);
      }
    }
    else if (iVar2 == 3) {
      ppuVar21 = ppuVar10;
      func_0x00010bf8b420(ppuVar10);
      func_0x00010c214bc0((double)((ulong)ppuVar21 & 0xffffffff),param_1);
    }
    else if (iVar2 == 2) goto LAB_10666f478;
    func_0x00010c1b44a0(param_1);
    func_0x00010c1335a0(ppuStack_190);
    _objc_release(ppuStack_190);
    func_0x00010c1b3e20(param_1);
    ppuVar21 = ppuVar9;
    func_0x00010bfdc880();
    if ((int)ppuVar21 != 0) {
      ppuVar20 = ppuVar9;
      func_0x00010c24a0a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar20;
      func_0x00010bfdaa60();
      if ((int)ppuVar18 == 0) {
        ppuVar21 = (undefined **)0x0;
      }
      else {
        ppuVar18 = ppuVar9;
        func_0x00010c24a0a0(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar18;
        func_0x00010c116a20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x00010bfe2ee0();
        ppuVar21 = ppuVar11;
        func_0x00010c0b5940(ppuVar11);
        func_0x000100c4a928(ppuVar12,ppuVar21);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar12;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        _objc_release(ppuVar11);
        _objc_release(ppuVar18);
      }
      _objc_release(ppuVar20);
      puVar6 = PTR_PTR_1126c4ea0;
      _objc_alloc(PTR_PTR_1126c4ea0);
      ppuVar11 = ppuVar9;
      func_0x00010c24a0a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar9;
      func_0x00010c24a0a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar18 = ppuVar22;
      func_0x00010c24a0e0();
      ppuVar20 = ppuVar12;
      func_0x00010c03ae60(puVar6);
      func_0x00010c1fb580(param_1);
      _objc_release(puVar6);
      _objc_release(ppuVar22);
      _objc_release(ppuVar12);
      _objc_release(ppuVar11);
      _objc_release(ppuVar21);
    }
    ppuVar11 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc790;
    _objc_opt_class(PTR_PTR_1126cc790);
    ppuVar12 = ppuVar11;
    _objc_opt_isKindOfClass(ppuVar11,puVar6);
    ppuVar21 = ppuVar11;
    if (((ulong)ppuVar12 & 1) == 0) {
      ppuVar21 = (undefined **)0x0;
    }
    _objc_retain(ppuVar21);
    _objc_release(ppuVar11);
    ppuVar12 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc798;
    _objc_opt_class(PTR_PTR_1126cc798);
    ppuVar22 = ppuVar12;
    _objc_opt_isKindOfClass(ppuVar12,puVar6);
    ppuVar11 = ppuVar12;
    if (((ulong)ppuVar22 & 1) == 0) {
      ppuVar11 = (undefined **)0x0;
    }
    _objc_retain(ppuVar11);
    _objc_release(ppuVar12);
    ppuVar22 = ppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cc7a0;
    _objc_opt_class(PTR_PTR_1126cc7a0);
    ppuVar13 = ppuVar22;
    _objc_opt_isKindOfClass(ppuVar22,puVar6);
    ppuVar12 = ppuVar22;
    if (((ulong)ppuVar13 & 1) == 0) {
      ppuVar12 = (undefined **)0x0;
    }
    _objc_retain(ppuVar12);
    _objc_release(ppuVar22);
    ppuVar22 = ppuVar21;
    func_0x00010bf4e840(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183080(param_1);
    _objc_release(ppuVar22);
    ppuVar22 = ppuVar21;
    func_0x00010c297e20(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar21);
    func_0x00010c2208c0(param_1);
    _objc_release(ppuVar22);
    ppuVar21 = ppuVar11;
    func_0x00010c12a520(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    func_0x00010c16b3c0(param_1);
    _objc_release(ppuVar21);
    ppuVar11 = ppuVar12;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    ppuVar22 = ppuVar11;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar22;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar13;
    func_0x00010c21bd60(param_1);
    _objc_release(ppuVar13);
    _objc_release(ppuVar22);
    _objc_release(ppuVar11);
    ppuVar22 = param_3;
    func_0x00010bfd84e0();
    ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)ppuVar22 == 0) {
      ppuVar11 = ppuVar12;
      func_0x00010c281680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar11;
      func_0x00010c098340();
      _objc_release(ppuVar11);
      ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar13 = ppuVar12;
        func_0x00010c281680();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar13;
        func_0x00010c098320();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1a0 = ppuVar14;
        func_0x00010c2810a0();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar22;
        func_0x00010c1bbd60(param_1);
        _objc_release(ppuVar22);
        _objc_release(ppuVar14);
        goto LAB_10666f8e8;
      }
    }
    else {
      ppuVar13 = param_3;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1a0 = ppuVar13;
      func_0x00010bfe5ea0();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar11;
      func_0x00010c1bbd60(param_1);
LAB_10666f8e8:
      _objc_release(ppuVar11);
      _objc_release(ppuVar13);
    }
    if ((int)param_7 != 0) {
      ppuVar20 = param_4;
      func_0x00010c08fa60();
      if (ppuVar20 == (undefined **)0x0) {
        _objc_release(param_4);
        ppuVar16 = &PTR____CFConstantStringClassReference_110daafd8;
        param_4 = param_5;
      }
      ppuVar18 = ppuVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126cc7a8;
      _objc_opt_class(PTR_PTR_1126cc7a8);
      ppuVar15 = ppuVar18;
      _objc_opt_isKindOfClass(ppuVar18,puVar6);
      ppuVar20 = ppuVar18;
      if (((ulong)ppuVar15 & 1) == 0) {
        ppuVar20 = (undefined **)0x0;
      }
      _objc_retain(ppuVar20);
      _objc_release(ppuVar18);
      puVar6 = PTR_PTR_1126cc7b0;
      _objc_alloc();
      ppuVar21 = ppuVar20;
      func_0x00010c0f0700(ppuVar20);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar21;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar20;
      func_0x00010c247800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar20);
      ppuVar13 = ppuVar9;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar9;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      ppuVar20 = ppuVar22;
      ppuVar18 = ppuVar13;
      ppuVar15 = ppuVar14;
      ppuVar19 = param_4;
      param_8 = ppuVar16;
      func_0x00010c03aec0();
      func_0x00010c1a87c0(param_1);
      _objc_release(puVar6);
      _objc_release(ppuVar14);
      _objc_release(ppuVar13);
      _objc_release(ppuVar22);
      _objc_release(ppuVar11);
      _objc_release(ppuVar21);
      ppuVar11 = param_1;
      func_0x00010bfe32e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar11;
      func_0x00010bfe3180();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar22;
      func_0x00010c21f760(param_1);
      _objc_release(ppuVar22);
      _objc_release(ppuVar11);
      ppuVar11 = param_1;
      func_0x00010c0c6e00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar11;
      func_0x00010c072e60();
      _objc_release(ppuVar11);
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSData_1126ae778;
      ppuStack_1a0 = param_6;
      ppuStack_198 = ppuVar4;
      if ((int)ppuVar22 != 0) {
        ppuVar22 = param_1;
        func_0x00010c0c6e00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar22;
        func_0x00010bf64ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar22);
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar22 = param_1;
          func_0x00010c0c3fe0(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar11;
          func_0x00010c14a340();
          _objc_release(ppuVar22);
        }
        _objc_release(ppuVar11);
      }
    }
    _objc_release(ppuVar12);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(param_6);
  _objc_release(ppuVar16);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar21);
  _objc_retain(ppuVar20);
  _objc_retain(ppuVar18);
  _objc_retain(ppuVar15);
  _objc_retain(ppuVar19);
  _objc_retain(param_8);
  _objc_retain(ppuStack_1a0);
  _objc_retain(ppuStack_198);
  _objc_retain(ppuStack_190);
  func_0x00010bfee200();
  ppuStack_2a8 = ppuVar18;
  ppuStack_258 = ppuVar15;
  if (param_3 != (undefined **)0x0) {
    ppuVar16 = ppuVar21;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar16;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar4;
    func_0x00010bf85640();
    if ((int)ppuVar3 == 8) {
      ppuStack_2a8 = ppuVar4;
      func_0x00010bf8b420();
      ppuStack_2a8 = (undefined **)((ulong)ppuStack_2a8 & 0xffffffff);
    }
    else if ((int)ppuVar3 == 6) {
      ppuStack_2a8 = (undefined **)0x0;
    }
    else {
      ppuStack_2a8 = (undefined **)0x0;
    }
    ppuVar3 = ppuVar16;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar9;
    func_0x00010c2a3a80(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(param_3);
    _objc_release(ppuVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar16;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar8;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar10;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar16;
    func_0x00010bfda280();
    if ((int)ppuVar8 == 0) {
      ppuStack_270 = (undefined **)0x0;
    }
    else {
      ppuStack_270 = ppuVar16;
      func_0x00010c0f9ee0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = ppuVar16;
    func_0x00010bfd4460();
    if ((int)ppuVar8 == 0) {
      ppuStack_278 = (undefined **)0x0;
    }
    else {
      ppuStack_278 = ppuVar16;
      func_0x00010bf0e960();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = ppuVar16;
    func_0x00010bfddcc0();
    if ((int)ppuVar8 == 0) {
      ppuStack_280 = (undefined **)0x0;
    }
    else {
      ppuStack_280 = ppuVar16;
      func_0x00010c2814e0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = ppuVar16;
    func_0x00010bfdabc0();
    if ((int)ppuVar8 == 0) {
      ppuStack_2a0 = (undefined **)0x0;
    }
    else {
      ppuStack_2a0 = ppuVar16;
      func_0x00010c1197a0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = ppuVar16;
    func_0x000108f571b4();
    if (((ulong)ppuVar8 & 1) == 0) {
      func_0x00010c175de0(param_3);
    }
    else {
      ppuVar8 = ppuVar16;
      func_0x00010bf28a40(ppuVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c175de0(param_3);
      _objc_release(ppuVar8);
    }
    ppuVar8 = ppuVar21;
    func_0x00010c241220(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227d40(param_3);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar21;
    func_0x00010c241220(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(param_3);
    _objc_release(ppuVar8);
    ppuVar8 = ppuStack_278;
    func_0x00010c2923e0(ppuStack_278);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df740(param_3);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar21;
    func_0x00010c241220(ppuVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f100(param_3);
    _objc_release(ppuVar8);
    ppuVar8 = param_8;
    func_0x00010c08fa60();
    if ((ppuVar8 != (undefined **)0x0) &&
       (ppuVar8 = ppuStack_1a0, func_0x00010c08fa60(), ppuVar8 != (undefined **)0x0)) {
      func_0x00010c1ff2a0(param_3);
      func_0x00010c21f760(param_3);
      func_0x00010c1ff140(param_3);
    }
    if (ppuStack_190 != (undefined **)0x0) {
      func_0x00010c185c00(param_3);
    }
    ppuVar8 = ppuVar16;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar8;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar12;
    func_0x00010c08c3a0();
    if ((int)ppuVar8 == 1) {
      ppuVar11 = ppuVar12;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar11;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c55e0();
      _objc_release(ppuVar22);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar16;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar11;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar4;
      func_0x00010bfdc680();
      if (((ulong)ppuVar11 & 1) == 0) {
        ppuVar11 = ppuVar12;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdc680();
        _objc_release(ppuVar11);
      }
      func_0x00010c0c6c20();
      func_0x00010c21acc0(param_3);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      ppuVar11 = ppuVar22;
      func_0x00010bdc2b80(ppuVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5520(param_3);
      _objc_release(puVar6);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar22;
      func_0x00010bdc2b80(ppuVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(param_3);
      _objc_release(ppuVar11);
      _objc_release(ppuVar22);
      func_0x00010c21f760(param_3);
      ppuVar11 = ppuVar16;
      func_0x00010bfdd660();
      if ((int)ppuVar11 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
        ppuVar11 = ppuVar16;
        func_0x00010c270d80(ppuVar16);
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar11;
        func_0x00010c270b80();
        func_0x00010c052380((double)((ulong)ppuVar22 & 0xffffffff),puVar6);
        func_0x00010c215dc0(param_3);
        _objc_release(puVar6);
        _objc_release(ppuVar11);
      }
      if ((int)ppuStack_2a8 == 0) {
        func_0x00010c1ac2c0(param_3);
      }
      else {
        func_0x00010c214bc0((double)(long)ppuStack_2a8,param_3);
      }
      func_0x00010c1b44a0(param_3);
      func_0x00010c1335a0(ppuStack_270);
      func_0x00010c1b3e20(param_3);
      ppuVar11 = ppuStack_278;
      func_0x00010bfdc880();
      if ((int)ppuVar11 != 0) {
        ppuVar11 = ppuStack_278;
        func_0x00010c24a0a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar11;
        func_0x00010bfdaa60();
        if ((int)ppuVar22 == 0) {
          ppuVar22 = (undefined **)0x0;
        }
        else {
          ppuVar13 = ppuStack_278;
          func_0x00010c24a0a0(ppuStack_278);
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar13;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar17 = ppuVar14;
          func_0x00010bfe2ee0();
          ppuVar22 = ppuVar14;
          func_0x00010c0b5940(ppuVar14);
          func_0x000100c4a928(ppuVar17,ppuVar22);
          _objc_retainAutoreleasedReturnValue();
          ppuVar22 = ppuVar17;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar17);
          _objc_release(ppuVar14);
          _objc_release(ppuVar13);
        }
        _objc_release(ppuVar11);
        puVar6 = PTR_PTR_1126c4ea0;
        _objc_alloc(PTR_PTR_1126c4ea0);
        ppuVar11 = ppuStack_278;
        func_0x00010c24a0a0(ppuStack_278);
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar11;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuStack_278;
        func_0x00010c24a0a0(ppuStack_278);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24a0e0();
        func_0x00010c03ae60(puVar6);
        func_0x00010c1fb580(param_3);
        _objc_release(puVar6);
        _objc_release(ppuVar14);
        _objc_release(ppuVar13);
        _objc_release(ppuVar11);
        _objc_release(ppuVar22);
      }
      ppuVar11 = ppuVar3;
      func_0x00010bf4e840(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183080(param_3);
      _objc_release(ppuVar11);
      ppuVar11 = ppuVar3;
      func_0x00010c297e20(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(param_3);
      _objc_release(ppuVar11);
      ppuVar11 = ppuStack_280;
      func_0x00010c281680(ppuStack_280);
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuVar11;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar22;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21bd60(param_3);
      _objc_release(ppuVar13);
      _objc_release(ppuVar22);
      _objc_release(ppuVar11);
      ppuVar22 = ppuVar16;
      func_0x00010bfd84e0();
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)ppuVar22 == 0) {
        ppuVar11 = ppuStack_280;
        func_0x00010c281680();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar11;
        func_0x00010c098340();
        _objc_release(ppuVar11);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (ppuVar22 != (undefined **)0x0) {
          ppuVar22 = ppuStack_280;
          func_0x00010c281680();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar22;
          func_0x00010c098320();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar11;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2810a0();
          func_0x00010c14de00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60(param_3);
          _objc_release(puVar6);
          _objc_release(ppuVar13);
          goto LAB_1066705b4;
        }
      }
      else {
        ppuVar22 = ppuVar16;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5ea0();
        func_0x00010c14de00(ppuVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbd60(param_3);
LAB_1066705b4:
        _objc_release(ppuVar11);
        _objc_release(ppuVar22);
      }
      ppuVar11 = ppuVar18;
      func_0x00010c08fa60();
      if (ppuVar11 == (undefined **)0x0) {
        _objc_release(ppuVar18);
        ppuStack_258 = &PTR____CFConstantStringClassReference_110daafd8;
        ppuVar18 = ppuVar15;
      }
      puVar6 = PTR_PTR_1126cc7b0;
      _objc_alloc(PTR_PTR_1126cc7b0);
      ppuVar15 = ppuStack_2a0;
      func_0x00010c0f0700(ppuStack_2a0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar15;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar22 = ppuStack_2a0;
      func_0x00010c247800(ppuStack_2a0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuStack_278;
      func_0x00010c2923e0(ppuStack_278);
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuStack_278;
      func_0x00010c294420(ppuStack_278);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03aec0(puVar6);
      func_0x00010c1a87c0(param_3);
      _objc_release(puVar6);
      _objc_release(ppuVar14);
      _objc_release(ppuVar13);
      _objc_release(ppuVar22);
      _objc_release(ppuVar11);
      _objc_release(ppuVar15);
      func_0x00010c21f760(param_3);
    }
    ppuStack_2a8 = ppuVar18;
    _objc_release(ppuVar12);
    _objc_release(ppuStack_2a0);
    _objc_release(ppuStack_280);
    _objc_release(ppuStack_278);
    _objc_release(ppuStack_270);
    _objc_release(ppuVar3);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar4);
    _objc_release(ppuVar16);
    if ((int)ppuVar8 != 1) {
      ppuVar18 = (undefined **)0x0;
      goto LAB_106670788;
    }
  }
  _objc_retain(param_3);
  ppuVar18 = param_3;
LAB_106670788:
  _objc_release(ppuStack_190);
  _objc_release(ppuStack_198);
  _objc_release(ppuStack_1a0);
  _objc_release(param_8);
  _objc_release(ppuVar19);
  _objc_release(ppuStack_258);
  _objc_release(ppuStack_2a8);
  _objc_release(ppuVar20);
  _objc_release(ppuVar21);
  _objc_release(param_3);
  return ppuVar18;
}



/* Entry: 10666fbf4; end: 1066707fb; -[Story initWithFeedCardSnap:storyId:title:subtitle:logoURL:creatorUserId:creatorUsername:creatorDisplayName:creatorEligibility:] */

long FUN_10666fbf4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined8 param_7,long param_8,
                  long param_9,undefined8 param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined **ppuStack_108;
  undefined *puStack_100;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_b8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x00010bfee200();
  ppuStack_108 = param_5;
  ppuStack_b8 = param_6;
  if (param_1 != 0) {
    puVar1 = param_3;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf85640();
    if ((int)puVar2 == 8) {
      puVar2 = puVar3;
      func_0x00010bf8b420();
      ppuStack_108 = (undefined **)((ulong)puVar2 & 0xffffffff);
    }
    else if ((int)puVar2 == 6) {
      ppuStack_108 = (undefined **)0x0;
    }
    else {
      ppuStack_108 = (undefined **)0x0;
    }
    puVar2 = puVar1;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010c2a3a80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3c0(param_1);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfda280();
    if ((int)puVar4 == 0) {
      puStack_d0 = (undefined *)0x0;
    }
    else {
      puStack_d0 = puVar1;
      func_0x00010c0f9ee0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar1;
    func_0x00010bfd4460();
    if ((int)puVar4 == 0) {
      puStack_d8 = (undefined *)0x0;
    }
    else {
      puStack_d8 = puVar1;
      func_0x00010bf0e960();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar1;
    func_0x00010bfddcc0();
    if ((int)puVar4 == 0) {
      puStack_e0 = (undefined *)0x0;
    }
    else {
      puStack_e0 = puVar1;
      func_0x00010c2814e0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar1;
    func_0x00010bfdabc0();
    if ((int)puVar4 == 0) {
      puStack_100 = (undefined *)0x0;
    }
    else {
      puStack_100 = puVar1;
      func_0x00010c1197a0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = puVar1;
    func_0x000108f571b4();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010c175de0(param_1);
    }
    else {
      puVar4 = puVar1;
      func_0x00010bf28a40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c175de0(param_1);
      _objc_release(puVar4);
    }
    puVar4 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c227d40(param_1);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cd20(param_1);
    _objc_release(puVar4);
    puVar4 = puStack_d8;
    func_0x00010c2923e0(puStack_d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df740(param_1);
    _objc_release(puVar4);
    puVar4 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f100(param_1);
    _objc_release(puVar4);
    lVar14 = param_8;
    func_0x00010c08fa60();
    if ((lVar14 != 0) && (lVar14 = param_9, func_0x00010c08fa60(), lVar14 != 0)) {
      func_0x00010c1ff2a0(param_1);
      func_0x00010c21f760(param_1);
      func_0x00010c1ff140(param_1);
    }
    if (param_11 != 0) {
      func_0x00010c185c00(param_1);
    }
    puVar4 = puVar1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar4);
    puVar4 = puVar8;
    func_0x00010c08c3a0();
    ppuVar12 = param_5;
    if ((int)puVar4 == 1) {
      puVar7 = puVar8;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar7;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c55e0();
      _objc_release(puVar15);
      _objc_release(puVar7);
      puVar7 = puVar1;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar7;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar3;
      func_0x00010bfdc680();
      if (((ulong)puVar7 & 1) == 0) {
        puVar7 = puVar8;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdc680();
        _objc_release(puVar7);
      }
      func_0x00010c0c6c20();
      func_0x00010c21acc0(param_1);
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar9 = puVar15;
      func_0x00010bdc2b80(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5520(param_1);
      _objc_release(puVar7);
      _objc_release(puVar9);
      puVar7 = puVar15;
      func_0x00010bdc2b80(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(param_1);
      _objc_release(puVar7);
      _objc_release(puVar15);
      func_0x00010c21f760(param_1);
      puVar7 = puVar1;
      func_0x00010bfdd660();
      if ((int)puVar7 != 0) {
        puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
        _objc_alloc(PTR__OBJC_CLASS___NSDate_1126ae770);
        puVar15 = puVar1;
        func_0x00010c270d80(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar15;
        func_0x00010c270b80();
        func_0x00010c052380((double)((ulong)puVar9 & 0xffffffff),puVar7);
        func_0x00010c215dc0(param_1);
        _objc_release(puVar7);
        _objc_release(puVar15);
      }
      if ((int)ppuStack_108 == 0) {
        func_0x00010c1ac2c0(param_1);
      }
      else {
        func_0x00010c214bc0((double)(long)ppuStack_108,param_1);
      }
      func_0x00010c1b44a0(param_1);
      func_0x00010c1335a0(puStack_d0);
      func_0x00010c1b3e20(param_1);
      puVar7 = puStack_d8;
      func_0x00010bfdc880();
      if ((int)puVar7 != 0) {
        puVar7 = puStack_d8;
        func_0x00010c24a0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar7;
        func_0x00010bfdaa60();
        if ((int)puVar15 == 0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar9 = puStack_d8;
          func_0x00010c24a0a0(puStack_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c116a20();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010bfe2ee0();
          puVar15 = puVar10;
          func_0x00010c0b5940(puVar10);
          func_0x000100c4a928(puVar11,puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar11;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
        }
        _objc_release(puVar7);
        puVar7 = PTR_PTR_1126c4ea0;
        _objc_alloc(PTR_PTR_1126c4ea0);
        puVar9 = puStack_d8;
        func_0x00010c24a0a0(puStack_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puStack_d8;
        func_0x00010c24a0a0(puStack_d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24a0e0();
        func_0x00010c03ae60(puVar7);
        func_0x00010c1fb580(param_1);
        _objc_release(puVar7);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar15);
      }
      puVar7 = puVar2;
      func_0x00010bf4e840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c183080(param_1);
      _objc_release(puVar7);
      puVar7 = puVar2;
      func_0x00010c297e20(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2208c0(param_1);
      _objc_release(puVar7);
      puVar7 = puStack_e0;
      func_0x00010c281680(puStack_e0);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar7;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar15;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21bd60(param_1);
      _objc_release(puVar9);
      _objc_release(puVar15);
      _objc_release(puVar7);
      puVar15 = puVar1;
      func_0x00010bfd84e0();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar15 == 0) {
        puVar7 = puStack_e0;
        func_0x00010c281680();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010c098340();
        _objc_release(puVar7);
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puVar9 != (undefined *)0x0) {
          puVar9 = puStack_e0;
          func_0x00010c281680();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar9;
          func_0x00010c098320();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar7;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2810a0();
          func_0x00010c14de00(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60(param_1);
          _objc_release(puVar15);
          _objc_release(puVar10);
          goto LAB_1066705b4;
        }
      }
      else {
        puVar9 = puVar1;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe5ea0();
        func_0x00010c14de00(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bbd60(param_1);
LAB_1066705b4:
        _objc_release(puVar7);
        _objc_release(puVar9);
      }
      ppuVar12 = param_5;
      func_0x00010c08fa60();
      if (ppuVar12 == (undefined **)0x0) {
        _objc_release(param_5);
        ppuStack_b8 = &PTR____CFConstantStringClassReference_110daafd8;
        param_5 = param_6;
      }
      puVar7 = PTR_PTR_1126cc7b0;
      _objc_alloc(PTR_PTR_1126cc7b0);
      puVar15 = puStack_100;
      func_0x00010c0f0700(puStack_100);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar15;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_100;
      func_0x00010c247800(puStack_100);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puStack_d8;
      func_0x00010c2923e0(puStack_d8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puStack_d8;
      func_0x00010c294420(puStack_d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03aec0(puVar7);
      func_0x00010c1a87c0(param_1);
      _objc_release(puVar7);
      _objc_release(puVar13);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar15);
      func_0x00010c21f760(param_1);
      ppuVar12 = param_5;
    }
    ppuStack_108 = ppuVar12;
    _objc_release(puVar8);
    _objc_release(puStack_100);
    _objc_release(puStack_e0);
    _objc_release(puStack_d8);
    _objc_release(puStack_d0);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)puVar4 != 1) {
      lVar14 = 0;
      goto LAB_106670788;
    }
  }
  _objc_retain(param_1);
  lVar14 = param_1;
LAB_106670788:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuStack_b8);
  _objc_release(ppuStack_108);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return lVar14;
}



/* Entry: 1066707fc; end: 10667083b;  */

bool FUN_1066707fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0d0a0(param_2);
  return (int)param_2 == 3;
}



/* Entry: 10667083c; end: 1066708e7;  */

bool FUN_10667083c(long param_1,long param_2)

{
  func_0x00010c0c55e0(param_2);
  return param_2 == *(long *)(param_1 + 0x20);
}



/* Entry: 1066708e8; end: 1066708f3;  */

bool FUN_1066708e8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1066708f4; end: 1066709d7; +[STOPermittedUserActions descriptor] */

void FUN_1066708f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ad0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebc20,
                        &PTR____CFConstantStringClassReference_110e58378,&PTR_DAT_113156480,
                        &PTR_DAT_113156498,1,8,0x1c);
    puRam00000001136c3ad0 = puVar1;
  }
  return;
}



/* Entry: 1066709d8; end: 1066709e3;  */

bool FUN_1066709d8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1066709e4; end: 106670a4b; +[STOStoryBody descriptor] */

void FUN_1066709e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebcc0,
                        &PTR____CFConstantStringClassReference_110e583b8,&PTR_DAT_1131564d0,
                        &PTR_DAT_113156508,3,0x20,0x1c);
    puRam00000001136c3ae0 = puVar1;
  }
  return;
}



/* Entry: 106670a4c; end: 106670ae7; +[STOStoryBody_EntryPoint descriptor] */

undefined * FUN_106670a4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3ae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebe50,
                        &PTR____CFConstantStringClassReference_110e583d8,&PTR_DAT_1131564d0,
                        &PTR_s_snapId_113156568,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112aebcc0);
    puRam00000001136c3ae8 = puVar1;
  }
  return puRam00000001136c3ae8;
}



/* Entry: 106670ae8; end: 106670b93; +[STOStoryBody_EntryPoint_Tile descriptor] */

undefined * FUN_106670ae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebe78,
                        &PTR____CFConstantStringClassReference_110e583f8,&PTR_DAT_1131564d0,
                        &PTR_s_title_1131568a8,0xe,0x80,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dddd398);
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112aebe50);
    puRam00000001136c3af0 = puVar1;
  }
  return puRam00000001136c3af0;
}



/* Entry: 106670b94; end: 106670c27; +[STOStoryBody_EntryPoint_Tile_TileImage descriptor] */

undefined * FUN_106670b94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3af8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebea0,
                        &PTR____CFConstantStringClassReference_110e58418,&PTR_DAT_1131564d0,
                        &PTR_s_URL_113156688,4,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112aebe78);
    puRam00000001136c3af8 = puVar1;
  }
  return puRam00000001136c3af8;
}



/* Entry: 106670c28; end: 106670cbb; +[STOStoryBody_EntryPoint_Tile_TileVideo descriptor] */

undefined * FUN_106670c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebec8,
                        &PTR____CFConstantStringClassReference_110e58438,&PTR_DAT_1131564d0,
                        &PTR_s_URL_113156708,4,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112aebe78);
    puRam00000001136c3b00 = puVar1;
  }
  return puRam00000001136c3b00;
}



/* Entry: 106670cbc; end: 106670d4f; +[STOStoryBody_EntryPoint_Tile_TileBitmojiImage descriptor] */

undefined * FUN_106670cbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebef0,
                        &PTR____CFConstantStringClassReference_110e58458,&PTR_DAT_1131564d0,
                        &PTR_s_templateId_1131565c8,3,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112aebe78);
    puRam00000001136c3b08 = puVar1;
  }
  return puRam00000001136c3b08;
}



/* Entry: 106670d50; end: 106670dd3; +[STOStoryBody_EntryPoint_Tile_TileCameo descriptor] */

undefined * FUN_106670d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebf18,
                        &PTR____CFConstantStringClassReference_110e58478,&PTR_DAT_1131564d0,
                        &PTR_DAT_1131564e8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c3b10 = puVar1;
  }
  return puRam00000001136c3b10;
}



/* Entry: 106670dd4; end: 106670e67; +[STOStoryBody_EntryPoint_Tile_Logo descriptor] */

undefined * FUN_106670dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebf40,
                        &PTR____CFConstantStringClassReference_110e58498,&PTR_DAT_1131564d0,
                        &PTR_DAT_113156628,3,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112aebe78);
    puRam00000001136c3b18 = puVar1;
  }
  return puRam00000001136c3b18;
}



/* Entry: 106670e68; end: 106670f5f; +[STOStoryBody_EngagementStatsLite descriptor] */

undefined * FUN_106670e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebe28,
                        &PTR____CFConstantStringClassReference_110e584b8,&PTR_DAT_1131564d0,
                        &PTR_DAT_113156788,9,0x50,0x1c);
    func_0x00010c228780();
    puRam00000001136c3b20 = puVar1;
  }
  return puRam00000001136c3b20;
}



/* Entry: 106670f60; end: 106670f6b;  */

bool FUN_106670f60(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106670f6c; end: 106670fd3; +[TaskResult descriptor] */

void FUN_106670f6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aebfe0,
                        &PTR____CFConstantStringClassReference_110e584f8,&PTR_DAT_113156a70,
                        &PTR_s_result_1131570a8,7,0x30,0x1c);
    puRam00000001136c3b30 = puVar1;
  }
  return;
}



/* Entry: 106670fd4; end: 10667103b; +[SingleFloat descriptor] */

void FUN_106670fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec030,
                        &PTR____CFConstantStringClassReference_110e58518,&PTR_DAT_113156a70,
                        &PTR_s_value_113156a88,1,8,0x1c);
    puRam00000001136c3b38 = puVar1;
  }
  return;
}



/* Entry: 10667103c; end: 1066710a3; +[MultiFloat descriptor] */

void FUN_10667103c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec080,
                        &PTR____CFConstantStringClassReference_110e58538,&PTR_DAT_113156a70,
                        &PTR_DAT_113156c88,2,0x18,0x1c);
    puRam00000001136c3b40 = puVar1;
  }
  return;
}



/* Entry: 1066710a4; end: 10667110b; +[MultiInt descriptor] */

void FUN_1066710a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec0d0,
                        &PTR____CFConstantStringClassReference_110e58558,&PTR_DAT_113156a70,
                        &PTR_DAT_113156aa8,1,0x10,0x1c);
    puRam00000001136c3b48 = puVar1;
  }
  return;
}



/* Entry: 10667110c; end: 106671173; +[MultiFloatList descriptor] */

void FUN_10667110c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec120,
                        &PTR____CFConstantStringClassReference_110e58578,&PTR_DAT_113156a70,
                        &PTR_DAT_113156ac8,1,0x10,0x1c);
    puRam00000001136c3b50 = puVar1;
  }
  return;
}



/* Entry: 106671174; end: 1066711db; +[MultiString descriptor] */

void FUN_106671174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec170,
                        &PTR____CFConstantStringClassReference_110e58598,&PTR_DAT_113156a70,
                        &PTR_DAT_113156ae8,1,0x10,0x1c);
    puRam00000001136c3b58 = puVar1;
  }
  return;
}



/* Entry: 1066711dc; end: 106671243; +[LabelScorePair descriptor] */

void FUN_1066711dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec1c0,
                        &PTR____CFConstantStringClassReference_110e585b8,&PTR_DAT_113156a70,
                        &PTR_s_label_113156dc8,3,0x18,0x1c);
    puRam00000001136c3b60 = puVar1;
  }
  return;
}



/* Entry: 106671244; end: 1066712ab; +[ClassifierResult descriptor] */

void FUN_106671244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec210,
                        &PTR____CFConstantStringClassReference_110e585d8,&PTR_DAT_113156a70,
                        &PTR_DAT_113156b08,1,0x10,0x1c);
    puRam00000001136c3b68 = puVar1;
  }
  return;
}



/* Entry: 1066712ac; end: 106671313; +[Embedding descriptor] */

void FUN_1066712ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3b70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aec260,
                        &PTR____CFConstantStringClassReference_110e585f8,&PTR_DAT_113156a70,
                        &PTR_DAT_113156cc8,2,0x10,0x1c);
    puRam00000001136c3b70 = puVar1;
  }
  return;
}


