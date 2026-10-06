/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065f826c; end: 1065f82e7;  */

void FUN_1065f826c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c22b640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010c22b640();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))();
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065f82e8; end: 1065f83a3; -[SCUnifiedPublicProfileActionHandler reportProfileWithEncodedBusinessProfile:subscriptionActionAttributions:] */

void FUN_1065f82e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  puVar2 = PTR_PTR_1126b1a58;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1065f83a4;
    puStack_50 = &UNK_110841f80;
    _objc_retain(puVar2);
    puStack_48 = puVar2;
    lStack_40 = param_1;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
    _objc_release(puStack_48);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1065f83a4; end: 1065f8527;  */

void FUN_1065f83a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126b4a08;
  _objc_alloc(PTR_PTR_1126b4a08);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe44e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe4500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bf60(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x28) + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x000108f04e30();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  puVar7 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  puVar8 = PTR_PTR_1126b2e98;
  func_0x00010c294280(PTR_PTR_1126b2e98,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0587e0(puVar7,param_2,puVar6,puVar8,*(undefined8 *)(param_1 + 0x28),PTR_PTR_1133bb290
                      ,PTR_PTR_1133bb2e8);
  _objc_release(puVar8);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60),param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065f8528; end: 1065f852b; -[SCUnifiedPublicProfileActionHandler reportTileWithEncodedBusinessProfile:subscriptionActionAttributions:] */

void FUN_1065f8528(void)

{
  return;
}



/* Entry: 1065f852c; end: 1065f8653; -[SCUnifiedPublicProfileActionHandler hideProfileWithEncodedBusinessProfile:callback:] */

void FUN_1065f852c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b1a58;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  _objc_retain(0);
  if (puVar1 == (undefined *)0x0) {
    if (param_4 == 0) goto LAB_1065f8624;
    func_0x00010c09e4e0(0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(puVar1);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_4);
    puVar2 = puVar1;
  }
  _objc_release(puVar2);
LAB_1065f8624:
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(param_4);
  return;
}



/* Entry: 1065f8654; end: 1065f8787;  */

void FUN_1065f8654(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bfe5ea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfe44e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar8 + 0x38);
  uVar3 = *(undefined8 *)(lVar8 + 0x40);
  uVar2 = *(undefined8 *)(lVar8 + 0x50);
  uVar6 = *(undefined8 *)(lVar8 + 0x58);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1065f8788;
  puStack_70 = &UNK_110859a38;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar9);
  uStack_68 = uVar9;
  func_0x000107afba64(uVar10,uVar4,uVar5,uVar1,uVar3,uVar2,uVar6,uVar7,&puStack_88);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1065f8788; end: 1065f87db;  */

