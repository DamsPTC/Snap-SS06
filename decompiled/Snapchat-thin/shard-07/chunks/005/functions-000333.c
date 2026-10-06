/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10560d798; end: 10560d7d3;  */

void FUN_10560d798(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x30) != '\0';
  uVar2 = 3;
  if (bVar3) {
    uVar2 = 1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110df2278;
  if (!bVar3) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df2298;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdfdc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didFailWithId_failureStep_faile_11255d0b8,
             *(undefined8 *)(param_1 + 0x28),0,uVar2,ppuVar1,*(undefined1 *)(param_1 + 0x31),0);
  return;
}



/* Entry: 10560d7d4; end: 10560d943;  */

void FUN_10560d7d4(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar5 = param_2;
  if (lVar1 != 0) {
    lVar2 = param_5;
    func_0x00010bf3ec40();
    if (lVar2 == 0x1f6) {
      uVar6 = *(undefined8 *)(lVar1 + 0x50);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uVar7);
    }
    else {
      if (param_5 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64ac0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = param_2;
        func_0x00010c08fa60();
        puVar5 = puVar3;
        if (puVar4 != (undefined *)0x0) {
          puVar5 = param_2;
        }
        _objc_retain(puVar5);
        _objc_release(param_2);
        _objc_release(puVar3);
      }
      func_0x00010bdfcf80(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar5);
  return;
}



/* Entry: 10560d944; end: 10560da57;  */

void FUN_10560d944(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    ppuVar2 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x70);
    func_0x00010c0e00e0(ppuVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c08b2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar3);
    puVar4 = PTR_PTR_1126bc530;
    func_0x00010c283c80(PTR_PTR_1126bc530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(puVar4);
    func_0x00010bfec2a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,puVar5);
    func_0x00010bdfdc60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),0,4,
                        &PTR____CFConstantStringClassReference_110df22d8,
                        *(undefined1 *)(param_1 + 0x30),3);
    func_0x00010be572c0(*(undefined8 *)(param_1 + 0x20),param_2,
                        &PTR____CFConstantStringClassReference_110df22d8,1);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
    return;
  }
  return;
}



/* Entry: 10560da58; end: 10560dccb; -[SCMediaOrchestrator _startUploadWithPackageHandle:encryptionKey:encryptionIv:mediaType:stepMetrics:] */

void FUN_10560da58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x62) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10560dccc;
    puStack_a0 = &UNK_1108a0140;
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_4);
    uStack_90 = param_4;
    _objc_retain(param_5);
    uStack_88 = param_5;
    uStack_70 = param_6;
    _objc_retain(param_7);
    uStack_80 = param_7;
    func_0x00010c0c49c0(uVar2);
    _objc_release(uVar1);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_78);
    uVar1 = uStack_98;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_c8,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_c0 = param_6;
    _objc_retain(param_7);
    func_0x00010c0c49c0(uVar2);
    _objc_release(uVar1);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_c8);
    uVar1 = param_3;
  }
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560dccc; end: 10560df23;  */

void FUN_10560dccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f0b00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0f0b00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee55a0(lVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10560df24; end: 10560df2f; -[SCMediaOrchestrator didFailPrepareMediaWithId:retriable:debugInfo:] */

void FUN_10560df24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf76270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didFailPrepareMediaWithId_retria_1125bb240,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10560df30; end: 10560e007; -[SCMediaOrchestrator didFailPrepareMediaWithId:retriable:error:debugInfo:] */

void FUN_10560df30(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10560e008;
    puStack_68 = &UNK_110858b70;
    lStack_60 = param_1;
    _objc_retain(param_3);
    lStack_58 = param_3;
    uStack_48 = param_4;
    _objc_retain(param_6);
    uStack_50 = param_6;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 10560e008; end: 10560e0a7;  */

void FUN_10560e008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  bVar4 = *(char *)(param_1 + 0x38) == '\0';
  ppuVar7 = &PTR____CFConstantStringClassReference_110df22f8;
  if (bVar4) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110df2318;
  }
  uVar1 = 3;
  if (bVar4) {
    uVar1 = 4;
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfdc60(uVar2,param_2,uVar3,1,uVar1,puVar5,0,0,ppuVar7,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10560e0a8; end: 10560e2ef; -[SCMediaOrchestrator setUploadableMediaWithId:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:completion:] */

void FUN_10560e0a8(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126bc560;
  if (puVar1 == (undefined *)0x0) {
joined_r0x00010560e228:
    PTR_PTR_1126bc560 = puVar3;
    if (param_12 == 0) goto LAB_10560e290;
    func_0x00010bfa0080(puVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_12 + 0x10))(param_12,puVar3);
  }
  else {
    lVar2 = param_4;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      func_0x00010be28d60(param_1);
      puVar3 = PTR_PTR_1126bc560;
      goto joined_r0x00010560e228;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_11);
    _objc_retain(param_12);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    puVar3 = param_3;
  }
  _objc_release(puVar3);
LAB_10560e290:
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560e2f0; end: 10560e32b;  */

void FUN_10560e2f0(long param_1,undefined8 param_2)

{
  func_0x00010bea9dc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 10560e32c; end: 10560e32f; -[SCMediaOrchestrator setUploadableMediaWithId:mediaFileUrl:overlayData:encryptionKey:encryptionIv:completion:] */

void FUN_10560e32c(void)

{
  return;
}



/* Entry: 10560e330; end: 10560e4df; -[SCMediaOrchestrator startChunkedTranscodeAndUploadMediaWithId:videoFilter:overlayData:encryptionKey:encryptionIv:captureSessionId:transcodeCompletion:uploadCompletion:] */

void FUN_10560e330(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_10560e4e0;
  puStack_b0 = &UNK_1108a01a0;
  uStack_70 = param_9;
  uStack_68 = param_10;
  lStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_c8);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560e4e0; end: 10560e517;  */

void FUN_10560e4e0(long param_1,undefined8 param_2)

{
  func_0x00010bebfb00(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 10560e518; end: 10560e72f; -[SCMediaOrchestrator _setUploadableMediaWithId:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:completion:] */

void FUN_10560e518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xb8));
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bee5620(param_1);
    goto LAB_10560e6cc;
  }
  lVar2 = lVar1;
  func_0x00010c160480();
  if (lVar2 < 3) {
    if (lVar2 - 1U < 2) {
LAB_10560e664:
      if (param_12 != 0) {
        puVar3 = PTR_PTR_1126bc560;
        func_0x00010bf9ffc0(PTR_PTR_1126bc560);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_12 + 0x10))(param_12,puVar3);
        _objc_release(puVar3);
      }
      goto LAB_10560e6cc;
    }
    if (lVar2 != 0) goto LAB_10560e6cc;
  }
  else if (lVar2 != 3) {
    if (lVar2 != 4) goto LAB_10560e6cc;
    goto LAB_10560e664;
  }
  func_0x00010bee5620(param_1);
