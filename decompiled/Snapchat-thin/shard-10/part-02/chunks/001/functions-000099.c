/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b92284; end: 107b9228b; -[SCSnapDocOperaMediaManager _clearAllContentResult] */

void FUN_107b92284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x80),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 107b9228c; end: 107b923cb; -[SCSnapDocOperaMediaManager _logFirstFrameGenerationIsServerSide:useFirstFrame:mediaContextType:] */

void FUN_107b9228c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d6cc8;
  func_0x00010c240120(PTR_PTR_1126d6cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110eb1278,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110eb1298,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010b7f519c(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_5);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x30),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b923cc; end: 107b923e7; -[SCSnapDocOperaMediaManager _stringFromLocalFirstFrameGenerationType:] */

undefined ** FUN_107b923cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb12b8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb12d8;
  }
  return ppuVar1;
}



/* Entry: 107b923e8; end: 107b9249b; -[SCSnapDocOperaMediaManager .cxx_destruct] */

void FUN_107b923e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 107b9249c; end: 107b9250f; -[SCSnapDocOperaParser initWithSnapDocOperaPageResolver:] */

undefined1 * FUN_107b9249c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa110;
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



/* Entry: 107b92510; end: 107b92613; -[SCSnapDocOperaParser pagePropertiesForSnapDoc:] */

