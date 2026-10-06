/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e3cac4; end: 106e3ce17; -[SCGalleryStreamingManager initWithCircumstanceEngine:cloudFS:contentDelivery:dataObjectContext:encryptedContentManager:networker:snapTokenProvider:playbackAssetRepository:] */

undefined8 *
FUN_106e3cac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  puStack_68 = PTR_PTR_1126f71c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d2c68;
    _objc_alloc();
    uVar5 = puVar1[6];
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[7];
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c034ac0();
    uVar7 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[9];
    puVar1[9] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[2];
    puVar1[2] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 4) = 0;
    func_0x00010befa240(puVar1[5]);
    func_0x00010befa240(puVar1[5]);
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



/* Entry: 106e3ce18; end: 106e3cf6f; -[SCGalleryStreamingManager contentManagerProxiedStreamingAVAssetForStreamingPackage:encryptionInfo:completionQueue:completion:] */

void FUN_106e3ce18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106e3cf70;
  puStack_78 = &UNK_1108e4930;
  uStack_70 = param_5;
  uStack_68 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar2 = &puStack_90;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106e3d074;
  puStack_b8 = &UNK_1108465d0;
  lStack_b0 = param_1;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  ppuStack_98 = ppuVar2;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_d0);
  _objc_release(ppuStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(ppuVar2);
  _objc_release(uStack_70);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_6);
  return;
}



/* Entry: 106e3cf70; end: 106e3d05f;  */

void FUN_106e3cf70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106e3d060;
      puStack_50 = &UNK_11084a9e8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_48 = param_2;
      _objc_retain(param_3);
      uStack_40 = param_3;
      func_0x00010007380c(lVar1,&puStack_68);
      _objc_release(uStack_40);
      _objc_release(uStack_48);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106e3d060; end: 106e3d083;  */

void FUN_106e3d060(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e3d070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106e3d084; end: 106e3d23b; -[SCGalleryStreamingManager preloadStreamingForSnap:completionQueue:completion:] */

void FUN_106e3d084(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_106e3c9fc(param_3,uVar1);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106e3d23c;
    puStack_78 = &UNK_1108538b0;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retain(param_4);
    ppuVar2 = &puStack_90;
    uStack_70 = param_4;
    _objc_retainBlock();
    _objc_initWeak(auStack_98,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(ppuVar2);
    _objc_copyWeak(auStack_a0,auStack_98);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_a0);
    _objc_release(ppuVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_98);
    _objc_release(ppuVar2);
    _objc_release(uStack_70);
    _objc_release(uStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3d23c; end: 106e3d2ff;  */

void FUN_106e3d23c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
    else {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_106e3d300;
      puStack_48 = &UNK_11084aaa8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_40 = param_2;
      func_0x00010007380c(lVar1,&puStack_60);
      _objc_release(uStack_40);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 106e3d300; end: 106e3d30f;  */

void FUN_106e3d300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106e3d30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106e3d310; end: 106e3d407;  */

void FUN_106e3d310(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  _objc_copyWeak(auStack_48,param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bfaaa20(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar4);
  return;
}



/* Entry: 106e3d408; end: 106e3d4bf;  */

void FUN_106e3d408(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) && (param_3 != 0)) {
    ppuVar1 = (undefined **)(param_1 + 0x30);
    _objc_loadWeakRetained(ppuVar1);
    func_0x00010be77740();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    if (param_2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
      goto LAB_106e3d4a4;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110e87e78;
    FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87e78);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,ppuVar1);
  }
  _objc_release(ppuVar1);
LAB_106e3d4a4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e3d4c0; end: 106e3d5c7; -[SCGalleryStreamingManager removePendingStreamingSnap:] */

void FUN_106e3d4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106e3d550;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3d5c8; end: 106e3d633; -[SCGalleryStreamingManager dealloc] */

void FUN_106e3d5c8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1283e0();
    _objc_release(uVar2);
  }
  puStack_28 = PTR_PTR_1126f71c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e3d634; end: 106e3d68b; -[SCGalleryStreamingManager didReceiveMediaServicesWereLostNotification] */

void FUN_106e3d634(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e3d68c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106e3d68c; end: 106e3d69b;  */

void FUN_106e3d68c(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x20) = 1;
  return;
}



/* Entry: 106e3d69c; end: 106e3d6f3; -[SCGalleryStreamingManager didReceiveMediaServicesWereResetNotification] */

void FUN_106e3d69c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e3d6f4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106e3d6f4; end: 106e3d753;  */

void FUN_106e3d6f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar2 + 0x20) == '\x01') {
    func_0x00010c12adc0(*(undefined8 *)(lVar2 + 0x18));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1283e0();
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  *(undefined1 *)(lVar2 + 0x20) = 0;
  return;
}