LAB_10560e6cc:
  _objc_release(lVar1);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 10560e730; end: 10560e7e7; -[SCMediaOrchestrator persistSnapVideoFilter:forMediaId:] */

void FUN_10560e730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10560e7e8;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560e7e8; end: 10560e917;  */

void FUN_10560e7e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126bc548;
  _objc_alloc(PTR_PTR_1126bc548);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010562f808();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045680(puVar1,param_2,0,0,0,0,0,uVar5,puVar2,puVar3,0,0);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bedb520(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),puVar1
                     );
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fa1e0();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10560e918; end: 10560e9cf; -[SCMediaOrchestrator registerSnapDocPersistedForMediaId:captureSessionId:] */

void FUN_10560e918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10560e9d0;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560e9d0; end: 10560eb1f;  */

void FUN_10560e9d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c08b2c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) goto LAB_10560eb00;
  }
  puVar4 = PTR_PTR_1126bc548;
  _objc_alloc(PTR_PTR_1126bc548);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010562f808();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf05fa0();
  func_0x00010c045680(puVar4,param_2,0,0,0,0,0,uVar7,puVar5,puVar6,3,0);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bedb520(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),puVar4
                     );
  _objc_release(puVar4);
LAB_10560eb00:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10560eb20; end: 10560ec03; -[SCMediaOrchestrator registerDependentMediaStubForMediaId:encryptionKey:encryptionIv:] */

void FUN_10560eb20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10560ec04;
  puStack_68 = &UNK_11084c4a0;
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



/* Entry: 10560ec04; end: 10560ed67;  */

void FUN_10560ec04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126bc548;
  _objc_alloc(PTR_PTR_1126bc548);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010562f808();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045680(puVar3,param_2,0,uVar6,uVar1,0,0,uVar7,puVar4,puVar5,3,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bedb520(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),puVar3
                     );
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  puVar4 = PTR_PTR_1126bc530;
  func_0x00010bf5cb40(PTR_PTR_1126bc530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar6,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10560ed68; end: 10560edff; -[SCMediaOrchestrator _handleEmptyMediaWithId:isMediaZipped:] */

void FUN_10560ed68(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10560ee00;
  puStack_50 = &UNK_11084d5f8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10560ee00; end: 10560efab;  */

void FUN_10560ee00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = param_1;
  func_0x00010562f808();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  FUN_10562f854(0,4,lVar5,&PTR____CFConstantStringClassReference_110df23b8,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126bc548;
  _objc_alloc(PTR_PTR_1126bc548);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    func_0x00010bf05f80();
  }
  func_0x00010c045680(puVar3);
  _objc_release(lVar5);
  _objc_release(puVar4);
  func_0x00010bedb520(*(undefined8 *)(param_1 + 0x20));
  puVar4 = PTR_PTR_1126bc550;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = uVar2;
  FUN_10562f9d0(uVar2,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa00a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be0b860(uVar1);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10560efac; end: 10560f0eb; -[SCMediaOrchestrator _didCompleteTranscodingRetryWithMediaId:outputData:key:iv:retriable:error:] */

void FUN_10560efac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10560f0ec;
  puStack_90 = &UNK_110853a60;
  uStack_88 = param_8;
  lStack_80 = param_1;
  uStack_78 = param_3;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_a8);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_88);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_8);
  return;
}