void FUN_107b92510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b2368;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b2368;
  _objc_opt_new(PTR_PTR_1126b2368);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1ae0();
  _objc_release(uVar3);
  FUN_107b92620(param_3);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b23e0;
  _objc_alloc(PTR_PTR_1126b23e0);
  puVar5 = puVar1;
  func_0x00010c1531a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c1531a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033240(puVar4,param_2,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b92614; end: 107b9261f; -[SCSnapDocOperaParser .cxx_destruct] */

void FUN_107b92614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107b92620; end: 107b926af;  */

void FUN_107b92620(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d820();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x000108f56b50();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0d0a0();
    if ((int)lVar2 == 9) {
      func_0x00010c0dc9c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b926b0; end: 107b928df;  */

undefined8 *** FUN_107b926b0(undefined8 ***param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_80;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf3ec40();
  if (lVar1 == 0x280) {
    func_0x000107b94e88();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000107b94ea0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release();
    if ((int)lVar2 == 0) {
      func_0x000107b94ee8();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000107b94f00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107b94eb8();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000107b94ed0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x00010c1d0760(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1d0760(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  ppuVar8 = (undefined8 **)0x3;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release();
  func_0x000107b94e70();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0c938;
  puVar6 = puVar3;
  func_0x00010c1d0760(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar8);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(uStack_80);
  _objc_retain(&PTR____CFConstantStringClassReference_110f0bc38);
  _objc_retain(&PTR____CFConstantStringClassReference_110f0bc58);
  _objc_retain(&PTR____CFConstantStringClassReference_110f0c958);
  _objc_retain(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb980);
  puStack_e8 = PTR_PTR_1126fa118;
  pppuVar4 = &ppuStack_f0;
  ppuStack_f0 = param_1;
  _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined8 ***)0x0) {
    ppuVar5 = (undefined8 **)PTR_PTR_1126d6cd8;
    _objc_alloc();
    func_0x00010c05d2a0();
    ppuVar10 = pppuVar4[1];
    pppuVar4[1] = ppuVar5;
    _objc_release(ppuVar10);
    _objc_retain(ppuVar8);
    ppuVar5 = pppuVar4[2];
    pppuVar4[2] = ppuVar8;
    _objc_release(ppuVar5);
    _objc_retain(in_x5);
    ppuVar5 = pppuVar4[3];
    pppuVar4[3] = in_x5;
    _objc_release(ppuVar5);
    ppuVar5 = (undefined8 **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    ppuVar10 = pppuVar4[4];
    pppuVar4[4] = ppuVar5;
    _objc_release(ppuVar10);
    ppuVar5 = (undefined8 **)PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    ppuVar10 = pppuVar4[5];
    pppuVar4[5] = ppuVar5;
    _objc_release(ppuVar10);
    _objc_release(puVar3);
    ppuVar5 = (undefined8 **)PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    ppuVar10 = pppuVar4[6];
    pppuVar4[6] = ppuVar5;
    _objc_release(ppuVar10);
    _objc_release(puVar3);
  }
  _objc_release(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb980);
  _objc_release(&PTR____CFConstantStringClassReference_110f0c958);
  _objc_release(&PTR____CFConstantStringClassReference_110f0bc58);
  _objc_release(&PTR____CFConstantStringClassReference_110f0bc38);
  _objc_release(uStack_80);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(puVar6);
  return pppuVar4;
}



/* Entry: 107b928e0; end: 107b92bbb; -[SCSnapDocConfigurer initWithUserSession:circumstanceEngine:snapDocMediaResolver:snapDocParser:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:snapchattersDataFetcher:networkConnectivityMonitor:locationProvider:adRenderDataParser:] */

undefined8 *
FUN_107b928e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126fa118;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d6cd8;
    _objc_alloc();
    func_0x00010c05d2a0();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
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



/* Entry: 107b92bbc; end: 107b92c43; -[SCSnapDocConfigurer isFullSnapDoc:] */

bool FUN_107b92bbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ff680();
  if (lVar3 == 0) {
    lVar3 = param_3;
    func_0x00010c0c62a0(param_3);
    bVar1 = lVar3 != 0;
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107b92c44; end: 107b92da7; -[SCSnapDocConfigurer fullSnapDocForRequestSnapDoc:completion:] */

void FUN_107b92c44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c074060();
  if ((int)lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bfbbcc0(uVar2);
    _objc_release(param_3);
    _objc_release(param_4);
  }
  else if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3,1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b92da8; end: 107b92f23; -[SCSnapDocConfigurer fullSnapDocForRequestSnapDoc:] */

void FUN_107b92da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c074060();
  if ((int)lVar1 == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_107b92f24;
    uStack_40 = 0x107b92f34;
    uStack_38 = 0;
    uVar2 = 0;
    _dispatch_semaphore_create();
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x00010bfbbcc0(uVar4);
    _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
    puVar3 = PTR_PTR_1126d63d0;
    _objc_alloc(PTR_PTR_1126d63d0);
    func_0x00010c047640();
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    puVar3 = PTR_PTR_1126d63d0;
    _objc_alloc(PTR_PTR_1126d63d0);
    func_0x00010c047640();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b92f24; end: 107b92f3b;  */

void FUN_107b92f24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107b92f3c; end: 107b92faf;  */

void FUN_107b92f3c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b92fb0; end: 107b930af; -[SCSnapDocConfigurer queryPlaybackMediaStatusForSnapDoc:completion:] */

void FUN_107b92fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
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



/* Entry: 107b930b0; end: 107b93147;  */

void FUN_107b930b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107b93148;
  puStack_40 = &UNK_1109fec50;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010be85420(lVar3,param_2,uVar1,1,&puStack_58);
  _objc_release(lVar3);
  _objc_release(uStack_38);
  return;
}



/* Entry: 107b93148; end: 107b9315b;  */

void FUN_107b93148(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b93154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107b9315c; end: 107b93243; -[SCSnapDocConfigurer queryPlaybackMediaStatusForSnapDoc:] */

void FUN_107b9315c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107b92f24;
  uStack_30 = 0x107b92f34;
  uStack_28 = 0;
  func_0x00010be85420(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b93244; end: 107b932eb;  */

void FUN_107b93244(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d63c8;
  _objc_retain(param_2);
  _objc_alloc();
  puVar2 = PTR_PTR_1126d63d0;
  _objc_alloc(PTR_PTR_1126d63d0);
  func_0x00010c047640();
  _objc_release(param_2);
  func_0x00010c0169e0();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b932ec; end: 107b9345b; -[SCSnapDocConfigurer fetchMediaDataForSnapDoc:editionId:publisherId:completionQueue:trigger:completion:] */

void FUN_107b932ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x00010bfa6de0(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b9345c; end: 107b9353b;  */

void FUN_107b9345c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    goto LAB_107b93520;
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c074060();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010c00e2e0();
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      _objc_release(puVar3);
      goto LAB_107b93500;
    }
    (**(code **)(lVar1 + 0x10))(lVar1,puVar3,0);
  }
  else {
LAB_107b93500:
    puVar3 = (undefined *)(param_1 + 0x40);
    _objc_loadWeakRetained(puVar3);
    func_0x00010be13f40();
  }
  _objc_release(puVar3);
LAB_107b93520:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b9353c; end: 107b936b3; -[SCSnapDocConfigurer prefetchMediaDataForSnapDoc:editionId:publisherId:completionQueue:trigger:completion:] */

void FUN_107b9353c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_6);
  uStack_60 = param_7;
  func_0x00010c107660(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b936b4; end: 107b9373f;  */

void FUN_107b936b4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (lVar1 = *(long *)(param_1 + 0x38), lVar1 == 0)) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be77620();
    _objc_release(param_1);
  }
  else {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b93740; end: 107b93877; -[SCSnapDocConfigurer cancelQueuedRequestForSnapDoc:] */

void FUN_107b93740(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107b93878; end: 107b938ab;  */

void FUN_107b93878(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdda600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b938ac; end: 107b93937; -[SCSnapDocConfigurer operaPagePropertiesForSnapDoc:] */

void FUN_107b938ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c0f1ac0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 107b93938; end: 107b9393f; +[SCSnapDocConfigurer convertToSnapDocV3:] */

/* WARNING: Possible PIC construction at 0x000108f55708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f55998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f55b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f55ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f55f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f565e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f55f34) */
/* WARNING: Removing unreachable block (ram,0x000108f55ef4) */
/* WARNING: Removing unreachable block (ram,0x000108f55b58) */
/* WARNING: Removing unreachable block (ram,0x000108f5599c) */
/* WARNING: Removing unreachable block (ram,0x000108f5570c) */
/* WARNING: Removing unreachable block (ram,0x000108f55778) */
/* WARNING: Removing unreachable block (ram,0x000108f565ec) */
/* WARNING: Removing unreachable block (ram,0x000108f55684) */

void FUN_107b93938(undefined8 param_1,undefined *param_2,undefined *param_3)

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
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar20;
  func_0x00010c08fa60();
  _objc_release(puVar20);
  puVar20 = (undefined *)0x0;
  if (puVar1 == (undefined *)0x0) {
code_r0x000108f5676c:
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) goto _objc_autoreleaseReturnValue;
    ___stack_chk_fail();
    puVar2 = param_3;
  }
  else {
    _objc_retain(param_3);
    puVar1 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar2;
      func_0x00010bfda560();
      _objc_release(puVar2);
    }
    else {
      puVar19 = (undefined *)0x1;
    }
    _objc_release(puVar20);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar20;
    func_0x00010bf529e0();
    _objc_release(puVar20);
    _objc_release(puVar1);
    puVar1 = param_3;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar1;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    _objc_release(param_3);
    if (((((ulong)puVar19 & 1) != 0) || (puVar2 != (undefined *)0x0)) ||
       (puVar20 != (undefined *)0x0)) {
      _objc_retain(param_3);
      puVar20 = param_3;
      goto code_r0x000108f5676c;
    }
    puVar20 = param_3;
    func_0x000108f5729c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b25c0;
    _objc_alloc_init();
    puVar1 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar2);
    _objc_release(puVar1);
    puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar20;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar1);
    puVar1 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar3);
    _objc_retain(puVar1);
    puVar3 = puVar1;
    func_0x00010bf52a60();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar1);
      puVar4 = puVar20;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b3068;
      _objc_opt_class(PTR_PTR_1126b3068);
      puVar5 = puVar4;
      _objc_opt_isKindOfClass(puVar4,puVar3);
      puVar3 = puVar4;
      if (((ulong)puVar5 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar4);
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar2;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          puVar5 = PTR_PTR_1126b25e0;
          _objc_alloc_init(PTR_PTR_1126b25e0);
          func_0x00010c1dd3e0(puVar2);
          _objc_release(puVar5);
        }
        else {
          func_0x00010c1dd3e0(puVar2);
        }
        _objc_release(puVar4);
        puVar4 = puVar2;
        func_0x00010c0fee00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dd500();
        _objc_release(puVar4);
      }
      puVar5 = puVar20;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126dcaa8;
      _objc_opt_class(PTR_PTR_1126dcaa8);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar4);
      puVar4 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar4 = (undefined *)0x0;
      }
      _objc_retain(puVar4);
      _objc_release(puVar5);
      if (puVar4 == (undefined *)0x0) {
code_r0x000108f559f4:
        puVar6 = puVar20;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126cc6d8;
        _objc_opt_class(PTR_PTR_1126cc6d8);
        puVar7 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar5);
        puVar5 = puVar6;
        if (((ulong)puVar7 & 1) == 0) {
          puVar5 = (undefined *)0x0;
        }
        _objc_retain(puVar5);
        _objc_release(puVar6);
        puVar7 = puVar20;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126cc6e0;
        _objc_opt_class(PTR_PTR_1126cc6e0);
        puVar21 = puVar7;
        _objc_opt_isKindOfClass(puVar7,puVar6);
        puVar6 = puVar7;
        if (((ulong)puVar21 & 1) == 0) {
          puVar6 = (undefined *)0x0;
        }
        _objc_retain(puVar6);
        _objc_release(puVar7);
        _objc_retain(puVar2);
        _objc_retain(puVar5);
        _objc_retain(puVar6);
        puVar7 = puVar5;
        func_0x00010bfd5020();
        if ((int)puVar7 != 0) {
          puVar7 = puVar5;
          func_0x00010bf28b80();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar7;
          func_0x00010bf28aa0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar21;
          func_0x00010c08fa60();
          _objc_release(puVar21);
          _objc_release(puVar7);
          if (puVar8 != (undefined *)0x0) {
            param_2 = PTR_PTR_1126b25d8;
            _objc_opt_new();
            func_0x00010bf28b80();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = puVar5;
            func_0x00010bf28aa0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1822a0(param_2);
            _objc_release(puVar1);
            _objc_release(puVar5);
            func_0x00010c1c5440(param_2);
            goto code_r0x000108f567b4;
          }
        }
        if (puVar6 != (undefined *)0x0) {
          func_0x00010c175d40(puVar2);
        }
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar6 = puVar20;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar7 = puVar6;
        _objc_opt_isKindOfClass(puVar6,puVar5);
        puVar5 = puVar6;
        if (((ulong)puVar7 & 1) == 0) {
          puVar5 = (undefined *)0x0;
        }
        _objc_retain(puVar5);
        _objc_release(puVar6);
        _objc_retain(puVar5);
        puVar6 = puVar5;
        func_0x00010bf52a60();
        puVar7 = puRam0000000000000000;
        while (puVar6 != (undefined *)0x0) {
          puVar21 = (undefined *)0x0;
          do {
            if (puRam0000000000000000 != puVar7) {
              _objc_enumerationMutation(puVar5);
            }
            puVar8 = puVar2;
            func_0x00010c0fee00();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c0ff660();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x000107c31910();
            puVar11 = puVar10;
            func_0x00010bf529e0();
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            if (puVar11 == (undefined *)0x0) {
              puVar8 = PTR_PTR_1126b25d0;
              _objc_alloc_init(PTR_PTR_1126b25d0);
              func_0x00010c224ee0();
              func_0x000108f56970(puVar2,puVar8);
            }
            else {
              puVar8 = PTR_PTR_1126b25f0;
              _objc_alloc_init(PTR_PTR_1126b25f0);
              func_0x00010c224ee0();
              func_0x00010befa120(puVar19);
            }
            _objc_release(puVar8);
            puVar21 = puVar21 + 1;
          } while (puVar6 != puVar21);
          puVar6 = puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
        param_2 = puVar20;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126cc748;
        _objc_opt_class(PTR_PTR_1126cc748);
        puVar7 = param_2;
        _objc_opt_isKindOfClass(param_2,puVar6);
        puVar6 = param_2;
        if (((ulong)puVar7 & 1) == 0) {
          puVar6 = (undefined *)0x0;
        }
        _objc_retain(puVar6);
        _objc_release(param_2);
        if (puVar6 == (undefined *)0x0) {
          puVar7 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126cc738;
          _objc_opt_class(PTR_PTR_1126cc738);
          puVar21 = puVar7;
          _objc_opt_isKindOfClass(puVar7,puVar6);
          puVar6 = puVar7;
          if (((ulong)puVar21 & 1) == 0) {
            puVar6 = (undefined *)0x0;
          }
          _objc_retain(puVar6);
          _objc_release(puVar7);
          puVar7 = puVar6;
          func_0x00010c084fe0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar7;
          func_0x00010bf529e0();
          _objc_release(puVar7);
          if (puVar21 != (undefined *)0x0) {
            puVar7 = PTR_PTR_1126b25f0;
            _objc_alloc_init(PTR_PTR_1126b25f0);
            func_0x00010c17f0a0();
            func_0x00010befa120(puVar19);
            _objc_release(puVar7);
          }
          puVar21 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126dcab0;
          _objc_opt_class(PTR_PTR_1126dcab0);
          puVar8 = puVar21;
          _objc_opt_isKindOfClass(puVar21,puVar7);
          puVar7 = puVar21;
          if (((ulong)puVar8 & 1) == 0) {
            puVar7 = (undefined *)0x0;
          }
          _objc_retain(puVar7);
          _objc_release(puVar21);
          if (puVar7 != (undefined *)0x0) {
            puVar21 = PTR_PTR_1126b25f0;
            _objc_alloc_init(PTR_PTR_1126b25f0);
            func_0x00010c1688e0();
            func_0x00010befa120(puVar19);
            _objc_release(puVar21);
          }
          puVar8 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = PTR_PTR_1126cc778;
          _objc_opt_class(PTR_PTR_1126cc778);
          puVar9 = puVar8;
          _objc_opt_isKindOfClass(puVar8,puVar21);
          puVar21 = puVar8;
          if (((ulong)puVar9 & 1) == 0) {
            puVar21 = (undefined *)0x0;
          }
          _objc_retain(puVar21);
          _objc_release(puVar8);
          if (puVar21 != (undefined *)0x0) {
            func_0x00010c1dac80(puVar2);
          }
          puVar9 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR_PTR_1126cc768;
          _objc_opt_class(PTR_PTR_1126cc768);
          puVar10 = puVar9;
          _objc_opt_isKindOfClass(puVar9,puVar8);
          puVar8 = puVar9;
          if (((ulong)puVar10 & 1) == 0) {
            puVar8 = (undefined *)0x0;
          }
          _objc_retain(puVar8);
          _objc_release(puVar9);
          if (puVar8 != (undefined *)0x0) {
            puVar9 = PTR_PTR_1126b25f0;
            _objc_alloc_init(PTR_PTR_1126b25f0);
            func_0x00010c20f500();
            func_0x00010befa120(puVar19);
            _objc_release(puVar9);
          }
          puVar10 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126dcab8;
          _objc_opt_class(PTR_PTR_1126dcab8);
          puVar11 = puVar10;
          _objc_opt_isKindOfClass(puVar10,puVar9);
          puVar9 = puVar10;
          if (((ulong)puVar11 & 1) == 0) {
            puVar9 = (undefined *)0x0;
          }
          _objc_retain(puVar9);
          _objc_release(puVar10);
          if (puVar9 != (undefined *)0x0) {
            puVar10 = PTR_PTR_1126b25f0;
            _objc_alloc_init(PTR_PTR_1126b25f0);
            func_0x00010c168c20();
            func_0x00010befa120(puVar19);
            _objc_release(puVar10);
          }
          puVar11 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126cc740;
          _objc_opt_class(PTR_PTR_1126cc740);
          puVar12 = puVar11;
          _objc_opt_isKindOfClass(puVar11,puVar10);
          puVar10 = puVar11;
          if (((ulong)puVar12 & 1) == 0) {
            puVar10 = (undefined *)0x0;
          }
          _objc_retain(puVar10);
          _objc_release(puVar11);
          if (puVar10 != (undefined *)0x0) {
            puVar11 = PTR_PTR_1126b25f0;
            _objc_alloc_init(PTR_PTR_1126b25f0);
            func_0x00010c176240();
            func_0x00010befa120(puVar19);
            _objc_release(puVar11);
          }
          puVar12 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR_PTR_1126dcac0;
          _objc_opt_class(PTR_PTR_1126dcac0);
          puVar13 = puVar12;
          _objc_opt_isKindOfClass(puVar12,puVar11);
          puVar11 = puVar12;
          if (((ulong)puVar13 & 1) == 0) {
            puVar11 = (undefined *)0x0;
          }
          _objc_retain(puVar11);
          _objc_release(puVar12);
          if (puVar11 != (undefined *)0x0) {
            puVar12 = PTR_PTR_1126b25f0;
            _objc_alloc_init(PTR_PTR_1126b25f0);
            func_0x00010c1ce640();
            func_0x00010befa120(puVar19);
            _objc_release(puVar12);
          }
          puVar13 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126dcac8;
          _objc_opt_class(PTR_PTR_1126dcac8);
          puVar14 = puVar13;
          _objc_opt_isKindOfClass(puVar13,puVar12);
          puVar12 = puVar13;
          if (((ulong)puVar14 & 1) == 0) {
            puVar12 = (undefined *)0x0;
          }
          _objc_retain(puVar12);
          _objc_release(puVar13);
          puVar13 = puVar12;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010c08fa60();
          _objc_release(puVar13);
          if (puVar14 != (undefined *)0x0) {
            puVar13 = puVar2;
            func_0x00010bf0d7e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar13 == (undefined *)0x0) {
              puVar14 = PTR_PTR_1126cf388;
              _objc_alloc_init(PTR_PTR_1126cf388);
              func_0x00010c16b420(puVar2);
              _objc_release(puVar14);
            }
            else {
              func_0x00010c16b420(puVar2);
            }
            _objc_release(puVar13);
            puVar13 = puVar12;
            func_0x00010c26b700(puVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar2;
            func_0x00010bf0d7e0(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1882e0();
            _objc_release(puVar14);
            _objc_release(puVar13);
          }
          puVar14 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR_PTR_1126b00c0;
          _objc_opt_class(PTR_PTR_1126b00c0);
          puVar15 = puVar14;
          _objc_opt_isKindOfClass(puVar14,puVar13);
          puVar13 = puVar14;
          if (((ulong)puVar15 & 1) == 0) {
            puVar13 = (undefined *)0x0;
          }
          _objc_retain(puVar13);
          _objc_release(puVar14);
          puVar14 = puVar13;
          func_0x00010bfe5ea0();
          if (puVar14 != (undefined *)0x0) {
            func_0x00010c1ba8a0(puVar2);
          }
          puVar14 = puVar2;
          func_0x00010bf0d7e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar14 == (undefined *)0x0) {
            puVar15 = PTR_PTR_1126cf388;
            _objc_alloc_init(PTR_PTR_1126cf388);
            func_0x00010c16b420(puVar2);
            _objc_release(puVar15);
          }
          else {
            func_0x00010c16b420(puVar2);
          }
          _objc_release(puVar14);
          puVar14 = puVar2;
          func_0x00010bf0d7e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16b440();
          _objc_release(puVar14);
          puVar15 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR_PTR_1126cc760;
          _objc_opt_class(PTR_PTR_1126cc760);
          puVar16 = puVar15;
          _objc_opt_isKindOfClass(puVar15,puVar14);
          puVar14 = puVar15;
          if (((ulong)puVar16 & 1) == 0) {
            puVar14 = (undefined *)0x0;
          }
          _objc_retain(puVar14);
          _objc_release(puVar15);
          func_0x00010c1d7e00(puVar2);
          _objc_release(puVar14);
          puVar15 = puVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = PTR_PTR_1126dcad0;
          _objc_opt_class(PTR_PTR_1126dcad0);
          puVar16 = puVar15;
          _objc_opt_isKindOfClass(puVar15,puVar14);
          puVar14 = puVar15;
          if (((ulong)puVar16 & 1) == 0) {
            puVar14 = (undefined *)0x0;
          }
          _objc_retain(puVar14);
          _objc_release(puVar15);
          puVar15 = puVar14;
          func_0x00010c26e280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar15 == (undefined *)0x0) {
            puVar16 = puVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR_PTR_1126cc770;
            _objc_opt_class(PTR_PTR_1126cc770);
            puVar17 = puVar16;
            _objc_opt_isKindOfClass(puVar16,puVar15);
            puVar15 = puVar16;
            if (((ulong)puVar17 & 1) == 0) {
              puVar15 = (undefined *)0x0;
            }
            _objc_retain(puVar15);
            _objc_release(puVar16);
            func_0x00010c207640(puVar2);
            _objc_release(puVar15);
            puVar16 = puVar20;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            param_2 = PTR_PTR_1126cc7a8;
            _objc_opt_class();
            puVar17 = puVar16;
            _objc_opt_isKindOfClass();
            puVar15 = puVar16;
            if (((ulong)puVar17 & 1) == 0) {
              puVar15 = (undefined *)0x0;
            }
            _objc_retain(puVar15);
            _objc_release(puVar16);
            puVar16 = puVar15;
            func_0x00010c15ebe0();
            if (puVar16 != (undefined *)0x0) {
              func_0x00010c1e5280(puVar2);
            }
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar10);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar21);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(0);
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(puVar1);
            _objc_release(puVar19);
            _objc_release(puVar20);
            puVar20 = puVar2;
            goto code_r0x000108f5676c;
          }
          func_0x00010c213e20(puVar2);
          func_0x00010c26e280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c6c20();
          param_2 = puVar14;
        }
        else {
          func_0x00010c29a620();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar6 = puVar2;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
          puVar7 = PTR_PTR_1126b25e0;
          _objc_alloc_init(PTR_PTR_1126b25e0);
          func_0x00010c1dd3e0(puVar2);
          _objc_release(puVar7);
        }
        else {
          func_0x00010c1dd3e0(puVar2);
        }
        _objc_release(puVar6);
        puVar6 = puVar5;
        func_0x00010bfd8fc0();
        if ((int)puVar6 != 0) {
          puVar6 = puVar5;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c0c55e0();
          _objc_release(puVar6);
          if (puVar7 != (undefined *)0x0) {
            puVar5 = puVar2;
            func_0x00010c0fee00(puVar2);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20f7e0();
            _objc_release(puVar5);
            goto code_r0x000108f559f4;
          }
        }
        param_2 = PTR_PTR_1126b25d8;
        _objc_opt_new();
        func_0x00010c260e00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1822a0(param_2);
        _objc_release(puVar5);
      }
    }
    else {
      param_2 = puRam0000000000000000;
      func_0x00010c0c6180();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_2;
      func_0x00010c0c6c20();
      if ((int)puVar1 == 0) {
        func_0x00010c27dd80();
        func_0x00010c1c5440(param_2);
      }
    }
  }
