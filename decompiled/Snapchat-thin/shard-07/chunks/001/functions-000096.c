/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051d8734; end: 1051d877b; -[SCContextShareYoursActionPerformer _removePreviewScopeIfExposed] */

void FUN_1051d8734(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051d877c; end: 1051d887b; -[SCContextShareYoursActionPerformer .cxx_destruct] */

void FUN_1051d877c(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1051d887c; end: 1051d88ef; -[SCContextShowSnapActionPerformer initWithSpotlightOperaPresenter:] */

undefined1 * FUN_1051d887c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6d30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051d88f0; end: 1051d8aa7; -[SCContextShowSnapActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051d88f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c239fc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1051d8aa8;
  puStack_70 = &UNK_110849530;
  _objc_retain(param_8);
  ppuVar2 = &puStack_88;
  uStack_68 = param_8;
  _objc_retainBlock();
  if (param_3 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    uVar4 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c08bda0();
    iVar1 = (int)uVar6;
    func_0x000108435ff0();
    if (iVar1 - 1U < 0x10) {
      uVar6 = *(undefined8 *)(&UNK_10dd90800 + (ulong)(iVar1 - 1U) * 8);
    }
    else {
      uVar6 = 0xffffffffffffffff;
    }
    _objc_release(uVar3);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e440(uVar4,param_2,lVar5,param_4,uVar6,ppuVar2);
    _objc_release(lVar5);
    _objc_release(uVar4);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return 0;
}



/* Entry: 1051d8aa8; end: 1051d8abf;  */

void FUN_1051d8aa8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051d8ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051d8ac0; end: 1051d8acb; -[SCContextShowSnapActionPerformer .cxx_destruct] */

void FUN_1051d8ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051d8acc; end: 1051d8ceb; -[SCContextSnapMeStickerActionPerformer initWithUserSession:snapchattersDataFetcher:groupsDataFetcher:userInfoServices:chatContentDelivery:bitmojiSelfieServices:snapProServices:imageFetchingServices:myStoriesServices:storiesServices:chatCameraScopeExposer:chatCameraScopeServices:] */

undefined8 *
FUN_1051d8acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126e6d38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 4,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_8);
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 9,param_11);
    _objc_storeWeak(puVar1 + 10,param_12);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
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
  return puVar1;
}



/* Entry: 1051d8cec; end: 1051d91ef; -[SCContextSnapMeStickerActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051d8cec(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined *param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c241f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuVar13 = &PTR____CFConstantStringClassReference_110dcacb8;
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcacb8,param_8);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1051d9174;
  }
  uVar2 = param_6;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x000108437e88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if ((int)puVar7 == 0) {
    puVar7 = param_1[0xb];
    func_0x00010c071800();
    if (((ulong)puVar7 & 1) == 0) {
      ppuVar13 = &PTR____CFConstantStringClassReference_110dcacf8;
      goto LAB_1051d9004;
    }
    uVar2 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0748c0();
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1[2];
    puVar12 = param_1[3];
    ppuVar13 = param_1 + 1;
    _objc_loadWeakRetained();
    ppuVar8 = param_1 + 4;
    _objc_loadWeakRetained();
    uVar9 = uVar2;
    func_0x0001065ecd38(uVar2,uVar4 & 0xffffffff,0,0,0,0,uVar5,puVar7,puVar12,ppuVar13,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    _objc_release(ppuVar13);
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126b5fb8;
    _objc_alloc(PTR_PTR_1126b5fb8);
    FUN_1051db9f4(param_6);
    uVar3 = param_6;
    FUN_1051dbc14(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x0001051dbd08(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f740(puVar7);
    func_0x00010c20d900(uVar9);
    _objc_release(puVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = uVar9;
    func_0x00010c271be0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
      ppuVar13 = &PTR____CFConstantStringClassReference_110dcad18;
      func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcad18,param_8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = param_8;
      func_0x00010bf51e00();
      puVar12 = param_1[0x12];
      param_1[0x12] = puVar7;
      _objc_release(puVar12);
      ppuVar8 = param_1;
      func_0x00010be72940();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar8 == (undefined **)0x0) {
        ppuVar10 = param_1;
        func_0x00010bebcf80(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = param_1;
        func_0x00010be0cac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_68,param_1);
        puVar7 = PTR_PTR_1126afd78;
        _objc_alloc();
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(ppuVar11);
        func_0x00010bffae00();
        puVar12 = param_1[0x10];
        param_1[0x10] = puVar7;
        _objc_release(puVar12);
        ppuVar13 = (undefined **)param_1[0x10];
        _objc_retain(ppuVar13);
        _objc_release(ppuVar11);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
        _objc_release(ppuVar11);
        _objc_release(ppuVar10);
      }
      else {
        _objc_retain(ppuVar8);
        ppuVar13 = ppuVar8;
      }
      _objc_release(ppuVar8);
    }
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar2);
  }
  else {
    ppuVar13 = &PTR____CFConstantStringClassReference_110dcacd8;
LAB_1051d9004:
    func_0x0001051cb2fc(ppuVar13,param_8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
LAB_1051d9174:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
  return;
}



/* Entry: 1051d91f0; end: 1051d9223;  */

void FUN_1051d91f0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf834c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051d9224; end: 1051d92cf; -[SCContextSnapMeStickerActionPerformer dismissCameraScope:] */

void FUN_1051d9224(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  if (lVar2 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x58));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x90);
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1051d92d0; end: 1051d933b; -[SCContextSnapMeStickerActionPerformer _exposeAddToStoryCameraWithReplyConfiguration:presentingViewController:quickStickerImage:] */

void FUN_1051d92d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf23680(uVar1,param_2,param_4,param_3,param_1,1,0,param_5,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x58),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051d933c; end: 1051d95db; -[SCContextSnapMeStickerActionPerformer _performSnapMeReplyAddToStoryActionIfNeededWithViewController:params:] */