/* Entry: 10560f0ec; end: 10560f283;  */

void FUN_10560f0ec(long param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x20) != 0) {
    bVar2 = *(char *)(param_1 + 0x50) == '\0';
    uVar3 = 3;
    if (bVar2) {
      uVar3 = 4;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110df2018;
    if (bVar2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110df2038;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdfdc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__didFailWithId_failureStep_faile_11255d0b8,
               *(undefined8 *)(param_1 + 0x30),1,uVar3,ppuVar1,0,5);
    return;
  }
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar4);
  func_0x00010c13ece0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10560f284; end: 10560f397;  */

void FUN_10560f284(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(param_2);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10560f398; end: 10560f43f;  */

void FUN_10560f398(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c0e00e0(uVar7,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = uVar7;
  func_0x00010bf31200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee5620(uVar1,param_2,uVar4,uVar2,uVar5,uVar3,uVar6,0,1,uVar8,0);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 10560f440; end: 10560f8e3; -[SCMediaOrchestrator _uploadAndUpdateStatusAndPersistDataWithId:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:completion:] */

void FUN_10560f440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lVar1 = param_1;
  func_0x00010bec29a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xc0));
  puVar2 = PTR_PTR_1126bc548;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010bf05f80();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf05fa0();
  func_0x00010c045680();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  func_0x00010bedb520(param_1);
  func_0x00010bee55a0(param_1);
  _objc_initWeak(auStack_70,param_1);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0xa8));
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10560f8e8;
    puStack_90 = &UNK_1108a0050;
    puVar6 = auStack_78;
    _objc_copyWeak(puVar6,auStack_70);
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_retain(param_12);
    uStack_80 = param_12;
    func_0x00010bf576e0(uVar7);
    _objc_release(uVar5);
    _objc_release(uStack_80);
    uVar5 = uStack_88;
  }
  else {
    if ((*(byte *)(param_1 + 99) & 1) != 0) goto LAB_10560f844;
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_b0;
    _objc_copyWeak(puVar6,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_12);
    func_0x00010bf576e0(uVar7);
    _objc_release(uVar5);
    _objc_release(param_12);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar5 = param_3;
  }
  _objc_release(uVar5);
  _objc_destroyWeak(puVar6);
LAB_10560f844:
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560f8e4; end: 10560f8e7;  */

void FUN_10560f8e4(void)

{
  return;
}



/* Entry: 10560f8e8; end: 10560f983;  */

void FUN_10560f8e8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be18140(lVar1);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      puVar2 = PTR_PTR_1126bc560;
      if (param_2 == 0) {
        func_0x00010bfa0140(PTR_PTR_1126bc560);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c261740();
        _objc_retainAutoreleasedReturnValue();
      }
      (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10560f984; end: 10560f987;  */

void FUN_10560f984(void)

{
  return;
}



/* Entry: 10560f988; end: 10560fb13;  */

void FUN_10560f988(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x61) == '\x01') {
      func_0x00010befa120(*(undefined8 *)(lVar1 + 0xa8));
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = *(undefined **)(param_1 + 0x20);
      _objc_retain(puVar6);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar3);
      func_0x00010bf576e0(uVar5);
      _objc_release(uVar2);
      _objc_release(uVar3);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 == 0) goto LAB_10560faec;
      puVar6 = PTR_PTR_1126bc560;
      if (param_2 == 0) {
        func_0x00010bfa0140(PTR_PTR_1126bc560);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c261740();
        _objc_retainAutoreleasedReturnValue();
      }
      (**(code **)(lVar4 + 0x10))(lVar4,puVar6);
    }
    _objc_release(puVar6);
  }
LAB_10560faec:
  _objc_release(lVar1);
  return;
}



/* Entry: 10560fb14; end: 10560fb17;  */

void FUN_10560fb14(void)

{
  return;
}



/* Entry: 10560fb18; end: 10560fbaf;  */

void FUN_10560fb18(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010be18140();
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126bc560;
      if (param_2 == 0) {
        func_0x00010bfa0140(PTR_PTR_1126bc560);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c261740();
        _objc_retainAutoreleasedReturnValue();
      }
      (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10560fbb0; end: 10560fbb7; -[SCMediaOrchestrator startMonitoringUploadProgressWithMediaId:progressHandler:] */

void FUN_10560fbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_startMonitoringUploadProgressWit_112671778);
  return;
}



/* Entry: 10560fbb8; end: 10560fe73; -[SCMediaOrchestrator _upload:mediaData:overlayData:encryptionKey:encryptionIv:mediaDuration:mediaType:captureSessionId:stepMetrics:] */

