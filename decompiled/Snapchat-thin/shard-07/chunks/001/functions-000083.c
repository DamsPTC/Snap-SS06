/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051897c8; end: 1051897d7; -[SCSnapKitIdentityWebViewAppAuthorizationState lastAuthorizedTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051897c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271e408);
}



/* Entry: 1051897d8; end: 1051897eb; -[SCSnapKitIdentityWebViewAppAuthorizationState .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051897d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e404,0);
  return;
}



/* Entry: 1051897ec; end: 105189877;  */

long FUN_1051897ec(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x00010bf07940();
  _objc_retainAutoreleasedReturnValue();
  *(long *)(param_2 + 8) = lVar1;
  func_0x00010c0883c0(param_3);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105189878; end: 1051898bb;  */

void FUN_105189878(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    _objc_alloc(PTR_PTR_1126b5800);
    func_0x00010bff39e0(*(undefined8 *)(param_1 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051898bc; end: 105189aa7; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider initWithNavigationServices:sendToScopeExposer:conversationDestinationParser:textSender:creativeKitWebDataLoader:urlPreviewProvider:simpleContentFetcher:resourceDownloader:] */

undefined1 *
FUN_1051898bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e6a08;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c0d6760();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_10;
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
  return (undefined1 *)puVar1;
}



/* Entry: 105189aa8; end: 105189b67; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider end] */

void FUN_105189aa8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105189b68;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bcbe2c4("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105189b68; end: 105189b93;  */

void FUN_105189b68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfb720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105189b94; end: 105189b9f; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _detachUI] */

void FUN_105189b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 105189ba0; end: 105189bc7; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider scanResultViewModels] */

void FUN_105189ba0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105189bc8; end: 105189d47; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider configureWithContext:] */

void FUN_105189bc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c08f320();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar1;
    _objc_release(uVar5);
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = param_3;
    _objc_release(uVar5);
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105189d48; end: 105189d8f;  */

void FUN_105189d48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be308e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105189d90; end: 105189eef; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _handleSnapcodeMetadata:] */

void FUN_105189d90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 0xb) {
    puVar2 = PTR_PTR_1126b5850;
    _objc_alloc();
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_58);
    lVar1 = lStack_58;
    _objc_release(lVar3);
    if ((lVar1 == 0) && (puVar2 != (undefined *)0x0)) {
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar5 = puVar2;
      func_0x00010bdc2b80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar4,param_2,puVar5);
      lVar1 = param_3;
      func_0x00010bfe5ec0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c294d60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c14f740(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09b360(param_1,param_2,puVar4,lVar3,lVar6);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105189ef0; end: 10518a043; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider loadDeeplinkData:decodedUuid:scannableId:] */