void FUN_1065f8788(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1065f87dc; end: 1065f8933; -[SCUnifiedPublicProfileActionHandler reportHighlightTileWithEncodedBusinessProfile:highlightId:tileSnapId:subfeature:] */

void FUN_1065f87dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_58 = 0;
  puVar2 = PTR_PTR_1126b1a58;
  func_0x00010c0f40e0(PTR_PTR_1126b1a58,param_2,param_3,&uStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_58;
  _objc_retain(uStack_58);
  if ((puVar2 != (undefined *)0x0) && (lVar3 = param_4, func_0x00010c08fa60(), lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1065f8934;
    puStack_88 = &UNK_1108475b0;
    _objc_retain(puVar2);
    puStack_80 = puVar2;
    _objc_retain(param_4);
    lStack_78 = param_4;
    _objc_retain(param_5);
    uStack_70 = param_5;
    lStack_68 = param_1;
    _objc_retain(param_6);
    uStack_60 = param_6;
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_a0);
    _objc_release(uStack_60);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
    _objc_release(puStack_80);
  }
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065f8934; end: 1065f8a6f;  */

void FUN_1065f8934(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126cc120;
  _objc_alloc(PTR_PTR_1126cc120);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03aea0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar4 = *(long *)(param_1 + 0x38) + 0x10;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x000108f04e30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar3,param_2,lVar5,1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126b2ec8;
  _objc_alloc(PTR_PTR_1126b2ec8);
  puVar7 = PTR_PTR_1126b2e98;
  func_0x00010c14bd40(PTR_PTR_1126b2e98,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0587e0(puVar6,param_2,puVar3,puVar7,*(undefined8 *)(param_1 + 0x38),PTR_PTR_1133bb290
                      ,*(undefined8 *)(param_1 + 0x40));
  _objc_release(puVar7);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065f8a70; end: 1065f8d17; -[SCUnifiedPublicProfileActionHandler blockUserWithUserId:] */

void FUN_1065f8a70(long param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  if ((((param_3 != (undefined *)0x0) &&
       (puVar1 = param_3, func_0x00010c08fa60(), puVar1 != (undefined *)0x0)) &&
      (lVar2 = *(long *)(param_1 + 0x88), lVar2 != 0)) && (*(long *)(param_1 + 0x90) != 0)) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar4 = puVar1;
    func_0x00010c244ea0(lVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
    _objc_release(lVar2);
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (puVar4 == (undefined *)0x0) {
    lVar6 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126ae5c0;
    if (lVar6 != 0) {
      lVar6 = param_2;
      func_0x00010bfb1920(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1d620(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x90);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x20);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(*(undefined8 *)(param_3 + 0x28));
      func_0x00010bf1d520(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(puVar4);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1065f8d18; end: 1065f8d27;  */

void FUN_1065f8d18(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdfb7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__detachViewController_11255c798);
    return;
  }
  return;
}



/* Entry: 1065f8d28; end: 1065f8de7; -[SCUnifiedPublicProfileActionHandler _detachViewController] */

void FUN_1065f8d28(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  _objc_release();
  if (param_1 != 0) {
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1065f8de8; end: 1065f8f23; -[SCUnifiedPublicProfileActionHandler playProfileStoryWithSourceView:hostAccountId:] */

void FUN_1065f8de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfaa9c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065f8f24; end: 1065f8f87;  */

void FUN_1065f8f24(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ddc60();
  if (0 < lVar1) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be74b20();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065f8f88; end: 1065f91ff; -[SCUnifiedPublicProfileActionHandler _playStoryWithStoriesSummaryInfo:sourceView:] */

void FUN_1065f8f88(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = PTR_PTR_1126b4d28;
  dVar9 = param_1;
  _objc_alloc(PTR_PTR_1126b4d28);
  uVar5 = param_4;
  func_0x00010c259cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dcc0(puVar1,param_3,uVar5,1,0,1);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  dVar9 = dVar9 * 1000.0;
  lVar7 = (long)dVar9;
  uVar5 = param_4;
  func_0x00010c259cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c04bca0(puVar2,param_3,7,0xd,lVar7,8,puVar1,uVar5,2,0x25);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar5 = param_5;
  func_0x00010b9688dc(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar7 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar7);
  func_0x00010bff7200(puVar3,param_3,uVar5,lVar7,0,param_2,0,0,0,0);
  _objc_release(lVar7);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b4d38;
  func_0x00010c11a700(PTR_PTR_1126b4d38,param_3,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48,3,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0xb8);
  func_0x00010bf22a20(uVar5,param_3,puVar2,puVar3,0,2,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  _CACurrentMediaTime();
  uVar6 = 8;
  func_0x000108534a80(8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar9 - param_1) * 1000.0),uVar8,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,uVar6);
  _objc_release(uVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0xb0),param_3,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065f9200; end: 1065f9247; -[SCUnifiedPublicProfileActionHandler reportDidCompleteWithCancelled:] */

void FUN_1065f9200(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065f9248; end: 1065f924f; -[SCUnifiedPublicProfileActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1065f9248(void)

{
  return 0;
}



/* Entry: 1065f9250; end: 1065f925b; -[SCUnifiedPublicProfileActionHandler pushToValdiMarshaller:] */

undefined8 FUN_1065f9250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9d1ac(param_3,param_1);
  func_0x00010af9d1a4();
  func_0x00010af9d160();
  func_0x00010af9d124();
  return param_3;
}



/* Entry: 1065f925c; end: 1065f92a3; -[SCUnifiedPublicProfileActionHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_1065f925c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xb0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065f92a4; end: 1065f92ab; -[SCUnifiedPublicProfileActionHandler shareableProfileHandler] */

undefined8 FUN_1065f92a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1065f92ac; end: 1065f92b3; -[SCUnifiedPublicProfileActionHandler setShareableProfileHandler:] */

void FUN_1065f92ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1065f92b4; end: 1065f93e3; -[SCUnifiedPublicProfileActionHandler .cxx_destruct] */

void FUN_1065f92b4(long param_1)

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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f93e4; end: 1065f948f; -[SCUnifiedPublicProfileAddFriendImpressionLogger initWithFriendSurfaceImpressionLogger:sessionId:] */

undefined1 *
FUN_1065f93e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f20a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065f9490; end: 1065f95ef; -[SCUnifiedPublicProfileAddFriendImpressionLogger logAddFriendImpressionIfNeededWithIsPublisherProfile:ownerUserId:isMutualFriend:] */

void FUN_1065f9490(long param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (((((*(byte *)(param_1 + 0x18) & 1) == 0) && ((param_5 & 1) == 0)) && ((param_3 & 1) == 0)) &&
     ((*(long *)(param_1 + 8) != 0 && (lVar2 = param_4, func_0x00010c08fa60(), lVar2 != 0)))) {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      puVar3 = PTR_PTR_1126b4a10;
      _objc_alloc();
      func_0x00010c050cc0();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar4);
      uVar1 = *(undefined8 *)(param_1 + 8);
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aeee0(uVar1);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 1065f95f0; end: 1065f961f; -[SCUnifiedPublicProfileAddFriendImpressionLogger .cxx_destruct] */

void FUN_1065f95f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065f9620; end: 1065f971b; -[SCUnifiedPublicProfileChatActionHandler initWithViewController:chatNavigationService:sourceType:chatCameraScopeLauncher:chatCameraScopeServices:] */

undefined1 *
FUN_1065f9620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f20b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065f971c; end: 1065f9723; -[SCUnifiedPublicProfileChatActionHandler presentChatForUserWithUserId:username:] */

void FUN_1065f971c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentChatForUserWithUserId_sou_112620868,param_3,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065f9724; end: 1065f9737; -[SCUnifiedPublicProfileChatActionHandler presentChatForUserWithSourceWithUserId:sourceType:] */

void FUN_1065f9724(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xe6;
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c10b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentChatForUserWithUserId_sou_112620868,param_3,uVar1);
  return;
}



/* Entry: 1065f9738; end: 1065f9833; -[SCUnifiedPublicProfileChatActionHandler presentChatForUserWithUserId:sourceType:] */

void FUN_1065f9738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065f9834; end: 1065f98c3;  */

void FUN_1065f9834(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b01c0;
    func_0x00010c294260(PTR_PTR_1126b01c0,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236c80();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065f98c4; end: 1065f99df; -[SCUnifiedPublicProfileChatActionHandler sendSnapWithUserId:nameToDisplay:] */

void FUN_1065f98c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065f99e0; end: 1065f9ae7;  */

void FUN_1065f99e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b1010;
    _objc_alloc(PTR_PTR_1126b1010);
    func_0x00010c02ec80();
    func_0x00010c1eb2e0();
    func_0x00010c1eb080(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    func_0x00010c1d86a0(puVar2,param_2,0x21);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    lVar3 = lVar1 + 8;
    _objc_loadWeakRetained(lVar3);
    puVar4 = puVar2;
    func_0x00010c271a20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf23680(uVar5,param_2,lVar3,puVar4,lVar1,1,0,0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar3);
    func_0x00010c08b7c0(*(undefined8 *)(lVar1 + 0x18),param_2,uVar5,lVar1);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065f9ae8; end: 1065f9aef; -[SCUnifiedPublicProfileChatActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1065f9ae8(void)

{
  return 0;
}



/* Entry: 1065f9af0; end: 1065f9afb; -[SCUnifiedPublicProfileChatActionHandler pushToValdiMarshaller:] */

void FUN_1065f9af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1065f9afc; end: 1065f9b03; -[SCUnifiedPublicProfileChatActionHandler dismissCameraScope:] */

void FUN_1065f9afc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1065f9b04; end: 1065f9b47; -[SCUnifiedPublicProfileChatActionHandler .cxx_destruct] */

void FUN_1065f9b04(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1065f9b48; end: 1065f9c3b; -[SCUnifiedPublicProfileCommerceActionHandler initWithViewController:commerceProductCatalogScopeExposer:commerceShoppingScopeExposer:commerceEntryType:] */

undefined1 *
FUN_1065f9b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f20b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065f9c3c; end: 1065f9cbf; -[SCUnifiedPublicProfileCommerceActionHandler initWithViewController:commerceProductCatalogScopeExposer:commerceShoppingScopeExposer:businessProfileId:] */

long FUN_1065f9c3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_6);
  func_0x00010c061760(param_1,param_2,param_3,param_4,param_5,0);
  if (param_1 != 0) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    _objc_release(uVar1);
  }
  _objc_release(param_6);
  return param_1;
}



/* Entry: 1065f9cc0; end: 1065f9e17; -[SCUnifiedPublicProfileCommerceActionHandler presentStoreForStoreIdWithStoreId:pageId:pageSessionId:] */

void FUN_1065f9cc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065f9e18; end: 1065f9e4f;  */

void FUN_1065f9e18(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ab20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065f9e50; end: 1065f9fa7; -[SCUnifiedPublicProfileCommerceActionHandler presentShowcaseForStoreIdWithShowcaseStoreId:pageId:pageSessionId:] */

void FUN_1065f9e50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065f9fa8; end: 1065f9fdf;  */

void FUN_1065f9fa8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065f9fe0; end: 1065fa12f; -[SCUnifiedPublicProfileCommerceActionHandler _presentCommerceStoreWithId:pageId:pageSessionId:] */

void FUN_1065f9fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar3 = *(undefined **)(param_1 + 8);
  _objc_retain(puVar3);
  if (puVar3 == (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126b0500;
      func_0x00010c117120(PTR_PTR_1126b0500,param_2,*(undefined8 *)(param_1 + 0x20),param_4,param_5)
      ;
      _objc_retainAutoreleasedReturnValue();
    }
  }
  puVar1 = PTR_PTR_1126b0508;
  _objc_alloc(PTR_PTR_1126b0508);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c039400(puVar1,param_2,lVar2,param_3,0,puVar3,0);
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1065fa130; end: 1065fa2df; -[SCUnifiedPublicProfileCommerceActionHandler _presentShowcaseCommerceStoreWithId:pageId:pageSessionId:] */

void FUN_1065fa130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar1 = PTR_PTR_1126c7d98;
  _objc_alloc(PTR_PTR_1126c7d98);
  func_0x00010c04cdc0();
  puVar2 = PTR_PTR_1126b0518;
  func_0x00010c257ea0(PTR_PTR_1126b0518,param_2,param_3,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b0520;
  _objc_alloc(PTR_PTR_1126b0520);
  puVar4 = PTR_PTR_1126b0528;
  func_0x00010c117620(PTR_PTR_1126b0528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021b80(puVar3,param_2,puVar2,puVar4,puVar1,1,0);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c038f40(puVar4,param_2,lVar6,1);
  _objc_release(lVar6);
  puVar5 = PTR_PTR_1126b0530;
  _objc_alloc(PTR_PTR_1126b0530);
  func_0x00010c001f40();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065fa2e0; end: 1065fa2e3; -[SCUnifiedPublicProfileCommerceActionHandler commerceBrowserWillPresent] */

void FUN_1065fa2e0(void)

{
  return;
}



/* Entry: 1065fa2e4; end: 1065fa32b; -[SCUnifiedPublicProfileCommerceActionHandler commerceBrowserWillDismiss] */

void FUN_1065fa2e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065fa32c; end: 1065fa373; -[SCUnifiedPublicProfileCommerceActionHandler didDismissShoppingScope] */

void FUN_1065fa32c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1065fa374; end: 1065fa37b; -[SCUnifiedPublicProfileCommerceActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1065fa374(void)

{
  return 0;
}



/* Entry: 1065fa37c; end: 1065fa387; -[SCUnifiedPublicProfileCommerceActionHandler pushToValdiMarshaller:] */

void FUN_1065fa37c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 1065fa388; end: 1065fa3d7; -[SCUnifiedPublicProfileCommerceActionHandler .cxx_destruct] */

void FUN_1065fa388(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065fa3d8; end: 1065fa47b; -[SCUnifiedPublicProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fa3d8(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_1;
  func_0x00010beb4440();
  uVar2 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c072b60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be47d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__launchMyProfileOnPublicProfileT_11256f8e8)
    ;
    return;
  }
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf18a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_beginStandaloneApp_1125a3c38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf18e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_beginUnifiedPublicProfile_1125a3d38);
  return;
}



/* Entry: 1065fa47c; end: 1065fc54b; -[SCUnifiedPublicProfileEntryPoint beginUnifiedPublicProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fa47c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  long lVar97;
  long lVar98;
  long lVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  long lVar103;
  long lVar104;
  long lVar105;
  long lVar106;
  long lVar107;
  long lVar108;
  long lVar109;
  long lVar110;
  long lVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  long lVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  long lVar140;
  long lVar141;
  long lVar142;
  long lVar143;
  long lVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  long lVar149;
  undefined *puVar150;
  long lVar151;
  long lVar152;
  long lVar153;
  long lVar154;
  long lVar155;
  long lVar156;
  long lVar157;
  long lVar158;
  long lVar159;
  long lVar160;
  long lVar161;
  long lVar162;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar161 = (long)_DAT_11274bd38;
  lVar1 = param_1 + lVar161;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar151 = param_1 + lVar161;
    _objc_loadWeakRetained();
    lVar154 = lVar151;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar152 = lVar154;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar154);
    _objc_release(lVar151);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar152 != 0) {
      _objc_initWeak(auStack_80,param_1);
      puVar4 = PTR_PTR_1126ae720;
      puVar21 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1065fc54c;
      puStack_90 = &UNK_11092f058;
      _objc_copyWeak(auStack_88,auStack_80);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + _DAT_11274bd44;
      _objc_loadWeakRetained();
      lVar5 = lVar1;
      func_0x00010bf3f680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126ae720;
      puStack_d0 = puVar21;
      uStack_c8 = 0xc2000000;
      uStack_c0 = 0x1065fc624;
      puStack_b8 = &UNK_11092f028;
      _objc_copyWeak(auStack_b0,auStack_80);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ae720;
      puStack_f8 = puVar21;
      uStack_f0 = 0xc2000000;
      pcStack_e8 = FUN_1065fc6fc;
      puStack_e0 = &UNK_11092eff8;
      _objc_copyWeak(auStack_d8,auStack_80);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126ae720;
      puStack_120 = puVar21;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_1065fca0c;
      puStack_108 = &UNK_11092f088;
      _objc_copyWeak(auStack_100,auStack_80);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae720;
      puStack_148 = puVar21;
      uStack_140 = 0xc2000000;
      uStack_138 = 0x1065fcaa4;
      puStack_130 = &UNK_1108f0d10;
      _objc_copyWeak(auStack_128,auStack_80);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_150,auStack_80);
      func_0x00010bf11fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar151 = (long)_DAT_11274bd7c;
      lVar1 = param_1 + lVar151;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c0cef00();
      _objc_retainAutoreleasedReturnValue();
      lVar152 = (long)_DAT_11274bd48;
      lVar2 = param_1 + lVar152;
      _objc_loadWeakRetained(lVar2);
      lVar154 = lVar2;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar3;
      func_0x000107d704c8(lVar3,lVar154);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar154);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_11274bd80;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf1cf00();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar13 = PTR_PTR_1126b4a50;
      _objc_alloc();
      lVar1 = param_1 + _DAT_11274bd84;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c293fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05f0c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar153 = (long)_DAT_11274bd88;
      lVar1 = param_1 + lVar153;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar3;
      func_0x00010c142e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar15 = PTR_PTR_1126cc068;
      _objc_alloc_init();
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar154 = lVar2;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar154;
      func_0x00010c0f1e60();
      func_0x00010bc9107c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206fa0(puVar15);
      _objc_release(lVar3);
      _objc_release(lVar154);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar154 = lVar3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar154;
      func_0x00010c247a00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206f80(puVar15);
      _objc_release(lVar2);
      _objc_release(lVar154);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar154 = lVar3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar154;
      func_0x00010c0f1180();
      FUN_1066080d8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d80e0(puVar15);
      _objc_release(lVar2);
      _objc_release(lVar154);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar154 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar154;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b5f20(puVar15);
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar154);
      _objc_release(lVar1);
      lVar154 = (long)_DAT_11274bd3c;
      lVar1 = param_1 + lVar154;
      _objc_loadWeakRetained();
      lVar16 = lVar1;
      func_0x00010c293740();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11274bd8c;
      _objc_loadWeakRetained();
      lVar18 = lVar2;
      func_0x00010c0d79a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + _DAT_11274bd74;
      _objc_loadWeakRetained();
      lVar19 = lVar3;
      func_0x00010c09f2a0();
      _objc_retainAutoreleasedReturnValue();
      lVar160 = lVar17;
      func_0x00010057694c(lVar17,lVar18,lVar19);
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar160;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c195700(puVar15);
      _objc_release(lVar20);
      _objc_release(lVar160);
      _objc_release(lVar19);
      _objc_release(lVar3);
      _objc_release(lVar18);
      _objc_release(lVar2);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar1);
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dac80();
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd960(puVar15);
      _objc_release(puVar21);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dacc0();
      func_0x00010c0df780(puVar21);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd980(puVar15);
      _objc_release(puVar21);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar160 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar160;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0f1e60();
      _objc_release(lVar3);
      _objc_release(lVar160);
      _objc_release(lVar1);
      if (lVar2 == 0x1b) {
        puVar21 = PTR_PTR_1126af390;
        func_0x00010bfbb8a0(PTR_PTR_1126af390);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a95a0(puVar15);
        _objc_release(puVar21);
        puVar21 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
        func_0x00010c22bc20(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar21;
        func_0x00010befe540();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar22;
        func_0x00010bdc3580();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1663a0(puVar15);
        _objc_release(puVar23);
        _objc_release(puVar22);
        _objc_release(puVar21);
        puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c194940(puVar15);
        _objc_release(puVar21);
      }
      lVar1 = param_1 + _DAT_11274bd90;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf075a0();
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar160 = (long)_DAT_11274bd94;
      lVar1 = param_1 + lVar160;
      _objc_loadWeakRetained();
      lVar25 = lVar1;
      func_0x00010beff660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_11274bd98;
      _objc_loadWeakRetained();
      lVar26 = lVar1;
      func_0x00010c2609c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar21 = PTR_PTR_1126b0c98;
      _objc_alloc();
      func_0x00010c0368e0();
      lVar162 = (long)_DAT_11274bd9c;
      lVar1 = param_1 + lVar162;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bfb8b80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      lVar27 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar22 = PTR_PTR_1126b1530;
      _objc_alloc();
      func_0x00010c0460e0();
      lVar1 = param_1 + lVar162;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bfebe60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      lVar28 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_11274bda0;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c0b9940();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar30 = lVar29;
      func_0x00010c0cfac0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + _DAT_11274bda4;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bf44e60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar31 = lVar3;
      func_0x00010c0b7580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar23 = PTR_PTR_1126b6520;
      _objc_alloc();
      lVar1 = param_1 + _DAT_11274bda8;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c11ab80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0177c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar162;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c261ee0();
      _objc_retainAutoreleasedReturnValue();
      puVar32 = PTR_PTR_1126b1538;
      _objc_alloc(PTR_PTR_1126b1538);
      func_0x00010c033420();
      lVar33 = lVar2;
      (**(code **)(lVar2 + 0x10))(lVar2,puVar32);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar32);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar32 = PTR_PTR_1126b0c98;
      _objc_alloc();
      func_0x00010c0368e0();
      lVar1 = param_1 + lVar162;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010bfb7ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar34 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + _DAT_11274bdac;
      _objc_loadWeakRetained();
      lVar35 = lVar1;
      func_0x00010c11e240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      lVar36 = lVar35;
      func_0x00010c11e260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar37 = PTR_PTR_1126cc128;
      _objc_alloc();
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar38 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar39 = lVar38;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + _DAT_11274bdb0;
      _objc_loadWeakRetained();
      lVar40 = lVar2;
      func_0x00010c095660();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + _DAT_11274bdb4;
      _objc_loadWeakRetained();
      lVar41 = lVar3;
      func_0x00010bf9e260();
      _objc_retainAutoreleasedReturnValue();
      lVar160 = param_1 + lVar160;
      _objc_loadWeakRetained();
      lVar42 = lVar160;
      func_0x00010beef000();
      _objc_retainAutoreleasedReturnValue();
      lVar155 = (long)_DAT_11274bdc4;
      lVar20 = param_1 + lVar155;
      _objc_loadWeakRetained();
      lVar43 = lVar20;
      func_0x00010bfb87e0();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = param_1 + lVar155;
      _objc_loadWeakRetained();
      lVar44 = lVar19;
      func_0x00010bf360a0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = param_1 + lVar155;
      _objc_loadWeakRetained();
      lVar45 = lVar17;
      func_0x00010bf36120();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1 + _DAT_11274bdd0;
      _objc_loadWeakRetained();
      lVar46 = lVar18;
      func_0x00010bf67f80();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_1 + _DAT_11274bdd4;
      _objc_loadWeakRetained();
      lVar47 = lVar16;
      func_0x00010c1490a0();
      _objc_retainAutoreleasedReturnValue();
      lVar48 = param_1;
      func_0x00010c2443c0();
      _objc_retainAutoreleasedReturnValue();
      lVar49 = param_1 + _DAT_11274bdd8;
      _objc_loadWeakRetained();
      lVar50 = lVar49;
      func_0x00010c0d6760();
      _objc_retainAutoreleasedReturnValue();
      lVar51 = lVar50;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar155 = param_1 + lVar155;
      _objc_loadWeakRetained();
      lVar52 = lVar155;
      func_0x00010c15d500();
      _objc_retainAutoreleasedReturnValue();
      lVar53 = param_1 + _DAT_11274bddc;
      _objc_loadWeakRetained();
      lVar54 = param_1 + _DAT_11274bde0;
      _objc_loadWeakRetained();
      lVar55 = lVar54;
      func_0x00010c0e1840();
      _objc_retainAutoreleasedReturnValue();
      lVar56 = param_1 + _DAT_11274bd4c;
      _objc_loadWeakRetained();
      lVar57 = lVar56;
      func_0x00010bf5b780();
      _objc_retainAutoreleasedReturnValue();
      lVar156 = (long)_DAT_11274bd54;
      lVar58 = param_1 + lVar156;
      _objc_loadWeakRetained();
      lVar59 = lVar58;
      func_0x00010c08d400();
      _objc_retainAutoreleasedReturnValue();
      lVar156 = param_1 + lVar156;
      _objc_loadWeakRetained();
      lVar60 = lVar156;
      func_0x00010c08d440();
      _objc_retainAutoreleasedReturnValue();
      lVar61 = param_1 + _DAT_11274bde4;
      _objc_loadWeakRetained();
      lVar62 = lVar61;
      func_0x00010c08d4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar151 = param_1 + lVar151;
      _objc_loadWeakRetained();
      lVar63 = lVar151;
      func_0x00010c0cf020();
      _objc_retainAutoreleasedReturnValue();
      lVar64 = param_1 + _DAT_11274bdec;
      _objc_loadWeakRetained();
      lVar65 = lVar64;
      func_0x00010c0cb8c0();
      _objc_retainAutoreleasedReturnValue();
      lVar66 = param_1 + _DAT_11274bdf0;
      _objc_loadWeakRetained();
      lVar67 = lVar66;
      func_0x00010bfea2e0();
      _objc_retainAutoreleasedReturnValue();
      lVar68 = lVar67;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar69 = lVar68;
      func_0x00010bfea320();
      _objc_retainAutoreleasedReturnValue();
      lVar70 = lVar69;
      func_0x00010bfea2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar157 = (long)_DAT_11274bdf4;
      lVar71 = param_1 + lVar157;
      _objc_loadWeakRetained();
      lVar72 = lVar71;
      func_0x00010c0d8300();
      _objc_retainAutoreleasedReturnValue();
      lVar157 = param_1 + lVar157;
      _objc_loadWeakRetained();
      lVar73 = lVar157;
      func_0x00010bfcfa80();
      _objc_retainAutoreleasedReturnValue();
      lVar74 = param_1 + _DAT_11274bd5c;
      _objc_loadWeakRetained();
      lVar75 = lVar74;
      func_0x00010bf13100();
      _objc_retainAutoreleasedReturnValue();
      lVar154 = param_1 + lVar154;
      _objc_loadWeakRetained();
      lVar76 = lVar154;
      func_0x00010c293740();
      _objc_retainAutoreleasedReturnValue();
      lVar77 = param_1 + _DAT_11274bdf8;
      _objc_loadWeakRetained();
      lVar78 = lVar77;
      func_0x00010bf448c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be42ec0();
      lVar79 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar80 = lVar79;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237bc0();
      lVar81 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar82 = lVar81;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078840();
      lVar83 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar84 = lVar83;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar85 = lVar84;
      func_0x00010c0e33c0();
      _objc_retainAutoreleasedReturnValue();
      lVar86 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar87 = lVar86;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07b840();
      lVar88 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar89 = lVar88;
      func_0x00010c2801a0();
      _objc_retainAutoreleasedReturnValue();
      lVar90 = param_1 + _DAT_11274bdfc;
      _objc_loadWeakRetained();
      lVar91 = lVar90;
      func_0x00010c22ac20();
      _objc_retainAutoreleasedReturnValue();
      lVar152 = param_1 + lVar152;
      _objc_loadWeakRetained();
      lVar92 = lVar152;
      func_0x00010bf398e0();
      _objc_retainAutoreleasedReturnValue();
      lVar93 = param_1 + _DAT_11274be00;
      _objc_loadWeakRetained();
      lVar94 = lVar93;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      lVar95 = param_1 + _DAT_11274be04;
      _objc_loadWeakRetained();
      lVar96 = lVar95;
      func_0x00010c23c760();
      _objc_retainAutoreleasedReturnValue();
      lVar97 = param_1 + _DAT_11274be08;
      _objc_loadWeakRetained();
      lVar98 = lVar97;
      func_0x00010bf53fa0();
      _objc_retainAutoreleasedReturnValue();
      lVar158 = (long)_DAT_11274bd50;
      lVar99 = param_1 + lVar158;
      _objc_loadWeakRetained();
      lVar100 = lVar99;
      func_0x00010c244620();
      _objc_retainAutoreleasedReturnValue();
      lVar101 = param_1 + lVar158;
      _objc_loadWeakRetained();
      lVar102 = lVar101;
      func_0x00010c244ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar158 = param_1 + lVar158;
      _objc_loadWeakRetained();
      lVar103 = lVar158;
      func_0x00010c244d60();
      _objc_retainAutoreleasedReturnValue();
      lVar159 = (long)_DAT_11274be0c;
      lVar104 = param_1 + lVar159;
      _objc_loadWeakRetained();
      lVar105 = lVar104;
      func_0x00010c12a480();
      _objc_retainAutoreleasedReturnValue();
      lVar159 = param_1 + lVar159;
      _objc_loadWeakRetained();
      lVar106 = lVar159;
      func_0x00010bfb8c60();
      _objc_retainAutoreleasedReturnValue();
      lVar107 = param_1 + _DAT_11274be10;
      _objc_loadWeakRetained();
      lVar108 = lVar107;
      func_0x00010bfcdf20();
      _objc_retainAutoreleasedReturnValue();
      lVar109 = param_1 + _DAT_11274be18;
      _objc_loadWeakRetained();
      lVar110 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar111 = lVar110;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar112 = lVar111;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar113 = param_1 + _DAT_11274be24;
      _objc_loadWeakRetained();
      lVar114 = lVar113;
      func_0x00010bf42d20();
      _objc_retainAutoreleasedReturnValue();
      lVar115 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar116 = lVar115;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dac80();
      lVar117 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar118 = lVar117;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dacc0();
      lVar119 = param_1 + _DAT_11274be28;
      _objc_loadWeakRetained();
      lVar120 = lVar119;
      func_0x00010bf43140();
      _objc_retainAutoreleasedReturnValue();
      lVar121 = param_1 + _DAT_11274bd70;
      _objc_loadWeakRetained();
      lVar122 = lVar121;
      func_0x00010bfe7760();
      _objc_retainAutoreleasedReturnValue();
      lVar123 = param_1 + _DAT_11274bd40;
      _objc_loadWeakRetained();
      lVar124 = lVar123;
      func_0x00010c08d900();
      _objc_retainAutoreleasedReturnValue();
      lVar125 = param_1 + _DAT_11274be30;
      _objc_loadWeakRetained();
      lVar126 = param_1 + _DAT_11274be34;
      _objc_loadWeakRetained();
      lVar127 = lVar126;
      func_0x00010c258580();
      _objc_retainAutoreleasedReturnValue();
      lVar128 = param_1 + _DAT_11274be38;
      _objc_loadWeakRetained();
      lVar129 = param_1 + _DAT_11274be3c;
      _objc_loadWeakRetained();
      lVar130 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar131 = lVar130;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar132 = lVar131;
      func_0x00010c08bdc0();
      _objc_retainAutoreleasedReturnValue();
      lVar133 = param_1 + _DAT_11274be40;
      _objc_loadWeakRetained();
      lVar134 = lVar133;
      func_0x00010bfb9460();
      _objc_retainAutoreleasedReturnValue();
      lVar135 = param_1 + _DAT_11274be48;
      _objc_loadWeakRetained();
      lVar136 = param_1 + _DAT_11274be4c;
      _objc_loadWeakRetained();
      lVar137 = lVar136;
      func_0x00010bf66980();
      _objc_retainAutoreleasedReturnValue();
      lVar138 = lVar137;
      func_0x00010bf66920();
      _objc_retainAutoreleasedReturnValue();
      lVar153 = param_1 + lVar153;
      _objc_loadWeakRetained();
      lVar139 = lVar153;
      func_0x00010c295440();
      _objc_retainAutoreleasedReturnValue();
      lVar140 = param_1 + _DAT_11274be50;
      _objc_loadWeakRetained();
      lVar141 = lVar140;
      func_0x00010c262a80();
      _objc_retainAutoreleasedReturnValue();
      lVar142 = param_1 + _DAT_11274be54;
      _objc_loadWeakRetained();
      lVar143 = lVar142;
      func_0x00010c0d4300();
      _objc_retainAutoreleasedReturnValue();
      lVar144 = param_1 + _DAT_11274be58;
      _objc_loadWeakRetained();
      lVar145 = lVar144;
      func_0x00010c0f14e0();
      _objc_retainAutoreleasedReturnValue();
      lVar146 = param_1 + _DAT_11274be5c;
      _objc_loadWeakRetained();
      lVar147 = lVar146;
      func_0x00010bf37020();
      _objc_retainAutoreleasedReturnValue();
      lVar148 = param_1 + _DAT_11274be60;
      _objc_loadWeakRetained();
      lVar149 = lVar148;
      func_0x00010c151a20();
      _objc_retainAutoreleasedReturnValue();
      lVar162 = param_1 + lVar162;
      _objc_loadWeakRetained();
      func_0x00010bff9d80();
      _objc_release(lVar162);
      _objc_release(lVar149);
      _objc_release(lVar148);
      _objc_release(lVar147);
      _objc_release(lVar146);
      _objc_release(lVar145);
      _objc_release(lVar144);
      _objc_release(lVar143);
      _objc_release(lVar142);
      _objc_release(lVar141);
      _objc_release(lVar140);
      _objc_release(lVar139);
      _objc_release(lVar153);
      _objc_release(lVar138);
      _objc_release(lVar137);
      _objc_release(lVar136);
      _objc_release(lVar135);
      _objc_release(lVar134);
      _objc_release(lVar133);
      _objc_release(lVar132);
      _objc_release(lVar131);
      _objc_release(lVar130);
      _objc_release(lVar129);
      _objc_release(lVar128);
      _objc_release(lVar127);
      _objc_release(lVar126);
      _objc_release(lVar125);
      _objc_release(lVar124);
      _objc_release(lVar123);
      _objc_release(lVar122);
      _objc_release(lVar121);
      _objc_release(lVar120);
      _objc_release(lVar119);
      _objc_release(lVar118);
      _objc_release(lVar117);
      _objc_release(lVar116);
      _objc_release(lVar115);
      _objc_release(lVar114);
      _objc_release(lVar113);
      _objc_release(lVar112);
      _objc_release(lVar111);
      _objc_release(lVar110);
      _objc_release(lVar109);
      _objc_release(lVar108);
      _objc_release(lVar107);
      _objc_release(lVar106);
      _objc_release(lVar159);
      _objc_release(lVar105);
      _objc_release(lVar104);
      _objc_release(lVar103);
      _objc_release(lVar158);
      _objc_release(lVar102);
      _objc_release(lVar101);
      _objc_release(lVar100);
      _objc_release(lVar99);
      _objc_release(lVar98);
      _objc_release(lVar97);
      _objc_release(lVar96);
      _objc_release(lVar95);
      _objc_release(lVar94);
      _objc_release(lVar93);
      _objc_release(lVar92);
      _objc_release(lVar152);
      _objc_release(lVar91);
      _objc_release(lVar90);
      _objc_release(lVar89);
      _objc_release(lVar88);
      _objc_release(lVar87);
      _objc_release(lVar86);
      _objc_release(lVar85);
      _objc_release(lVar84);
      _objc_release(lVar83);
      _objc_release(lVar82);
      _objc_release(lVar81);
      _objc_release(lVar80);
      _objc_release(lVar79);
      _objc_release(lVar78);
      _objc_release(lVar77);
      _objc_release(lVar76);
      _objc_release(lVar154);
      _objc_release(lVar75);
      _objc_release(lVar74);
      _objc_release(lVar73);
      _objc_release(lVar157);
      _objc_release(lVar72);
      _objc_release(lVar71);
      _objc_release(lVar70);
      _objc_release(lVar69);
      _objc_release(lVar68);
      _objc_release(lVar67);
      _objc_release(lVar66);
      _objc_release(lVar65);
      _objc_release(lVar64);
      _objc_release(lVar63);
      _objc_release(lVar151);
      _objc_release(lVar62);
      _objc_release(lVar61);
      _objc_release(lVar60);
      _objc_release(lVar156);
      _objc_release(lVar59);
      _objc_release(lVar58);
      _objc_release(lVar57);
      _objc_release(lVar56);
      _objc_release(lVar55);
      _objc_release(lVar54);
      _objc_release(lVar53);
      _objc_release(lVar52);
      _objc_release(lVar155);
      _objc_release(lVar51);
      _objc_release(lVar50);
      _objc_release(lVar49);
      _objc_release(lVar48);
      _objc_release(lVar47);
      _objc_release(lVar16);
      _objc_release(lVar46);
      _objc_release(lVar18);
      _objc_release(lVar45);
      _objc_release(lVar17);
      _objc_release(lVar44);
      _objc_release(lVar19);
      _objc_release(lVar43);
      _objc_release(lVar20);
      _objc_release(lVar42);
      _objc_release(lVar160);
      _objc_release(lVar41);
      _objc_release(lVar3);
      _objc_release(lVar40);
      _objc_release(lVar2);
      _objc_release(lVar39);
      _objc_release(lVar38);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cfbe0();
      func_0x00010c1c8b80(puVar37);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c1e1580(lVar31);
      puVar150 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c038f40();
      func_0x00010c21b220(lVar30);
      _objc_release(puVar150);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c2801a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_storeWeak(param_1 + _DAT_11274be64,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c27ece0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0c980();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + lVar161;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c2801a0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = param_1 + lVar161;
      _objc_loadWeakRetained();
      func_0x00010c2801c0(lVar2);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(puVar37);
      _objc_release(lVar36);
      _objc_release(lVar35);
      _objc_release(lVar34);
      _objc_release(puVar32);
      _objc_release(lVar33);
      _objc_release(puVar23);
      _objc_release(lVar31);
      _objc_release(lVar30);
      _objc_release(lVar29);
      _objc_release(lVar28);
      _objc_release(puVar22);
      _objc_release(lVar27);
      _objc_release(puVar21);
      _objc_release(lVar26);
      _objc_release(lVar25);
      _objc_release(lVar24);
      _objc_release(puVar15);
      _objc_release(lVar14);
      _objc_release(puVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(puVar10);
      _objc_destroyWeak(auStack_150);
      _objc_release(puVar9);
      _objc_destroyWeak(auStack_128);
      _objc_release(puVar8);
      _objc_destroyWeak(auStack_100);
      _objc_release(puVar7);
      _objc_destroyWeak(auStack_d8);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_b0);
      _objc_release(lVar5);
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
    }
    return;
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065fc54c; end: 1065fc6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fc54c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126cc0d8;
    _objc_alloc(PTR_PTR_1126cc0d8);
    lVar1 = param_1 + _DAT_11274bd3c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11274bd40;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e380(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065fc6fc; end: 1065fca0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fc6fc(long param_1,undefined8 param_2)

{
  long lVar1;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    puVar26 = PTR_PTR_1126cc100;
    _objc_alloc();
    lVar25 = (long)_DAT_11274bd4c;
    lVar1 = param_1 + lVar25;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf5b760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar25;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf5b780();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + lVar25;
    _objc_loadWeakRetained();
    lVar5 = lVar25;
    func_0x00010bf5b7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11274bd50;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_11274bd54;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_11274bd58;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c0dc780();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11274bd5c;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_11274bd60;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_11274bd64;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_11274bd68;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + _DAT_11274bd6c;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_11274bd70;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bfe7760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006a40(puVar26,param_2,lVar2,lVar4,lVar5,lVar7,lVar9,lVar11,lVar13,lVar16,lVar18,
                        lVar20,lVar22,lVar24);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
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
    _objc_release(lVar25);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 1065fca0c; end: 1065fcbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fca0c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cc0e0;
    _objc_alloc(PTR_PTR_1126cc0e0);
    lVar1 = param_1 + _DAT_11274bd74;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c09f2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c026e20(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065fcbac; end: 1065fcc0b; -[SCUnifiedPublicProfileEntryPoint _isPreviewMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1065fcbac(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1117c0();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1065fcc0c; end: 1065fcc87; -[SCUnifiedPublicProfileEntryPoint _shouldLaunchMyProfileOnPublicProfileTabForCurrentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1065fcc0c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1117c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be43470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isRequestedPublicProfileForCurr_11256e6b8);
  return param_1;
}



/* Entry: 1065fcc88; end: 1065fcd93; -[SCUnifiedPublicProfileEntryPoint _isRequestedPublicProfileForCurrentUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1065fcc88(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained();
  uVar1 = uVar5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c07b840();
  if ((uVar5 & 1) == 0) {
    param_1 = param_1 + _DAT_11274bd3c;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = uVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08fa60();
      if (uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar4;
        func_0x00010c0720c0(uVar4,param_2,lVar3);
      }
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1065fcd94; end: 1065fcf1f; -[SCUnifiedPublicProfileEntryPoint _launchMyProfileOnPublicProfileTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fcd94(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = (long)_DAT_11274bd38;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c2801a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11274be64;
  _objc_storeWeak(param_1 + lVar7,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bed0d20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)(param_1 + lVar7);
    _objc_loadWeakRetained(puVar4);
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010c280160(puVar4);
  }
  else {
    puVar4 = PTR_PTR_1126cc130;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010bebe6a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c04ac20();
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b3550;
    _objc_alloc();
    func_0x00010c058440();
    uVar6 = *(undefined8 *)(param_1 + _DAT_11274be68);
    *(undefined **)(param_1 + _DAT_11274be68) = puVar3;
    _objc_retain();
    _objc_release(uVar6);
    func_0x00010be61c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(puVar3);
  }
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065fcf20; end: 1065fcf8f; -[SCUnifiedPublicProfileEntryPoint _myProfileScopeLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fcf20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274be6c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c2610;
    _objc_alloc();
    func_0x00010c02ca60();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1065fcf90; end: 1065fd07f; -[SCUnifiedPublicProfileEntryPoint _uiContainerForMyProfileOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fcf90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)(param_1 + _DAT_11274bd38);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b1030;
  _objc_retain(puVar2);
  _objc_opt_class(puVar1);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    _objc_retain();
    puVar1 = (undefined *)0x0;
    puVar3 = puVar2;
  }
  else {
    puVar1 = puVar2;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
    }
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065fd080; end: 1065fd13b; -[SCUnifiedPublicProfileEntryPoint _sourcePageTypeForMyProfileOpen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fd080(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = 9;
    func_0x00010bc9107c(9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0b3ae0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f1e60();
    func_0x00010bc9107c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1065fd13c; end: 1065fd80f; -[SCUnifiedPublicProfileEntryPoint beginStandaloneApp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fd13c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065fd810;
  puStack_90 = &UNK_11092eff8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1065fdb20;
  puStack_b8 = &UNK_1108f0d10;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274bd7c;
  _objc_loadWeakRetained();
  lVar21 = lVar4;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11274bd48;
  _objc_loadWeakRetained(lVar20);
  lVar5 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar21;
  func_0x000107d704c8(lVar21,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar20);
  _objc_release(lVar21);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11274bd80;
  _objc_loadWeakRetained();
  lVar20 = lVar4;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11274bd88;
  _objc_loadWeakRetained();
  lVar20 = lVar4;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar21;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11274bd90;
  _objc_loadWeakRetained();
  lVar20 = lVar4;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar20;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar20);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11274bd94;
  _objc_loadWeakRetained();
  lVar9 = lVar4;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11274bd98;
  _objc_loadWeakRetained();
  lVar10 = lVar4;
  func_0x00010c2609c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar11 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar20 = (long)_DAT_11274bd9c;
  lVar4 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar21 = lVar4;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar21;
  (**(code **)(lVar21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  _objc_release(lVar21);
  _objc_release(lVar4);
  puVar14 = PTR_PTR_1126b1530;
  _objc_alloc(PTR_PTR_1126b1530);
  func_0x00010c0460e0();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar4 = lVar20;
  func_0x00010bfebe60();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar4;
  (**(code **)(lVar4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar21;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  _objc_release(lVar4);
  _objc_release(lVar20);
  puVar15 = PTR_PTR_1126cc138;
  _objc_alloc();
  lVar20 = (long)_DAT_11274bdf4;
  lVar4 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar4);
  lVar16 = lVar4;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar20);
  lVar17 = lVar20;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11274bd3c;
  _objc_loadWeakRetained();
  lVar18 = lVar21;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f180();
  _objc_release(lVar18);
  _objc_release(lVar21);
  _objc_release(lVar17);
  _objc_release(lVar20);
  _objc_release(lVar16);
  _objc_release(lVar4);
  lVar21 = (long)_DAT_11274bd38;
  lVar4 = param_1 + lVar21;
  _objc_loadWeakRetained(lVar4);
  lVar20 = lVar4;
  func_0x00010c2801a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + _DAT_11274be64,lVar20);
  _objc_release(lVar20);
  _objc_release(lVar4);
  puVar19 = PTR_PTR_1126aefc0;
  _objc_alloc();
  func_0x00010c0402e0();
  lVar4 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar20 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar20);
  _objc_release(lVar4);
  lVar4 = param_1 + lVar21;
  _objc_loadWeakRetained();
  lVar20 = lVar4;
  func_0x00010c2801a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar21;
  _objc_loadWeakRetained();
  func_0x00010c2801c0(lVar20);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar4);
  _objc_release(puVar19);
  _objc_release(puVar15);
  _objc_release(lVar12);
  _objc_release(puVar14);
  _objc_release(lVar13);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar6);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1065fd810; end: 1065fdb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fd810(long param_1,undefined8 param_2)

{
  long lVar1;
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
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    puVar26 = PTR_PTR_1126cc100;
    _objc_alloc();
    lVar25 = (long)_DAT_11274bd4c;
    lVar1 = param_1 + lVar25;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf5b760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + lVar25;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf5b780();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_1 + lVar25;
    _objc_loadWeakRetained();
    lVar5 = lVar25;
    func_0x00010bf5b7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11274bd50;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c244ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_11274bd54;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c08d400();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1 + _DAT_11274bd58;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c0dc780();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_11274bd5c;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_11274bd60;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010bfe7580();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_1 + _DAT_11274bd64;
    _objc_loadWeakRetained();
    lVar18 = lVar17;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1 + _DAT_11274bd68;
    _objc_loadWeakRetained();
    lVar20 = lVar19;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = param_1 + _DAT_11274bd6c;
    _objc_loadWeakRetained();
    lVar22 = lVar21;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1 + _DAT_11274bd70;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010bfe7760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006a40(puVar26,param_2,lVar2,lVar4,lVar5,lVar7,lVar9,lVar11,lVar13,lVar16,lVar18,
                        lVar20,lVar22,lVar24);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
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
    _objc_release(lVar25);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 1065fdb20; end: 1065fdbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fdb20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b0f90;
    _objc_alloc(PTR_PTR_1126b0f90);
    lVar1 = param_1 + _DAT_11274bd40;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03d080(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065fdbb8; end: 1065fdc8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fdbb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126cc0d8;
    _objc_alloc(PTR_PTR_1126cc0d8);
    lVar1 = param_1 + _DAT_11274bd3c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11274bd40;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c08d900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05e380(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1065fdc90; end: 1065fdd43; -[SCUnifiedPublicProfileEntryPoint snapchatterDataFetcherHelper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fdc90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126cc0c8;
  _objc_alloc(PTR_PTR_1126cc0c8);
  lVar4 = (long)_DAT_11274bd50;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049320(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065fdd44; end: 1065fde33; -[SCUnifiedPublicProfileEntryPoint unifiedPublicProfileWasDeallocated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fdd44(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1065fde34;
  puStack_50 = &UNK_110842e18;
  ppuVar1 = &puStack_68;
  lStack_48 = param_1;
  _objc_retainBlock();
  lVar4 = (long)_DAT_11274bd38;
  lVar2 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1065fde34; end: 1065fde9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fde34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11274be64;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_11274bd38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c280160(lVar1,param_2,lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065fdea0; end: 1065fdf17; -[SCUnifiedPublicProfileEntryPoint unifiedPublicProfileDidAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fdea0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274be64;
  uVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c280140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1065fdf18; end: 1065fdfcb; -[SCUnifiedPublicProfileEntryPoint myProfileDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fdf18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274be68;
  lVar2 = *(long *)(param_1 + lVar3);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar1);
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010be61c00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94c80();
    _objc_release(lVar3);
  }
  lVar3 = param_1 + _DAT_11274be64;
  _objc_loadWeakRetained(lVar3);
  param_1 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c280160(lVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1065fdfcc; end: 1065fdfcf; -[SCUnifiedPublicProfileEntryPoint myProfileWillAppear] */

void FUN_1065fdfcc(void)

{
  return;
}



/* Entry: 1065fdfd0; end: 1065fe0a7; -[SCUnifiedPublicProfileEntryPoint myProfileDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fdfd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11274be64;
  _objc_retain(param_3);
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2801c0(lVar1);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = param_1 + lVar5;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    param_1 = param_1 + lVar5;
    _objc_loadWeakRetained(param_1);
    func_0x00010c280140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1065fe0a8; end: 1065fe0ab; -[SCUnifiedPublicProfileEntryPoint myProfileAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_1065fe0a8(void)

{
  return;
}



/* Entry: 1065fe0ac; end: 1065fe10f; -[SCUnifiedPublicProfileEntryPoint swipeInteractiveViewControllerDidFinishDismissing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe0ac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11274be64;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + _DAT_11274bd38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c280160(lVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065fe110; end: 1065fe12f; -[SCUnifiedPublicProfileEntryPoint storiesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe110(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274be34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065fe130; end: 1065fe143; -[SCUnifiedPublicProfileEntryPoint setStoriesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe130(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274be34,param_3);
  return;
}



/* Entry: 1065fe144; end: 1065fe163; -[SCUnifiedPublicProfileEntryPoint storiesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe144(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274bd6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065fe164; end: 1065fe177; -[SCUnifiedPublicProfileEntryPoint setStoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe164(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274bd6c,param_3);
  return;
}



/* Entry: 1065fe178; end: 1065fe197; -[SCUnifiedPublicProfileEntryPoint creatorSubscriptionsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe178(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274bd78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065fe198; end: 1065fe1ab; -[SCUnifiedPublicProfileEntryPoint setCreatorSubscriptionsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe198(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274bd78,param_3);
  return;
}



/* Entry: 1065fe1ac; end: 1065fe5b7; -[SCUnifiedPublicProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065fe1ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274be54);
  _objc_destroyWeak(param_1 + _DAT_11274be50);
  _objc_destroyWeak(param_1 + _DAT_11274be4c);
  _objc_destroyWeak(param_1 + _DAT_11274bddc);
  _objc_destroyWeak(param_1 + _DAT_11274be3c);
  _objc_destroyWeak(param_1 + _DAT_11274be18);
  _objc_destroyWeak(param_1 + _DAT_11274be48);
  _objc_storeStrong(param_1 + _DAT_11274be44,0);
  _objc_destroyWeak(param_1 + _DAT_11274be30);
  _objc_storeStrong(param_1 + _DAT_11274be2c,0);
  _objc_storeStrong(param_1 + _DAT_11274be20,0);
  _objc_storeStrong(param_1 + _DAT_11274be1c,0);
  _objc_storeStrong(param_1 + _DAT_11274be14,0);
  _objc_storeStrong(param_1 + _DAT_11274bdcc,0);
  _objc_storeStrong(param_1 + _DAT_11274bde8,0);
  _objc_storeStrong(param_1 + _DAT_11274bdc8,0);
  _objc_storeStrong(param_1 + _DAT_11274bdb8,0);
  _objc_storeStrong(param_1 + _DAT_11274bdc0,0);
  _objc_storeStrong(param_1 + _DAT_11274bdbc,0);
  _objc_destroyWeak(param_1 + _DAT_11274bdfc);
  _objc_destroyWeak(param_1 + _DAT_11274bdac);
  _objc_destroyWeak(param_1 + _DAT_11274be08);
  _objc_destroyWeak(param_1 + _DAT_11274be40);
  _objc_destroyWeak(param_1 + _DAT_11274be38);
  _objc_destroyWeak(param_1 + _DAT_11274bd78);
  _objc_destroyWeak(param_1 + _DAT_11274bd6c);
  _objc_destroyWeak(param_1 + _DAT_11274be34);
  _objc_destroyWeak(param_1 + _DAT_11274be24);
  _objc_destroyWeak(param_1 + _DAT_11274bd74);
  _objc_destroyWeak(param_1 + _DAT_11274be10);
  _objc_destroyWeak(param_1 + _DAT_11274be0c);
  _objc_destroyWeak(param_1 + _DAT_11274bd3c);
  _objc_destroyWeak(param_1 + _DAT_11274bd44);
  _objc_destroyWeak(param_1 + _DAT_11274bd84);
  _objc_destroyWeak(param_1 + _DAT_11274bd80);
  _objc_destroyWeak(param_1 + _DAT_11274bd40);
  _objc_destroyWeak(param_1 + _DAT_11274bd7c);
  _objc_destroyWeak(param_1 + _DAT_11274bd68);
  _objc_destroyWeak(param_1 + _DAT_11274be28);
  _objc_destroyWeak(param_1 + _DAT_11274bd50);
  _objc_destroyWeak(param_1 + _DAT_11274be60);
  _objc_destroyWeak(param_1 + _DAT_11274bdd4);
  _objc_destroyWeak(param_1 + _DAT_11274bde0);
  _objc_destroyWeak(param_1 + _DAT_11274bd70);
  _objc_destroyWeak(param_1 + _DAT_11274bd60);
  _objc_destroyWeak(param_1 + _DAT_11274bd8c);
  _objc_destroyWeak(param_1 + _DAT_11274bdd8);
  _objc_destroyWeak(param_1 + _DAT_11274be5c);
  _objc_destroyWeak(param_1 + _DAT_11274bda4);
  _objc_destroyWeak(param_1 + _DAT_11274bdf0);
  _objc_destroyWeak(param_1 + _DAT_11274bd64);
  _objc_destroyWeak(param_1 + _DAT_11274bda8);
  _objc_destroyWeak(param_1 + _DAT_11274bdb4);
  _objc_destroyWeak(param_1 + _DAT_11274bde4);
  _objc_destroyWeak(param_1 + _DAT_11274bd58);
  _objc_destroyWeak(param_1 + _DAT_11274bd54);
  _objc_destroyWeak(param_1 + _DAT_11274bdd0);
  _objc_storeStrong(param_1 + _DAT_11274be70,0);
  _objc_destroyWeak(param_1 + _DAT_11274be58);
  _objc_destroyWeak(param_1 + _DAT_11274bdec);
  _objc_destroyWeak(param_1 + _DAT_11274be04);
  _objc_destroyWeak(param_1 + _DAT_11274bd88);
  _objc_destroyWeak(param_1 + _DAT_11274bd9c);
  _objc_destroyWeak(param_1 + _DAT_11274bdf4);
  _objc_destroyWeak(param_1 + _DAT_11274bda0);
  _objc_destroyWeak(param_1 + _DAT_11274bd94);
  _objc_destroyWeak(param_1 + _DAT_11274bdf8);
  _objc_destroyWeak(param_1 + _DAT_11274bd90);
  _objc_destroyWeak(param_1 + _DAT_11274bd98);
  _objc_destroyWeak(param_1 + _DAT_11274bd4c);
  _objc_destroyWeak(param_1 + _DAT_11274bdb0);
  _objc_destroyWeak(param_1 + _DAT_11274bdc4);
  _objc_destroyWeak(param_1 + _DAT_11274be00);
  _objc_destroyWeak(param_1 + _DAT_11274bd5c);
  _objc_destroyWeak(param_1 + _DAT_11274bd48);
  _objc_destroyWeak(param_1 + _DAT_11274bd38);
  _objc_storeStrong(param_1 + _DAT_11274be68,0);
  _objc_storeStrong(param_1 + _DAT_11274be6c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274be64);
  return;
}



/* Entry: 1065fe5b8; end: 1065fe60b; -[SCUnifiedPublicProfileFindFriendsSeeAllViewController initWithValdiView:] */

undefined1 * FUN_1065fe5b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f20c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithValdiView__1125f5a88);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1c8b80(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1065fe60c; end: 1065fe613; -[SCUnifiedPublicProfileFindFriendsSeeAllViewController presentationMode] */

undefined8 FUN_1065fe60c(void)

{
  return 3;
}



/* Entry: 1065fe614; end: 1065fe61b; -[SCUnifiedPublicProfileFindFriendsSeeAllViewController exitMode] */

undefined8 FUN_1065fe614(void)

{
  return 1;
}



/* Entry: 1065fe61c; end: 1065fe75f; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler initWithPresentingViewController:valdiRuntimeProvider:profileContext:friendProfileScopeLauncher:alertPresenterFactory:composerPeopleBridgeFriendServices:] */

undefined1 *
FUN_1065fe61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f20c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065fe760; end: 1065fe853; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler presentSeeAllPageForProfileUserId:] */

void FUN_1065fe760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065fe854; end: 1065fe887;  */

void FUN_1065fe854(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065fe888; end: 1065fed73; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler _presentSeeAllPageOnMainQueueForProfileUserId:] */

void FUN_1065fe888(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) goto LAB_1065fecf4;
  }
  func_0x00010bde0a60(param_2);
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar2 = param_2 + 0x18;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar3 = lVar2;
    func_0x00010c261ec0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = lVar2;
      func_0x00010c1170c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        lVar4 = *(long *)(param_2 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c142e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar3 != 0) {
          _objc_initWeak(auStack_78,param_2);
          puVar5 = PTR_PTR_1126c7260;
          _objc_alloc_init(PTR_PTR_1126c7260);
          puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          func_0x00010c1b83e0(param_1 * 1000.0,puVar5);
          _objc_release(puVar6);
          lVar4 = lVar2;
          func_0x00010c261ec0(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20f980(puVar5);
          _objc_release(lVar4);
          puVar6 = PTR_PTR_1126b0c98;
          _objc_alloc();
          func_0x00010c0368e0();
          lVar7 = *(long *)(param_2 + 0x30);
          func_0x00010bfb8b80();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          (**(code **)(lVar7 + 0x10))();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a0100(puVar5);
          _objc_release(lVar8);
          _objc_release(lVar4);
          _objc_release(lVar7);
          lVar7 = *(long *)(param_2 + 0x30);
          func_0x00010bfb7ac0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          (**(code **)(lVar7 + 0x10))();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar4;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19f980(puVar5);
          _objc_release(lVar8);
          _objc_release(lVar4);
          _objc_release(lVar7);
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0xc2000000;
          pcStack_90 = FUN_1065fed74;
          puStack_88 = &UNK_110843540;
          _objc_copyWeak(auStack_80,auStack_78);
          func_0x00010c1d2fa0(puVar5);
          lVar4 = lVar2;
          func_0x00010bfcfa80(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a4d00(puVar5);
          _objc_release(lVar4);
          func_0x00010c1d8620(puVar5);
          _objc_copyWeak(auStack_a8,auStack_78);
          func_0x00010c1d2040(puVar5);
          puVar9 = PTR_PTR_1126cc140;
          _objc_alloc();
          uVar14 = *(undefined8 *)(param_2 + 0x40);
          *(undefined **)(param_2 + 0x40) = puVar9;
          _objc_release(uVar14);
          puVar9 = PTR_PTR_1126aead8;
          _objc_alloc(PTR_PTR_1126aead8);
          func_0x00010c038f40();
          uVar10 = *(undefined8 *)(param_2 + 0x28);
          func_0x00010c269d40(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar10;
          func_0x00010c0b7600();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c166b20(puVar5);
          _objc_release(uVar14);
          _objc_release(uVar10);
          puVar11 = PTR_PTR_1126c7270;
          _objc_alloc(PTR_PTR_1126c7270);
          func_0x00010c010fc0();
          puVar12 = PTR_PTR_1126c7278;
          _objc_alloc(PTR_PTR_1126c7278);
          func_0x00010c061d40();
          uVar14 = *(undefined8 *)(param_2 + 0x40);
          _objc_retain(uVar14);
          func_0x00010c0601e0();
          uVar10 = *(undefined8 *)(param_2 + 0x40);
          *(undefined8 *)(param_2 + 0x40) = uVar14;
          _objc_release(uVar10);
          puVar13 = PTR_PTR_1126b3530;
          _objc_alloc();
          func_0x00010c038f40();
          uVar14 = *(undefined8 *)(param_2 + 0x38);
          *(undefined **)(param_2 + 0x38) = puVar13;
          _objc_release(uVar14);
          func_0x00010bf0c980(*(undefined8 *)(param_2 + 0x38));
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(puVar9);
          _objc_destroyWeak(auStack_a8);
          _objc_destroyWeak(auStack_80);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_destroyWeak(auStack_78);
        }
        _objc_release(lVar3);
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_1065fecf4:
  _objc_release(param_4);
  return;
}



/* Entry: 1065fed74; end: 1065fede7;  */

void FUN_1065fed74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7f3e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065fede8; end: 1065feea7; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler dismissSeeAllPage] */

void FUN_1065fede8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puVar1 = auStack_28;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1065feea8; end: 1065feed3;  */

void FUN_1065feea8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be03520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065feed4; end: 1065fef0b; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler _dismissSeeAllPageOnMainQueue] */

void FUN_1065feed4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x38),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bde0a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearPage_112555c38);
    return;
  }
  return;
}



/* Entry: 1065fef0c; end: 1065fef3b; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler _clearPage] */

void FUN_1065fef0c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065fef3c; end: 1065ff02f; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler _presentUserProfileWithUserId:] */

void FUN_1065fef3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ff030; end: 1065ff113;  */

void FUN_1065ff030(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    puVar1 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    func_0x00010c038f40();
    puVar2 = PTR_PTR_1126b3fa0;
    _objc_alloc();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x00010c015a00();
    }
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x20),param_2,puVar2,param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 1065ff114; end: 1065ff123; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler friendProfileDidDismiss:] */

void FUN_1065ff114(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
    return;
  }
  return;
}



/* Entry: 1065ff124; end: 1065ff193; -[SCUnifiedPublicProfileFindFriendsSeeAllActionHandler .cxx_destruct] */

void FUN_1065ff124(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1065ff194; end: 1065ff43f; -[SCUnifiedPublicProfileMutualFriendsActionHandler initWithPresentingViewController:mutualFriendsPageScopeExposer:mutualFriendsPageScopeServices:dataProviderFutureLazy:supStore:deckHierarchyFactory:valdiRuntimeProvider:] */

undefined8 *
FUN_1065ff194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f20d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 3,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar5);
    uVar2 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf55bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010bf553a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[7];
    puVar1[7] = uVar7;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar7 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar7);
    uVar7 = puVar1[4];
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[5];
    puVar1[5] = uVar7;
    _objc_release(uVar6);
    lVar4 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      _objc_initWeak(auStack_78,puVar1);
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010c297260(lVar4);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
    }
    _objc_release(lVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1065ff440; end: 1065ff493;  */

void FUN_1065ff440(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