void FUN_10560fbb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10560fe74;
  puStack_b8 = &UNK_1108a02c0;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_3);
  uStack_b0 = param_3;
  _objc_retain(param_4);
  uStack_a8 = param_4;
  _objc_retain(param_5);
  uStack_88 = param_9;
  uStack_a0 = param_5;
  _objc_retain(param_10);
  uStack_98 = param_10;
  _objc_copyWeak(auStack_e0,auStack_80);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_d8 = param_9;
  _objc_retain(param_10);
  func_0x00010c28eba0(uVar1);
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_e0);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10560fe74; end: 10561009f;  */

void FUN_10560fe74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126bc550;
  if (param_1 != 0) {
    uVar4 = param_4;
    FUN_10562f9d0(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c261ac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b860(param_1);
    _objc_release(puVar1);
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126bc548;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010bf05f80();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05fa0();
    func_0x00010c045680(puVar1);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(puVar2);
    func_0x00010bedb520(param_1);
    func_0x00010bddf080(param_1);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056100a0; end: 1056103e3;  */

void FUN_1056100a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126bc550;
  if (lVar2 != 0) {
    uVar6 = param_4;
    FUN_10562f9d0(param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0160(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b860(lVar2);
    _objc_release(puVar3);
    _objc_release(uVar6);
    func_0x00010c12d3e0(*(undefined8 *)(lVar2 + 0xc0));
    puVar3 = PTR_PTR_1126bc548;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(lVar2 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      func_0x00010bf05f80();
    }
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05fa0();
    func_0x00010c045680(puVar3);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    iVar1 = (int)*(undefined8 *)(lVar2 + 0xa8);
    func_0x00010bf4b900();
    if (iVar1 == 0) {
      func_0x00010bedb520(lVar2);
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0xb0));
      func_0x00010c1d0640(*(undefined8 *)(lVar2 + 0x70));
      _objc_initWeak(auStack_70,lVar2);
      uVar6 = 0;
      _dispatch_time(0,30000000000);
      uVar7 = *(undefined8 *)(lVar2 + 0x50);
      func_0x00010c11de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1056103e4;
      puStack_88 = &UNK_110841fb0;
      _objc_copyWeak(auStack_78,auStack_70);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar8);
      uStack_80 = uVar8;
      func_0x00010058c530(uVar6,uVar7,&puStack_a0);
      _objc_release(uVar7);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1056103e4; end: 10561049f;  */

void FUN_1056103e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0xa8),param_2,*(undefined8 *)(param_1 + 0x20));
    lVar2 = *(long *)(lVar1 + 0xb0);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0xb0),param_2,*(undefined8 *)(param_1 + 0x20));
      lVar3 = *(long *)(lVar1 + 0x70);
      func_0x00010c0e00e0(lVar3,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c160480();
      _objc_release(lVar3);
      if (lVar4 == 3) {
        func_0x00010bedb520(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),lVar2);
      }
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056104a0; end: 10561084b; -[SCMediaOrchestrator _didFailWithId:failureStep:failedStepStatus:failureReason:isMediaZipped:failureEnum:] */

void FUN_1056104a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xc0));
  lVar1 = param_1;
  func_0x00010bec29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10562f854(param_4,param_5,lVar1,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126bc548;
  uVar6 = param_4;
  if (param_5 - 1U < 3) {
    _objc_alloc();
    uVar5 = uVar2;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf93e80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05f80();
    func_0x00010c0c6c20();
    uVar4 = uVar2;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05fa0();
    func_0x00010c045680(puVar8);
    _objc_release(uVar4);
    _objc_release(puVar7);
    _objc_release(uVar3);
    _objc_release(uVar5);
    puVar7 = PTR_PTR_1126bc550;
    FUN_10562f9d0(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0160(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_5 != 0) && (param_5 != 4)) {
      puVar8 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      goto LAB_1056107c0;
    }
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05f80();
    func_0x00010c0c6c20();
    uVar5 = uVar2;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05fa0();
    func_0x00010c045680(puVar8);
    _objc_release(uVar5);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126bc550;
    FUN_10562f9d0(param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa00a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
LAB_1056107c0:
  func_0x00010bedb520(param_1);
  func_0x00010be0b860(param_1);
  if (param_5 == 4) {
    func_0x00010bddf080(param_1);
  }
  _objc_release(puVar7);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10561084c; end: 1056109a3; -[SCMediaOrchestrator _executeCallbacksWithId:orchestrationResult:] */

void FUN_10561084c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        func_0x00010c06ac20(*(undefined8 *)(lStack_118 + lVar7 * 8),param_2,param_4);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = puVar3;
  lVar1 = param_3;
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68));
  _objc_release(puVar3);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_1056109a4;
  puStack_150 = puVar3;
  lStack_148 = param_1;
  uStack_140 = param_4;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(lVar1);
  lVar6 = lVar1;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x50);
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_105610a4c;
    puStack_170 = &UNK_110844b80;
    lStack_168 = lVar2;
    puStack_158 = puVar4;
    _objc_retain(lVar1);
    lStack_160 = lVar1;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_188);
    _objc_release(lStack_160);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1056109a4; end: 105610a4b; -[SCMediaOrchestrator setVideoCodecHint:forMediaId:] */

