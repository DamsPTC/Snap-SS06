/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a26094; end: 106a261f7; -[SCDrawerMediaSender _prepareUploadForExternalMedia:trackingId:conversationIds:] */

void FUN_106a26094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c23fe00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c240200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10a380(uVar5,param_2,uVar1,uVar2,uVar4,param_4,0,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106a261f8; end: 106a2624b; -[SCDrawerMediaSender .cxx_destruct] */

void FUN_106a261f8(long param_1)

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



/* Entry: 106a2624c; end: 106a2638b; -[SCChatAudioNotePreview initWithCustomColor:backgroundColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106a2624c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f4448;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_50,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    if (param_3 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar4 = (long)_DAT_112756064;
    _objc_retain(puVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    if (param_3 == (undefined *)0x0) {
      _objc_release(puVar2);
    }
    lVar4 = (long)_DAT_112756068;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    func_0x00010c1677c0(0,puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c17d4c0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106a2638c; end: 106a263cf; -[SCChatAudioNotePreview dealloc] */

void FUN_106a2638c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bddf0c0();
  puStack_28 = PTR_PTR_1126f4448;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a263d0; end: 106a264b7; -[SCChatAudioNotePreview presentInContainer:initialXCoordinate:] */

void FUN_106a263d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010bede020(param_2,param_3,1);
  func_0x00010befbb60(param_4,param_3,param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106a264b8;
  puStack_58 = &UNK_11084fc28;
  uStack_50 = param_4;
  uStack_48 = param_1;
  _objc_retain(param_4);
  func_0x00010c0bbfe0(param_2,param_3,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106a266f0;
  puStack_80 = &UNK_110953a08;
  uStack_78 = param_2;
  func_0x00010be72bc0(param_2,param_3,&puStack_98);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 106a264b8; end: 106a266b3;  */

void FUN_106a264b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_106a266b4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc03e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106a266b4; end: 106a266ef;  */

void FUN_106a266b4(void)

{
  undefined8 in_stack_00000000;
  
  func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a266f0; end: 106a267d3;  */

undefined8 FUN_106a266f0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bef8520(0x3fc53f7ce0000000,0,0x3ff0000000000000,param_2);
  func_0x00010bef8520(0x3fc53f7ce0000000,0x4045000000000000,0x4058000000000000,param_2);
  _objc_release(param_2);
  return 1;
}



/* Entry: 106a267d4; end: 106a267db;  */

void FUN_106a267d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a267dc; end: 106a26837;  */

void FUN_106a267dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106a26838;
  puStack_20 = &UNK_11092ad90;
  uStack_18 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a26838; end: 106a268cb;  */

void FUN_106a26838(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106a266b4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a268cc; end: 106a2694f; -[SCChatAudioNotePreview hideAndReleasePreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a268cc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + _DAT_11275606c) == '\x01') {
    *(undefined8 *)(param_1 + _DAT_112756070) = 0;
    return;
  }
  if (*(long *)(param_1 + _DAT_112756074) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_106a26950;
    puStack_20 = &UNK_110953a08;
    lStack_18 = param_1;
    func_0x00010be72bc0(param_1,param_2,&puStack_38);
  }
  return;
}



/* Entry: 106a26950; end: 106a26a47;  */

undefined8 FUN_106a26950(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf01b40(uVar1);
  uVar1 = 0x3fc53f7ce0000000;
  func_0x00010bef8520(0x3fc53f7ce0000000,param_1,0,param_3);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + 0x20));
  _CGRectGetWidth();
  func_0x00010bef8520(0x3fc53f7ce0000000,uVar1,0x4045000000000000,param_3);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106a26a48; end: 106a26a4f;  */

void FUN_106a26a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a26a50; end: 106a26aab;  */

void FUN_106a26a50(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106a26aac;
  puStack_20 = &UNK_11092ad90;
  uStack_18 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a26aac; end: 106a26b3f;  */

void FUN_106a26aac(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106a266b4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a26b40; end: 106a26df7; -[SCChatAudioNotePreview updateToCancelNoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a26b40(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*(char *)(param_1 + _DAT_11275606c) == '\x01') {
    if (*(long *)(param_1 + _DAT_112756070) != 0) {
      *(undefined8 *)(param_1 + _DAT_112756070) = 2;
    }
  }
  else if ((*(ulong *)(param_1 + _DAT_112756074) & 0xfffffffffffffffd) != 0) {
    func_0x00010bede020(param_1,param_2,2);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    lVar4 = (long)_DAT_112756078;
    if (*(long *)(param_1 + lVar4) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110e67bb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01bf60(puVar1,param_2,puVar2);
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar1;
      _objc_release(uVar3);
      _objc_release(puVar2);
      func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
      puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
      _objc_release(puVar1);
      func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
      puStack_68 = puStack_98;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x106a26cf0;
      puStack_50 = &UNK_1108471b0;
      lStack_48 = param_1;
      func_0x00010c0bbfe0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_68);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c08cdc0(param_1);
    }
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_106a26df8;
    puStack_80 = &UNK_110953a38;
    uStack_70 = 2;
    lStack_78 = param_1;
    func_0x00010be72bc0(param_1,param_2,&puStack_98);
  }
  return;
}



/* Entry: 106a26df8; end: 106a26f17;  */

undefined8 FUN_106a26df8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bef8520(0x3fc53f7ce0000000,0x4058000000000000,0x404e000000000000,param_2);
  func_0x00010bef8520(0x3fc53f7ce0000000,0xc03e000000000000,0xc038000000000000,param_2);
  func_0x00010bef8520(0x3fb53f7ce0000000,0,0x3ff0000000000000,param_2);
  _objc_release(param_2);
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a26f18; end: 106a26f73;  */

void FUN_106a26f18(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106a26f74;
  puStack_20 = &UNK_11092ad90;
  uStack_18 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a26f74; end: 106a27007;  */

void FUN_106a26f74(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106a266b4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a27008; end: 106a27067;  */

void FUN_106a27008(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *(undefined8 *)(param_2 + 0x20);
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106a27068;
  puStack_28 = &UNK_11084fc28;
  uStack_18 = param_1;
  func_0x00010c0bc060(uStack_20,param_3,&puStack_40);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a27068; end: 106a2714f;  */

void FUN_106a27068(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a27150; end: 106a27163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27150(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112756078),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a27164; end: 106a27217; -[SCChatAudioNotePreview updateToNormalNoteState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27164(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + _DAT_11275606c) == '\x01') {
    if (*(long *)(param_1 + _DAT_112756070) != 0) {
      *(undefined8 *)(param_1 + _DAT_112756070) = 1;
    }
  }
  else if (1 < *(ulong *)(param_1 + _DAT_112756074)) {
    func_0x00010bede020(param_1,param_2,1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_106a27218;
    puStack_38 = &UNK_110953a38;
    uStack_28 = 1;
    lStack_30 = param_1;
    func_0x00010be72bc0(param_1,param_2,&puStack_50);
  }
  return;
}



/* Entry: 106a27218; end: 106a27337;  */

undefined8 FUN_106a27218(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010bef8520(0x3fc53f7ce0000000,0x404e000000000000,0x4058000000000000,param_2);
  func_0x00010bef8520(0x3fc53f7ce0000000,0xc038000000000000,0xc03e000000000000,param_2);
  func_0x00010bef8520(0x3fb53f7ce0000000,0x3ff0000000000000,0,param_2);
  _objc_release(param_2);
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106a27338; end: 106a27393;  */

void FUN_106a27338(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_106a27394;
  puStack_20 = &UNK_11092ad90;
  uStack_18 = param_1;
  func_0x00010c0bc060(*(undefined8 *)(param_2 + 0x20),param_3,&puStack_38);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a27394; end: 106a27427;  */

void FUN_106a27394(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106a266b4();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a27428; end: 106a27487;  */

void FUN_106a27428(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *(undefined8 *)(param_2 + 0x20);
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106a27488;
  puStack_28 = &UNK_11084fc28;
  uStack_18 = param_1;
  func_0x00010c0bc060(uStack_20,param_3,&puStack_40);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 106a27488; end: 106a2756f;  */

void FUN_106a27488(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bc020();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a27570; end: 106a27583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112756078),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106a27584; end: 106a27633; -[SCChatAudioNotePreview updateXCoordinate:] */

void FUN_106a27584(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106a27634;
    puStack_48 = &UNK_11084fc28;
    lStack_40 = param_2;
    uStack_38 = param_1;
    func_0x00010c0bc060(param_2,param_3,&puStack_60);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c262ca0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(param_2);
  }
  return;
}



/* Entry: 106a27634; end: 106a2771b;  */

void FUN_106a27634(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c262ca0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0bbfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a2771c; end: 106a2773b; -[SCChatAudioNotePreview startNoteTimeout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2771c(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11275607c) = 0;
  *(undefined1 *)(param_1 + _DAT_112756080) = 1;
  return;
}



/* Entry: 106a2773c; end: 106a27763; -[SCChatAudioNotePreview setAnimationWaveformValues:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2773c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  lVar2 = (long)_DAT_112756084;
  do {
    *(undefined8 *)(param_1 + lVar2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x70);
  return;
}



/* Entry: 106a27764; end: 106a277db; -[SCChatAudioNotePreview setAnimationWaveformArray:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27764(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = 0;
  do {
    fVar3 = SUB84(param_1,0);
    uVar1 = param_4;
    func_0x00010c0dfd40(param_4,param_3,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    param_1 = (double)fVar3;
    *(double *)(param_2 + _DAT_112756084 + lVar2 * 8) = param_1;
    _objc_release(uVar1);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xe);
  return;
}



/* Entry: 106a277dc; end: 106a27843; -[SCChatAudioNotePreview drawRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a277dc(double param_1,long param_2)

{
  func_0x00010be064c0();
  func_0x00010bf01b40(*(undefined8 *)(param_2 + _DAT_112756078));
  if (param_1 != 1.0) {
    func_0x00010be06880(param_2);
  }
  if (*(char *)(param_2 + _DAT_112756080) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be06730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__drawProgressArc_11255f368);
    return;
  }
  return;
}



/* Entry: 106a27844; end: 106a2790b; -[SCChatAudioNotePreview _performTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27844(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126cfd08;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  (**(code **)(param_3 + 0x10))(param_3,puVar1);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + _DAT_11275606c) = 1;
  *(long *)(param_1 + _DAT_112756070) = lVar2;
  func_0x00010bf42780(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a2790c; end: 106a2799b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2790c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275606c) = 0;
  lVar3 = (long)_DAT_112756074;
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3) = uVar1;
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar2 + lVar3);
  if (lVar3 != 2) {
    if (lVar3 != 1) {
      if (lVar3 == 0) {
        func_0x00010bddf0c0();
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
        return;
      }
      return;
    }
    if (*(long *)(lVar2 + _DAT_112756088) == 0) {
      func_0x00010bebfce0();
      lVar2 = *(long *)(param_1 + 0x20);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdcb1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s__animateToDesiredStateIfNeeded_112550610);
  return;
}



/* Entry: 106a2799c; end: 106a279db; -[SCChatAudioNotePreview _animateToDesiredStateIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a2799c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112756070);
  if (*(long *)(param_1 + _DAT_112756074) != lVar1) {
    if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010c28b230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateToCancelNoteState_1126806b0);
      return;
    }
    if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010c28b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateToNormalNoteState_1126806c8);
      return;
    }
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideAndReleasePreview_1125d5fc8);
      return;
    }
  }
  return;
}



/* Entry: 106a279dc; end: 106a27a87; -[SCChatAudioNotePreview _updateProgressArcAttributesForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a279dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 == 2) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x81);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11275608c);
    *(undefined **)(param_1 + _DAT_11275608c) = puVar2;
    uVar3 = 0x3fe0000000000000;
  }
  else {
    if (param_3 != 1) goto LAB_106a27a70;
    uVar3 = *(undefined8 *)(param_1 + _DAT_112756064);
    lVar4 = (long)_DAT_11275608c;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar3;
    uVar3 = 0x4000000000000000;
  }
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_112756090) = uVar3;
LAB_106a27a70:
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 106a27a88; end: 106a27b17; -[SCChatAudioNotePreview _displayDidRefresh:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27a88(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  func_0x00010c1cbd40(param_2);
  func_0x00010bf8b160(param_4);
  _objc_release(param_4);
  lVar1 = (long)_DAT_11275607c;
  param_1 = param_1 + *(double *)(param_2 + lVar1);
  *(double *)(param_2 + lVar1) = param_1;
  if (param_1 < 600.0) {
    return;
  }
  *(undefined8 *)(param_2 + lVar1) = 0x4082c00000000000;
                    /* WARNING: Could not recover jumptable at 0x00010bec2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__stopDisplayLink_11258e578);
  return;
}



/* Entry: 106a27b18; end: 106a27bbf; -[SCChatAudioNotePreview _startDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27b18(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112756088;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                        PTR_s__displayDidRefresh__112532b30);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar3);
    _objc_release(puVar2);
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setPaused__112654088,0);
  return;
}



/* Entry: 106a27bc0; end: 106a27bd3; -[SCChatAudioNotePreview _stopDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112756088),PTR_s_setPaused__112654088,1);
  return;
}



/* Entry: 106a27bd4; end: 106a27c5f; -[SCChatAudioNotePreview _cleanUpDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27bd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112756088;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c900(lVar3,param_2,puVar1,*(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38);
    _objc_release(puVar1);
    func_0x00010c069d00(*(undefined8 *)(param_1 + lVar4));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106a27c60; end: 106a27d5b; -[SCChatAudioNotePreview _drawBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27c60(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  _UIGraphicsGetCurrentContext();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xae);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bbe0();
  _objc_release(puVar2);
  func_0x00010bf20c00(param_1);
  _CGRectInset();
  _CGContextFillEllipseInRect(lVar1);
  puVar2 = *(undefined **)(param_1 + _DAT_112756068);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
  }
  func_0x00010c19bbe0(puVar2);
  func_0x00010bf20c00(param_1);
  _CGRectInset();
  _CGContextFillEllipseInRect(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106a27d5c; end: 106a27e87; -[SCChatAudioNotePreview _drawProgressArc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27d5c(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar2 = param_1;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  dVar3 = dVar2;
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar4 = *(double *)(param_2 + _DAT_11275607c);
  if (600.0 <= dVar4) {
    dVar6 = 1.0;
    dVar5 = 0.0;
  }
  else {
    dVar5 = dVar4 * 0.5;
    dVar6 = 0.25;
    if (dVar4 * 0.25 <= 0.25) {
      dVar6 = dVar4 * 0.25;
    }
  }
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19960(param_1 * 0.5,dVar2 * 0.5,(dVar3 + -2.0) * 0.5,
                      (dVar5 + dVar5) * 3.141592653589793 + -1.5707963267948966,
                      (dVar5 + dVar6 + dVar5 + dVar6) * 3.141592653589793 + -1.5707963267948966,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb60();
  func_0x00010c1bdd00(*(undefined8 *)(param_2 + _DAT_112756090),puVar1);
  func_0x00010c20e8c0(*(undefined8 *)(param_2 + _DAT_11275608c));
  func_0x00010c25dba0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a27e88; end: 106a280ff; -[SCChatAudioNotePreview _drawWaveform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a27e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar5 = 7.0;
  uVar9 = 0x400c000000000000;
  func_0x00010bf20c00();
  _CGRectInset();
  dVar6 = dVar5;
  _CGRectGetMidX();
  dVar7 = dVar5;
  _CGRectGetMidY(dVar5,uVar9,param_3,param_4);
  dVar8 = dVar5;
  _CGRectGetWidth(dVar5,uVar9,param_3,param_4);
  dVar12 = (dVar8 + -2.0) / 96.0;
  _CGRectGetWidth(dVar5,uVar9,param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19960(dVar6,dVar7,dVar5 * 0.5,0,0x401921fb54442d18,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18,param_6,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb60();
  func_0x00010c1bdd00(dVar12 * 0.5,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_6,0xae);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8c0();
  _objc_release(puVar2);
  func_0x00010c25dba0(puVar1);
  dVar8 = 2.0;
  func_0x00010becc7c0(0x4000000000000000,0x3f75b573e0000000,param_5);
  dVar5 = 3.0;
  func_0x00010becc7c0(0x4008000000000000,0x3f80624de0000000,param_5);
  lVar4 = 0;
  dVar8 = dVar12 * dVar8;
  dVar11 = dVar8 + dVar12 * dVar5;
  dVar10 = dVar8 + dVar11 * 13.0;
  dVar5 = (dVar10 + dVar12 * dVar5 * 2.0) * 0.5;
  dVar10 = dVar8 * 0.5 - dVar10 * 0.5;
  lVar3 = (long)_DAT_112756084;
  do {
    dVar12 = dVar10 / dVar5;
    dVar12 = *(double *)(param_5 + lVar3 + lVar4) *
             dVar5 * (double)SQRT((float)(1.0 - dVar12 * dVar12));
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d18c0(dVar6 + dVar10,dVar7 + dVar12);
    func_0x00010bef98c0(dVar6 + dVar10,dVar7 - dVar12,puVar2);
    func_0x00010c1bdb60(puVar2,param_6,1);
    func_0x00010c1bdd00(dVar8,puVar2);
    func_0x00010c20e8c0(*(undefined8 *)(param_5 + _DAT_112756064));
    func_0x00010c25dba0(puVar2);
    dVar10 = dVar11 + dVar10;
    _objc_release(puVar2);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a28100; end: 106a28167; -[SCChatAudioNotePreview _toDeviceLength:percentageOfScreen:] */

double FUN_106a28100(double param_1,double param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  if (param_2 * dVar2 <= param_1) {
    param_1 = param_2 * dVar2;
  }
  return param_1;
}



/* Entry: 106a28168; end: 106a281d7; -[SCChatAudioNotePreview .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a28168(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112756068,0);
  _objc_storeStrong(param_1 + _DAT_11275608c,0);
  _objc_storeStrong(param_1 + _DAT_112756064,0);
  _objc_storeStrong(param_1 + _DAT_112756088,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112756078,0);
  return;
}



/* Entry: 106a281d8; end: 106a282ab; -[SCChatAudioNoteRecorder init] */

undefined1 * FUN_106a281d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f4450;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0xa0) = 5;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126cfd10;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined **)((long)puVar1 + 0x90) = puVar2;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a282ac; end: 106a2846b; -[SCChatAudioNoteRecorder prepareNextRecordingWithCallback:] */

void FUN_106a282ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar1 = &puStack_c0;
  _objc_retain(param_3);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_106a2846c;
  uStack_60 = 0x106a2847c;
  uStack_58 = 0;
  puStack_78 = &uStack_80;
  _objc_initWeak(auStack_88,param_1);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_106a28484;
  puStack_a8 = &UNK_110953a68;
  _objc_copyWeak(auStack_90,auStack_88);
  puStack_98 = &uStack_80;
  _objc_retain(param_3);
  uStack_a0 = param_3;
  _objc_retainBlock(&puStack_c0);
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010bf46680(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf55480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aed60;
  func_0x00010c0d3da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf47660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puStack_78[5];
  puStack_78[5] = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 106a2846c; end: 106a28483;  */

void FUN_106a2846c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106a28484; end: 106a28623;  */

/* WARNING: Removing unreachable block (ram,0x000106a2859c) */

void FUN_106a28484(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010be8a3a0(lVar2);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = uVar7;
    _objc_release(uVar3);
    if (*(long *)(lVar2 + 0xa0) == 0) {
      lVar4 = lVar2;
      func_0x00010bf0f580(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010be63cc0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      *(long *)(lVar2 + 0x28) = lVar5;
      _objc_release(uVar3);
      puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cc60();
      _objc_release(puVar6);
      func_0x00010c255780(*(undefined8 *)(lVar2 + 0x10));
      puVar6 = PTR__OBJC_CLASS___AVAudioRecorder_1126b0d50;
      _objc_alloc();
      func_0x00010c057be0();
      _objc_retain(0);
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      *(undefined **)(lVar2 + 0x10) = puVar6;
      _objc_release(uVar3);
      func_0x00010c18b5e0(*(undefined8 *)(lVar2 + 0x10));
      iVar1 = (int)*(undefined8 *)(lVar2 + 0x10);
      func_0x00010c10a1c0();
      if (iVar1 == 0) {
        FUN_106a2b6b0(*(undefined8 *)(lVar2 + 0x90),1);
        *(undefined8 *)(lVar2 + 0xa0) = 6;
        func_0x00010bddf3e0(lVar2);
      }
      else {
        *(undefined8 *)(lVar2 + 0xa0) = 1;
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
      }
      _objc_release(0);
      _objc_release(lVar4);
    }
    else {
      func_0x00010bddf3e0(lVar2);
    }
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106a28624; end: 106a2862f; -[SCChatAudioNoteRecorder maxRecordDuration] */

undefined8 FUN_106a28624(void)

{
  return 0x4082c00000000000;
}



/* Entry: 106a28630; end: 106a286f7; -[SCChatAudioNoteRecorder startAudioNoteRecordingAsynchronously] */

void FUN_106a28630(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c136400(puVar1);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a286f8; end: 106a287af;  */

void FUN_106a286f8(long param_1,int param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      FUN_106a2b5c0(*(undefined8 *)(lVar1 + 0x90),1);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_106a287b0;
      puStack_40 = &UNK_1108434b0;
      _objc_copyWeak(auStack_38,param_1 + 0x20);
      func_0x000100162d98("APPSTORE",&puStack_58);
      _objc_destroyWeak(auStack_38);
    }
    else {
      func_0x00010be72a00(lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106a287b0; end: 106a2897f;  */

void FUN_106a287b0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e67bd8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67bd8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = &PTR____CFConstantStringClassReference_110e67bf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67bf8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af180;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,param_1 + 0x20);
  ppuVar8 = ppuVar2;
  func_0x00010c235c40(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  puVar7 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar7);
  _objc_retain(ppuVar8);
  func_0x00010c18f620(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 106a28980; end: 106a28a0b;  */

void FUN_106a28980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106a28a0c; end: 106a28ab3; -[SCChatAudioNoteRecorder _performStartAudioNoteRecordingAsynchronously] */

void FUN_106a28a0c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a28ab4; end: 106a28adf;  */

void FUN_106a28ab4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebf7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a28ae0; end: 106a28bbf; -[SCChatAudioNoteRecorder _startAudioNoteRecordingAsynchronously] */

void FUN_106a28ae0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_2 + 0xa0) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x40) = 0;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(undefined8 *)(param_2 + 0x98) = param_1;
  _objc_release(puVar2);
  _objc_initWeak(auStack_28,param_2);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c109c00(param_2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a28bc0; end: 106a28beb;  */

void FUN_106a28bc0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a28bec; end: 106a28ca7; -[SCChatAudioNoteRecorder _startRecording] */

void FUN_106a28bec(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xa0) == 1) {
    func_0x00010c1c7620(*(undefined8 *)(param_1 + 0x10),param_2,1);
    func_0x00010c24de60(param_1);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0x3fd3333333333333;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c123680(0x4082c00000000000);
    if (iVar1 != 0) {
      lVar2 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf0f5a0();
      _objc_release(lVar2);
      *(undefined8 *)(param_1 + 0xa0) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010c24f6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0xb0),PTR_s_startNoteTimeout_1126717e0);
      return;
    }
    FUN_106a2b728(*(undefined8 *)(param_1 + 0x90),1);
  }
  else {
    FUN_106a2b7a0(*(undefined8 *)(param_1 + 0x90),1);
  }
  *(undefined8 *)(param_1 + 0xa0) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 106a28ca8; end: 106a28d4f; -[SCChatAudioNoteRecorder stopAudioNoteRecordingAsynchronously] */

void FUN_106a28ca8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106a28d50; end: 106a28d7b;  */

void FUN_106a28d50(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec2e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a28d7c; end: 106a28e8b; -[SCChatAudioNoteRecorder _stopAudioNoteRecordingAsynchronously] */

void FUN_106a28d7c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 == 2) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c07bee0();
    if (iVar1 != 0) {
      *(undefined8 *)(param_1 + 0xa0) = 5;
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_stop_112673008);
      return;
    }
    lVar3 = *(long *)(param_1 + 0xa0);
LAB_106a28e38:
    if (lVar3 == 0) {
      FUN_106a2b818(*(undefined8 *)(param_1 + 0x90),1);
    }
    else {
      FUN_106a2b890();
    }
    *(undefined8 *)(param_1 + 0xa0) = 6;
  }
  else if (lVar3 == 4) {
    func_0x00010c239880(param_1);
  }
  else {
    if (lVar3 != 3) goto LAB_106a28e38;
    dVar4 = *(double *)(param_1 + 0x40);
    if (0.3 < dVar4) {
      lVar3 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf51e00(uVar2);
      func_0x00010bf0f540(dVar4,lVar3);
      _objc_release(uVar2);
      goto LAB_106a28e74;
    }
  }
  lVar3 = param_1 + 0xa8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010bf0f540(0);
LAB_106a28e74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106a28e8c; end: 106a28f6b; -[SCChatAudioNoteRecorder audioRecorderDidFinishRecording:successfully:] */

void FUN_106a28e8c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a28f6c; end: 106a28fa3;  */

void FUN_106a28f6c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd1360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a28fa4; end: 106a29147; -[SCChatAudioNoteRecorder _audioRecorderDidFinishRecording:successfully:] */

void FUN_106a28fa4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_58 [24];
  
  if (param_4 != *(long *)(param_2 + 0x10)) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0040a0();
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined **)(param_2 + 0x38) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_106a2b908(*(undefined8 *)(param_2 + 0x90),1);
    func_0x00010bdc8a40(param_2);
  }
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0b9e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar1 == (undefined *)0x0) {
    FUN_106a2b980(*(undefined8 *)(param_2 + 0x90),1);
    func_0x00010bdc8a40(param_2);
  }
  else {
    func_0x00010bf8b160(auStack_58,puVar1);
    _CMTimeGetSeconds(auStack_58);
    *(undefined8 *)(param_2 + 0x40) = param_1;
  }
  if (*(long *)(param_2 + 0xa0) == 5) {
    dVar5 = *(double *)(param_2 + 0x40);
    lVar3 = param_2 + 0xa8;
    _objc_loadWeakRetained(lVar3);
    if (dVar5 <= 0.3) {
      func_0x00010bf0f540(0,lVar3);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010bf51e00(uVar2);
      func_0x00010bf0f540(dVar5,lVar3);
      _objc_release(uVar2);
    }
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_2 + 0xa0) = 3;
  func_0x00010bddf3e0(param_2);
  _objc_release(puVar1);
  return;
}



/* Entry: 106a29148; end: 106a29247; -[SCChatAudioNoteRecorder audioRecorderEncodeErrorDidOccur:error:] */

void FUN_106a29148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
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



/* Entry: 106a29248; end: 106a2927b;  */

void FUN_106a29248(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd1380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a2927c; end: 106a292ff; -[SCChatAudioNoteRecorder _audioRecorderEncodeErrorDidOccur:error:] */

void FUN_106a2927c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != *(long *)(param_1 + 0x10)) {
    return;
  }
  FUN_106a2b9f8(*(undefined8 *)(param_1 + 0x90),1);
  func_0x00010bdc8a40(param_1);
  if (*(long *)(param_1 + 0xa0) == 5) {
    func_0x00010c239880(param_1);
    lVar1 = param_1 + 0xa8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf0f540(0);
    _objc_release(lVar1);
  }
  *(undefined8 *)(param_1 + 0xa0) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bddf3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanup_112555698);
  return;
}



/* Entry: 106a29300; end: 106a29313; -[SCChatAudioNoteRecorder showRecordingFailureStatusBar] */

void FUN_106a29300(void)

{
  char *pcVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  char *pcStack_28;
  
  pcVar1 = "APPSTORE";
  func_0x0001000d77b8("APPSTORE",&PTR___NSConcreteGlobalBlock_110953ab8);
  func_0x000107c61180();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c3b500;
  puStack_30 = &UNK_110849530;
  pcStack_28 = pcVar1;
  func_0x000107c61174();
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  func_0x000107c61170(pcStack_28);
  func_0x000107c61170(pcVar1);
  return;
}



/* Entry: 106a29314; end: 106a2938f;  */

void FUN_106a29314(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e67c18;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e67c18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238720(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106a29390; end: 106a293e7; -[SCChatAudioNoteRecorder startAudioNoteRecorderTimer] */

void FUN_106a29390(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106a293e8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106a293e8; end: 106a2947b;  */

void FUN_106a293e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c270940(0x3f86c16c16c16c17,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_2,
                      *(undefined8 *)(param_1 + 0x20),PTR_s_recorderTimerFired__112532b40,0,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106a2947c; end: 106a294b7; -[SCChatAudioNoteRecorder stopAudioNoteRecorderTimer] */

void FUN_106a2947c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106a294b8; end: 106a2957b; -[SCChatAudioNoteRecorder recorderTimerFired:] */

void FUN_106a294b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106a2957c; end: 106a295a7;  */

void FUN_106a2957c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be87ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a295a8; end: 106a296e3; -[SCChatAudioNoteRecorder _recorderTimerFired] */

void FUN_106a295a8(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  double *pdVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double *pdVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double adStack_a8 [14];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c287ca0(*(undefined8 *)(param_2 + 0x10));
  pdVar7 = (double *)0x0;
  func_0x00010c0f6ee0(*(undefined8 *)(param_2 + 0x10));
  dVar9 = (double)param_1 * 0.05;
  ___exp10();
  uVar8 = *(ulong *)(param_2 + 0x30);
  if ((uVar8 & 1) == 0) {
    pdVar7 = (double *)0x1;
    func_0x00010c1c7620(*(undefined8 *)(param_2 + 0x10));
    uVar8 = *(ulong *)(param_2 + 0x30);
  }
  dVar10 = *(double *)(param_2 + 0x48);
  dVar12 = (double)NEON_fminnm(dVar9 / dVar10,0x3ff0000000000000);
  dVar13 = 0.0;
  if (0.0 <= dVar12) {
    dVar13 = dVar12;
  }
  if (dVar10 <= dVar9) {
    dVar10 = dVar9;
  }
  uVar11 = NEON_fminnm(dVar10,0x3fe3333333333333);
  *(undefined8 *)(param_2 + 0x48) = uVar11;
  lVar1 = param_2 + 0x50;
  uVar2 = uVar8 & 7;
  if (-1 < (long)-uVar8) {
    uVar2 = -(-uVar8 & 7);
  }
  *(double *)(lVar1 + uVar2 * 8) = dVar13;
  if ((uVar8 & 7) == 0) {
    uVar8 = 0;
    do {
      uVar2 = uVar8 + 1;
      adStack_a8[uVar8] =
           (*(double *)(lVar1 + (uVar8 >> 1) * 8) + *(double *)(lVar1 + (uVar2 >> 1) * 8)) * 0.5;
      uVar8 = uVar2;
    } while (uVar2 != 0xe);
    pdVar7 = adStack_a8;
    func_0x00010c1683e0(*(undefined8 *)(param_2 + 0xb0));
    uVar8 = *(ulong *)(param_2 + 0x30);
  }
  *(ulong *)(param_2 + 0x30) = uVar8 + 1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  pdVar3 = pdVar7;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_3,&PTR____CFConstantStringClassReference_110e04938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pdVar7);
  _objc_release();
  puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_3,&PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar6,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(pdVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a296e4; end: 106a297e7; -[SCChatAudioNoteRecorder _nextTempFileUrlWithExtension:] */

void FUN_106a296e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e04938);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106a297e8; end: 106a29873; -[SCChatAudioNoteRecorder _removeTempFile] */

void FUN_106a297e8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  _objc_sync_enter(uVar2);
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
  }
  _objc_sync_exit(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a29874; end: 106a29953; -[SCChatAudioNoteRecorder audioNoteRecorderSettings] */

void FUN_106a29874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)PTR__AVFormatIDKey_11034cf30;
  uStack_60 = *(undefined8 *)PTR__AVSampleRateKey_11034cf60;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7be8;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantFloatNumber_111186400;
  uStack_58 = *(undefined8 *)PTR__AVNumberOfChannelsKey_11034cf58;
  uStack_50 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_11034cf38;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c00;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c18;
  uStack_48 = *(undefined8 *)PTR__AVEncoderBitRateKey_11034cf28;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7c30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_68,5);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar1 + 0x20) != 0) {
    puVar2 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    *(undefined8 *)(puVar1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106a29954; end: 106a299b3; -[SCChatAudioNoteRecorder _releaseAudioSessionTokenIfNeeded] */

void FUN_106a29954(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = PTR_PTR_1126aed60;
    func_0x00010c0d3da0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1288c0();
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106a299b4; end: 106a29a1f; -[SCChatAudioNoteRecorder _cleanup] */

void FUN_106a299b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c255a20();
  func_0x00010be8a3a0(param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010c07bee0();
    if ((int)lVar1 != 0) {
      func_0x00010c255780(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010bf6c620();
      goto LAB_106a29a00;
    }
  }
  func_0x00010be8d9c0(param_1);
LAB_106a29a00:
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



/* Entry: 106a29a20; end: 106a29a93; -[SCChatAudioNoteRecorder _addTimerForFailedRecordAttempt] */

void FUN_106a29a20(double param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  if (*(long *)(param_2 + 0x90) != 0) {
    FUN_106a2ba70(*(long *)(param_2 + 0x90),(long)((param_1 - *(double *)(param_2 + 0x98)) * 1000.0)
                 );
  }
  *(undefined8 *)(param_2 + 0x98) = 0;
  return;
}



/* Entry: 106a29a94; end: 106a29a9b; -[SCChatAudioNoteRecorder state] */

undefined8 FUN_106a29a94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106a29a9c; end: 106a29ab3; -[SCChatAudioNoteRecorder delegate] */

void FUN_106a29a9c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a29ab4; end: 106a29abf; -[SCChatAudioNoteRecorder setDelegate:] */

void FUN_106a29ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 106a29ac0; end: 106a29ac7; -[SCChatAudioNoteRecorder audioPreview] */

undefined8 FUN_106a29ac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106a29ac8; end: 106a29af7; -[SCChatAudioNoteRecorder setAudioPreview:] */

void FUN_106a29ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a29af8; end: 106a29b77; -[SCChatAudioNoteRecorder .cxx_destruct] */

void FUN_106a29af8(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a29b78; end: 106a29bd7; -[SCChatInputAudioNoteTrack init] */

undefined1 * FUN_106a29b78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bdf5ae0(puVar1);
    func_0x00010bde69a0(puVar1);
    func_0x00010bec5ae0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106a29bd8; end: 106a29c1f; -[SCChatInputAudioNoteTrack layoutSubviews] */

void FUN_106a29bd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f4458;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be8e340(param_1);
  return;
}



/* Entry: 106a29c20; end: 106a29c27; +[SCChatInputAudioNoteTrack requiresConstraintBasedLayout] */

undefined8 FUN_106a29c20(void)

{
  return 1;
}



/* Entry: 106a29c28; end: 106a29cdb; -[SCChatInputAudioNoteTrack setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a29c28(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + (long)_DAT_1127560d0) != param_3) {
    *(long *)(param_1 + (long)_DAT_1127560d0) = param_3;
    uVar1 = param_1;
    _UIAccessibilityIsReduceTransparencyEnabled();
    if ((uVar1 & 1) == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + (long)_DAT_1127560d4));
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(param_1);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bea7630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setShadowForStyle__112587730,param_3);
      return;
    }
  }
  return;
}



/* Entry: 106a29cdc; end: 106a29d5b; -[SCChatInputAudioNoteTrack _renderRoundedCorners] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a29cdc(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf20c00();
  _CGRectGetHeight();
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127560d4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1 * 0.5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106a29d5c; end: 106a29db7; -[SCChatInputAudioNoteTrack _stylize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a29d5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setShadowForStyle__112587730,*(undefined8 *)(param_1 + _DAT_1127560d0));
  return;
}



/* Entry: 106a29db8; end: 106a2a03f; -[SCChatInputAudioNoteTrack _setShadowForStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a29db8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_80 = *(undefined8 *)(param_1 + _DAT_1127560d8);
  uStack_78 = *(undefined8 *)(param_1 + _DAT_1127560dc);
  uStack_70 = *(undefined8 *)(param_1 + _DAT_1127560e0);
  uStack_68 = *(undefined8 *)(param_1 + _DAT_1127560e4);
  uStack_60 = *(undefined8 *)(param_1 + _DAT_1127560e8);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,5);
  _objc_retainAutoreleasedReturnValue();
  if (1 < param_3) {
    if (param_3 != 2) goto LAB_106a2a000;
    uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(uVar4,uVar5);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(lVar2);
    _objc_release(puVar3);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0);
    _objc_release(lVar2);
    func_0x00010bf97e80(puVar1);
  }
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  lVar2 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(lVar2);
  _objc_release(puVar3);
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e4ccccd);
  _objc_release(lVar2);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4010000000000000);
  _objc_release(param_1);
  func_0x00010bf97e80(puVar1);
LAB_106a2a000:
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar4 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar4);
  _objc_release(puVar1);
  uVar4 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e4ccccd);
  _objc_release(uVar4);
  uVar4 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1fe840(0x4010000000000000,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106a2a040; end: 106a2a13b;  */

void FUN_106a2a040(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0,0x3ff0000000000000);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar1);
  _objc_release(puVar2);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e4ccccd);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1fe840(0x4010000000000000,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


