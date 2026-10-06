/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000597d8; end: 10005984b; -[SCNSEGroupBitmojiInfoLoader initWithUserScopedPlistStorage:] */

undefined1 * FUN_1000597d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2698;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005984c; end: 100059c63; -[SCNSEGroupBitmojiInfoLoader loadGroupBitmojiInfo:senderUserId:senderBitmojiDownloadUrl:] */

undefined **
FUN_10005984c(long param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_1000d2260;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSURL_1000d2020;
  _objc_alloc(PTR__OBJC_CLASS___NSURL_1000d2020);
  func_0x000100070c40();
  func_0x000100070e20();
  _objc_release(puVar3);
  uVar4 = *(ulong *)(param_1 + 8);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 != 0) {
    param_2 = (undefined **)PTR__OBJC_CLASS___NSData_1000d1e40;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1000d1e40);
    uVar4 = uVar5;
    _objc_opt_isKindOfClass(uVar5,param_2);
    if ((uVar4 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
      _objc_alloc();
      func_0x00010006ffa0();
      func_0x000100073560();
      puVar6 = puVar3;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_100059c64;
      puStack_110 = &UNK_1000a3270;
      _objc_retain(param_3);
      param_2 = &puStack_128;
      puVar7 = puVar6;
      uStack_108 = param_3;
      _SCFilterArray(puVar6,param_2);
      puVar8 = puVar7;
      func_0x00010006f540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      if (puVar8 == (undefined *)0x0) {
        ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1000d1d38;
        puStack_80 = puVar2;
        func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = puVar8;
        func_0x00010006e1e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x000100071be0();
        _objc_retain(puVar9);
        puVar7 = puVar9;
        func_0x00010006e860();
        lVar1 = lRam0000000000000000;
        while (puVar14 = puVar2, puVar7 != (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar9);
            }
            puVar14 = *(undefined **)((long)puVar15 * 8);
            puVar11 = puVar14;
            func_0x0001000745e0();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x000100071100();
            _objc_release(puVar11);
            if ((int)puVar12 != 0) {
              _objc_retain(puVar14);
              _objc_release(puVar2);
              func_0x000100072600(puVar10);
              goto LAB_100059b38;
            }
            puVar15 = puVar15 + 1;
          } while (puVar7 != puVar15);
          puVar7 = puVar9;
          func_0x00010006e860();
        }
LAB_100059b38:
        _objc_release(puVar9);
        ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
        func_0x00010006de00(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006e840();
        puVar2 = puVar10;
        func_0x000100073f60(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006db00(ppuVar13);
        _objc_release(puVar2);
        _objc_release(puVar10);
        _objc_release(puVar9);
        puVar2 = puVar14;
      }
      _objc_release(puVar8);
      _objc_release(uStack_108);
      _objc_release(puVar6);
      _objc_release(puVar3);
      goto LAB_100059bfc;
    }
  }
  ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1000d1d38;
  puStack_78 = puVar2;
  func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
  _objc_retainAutoreleasedReturnValue();
LAB_100059bfc:
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar13);
    return ppuVar13;
  }
  ___stack_chk_fail();
  func_0x00010006f960(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_2;
  func_0x000100071100();
  _objc_release(param_2);
  return ppuVar13;
}



/* Entry: 100059c64; end: 100059cab;  */

undefined8 FUN_100059c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010006f960(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100071100();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 100059cac; end: 100059cb7; -[SCNSEGroupBitmojiInfoLoader .cxx_destruct] */

void FUN_100059cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100059cb8; end: 100059e3f; -[SCNSEImageLoader initWithProcessingScope:notificationType:] */

undefined8
FUN_100059cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___SCNotifExtAttachmentCache_1000d2268;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070de0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1000d2270;
  _objc_alloc(PTR_PTR_1000d2270);
  func_0x0001000707c0();
  puVar5 = PTR_PTR_1000d2278;
  _objc_alloc(PTR_PTR_1000d2278);
  uVar2 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070480(puVar5,param_2,uVar2,param_4);
  _objc_release(param_4);
  _objc_release(uVar2);
  puVar6 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000739c0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010006e160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100070600(param_1,param_2,puVar6,puVar1,20000,puVar5,uVar2,puVar4);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100059e40; end: 100059f73; -[SCNSEImageLoader initWithNetworkingApiClient:cache:mediaDownloadTimeoutMs:grapheneLogger:bitmojiConfigs:groupBitmojiInfoLoader:] */

undefined1 *
FUN_100059e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1000d26a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100059f74; end: 100059f87; -[SCNSEImageLoader loadImageFromUrl:encryptionKey:encryptionIv:] */

void FUN_100059f74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)PTR__CGSizeZero_1000a02c8,*(undefined8 *)(PTR__CGSizeZero_1000a02c8 + 8)
             ,param_1,PTR_s__loadImageFromUrl_encryptionKey__1000cfa80);
  return;
}



/* Entry: 100059f88; end: 100059f8f; -[SCNSEImageLoader loadImageFromUrl:encryptionKey:encryptionIv:maxOutputSize:] */

void FUN_100059f88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)(param_1,PTR_s__loadImageFromUrl_encryptionKey__1000cfa80);
  return;
}



/* Entry: 100059f90; end: 100059f97; -[SCNSEImageLoader loadImageDataFromUrl:encryptionKey:encryptionIv:] */

void FUN_100059f90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006ca10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)(param_1,PTR_s__loadImageDataFromUrl_encryption_1000cfa78);
  return;
}



/* Entry: 100059f98; end: 10005a00b; -[SCNSEImageLoader loadUserBitmoji:directDownloadUrl:] */