void FUN_1056109a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105610a4c;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    uStack_38 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105610a4c; end: 105610a5b;  */

void FUN_105610a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordVideoCodecHint_forMediaId_11257f848,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105610a5c; end: 105610b3b; -[SCMediaOrchestrator _recordVideoCodecHint:forMediaId:] */

void FUN_105610a5c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110f37878,0,0);
    if ((int)uVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c299780(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0d3c80();
      _objc_release(lVar1);
      if (3 < param_3) {
        param_3 = 0;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar3,param_2,puVar4,param_4);
      _objc_release(puVar4);
      func_0x00010c221340(param_1,param_2,lVar3);
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105610b3c; end: 105610beb; -[SCMediaOrchestrator videoCodecForMediaId:] */

long FUN_105610b3c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110f37878,0,0);
    if ((int)uVar1 != 0) {
      func_0x00010c299780(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c067fc0();
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_105610bd0;
    }
  }
  lVar3 = 0;
LAB_105610bd0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105610bec; end: 105610ddf; -[SCMediaOrchestrator _cleanUpDataForMediaId:] */

void FUN_105610bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xc0));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c140();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d780();
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((((*(byte *)(param_1 + 0x62) & 1) != 0) || ((*(byte *)(param_1 + 0x60) & 1) != 0)) ||
     (*(char *)(param_1 + 0x61) == '\x01')) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar1;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105610de0;
    puStack_68 = &UNK_1108a0320;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0f0ae0(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_60);
  }
  if ((*(byte *)(param_1 + 99) & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010c0f0ae0(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105610de0; end: 105610e97;  */

void FUN_105610de0(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010c280d00(*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105610e98; end: 105610f73; -[SCMediaOrchestrator _enqueueCallbackWithId:callbackPerformer:completion:] */

void FUN_105610e98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = *(undefined **)(param_1 + 0x68);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0e00e0(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x68),param_2,puVar2,param_3);
  }
  puVar1 = PTR_PTR_1126bc568;
  _objc_alloc(PTR_PTR_1126bc568);
  func_0x00010c034b20();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010befa120(puVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105610f74; end: 105610fdf; -[SCMediaOrchestrator _updateMediaId:sessionInfo:] */

void FUN_105610f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x70),param_2,param_4,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf51e00(uVar2);
  func_0x00010c0fa1a0(uVar1,param_2,uVar2,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105610fe0; end: 105611097; -[SCMediaOrchestrator _flushDeferredDidFailRetriableForMediaId:] */

void FUN_105610fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0xa8),param_2,param_3);
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0xb0),param_2,param_3);
    lVar2 = *(long *)(param_1 + 0x70);
    func_0x00010c0e00e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c160480();
    _objc_release(lVar2);
    if (lVar3 == 3) {
      func_0x00010bedb520(param_1,param_2,param_3,lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105611098; end: 105611113; -[SCMediaOrchestrator _stepMetricsWithMediaId:] */

void FUN_105611098(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c253760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x00010562f808();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105611114; end: 1056116e3; -[SCMediaOrchestrator _startChunkedTranscodeAndUploadMediaWithId:videoFilter:overlayData:encryptionKey:encryptionIv:captureSessionId:transcodeCompletion:uploadCompletion:] */

void FUN_105611114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  FUN_1056139c4(*(undefined8 *)(param_1 + 0x80),&PTR____CFConstantStringClassReference_110dab0d8,
                &PTR____CFConstantStringClassReference_110df2458,1);
  lVar1 = param_1;
  func_0x00010bec29a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc548;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010bf05f80();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf05fa0();
  func_0x00010c045680();
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  func_0x00010bedb520(param_1);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1056116e4;
  puStack_c0 = &UNK_1108a0350;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_9);
  uStack_98 = param_9;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  _objc_retain(param_3);
  uStack_b0 = param_3;
  _objc_retain(param_5);
  uStack_a8 = param_5;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_10);
  uStack_90 = param_10;
  ppuVar6 = &puStack_d8;
  _objc_retainBlock();
  puStack_140 = puVar3;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1056119a0;
  puStack_128 = &UNK_1108a0380;
  _objc_copyWeak(auStack_e0,auStack_80);
  _objc_retain(param_9);
  uStack_f0 = param_9;
  _objc_retain(param_4);
  uStack_120 = param_4;
  _objc_retain(param_3);
  uStack_118 = param_3;
  lStack_110 = param_1;
  _objc_retain(param_5);
  uStack_108 = param_5;
  _objc_retain(param_6);
  uStack_100 = param_6;
  _objc_retain(param_7);
  uStack_f8 = param_7;
  _objc_retain(param_10);
  uStack_e8 = param_10;
  ppuVar7 = &puStack_140;
  _objc_retainBlock();
  puStack_198 = puVar3;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_105611b3c;
  puStack_180 = &UNK_1108a03e0;
  _objc_copyWeak(auStack_148,auStack_80);
  _objc_retain(param_3);
  uStack_178 = param_3;
  _objc_retain(param_6);
  uStack_170 = param_6;
  _objc_retain(param_7);
  uStack_168 = param_7;
  _objc_retain(lVar1);
  lStack_160 = lVar1;
  _objc_retain(ppuVar6);
  ppuStack_158 = ppuVar6;
  _objc_retain(ppuVar7);
  ppuVar8 = &puStack_198;
  ppuStack_150 = ppuVar7;
  _objc_retainBlock(ppuVar8);
  puStack_1c8 = puVar3;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_105611db0;
  puStack_1b0 = &UNK_1108a0410;
  _objc_copyWeak(auStack_1a0,auStack_80);
  _objc_retain(param_3);
  ppuVar9 = &puStack_1c8;
  uStack_1a8 = param_3;
  _objc_retainBlock(ppuVar9);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae720(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  _objc_release(uVar5);
  _objc_release(ppuVar9);
  _objc_release(uStack_1a8);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(ppuVar8);
  _objc_release(ppuStack_150);
  _objc_release(ppuStack_158);
  _objc_release(lStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_destroyWeak(auStack_148);
  _objc_release(ppuVar7);
  _objc_release(uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_e0);
  _objc_release(ppuVar6);
  _objc_release(uStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056116e4; end: 105611ac3;  */

void FUN_1056116e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_1056139c4(*(undefined8 *)(lVar1 + 0x80),&PTR____CFConstantStringClassReference_110dab0d8,
                  &PTR____CFConstantStringClassReference_110df2498,1);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),param_4);
    func_0x00010c0ef160(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be87aa0(lVar1);
    puVar2 = PTR_PTR_1126bc550;
    uVar5 = param_5;
    FUN_10562f9d0(param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c261ac0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0b860(lVar1);
    _objc_release(puVar2);
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126bc548;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(lVar1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      func_0x00010bf05f80();
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf05fa0();
    func_0x00010c045680(puVar2);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    func_0x00010bedb520(lVar1);
    func_0x00010bddf080(lVar1);
    lVar4 = *(long *)(param_1 + 0x48);
    puVar3 = PTR_PTR_1126bc560;
    func_0x00010c261740(PTR_PTR_1126bc560);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105611ac4; end: 105611b3b;  */

void FUN_105611ac4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x60,param_2 + 0x60);
  return;
}



/* Entry: 105611b3c; end: 105611caf;  */

void FUN_105611b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    _objc_copyWeak(auStack_50,param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = param_3;
    _objc_retain(uVar4);
    _objc_retain(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105611cb0; end: 105611daf;  */

void FUN_105611cb0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x80);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    FUN_105613bf4(uVar4,puVar3,&PTR____CFConstantStringClassReference_110df24b8,1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (*(long *)(param_1 + 0x60) == 0) {
      FUN_1056139c4(*(undefined8 *)(lVar1 + 0x80),&PTR____CFConstantStringClassReference_110dab0d8,
                    &PTR____CFConstantStringClassReference_110df24d8,1);
      func_0x00010c064e00(*(undefined8 *)(lVar1 + 0x18));
    }
    else {
      func_0x00010bf4fc00(*(undefined8 *)(lVar1 + 0x18));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105611db0; end: 105611ec7;  */

void FUN_105611db0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    _objc_copyWeak(auStack_60,param_1 + 0x28);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    uStack_58 = param_3;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105611ec8; end: 105611f9b;  */

void FUN_105611ec8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_1056139c4(*(undefined8 *)(lVar1 + 0x80),&PTR____CFConstantStringClassReference_110dab0d8,
                    &PTR____CFConstantStringClassReference_110df24f8,1);
      func_0x00010bf43b40(*(undefined8 *)(lVar1 + 0x18));
    }
    else {
      FUN_1056139c4(*(undefined8 *)(lVar1 + 0x80),&PTR____CFConstantStringClassReference_110dad2d8,
                    &PTR____CFConstantStringClassReference_110df24f8,1);
      func_0x00010bf2f060(*(undefined8 *)(lVar1 + 0x18));
      if (((*(byte *)(param_1 + 0x38) & 1) == 0) &&
         (lVar2 = lVar1, func_0x00010be18fa0(), (int)lVar2 != 0)) {
        func_0x00010bdfdc60(lVar1);
      }
      else {
        func_0x00010bec0060(lVar1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105611f9c; end: 105611fb3; -[SCMediaOrchestrator _fragmentedTranscodeRespectsRetriable] */

void FUN_105611f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x88),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df2078,0,0);
  return;
}



/* Entry: 105611fb4; end: 10561207b; -[SCMediaOrchestrator _logPreuploadUpdateGrapheneFatalBreakdown:inRetry:] */

void FUN_105611fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bc530;
  _objc_retain(param_3);
  func_0x00010c1101c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x48),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10561207c; end: 10561221f; -[SCMediaOrchestrator _logNoEncInfoDiagnosticsWithSessionInfo:storeEncryptionInfo:] */

void FUN_10561207c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110df2538;
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010bf93e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110df2558;
    if (lVar3 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110df2538;
    }
    _objc_retain(ppuVar6);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126bc530;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df2578;
  if (param_4 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df2538;
  }
  _objc_retain(ppuVar1);
  func_0x00010c1101c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,
                      &PTR____CFConstantStringClassReference_110df2598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110df25b8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110df25d8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar5);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x48),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105612220; end: 10561222b; -[SCMediaOrchestrator videoCodecByMediaId] */

void FUN_105612220(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,200,1);
  return;
}



/* Entry: 10561222c; end: 105612233; -[SCMediaOrchestrator setVideoCodecByMediaId:] */

void FUN_10561222c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 105612234; end: 10561235f; -[SCMediaOrchestrator .cxx_destruct] */

void FUN_105612234(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 105612360; end: 105612407; -[SCMediaOrchestrationCallback initWithPerformer:completion:] */

undefined1 *
FUN_105612360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9610;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105612408; end: 1056124cf; -[SCMediaOrchestrationCallback invokeCallbackWithResult:] */

void FUN_105612408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1056124d0;
    puStack_48 = &UNK_11084aaa8;
    lStack_38 = lVar1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(lVar1);
    func_0x00010c0f88c0(uVar2,param_2,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056124d0; end: 1056124df;  */

void FUN_1056124d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056124dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056124e0; end: 10561250f; -[SCMediaOrchestrationCallback .cxx_destruct] */

void FUN_1056124e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105612510; end: 1056125b3; -[SCMediaOrchestrationStatePersisterImpl initWithSCPreferences:diskWritePerformer:] */

undefined1 *
FUN_105612510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9618;
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



/* Entry: 1056125b4; end: 10561262b; -[SCMediaOrchestrationStatePersisterImpl persistSessionInfos:] */

void FUN_1056125b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c1d0560(uVar2,param_2,uVar1,&PTR____CFConstantStringClassReference_110df25f8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10561262c; end: 1056126e7; -[SCMediaOrchestrationStatePersisterImpl persistSessionInfosAsync:completion:] */

void FUN_10561262c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056126e8;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056126e8; end: 10561274b;  */

void FUN_1056126e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010561273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10561274c; end: 1056127b3; -[SCMediaOrchestrationStatePersisterImpl retrieveInfoSessions] */

void FUN_10561274c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d3c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056127b4; end: 10561281f; -[SCMediaOrchestrationStatePersisterImpl persistInitIndex:] */

void FUN_1056127b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110df2618);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105612820; end: 105612887; -[SCMediaOrchestrationStatePersisterImpl retrieveInitIndex] */

undefined8 FUN_105612820(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105612888; end: 1056128b7; -[SCMediaOrchestrationStatePersisterImpl .cxx_destruct] */

void FUN_105612888(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056128b8; end: 105612af7; -[SCMediaOrchestrationSessionInfo initWithCoder:] */

undefined1 * FUN_1056128b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9620;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105612af8; end: 105612d3b; -[SCMediaOrchestrationSessionInfo initWithSessionStatus:encryptionKey:encryptionIv:contentURL:serializedContentObject:lastUpdateInitIndex:lastUpdateTimestamp:stepMetrics:appSource:isMediaZipped:latestUpdateOnSession:mediaType:mediaOrchestrationAttemptId:captureSessionId:appSourceIsAuthoritative:] */

undefined8 *
FUN_105612af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined1 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_68 = PTR_PTR_1126e9620;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    puVar1[7] = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_11;
    *(undefined1 *)(puVar1 + 1) = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    puVar1[0xc] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_18;
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 105612d3c; end: 105612d5f; -[SCMediaOrchestrationSessionInfo copyWithZone:] */

undefined8 FUN_105612d3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105612d60; end: 105612ec3; -[SCMediaOrchestrationSessionInfo encodeWithCoder:] */

void FUN_105612d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110df2638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df2658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110df2678);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110df2698);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110df26b8);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110df26d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110df26f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                      &PTR____CFConstantStringClassReference_110df2718);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                      &PTR____CFConstantStringClassReference_110df2738);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110df2758);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                      &PTR____CFConstantStringClassReference_110df2778);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                      &PTR____CFConstantStringClassReference_110df2798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                      &PTR____CFConstantStringClassReference_110df27b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x70),
                      &PTR____CFConstantStringClassReference_110df27d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110df27f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105612ec4; end: 105612fbf; -[SCMediaOrchestrationSessionInfo hash] */