code_r0x000108f567b4:
  _objc_retain();
  puVar20 = (undefined *)0x0;
  if ((puVar2 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) {
    _objc_retain(param_2);
    puVar1 = puVar2;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5120(puVar2);
      _objc_release(puVar20);
    }
    else {
      func_0x00010c1c5120(puVar2);
    }
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c5600(puVar2);
    func_0x00010c0df7c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c4aa0(param_2);
    _objc_release(puVar1);
    puVar20 = PTR_PTR_1126bcf20;
    _objc_alloc_init(PTR_PTR_1126bcf20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c55e0(param_2);
    func_0x00010c0df7c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1c4aa0(puVar20);
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c0c6280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_2);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar19 = puVar2;
    func_0x00010c0c6280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1c4ac0(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar19);
  }
  _objc_release(puVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 107b93940; end: 107b9398f; -[SCSnapDocConfigurer cleanCaches:] */

void FUN_107b93940(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    func_0x00010bf39e40(*(long *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b93990; end: 107b93ab3; -[SCSnapDocConfigurer _updateWithError:fullSnapDocDataModel:completionQueue:completion:] */

void FUN_107b93990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,param_3,param_4);
    }
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b93ab4;
    puStack_60 = &UNK_11084a9e8;
    _objc_retain(param_6);
    lStack_48 = param_6;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    func_0x00010007380c(param_5,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(lStack_48);
  }
  func_0x00010be8b9e0(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b93ab4; end: 107b93acf;  */

void FUN_107b93ab4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b93ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 107b93ad0; end: 107b93d8b; -[SCSnapDocConfigurer _prefetchSnapDocContentManagerMediaResourcesForFullSnapDoc:completionQueue:trigger:completion:] */

void FUN_107b93ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar7 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x000108f56dbc();
  _objc_release(uVar7);
  if ((int)uVar2 == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar7 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      FUN_107b8dc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      FUN_107b8dd50();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126bfc90;
      puVar3 = PTR_PTR_1126b1378;
      func_0x00010c0c46a0(uVar2);
      func_0x00010c119380(puVar1);
      func_0x00010c108220(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_68,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_6);
      uVar6 = uVar4;
      func_0x00010bf0bd80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      func_0x00010bdc62e0(param_1);
      _objc_release(uVar6);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar3);
      _objc_release(uVar7);
      _objc_release(uVar2);
      goto LAB_107b93d28;
    }
    if (param_6 == 0) goto LAB_107b93d28;
    pcVar8 = *(code **)(param_6 + 0x10);
    uVar7 = 0;
  }
  else {
    if (param_6 == 0) goto LAB_107b93d28;
    pcVar8 = *(code **)(param_6 + 0x10);
    uVar7 = param_3;
  }
  (*pcVar8)(param_6,0,uVar7);
LAB_107b93d28:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b93d8c; end: 107b93e03;  */

void FUN_107b93d8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf987e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bee47c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b93e04; end: 107b9417b; -[SCSnapDocConfigurer _fetchSnapDocContentManagerMediaResourcesForFullSnapDoc:completionQueue:completion:] */

void FUN_107b93e04(long param_1,undefined *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108f56dbc();
  _objc_release(lVar1);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)lVar2 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      if (param_5 != 0) {
        uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_70 = &PTR____CFConstantStringClassReference_110eb1318;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        param_2 = puVar6;
        (**(code **)(param_5 + 0x10))(param_5,puVar6,0);
        _objc_release(puVar6);
      }
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      lVar1 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_107b8dc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126bfc90;
      puVar6 = PTR_PTR_1126b1378;
      func_0x00010c0c46a0(lVar2);
      func_0x00010c119380(puVar5);
      FUN_107b8dd50();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c291560(puVar6);
      _objc_retainAutoreleasedReturnValue();
      param_2 = auStack_80;
      _objc_copyWeak(auStack_88,param_2);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      uVar4 = uVar3;
      func_0x00010c13edc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar1);
      _objc_release(uVar3);
      func_0x00010bdc62e0(param_1);
      _objc_release(uVar4);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_88);
      _objc_release(lVar2);
      _objc_destroyWeak(auStack_80);
    }
  }
  else if (param_5 != 0) {
    param_2 = (undefined *)0x0;
    (**(code **)(param_5 + 0x10))(param_5,0,param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  func_0x00010bfc5240(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_3 = param_3 + 0x38;
  _objc_loadWeakRetained(param_3);
  func_0x00010bee47c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b9417c; end: 107b941db;  */

void FUN_107b9417c(long param_1,undefined8 param_2)

{
  func_0x00010bfc5240(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee47c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b941dc; end: 107b9433f; -[SCSnapDocConfigurer _addCancellableRequest:snapDoc:] */

void FUN_107b941dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b94340; end: 107b94373;  */

void FUN_107b94340(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed4d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b94374; end: 107b943db; -[SCSnapDocConfigurer _updateCancellableRequest:forIdentifier:] */

void FUN_107b94374(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((param_3 != 0) && (lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b943dc; end: 107b94453; -[SCSnapDocConfigurer _cancelCancellableRequestForIdentifier:] */

void FUN_107b943dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c0e00e0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      func_0x00010bf2dba0(lVar1);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b94454; end: 107b9458b; -[SCSnapDocConfigurer _removeCancellableRequestForSnapDoc:] */

void FUN_107b94454(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107b9458c; end: 107b945bf;  */

void FUN_107b9458c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8b9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b945c0; end: 107b94603; -[SCSnapDocConfigurer _removeCancellableRequestForIdentifier:] */

void FUN_107b945c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b94604; end: 107b94803; -[SCSnapDocConfigurer _queryPlaybackMediaStatusForSnapDoc:isAsynchronous:completion:] */

void FUN_107b94604(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108f56dbc();
  _objc_release(uVar3);
  if ((int)uVar4 == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      if (param_5 == 0) goto LAB_107b94780;
      pcVar8 = *(code **)(param_5 + 0x10);
      bVar1 = false;
      goto LAB_107b94778;
    }
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_107b8dc40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (param_4 != 0) {
      _objc_retain(param_3);
      _objc_retain(param_5);
      func_0x00010c11d720(lVar5);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(lVar5);
      _objc_release(param_5);
      _objc_release(param_3);
      goto LAB_107b94780;
    }
    lVar7 = lVar5;
    func_0x00010c11d700(lVar5);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(lVar5);
    if (param_5 == 0) goto LAB_107b94780;
    bVar1 = lVar7 == 0;
    bVar2 = lVar7 == 2;
    pcVar8 = *(code **)(param_5 + 0x10);
  }
  else {
    if (param_5 == 0) goto LAB_107b94780;
    pcVar8 = *(code **)(param_5 + 0x10);
    bVar1 = true;
LAB_107b94778:
    bVar2 = false;
  }
  (*pcVar8)(param_5,param_3,bVar1,bVar2);
LAB_107b94780:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107b94804; end: 107b94833;  */

void FUN_107b94804(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107b9482c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),param_2 == 0,param_2 == 2);
    return;
  }
  return;
}



/* Entry: 107b94834; end: 107b94893; -[SCSnapDocConfigurer .cxx_destruct] */

void FUN_107b94834(long param_1)

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



/* Entry: 107b94894; end: 107b9494f; -[SCOperaChromePropertiesPlugin initWithNavigationStyle:userAccountCreationTimestamp:grapheneRegistry:circumstanceEngine:viewLocation:] */

undefined1 *
FUN_107b94894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fa120;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107b94950; end: 107b9495b; -[SCOperaChromePropertiesPlugin type] */

undefined ** FUN_107b94950(void)

{
  return &PTR____CFConstantStringClassReference_110eb1338;
}



/* Entry: 107b9495c; end: 107b94963; -[SCOperaChromePropertiesPlugin playlistDataSource] */

undefined8 FUN_107b9495c(void)

{
  return 0;
}



/* Entry: 107b94964; end: 107b94967; -[SCOperaChromePropertiesPlugin setExtraInfo:] */

void FUN_107b94964(void)

{
  return;
}



/* Entry: 107b94968; end: 107b9496b; -[SCOperaChromePropertiesPlugin addEventListenersWithEventAnnouncing:] */

void FUN_107b94968(void)

{
  return;
}



/* Entry: 107b9496c; end: 107b9496f; -[SCOperaChromePropertiesPlugin setPlaylistItemController:] */

void FUN_107b9496c(void)

{
  return;
}



/* Entry: 107b94970; end: 107b94973; -[SCOperaChromePropertiesPlugin extraPropertiesProvider] */

void FUN_107b94970(void)

{
  return;
}



/* Entry: 107b94974; end: 107b94abb; -[SCOperaChromePropertiesPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107b94974(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long in_x5;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x5);
  if (in_x5 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    if (*(long *)(param_1 + 8) == 1) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar1);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      (**(code **)(in_x5 + 0x10))(in_x5,0,0);
    }
    else {
      puVar2 = puVar1;
      func_0x00010bf51e00(puVar1);
      (**(code **)(in_x5 + 0x10))(in_x5,puVar2,0);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(in_x5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(in_x5 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(in_x5 + 0x10,0);
  return;
}



/* Entry: 107b94abc; end: 107b94aeb; -[SCOperaChromePropertiesPlugin .cxx_destruct] */

void FUN_107b94abc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107b94aec; end: 107b94b17; +[SCGrapheneSnapDocPlaybackMetric snapDocFirstFrame] */

void FUN_107b94aec(void)

{
  _objc_alloc(PTR_PTR_1126d6cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b94b18; end: 107b94b43; +[SCGrapheneSnapDocPlaybackMetric snapDocFirstFrameGen] */

void FUN_107b94b18(void)

{
  _objc_alloc(PTR_PTR_1126d6cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b94b44; end: 107b94b6f; +[SCGrapheneSnapDocPlaybackMetric subtitlesMissLanguage] */

void FUN_107b94b44(void)

{
  _objc_alloc(PTR_PTR_1126d6cc8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b94b70; end: 107b94c0f; -[SCGrapheneSnapDocPlaybackMetric description] */

void FUN_107b94b70(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb1358;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110eb1358,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fa128;
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



/* Entry: 107b94c10; end: 107b94d67; -[SCGrapheneRegistry snapDocPlaybackGraphene] */

void FUN_107b94c10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x107b94c98;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113727720 != -1) {
    func_0x00010002a2fc(0x113727720,&puStack_48);
  }
  uVar1 = uRam0000000113727718;
  _objc_retain(uRam0000000113727718);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b94d68; end: 107b94f17;  */

void FUN_107b94d68(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb13d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb13d8,
                      &PTR____CFConstantStringClassReference_110eb13f8,0);
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



/* Entry: 107b94f18; end: 107b94f63; +[SCWebBrowserLayer layerWithPage:] */

void FUN_107b94f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ca8b0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b94f64; end: 107b955d7; -[SCWebBrowserLayer initWithPage:] */

undefined1 * FUN_107b94f64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126fa130;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined8 *)((long)puVar2 + 0x18) = uVar3;
    _objc_release(uVar5);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0x20),param_3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 9) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 10) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 8) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined8 *)((long)puVar2 + 0x40) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined8 *)((long)puVar2 + 0x48) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined8 *)((long)puVar2 + 0x50) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xb) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined8 *)((long)puVar2 + 0x58) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xc) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x60);
    *(undefined8 *)((long)puVar2 + 0x60) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xd) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xe) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xf) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x68);
    *(undefined8 *)((long)puVar2 + 0x68) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x70);
    *(undefined8 *)((long)puVar2 + 0x70) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0x10) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x78);
    *(undefined8 *)((long)puVar2 + 0x78) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0x11) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0xb0);
    *(undefined8 *)((long)puVar2 + 0xb0) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x80);
    *(undefined8 *)((long)puVar2 + 0x80) = uVar3;
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0x13) = (char)uVar5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010bef5460(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x88);
    *(undefined8 *)((long)puVar2 + 0x88) = uVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010bef54c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x90);
    *(undefined8 *)((long)puVar2 + 0x90) = uVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010bef5420(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0x98);
    *(undefined8 *)((long)puVar2 + 0x98) = uVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126c9a78;
    func_0x00010bef53a0(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c067fc0();
    *(undefined8 *)((long)puVar2 + 0xa0) = uVar5;
    _objc_release(uVar3);
    _objc_release(puVar4);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0x14) = (char)uVar5;
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar2 + 0xa8);
    *(undefined8 *)((long)puVar2 + 0xa8) = uVar3;
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107b955d8; end: 107b955df; -[SCWebBrowserLayer type] */