void FUN_105189ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b1068;
    _objc_alloc();
    func_0x00010c057c40();
    puVar3 = puVar2;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0720c0();
    if ((int)puVar4 != 0) {
      puVar4 = puVar2;
      func_0x00010c0f5820(puVar2,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0720c0();
      if ((int)puVar5 != 0) {
        puVar5 = puVar2;
        func_0x00010c0f5820(puVar2,param_2,2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c067fc0();
        _objc_release(puVar5);
        if (puVar6 == (undefined *)0x1) {
          func_0x00010c09b2e0(param_1,param_2,puVar2,param_4,param_5);
        }
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10518a044; end: 10518a247; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider loadDataForCreativeKitWebV1:decodedUuid:scannableId:] */

void FUN_10518a044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e552f8;
  func_0x00010c0b5ac0(&PTR____CFConstantStringClassReference_110e552f8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  _objc_release(uVar4);
  _objc_release(ppuVar1);
  _objc_release(uVar3);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010be03440(param_1);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar5);
    func_0x00010c09b320(uVar3);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518a248; end: 10518a33b;  */

void FUN_10518a248(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010be03440(param_1);
    }
    else {
      uVar1 = param_3;
      func_0x00010bf51e00(param_3);
      func_0x00010bf86420(param_1);
      _objc_release(uVar1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10518a33c; end: 10518a8d7; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider displaySnapcodeResult:attachmentSafeBrowsingURLType:attributionName:publisherBusinessId:showId:deepLinkURL:decodedUuid:scannableId:] */

void FUN_10518a33c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aebd8;
  lVar3 = param_3;
  func_0x00010bfe5b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar3 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar6);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10518a8d8;
  puStack_a0 = &UNK_11084d858;
  _objc_retain(puVar1);
  puStack_98 = puVar1;
  func_0x00010bf88c20(uVar5);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(uVar5);
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bedb0;
  ppuVar7 = &PTR____CFConstantStringClassReference_110dc9238;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9238,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_88 = ppuVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  _objc_initWeak(auStack_c0,param_1);
  puStack_100 = puVar8;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_10518a8e4;
  puStack_e8 = &UNK_110850cf8;
  puVar17 = auStack_c0;
  _objc_copyWeak(auStack_c8,puVar17);
  _objc_retain(param_3);
  lStack_e0 = param_3;
  _objc_retain(param_5);
  uStack_d8 = param_5;
  _objc_retain(param_8);
  ppuVar7 = &puStack_100;
  uStack_d0 = param_8;
  _objc_retainBlock();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_3;
  func_0x00010bf0ea80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126aef30;
  func_0x00010c25d9a0(PTR_PTR_1126aef30);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126aef38;
  _objc_alloc(PTR_PTR_1126aef38);
  puVar11 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar12 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  puVar13 = PTR_PTR_1126ae6b8;
  _objc_alloc_init(PTR_PTR_1126ae6b8);
  func_0x00010c0048e0(puVar10);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126aef40;
  _objc_alloc(PTR_PTR_1126aef40);
  lVar3 = param_3;
  func_0x00010c0f1dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020120(puVar11);
  _objc_release(lVar3);
  puVar12 = PTR_PTR_1126aef50;
  _objc_alloc(PTR_PTR_1126aef50);
  func_0x00010c05a5c0();
  puVar13 = PTR_PTR_1126aef48;
  func_0x00010c2453a0(PTR_PTR_1126aef48);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126aef58;
  _objc_alloc(PTR_PTR_1126aef58);
  puVar16 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b920(puVar15);
  _objc_release(puVar16);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50));
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar7);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(lStack_e0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar6);
  _objc_release(puStack_98);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_completeWithValue__1125ae900,puVar17);
  return;
}



/* Entry: 10518a8d8; end: 10518a8e3;  */

void FUN_10518a8d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 10518a8e4; end: 10518a9bf;  */

void FUN_10518a8e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10518a9c0;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10518a9c0; end: 10518a9f7;  */

void FUN_10518a9c0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7c5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518a9f8; end: 10518ab4f; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider didTapAttachToSnapActionWithAttachmentShareMetadata:attributionName:deepLinkURL:] */