undefined8 * FUN_105612ec4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  lStack_78 = -lVar5;
  if (-1 < lVar5) {
    lStack_78 = lVar5;
  }
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x60);
  uStack_40 = *(undefined8 *)(param_1 + 0x68);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105613148:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105613154;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
           (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) &&
          (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))) &&
         ((*(char *)((long)puVar3 + 8) == param_3[8] &&
          (*(long *)((long)puVar3 + 0x60) == *(long *)(param_3 + 0x60))))))) &&
       (*(char *)((long)puVar3 + 9) == param_3[9])) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x20);
        if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x28);
          if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x40);
              if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x48);
                if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x58);
                  if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x68);
                    if ((lVar5 == *(long *)(param_3 + 0x68)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x70);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x70)) {
                        func_0x00010c071ae0();
                        goto LAB_105613154;
                      }
                      goto LAB_105613148;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105613154:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105612fc0; end: 10561316f; -[SCMediaOrchestrationSessionInfo isEqual:] */

long FUN_105612fc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105613148:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105613154;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))))))) &&
       (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x68);
                    if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x70);
                      if (lVar3 != *(long *)(param_3 + 0x70)) {
                        func_0x00010c071ae0();
                        goto LAB_105613154;
                      }
                      goto LAB_105613148;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105613154:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105613170; end: 105613177; -[SCMediaOrchestrationSessionInfo sessionStatus] */