undefined8 FUN_107b955d8(void)

{
  return 0x19;
}



/* Entry: 107b955e0; end: 107b95b2b; -[SCWebBrowserLayer isEqual:] */

bool FUN_107b955e0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
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
  undefined8 uVar19;
  int iVar20;
  undefined *puVar21;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar17 = PTR_PTR_1126ca8b0;
  _objc_opt_class();
  if (puVar3 != puVar17) {
    bVar2 = false;
    goto LAB_107b95a80;
  }
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_107b95a80;
  }
  _objc_retain(param_3);
  puVar17 = *(undefined **)(param_1 + 0x18);
  puVar3 = param_3;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar17);
  _objc_retain(puVar3);
  if (puVar17 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar17);
LAB_107b956bc:
    bVar1 = param_1[9];
    puVar17 = param_3;
    func_0x00010bf01400();
    if (((uint)bVar1 == (uint)puVar17) &&
       (bVar1 = param_1[8], puVar17 = param_3, func_0x00010bf6ae80(), (uint)bVar1 == (uint)puVar17))
    {
      puVar18 = *(undefined **)(param_1 + 0xa8);
      puVar17 = param_3;
      func_0x00010bef2500();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar18);
      _objc_retain(puVar17);
      if (puVar18 == puVar17) {
        _objc_release(puVar17);
        _objc_release(puVar18);
LAB_107b9575c:
        uVar19 = *(undefined8 *)(param_1 + 0x40);
        puVar18 = param_3;
        func_0x00010c0d2720(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar19,puVar18);
        if ((int)uVar19 == 0) goto LAB_107b95a1c;
        uVar19 = *(undefined8 *)(param_1 + 0x48);
        puVar4 = param_3;
        func_0x00010c0d2740(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar19,puVar4);
        if (((int)uVar19 == 0) ||
           (bVar1 = param_1[10], puVar5 = param_3, func_0x00010bf013c0(),
           (uint)bVar1 != (uint)puVar5)) {
          bVar2 = false;
        }
        else {
          uVar19 = *(undefined8 *)(param_1 + 0x28);
          puVar5 = param_3;
          func_0x00010c107700(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar19,puVar5);
          if ((int)uVar19 == 0) {
            bVar2 = false;
          }
          else {
            uVar19 = *(undefined8 *)(param_1 + 0x50);
            puVar6 = param_3;
            func_0x00010c2a3080(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bd86de8(uVar19,puVar6);
            if ((int)uVar19 == 0) {
              bVar2 = false;
            }
            else {
              uVar19 = *(undefined8 *)(param_1 + 0x58);
              puVar7 = param_3;
              func_0x00010befd3e0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86de8(uVar19,puVar7);
              if (((((int)uVar19 == 0) ||
                   (bVar1 = param_1[0xd], puVar8 = param_3, func_0x00010bf902a0(),
                   (uint)bVar1 != (uint)puVar8)) ||
                  (bVar1 = param_1[0xe], puVar8 = param_3, func_0x00010bf92560(),
                  (uint)bVar1 != (uint)puVar8)) ||
                 (bVar1 = param_1[0xf], puVar8 = param_3, func_0x00010bfdbe80(),
                 (uint)bVar1 != (uint)puVar8)) {
                bVar2 = false;
              }
              else {
                iVar20 = (int)*(undefined8 *)(param_1 + 0x68);
                puVar8 = param_3;
                func_0x00010bf9c380();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bd86de8();
                if (iVar20 == 0) {
                  bVar2 = false;
                }
                else {
                  iVar20 = (int)*(undefined8 *)(param_1 + 0x70);
                  puVar9 = param_3;
                  func_0x00010bf9c360();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010bd86de8();
                  if ((iVar20 == 0) ||
                     (bVar1 = param_1[0x10], puVar10 = param_3, func_0x00010bf92360(),
                     (uint)bVar1 != (uint)puVar10)) {
                    bVar2 = false;
                  }
                  else {
                    iVar20 = (int)*(undefined8 *)(param_1 + 0x78);
                    puVar10 = param_3;
                    func_0x00010c107740();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bd86de8();
                    if ((iVar20 == 0) ||
                       (bVar1 = param_1[0x11], puVar11 = param_3, func_0x00010bf91580(),
                       (uint)bVar1 != (uint)puVar11)) {
                      bVar2 = false;
                    }
                    else {
                      iVar20 = (int)*(undefined8 *)(param_1 + 0xb0);
                      puVar11 = param_3;
                      func_0x00010bf21880();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010bd86de8();
                      if (iVar20 == 0) {
                        bVar2 = false;
                      }
                      else {
                        iVar20 = (int)*(undefined8 *)(param_1 + 0x80);
                        puVar12 = param_3;
                        func_0x00010bf21600();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bd86de8();
                        if (iVar20 == 0) {
                          bVar2 = false;
                        }
                        else {
                          iVar20 = (int)*(undefined8 *)(param_1 + 0x88);
                          puVar13 = param_3;
                          func_0x00010bef47c0();
                          _objc_retainAutoreleasedReturnValue();
                          func_0x00010bd86de8();
                          if (iVar20 == 0) {
                            bVar2 = false;
                          }
                          else {
                            iVar20 = (int)*(undefined8 *)(param_1 + 0x90);
                            puVar14 = param_3;
                            func_0x00010bef60a0();
                            _objc_retainAutoreleasedReturnValue();
                            func_0x00010bd86de8();
                            if (iVar20 == 0) {
                              bVar2 = false;
                            }
                            else {
                              iVar20 = (int)*(undefined8 *)(param_1 + 0x98);
                              puVar15 = param_3;
                              func_0x00010bef4240();
                              _objc_retainAutoreleasedReturnValue();
                              func_0x00010bd86de8();
                              if (((iVar20 == 0) ||
                                  (puVar21 = *(undefined **)(param_1 + 0xa0), puVar16 = param_3,
                                  func_0x00010c2415a0(), puVar21 != puVar16)) ||
                                 (bVar1 = param_1[0x13], puVar16 = param_3, func_0x00010c07c020(),
                                 (uint)bVar1 != (uint)puVar16)) {
                                bVar2 = false;
                              }
                              else {
                                bVar1 = param_1[0x14];
                                puVar16 = param_3;
                                func_0x00010bf80ee0(param_3);
                                bVar2 = (uint)bVar1 == (uint)puVar16;
                              }
                              _objc_release(puVar15);
                            }
                            _objc_release(puVar14);
                          }
                          _objc_release(puVar13);
                        }
                        _objc_release(puVar12);
                      }
                      _objc_release(puVar11);
                    }
                    _objc_release(puVar10);
                  }
                  _objc_release(puVar9);
                }
                _objc_release(puVar8);
              }
              _objc_release(puVar7);
            }
            _objc_release(puVar6);
          }
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
      }
      else {
        if (puVar17 != (undefined *)0x0) {
          puVar4 = puVar18;
          func_0x00010c071ae0();
          _objc_release(puVar17);
          _objc_release(puVar18);
          if ((int)puVar4 == 0) goto LAB_107b9573c;
          goto LAB_107b9575c;
        }
LAB_107b95a1c:
        bVar2 = false;
      }
      _objc_release(puVar18);
      goto LAB_107b95a68;
    }
LAB_107b95744:
    bVar2 = false;
  }
  else {
    if (puVar3 != (undefined *)0x0) {
      puVar18 = puVar17;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      _objc_release(puVar17);
      if ((int)puVar18 != 0) goto LAB_107b956bc;
      goto LAB_107b95744;
    }
LAB_107b9573c:
    bVar2 = false;
LAB_107b95a68:
    _objc_release(puVar17);
  }
  _objc_release(puVar3);
  _objc_release(param_3);