void FUN_10518a9f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010beeee20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf6ad20(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518ab50; end: 10518ac2b;  */

void FUN_10518ab50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10518ac2c;
  puStack_58 = &UNK_110850cf8;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10518ac2c; end: 10518ac63;  */

void FUN_10518ac2c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd03e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518ac64; end: 10518ac67;  */

void FUN_10518ac64(void)

{
  return;
}



/* Entry: 10518ac68; end: 10518af87; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider handleAttachToSnapWithAttachmentShareMetadata:attributionName:deepLinkURL:] */

void FUN_10518ac68(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf05300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(ulong *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar5);
  uVar1 = param_3;
  func_0x00010c255240();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (uVar1 == 0) {
LAB_10518add4:
    uVar1 = param_3;
    func_0x00010c0f1dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar1 != 0) {
      uVar2 = param_3;
      func_0x00010c0f1dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078d80();
      if (((ulong)puVar3 & 1) == 0) {
        _objc_release(uVar2);
        _objc_release(uVar1);
      }
      else {
        uVar4 = param_3;
        func_0x00010c263dc0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((uVar4 & 1) == 0) {
          _objc_initWeak(auStack_58,param_1);
          uVar5 = 0;
          func_0x0001000819a8(0,0);
          _objc_retainAutoreleasedReturnValue();
          puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d0 = 0xc2000000;
          uStack_c8 = 0x10518afc0;
          puStack_c0 = &UNK_110850cf8;
          ppuVar6 = &puStack_d8;
          _objc_copyWeak(auStack_a0,auStack_58);
          _objc_retain(param_3);
          uStack_b8 = param_3;
          _objc_retain(param_4);
          uStack_b0 = param_4;
          _objc_retain(param_5);
          uStack_a8 = param_5;
          func_0x00010007380c(uVar5,&puStack_d8);
          _objc_release(uVar5);
          _objc_release(uStack_a8);
          _objc_release(uStack_b0);
          uVar1 = uStack_b8;
          goto LAB_10518aee0;
        }
      }
    }
    uVar1 = param_3;
    func_0x00010c11b1e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be62120(param_1);
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_3;
    func_0x00010c255240(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)puVar3 == 0) goto LAB_10518add4;
    _objc_initWeak(auStack_58,param_1);
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10518af88;
    puStack_80 = &UNK_110850cf8;
    ppuVar6 = &puStack_98;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uStack_78 = param_3;
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    func_0x00010007380c(uVar5,&puStack_98);
    _objc_release(uVar5);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    uVar1 = uStack_78;
LAB_10518aee0:
    _objc_release(uVar1);
    _objc_destroyWeak(ppuVar6 + 7);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518af88; end: 10518aff7;  */

void FUN_10518af88(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518aff8; end: 10518b203; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _handleAttachToSnapWithAttachmentShareMetadataForSticker:attributionName:deepLinkURL:] */

void FUN_10518aff8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    puVar2 = PTR_PTR_1126b5858;
    _objc_alloc(PTR_PTR_1126b5858);
    uVar3 = param_3;
    func_0x00010bf0ea80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fa644c1;
    func_0x00010b774c60(0x3fa644c1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3500(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c255240(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bfcab00(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518b204; end: 10518b2fb;  */

void FUN_10518b204(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10518b2fc;
  puStack_68 = &UNK_1108651a8;
  uStack_60 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 10518b2fc; end: 10518b3bb;  */

void FUN_10518b2fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(char *)(param_1 + 0x48) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11b1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11b1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
  }
  func_0x00010be62120(lVar1,param_2,uVar3,uVar4,uVar5,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10518b3bc; end: 10518b5af; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _handleAttachToSnapWithAttachmentShareMetadataForAutogeneratedSticker:attributionName:deepLinkURL:] */

void FUN_10518b3bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    puVar2 = PTR_PTR_1126b5858;
    _objc_alloc(PTR_PTR_1126b5858);
    uVar4 = param_3;
    func_0x00010bf0ea80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0xfffffffff0575f4d;
    func_0x00010b774c60(0xfffffffff0575f4d);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff3500(puVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010bfc2b00(uVar4);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar2);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518b5b0; end: 10518b6a7;  */

void FUN_10518b5b0(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10518b6a8;
  puStack_68 = &UNK_1108651a8;
  uStack_60 = param_3;
  uStack_38 = param_2;
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_40);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 10518b6a8; end: 10518b767;  */

void FUN_10518b6a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(char *)(param_1 + 0x48) == '\x01') && (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11b1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11b1e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
  }
  func_0x00010be62120(lVar1,param_2,uVar3,uVar4,uVar5,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10518b768; end: 10518b8cf; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider handleSendToChatWithAttachmentShareMetadata:] */

void FUN_10518b768(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b5860;
    _objc_alloc(PTR_PTR_1126b5860);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057cc0(puVar2,param_2,puVar3,*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x70));
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b1a18;
    _objc_alloc(PTR_PTR_1126b1a18);
    func_0x00010c048720();
    puVar4 = PTR_PTR_1126b1a20;
    _objc_alloc(PTR_PTR_1126b1a20);
    func_0x00010c01d640();
    puVar5 = PTR_PTR_1126b1a28;
    _objc_alloc();
    func_0x00010c038ea0();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar5;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b1a30;
    _objc_alloc(PTR_PTR_1126b1a30);
    func_0x00010bff5040();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10518b8d0; end: 10518baef; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _navigateToCameraWithSticker:attributionName:deepLinkURL:publisherId:] */

void FUN_10518b8d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdefb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204b60();
  if (param_3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x000108eca2ac();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b5868;
  _objc_alloc();
  uStack_b0 = 1;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  uStack_d0 = param_6;
  func_0x00010bff4d40();
  _objc_release(param_6);
  _objc_release(param_4);
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f83978;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f002d8;
  puStack_88 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f00358;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f00298;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 1;
  lVar10 = param_5;
  puVar11 = puVar4;
  func_0x00010c10d100();
  _objc_release(param_5);
  _objc_release(uVar5);
  func_0x00010be03440(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar12);
  _objc_release(lVar1);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_10518baf0;
  uStack_120 = uVar5;
  puStack_118 = puVar4;
  lStack_110 = lVar2;
  puStack_108 = puVar12;
  lStack_100 = param_5;
  lStack_f8 = lVar1;
  lStack_f0 = param_1;
  lStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  _objc_retain(lVar10);
  _objc_retain(puVar11);
  lVar1 = lVar10;
  func_0x000107e327dc(lVar10,lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x000108605534();
  lVar7 = lVar9;
  func_0x00010bf529e0();
  _objc_initWeak(auStack_128,lVar6);
  uVar8 = *(undefined8 *)(lVar6 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_138,auStack_128);
  puVar12 = puVar11;
  _objc_retain(puVar11);
  lStack_130 = lVar7 + lVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(puVar12);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_128);
  _objc_release(lVar1);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  return;
}



/* Entry: 10518baf0; end: 10518bc97; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _sendMessageToRecipients:groups:additionalText:] */

void FUN_10518baf0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x000107e327dc(param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x000108605534();
  lVar3 = param_3;
  func_0x00010bf529e0();
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  uVar6 = param_5;
  _objc_retain(param_5);
  lStack_60 = lVar3 + lVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518bc98; end: 10518bd6b;  */

void FUN_10518bc98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x0001086063f4(uVar3,*(undefined8 *)(param_1 + 0x30),0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f840(lVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10518bd6c; end: 10518bfff; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _sendMessageToSortedRecipients:additionalText:destinationInfo:] */

void FUN_10518bd6c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bdeaa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa660(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c2ab400(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010c15d840(uVar4);
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518c000; end: 10518c043;  */

void FUN_10518c000(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518c044; end: 10518c0cb; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _handleTextSendResult:conversationIds:] */

void FUN_10518c044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10518c0cc;
  puStack_38 = &UNK_110848c48;
  uStack_30 = param_4;
  uStack_28 = param_3;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_30);
  _objc_release(param_4);
  return;
}



/* Entry: 10518c0cc; end: 10518c1a7;  */

void FUN_10518c0cc(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  if (*(long *)(param_1 + 0x28) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbbb98;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc9278;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc9278,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10518c1a8; end: 10518c1db; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider legacySendToScopeDidDismiss:selectedItems:] */

void FUN_10518c1a8(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10518c1dc; end: 10518c2c7; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider legacySendToScopeWillSend:sendToSelection:] */

void FUN_10518c1dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bf6f440(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518c2c8; end: 10518c2fb;  */

void FUN_10518c2c8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd2a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518c2fc; end: 10518c3f3; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _didDetachUIWithSendToSelection:] */

void FUN_10518c2fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10518c3f4; end: 10518c427;  */

void FUN_10518c3f4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfd760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518c428; end: 10518c453; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _didEndFeatureWithSendToSelection:] */

void FUN_10518c428(long param_1)

{
  func_0x00010be9f860();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 10518c454; end: 10518c52b; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _sendMessageWithSendToSelection:] */

void FUN_10518c454(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(param_1 + 0x38);
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    lVar4 = lVar1;
    func_0x00010bf529e0();
    lVar5 = lVar2;
    func_0x00010bf529e0();
    if (lVar4 + lVar5 != 0) {
      func_0x00010be9f800(param_1,param_2,lVar1,lVar2,lVar3);
      goto LAB_10518c504;
    }
  }
  func_0x00010be02cc0(param_1);
LAB_10518c504:
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10518c52c; end: 10518c56b; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _dismissMatchaSendTo] */

void FUN_10518c52c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x18),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10518c56c; end: 10518c5a3; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _dismissScanScopeIfNeeded] */

void FUN_10518c56c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010beeee20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10518c5a4; end: 10518c5ff; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _createLoggingMetadata] */

void FUN_10518c5a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5870;
  _objc_alloc_init(PTR_PTR_1126b5870);
  func_0x00010c2049a0();
  func_0x00010c2049e0(puVar1,param_2,3);
  func_0x00010c204c00(puVar1,param_2,1);
  func_0x00010c204980(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10518c600; end: 10518c637; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider _createAnalyticsCreativeKit] */

void FUN_10518c600(void)

{
  _objc_alloc(PTR_PTR_1126b5878);
  func_0x00010bff3420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10518c638; end: 10518c703; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProvider .cxx_destruct] */

void FUN_10518c638(long param_1)

{
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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10518c704; end: 10518c91f; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518c704(long param_1,undefined8 param_2)

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
  undefined8 uVar15;
  
  puVar1 = PTR_PTR_1126b5880;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11271e448;
  _objc_loadWeakRetained();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11271e44c);
  lVar3 = param_1 + _DAT_11271e450;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf501a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271e454;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271e458;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf5adc0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271e45c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c28f860();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271e460;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_11271e464;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf89340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02eb00(puVar1,param_2,lVar2,uVar15,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14);
  uVar15 = *(undefined8 *)(param_1 + _DAT_11271e468);
  *(undefined **)(param_1 + _DAT_11271e468) = puVar1;
  _objc_release(uVar15);
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
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_11271e46c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518c920; end: 10518c98f; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518c920(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  plVar2 = alStack_40;
  lVar3 = (long)_DAT_11271e468;
  if (*(long *)(param_1 + lVar3) == 0) {
    plVar2 = alStack_30;
  }
  else {
    func_0x00010bf940a0();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126e6a10;
  _objc_msgSendSuper2(plVar2,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10518c990; end: 10518ca47; -[SCScanResultsSnapKitDeeplinkSnapcodeViewModelProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518c990(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e44c,0);
  _objc_destroyWeak(param_1 + _DAT_11271e460);
  _objc_destroyWeak(param_1 + _DAT_11271e45c);
  _objc_destroyWeak(param_1 + _DAT_11271e464);
  _objc_destroyWeak(param_1 + _DAT_11271e458);
  _objc_destroyWeak(param_1 + _DAT_11271e474);
  _objc_destroyWeak(param_1 + _DAT_11271e454);
  _objc_destroyWeak(param_1 + _DAT_11271e450);
  _objc_destroyWeak(param_1 + _DAT_11271e448);
  _objc_destroyWeak(param_1 + _DAT_11271e470);
  _objc_destroyWeak(param_1 + _DAT_11271e46c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e468,0);
  return;
}



/* Entry: 10518ca48; end: 10518cad7; -[SCSnapKitScanToAuthViewModelProvider initWithScopeExposer:] */

undefined1 * FUN_10518ca48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6a18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10518cad8; end: 10518cb33; -[SCSnapKitScanToAuthViewModelProvider end] */

void FUN_10518cad8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10518cb34; end: 10518cc93; -[SCSnapKitScanToAuthViewModelProvider configureWithContext:] */

void FUN_10518cb34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_58,param_1);
    lVar1 = param_3;
    func_0x00010c2450c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e0ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10518cc94; end: 10518cd07;  */

void FUN_10518cc94(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cfc40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be30940(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10518cd08; end: 10518cd13; -[SCSnapKitScanToAuthViewModelProvider scanResultViewModels] */

void FUN_10518cd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae6b8,PTR_s_empty_1125c1470);
  return;
}



/* Entry: 10518cd14; end: 10518cde3; -[SCSnapKitScanToAuthViewModelProvider _handleSnapcodeMetadata:uiContainer:] */

void FUN_10518cd14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c28ff20();
  if (lVar1 == 10) {
    puVar2 = PTR_PTR_1126b5888;
    _objc_alloc(PTR_PTR_1126b5888);
    lVar3 = param_3;
    func_0x00010c0f6420(param_3);
    _objc_retainAutoreleasedReturnValue();
    lStack_48 = 0;
    func_0x00010c008360(puVar2,param_2,lVar3,&lStack_48);
    lVar1 = lStack_48;
    _objc_release(lVar3);
    if (lVar1 == 0) {
      func_0x00010be7ce00(param_1,param_2,puVar2,param_4);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10518cde4; end: 10518cfe3; -[SCSnapKitScanToAuthViewModelProvider _presentOAuthFlow:uiContainer:] */

void FUN_10518cde4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b5890;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c124b40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c150b60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c252440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010bf3ec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfff040(puVar1,param_2,uVar2,puVar4,&PTR____CFConstantStringClassReference_110db9558,
                      uVar5,uVar7,uVar8,uVar9,0,&PTR____CFConstantStringClassReference_110dc9298,0,1
                     );
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b5898;
  _objc_alloc(PTR_PTR_1126b5898);
  func_0x00010c057060();
  _objc_release(param_4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10518cfe4; end: 10518cfe7; -[SCSnapKitScanToAuthViewModelProvider oAuth2PermissionPresenterWorkflowCompleted] */

void FUN_10518cfe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_end_1125c29d0);
  return;
}



/* Entry: 10518cfe8; end: 10518d017; -[SCSnapKitScanToAuthViewModelProvider .cxx_destruct] */

void FUN_10518cfe8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10518d018; end: 10518d0a3; -[SCSnapKitSnapcodeHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518d018(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b58a0;
  _objc_alloc();
  func_0x00010c041f80();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271e484);
  *(undefined **)(param_1 + _DAT_11271e484) = puVar1;
  _objc_release(uVar3);
  param_1 = param_1 + _DAT_11271e488;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d0a4; end: 10518d113; -[SCSnapKitSnapcodeHandlerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518d0a4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_40 [2];
  long alStack_30 [2];
  
  plVar2 = alStack_40;
  lVar3 = (long)_DAT_11271e484;
  if (*(long *)(param_1 + lVar3) == 0) {
    plVar2 = alStack_30;
  }
  else {
    func_0x00010bf940a0();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  *plVar2 = param_1;
  plVar2[1] = (long)PTR_PTR_1126e6a20;
  _objc_msgSendSuper2(plVar2,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10518d114; end: 10518d16b; -[SCSnapKitSnapcodeHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518d114(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e480,0);
  _objc_destroyWeak(param_1 + _DAT_11271e488);
  _objc_destroyWeak(param_1 + _DAT_11271e48c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e484,0);
  return;
}



/* Entry: 10518d16c; end: 10518d24b; -[SCStoryShareOperaPresenterDelegate initWithPlaybackScope:operaSessionScopeExposer:] */

undefined1 *
FUN_10518d16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6a28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf6b020(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0eadc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),uVar2);
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10518d24c; end: 10518d2b3; -[SCStoryShareOperaPresenterDelegate operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_10518d24c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb020();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d2b4; end: 10518d31b; -[SCStoryShareOperaPresenterDelegate operaPresenterDidFinishPresenting:transitionAnimator:] */

void FUN_10518d2b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eae80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d31c; end: 10518d383; -[SCStoryShareOperaPresenterDelegate operaPresenterWillBeginDismissing:transitionAnimator:] */

void FUN_10518d31c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb000();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d384; end: 10518d3cb; -[SCStoryShareOperaPresenterDelegate operaPresenterDidCancelDismissing:] */

void FUN_10518d384(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eade0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d3cc; end: 10518d413; -[SCStoryShareOperaPresenterDelegate operaPresenterWillBeginAnimatingToDismiss:] */

void FUN_10518d3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eafe0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d414; end: 10518d45b; -[SCStoryShareOperaPresenterDelegate operaPresenterDidFailToPresent:] */

void FUN_10518d414(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eae40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d45c; end: 10518d4a3; -[SCStoryShareOperaPresenterDelegate operaPresenterDidFinishDismissing:] */

void FUN_10518d45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eae60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d4a4; end: 10518d53b; -[SCStoryShareOperaPresenterDelegate operaPresenterDidTearDown:] */

void FUN_10518d4a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf376e0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0eaf20();
  _objc_release(param_3);
  _objc_release(lVar1);
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



/* Entry: 10518d53c; end: 10518d5bf; -[SCStoryShareOperaPresenterDelegate operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_10518d53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf37700();
  _objc_release(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0ead60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d5c0; end: 10518d63f; -[SCStoryShareOperaPresenterDelegate operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:] */

void FUN_10518d5c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0ead80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10518d640; end: 10518d673; -[SCStoryShareOperaPresenterDelegate .cxx_destruct] */

void FUN_10518d640(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10518d674; end: 10518d907; -[SCStorySharePlaybackEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518d674(long param_1,undefined8 param_2)

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
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined4 in_stack_ffffffffffffff60;
  ushort uVar15;
  
  uVar15 = (ushort)((uint)in_stack_ffffffffffffff60 >> 0x10);
  puVar1 = PTR_PTR_1126b58a8;
  _objc_alloc();
  lVar14 = (long)_DAT_11271e49c;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar2);
  lVar11 = (long)_DAT_11271e4a0;
  func_0x00010c036e40(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + lVar11));
  lVar13 = (long)_DAT_11271e4a4;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar1;
  _objc_release(uVar12);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0ea680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c1012c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c09d3c0();
  _objc_release(lVar2);
  if (lVar4 == 0) {
    lVar2 = lVar3;
    func_0x00010c1012c0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa9500();
    _objc_release(lVar2);
  }
  puVar1 = PTR_PTR_1126b2400;
  _objc_alloc();
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c27aa00();
  func_0x00010c018aa0(0,puVar1,param_2,0,0,0,0,0,lVar4,(ulong)(uVar15 & 0xff00) << 0x10);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_11271e4a8;
  _objc_loadWeakRetained();
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0eb360();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c247e40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar13 = lVar14;
  func_0x00010c1016c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010bf23920(lVar2,param_2,lVar5,lVar7,lVar9,lVar3,puVar1,uVar12,lVar13,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar14);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar11),param_2,lVar10);
  _objc_release(lVar10);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10518d908; end: 10518d98b; -[SCStorySharePlaybackEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518d908(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11271e4a0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puStack_38 = PTR_PTR_1126e6a30;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10518d98c; end: 10518d9e3; -[SCStorySharePlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518d98c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271e4a0,0);
  _objc_destroyWeak(param_1 + _DAT_11271e4a8);
  _objc_destroyWeak(param_1 + _DAT_11271e49c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e4a4,0);
  return;
}



/* Entry: 10518d9e4; end: 10518da4b; +[SCCTPGetRequest descriptor] */

void FUN_10518d9e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b94b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a1e810,
                        &PTR____CFConstantStringClassReference_110dc92b8,
                        &PTR_s_snapchat_creativetools_ct_item_c_1130c66f0,
                        &PTR_s_ctidsArray_1130c6768,2,0x18,0x1c);
    puRam00000001136b94b8 = puVar1;
  }
  return;
}



/* Entry: 10518da4c; end: 10518dab3; +[SCCTPGetResponse descriptor] */

void FUN_10518da4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b94c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a1e860,
                        &PTR____CFConstantStringClassReference_110dc92d8,
                        &PTR_s_snapchat_creativetools_ct_item_c_1130c66f0,
                        &PTR_s_itemsArray_1130c6708,1,0x10,0x1c);
    puRam00000001136b94c0 = puVar1;
  }
  return;
}



/* Entry: 10518dab4; end: 10518db1b; +[SCCTPPutRequest descriptor] */

void FUN_10518dab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b94c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a1e8b0,
                        &PTR____CFConstantStringClassReference_110dc92f8,
                        &PTR_s_snapchat_creativetools_ct_item_c_1130c66f0,
                        &PTR_s_itemsArray_1130c6728,1,0x10,0x1c);
    puRam00000001136b94c8 = puVar1;
  }
  return;
}