undefined8 FUN_105613170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105613178; end: 10561317f; -[SCMediaOrchestrationSessionInfo encryptionKey] */

undefined8 FUN_105613178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105613180; end: 105613187; -[SCMediaOrchestrationSessionInfo encryptionIv] */

undefined8 FUN_105613180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105613188; end: 10561318f; -[SCMediaOrchestrationSessionInfo contentURL] */

undefined8 FUN_105613188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105613190; end: 105613197; -[SCMediaOrchestrationSessionInfo serializedContentObject] */

undefined8 FUN_105613190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105613198; end: 10561319f; -[SCMediaOrchestrationSessionInfo lastUpdateInitIndex] */

undefined8 FUN_105613198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1056131a0; end: 1056131a7; -[SCMediaOrchestrationSessionInfo lastUpdateTimestamp] */

undefined8 FUN_1056131a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1056131a8; end: 1056131af; -[SCMediaOrchestrationSessionInfo stepMetrics] */

undefined8 FUN_1056131a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1056131b0; end: 1056131b7; -[SCMediaOrchestrationSessionInfo appSource] */

undefined8 FUN_1056131b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1056131b8; end: 1056131bf; -[SCMediaOrchestrationSessionInfo isMediaZipped] */

undefined1 FUN_1056131b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1056131c0; end: 1056131c7; -[SCMediaOrchestrationSessionInfo latestUpdateOnSession] */