void FUN_1051d933c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x0001051db69c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1051d95dc;
    uStack_80 = 0x1051d95ec;
    uStack_78 = 0;
    puStack_98 = &uStack_a0;
    _objc_initWeak(auStack_a8,param_1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined1 *)(param_1 + 0x88) = 0;
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1051d95f4;
    puStack_c8 = &UNK_11086f238;
    _objc_copyWeak(auStack_b0,auStack_a8);
    puStack_b8 = &uStack_a0;
    _objc_retain(param_3);
    ppuVar2 = &puStack_e0;
    uStack_c0 = param_3;
    _objc_retainBlock();
    puStack_120 = puVar3;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x1051d9690;
    puStack_108 = &UNK_11086f298;
    _objc_copyWeak(auStack_e8,auStack_a8);
    _objc_retain(ppuVar2);
    ppuStack_f0 = ppuVar2;
    _objc_retain(param_4);
    lStack_100 = param_4;
    _objc_retain(lVar1);
    lStack_f8 = lVar1;
    func_0x00010be94800(param_1);
    puVar3 = PTR_PTR_1126afd78;
    _objc_alloc();
    _objc_copyWeak(auStack_128,auStack_a8);
    func_0x00010bffae00();
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar4);
    _objc_destroyWeak(auStack_128);
    _objc_release(lStack_f8);
    _objc_release(lStack_100);
    _objc_release(ppuStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(ppuVar2);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051d95dc; end: 1051d95f3;  */

void FUN_1051d95dc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051d95f4; end: 1051d976b;  */

void FUN_1051d95f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x88) & 1) == 0)) {
    lVar2 = lVar1;
    func_0x00010be0cac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar2;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051d976c; end: 1051d977f;  */

void FUN_1051d976c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001051d977c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 1051d9780; end: 1051d9807;  */

void FUN_1051d9780(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x88) = 1;
    func_0x00010bf2dba0(*(undefined8 *)(lVar1 + 0x78));
    func_0x00010bf2dba0(*(undefined8 *)(lVar1 + 0x68));
    func_0x00010bf2dba0(*(undefined8 *)(lVar1 + 0x70));
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x70) = 0;
    _objc_release(uVar2);
    func_0x00010bf834c0(lVar1,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051d9808; end: 1051d98b3; -[SCContextSnapMeStickerActionPerformer _snapMeReplyAddToStoryQuickStickerImageWithImage:avatarImage:params:] */

void FUN_1051d9808(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  FUN_1051db8b0(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar1 = param_5;
    FUN_1051db814(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b5b40;
    func_0x00010c241f80(PTR_PTR_1126b5b40);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051d98b4; end: 1051d994f; -[SCContextSnapMeStickerActionPerformer _snapMeReplyPromptQuickStickerImageForParams:] */

void FUN_1051d98b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_1051dadec();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  FUN_1051dac0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = (undefined *)0x0;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b5b40;
    func_0x00010c242020(PTR_PTR_1126b5b40,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051d9950; end: 1051d9bc3; -[SCContextSnapMeStickerActionPerformer _resolveAddToStoryReplyConfigurationWithParams:completion:] */

void FUN_1051d9950(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (lVar2 == 0)) || (lVar3 == 0)) {
    puVar9 = PTR_PTR_1126b5fc0;
    func_0x00010befc220(PTR_PTR_1126b5fc0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,puVar9);
    _objc_release(puVar9);
  }
  else {
    puVar9 = PTR_PTR_1126b5fc8;
    _objc_alloc();
    lVar4 = lVar1;
    func_0x00010c0d4b00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf62060(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010c1176a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010c2932e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02d1e0();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_retain(puVar9);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    *(undefined **)(param_1 + 0x78) = puVar9;
    _objc_release(uVar8);
    _objc_initWeak(auStack_68,param_1);
    uVar8 = param_3;
    func_0x0001051dbde0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001051dbe9c(param_3);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    func_0x00010c13acc0(puVar9);
    _objc_release(uVar8);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar9);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d9bc4; end: 1051d9c2b;  */

void FUN_1051d9bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x78) = 0;
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051d9c2c; end: 1051d9d47; -[SCContextSnapMeStickerActionPerformer _fetchAddToStoryQuickStickerImageWithParams:mediaContent:completion:] */

void FUN_1051d9c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010be13fe0(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d9d48; end: 1051d9dbb;  */

void FUN_1051d9d48(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    }
    else {
      func_0x00010bdd5b80(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051d9dbc; end: 1051d9eeb; -[SCContextSnapMeStickerActionPerformer _buildAddToStoryQuickStickerImageWithParams:image:completion:] */

void FUN_1051d9dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be13fc0(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051d9eec; end: 1051d9f6f;  */

void FUN_1051d9eec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    lVar3 = lVar2;
    func_0x00010bebcf60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051d9f70; end: 1051d9f7b; -[SCContextSnapMeStickerActionPerformer _fetchSnapMeReplyTileImageWithMediaContent:completion:] */

void FUN_1051d9f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be96bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__retrieveSnapMeReplyTileImageWit_112583488,param_3,1,param_4);
  return;
}



/* Entry: 1051d9f7c; end: 1051da173; -[SCContextSnapMeStickerActionPerformer _retrieveSnapMeReplyTileImageWithMediaContent:allowPostProcess:completion:] */

void FUN_1051d9f7c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(puVar2);
  uStack_60 = param_4;
  func_0x00010bf4b540(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1051da174; end: 1051da2b3;  */

void FUN_1051da174(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,param_1 + 0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar5);
      uStack_48 = *(undefined1 *)(param_1 + 0x48);
      func_0x00010bf4b540(uVar2);
      _objc_release(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_50);
    }
    else {
      func_0x00010be96ce0(lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1051da2b4; end: 1051da437;  */

void FUN_1051da2b4(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_1051da438;
        puStack_50 = &UNK_110849530;
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar2);
        uStack_48 = uVar2;
        func_0x000100162d98("APPSTORE",&puStack_68);
        _objc_release(uStack_48);
      }
      else {
        uVar2 = *(undefined8 *)(lVar1 + 0x28);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,param_1 + 0x38);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar4);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar3);
        func_0x00010c104be0(uVar2);
        _objc_release(uVar2);
        _objc_release(uVar3);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_70);
      }
    }
    else {
      func_0x00010be96ce0(lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1051da438; end: 1051da447;  */

void FUN_1051da438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001051da444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1051da448; end: 1051da50b;  */

void FUN_1051da448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051da50c;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1051da50c; end: 1051da553;  */

void FUN_1051da50c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x88) & 1) == 0)) {
    func_0x00010be96ba0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),0,
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051da554; end: 1051da65f; -[SCContextSnapMeStickerActionPerformer _retrieveTileImageForCacheKey:mediaContent:completion:] */

void FUN_1051da554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_38,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1051da660;
  puStack_60 = &UNK_110857fd0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  uStack_48 = param_5;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051da660; end: 1051da77b;  */

void FUN_1051da660(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x88) & 1) == 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x28));
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar3 = uVar2;
    func_0x00010c13e4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1051da77c; end: 1051da86b;  */