/* Entry: 10518db1c; end: 10518dbff; +[SCCTPPutResponse descriptor] */

void FUN_10518db1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b94d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a1e900,
                        &PTR____CFConstantStringClassReference_110dc9318,
                        &PTR_s_snapchat_creativetools_ct_item_c_1130c66f0,
                        &PTR_s_itemsArray_1130c6748,1,0x10,0x1c);
    puRam00000001136b94d0 = puVar1;
  }
  return;
}



/* Entry: 10518dc00; end: 10518dc0b;  */

bool FUN_10518dc00(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10518dc0c; end: 10518dcaf; -[SCTemplateExplorerScope initWithUIContainer:delegate:viewSourceType:] */

undefined1 *
FUN_10518dc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6a38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10518dcb0; end: 10518dcb7; -[SCTemplateExplorerScope uiContainer] */

undefined8 FUN_10518dcb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10518dcb8; end: 10518dccf; -[SCTemplateExplorerScope delegate] */

void FUN_10518dcb8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10518dcd0; end: 10518dcd7; -[SCTemplateExplorerScope viewSourceType] */

undefined4 FUN_10518dcd0(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10518dcd8; end: 10518dd03; -[SCTemplateExplorerScope .cxx_destruct] */

void FUN_10518dcd8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10518dd04; end: 10518ddab;  */

void FUN_10518dd04(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc9358;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc9358,
                      &PTR____CFConstantStringClassReference_110dc9378,0);
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



/* Entry: 10518ddac; end: 10518de13; +[SCCTPTemplateGetTemplatesRequest descriptor] */

void FUN_10518ddac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b94e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a1ea40,
                        &PTR____CFConstantStringClassReference_110dc9458,
                        &PTR_s_snapchat_creativetools_template_1130c67a8,&PTR_s_ctidsArray_1130c67e0
                        ,2,0x18,0x1c);
    puRam00000001136b94e0 = puVar1;
  }
  return;
}