undefined8 FUN_1056131c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1056131c8; end: 1056131cf; -[SCMediaOrchestrationSessionInfo mediaType] */

undefined8 FUN_1056131c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1056131d0; end: 1056131d7; -[SCMediaOrchestrationSessionInfo mediaOrchestrationAttemptId] */

undefined8 FUN_1056131d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1056131d8; end: 1056131df; -[SCMediaOrchestrationSessionInfo captureSessionId] */

undefined8 FUN_1056131d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1056131e0; end: 1056131e7; -[SCMediaOrchestrationSessionInfo appSourceIsAuthoritative] */

undefined1 FUN_1056131e0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1056131e8; end: 10561326b; -[SCMediaOrchestrationSessionInfo .cxx_destruct] */

void FUN_1056131e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10561326c; end: 105613287; +[SCMediaOrchestrationSessionInfoBuilder mediaOrchestrationSessionInfo] */

void FUN_10561326c(void)

{
  _objc_alloc_init(PTR_PTR_1126bc558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105613288; end: 105613633; +[SCMediaOrchestrationSessionInfoBuilder mediaOrchestrationSessionInfoFromExistingMediaOrchestrationSessionInfo:] */

void FUN_105613288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  
  puVar1 = PTR_PTR_1126bc558;
  _objc_retain(param_3);
  func_0x00010c0c5a60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c160480(param_3);
  puVar3 = puVar1;
  func_0x00010c2b8520(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ad300(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf93e80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ad2e0(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2aaf80(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c15ea20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2b83c0(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c08a6a0(param_3);
  puVar12 = puVar10;
  func_0x00010c2b23a0(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c08a700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c2b23c0(puVar12,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c253760();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  func_0x00010c2ba060(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010bf05f80(param_3);
  puVar17 = puVar15;
  func_0x00010c2a8580(puVar15,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c077940(param_3);
  puVar18 = puVar17;
  func_0x00010c2b0e80(puVar17,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_3;
  func_0x00010c08b2c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar18;
  func_0x00010c2b2480(puVar18,param_2,uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c0c6c20(param_3);
  puVar21 = puVar19;
  func_0x00010c2b3b00(puVar19,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010c0c59e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010c2b3960(puVar21,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c2aa1c0(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010bf05fa0(param_3);
  _objc_release(param_3);
  puVar26 = puVar24;
  func_0x00010c2a85a0(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar20);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(uVar16);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar13);
  _objc_release(uVar11);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 105613634; end: 1056136a3; -[SCMediaOrchestrationSessionInfoBuilder build] */

void FUN_105613634(void)

{
  _objc_alloc(PTR_PTR_1126bc548);
  func_0x00010c045680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