LAB_107b95a80:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107b95b2c; end: 107b95b33; -[SCWebBrowserLayer url] */

undefined8 FUN_107b95b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107b95b34; end: 107b95b4b; -[SCWebBrowserLayer page] */

void FUN_107b95b34(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b95b4c; end: 107b95b57; -[SCWebBrowserLayer setPage:] */

void FUN_107b95b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 107b95b58; end: 107b95b5f; -[SCWebBrowserLayer delayLoadUntilScheduledToTakeOver] */

undefined1 FUN_107b95b58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107b95b60; end: 107b95b67; -[SCWebBrowserLayer allowPreloading] */

undefined1 FUN_107b95b60(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107b95b68; end: 107b95b6f; -[SCWebBrowserLayer allowPrefetching] */

undefined1 FUN_107b95b68(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107b95b70; end: 107b95b77; -[SCWebBrowserLayer prefetchHints] */

undefined8 FUN_107b95b70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107b95b78; end: 107b95b7f; -[SCWebBrowserLayer prefetchMode] */

undefined8 FUN_107b95b78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107b95b80; end: 107b95b87; -[SCWebBrowserLayer prefetchBaseUrl] */

undefined8 FUN_107b95b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107b95b88; end: 107b95b8f; -[SCWebBrowserLayer multiWebViewsCount] */

undefined8 FUN_107b95b88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107b95b90; end: 107b95b97; -[SCWebBrowserLayer multiWebViewsDefaultInteractiveIndex] */

undefined8 FUN_107b95b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107b95b98; end: 107b95b9f; -[SCWebBrowserLayer webBrowserConfig] */

undefined8 FUN_107b95b98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107b95ba0; end: 107b95ba7; -[SCWebBrowserLayer additionalScriptControllers] */

undefined8 FUN_107b95ba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107b95ba8; end: 107b95baf; -[SCWebBrowserLayer onlyAllowCloseButtonDismissal] */

undefined1 FUN_107b95ba8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107b95bb0; end: 107b95bb7; -[SCWebBrowserLayer enableSafariBrowserHideTray] */

undefined1 FUN_107b95bb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107b95bb8; end: 107b95bbf; -[SCWebBrowserLayer initialRedirectQueryItemsToRetain] */

undefined8 FUN_107b95bb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107b95bc0; end: 107b95bc7; -[SCWebBrowserLayer enableExternalBrowser] */

undefined1 FUN_107b95bc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107b95bc8; end: 107b95bcf; -[SCWebBrowserLayer enableWebViewDisplayFix] */

undefined1 FUN_107b95bc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107b95bd0; end: 107b95bd7; -[SCWebBrowserLayer hasServerRedirect] */

undefined1 FUN_107b95bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107b95bd8; end: 107b95bdf; -[SCWebBrowserLayer expectedServerRedirectResolvedUrlPrefix] */

undefined8 FUN_107b95bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107b95be0; end: 107b95be7; -[SCWebBrowserLayer expectedServerRedirectCount] */

undefined8 FUN_107b95be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107b95be8; end: 107b95bef; -[SCWebBrowserLayer enableUsePrefetchHintsPreLoadedWebView] */

undefined1 FUN_107b95be8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 107b95bf0; end: 107b95bf7; -[SCWebBrowserLayer enableRefreshPrefetchHintsLoad] */

undefined1 FUN_107b95bf0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107b95bf8; end: 107b95bff; -[SCWebBrowserLayer prefetchHintsId] */

undefined8 FUN_107b95bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107b95c00; end: 107b95c07; -[SCWebBrowserLayer browserClientId] */

undefined8 FUN_107b95c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107b95c08; end: 107b95c0f; -[SCWebBrowserLayer adRequestClientId] */

undefined8 FUN_107b95c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107b95c10; end: 107b95c17; -[SCWebBrowserLayer adType] */

undefined8 FUN_107b95c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107b95c18; end: 107b95c1f; -[SCWebBrowserLayer adProductType] */

undefined8 FUN_107b95c18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107b95c20; end: 107b95c27; -[SCWebBrowserLayer snapIndex] */

undefined8 FUN_107b95c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107b95c28; end: 107b95c2f; -[SCWebBrowserLayer enablePeeking] */

undefined1 FUN_107b95c28(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107b95c30; end: 107b95c37; -[SCWebBrowserLayer isRedirectEXB] */

undefined1 FUN_107b95c30(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107b95c38; end: 107b95c3f; -[SCWebBrowserLayer disallowPrivacyPrompt] */

undefined1 FUN_107b95c38(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 107b95c40; end: 107b95c47; -[SCWebBrowserLayer adConfig] */

undefined8 FUN_107b95c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107b95c48; end: 107b95c4f; -[SCWebBrowserLayer browserVCProvider] */

undefined8 FUN_107b95c48(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107b95c50; end: 107b95d47; -[SCWebBrowserLayer .cxx_destruct] */

void FUN_107b95c50(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
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
  _objc_destroyWeak(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107b95d48; end: 107b95dd7; -[SCWebBrowserLayerView initWithFrame:] */

undefined1 * FUN_107b95d48(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa138;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}