/* Entry: 10518de14; end: 10518de7b; +[SCCTPTemplateGetTemplatesResponse descriptor] */

void FUN_10518de14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136b94e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a1ea90,
                        &PTR____CFConstantStringClassReference_110dc9478,
                        &PTR_s_snapchat_creativetools_template_1130c67a8,
                        &PTR_s_ctitemsArray_1130c67c0,1,0x10,0x1c);
    puRam00000001136b94e8 = puVar1;
  }
  return;
}



/* Entry: 10518de7c; end: 10518e28f; -[SCVoiceMLLensPresenterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518de7c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = param_1 + _DAT_11271e4e8;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar26;
  func_0x00010c096100();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c090680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe9cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar26);
  puVar5 = PTR_PTR_1126b58b0;
  _objc_alloc();
  lVar26 = param_1 + _DAT_11271e4c0;
  _objc_loadWeakRetained();
  lVar6 = lVar26;
  func_0x00010bfa1d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271e4c4;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271e4c8;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11271e4cc;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c2a0760();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11271e4b8;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c2a08e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271e4d0;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c2a0900();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271e4d4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfedc00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = (long)_DAT_11271e4d8;
  lVar18 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf68800();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c095480();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar22 = lVar27;
  func_0x00010c0e8040();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271e4dc;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011a40();
  lVar28 = (long)_DAT_11271e4e0;
  uVar25 = *(undefined8 *)(param_1 + lVar28);
  *(undefined **)(param_1 + lVar28) = puVar5;
  _objc_release(uVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar27);
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
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar26);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar28));
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  return;
}



/* Entry: 10518e290; end: 10518e357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518e290(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar4 = (long)_DAT_11271e4bc;
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfe7720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar3 = lVar4;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdf5b00(param_1,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10518e358; end: 10518e35f;  */