void FUN_100059f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000661a8(param_4,*(undefined8 *)(param_1 + 0x28),0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006ca20(*(undefined8 *)PTR__CGSizeZero_1000a02c8,
                      *(undefined8 *)(PTR__CGSizeZero_1000a02c8 + 8),param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(param_1);
  return;
}



/* Entry: 10005a00c; end: 10005a127; -[SCNSEImageLoader loadGroupBitmojiWithConversationId:senderUserId:senderDirectDownloadUrl:] */

void FUN_10005a00c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___SCPromise_1000d1d78;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x000100071400(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10005a128;
  puStack_50 = &UNK_1000a30d0;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  func_0x0001000746e0(param_1,param_2,&puStack_68,0);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010006f600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10005a128; end: 10005a1ef;  */

void FUN_10005a128(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010006fde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (lVar1 == 0) {
    if (param_3 != 0) {
      func_0x00010006e5a0(uVar2);
      goto LAB_10005a1b0;
    }
    lVar1 = 1;
    FUN_10005afb0(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006e5a0(uVar2);
  }
  else {
    lVar1 = param_2;
    func_0x00010006fde0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006e5c0(uVar2);
  }
  _objc_release(lVar1);
LAB_10005a1b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 10005a1f0; end: 10005a55b; -[SCNSEImageLoader loadGroupBitmojiImageWithConversationId:senderUserId:senderDirectDownloadUrl:] */

void FUN_10005a1f0(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x000100071620(*(undefined8 *)(param_2 + 0x20));
  lVar9 = param_4;
  func_0x0001000713a0();
  puVar7 = PTR__OBJC_CLASS___SCFuture_1000d21f8;
  if (lVar9 == 0) {
    ppuVar1 = (undefined **)0x2;
    FUN_10005afb0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010006fe80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = *(undefined ***)(param_2 + 0x30);
    func_0x000100071420();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071660(param_1,*(undefined8 *)(param_2 + 0x20));
    ppuVar2 = ppuVar1;
    func_0x00010006e840();
    puVar7 = PTR__OBJC_CLASS___SCFuture_1000d21f8;
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x1;
      FUN_10005afb0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar8;
      func_0x00010006fe80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar8);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
      _objc_opt_new();
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      _objc_retain(ppuVar1);
      ppuVar2 = ppuVar1;
      func_0x00010006e860();
      if (ppuVar2 != (undefined **)0x0) {
        lVar9 = *plStack_130;
        do {
          ppuVar8 = (undefined **)0x0;
          do {
            if (*plStack_130 != lVar9) {
              _objc_enumerationMutation(ppuVar1);
            }
            uVar12 = *(undefined8 *)(lStack_138 + (long)ppuVar8 * 8);
            uVar10 = uVar12;
            func_0x0001000745e0(uVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010006e1a0();
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar12;
            func_0x00010006d980();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = param_2;
            func_0x00010006ca40(param_2);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar11);
            _objc_release(uVar12);
            _objc_release(uVar10);
            func_0x00010006dae0(puVar3);
            _objc_release(lVar4);
            ppuVar8 = (undefined **)((long)ppuVar8 + 1);
          } while (ppuVar2 != ppuVar8);
          ppuVar2 = ppuVar1;
          func_0x00010006e860();
        } while (ppuVar2 != (undefined **)0x0);
      }
      _objc_release(ppuVar1);
      puVar5 = PTR__OBJC_CLASS___SCFuture_1000d21f8;
      func_0x00010006dbc0(PTR__OBJC_CLASS___SCFuture_1000d21f8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___SCPromise_1000d1d78;
      _objc_opt_new();
      puStack_178 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_10005a55c;
      puStack_160 = &UNK_1000a32d0;
      puStack_158 = puVar6;
      lStack_150 = param_2;
      uStack_148 = param_1;
      _objc_retain();
      ppuVar2 = &puStack_178;
      func_0x0001000746e0(puVar5);
      puVar7 = puVar6;
      func_0x00010006f600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_158);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release(ppuVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(ppuVar2);
    if ((ppuVar2 == (undefined **)0x0) && (lVar9 = param_3, func_0x00010006e840(), lVar9 != 0)) {
      lVar9 = param_3;
      FUN_1000667e4();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100071640(*(undefined8 *)(param_4 + 0x30),
                          *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x20));
      lVar4 = param_3;
      func_0x00010006f540(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *(undefined8 *)(param_4 + 0x20);
      _objc_retain(uVar11);
      _objc_retain(lVar9);
      uVar10 = *(undefined8 *)(param_4 + 0x20);
      _objc_retain(uVar10);
      _objc_retain(lVar9);
      func_0x000100071940(lVar4);
      _objc_release(lVar4);
      _objc_release(lVar9);
      _objc_release(uVar10);
      _objc_release(lVar9);
      _objc_release(uVar11);
    }
    else {
      uVar10 = *(undefined8 *)(param_4 + 0x20);
      lVar9 = 1;
      FUN_10005afb0(1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006e5a0(uVar10);
    }
    _objc_release(lVar9);
    _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar7);
  return;
}



/* Entry: 10005a55c; end: 10005a6e7;  */

void FUN_10005a55c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) && (lVar1 = param_2, func_0x00010006e840(), lVar1 != 0)) {
    lVar1 = param_2;
    FUN_1000667e4();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071640(*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
    lVar2 = param_2;
    func_0x00010006f540(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    _objc_retain(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(lVar1);
    func_0x000100071940(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = 1;
    FUN_10005afb0(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006e5a0(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 10005a6e8; end: 10005a77f;  */

void FUN_10005a6e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1000d2280;
  _objc_alloc(PTR_PTR_1000d2280);
  func_0x0001000704e0();
  func_0x00010006e5c0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 10005a780; end: 10005a863; -[SCNSEImageLoader _loadImageFromUrl:encryptionKey:encryptionIv:imageType:maxOutputSize:] */

void FUN_10005a780(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  double dStack_58;
  double dStack_50;
  undefined1 uStack_48;
  
  func_0x00010006ca00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCPromise_1000d1d78;
  _objc_opt_new();
  puStack_80 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10005a864;
  puStack_68 = &UNK_1000a3300;
  puStack_60 = puVar1;
  dStack_58 = param_1;
  dStack_50 = param_2;
  uStack_48 = 0.0 < param_2 && 0.0 < param_1;
  _objc_retain();
  func_0x0001000746e0(param_3,param_4,&puStack_80,0);
  puVar2 = puVar1;
  func_0x00010006f600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_60);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10005a864; end: 10005a91b;  */

void FUN_10005a864(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010006e5a0(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImage_1000d1f40;
    if (*(char *)(param_1 + 0x38) == '\x01') {
      func_0x000100072840(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                          0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000100072820(PTR__OBJC_CLASS___UIImage_1000d1f40);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010006e5c0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 10005a91c; end: 10005abd3; -[SCNSEImageLoader _loadImageDataFromUrl:encryptionKey:encryptionIv:imageType:] */

void FUN_10005a91c(undefined8 param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x000100071680(*(undefined8 *)(param_2 + 0x20));
  puVar1 = param_4;
  func_0x0001000713a0();
  if (puVar1 == (undefined *)0x0) {
    FUN_10005afb0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000716a0(*(undefined8 *)(param_2 + 0x20));
    puVar3 = PTR__OBJC_CLASS___SCFuture_1000d21f8;
    func_0x00010006fe80(PTR__OBJC_CLASS___SCFuture_1000d21f8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x00010006bf00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x000100073de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x000100072040();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___SCPromise_1000d1d78;
      _objc_opt_new();
      uVar5 = *(undefined8 *)(param_2 + 8);
      if (lRam00000001000e9e88 != -1) {
        _dispatch_once(0x1000e9e88,&PTR___NSConcreteGlobalBlock_1000a3390);
      }
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_retain(param_6);
      _objc_retain(puVar1);
      _objc_retain(puVar4);
      func_0x0001000718a0(uVar5);
      puVar3 = puVar4;
      func_0x00010006f600(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(param_6);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(puVar4);
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x0001000713a0(lVar2);
      func_0x0001000716c0(param_1,uVar5);
      puVar3 = PTR__OBJC_CLASS___SCFuture_1000d21f8;
      func_0x00010006fea0(PTR__OBJC_CLASS___SCFuture_1000d21f8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 10005abd4; end: 10005acf3;  */

void FUN_10005abd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000711e0();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  if ((int)puVar1 == 0) {
    func_0x0001000716a0(uVar3);
    func_0x00010006e5a0(*(undefined8 *)(param_1 + 0x48));
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    func_0x0001000713a0(param_3);
    func_0x0001000716c0(uVar4,uVar3);
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x0001000713a0();
    uVar3 = param_3;
    if (lVar2 != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      func_0x0001000713a0();
      if (lVar2 != 0) {
        func_0x0001000728e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
      }
    }
    func_0x000100073380(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    func_0x00010006e5c0(*(undefined8 *)(param_1 + 0x48));
    param_3 = uVar3;
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10005acf4; end: 10005ae87; -[SCNSEImageLoader _loadUserBitmojiOrSilhouetteForUserId:bitmojiDownloadUrl:] */

void FUN_10005acf4(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x0001000713a0();
  puVar4 = PTR_PTR_1000d2288;
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1000d2290;
    func_0x0001000713e0(PTR__OBJC_CLASS___UIColor_1000d2290);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
    _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073b00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___SCFuture_1000d21f8;
    func_0x00010006fea0(PTR__OBJC_CLASS___SCFuture_1000d21f8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___SCPromise_1000d1d78;
    _objc_opt_new();
    func_0x0001000714a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    func_0x0001000746e0(param_1);
    puVar2 = puVar4;
    func_0x00010006f600(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar4 = param_1;
  }
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10005ae88; end: 10005af43;  */

void FUN_10005ae88(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1000d2288;
  if ((param_2 == 0) || (param_3 != 0)) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1000d2290;
    func_0x0001000713e0(PTR__OBJC_CLASS___UIColor_1000d2290);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 1;
    _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073b00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x00010006e300(PTR_PTR_1000d2288,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010006e5c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar3);
  return;
}



/* Entry: 10005af44; end: 10005af97; -[SCNSEImageLoader .cxx_destruct] */

void FUN_10005af44(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005af98; end: 10005afaf;  */

void FUN_10005af98(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam00000001000e9e80;
  ppuRam00000001000e9e80 = &PTR__OBJC_CLASS___NSConstantDictionary_1000ac038;
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar1);
  return;
}



/* Entry: 10005afb0; end: 10005afeb;  */

void FUN_10005afb0(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSError_1000d21a8);
  func_0x0001000702a0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10005afec; end: 10005b0a3; -[SCNSEImageLoaderGraphene initWithGrapheneLogger:notificationType:] */

undefined1 *
FUN_10005afec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d26a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    if (param_4 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_1000a41c8;
    }
    else {
      ppuVar3 = param_4;
      func_0x00010006e800();
    }
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = ppuVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005b0a4; end: 10005b1af; -[SCNSEImageLoaderGraphene logImageLoadAttempt:] */

void FUN_10005b0a4(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a98e8;
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9908;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar7 = puVar2;
  func_0x000100070720();
  puVar4 = puVar3;
  func_0x00010006ff00(*(undefined8 *)(param_2 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a98e8;
  if (puVar4 != (undefined *)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9908;
  }
  dVar11 = param_1;
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 8));
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar10 = *(undefined8 *)(puVar2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  dVar11 = param_1 * -1000.0 + dVar11 * 1000.0;
  func_0x00010006db80(uVar10);
  puVar6 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar8 = puVar6;
  func_0x00010006da60(*(undefined8 *)(puVar2 + 8));
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a98e8;
  if (puVar7 != (undefined *)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9908;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = puVar2;
  func_0x000100071be0();
  _objc_release(puVar2);
  if (puVar8 != (undefined *)0x0) {
    puVar2 = puVar8;
    func_0x00010006ef00(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x00010006e500(puVar8);
    func_0x000100071f60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x000100073ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar3 + 8));
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar8 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar12 = dVar11;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 8));
  puVar7 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar10 = *(undefined8 *)(puVar2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  dVar11 = dVar11 * -1000.0 + dVar12 * 1000.0;
  func_0x00010006db80(dVar11,uVar10);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar12 = dVar11;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  uVar10 = *(undefined8 *)(puVar3 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x00010006db80(dVar11 * -1000.0 + dVar12 * 1000.0,uVar10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10005b1b0; end: 10005b397; -[SCNSEImageLoaderGraphene logImageLoadSuccess:cacheHit:startTime:imageSizeBytes:] */

void FUN_10005b1b0(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a98e8;
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9908;
  }
  dVar9 = param_1;
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_2 + 8));
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  dVar9 = param_1 * -1000.0 + dVar9 * 1000.0;
  func_0x00010006db80(uVar8);
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar6 = puVar5;
  func_0x00010006da60(*(undefined8 *)(param_2 + 8));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a98e8;
  if (param_6 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9908;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = puVar3;
  func_0x000100071be0();
  _objc_release(puVar3);
  if (puVar6 != (undefined *)0x0) {
    puVar3 = puVar6;
    func_0x00010006ef00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x00010006e500(puVar6);
    func_0x000100071f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x000100073ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 8));
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar6 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar10 = dVar9;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 8));
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar8 = *(undefined8 *)(puVar2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  dVar9 = dVar9 * -1000.0 + dVar10 * 1000.0;
  func_0x00010006db80(dVar9,uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar10 = dVar9;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  uVar8 = *(undefined8 *)(puVar3 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x00010006db80(dVar9 * -1000.0 + dVar10 * 1000.0,uVar8);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10005b398; end: 10005b567; -[SCNSEImageLoaderGraphene logImageLoadError:imageType:] */

void FUN_10005b398(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a98e8;
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9908;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = puVar2;
  func_0x000100071be0();
  _objc_release(puVar2);
  if (param_4 != 0) {
    lVar4 = param_4;
    func_0x00010006ef00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar3);
    _objc_release(lVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x00010006e500(param_4);
    func_0x000100071f60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x000100073ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(puVar3);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_2 + 8));
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_4 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar9 = param_1;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 8));
  puVar6 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar8 = *(undefined8 *)(puVar2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  dVar9 = param_1 * -1000.0 + dVar9 * 1000.0;
  func_0x00010006db80(dVar9,uVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar10 = dVar9;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  uVar8 = *(undefined8 *)(puVar3 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x00010006db80(dVar9 * -1000.0 + dVar10 * 1000.0,uVar8);
  _objc_release(puVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10005b568; end: 10005b63b; -[SCNSEImageLoaderGraphene logGroupBitmojiLoadAttempt] */

void FUN_10005b568(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_40 = *(undefined8 *)(param_2 + 0x10);
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000a41a8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_3,&uStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_2 + 8));
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar7 = param_1;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 8));
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar6 = *(undefined8 *)(puVar1 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  dVar7 = param_1 * -1000.0 + dVar7 * 1000.0;
  func_0x00010006db80(dVar7,uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar8 = dVar7;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  uVar6 = *(undefined8 *)(puVar2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x00010006db80(dVar7 * -1000.0 + dVar8 * 1000.0,uVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 10005b63c; end: 10005b783; -[SCNSEImageLoaderGraphene logGroupBitmojiLoadSuccess:] */

void FUN_10005b63c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_60 = *(undefined8 *)(param_2 + 0x10);
  ppuStack_68 = &PTR____CFConstantStringClassReference_1000a41a8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar6 = param_1;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_3,&uStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_2 + 8));
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  dVar6 = param_1 * -1000.0 + dVar6 * 1000.0;
  func_0x00010006db80(dVar6,uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar7 = dVar6;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  uVar5 = *(undefined8 *)(puVar1 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x00010006db80(dVar6 * -1000.0 + dVar7 * 1000.0,uVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10005b784; end: 10005b887; -[SCNSEImageLoaderGraphene logGroupInfoLookupLatency:] */

void FUN_10005b784(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_50 = *(undefined8 *)(param_2 + 0x10);
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41a8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  dVar4 = param_1;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_3,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x00010006db80(param_1 * -1000.0 + dVar4 * 1000.0,uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 10005b888; end: 10005b8b7; -[SCNSEImageLoaderGraphene .cxx_destruct] */

void FUN_10005b888(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005b8b8; end: 10005b93f; -[SCNSEGroupBitmojiImage initWithImage:senderTileIsSilhouette:] */

undefined1 *
FUN_10005b8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1000d26b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010006e800();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005b940; end: 10005b963; -[SCNSEGroupBitmojiImage copyWithZone:] */

undefined8 FUN_10005b940(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10005b964; end: 10005b9cf; -[SCNSEGroupBitmojiImage hash] */

undefined8 * FUN_10005b964(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010006fd00();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  _SCRemodelHash(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10005ba54;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10005ba54;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x0001000710e0();
      goto LAB_10005ba54;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10005ba54:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10005b9d0; end: 10005ba6f; -[SCNSEGroupBitmojiImage isEqual:] */

long FUN_10005b9d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10005ba54;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10005ba54;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x0001000710e0();
      goto LAB_10005ba54;
    }
  }
  lVar3 = 1;
LAB_10005ba54:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10005ba70; end: 10005ba77; -[SCNSEGroupBitmojiImage image] */

undefined8 FUN_10005ba70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10005ba78; end: 10005ba7f; -[SCNSEGroupBitmojiImage senderTileIsSilhouette] */

undefined1 FUN_10005ba78(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10005ba80; end: 10005ba8b; -[SCNSEGroupBitmojiImage .cxx_destruct] */

void FUN_10005ba80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 0x10,0);
  return;
}



/* Entry: 10005ba8c; end: 10005bb5b; -[SCNSEIntentDonator initWithGrapheneLogger:notificationType:] */

undefined8
FUN_10005ba8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar1,param_2,&PTR___NSConcreteGlobalBlock_1000a33d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1000d22a0;
  _objc_alloc(PTR_PTR_1000d22a0);
  func_0x000100070480();
  _objc_release(param_4);
  _objc_release(param_3);
  _SCNotifExtPhoneSupportsCommNotif();
  uVar3 = param_3;
  _SCNotifExtPhoneSupportsLeftImageOnCommNotif();
  func_0x000100070780(param_1,param_2,param_3,uVar3,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10005bb5c; end: 10005bb77;  */

void FUN_10005bb5c(void)

{
  _objc_alloc_init(PTR_PTR_1000d2298);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10005bb78; end: 10005bc33; -[SCNSEIntentDonator initWithPhoneSupportsCommStyle:phoneSupportsLeftSideImageForCommStyle:intentBuilder:grapheneLogger:] */

undefined1 *
FUN_10005bb78(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1000d26b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10005bc34; end: 10005bddf; -[SCNSEIntentDonator donateIntentFor1on1WithConversationId:senderDisplayName:avatarImage:notificationContent:] */

void FUN_10005bc34(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x0001000715c0(*(undefined8 *)(param_2 + 0x18),param_3,0);
  puVar2 = PTR__OBJC_CLASS___SCResult_1000d22a8;
  if ((param_2[8] & 1) == 0) {
    lVar4 = 0;
    func_0x00010005c15c(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f320(puVar2,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_6 != 0) && ((param_2[9] & 1) == 0)) {
      _objc_release(param_6);
      param_6 = 0;
    }
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x000100072100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___SCResult_1000d22a8;
    if (lVar4 == 0) {
      uVar3 = 1;
      func_0x00010005c15c(1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006f320(puVar2,param_3,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar4 = 0;
    }
    else {
      func_0x00010006c4c0(param_1,param_2,param_3,lVar4,param_7,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
    }
  }
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10005bde0; end: 10005bfa3; -[SCNSEIntentDonator donateIntentForGroupConversationId:senderDisplayName:groupDisplayName:avatarImage:notificationContent:] */

void FUN_10005bde0(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x0001000715c0(*(undefined8 *)(param_2 + 0x18),param_3,1);
  puVar2 = PTR__OBJC_CLASS___SCResult_1000d22a8;
  if ((param_2[8] & 1) == 0) {
    lVar4 = 0;
    func_0x00010005c15c(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f320(puVar2,param_3,lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_7 != 0) && ((param_2[9] & 1) == 0)) {
      _objc_release(param_7);
      param_7 = 0;
    }
    lVar1 = *(long *)(param_2 + 0x10);
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010006f980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___SCResult_1000d22a8;
    if (lVar4 == 0) {
      uVar3 = 1;
      func_0x00010005c15c(1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006f320(puVar2,param_3,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar4 = 0;
    }
    else {
      func_0x00010006c4c0(param_1,param_2,param_3,lVar4,param_8,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_2;
    }
  }
  _objc_release(lVar4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10005bfa4; end: 10005c12b; -[SCNSEIntentDonator _donateIntent:notificationContent:intentType:startTime:] */

void FUN_10005bfa4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lStack_58;
  
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar5);
  puVar2 = PTR__OBJC_CLASS___INInteraction_1000d22b0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  func_0x000100070500();
  func_0x000100072e20();
  FUN_10005c198(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010006efa0(puVar2,param_3,0);
  lStack_58 = 0;
  uVar3 = param_5;
  func_0x00010006e740(param_5,param_3,param_4,&lStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  lVar1 = lStack_58;
  _objc_retain(lStack_58);
  if (lVar1 == 0) {
    FUN_10005c198(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x000100071600(param_1,uVar5,param_3,param_6);
    _objc_release(0);
    puVar4 = PTR__OBJC_CLASS___SCResult_1000d22a8;
    func_0x000100074020(PTR__OBJC_CLASS___SCResult_1000d22a8,param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001000715e0(uVar5,param_3,lVar1,param_6);
    puVar4 = PTR__OBJC_CLASS___SCResult_1000d22a8;
    func_0x00010006f320(PTR__OBJC_CLASS___SCResult_1000d22a8,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar4);
  return;
}



/* Entry: 10005c12c; end: 10005c197; -[SCNSEIntentDonator .cxx_destruct] */

void FUN_10005c12c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 0x10,0);
  return;
}



/* Entry: 10005c198; end: 10005c1b3;  */

undefined ** FUN_10005c198(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a9948;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9968;
  }
  return ppuVar1;
}



/* Entry: 10005c1b4; end: 10005c26b; -[SCNSEIntentDonatorGraphene initWithGrapheneLogger:notificationType:] */

undefined1 *
FUN_10005c1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d26c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    if (param_4 == (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_1000a41c8;
    }
    else {
      ppuVar3 = param_4;
      func_0x00010006e800();
    }
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined ***)((long)puVar1 + 0x10) = ppuVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005c26c; end: 10005c377; -[SCNSEIntentDonatorGraphene logDonateIntentAttempt:] */

void FUN_10005c26c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a9948;
  if (param_4 != 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_1000a9968;
  }
  _objc_retain(ppuVar6);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar4 = puVar3;
  func_0x00010006ff00(*(undefined8 *)(param_2 + 8));
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a9948;
  if (puVar4 != (undefined *)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_1000a9968;
  }
  dVar9 = param_1;
  _objc_retain(ppuVar6);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 8));
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a99e8;
  func_0x000100070720();
  uVar8 = *(undefined8 *)(puVar2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  puVar2 = puVar5;
  func_0x00010006db80(param_1 * -1000.0 + dVar9 * 1000.0,uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a9948;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9968;
  }
  _objc_retain(ppuVar1);
  _objc_retain(puVar2);
  puVar5 = puVar2;
  func_0x00010006ef00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x00010006e500(puVar2);
  _objc_release(puVar2);
  func_0x000100071f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar3 + 8));
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10005c378; end: 10005c4f7; -[SCNSEIntentDonatorGraphene logDonateIntentSuccess:startTime:] */

void FUN_10005c378(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a9948;
  if (param_4 != 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_1000a9968;
  }
  dVar9 = param_1;
  _objc_retain(ppuVar6);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_2 + 8));
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar6 = &PTR____CFConstantStringClassReference_1000a99e8;
  func_0x000100070720();
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x000100074280(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  puVar5 = puVar4;
  func_0x00010006db80(param_1 * -1000.0 + dVar9 * 1000.0,uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a9948;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9968;
  }
  _objc_retain(ppuVar1);
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010006ef00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x00010006e500(puVar5);
  _objc_release(puVar5);
  func_0x000100071f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 8));
  _objc_release(puVar3);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar5 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar5 + 8,0);
  return;
}



/* Entry: 10005c4f8; end: 10005c68b; -[SCNSEIntentDonatorGraphene logDonateIntentError:intentType:] */

void FUN_10005c4f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a9948;
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a9968;
  }
  _objc_retain(ppuVar1);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010006ef00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x00010006e500(param_3);
  _objc_release(param_3);
  func_0x000100071f60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 8));
  _objc_release(puVar3);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar4 + 8,0);
  return;
}



/* Entry: 10005c68c; end: 10005c6bb; -[SCNSEIntentDonatorGraphene .cxx_destruct] */

void FUN_10005c68c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005c6bc; end: 10005c833; -[SCSendMessageIntentBuilder oneOnOneIntentWithSenderName:conversationId:avatarImage:] */

void FUN_10005c6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___INPersonHandle_1000d22b8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x000100070fe0();
  if (param_5 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___INImage_1000d22c0;
    func_0x00010006fe60(PTR__OBJC_CLASS___INImage_1000d22c0,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___INPerson_1000d22c8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSPersonNameComponents_1000d22d0;
  _objc_opt_new(PTR__OBJC_CLASS___NSPersonNameComponents_1000d22d0);
  func_0x000100070760(puVar2,param_2,puVar1,puVar3,param_3,puVar5,0,param_4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___INSpeakableString_1000d22d8;
  _objc_alloc(PTR__OBJC_CLASS___INSpeakableString_1000d22d8);
  func_0x000100070c00();
  puVar4 = PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0;
  _objc_alloc(PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0);
  func_0x000100070b00();
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar4);
  return;
}



/* Entry: 10005c834; end: 10005ca3f; -[SCSendMessageIntentBuilder groupIntentWithSenderName:groupDisplayName:conversationId:avatarImage:] */

undefined1 *
FUN_10005c834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___INPersonHandle_1000d22b8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x000100070fe0();
  if (param_6 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___INImage_1000d22c0;
    func_0x00010006fe60();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___INPerson_1000d22c8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSPersonNameComponents_1000d22d0;
  _objc_opt_new(PTR__OBJC_CLASS___NSPersonNameComponents_1000d22d0);
  func_0x000100070760();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___INSpeakableString_1000d22d8;
  _objc_alloc(PTR__OBJC_CLASS___INSpeakableString_1000d22d8);
  func_0x000100070c00();
  _objc_release(param_4);
  puVar4 = PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0;
  _objc_alloc(PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0);
  puVar5 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  puStack_70 = puVar2;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = 0;
  puVar8 = puVar5;
  puStack_80 = puVar2;
  func_0x000100070b00(puVar4);
  _objc_release(param_5);
  _objc_release(puVar5);
  if (param_6 != 0) {
    puVar8 = puVar9;
    func_0x000100072fc0(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_6);
  uVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_b0;
  pcStack_88 = FUN_10005ca40;
  lStack_a0 = param_6;
  uStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puStack_a8 = PTR_PTR_1000d26c8;
  uStack_b0 = uVar7;
  _objc_msgSendSuper2(&uStack_b0,PTR_s_init_1000d07d0);
  if (puVar6 != (undefined8 *)0x0) {
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)puVar6 + 8);
    *(undefined **)((long)puVar6 + 8) = puVar8;
    _objc_release(uVar7);
  }
  _objc_release(puVar8);
  return (undefined1 *)puVar6;
}



/* Entry: 10005ca40; end: 10005cab3; -[SCSharedStoryNotificationModifier initWithProcessingScope:] */

undefined1 * FUN_10005ca40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d26c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005cab4; end: 10005cc3b; -[SCSharedStoryNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_10005cab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100071be0();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar7);
  _objc_release(param_3);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar6;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar4;
  func_0x0001000713a0();
  if ((lVar6 == 0) || (lVar6 = lVar3, func_0x0001000713a0(), lVar6 == 0)) {
    bVar1 = true;
  }
  else {
    lVar6 = lVar5;
    func_0x0001000713a0();
    bVar1 = lVar6 == 0;
  }
  if ((param_5 == 0) || (!bVar1)) {
    func_0x0001000720a0(param_4,param_2,*(undefined8 *)(param_1 + 0x10));
  }
  else {
    func_0x0001000720c0(param_4,param_2,3);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10005cc3c; end: 10005cc63; -[SCSharedStoryNotificationModifier bestAttemptContent] */

void FUN_10005cc3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10005cc64; end: 10005cc93; -[SCSharedStoryNotificationModifier .cxx_destruct] */

void FUN_10005cc64(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005cc94; end: 10005cd07; -[SCSharedStoryNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_10005cc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d26d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005cd08; end: 10005cd37; -[SCSharedStoryNotificationModifierProvider getModifier:] */

void FUN_10005cd08(void)

{
  _objc_alloc(PTR_PTR_1000d22e8);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10005cd38; end: 10005cd3f; -[SCSharedStoryNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_10005cd38(void)

{
  return 0;
}



/* Entry: 10005cd40; end: 10005cd47; -[SCSharedStoryNotificationModifierProvider getBadgeCountProviders] */

undefined8 FUN_10005cd40(void)

{
  return 0;
}



/* Entry: 10005cd48; end: 10005cd53; -[SCSharedStoryNotificationModifierProvider .cxx_destruct] */

void FUN_10005cd48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005cd54; end: 10005cdff; -[SCSpotlightGrowthNotificationBadgeUpdater badgeCountProviderType] */

void FUN_10005cd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar2 = PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_38 = &PTR____CFConstantStringClassReference_1000a9aa8;
  ppuStack_30 = &PTR____CFConstantStringClassReference_1000a9a88;
  lVar4 = 2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38,param_2,&ppuStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0001000723e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return;
  }
  ___stack_chk_fail();
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010006e840(puVar3);
    (**(code **)(param_5 + 0x10))(param_5,lVar4 != 0 || puVar3 != (undefined *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(param_5);
    return;
  }
  return;
}



/* Entry: 10005ce00; end: 10005ce5f; -[SCSpotlightGrowthNotificationBadgeUpdater provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_10005ce00(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if (param_5 != 0) {
    _objc_retain(param_5);
    func_0x00010006e840(param_3);
    (**(code **)(param_5 + 0x10))(param_5,param_4 != 0 || param_3 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(param_5);
    return;
  }
  return;
}



/* Entry: 10005ce60; end: 10005cf5f; -[SCSpotlightGrowthNotificationModifier initWithProcessingScope:] */

long FUN_10005ce60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10005cf60;
  puStack_40 = &UNK_1000a2558;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1000d1e98;
  _objc_alloc(PTR_PTR_1000d1e98);
  func_0x0001000707c0();
  uVar2 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar3);
  func_0x0001000700e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10005cf60; end: 10005cf8f;  */

void FUN_10005cf60(void)

{
  _objc_alloc(PTR_PTR_1000d1ea0);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10005cf90; end: 10005d003; -[SCSpotlightGrowthNotificationModifier initWithAvatar:] */

undefined1 * FUN_10005cf90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d26d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005d004; end: 10005d02b; -[SCSpotlightGrowthNotificationModifier bestAttemptContent] */

void FUN_10005d004(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10005d02c; end: 10005d157; -[SCSpotlightGrowthNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_10005d02c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100071be0();
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar5);
  _objc_release(param_3);
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100072060(uVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  FUN_10005d754();
  if ((uVar2 & 1) != 0) {
    uVar2 = uVar4;
    func_0x000100071100(uVar4,param_2,&PTR____CFConstantStringClassReference_1000a9aa8);
    if ((int)uVar2 != 0) {
      func_0x00010006c820(param_1,param_2,param_4);
      goto LAB_10005d138;
    }
    uVar2 = uVar4;
    func_0x000100071100(uVar4,param_2,&PTR____CFConstantStringClassReference_1000a9a88);
    if ((int)uVar2 != 0) {
      func_0x00010006c840(param_1,param_2,param_4);
      goto LAB_10005d138;
    }
  }
  func_0x0001000720a0(param_4,param_2,*(undefined8 *)(param_1 + 8));
LAB_10005d138:
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10005d158; end: 10005d15b; -[SCSpotlightGrowthNotificationModifier _shouldSendCommunicationNotification] */

void FUN_10005d158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SCNotifExtPhoneSupportsCommNotif_1000a0438)();
  return;
}



/* Entry: 10005d15c; end: 10005d247; -[SCSpotlightGrowthNotificationModifier _handleSpotlightDefaultFeedNotificationWithCallback:] */

void FUN_10005d15c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010006e380();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    func_0x00010006dac0(*(undefined8 *)(param_1 + 0x10));
  }
  func_0x0001000720a0(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10005d248; end: 10005d3ff; -[SCSpotlightGrowthNotificationModifier _handleSpotlightSubscriptionNotificationWithCallback:] */

void FUN_10005d248(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010006d6c0();
  if ((int)uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000100074620(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100071be0();
    _SCNotifExtModifyContentForCommNotif();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010006d500(param_1);
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar3);
  uVar1 = param_1;
  func_0x00010006d6c0();
  if ((uVar1 & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10005d400;
    puStack_50 = &UNK_1000a2588;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_retain(uVar3);
    uStack_40 = uVar3;
    func_0x00010006c1c0(param_1);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  else {
    _objc_copyWeak(auStack_70,auStack_38);
    _objc_retain(param_3);
    _objc_retain(uVar3);
    func_0x00010006c1c0(param_1);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10005d400; end: 10005d40b;  */

void FUN_10005d400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSuccess__1000d1020,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10005d40c; end: 10005d45b;  */

void FUN_10005d40c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x0001000720a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    func_0x00010006c0e0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(lVar1);
  return;
}



/* Entry: 10005d45c; end: 10005d52b; -[SCSpotlightGrowthNotificationModifier _addVideoThumbnailToNotificationWithCompletionHandler:] */

void FUN_10005d45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  func_0x00010006f000(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10005d52c; end: 10005d5f7; -[SCSpotlightGrowthNotificationModifier _setLeftHandSideImageUrlInBestAttemptContent] */

void FUN_10005d52c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x0001000713a0();
  if (uVar3 != 0) {
    func_0x000100073360(uVar2);
    func_0x000100073800(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar2);
  return;
}



/* Entry: 10005d5f8; end: 10005d6e7; -[SCSpotlightGrowthNotificationModifier _addLeftHandSideImageToNotificationWithCallback:] */

void FUN_10005d5f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_3;
  _objc_retain();
  _SCNotifExtPhoneSupportsLeftImageOnCommNotif();
  uVar3 = *(undefined8 *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    func_0x0001000720a0(param_3,param_2,uVar3);
  }
  else {
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000100074180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10005d6e8;
    puStack_48 = &UNK_1000a25b8;
    _objc_retain(param_3);
    uStack_40 = param_3;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010006ef80(uVar2,param_2,uVar4,0,&puStack_60);
    _objc_release(uVar2);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10005d6e8; end: 10005d6ff;  */

void FUN_10005d6e8(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = *(long *)(param_1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSuccess__1000d1020,param_3);
  return;
}



/* Entry: 10005d700; end: 10005d747; -[SCSpotlightGrowthNotificationModifier .cxx_destruct] */

void FUN_10005d700(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005d748; end: 10005d753;  */

void FUN_10005d748(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100071110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s_isEqualToString__1000d0c38,
             &PTR____CFConstantStringClassReference_1000a9a88);
  return;
}



/* Entry: 10005d754; end: 10005d7af;  */

ulong FUN_10005d754(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100071100(param_1,param_2,&PTR____CFConstantStringClassReference_1000a9aa8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000100071100(param_1,param_2,&PTR____CFConstantStringClassReference_1000a9a88);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10005d7b0; end: 10005d823; -[SCSpotlightGrowthNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_10005d7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d26e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005d824; end: 10005d853; -[SCSpotlightGrowthNotificationModifierProvider getModifier:] */

void FUN_10005d824(void)

{
  _objc_alloc(PTR_PTR_1000d22f0);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 10005d854; end: 10005d8af; -[SCSpotlightGrowthNotificationModifierProvider getTaskHandlers:] */

void FUN_10005d854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
  puVar2 = PTR_PTR_1000d21d8;
  _objc_alloc(PTR_PTR_1000d21d8);
  func_0x0001000707c0();
  func_0x00010006dae0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 10005d8b0; end: 10005d95f; -[SCSpotlightGrowthNotificationModifierProvider getSDNTaskHandlers:] */

void FUN_10005d8b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1000a0110;
  func_0x00010006f360();
  if (param_3 == 1) {
    puVar1 = PTR_PTR_1000d22f8;
    _objc_alloc();
    func_0x0001000707c0();
    puVar3 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar2) {
    ___stack_chk_fail();
    lVar2 = *(long *)PTR____stack_chk_guard_1000a0110;
    puVar1 = PTR_PTR_1000d2300;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar2) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 10005d960; end: 10005d9eb; -[SCSpotlightGrowthNotificationModifierProvider getBadgeCountProviders] */

void FUN_10005d960(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d2300;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 10005d9ec; end: 10005d9f7; -[SCSpotlightGrowthNotificationModifierProvider .cxx_destruct] */

void FUN_10005d9ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005d9f8; end: 10005dab3; -[SCSpotlightStoryFetchTaskHandler initWithProcessingScope:] */

undefined8 FUN_10005d9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000739c0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006e640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x000100073b60(uVar3);
  func_0x000100070f80(param_1,param_2,uVar1,puVar2,uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10005dab4; end: 10005dabb; -[SCSpotlightStoryFetchTaskHandler initWithUserSession:networkingApiClient:] */

void FUN_10005dab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100070f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s_initWithUserSession_networkingAp_1000d0bd8,param_3,param_4,0);
  return;
}



/* Entry: 10005dabc; end: 10005db67; -[SCSpotlightStoryFetchTaskHandler initWithUserSession:networkingApiClient:skipMediaDownloadInNSE:] */

undefined1 *
FUN_10005dabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d26e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1000d2308;
    _objc_alloc();
    func_0x000100070f60();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005db68; end: 10005dd5b; -[SCSpotlightStoryFetchTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_10005db68(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x000100072060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x0001000713a0();
  if (uVar5 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar4 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000100072060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar6 = uVar2;
    func_0x000100072060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010006f420(uVar7);
    _objc_release(param_4);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 10005dd5c; end: 10005dd67;  */

void FUN_10005dd5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010005dd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10005dd68; end: 10005dd73; -[SCSpotlightStoryFetchTaskHandler .cxx_destruct] */

void FUN_10005dd68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005dd74; end: 10005dd7b; -[SCSpotlightStoryFetcher initWithUserSession:networkingAPIClient:] */

void FUN_10005dd74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100070f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s_initWithUserSession_networkingAP_1000d0bd0,param_3,param_4,0);
  return;
}



/* Entry: 10005dd7c; end: 10005de27; -[SCSpotlightStoryFetcher initWithUserSession:networkingAPIClient:skipMediaDownloadInNSE:] */

undefined1 *
FUN_10005dd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d26f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005de28; end: 10005e08f; -[SCSpotlightStoryFetcher fetchStory:url:notificationType:notificationId:completion:] */

void FUN_10005de28(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x0001000713a0();
  if (lVar2 == 0) {
    func_0x00010006c5e0(param_1);
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    puStack_d0 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10005e090;
    puStack_b8 = &UNK_1000a3420;
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_3);
    lStack_b0 = param_3;
    _objc_retain(param_5);
    uStack_a8 = param_5;
    _objc_retain(param_7);
    uStack_98 = param_7;
    uStack_88 = uVar1;
    _objc_retain(param_4);
    ppuVar3 = &puStack_d0;
    uStack_a0 = param_4;
    _objc_retainBlock(ppuVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x000100073bc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d8,auStack_80);
    _objc_retain(param_7);
    func_0x00010006f3a0(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_d8);
    _objc_release(ppuVar3);
    _objc_release(uStack_a0);
    _objc_release(uStack_98);
    _objc_release(uStack_a8);
    _objc_release(lStack_b0);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10005e090; end: 10005e1c3;  */

void FUN_10005e090(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_50,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  uStack_48 = *(undefined1 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010006d0e0(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 10005e1c4; end: 10005e2cf;  */

void FUN_10005e1c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010006d4c0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
  }
  else if (*(char *)(param_1 + 0x48) == '\x01') {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    if (lVar3 != 0) {
      func_0x00010006d320(param_1);
      goto LAB_10005e284;
    }
  }
  func_0x00010006c5e0();
LAB_10005e284:
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 10005e2d0; end: 10005e357;  */

void FUN_10005e2d0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x40,param_2 + 0x40);
  return;
}