void FUN_1051da77c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1051da86c;
  puStack_50 = &UNK_110848378;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1051da86c; end: 1051da8b3;  */

void FUN_1051da86c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051da8b4; end: 1051daadb; -[SCContextSnapMeStickerActionPerformer _fetchSnapMeReplyAvatarImageWithParams:completion:] */

void FUN_1051da8b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    puVar1 = PTR_PTR_1126b5fd0;
    _objc_alloc();
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c1176a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c15ada0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bfe7760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03b380();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_retain(puVar1);
    uVar10 = *(undefined8 *)(param_1 + 0x70);
    *(undefined **)(param_1 + 0x70) = puVar1;
    _objc_release(uVar10);
    _objc_initWeak(auStack_68,param_1);
    uVar10 = param_3;
    func_0x0001051db758(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    func_0x00010bfa5200(puVar1);
    _objc_release(uVar10);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051daadc; end: 1051dab43;  */

void FUN_1051daadc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x70) = 0;
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051dab44; end: 1051dac0b; -[SCContextSnapMeStickerActionPerformer .cxx_destruct] */

void FUN_1051dab44(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1051dac0c; end: 1051dad47;  */

void FUN_1051dac0c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar1 = param_1;
  FUN_1051dad48();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar5 = param_1;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c131ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  else {
    puVar4 = PTR_PTR_1126b2c18;
    func_0x00010bfb1120(PTR_PTR_1126b2c18,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar4);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar2 & 1) == 0) {
    FUN_1051e5740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051dad48; end: 1051dadeb;  */

void FUN_1051dad48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar3);
  uVar1 = 0;
  if ((int)puVar4 == 0) {
    uVar1 = uVar3;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051dadec; end: 1051db633;  */

void FUN_1051dadec(undefined *param_1)

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
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  long lVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  lVar28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar29 = param_1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar29;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar29);
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  puVar2 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar1);
  puVar29 = puVar3;
  if (((ulong)puVar2 & 1) == 0) {
    puVar29 = (undefined *)0x0;
  }
  _objc_retain(puVar29);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126b2378;
  puVar3 = puVar29;
  func_0x00010bf4e860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar29);
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar29 = puVar2;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar29;
  func_0x00010bfdc3e0();
  puVar4 = puVar29;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    puVar5 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar1);
    puVar3 = puVar4;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x0001084365e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar29);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar29 = puVar4;
  func_0x00010bfdc3e0();
  if ((int)puVar29 == 0) {
    puVar29 = (undefined *)0x0;
  }
  else {
    puVar29 = puVar4;
    func_0x00010c241ea0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar29;
    func_0x00010c118940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar29);
    puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((ulong)puVar29 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      uVar30 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar31 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar32 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar33 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010c013de0(uVar30,uVar31,uVar32,uVar33);
      puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar5);
      _objc_release(puVar29);
      puVar29 = puVar5;
      func_0x00010c08c0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4020000000000000);
      _objc_release(puVar29);
      puVar29 = puVar5;
      func_0x00010c08c0e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2d20();
      _objc_release(puVar29);
      puVar3 = PTR_PTR_1126b0c40;
      puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe7aa0(0x4032000000000000,0x4032000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar29);
      puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      func_0x00010c01bf60();
      func_0x00010c182220();
      puVar7 = PTR_PTR_1126aea58;
      _objc_alloc();
      func_0x00010c013de0(uVar30,uVar31,uVar32,uVar33);
      func_0x00010c21ad00();
      func_0x00010c212f20(puVar7);
      puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(puVar7);
      _objc_release(puVar29);
      func_0x00010c1cfce0(puVar7);
      func_0x00010c1e0180(0x406e000000000000,puVar7);
      puVar8 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
      _objc_alloc();
      puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff3fe0();
      _objc_release(puVar29);
      func_0x00010c16e060(puVar8);
      func_0x00010c166c00(puVar8);
      func_0x00010c207380(0x4018000000000000,puVar8);
      func_0x00010c219b60(puVar8);
      func_0x00010befbb60(puVar5);
      puVar29 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar9 = puVar8;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493c0(0x4028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar8;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar12;
      func_0x00010bf493c0(0xc028000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar5;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar15;
      func_0x00010bf493c0(0x4024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar5;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar6;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar21;
      func_0x00010bf49420(0x4032000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar6;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar23;
      func_0x00010bf49420(0x4032000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar7;
      func_0x00010c2a5060();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar25;
      func_0x00010bf49580(0x406e000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar29);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      uVar30 = *(undefined8 *)PTR__UILayoutFittingCompressedSize_110345d28;
      uVar31 = *(undefined8 *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
      func_0x00010c267040(puVar5);
      func_0x00010c1739e0(0,0,uVar30,uVar31,puVar5);
      func_0x00010c08cdc0(puVar5);
      puVar9 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc();
      func_0x00010c0469e0(uVar30,uVar31);
      _objc_retain(puVar5);
      puVar29 = puVar9;
      func_0x00010bfe91c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
    }
    else {
      puVar29 = (undefined *)0x0;
    }
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
    return;
  }
  ___stack_chk_fail();
  uVar30 = *(undefined8 *)(puVar4 + 0x20);
  _objc_retain(puVar1);
  func_0x00010c08c0e0(uVar30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1000(puVar1);
  _objc_release(puVar1);
  func_0x00010c12fc60(uVar30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar30);
  return;
}



/* Entry: 1051db634; end: 1051db813;  */

void FUN_1051db634(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1000(param_2);
  _objc_release(param_2);
  func_0x00010c12fc60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051db814; end: 1051db8af;  */

void FUN_1051db814(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c131ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108437e88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1051db8b0; end: 1051db9f3;  */

void FUN_1051db8b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar6 = PTR_PTR_1126b5fd8;
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_retain(param_3);
    lVar1 = param_3;
    FUN_1051dad48();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar2 = param_3;
      func_0x00010c242420(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c131ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    else {
      _objc_retain(lVar1);
      lVar5 = lVar1;
    }
    _objc_release(lVar1);
    _objc_release(param_3);
    func_0x00010c11ea40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(param_1);
    _objc_release(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1051db9f4; end: 1051dbc13;  */

ulong FUN_1051db9f4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  _objc_retain();
  uVar7 = param_1;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar1 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar7 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b2378;
  uVar1 = uVar7;
  func_0x00010bf4e860(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = puVar2;
  func_0x00010bf43560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2429a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25ad40();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (((ulong)puVar6 & 1) == 0) {
    uVar7 = param_1;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar7);
    puVar4 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar1 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar7 = uVar3;
    if ((uVar1 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar3);
    uVar1 = uVar7;
    func_0x00010c25a6e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c23a020(uVar1);
    _objc_release(uVar1);
  }
  else {
    uVar7 = 1;
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 1051dbc14; end: 1051dc0b3;  */

void FUN_1051dbc14(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d20;
  func_0x00010c0ffba0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bf5b080(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf5b440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1051dc0b4; end: 1051dc137;  */

undefined8 FUN_1051dc0b4(long param_1)

{
  ulong uVar1;
  
  if (param_1 < 0x56) {
    uVar1 = param_1 - 0xc;
    if (uVar1 < 0x37) {
      if ((1L << (uVar1 & 0x3f) & 0x64000000000000U) != 0) {
        return 0xd;
      }
      if ((1L << (uVar1 & 0x3f) & 0x300000000U) != 0) {
        return 0x13;
      }
      if (uVar1 == 0) {
        return 0x17;
      }
    }
  }
  else {
    if (param_1 == 0x56) {
      return 0xd;
    }
    if (param_1 == 0x68) {
      return 0x82;
    }
    if (param_1 == 0x8f) {
      return 0xe;
    }
  }
  return 0x5c;
}



/* Entry: 1051dc138; end: 1051dc13f; -[ModalViewController pageViewName] */

undefined8 FUN_1051dc138(void)

{
  return 0x13b;
}



/* Entry: 1051dc140; end: 1051dc20b; -[SCContextSpotlightPlayPublicStoryActionPerformer initWithContentPlaybackScopeExposer:discoverFeedDataFetcher:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_1051dc140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6d40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051dc20c; end: 1051dc43f; -[SCContextSpotlightPlayPublicStoryActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051dc20c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_8;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar5);
  lVar2 = param_3;
  func_0x00010c0fe7c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dcad38;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      _objc_storeWeak(param_1 + 8,param_4);
      puVar4 = PTR_PTR_1126b5fe0;
      _objc_opt_new();
      func_0x00010c1c8b80();
      _objc_initWeak(auStack_68,param_1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(lVar2);
      _objc_retain(puVar4);
      func_0x00010c10eda0(param_1);
      _objc_release(param_1);
      _objc_release(puVar4);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar4);
      ppuVar6 = (undefined **)0x0;
      goto LAB_1051dc3c8;
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110dcad58;
  }
  func_0x0001051cb2fc(ppuVar6,param_8);
  _objc_retainAutoreleasedReturnValue();
LAB_1051dc3c8:
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 1051dc440; end: 1051dc4a3;  */

void FUN_1051dc440(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259cc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0cc80(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),0x66);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051dc4a4; end: 1051dc6ef; -[SCContextSpotlightPlayPublicStoryActionPerformer _exposeContentPlaybackScopeWithStoryId:viewController:viewLocation:] */

void FUN_1051dc4a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b4d28;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c04dcc0();
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar3 = puVar1;
  func_0x00010c259cc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0(puVar2,param_3,7,0x5c,(long)(param_1 * 1000.0),param_6,puVar1,puVar3,0,0x44);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  func_0x00010bff7200();
  _objc_release(param_5);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f41c18;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bee40;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b4d38;
  func_0x00010c24bc60(PTR_PTR_1126b4d38,param_3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf22a20(uVar6,param_3,puVar2,puVar3,0,5,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_2 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_2 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x10),param_3,uVar6);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + 8;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051dc6f0; end: 1051dc723; -[SCContextSpotlightPlayPublicStoryActionPerformer _dismissModalViewControllerOnContextSpotlightViewController] */

void FUN_1051dc6f0(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf84b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051dc724; end: 1051dc7bf; -[SCContextSpotlightPlayPublicStoryActionPerformer playbackPresenterDidTearDown:playbackScope:] */

void FUN_1051dc724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010be02e00(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051dc7c0; end: 1051dc837; -[SCContextSpotlightPlayPublicStoryActionPerformer removeContentForCreatorId:playlistItemController:] */

void FUN_1051dc7c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010be02e00(param_1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051dc838; end: 1051dc887; -[SCContextSpotlightPlayPublicStoryActionPerformer .cxx_destruct] */

void FUN_1051dc838(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1051dc888; end: 1051dc88f; -[SCContextPlayStoryOperaModalViewController pageViewName] */

undefined8 FUN_1051dc888(void)

{
  return 0;
}



/* Entry: 1051dc890; end: 1051dc95b; -[SCContextSpotlightPlayStoryActionPerformer initWithContentPlaybackScopeExposer:remoteStoriesDataProvider:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_1051dc890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6d48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051dc95c; end: 1051dcc63; -[SCContextSpotlightPlayStoryActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051dc95c(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **unaff_x28;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined1 *puStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar1 = param_3;
  func_0x00010c0fe8a0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcad98;
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar2 != (undefined **)0x0) {
      _objc_storeWeak(param_1 + 8,param_4);
      _objc_retain(param_6);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = param_6;
      _objc_release(uVar3);
      puVar4 = param_8;
      _objc_retainBlock();
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *(undefined1 **)(param_1 + 0x30) = puVar4;
      _objc_release(uVar3);
      ppuVar5 = ppuVar1;
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_80 = ppuVar5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_1051dcc64;
      puStack_a0 = &UNK_11086f388;
      lStack_98 = param_1;
      _objc_retain(ppuVar1);
      ppuStack_90 = ppuVar1;
      _objc_retain(param_8);
      puStack_88 = param_8;
      func_0x00010bfaa8a0(uVar3);
      _objc_release(puVar6);
      _objc_release(uVar3);
      _objc_initWeak(auStack_c0,param_1);
      ppuVar2 = (undefined **)PTR_PTR_1126afd78;
      _objc_alloc(PTR_PTR_1126afd78);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_1051dcd00;
      puStack_d0 = &UNK_1108434b0;
      unaff_x28 = &puStack_e8;
      puVar4 = auStack_c0;
      _objc_copyWeak(auStack_c8);
      ppuVar9 = &puStack_e8;
      func_0x00010bffae00(ppuVar2);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_c0);
      _objc_release(puStack_88);
      _objc_release(ppuStack_90);
      _objc_release(ppuVar5);
      goto LAB_1051dcbbc;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcadb8;
  }
  puVar4 = param_8;
  func_0x0001051cb2fc(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
LAB_1051dcbbc:
  _objc_release(ppuVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 4);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(ppuVar9);
  if ((ppuVar9 == (undefined **)0x0) &&
     (puVar7 = puVar4, func_0x00010bf529e0(), puVar7 != (undefined1 *)0x0)) {
    puVar6 = param_3[4];
    puVar8 = param_3[5];
    func_0x00010bf454e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be74aa0(puVar6);
    _objc_release(puVar8);
  }
  else {
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcadd8,param_3[6]);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(ppuVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1051dcc64; end: 1051dccff;  */

void FUN_1051dcc64(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) && (lVar2 = param_2, func_0x00010bf529e0(), lVar2 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf454e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be74aa0(uVar1);
    _objc_release(uVar3);
  }
  else {
    func_0x0001051cb2fc(&PTR____CFConstantStringClassReference_110dcadd8,
                        *(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1051dcd00; end: 1051dcd2b;  */

void FUN_1051dcd00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becaca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051dcd2c; end: 1051dcd2f; -[SCContextSpotlightPlayStoryActionPerformer playbackPresenterDidTearDown:playbackScope:] */

void FUN_1051dcd2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePlaybackScopeIfNecessary_112580d30);
  return;
}



/* Entry: 1051dcd30; end: 1051dcdc7; -[SCContextSpotlightPlayStoryActionPerformer _removePlaybackScopeIfNecessary] */

void FUN_1051dcd30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be60e20(param_1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf84b00();
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1051dcdc8; end: 1051dcdcb; -[SCContextSpotlightPlayStoryActionPerformer _tearDown] */

void FUN_1051dcdc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ce50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removePlaybackScopeIfNecessary_112580d30);
  return;
}



/* Entry: 1051dcdcc; end: 1051dcebb; -[SCContextSpotlightPlayStoryActionPerformer _playStoryWithCompositeStoryId:] */

void FUN_1051dcdcc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b5fe8;
    _objc_opt_new();
    func_0x00010c1c8b80();
    func_0x00010be60e60(param_1);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1051dcebc;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    lStack_40 = param_3;
    puStack_38 = puVar2;
    _objc_retain(puVar2);
    func_0x00010c10eda0(lVar1,param_2,puVar2,0,&puStack_68);
    _objc_release(lVar1);
    _objc_release(puStack_38);
    _objc_release(lStack_40);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051dcebc; end: 1051dcecb;  */

void FUN_1051dcebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__playStoryWithCompositeStoryId_p_11257ac50,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1051dcecc; end: 1051dd1ff; -[SCContextSpotlightPlayStoryActionPerformer _playStoryWithCompositeStoryId:presentingViewController:] */

void FUN_1051dcecc(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((param_5 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b4d28;
    _objc_alloc();
    func_0x00010c04dcc0();
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c0ea8e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar11;
    func_0x00010c067fc0();
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b4d30;
    _objc_alloc(PTR_PTR_1126b4d30);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    param_1 = param_1 * 1000.0;
    func_0x00010c04bca0(puVar4,param_3,7,uVar7,(long)param_1,0x6b,puVar2,param_4,0,
                        0xffffffffffffffff);
    puVar5 = PTR_PTR_1126b4d40;
    _objc_alloc(PTR_PTR_1126b4d40);
    func_0x00010bff7200();
    puVar6 = PTR_PTR_1126b5ff0;
    _objc_alloc(PTR_PTR_1126b5ff0);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c242420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar8;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027960(puVar6,param_3,0xe,uVar11,0x6e);
    _objc_release(uVar11);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar10 = PTR_PTR_1126b4d38;
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_80 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_80,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41f60(puVar10,param_3,uVar8,puVar9,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar8);
    puVar9 = PTR_PTR_1126b4d48;
    _objc_alloc(PTR_PTR_1126b4d48);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010bff0a00(param_1 * 1000.0,puVar9);
    uVar8 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010bf22a20(uVar8,param_3,puVar4,puVar5,0,0xd,puVar10,puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x18),param_3,uVar8);
    _objc_release(uVar8);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c0ea4c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_4 + 0x10);
  func_0x00010c0ea8e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar8,param_3,&PTR____CFConstantStringClassReference_110ebecb8,uVar11);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1051dd200; end: 1051dd273; -[SCContextSpotlightPlayStoryActionPerformer _modalPresentationDidEnd] */

void FUN_1051dd200(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0ea4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0ea8e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebecb8,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051dd274; end: 1051dd2e7; -[SCContextSpotlightPlayStoryActionPerformer _modalDismissalDidEnd] */

void FUN_1051dd274(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0ea4c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0ea8e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7a0(uVar1,param_2,&PTR____CFConstantStringClassReference_110ebecd8,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051dd2e8; end: 1051dd343; -[SCContextSpotlightPlayStoryActionPerformer .cxx_destruct] */

void FUN_1051dd2e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1051dd344; end: 1051dd4bf; -[SCContextSpotlightRepliesActionPerformer initWithSpotlightRepliesScopeExposer:circumstanceEngine:userProfilesProvider:snapProUserProfileIdProvider:currentUserId:repliesViewCountManager:storiesConfigProvider:] */

undefined1 *
FUN_1051dd344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e6d50;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_9;
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



/* Entry: 1051dd4c0; end: 1051ddcbf; -[SCContextSpotlightRepliesActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051dd4c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puStack_90;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar17 = param_3;
  func_0x00010beeed20();
  if ((int)lVar17 == 0x29) {
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = param_6;
    _objc_release(uVar1);
    uVar2 = param_6;
    func_0x00010c0ea4c0(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + 0x48,uVar2);
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + 0x60,param_4);
    func_0x00010be3f0a0(param_1);
    func_0x00010be3f4a0();
    lVar17 = param_1;
    func_0x00010becf8c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    lVar3 = param_3;
    func_0x00010bf42020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c068100();
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf42020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfda840();
    _objc_release(lVar3);
    if ((int)lVar4 == 0) {
      puStack_90 = (undefined *)0x0;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf42020();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c10a5c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x000109189508();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = lVar5;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        puStack_90 = (undefined *)0x0;
      }
      else {
        puStack_90 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar5);
    }
    lVar3 = param_3;
    func_0x00010bf42020();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfd7f60();
    _objc_release(lVar3);
    puVar19 = PTR_PTR_1126b5ff8;
    if ((int)lVar4 == 0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf42020(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c063d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5cda0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    lVar3 = param_1;
    func_0x00010be8ef00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360(param_6);
    func_0x00010be1e0e0();
    uVar2 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b2d20;
    func_0x00010c0ffba0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar6 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar7);
    uVar2 = uVar8;
    if ((uVar6 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar8);
    uVar6 = uVar2;
    func_0x00010c25c580();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c24b5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = uVar2;
    func_0x00010c24b5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar8;
    func_0x00010c0c5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar8);
    uVar8 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar8);
    lVar4 = param_7;
    func_0x00010c068440();
    if ((0xf < lVar4) && (lVar4 == 0x14)) {
      lVar4 = param_3;
      func_0x00010bf42020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd7f60();
      _objc_release(lVar4);
    }
    puVar13 = PTR_PTR_1126b5cb0;
    _objc_alloc();
    func_0x00010be6f8a0();
    func_0x00010beef1e0();
    uVar8 = param_6;
    func_0x00010c0b3760(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_6;
    func_0x00010c242420(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    func_0x00010bf82a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec5140();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c24b560(param_6);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e4a0();
    _objc_release(puVar7);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar8);
    lVar4 = param_1;
    func_0x00010bdf6020();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b6000;
    _objc_alloc();
    uVar8 = param_6;
    func_0x00010c242420(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010bf5b400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be1de80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056860();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar7;
    _objc_release(uVar1);
    _objc_release(lVar5);
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar8);
    func_0x00010c1c4ee0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
    lVar5 = param_8;
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar5;
    _objc_release(uVar1);
    _objc_release(lVar4);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_release(puVar19);
    _objc_release(puStack_90);
    _objc_release(lVar17);
  }
  else if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
    ___stack_chk_fail();
    uVar1 = *(undefined8 *)(param_3 + 8);
    func_0x00010c072560();
    if ((int)uVar1 != 0) {
      func_0x00010c12e1e0(*(undefined8 *)(param_3 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_3 + 0x20) = 0;
      _objc_release(uVar1);
      lVar17 = *(long *)(param_3 + 0x10);
      uVar1 = 0;
      if (lVar17 != 0) {
        (**(code **)(lVar17 + 0x10))(lVar17,0);
        uVar1 = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(param_3 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar1);
        return uVar1;
      }
    }
    return uVar1;
  }
  return 0;
}



/* Entry: 1051ddcc0; end: 1051ddd33; -[SCContextSpotlightRepliesActionPerformer didCompleteSpotlightRepliesScope] */

void FUN_1051ddcc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c072560(uVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  if ((int)uVar1 != 0) {
    func_0x00010c12e1e0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 1051ddd34; end: 1051ddd6b; -[SCContextSpotlightRepliesActionPerformer modalPresentationOnCommentsTrayDidEnd] */

void FUN_1051ddd34(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ddd6c; end: 1051ddda3; -[SCContextSpotlightRepliesActionPerformer modalDismissalOnCommentsTrayDidEnd] */

void FUN_1051ddd6c(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051ddda4; end: 1051de16b; -[SCContextSpotlightRepliesActionPerformer trayUIContainer:heightDidChange:] */

undefined **
FUN_1051ddda4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined **param_7,undefined *param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)(param_5 + 0x60);
  dVar17 = param_1;
  _objc_loadWeakRetained();
  ppuVar7 = ppuVar1;
  _objc_release();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(param_5 + 0x50);
    uVar2 = *(undefined8 *)(param_5 + 0x58);
    func_0x00010c29d360(uVar2);
    func_0x000108f4b570(ppuVar7,uVar2);
    if ((int)ppuVar7 != 0) {
      lVar3 = *(long *)(param_5 + 0x18);
      func_0x000108f4b60c();
      uVar4 = *(ulong *)(param_5 + 0x58);
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar4 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar15);
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      uVar6 = uVar5;
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      ppuVar7 = *(undefined ***)(param_5 + 0x58);
      func_0x00010c0ea8e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar1 = ppuVar7;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      param_7 = &PTR____CFConstantStringClassReference_110f0e698;
      ppuVar8 = ppuVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      _objc_release(ppuVar7);
      puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar1 = ppuVar8;
      _objc_opt_isKindOfClass(ppuVar8,puVar15);
      ppuVar7 = ppuVar8;
      if (((ulong)ppuVar1 & 1) == 0) {
        ppuVar7 = (undefined **)0x0;
      }
      _objc_retain(ppuVar7);
      _objc_release(ppuVar8);
      ppuVar1 = ppuVar7;
      func_0x00010bf1f3c0();
      _objc_release();
      if (((((uint)uVar6 | (uint)ppuVar1) & 1) == 0) || (lVar3 != 1)) {
        ppuVar1 = (undefined **)(param_5 + 0x60);
        _objc_loadWeakRetained();
        ppuVar8 = ppuVar1;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar8;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar8);
        _objc_release(ppuVar1);
        lVar3 = param_5 + 0x60;
        _objc_loadWeakRetained(lVar3);
        lVar9 = lVar3;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_5 + 0x60;
        _objc_loadWeakRetained(lVar10);
        lVar11 = lVar10;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010bf51460(lVar9);
        dVar18 = dVar17;
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar3);
        func_0x00010bf20c00(ppuVar7);
        _CGRectGetHeight();
        _CGRectGetMaxY(dVar17,param_2,param_3,param_4);
        dVar18 = dVar18 - dVar17;
        if (dVar18 <= 0.0) {
          dVar18 = 0.0;
        }
        param_1 = param_1 - dVar18;
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        puVar15 = PTR_PTR_1126b6008;
        func_0x00010c13a2c0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b6008;
        func_0x00010c13a2a0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar15);
        param_5 = param_5 + 0x48;
        _objc_loadWeakRetained();
        ppuVar1 = (undefined **)PTR_PTR_1126b2638;
        func_0x00010c13a260();
        _objc_retainAutoreleasedReturnValue();
        param_7 = ppuVar1;
        param_8 = puVar14;
        func_0x00010c0eb7e0(param_5);
        _objc_release(ppuVar1);
        _objc_release(param_5);
        _objc_release(puVar14);
        _objc_release();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return ppuVar7;
  }
  ___stack_chk_fail();
  puVar15 = ppuVar7[3];
  _objc_retain(puVar15);
  if (((ulong)param_8 & 1) == 0) {
    puVar12 = puVar15;
    func_0x000108f4b454();
    if ((((int)puVar12 == 0) ||
        (uVar5 = (ulong)((long)param_7 + -0x57) >> 1,
        7 < (uVar5 | (long)((long)param_7 + -0x57) << 0x3f))) ||
       ((0xb1U >> (ulong)((uint)uVar5 & 0x1f) & 1) == 0)) {
      func_0x000108534aa8(param_7);
    }
    else {
      param_7 = (undefined **)0xc;
    }
  }
  else {
    param_7 = (undefined **)0x5f;
  }
  _objc_release(puVar15);
  return param_7;
}



/* Entry: 1051de16c; end: 1051de17f; -[SCContextSpotlightRepliesActionPerformer _getContentViewSourceWithViewLocation:isCommunityStory:] */

long FUN_1051de16c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  if ((param_4 & 1) == 0) {
    uVar2 = uVar3;
    func_0x000108f4b454();
    if ((((int)uVar2 == 0) || (uVar1 = param_3 - 0x57U >> 1, 7 < (uVar1 | param_3 - 0x57U << 0x3f)))
       || ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) == 0)) {
      func_0x000108534aa8(param_3);
    }
    else {
      param_3 = 0xc;
    }
  }
  else {
    param_3 = 0x5f;
  }
  _objc_release(uVar3);
  return param_3;
}



/* Entry: 1051de180; end: 1051de187; -[SCContextSpotlightRepliesActionPerformer _pageTypeForContentViewSource:] */

undefined8 FUN_1051de180(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 < 0x56) {
    uVar1 = param_3 - 0xc;
    if (uVar1 < 0x37) {
      if ((1L << (uVar1 & 0x3f) & 0x64000000000000U) != 0) {
        return 0xd;
      }
      if ((1L << (uVar1 & 0x3f) & 0x300000000U) != 0) {
        return 0x13;
      }
      if (uVar1 == 0) {
        return 0x17;
      }
    }
  }
  else {
    if (param_3 == 0x56) {
      return 0xd;
    }
    if (param_3 == 0x68) {
      return 0x82;
    }
    if (param_3 == 0x8f) {
      return 0xe;
    }
  }
  return 0x5c;
}



/* Entry: 1051de188; end: 1051de23b; -[SCContextSpotlightRepliesActionPerformer _creatorProfileIdFromParams:] */

void FUN_1051de188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010bf4e4a0(lVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar3;
    func_0x00010bf25140(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1051de23c; end: 1051de243; -[SCContextSpotlightRepliesActionPerformer _isCommunityStoryWithParams:] */

bool FUN_1051de23c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b47a0;
  _objc_opt_class(PTR_PTR_1126b47a0);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar2 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c27dd80(uVar3);
    bVar1 = uVar3 == 7;
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 1051de244; end: 1051de42f; -[SCContextSpotlightRepliesActionPerformer _getCommunityMetadataWithParams:] */

void FUN_1051de244(int param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be3f0a0();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b47a0;
    _objc_opt_class(PTR_PTR_1126b47a0);
    uVar2 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar1 = uVar3;
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1051de430;
    uStack_40 = 0x1051de440;
    uStack_38 = 0;
    uVar2 = uVar1;
    func_0x00010bfa2680(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfcc0();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b6010;
    _objc_alloc(PTR_PTR_1126b6010);
    uVar2 = uVar1;
    func_0x00010c11ac00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c018f60(puVar4);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1051de430; end: 1051de44b;  */

void FUN_1051de430(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051de44c; end: 1051de48b;  */

void FUN_1051de44c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0ecf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051de48c; end: 1051de493;  */

void FUN_1051de48c(void)

{
  return;
}



/* Entry: 1051de494; end: 1051de4a7; -[SCContextSpotlightRepliesActionPerformer _isCreatorModeWithCreatorId:isCommunityStory:] */

undefined8 FUN_1051de494(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((param_4 & 1) != 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_isEqualToString__1125fa240);
  return uVar1;
}



/* Entry: 1051de4a8; end: 1051de517; -[SCContextSpotlightRepliesActionPerformer _isSpotlightForSnapPlaybackMetadata:viewLocation:] */

ulong FUN_1051de4a8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = (ulong)(param_4 == 0x59);
  }
  else {
    uVar1 = param_3;
    func_0x000108539a68();
    if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010853a5d4(), (uVar1 & 1) == 0)) {
      uVar1 = param_3;
      func_0x000108539fb0(param_3);
    }
    else {
      uVar1 = 1;
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1051de518; end: 1051de63f; -[SCContextSpotlightRepliesActionPerformer _trayUIContainerWithViewController:isCreatorMode:] */

void FUN_1051de518(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  puVar2 = PTR_PTR_1126b5bb8;
  _objc_alloc(PTR_PTR_1126b5bb8);
  func_0x00010bf6a8c0(PTR_PTR_1126b6000);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c29d360(uVar3);
  func_0x000108f4b570(uVar1,uVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c038f00(param_1,puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1051de640; end: 1051de66b;  */

void FUN_1051de640(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051de66c; end: 1051de93b; -[SCContextSpotlightRepliesActionPerformer _repliesActionsConfigWithContextActionParams:isCommunityStory:shouldPopUpKeyboard:prependedCommentIds:initialReplyAttachment:] */

void FUN_1051de66c(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  uVar8 = param_7;
  _objc_retain(param_7);
  if (param_4 == 0) {
    uVar9 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar9 = uVar2;
    if ((uVar1 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar2);
    func_0x00010c29d360(param_3);
    lVar4 = param_1;
    func_0x00010be44080();
    uVar1 = param_3;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf82a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar5;
    func_0x00010c08fa60();
    if (((uVar1 != 0) && ((int)lVar4 != 0)) &&
       (uVar1 = uVar9, func_0x00010c07dce0(), (int)uVar1 != 0)) {
      func_0x000108f4b800();
    }
    _objc_release(uVar5);
    _objc_release(uVar9);
    uVar8 = 0;
  }
  else {
    func_0x000108061dc8();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf42180();
  if ((int)uVar7 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_3;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar9);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar9 = uVar2;
    if ((uVar1 & 1) == 0) {
      uVar9 = 0;
    }
    _objc_retain(uVar9);
    _objc_release(uVar2);
  }
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126b6018;
  _objc_alloc(PTR_PTR_1126b6018);
  func_0x00010c00a1a0();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051de93c; end: 1051deb4b; -[SCContextSpotlightRepliesActionPerformer _isCreatorModeWithParams:isCommunityStory:] */

undefined1 FUN_1051de93c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  lVar3 = param_3;
  func_0x00010c242420(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf5b400();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be3f480();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uStack_48 = (undefined1)lVar6;
  lVar3 = param_3;
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010c242420();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c241400();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar3 != 0) && (bVar1 = *(byte *)(puStack_58 + 3), _objc_release(), (bVar1 & 1) == 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar6);
    func_0x00010bfa97a0(uVar7);
    _objc_release(uVar7);
    _objc_release(lVar6);
  }
  uVar2 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(lVar6);
  _objc_release(lVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1051deb4c; end: 1051dece7;  */

undefined ** FUN_1051deb4c(long param_1,undefined **param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar4 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_3;
  _objc_retain(param_2);
  if (param_3 == (undefined **)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    ppuVar1 = param_2;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      lVar8 = *plStack_120;
      do {
        ppuVar9 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_2);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)ppuVar9 * 8);
          uVar7 = *(ulong *)(param_1 + 0x20);
          uVar2 = uVar6;
          func_0x00010bf24ec0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          if ((uVar7 & 1) == 0) {
            _objc_release(uVar2);
          }
          else {
            func_0x00010bf01740();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar6;
            ppuVar4 = &PTR____CFConstantStringClassReference_110dcae38;
            func_0x00010bf4b900();
            _objc_release(uVar6);
            _objc_release(uVar2);
            if ((int)uVar3 != 0) {
              *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
              goto LAB_1051dec9c;
            }
          }
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
        } while (ppuVar1 != ppuVar9);
        ppuVar1 = param_2;
        ppuVar4 = &puStack_130;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
LAB_1051dec9c:
    _objc_release(param_2);
    ppuVar1 = ppuVar4;
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
    puVar5 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    ppuVar4 = ppuVar9;
    _objc_opt_isKindOfClass(ppuVar9,puVar5);
    ppuVar1 = ppuVar9;
    if (((ulong)ppuVar4 & 1) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar9);
    ppuVar4 = ppuVar1;
    func_0x00010c25a6e0(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar4;
    func_0x00010c25b720(ppuVar4);
    _objc_release(ppuVar4);
    return ppuVar1;
  }
  return param_2;
}



/* Entry: 1051dece8; end: 1051dedb7; -[SCContextSpotlightRepliesActionPerformer _storyTypeWithParams:] */

ulong FUN_1051dece8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c0ea8e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b2390;
  _objc_opt_class(PTR_PTR_1126b2390);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c25a6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c25b720(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 1051dedb8; end: 1051dee57; -[SCContextSpotlightRepliesActionPerformer .cxx_destruct] */

void FUN_1051dedb8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 1051dee58; end: 1051deefb; -[SCContextWatchSpotlightActionPerformer initWithSpotlightOperaPresenter:blizzardLogger:] */

undefined1 *
FUN_1051dee58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6d58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051deefc; end: 1051df2cf; -[SCContextWatchSpotlightActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8
FUN_1051deefc(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5,undefined **param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  func_0x00010c2a2800();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1051df2d0;
  puStack_70 = &UNK_110849530;
  _objc_retain(param_8);
  ppuVar2 = &puStack_88;
  uStack_68 = param_8;
  _objc_retainBlock();
  if (param_3 == (undefined **)0x0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    ppuVar3 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c08bda0();
    iVar1 = (int)ppuVar5;
    func_0x000108435ff0();
    if (iVar1 - 1U < 0x10) {
      uVar12 = *(undefined8 *)(&UNK_10dd90880 + (ulong)(iVar1 - 1U) * 8);
    }
    else {
      uVar12 = 0xffffffffffffffff;
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_6;
    func_0x00010c0ffd80(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e560(uVar6,param_2,ppuVar3,param_4,uVar12,ppuVar4,ppuVar2);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(uVar6);
    ppuVar3 = param_6;
    func_0x00010c0ea8e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    ppuVar4 = ppuVar5;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    _objc_retain();
    _objc_release(ppuVar4);
    ppuVar7 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar7 != (undefined **)0x0) {
      ppuVar4 = ppuVar7;
    }
    _objc_retain(ppuVar4);
    _objc_release(ppuVar7);
    ppuVar8 = param_6;
    func_0x00010c242420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c241400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010c25b200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar7 = ppuVar10;
    }
    _objc_retain(ppuVar7);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    ppuVar9 = ppuVar5;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar10;
    func_0x000108437e88();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar8 = ppuVar11;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar11);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    ppuVar9 = ppuVar5;
    func_0x000108437ce4();
    uVar12 = 1;
    if ((int)ppuVar9 != 0) {
      uVar12 = 2;
    }
    ppuVar9 = param_3;
    func_0x00010bf25ae0(param_3);
    func_0x00010c0b2f00(*(undefined8 *)(param_1 + 0x10),param_2,ppuVar3,ppuVar4,ppuVar7,ppuVar8,
                        uVar12,ppuVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return 0;
}



/* Entry: 1051df2d0; end: 1051df2e7;  */

void FUN_1051df2d0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051df2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1051df2e8; end: 1051df317; -[SCContextWatchSpotlightActionPerformer .cxx_destruct] */

void FUN_1051df2e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051df318; end: 1051df3e7; -[SCContextSpotlightPostActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

undefined8 FUN_1051df318(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x5;
  long in_x7;
  
  _objc_retain(in_x7);
  _objc_retain(in_x5);
  uVar1 = in_x5;
  func_0x00010c0ea4c0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5b28;
  func_0x00010c105200(PTR_PTR_1126b5b28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = in_x5;
  func_0x00010c0ea8e0(in_x5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x5);
  func_0x00010c0eb7c0(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  (**(code **)(in_x7 + 0x10))(in_x7,0);
  _objc_release(in_x7);
  return 0;
}



/* Entry: 1051df3e8; end: 1051df48b; -[SCContextStoragePlanUpsellActionPerformer initWithPlusSubscribeScopeExposer:plusSubscribeScopeServices:] */

undefined1 *
FUN_1051df3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6d60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051df48c; end: 1051df6d7; -[SCContextStoragePlanUpsellActionPerformer performAction:onViewController:uiContainer:params:source:completion:] */

void FUN_1051df48c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010becaca0(param_1);
  uVar4 = param_8;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b1da8;
  _objc_alloc(PTR_PTR_1126b1da8);
  uVar4 = param_6;
  func_0x00010c0b3760(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04abe0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126b5af8;
  func_0x00010c257080(PTR_PTR_1126b5af8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23e60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bffae00(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