void FUN_10518e358(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf778f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_didLoadEffectObservable_1125bb7e0);
  return;
}



/* Entry: 10518e360; end: 10518e3b7; -[SCVoiceMLLensPresenterEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518e360(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf940a0(*(undefined8 *)(param_1 + _DAT_11271e4e0));
  puStack_28 = PTR_PTR_1126e6a40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10518e3b8; end: 10518e423; -[SCVoiceMLLensPresenterEntryPoint _createVoiceMLBitmojiFetcherWithBitmojiImageFetcher:bitmojiAvatarProvider:] */

void FUN_10518e3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b58b8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff80a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10518e424; end: 10518e4e3; -[SCVoiceMLLensPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10518e424(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271e4d4);
  _objc_destroyWeak(param_1 + _DAT_11271e4c8);
  _objc_destroyWeak(param_1 + _DAT_11271e4bc);
  _objc_destroyWeak(param_1 + _DAT_11271e4dc);
  _objc_destroyWeak(param_1 + _DAT_11271e4cc);
  _objc_destroyWeak(param_1 + _DAT_11271e4d0);
  _objc_destroyWeak(param_1 + _DAT_11271e4b8);
  _objc_destroyWeak(param_1 + _DAT_11271e4d8);
  _objc_destroyWeak(param_1 + _DAT_11271e4e8);
  _objc_destroyWeak(param_1 + _DAT_11271e4c4);
  _objc_destroyWeak(param_1 + _DAT_11271e4e4);
  _objc_destroyWeak(param_1 + _DAT_11271e4c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271e4e0,0);
  return;
}