/* Entry: 106e3d754; end: 106e3d817; -[SCGalleryStreamingManager _fetchAccessTokenIfNeededWithSuccessBlock:failureBlock:] */

void FUN_106e3d754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4900(uVar3,param_2,6,uVar1,uVar2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106e3d818; end: 106e3d973; -[SCGalleryStreamingManager _streamingVideoAssetWithStreamingPackge:encryptionInfo:completion:] */

void FUN_106e3d818(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf7efa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106e3d974;
    puStack_78 = &UNK_11097ef50;
    uStack_70 = param_1;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106e3d988;
    puStack_a0 = &UNK_11097ef80;
    uStack_58 = param_5;
    _objc_retain(param_5);
    uStack_98 = param_5;
    func_0x00010be0f100(param_1,param_2,&puStack_90,&puStack_b8);
    _objc_release(uStack_98);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
  }
  else {
    func_0x00010bec5440(param_1,param_2,param_3,param_4,0,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3d974; end: 106e3d99b;  */

void FUN_106e3d974(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec5450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__streamingVideoAssetWithStreamin_11258eeb8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106e3d99c; end: 106e3deef; -[SCGalleryStreamingManager _streamingVideoAssetWithStreamingPackge:encryptionInfo:accessToken:completion:] */

void FUN_106e3d99c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ba150;
  func_0x00010c299760(param_3);
  func_0x00010bf88960();
  if ((int)puVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c15f5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c15f5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126d2b30;
    if ((uVar4 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25c780(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar5 = *(long *)(param_1 + 0x58);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c11d220();
      _objc_release(lVar5);
      puVar13 = PTR_PTR_1126b1378;
      if (lVar6 == 0) {
        puVar12 = puVar1;
        func_0x00010c0c46a0(puVar1);
        FUN_106e3ef30();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c291580(puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        uVar2 = param_3;
        func_0x00010c241220(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be96540(param_1);
        _objc_release(uVar2);
        _objc_release(puVar13);
        goto LAB_106e3da40;
      }
      _objc_release(puVar1);
    }
    uVar2 = param_3;
    func_0x00010c15f5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d2b30;
    func_0x00010c25c780(PTR_PTR_1126d2b30,uVar2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bf7efa0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    if (uVar3 == 0) {
      FUN_106e3e058(param_3,param_5,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_106e3def0(param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
    puVar12 = PTR_PTR_1126b9f60;
    _objc_alloc();
    func_0x00010c040f00();
    puVar7 = puVar12;
    FUN_106e3ef30();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0(puVar1);
    func_0x00010c108220();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_70,param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010c085300(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4143c68000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(puVar1);
    _objc_retain(param_4);
    _objc_retain(puVar13);
    _objc_retain(param_3);
    func_0x00010bf88aa0(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(param_3);
    _objc_release(puVar13);
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar13);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(uVar4);
    _objc_release(puVar1);
    _objc_release(uVar2);
  }
  else {
    puVar1 = PTR_PTR_1126ba158;
    func_0x00010bf3efe0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,puVar1);
LAB_106e3da40:
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3def0; end: 106e3e057;  */

void FUN_106e3def0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar3 = PTR_PTR_1126b4960;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_2;
  _objc_retain(param_2);
  func_0x00010bf7efa0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar1 = puVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2193a0(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar2);
    _objc_retain(puVar1);
    lVar9 = 1;
    func_0x00010801b6e8(1,lVar11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b4960;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e87e58;
    func_0x00010801b7a8();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c104ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b19f8;
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bbf20;
    func_0x00010bdc1d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf58740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    puVar1 = puVar3;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2193a0(puVar3);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      if (lVar11 == 0) {
        ppuVar4 = (undefined **)(lVar9 + 0x48);
        _objc_loadWeakRetained(ppuVar4);
        uVar8 = *(undefined8 *)(lVar9 + 0x38);
        func_0x00010c241220(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be96540(ppuVar4);
        _objc_release(uVar8);
      }
      else {
        lVar11 = *(long *)(lVar9 + 0x40);
        ppuVar4 = &PTR____CFConstantStringClassReference_110e87e98;
        FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87e98);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar11 + 0x10))(lVar11,0,ppuVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e3e058; end: 106e3e253;  */

void FUN_106e3e058(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = 1;
  func_0x00010801b6e8(1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b4960;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e87e58;
  func_0x00010801b7a8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c104ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bbf20;
  func_0x00010bdc1d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  puVar4 = puVar7;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2193a0(puVar7);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    ppuVar2 = (undefined **)(lVar1 + 0x48);
    _objc_loadWeakRetained(ppuVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c241220(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be96540(ppuVar2);
    _objc_release(uVar3);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x40);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e87e98;
    FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87e98);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,0,ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106e3e254; end: 106e3e303;  */

void FUN_106e3e254(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    ppuVar1 = (undefined **)(param_1 + 0x48);
    _objc_loadWeakRetained(ppuVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c241220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be96540(ppuVar1);
    _objc_release(uVar2);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e87e98;
    FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87e98);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106e3e304; end: 106e3e47f; -[SCGalleryStreamingManager _prefetchStreamingMediaForSnap:streamingPackge:completion:] */

void FUN_106e3e304(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c135a80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3e480; end: 106e3e5db;  */

void FUN_106e3e480(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 == 0)) {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) goto LAB_106e3e5b0;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e87ed8;
    FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87ed8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,ppuVar3);
  }
  else {
    ppuVar3 = (undefined **)(param_1 + 0x38);
    _objc_loadWeakRetained();
    if (ppuVar3 == (undefined **)0x0) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 == 0) {
        ppuVar3 = (undefined **)0x0;
        goto LAB_106e3e5a8;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110e87ef8;
      FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87ef8);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,ppuVar2);
    }
    else {
      ppuVar2 = (undefined **)PTR_PTR_1126bfca8;
      _objc_alloc(PTR_PTR_1126bfca8);
      lVar4 = param_2;
      func_0x00010bf15d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf15d80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60(ppuVar2);
      _objc_release(lVar1);
      _objc_release(lVar4);
      func_0x00010be77420(ppuVar3);
    }
    _objc_release(ppuVar2);
  }
LAB_106e3e5a8:
  _objc_release(ppuVar3);
LAB_106e3e5b0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e3e5dc; end: 106e3e737; -[SCGalleryStreamingManager _prefetchMediaForStreamingPackge:encryptionInfo:completion:] */

void FUN_106e3e5dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bf7efa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106e3e738;
    puStack_78 = &UNK_11097ef50;
    uStack_70 = param_1;
    _objc_retain(param_3);
    lStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    uStack_a8 = 0x106e3e74c;
    puStack_a0 = &UNK_11097ef80;
    uStack_58 = param_5;
    _objc_retain(param_5);
    uStack_98 = param_5;
    func_0x00010be0f100(param_1,param_2,&puStack_90,&puStack_b8);
    _objc_release(uStack_98);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(lStack_68);
  }
  else {
    func_0x00010be77400(param_1,param_2,param_3,param_4,0,param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3e738; end: 106e3e757;  */

void FUN_106e3e738(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be77410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__prefetchMediaForStreamingPackge_11257b6a0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 106e3e758; end: 106e3ea7f; -[SCGalleryStreamingManager _prefetchMediaForStreamingPackge:encryptionInfo:accessToken:completion:] */

void FUN_106e3e758(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ba150;
  func_0x00010c299760(param_3);
  func_0x00010bf88960();
  puVar3 = PTR_PTR_1126d2b30;
  if ((int)puVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25c780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    FUN_106e3ef30();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b1378;
    func_0x00010c0c46a0(puVar3);
    func_0x00010c108220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b9f60;
    _objc_alloc(PTR_PTR_1126b9f60);
    lVar5 = param_3;
    func_0x00010bf7efa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    if (lVar5 == 0) {
      FUN_106e3e058(param_3,param_5,lVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      FUN_106e3def0(param_3,lVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c040f00(puVar4);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    func_0x00010c086560(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010c085300(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x4143c68000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    func_0x00010bf88aa0(uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(param_6);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
  else if (param_6 != 0) {
    puVar1 = PTR_PTR_1126ba158;
    func_0x00010bf3efe0(PTR_PTR_1126ba158);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3ea80; end: 106e3eaf3;  */

void FUN_106e3ea80(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    ppuVar2 = (undefined **)0x0;
    if (param_2 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e87f18;
      FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87f18);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = *(long *)(param_1 + 0x20);
    }
    (**(code **)(lVar1 + 0x10))(lVar1,ppuVar2);
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e3eaf4; end: 106e3ec6f; -[SCGalleryStreamingManager _retrieveContentForContentKey:encryptionInfo:requestContext:snapId:completion:] */

void FUN_106e3eaf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x00010c13e5c0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3ec70; end: 106e3ed03;  */

void FUN_106e3ec70(long param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfcaaa0();
  if (lVar2 == 0) {
    ppuVar1 = (undefined **)(param_1 + 0x30);
    _objc_loadWeakRetained(ppuVar1);
    func_0x00010be4c840();
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e87f38;
    FUN_106e3c640(&PTR____CFConstantStringClassReference_110e87f38);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e3ed04; end: 106e3ede7; -[SCGalleryStreamingManager _loadAVAssetFromContentResult:snapId:completion:] */

void FUN_106e3ed04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106e3ede8;
  puStack_68 = &UNK_1108465d0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e3ede8; end: 106e3ee8b;  */

void FUN_106e3ede8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf549c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  lVar3 = *(long *)(param_1 + 0x38);
  uVar1 = uVar2;
  func_0x00010c0d5720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e3ee8c; end: 106e3ee93; -[SCGalleryStreamingManager streamingPackageFetcher] */

undefined8 FUN_106e3ee8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106e3ee94; end: 106e3ef2f; -[SCGalleryStreamingManager .cxx_destruct] */

void FUN_106e3ee94(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3ef30; end: 106e3eff3;  */

undefined1 * FUN_106e3ef30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c032f60();
  _objc_release(puVar3);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_70;
  pcStack_48 = FUN_106e3eff4;
  puStack_60 = puVar2;
  puStack_58 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_68 = PTR_PTR_1126f71d0;
  puStack_70 = puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + 8);
    *(undefined **)((long)ppuVar4 + 8) = puVar6;
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  return (undefined1 *)ppuVar4;
}



/* Entry: 106e3eff4; end: 106e3f067; -[SCMemoriesPlaybackStreamingServices initWithMemoriesStreamingManager:] */

undefined1 * FUN_106e3eff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f71d0;
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



/* Entry: 106e3f068; end: 106e3f06f; -[SCMemoriesPlaybackStreamingServices memoriesStreamingManager] */

undefined8 FUN_106e3f068(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3f070; end: 106e3f07b; -[SCMemoriesPlaybackStreamingServices .cxx_destruct] */

void FUN_106e3f070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3f07c; end: 106e3f1ef; -[SCMemoriesProgressiveDownloadSnapPackage initWithSnapId:serverSnapId:directMediaURL:mediaURL:postParameters:encryptedOverlayBlob:videoCodec:] */

undefined1 *
FUN_106e3f07c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f71d8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3f1f0; end: 106e3f213; -[SCMemoriesProgressiveDownloadSnapPackage copyWithZone:] */

undefined8 FUN_106e3f1f0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3f214; end: 106e3f21b; -[SCMemoriesProgressiveDownloadSnapPackage snapId] */

undefined8 FUN_106e3f214(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3f21c; end: 106e3f223; -[SCMemoriesProgressiveDownloadSnapPackage serverSnapId] */

undefined8 FUN_106e3f21c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3f224; end: 106e3f22b; -[SCMemoriesProgressiveDownloadSnapPackage directMediaURL] */

undefined8 FUN_106e3f224(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e3f22c; end: 106e3f233; -[SCMemoriesProgressiveDownloadSnapPackage mediaURL] */

undefined8 FUN_106e3f22c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e3f234; end: 106e3f23b; -[SCMemoriesProgressiveDownloadSnapPackage postParameters] */

undefined8 FUN_106e3f234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e3f23c; end: 106e3f243; -[SCMemoriesProgressiveDownloadSnapPackage encryptedOverlayBlob] */

undefined8 FUN_106e3f23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e3f244; end: 106e3f24b; -[SCMemoriesProgressiveDownloadSnapPackage videoCodec] */

undefined8 FUN_106e3f244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e3f24c; end: 106e3f2ab; -[SCMemoriesProgressiveDownloadSnapPackage .cxx_destruct] */

void FUN_106e3f24c(long param_1)

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



/* Entry: 106e3f2ac; end: 106e3f44f;  */

void FUN_106e3f2ac(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = (double)func_0x00010c0d5c20();
  _objc_release(puVar1);
  auVar3._0_8_ = param_4 * dVar2;
  auVar3._8_8_ = param_3 * dVar2;
  NEON_ext(auVar3,auVar3,8,1);
  switch(param_5) {
  case 0:
    NEON_fmov(0x4008000000000000,8);
    break;
  case 1:
    NEON_fmov(0x3fe0000000000000,8);
    break;
  case 2:
    break;
  case 3:
    break;
  case 5:
    NEON_fmov(0x3fe0000000000000,8);
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
  }
  return;
}



/* Entry: 106e3f450; end: 106e3f477;  */

void FUN_106e3f450(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e87f58);
  return;
}



/* Entry: 106e3f478; end: 106e3f47f; -[SCGalleryMediaSendingServices galleryMediaSender] */

undefined8 FUN_106e3f478(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3f480; end: 106e3f48b; -[SCGalleryMediaSendingServices .cxx_destruct] */

void FUN_106e3f480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3f48c; end: 106e3f593; -[SCGalleryMediaDataModel initWithMedia:snapDocKey:snapDoc:snapCommonLoggingParams:] */

undefined1 *
FUN_106e3f48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f71e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3f594; end: 106e3f5b7; -[SCGalleryMediaDataModel copyWithZone:] */

undefined8 FUN_106e3f594(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3f5b8; end: 106e3f643; -[SCGalleryMediaDataModel hash] */

undefined8 * FUN_106e3f5b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e3f6f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e3f700;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_106e3f700;
            }
            goto LAB_106e3f6f4;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e3f700:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e3f644; end: 106e3f71b; -[SCGalleryMediaDataModel isEqual:] */

long FUN_106e3f644(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3f6f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3f700;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_106e3f700;
            }
            goto LAB_106e3f6f4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e3f700:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3f71c; end: 106e3f723; -[SCGalleryMediaDataModel media] */

undefined8 FUN_106e3f71c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3f724; end: 106e3f72b; -[SCGalleryMediaDataModel snapDocKey] */

undefined8 FUN_106e3f724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3f72c; end: 106e3f733; -[SCGalleryMediaDataModel snapDoc] */

undefined8 FUN_106e3f72c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e3f734; end: 106e3f73b; -[SCGalleryMediaDataModel snapCommonLoggingParams] */

undefined8 FUN_106e3f734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e3f73c; end: 106e3f783; -[SCGalleryMediaDataModel .cxx_destruct] */

void FUN_106e3f73c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3f784; end: 106e3f82f; -[SCGalleryMediaContainerDataModel initWithGalleryMedias:additionalText:] */

undefined1 *
FUN_106e3f784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f71f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3f830; end: 106e3f853; -[SCGalleryMediaContainerDataModel copyWithZone:] */

undefined8 FUN_106e3f830(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3f854; end: 106e3f8c7; -[SCGalleryMediaContainerDataModel hash] */

undefined8 * FUN_106e3f854(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e3f948:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e3f954;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106e3f954;
        }
        goto LAB_106e3f948;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e3f954:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e3f8c8; end: 106e3f96f; -[SCGalleryMediaContainerDataModel isEqual:] */

long FUN_106e3f8c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3f948:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3f954;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e3f954;
        }
        goto LAB_106e3f948;
      }
    }
    lVar3 = 0;
  }
LAB_106e3f954:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3f970; end: 106e3f977; -[SCGalleryMediaContainerDataModel galleryMedias] */

undefined8 FUN_106e3f970(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3f978; end: 106e3f97f; -[SCGalleryMediaContainerDataModel additionalText] */

undefined8 FUN_106e3f978(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3f980; end: 106e3f9af; -[SCGalleryMediaContainerDataModel .cxx_destruct] */

void FUN_106e3f980(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3f9b0; end: 106e3fa23; -[SCMemoriesStoryMessagingServices initWithMemoriesStoryMessageSender:] */

undefined1 * FUN_106e3f9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f71f8;
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



/* Entry: 106e3fa24; end: 106e3fa2b; -[SCMemoriesStoryMessagingServices memoriesStorySender] */

undefined8 FUN_106e3fa24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3fa2c; end: 106e3fa37; -[SCMemoriesStoryMessagingServices .cxx_destruct] */

void FUN_106e3fa2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3fa38; end: 106e3fae3; -[SCMemoriesStoryDataModel initWithMediaDataModels:storyTitle:] */

undefined1 *
FUN_106e3fa38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3fae4; end: 106e3fb07; -[SCMemoriesStoryDataModel copyWithZone:] */

undefined8 FUN_106e3fae4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3fb08; end: 106e3fb7b; -[SCMemoriesStoryDataModel hash] */

undefined8 * FUN_106e3fb08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e3fbfc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e3fc08;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106e3fc08;
        }
        goto LAB_106e3fbfc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e3fc08:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e3fb7c; end: 106e3fc23; -[SCMemoriesStoryDataModel isEqual:] */

long FUN_106e3fb7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3fbfc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3fc08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e3fc08;
        }
        goto LAB_106e3fbfc;
      }
    }
    lVar3 = 0;
  }
LAB_106e3fc08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3fc24; end: 106e3fc2b; -[SCMemoriesStoryDataModel mediaDataModels] */

undefined8 FUN_106e3fc24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3fc2c; end: 106e3fc33; -[SCMemoriesStoryDataModel storyTitle] */

undefined8 FUN_106e3fc2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3fc34; end: 106e3fc63; -[SCMemoriesStoryDataModel .cxx_destruct] */

void FUN_106e3fc34(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3fc64; end: 106e3fd37; -[SCMemoriesStoryMediaDataModel initWithMedia:snapDocKey:snapDoc:] */

undefined1 *
FUN_106e3fc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7208;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e3fd38; end: 106e3fd5b; -[SCMemoriesStoryMediaDataModel copyWithZone:] */

undefined8 FUN_106e3fd38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e3fd5c; end: 106e3fddb; -[SCMemoriesStoryMediaDataModel hash] */

undefined8 * FUN_106e3fd5c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e3fe74:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e3fe80;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106e3fe80;
          }
          goto LAB_106e3fe74;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e3fe80:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e3fddc; end: 106e3fe9b; -[SCMemoriesStoryMediaDataModel isEqual:] */

long FUN_106e3fddc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e3fe74:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e3fe80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106e3fe80;
          }
          goto LAB_106e3fe74;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e3fe80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e3fe9c; end: 106e3fea3; -[SCMemoriesStoryMediaDataModel media] */

undefined8 FUN_106e3fe9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3fea4; end: 106e3feab; -[SCMemoriesStoryMediaDataModel snapDocKey] */

undefined8 FUN_106e3fea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3feac; end: 106e3feb3; -[SCMemoriesStoryMediaDataModel snapDoc] */

undefined8 FUN_106e3feac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e3feb4; end: 106e3feef; -[SCMemoriesStoryMediaDataModel .cxx_destruct] */

void FUN_106e3feb4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3fef0; end: 106e3ff93; -[SCMemoriesSnapTranscodingServices initWithMemoriesSnapTranscoder:shareableMediaProvider:] */

undefined1 *
FUN_106e3fef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7210;
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



/* Entry: 106e3ff94; end: 106e3ff9b; -[SCMemoriesSnapTranscodingServices memoriesSnapTranscoder] */

undefined8 FUN_106e3ff94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e3ff9c; end: 106e3ffa3; -[SCMemoriesSnapTranscodingServices shareableMediaProvider] */

undefined8 FUN_106e3ff9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e3ffa4; end: 106e3ffd3; -[SCMemoriesSnapTranscodingServices .cxx_destruct] */

void FUN_106e3ffa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e3ffd4; end: 106e40077; -[SCMyFriendsScope initWithUIContainer:workflowDelegate:sourcePageType:] */

undefined1 *
FUN_106e3ffd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e40078; end: 106e4007f; -[SCMyFriendsScope uiContainer] */

undefined8 FUN_106e40078(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e40080; end: 106e40097; -[SCMyFriendsScope workflowDelegate] */

void FUN_106e40080(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e40098; end: 106e4009f; -[SCMyFriendsScope sourcePageType] */

undefined8 FUN_106e40098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e400a0; end: 106e400cb; -[SCMyFriendsScope .cxx_destruct] */

void FUN_106e400a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e400cc; end: 106e4013f; -[SCCountdownsPresentServices initWithPagePresenter:] */

undefined1 * FUN_106e400cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7220;
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



/* Entry: 106e40140; end: 106e40147; -[SCCountdownsPresentServices pagePresenter] */

undefined8 FUN_106e40140(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e40148; end: 106e40153; -[SCCountdownsPresentServices .cxx_destruct] */

void FUN_106e40148(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e40154; end: 106e4029b;  */

undefined1 *
FUN_106e40154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126f7228;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      uVar2 = param_7;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 106e4029c; end: 106e402bf; -[SCCountdownsCreationPresenterConfig copyWithZone:] */

undefined8 FUN_106e4029c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


