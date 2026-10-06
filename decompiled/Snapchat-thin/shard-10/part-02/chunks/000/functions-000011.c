/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1079d0ee0; end: 1079d0f1f; -[SCPublicUserActionSheetDataProvider _loadTileMedia] */

void FUN_1079d0ee0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000108f526a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1288f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_reload_112627c58);
  return;
}



/* Entry: 1079d0f20; end: 1079d0f97; -[SCPublicUserActionSheetDataProvider _subscribeStateDidUpdateForStoryDedupeFp:] */

void FUN_1079d0f20(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c282800();
  if (*(long *)(param_1 + 0x48) == param_3) {
    lVar1 = *(long *)(param_1 + 0x50);
    func_0x00010c2600c0(lVar1,param_2,param_3);
    if (lVar1 != *(long *)(param_1 + 0x68)) {
      *(long *)(param_1 + 0x68) = lVar1;
      if (lVar1 == 0) {
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      param_1 = param_1 + 0x88;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1079d0f98; end: 1079d1007; -[SCPublicUserActionSheetDataProvider _notificationStateDidUpdateForStoryDedupeFp:] */

void FUN_1079d0f98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c282800();
  if (*(long *)(param_1 + 0x48) == param_3) {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c0dca40(lVar1,param_2,param_3);
    if (lVar1 != *(long *)(param_1 + 0x70)) {
      *(long *)(param_1 + 0x70) = lVar1;
      param_1 = param_1 + 0x88;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1079d1008; end: 1079d101f; -[SCPublicUserActionSheetDataProvider delegate] */

void FUN_1079d1008(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079d1020; end: 1079d102b; -[SCPublicUserActionSheetDataProvider setDelegate:] */

void FUN_1079d1020(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 1079d102c; end: 1079d10c3; -[SCPublicUserActionSheetDataProvider .cxx_destruct] */

void FUN_1079d102c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d10c4; end: 1079d130f; -[SCPublisherActionSheetDataProvider initWithPublisher:storyDedupeFp:tileId:tileImageUrl:tileHeadline:editionId:publisherTimestampMsecs:shareableType:showMetadata:subscribeStatusManager:notificationStatusManager:lazyOffPlatformLinkGenerationService:circumstanceEngine:] */

undefined8 *
FUN_1079d10c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126f91c8;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    puVar2[2] = param_4;
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar3);
    puVar2[6] = param_8;
    puVar2[7] = param_9;
    puVar2[8] = param_10;
    _objc_retain(param_11);
    uVar3 = puVar2[9];
    puVar2[9] = param_11;
    _objc_release(uVar3);
    uVar3 = param_12;
    func_0x00010c2600c0();
    puVar2[10] = uVar3;
    _objc_retain(param_12);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_12;
    _objc_release(uVar3);
    uVar3 = param_13;
    func_0x00010c0dca40();
    puVar2[0xb] = uVar3;
    _objc_retain(param_13);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_13;
    _objc_release(uVar3);
    func_0x00010bef9980(puVar2[0xc]);
    func_0x00010bef9980(puVar2[0xd]);
    _objc_retain(param_14);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_14;
    _objc_release(uVar3);
    _objc_retain(param_15);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_15;
    _objc_release(uVar3);
    uVar1 = (undefined1)puVar2[0xf];
    func_0x000108f4ae38();
    *(undefined1 *)(puVar2 + 0x10) = uVar1;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1079d1310; end: 1079d1367; -[SCPublisherActionSheetDataProvider dealloc] */

void FUN_1079d1310(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x60),param_2,param_1);
  func_0x00010c12cf80(*(undefined8 *)(param_1 + 0x68));
  puStack_28 = PTR_PTR_1126f91c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1079d1368; end: 1079d13bf; -[SCPublisherActionSheetDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1079d1368(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010bdc4700(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079d13c0; end: 1079d13f3; -[SCPublisherActionSheetDataProvider reload] */

void FUN_1079d13c0(long param_1)

{
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079d13f4; end: 1079d1a3b; -[SCPublisherActionSheetDataProvider _actionSheetViewModel] */

void FUN_1079d13f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong in_stack_ffffffffffffff80;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar14 = *(long *)(param_1 + 8);
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(lVar14);
  lVar9 = lVar14;
  FUN_1079d3474(lVar14,uVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4860;
  lVar2 = lVar14;
  func_0x00010bfad760(lVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fde60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x000108fec800(puVar3,puVar4,0,0,0,0,0,0,in_stack_ffffffffffffff80 & 0xffffffffffffff00,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  ppuVar13 = &PTR____CFConstantStringClassReference_110ea86d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea86d8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar13;
  FUN_1079d2f38();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar14);
  lVar2 = lVar14;
  func_0x00010bfb57e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c08fa60();
  lVar16 = lVar14;
  if (lVar7 == 0) {
    func_0x00010c11b3a0(lVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb57e0(lVar14);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar14);
  _objc_release(lVar2);
  puVar4 = puVar5;
  func_0x000107d4cba0(puVar5,ppuVar6,lVar16,ppuVar13,0,lVar9,lVar9,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  _objc_release(ppuVar6);
  _objc_release(ppuVar13);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar9);
  _objc_release(lVar14);
  func_0x00010befa120(puVar1);
  _objc_release(puVar4);
  puVar3 = PTR_PTR_1126d5b80;
  func_0x00010c11b1e0(*(undefined8 *)(param_1 + 8));
  uVar15 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11b3a0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11b660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  lVar16 = *(long *)(param_1 + 8);
  _objc_retain(lVar16);
  lVar9 = lVar16;
  func_0x00010bfb57e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c08fa60();
  lVar7 = lVar16;
  if (lVar2 == 0) {
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar16);
  _objc_release(lVar9);
  uVar15 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001079d392c();
  _objc_retainAutoreleasedReturnValue();
  FUN_1079d2d58(uVar15,lVar7,lVar9,*(undefined8 *)(param_1 + 0x10),2,*(undefined8 *)(param_1 + 0x38)
                ,puVar3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar15);
  _objc_release(lVar9);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_1079d3118();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar9);
  }
  uVar8 = *(ulong *)(param_1 + 0x50);
  if ((uVar8 & 0xfffffffffffffffd) == 0) {
    lVar9 = lVar7;
    func_0x0001079d2b28(lVar7,*(undefined8 *)(param_1 + 0x10),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar9);
    uVar8 = *(ulong *)(param_1 + 0x50);
  }
  if ((uVar8 | 2) == 3) {
    uVar15 = *(undefined8 *)(param_1 + 0x58);
    func_0x0001079d2c5c(uVar15,*(undefined8 *)(param_1 + 0x10),lVar7,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar15);
    uVar8 = *(ulong *)(param_1 + 0x50);
  }
  if (1 < uVar8 - 3) {
    func_0x0001079d2a10(uVar8,*(undefined8 *)(param_1 + 0x10),0,lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar8);
  }
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  FUN_1079d2e88(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar15);
  if (*(long *)(param_1 + 0x40) == 1) {
    lVar9 = *(long *)(param_1 + 8);
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 == 0) {
      uVar15 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar10;
      func_0x00010bfbf8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
    }
    puVar5 = PTR_PTR_1126d58f8;
    _objc_retain(uVar15);
    _objc_retain(lVar7);
    _objc_alloc(puVar5);
    func_0x00010c009e20();
    _objc_release(uVar15);
    puVar11 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar13 = &PTR____CFConstantStringClassReference_110ea86f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea86f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar12 = puVar4;
    func_0x000107d4ba6c(puVar4,0,&PTR____CFConstantStringClassReference_110ea86b8,puVar11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar13);
    _objc_release(puVar11);
    _objc_release(puVar5);
    func_0x00010befa120(puVar1);
    _objc_release(puVar12);
    _objc_release(uVar15);
    _objc_release(lVar9);
  }
  puVar4 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  ppuVar13 = &PTR____CFConstantStringClassReference_110eb67b8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb67b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar4);
  _objc_release(ppuVar13);
  _objc_release(puVar5);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079d1a3c; end: 1079d1b7f; -[SCPublisherActionSheetDataProvider didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1079d1a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar1 == 0) goto LAB_1079d1b60;
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010be64420(param_1);
  }
  else {
    uVar2 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    uVar5 = uVar2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    func_0x00010bec7100(param_1);
  }
  _objc_release(uVar5);
LAB_1079d1b60:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d1b80; end: 1079d1bf7; -[SCPublisherActionSheetDataProvider _subscribeStateDidUpdateForStoryDedupeFp:] */

void FUN_1079d1b80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c282800();
  if (*(long *)(param_1 + 0x10) == param_3) {
    lVar1 = *(long *)(param_1 + 0x60);
    func_0x00010c2600c0(lVar1,param_2,param_3);
    if (lVar1 != *(long *)(param_1 + 0x50)) {
      *(long *)(param_1 + 0x50) = lVar1;
      if (lVar1 == 0) {
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      param_1 = param_1 + 0x88;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1079d1bf8; end: 1079d1c67; -[SCPublisherActionSheetDataProvider _notificationStateDidUpdateForStoryDedupeFp:] */

void FUN_1079d1bf8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c282800();
  if (*(long *)(param_1 + 0x10) == param_3) {
    lVar1 = *(long *)(param_1 + 0x68);
    func_0x00010c0dca40(lVar1,param_2,param_3);
    if (lVar1 != *(long *)(param_1 + 0x58)) {
      *(long *)(param_1 + 0x58) = lVar1;
      param_1 = param_1 + 0x88;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf64160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1079d1c68; end: 1079d1c7f; -[SCPublisherActionSheetDataProvider delegate] */

void FUN_1079d1c68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079d1c80; end: 1079d1c8b; -[SCPublisherActionSheetDataProvider setDelegate:] */

void FUN_1079d1c80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 1079d1c8c; end: 1079d1d17; -[SCPublisherActionSheetDataProvider .cxx_destruct] */

void FUN_1079d1c8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d1d18; end: 1079d1dbb; -[SCSpotlightTileActionSheetDataProvider initWithStory:storiesConfigProvider:] */

undefined1 *
FUN_1079d1d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f91d0;
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



/* Entry: 1079d1dbc; end: 1079d29b3; -[SCSpotlightTileActionSheetDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1079d1dbc(long param_1,undefined8 param_2,long param_3)

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
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_a0;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_3 == 0) {
    return;
  }
  _objc_retain(param_3);
  _objc_opt_new();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010afef86c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x00010bf5b480();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (lVar6 == 0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar4;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf85d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR_PTR_1126b15c8;
    _objc_retain(lVar2);
    _objc_retain(lVar5);
    _objc_alloc();
    lVar7 = lVar2;
    func_0x00010c2923e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c292e20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    func_0x00010bff7be0();
    lVar9 = lVar2;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar2;
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c05c0e0();
    _objc_release(lVar5);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(puVar19);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c2328;
  func_0x00010bf71480(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar11;
  func_0x00010bf1f320();
  _objc_release(puVar19);
  _objc_release(uVar11);
  if ((int)uVar18 == 0) goto LAB_1079d23e0;
  lVar2 = lVar4;
  func_0x00010bf5b480(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf85d80(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010bf24fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 8);
  _objc_retain(lVar2);
  _objc_retain(lVar5);
  _objc_retain(lVar6);
  _objc_retain(lVar7);
  _objc_retain(uVar18);
  lVar8 = lVar6;
  func_0x00010c08fa60();
  if (lVar8 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
LAB_1079d21d0:
      puStack_a0 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
    }
    else {
      puStack_a0 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126b45f8;
      if (puStack_a0 == (undefined *)0x0) goto LAB_1079d21d0;
      puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe8f80(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
    }
    puVar12 = PTR_PTR_1126b4608;
    _objc_alloc();
    func_0x00010bff7b20();
    puVar13 = PTR_PTR_1126d58f0;
    _objc_alloc(PTR_PTR_1126d58f0);
    lVar8 = lVar2;
    func_0x00010c2923e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar18;
    func_0x00010c25a160(uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c049180(puVar13);
    _objc_release(uVar11);
    _objc_release(lVar8);
    puVar14 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar15 = puVar14;
    FUN_1079d2f38();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c292e20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar12;
    func_0x000107d4cba0(puVar12,puVar15,lVar5,lVar8,0,puVar14,puVar14,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar17);
    _objc_release(puStack_a0);
  }
  _objc_release(uVar18);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (puVar19 != (undefined *)0x0) {
    func_0x00010befa120(puVar1);
  }
  if (puVar20 != (undefined *)0x0) {
    uVar18 = *(undefined8 *)(param_1 + 8);
    func_0x00010c259740(uVar18);
    puVar17 = puVar20;
    func_0x0001079d3198(puVar20,uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar17);
  }
  _objc_release(puVar19);
LAB_1079d23e0:
  uVar18 = *(undefined8 *)(param_1 + 8);
  func_0x00010c259740(uVar18);
  ppuVar16 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x0001079d2b28(&PTR____CFConstantStringClassReference_110daafd8,uVar18,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(ppuVar16);
  lVar2 = lVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar5 = lVar4;
    func_0x00010bf5b480();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar19 = PTR_PTR_1126d5b80;
    if (lVar6 != 0) {
      lVar2 = lVar4;
      func_0x00010c241220(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c26e100();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c26ebe0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      if (lVar6 == 0) {
        lVar7 = lVar4;
        func_0x00010c26ebe0(lVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar8 = lVar4;
      func_0x00010bf5b480(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24c580(puVar19);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar8);
      if (lVar6 == 0) {
        _objc_release(lVar7);
      }
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      lVar2 = lVar3;
      func_0x00010bf85d80(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x0001079d392c();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_1 + 8);
      func_0x00010c259740(uVar18);
      uVar11 = 0;
      FUN_1079d2d58(0,lVar2,lVar5,uVar18,0xd);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      func_0x00010befa120(puVar1);
      _objc_release(uVar11);
      _objc_release(puVar19);
    }
  }
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c2328;
  func_0x00010bf71480(PTR_PTR_1126c2328);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar11;
  func_0x00010bf1f320();
  _objc_release(puVar19);
  _objc_release(uVar11);
  if (((int)uVar18 != 0) && (puVar20 != (undefined *)0x0)) {
    lVar2 = lVar4;
    func_0x00010bf5b480(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010bf85d80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR_PTR_1126c6d80;
    _objc_retain(lVar2);
    _objc_retain(lVar3);
    _objc_opt_new(puVar19);
    lVar6 = lVar2;
    func_0x00010c2923e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc360(puVar19);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar2;
    func_0x00010c292e20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c2bc3c0(puVar19);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010c2ac7a0(puVar19);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf25140(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9a80(puVar19);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    lVar6 = lVar3;
    func_0x00010bf24fc0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9ac0(puVar19);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar6);
    func_0x00010c0e1a60(lVar3);
    _objc_release(lVar3);
    func_0x00010c2b4b60(puVar19);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar12 = puVar19;
    func_0x00010bf21f60(puVar19);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(lVar5);
    _objc_release(lVar2);
    func_0x00010c259740(*(undefined8 *)(param_1 + 8));
    lVar2 = lVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126d5900;
    _objc_retain(puVar20);
    _objc_retain(puVar12);
    _objc_alloc(puVar17);
    func_0x00010c049100();
    _objc_release(puVar20);
    _objc_release(puVar12);
    puVar13 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar16 = &PTR____CFConstantStringClassReference_110ea86f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea86f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar19);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar19;
    func_0x000107d4ba6c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(ppuVar16);
    _objc_release(puVar13);
    _objc_release(puVar17);
    func_0x00010befa120(puVar1);
    _objc_release(puVar14);
    _objc_release(lVar2);
    _objc_release(puVar12);
  }
  puVar19 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  puVar17 = puVar1;
  func_0x00010bf51e00(puVar1);
  ppuVar16 = &PTR____CFConstantStringClassReference_110eb67b8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eb67b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019f60(puVar19);
  _objc_release(ppuVar16);
  _objc_release(puVar17);
  (**(code **)(param_3 + 0x10))(param_3,puVar19);
  _objc_release(param_3);
  _objc_release(puVar19);
  _objc_release(puVar20);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1079d29b4; end: 1079d29cb; -[SCSpotlightTileActionSheetDataProvider delegate] */

void FUN_1079d29b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079d29cc; end: 1079d29d7; -[SCSpotlightTileActionSheetDataProvider setDelegate:] */

void FUN_1079d29cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1079d29d8; end: 1079d2a0f; -[SCSpotlightTileActionSheetDataProvider .cxx_destruct] */

void FUN_1079d29d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d2a10; end: 1079d2d57;  */

void FUN_1079d2a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e04f78;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e04f78,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  if (param_1 == 3) {
    func_0x0001079d39bc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  puVar3 = PTR_PTR_1126d5918;
  _objc_alloc(PTR_PTR_1126d5918);
  func_0x00010c04d620();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  ppuVar1 = ppuVar2;
  func_0x000107d4bc38(ppuVar2,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1079d2d58; end: 1079d2e87;  */

void FUN_1079d2d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x6;
  ulong in_x7;
  
  puVar1 = PTR_PTR_1126d5928;
  _objc_retain(in_x6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010c0521c0();
  _objc_release(in_x6);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  uVar3 = param_3;
  if ((in_x7 & 1) == 0) {
    func_0x000107d4bc38(param_3,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107d4bde8();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1079d2e88; end: 1079d2f37;  */

void FUN_1079d2e88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  puVar2 = PTR_PTR_1126d5938;
  _objc_alloc(PTR_PTR_1126d5938);
  func_0x00010c04d520();
  func_0x00010c01b460(puVar1);
  _objc_release(puVar2);
  func_0x0001079d38e4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079d2f38; end: 1079d3117;  */

void FUN_1079d2f38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_PTR_1126b56e0;
  _objc_opt_new();
  func_0x00010c2aba00(0x4038000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ab9e0(0x4038000000000000,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010b87f3b0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf33840();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe77e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1918;
  _objc_alloc(PTR_PTR_1126b1918);
  uVar6 = 0xce;
  func_0x00010900fd90(0xce);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar8 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar9 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar10 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  func_0x00010c053140(uVar7,uVar8,uVar9,uVar10,puVar2,param_2,0,puVar5,uVar6,4,0,4,0,1,0);
  _objc_release(puVar3);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126d5b90;
  _objc_alloc(PTR_PTR_1126d5b90);
  func_0x00010bff0060(uVar7,uVar8,uVar9,uVar10,0);
  puVar4 = PTR_PTR_1126b4740;
  func_0x00010bf25be0(PTR_PTR_1126b4740,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1079d3118; end: 1079d325b;  */

void FUN_1079d3118(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  puVar2 = puVar1;
  func_0x0001079d39d4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000107d4bc38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079d325c; end: 1079d3473;  */

void FUN_1079d325c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b64b8;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010bf25140(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174420(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c237cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c201be0(puVar1);
  _objc_release(uVar2);
  func_0x00010c20f460(puVar1);
  func_0x00010c1d5c40(puVar1);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1079d3474; end: 1079d3653;  */

void FUN_1079d3474(undefined *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d58e8;
  puVar3 = PTR_PTR_1126d58d8;
  puVar5 = param_1;
  if (param_2 == 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar3);
    func_0x00010bf25140(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bfb57e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010bff9e40(puVar3);
    ppuVar6 = &PTR_PTR_110a06980;
  }
  else {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    func_0x00010bf25140(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c11b1e0();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c11b3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = param_2;
    func_0x00010c237cc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff9e20(puVar1);
    _objc_release(lVar2);
    _objc_release(puVar3);
    ppuVar6 = &PTR_PTR_110a06988;
    puVar3 = puVar1;
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  puVar5 = *ppuVar6;
  _objc_retain(puVar5);
  puVar1 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  func_0x00010c01b460();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1079d3654; end: 1079d365f; +[SCDiscoverFeedActionSheetNotificationStatusManager announcerIdentifier] */

undefined ** FUN_1079d3654(void)

{
  return &PTR____CFConstantStringClassReference_110ea8758;
}



/* Entry: 1079d3660; end: 1079d3667; -[SCDiscoverFeedActionSheetNotificationStatusManager addListener:] */

void FUN_1079d3660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 1079d3668; end: 1079d366f; -[SCDiscoverFeedActionSheetNotificationStatusManager removeListener:] */

void FUN_1079d3668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1079d3670; end: 1079d3713; -[SCDiscoverFeedActionSheetNotificationStatusManager initWithNotificationState:storyDedupeFp:sectionKey:] */

undefined1 *
FUN_1079d3670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f91d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d3714; end: 1079d3893; -[SCDiscoverFeedActionSheetNotificationStatusManager updateStoryDedupeFp:notificationState:] */

long FUN_1079d3714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar1 = param_1;
  _objc_opt_class();
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_88 = &PTR____CFConstantStringClassReference_110ea8b78;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110ea8b98;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar2;
  func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110ea8c18;
  puVar7 = *(undefined **)(param_1 + 0x20);
  puVar4 = puVar7;
  puStack_68 = puVar3;
  if (puVar7 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar4;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar6,param_2,&PTR____CFConstantStringClassReference_110ea8a38,lVar1,puVar5);
  _objc_release(puVar5);
  if (puVar7 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar1;
  }
  ___stack_chk_fail();
  return *(long *)(lVar1 + 0x10);
}



/* Entry: 1079d3894; end: 1079d389b; -[SCDiscoverFeedActionSheetNotificationStatusManager notificationStateForStoryDedupeFp:] */

undefined8 FUN_1079d3894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d389c; end: 1079d38cb; -[SCDiscoverFeedActionSheetNotificationStatusManager .cxx_destruct] */

void FUN_1079d389c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d38cc; end: 1079d39eb;  */

void FUN_1079d38cc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea8778;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ea8778,
                      &PTR____CFConstantStringClassReference_110ea8798,0);
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



/* Entry: 1079d39ec; end: 1079d3a33; -[SCDiscoverFeedViewPromotedStoryActionDataModel initWithStoryDedupeFp:] */

void FUN_1079d39ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f91e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1079d3a34; end: 1079d3a57; -[SCDiscoverFeedViewPromotedStoryActionDataModel copyWithZone:] */

undefined8 FUN_1079d3a34(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d3a58; end: 1079d3a5f; -[SCDiscoverFeedViewPromotedStoryActionDataModel hash] */

undefined8 FUN_1079d3a58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d3a60; end: 1079d3ae7; -[SCDiscoverFeedViewPromotedStoryActionDataModel isEqual:] */

bool FUN_1079d3a60(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1079d3ae8; end: 1079d3aef; -[SCDiscoverFeedViewPromotedStoryActionDataModel storyDedupeFp] */

undefined8 FUN_1079d3ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d3af0; end: 1079d3b67; -[SCDiscoverFeedAboutAdsActionDataModel initWithPromotedStory:] */

undefined1 * FUN_1079d3af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f91e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d3b68; end: 1079d3b8b; -[SCDiscoverFeedAboutAdsActionDataModel copyWithZone:] */

undefined8 FUN_1079d3b68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d3b8c; end: 1079d3b93; -[SCDiscoverFeedAboutAdsActionDataModel hash] */

void FUN_1079d3b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1079d3b94; end: 1079d3c23; -[SCDiscoverFeedAboutAdsActionDataModel isEqual:] */

long FUN_1079d3b94(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d3c08;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1079d3c08;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1079d3c08;
    }
  }
  lVar3 = 1;
LAB_1079d3c08:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d3c24; end: 1079d3c2b; -[SCDiscoverFeedAboutAdsActionDataModel promotedStory] */

undefined8 FUN_1079d3c24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d3c2c; end: 1079d3c37; -[SCDiscoverFeedAboutAdsActionDataModel .cxx_destruct] */

void FUN_1079d3c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d3c38; end: 1079d3c7f; -[SCDiscoverFeedHideStoryActionDataModel initWithStoryDedupeFp:] */

void FUN_1079d3c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f91f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1079d3c80; end: 1079d3ca3; -[SCDiscoverFeedHideStoryActionDataModel copyWithZone:] */

undefined8 FUN_1079d3c80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d3ca4; end: 1079d3cab; -[SCDiscoverFeedHideStoryActionDataModel hash] */

undefined8 FUN_1079d3ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d3cac; end: 1079d3d33; -[SCDiscoverFeedHideStoryActionDataModel isEqual:] */

bool FUN_1079d3cac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1079d3d34; end: 1079d3d3b; -[SCDiscoverFeedHideStoryActionDataModel storyDedupeFp] */

undefined8 FUN_1079d3d34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d3d3c; end: 1079d3dc7; -[SCDiscoverFeedNotificationsActionDataModel initWithStoryDedupeFp:currentState:displayName:] */

undefined1 *
FUN_1079d3d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f91f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d3dc8; end: 1079d3deb; -[SCDiscoverFeedNotificationsActionDataModel copyWithZone:] */

undefined8 FUN_1079d3dc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d3dec; end: 1079d3e4f; -[SCDiscoverFeedNotificationsActionDataModel hash] */

undefined8 * FUN_1079d3dec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079d3ee4;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_1079d3ee4;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar4 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1079d3ee4;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_1079d3ee4:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 1079d3e50; end: 1079d3eff; -[SCDiscoverFeedNotificationsActionDataModel isEqual:] */

long FUN_1079d3e50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d3ee4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_1079d3ee4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_1079d3ee4;
    }
  }
  lVar3 = 1;
LAB_1079d3ee4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d3f00; end: 1079d3f07; -[SCDiscoverFeedNotificationsActionDataModel storyDedupeFp] */

undefined8 FUN_1079d3f00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d3f08; end: 1079d3f0f; -[SCDiscoverFeedNotificationsActionDataModel currentState] */

undefined8 FUN_1079d3f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d3f10; end: 1079d3f17; -[SCDiscoverFeedNotificationsActionDataModel displayName] */

undefined8 FUN_1079d3f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d3f18; end: 1079d3f23; -[SCDiscoverFeedNotificationsActionDataModel .cxx_destruct] */

void FUN_1079d3f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1079d3f24; end: 1079d3f6b; -[SCDiscoverFeedRelatedAccountsActionDataModel initWithStoryDedupeFp:] */

void FUN_1079d3f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9200;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1079d3f6c; end: 1079d3f8f; -[SCDiscoverFeedRelatedAccountsActionDataModel copyWithZone:] */

undefined8 FUN_1079d3f6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d3f90; end: 1079d3f97; -[SCDiscoverFeedRelatedAccountsActionDataModel hash] */

undefined8 FUN_1079d3f90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d3f98; end: 1079d401f; -[SCDiscoverFeedRelatedAccountsActionDataModel isEqual:] */

bool FUN_1079d3f98(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1079d4020; end: 1079d4027; -[SCDiscoverFeedRelatedAccountsActionDataModel storyDedupeFp] */

undefined8 FUN_1079d4020(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d4028; end: 1079d4113; -[SCDiscoverFeedReportTileActionDataModel initWithCoder:] */

undefined1 * FUN_1079d4028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9208;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d4114; end: 1079d420f; -[SCDiscoverFeedReportTileActionDataModel initWithTileHeadline:displayName:storyDedupeFp:storyType:timestampMsecs:storyData:] */

undefined1 *
FUN_1079d4114(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f9208;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d4210; end: 1079d4233; -[SCDiscoverFeedReportTileActionDataModel copyWithZone:] */

undefined8 FUN_1079d4210(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d4234; end: 1079d42cf; -[SCDiscoverFeedReportTileActionDataModel encodeWithCoder:] */

void FUN_1079d4234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea8918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ea8938);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ea8958);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110ea8978);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d42d0; end: 1079d435f; -[SCDiscoverFeedReportTileActionDataModel hash] */

undefined8 * FUN_1079d42d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_40 = -lVar5;
  if (-1 < lVar5) {
    lStack_40 = lVar5;
  }
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1079d4428:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079d4434;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) && (puVar3[5] == param_3[5])))) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[6];
          if (puVar6 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_1079d4434;
          }
          goto LAB_1079d4428;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1079d4434:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1079d4360; end: 1079d444f; -[SCDiscoverFeedReportTileActionDataModel isEqual:] */

long FUN_1079d4360(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d4428:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d4434;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_1079d4434;
          }
          goto LAB_1079d4428;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1079d4434:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d4450; end: 1079d4457; -[SCDiscoverFeedReportTileActionDataModel tileHeadline] */

undefined8 FUN_1079d4450(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d4458; end: 1079d445f; -[SCDiscoverFeedReportTileActionDataModel displayName] */

undefined8 FUN_1079d4458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d4460; end: 1079d4467; -[SCDiscoverFeedReportTileActionDataModel storyDedupeFp] */

undefined8 FUN_1079d4460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079d4468; end: 1079d446f; -[SCDiscoverFeedReportTileActionDataModel storyType] */

undefined8 FUN_1079d4468(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1079d4470; end: 1079d4477; -[SCDiscoverFeedReportTileActionDataModel timestampMsecs] */

undefined8 FUN_1079d4470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079d4478; end: 1079d447f; -[SCDiscoverFeedReportTileActionDataModel storyData] */

undefined8 FUN_1079d4478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1079d4480; end: 1079d44bb; -[SCDiscoverFeedReportTileActionDataModel .cxx_destruct] */

void FUN_1079d4480(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d44bc; end: 1079d4557; -[SCDiscoverFeedSendPublisherActionDataModel initWithCoder:] */

undefined1 * FUN_1079d44bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d4558; end: 1079d45df; -[SCDiscoverFeedSendPublisherActionDataModel initWithDeeplinkUrl:storyDedupeFp:] */

undefined1 *
FUN_1079d4558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f9210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d45e0; end: 1079d4603; -[SCDiscoverFeedSendPublisherActionDataModel copyWithZone:] */

undefined8 FUN_1079d45e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d4604; end: 1079d4663; -[SCDiscoverFeedSendPublisherActionDataModel encodeWithCoder:] */

void FUN_1079d4604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ea8998);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ea8938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d4664; end: 1079d46cf; -[SCDiscoverFeedSendPublisherActionDataModel hash] */

undefined8 * FUN_1079d4664(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079d4754;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_1079d4754;
    }
    puVar4 = (undefined8 *)puVar2[1];
    if (puVar4 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_1079d4754;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_1079d4754:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1079d46d0; end: 1079d476f; -[SCDiscoverFeedSendPublisherActionDataModel isEqual:] */

long FUN_1079d46d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d4754;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_1079d4754;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1079d4754;
    }
  }
  lVar3 = 1;
LAB_1079d4754:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d4770; end: 1079d4777; -[SCDiscoverFeedSendPublisherActionDataModel deeplinkUrl] */

undefined8 FUN_1079d4770(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d4778; end: 1079d477f; -[SCDiscoverFeedSendPublisherActionDataModel storyDedupeFp] */

undefined8 FUN_1079d4778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d4780; end: 1079d478b; -[SCDiscoverFeedSendPublisherActionDataModel .cxx_destruct] */

void FUN_1079d4780(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d478c; end: 1079d483b; -[SCDiscoverFeedSendStoryActionDataModel initWithCoder:] */

undefined1 * FUN_1079d478c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9218;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d483c; end: 1079d48e7; -[SCDiscoverFeedSendStoryActionDataModel initWithStory:coverImage:] */

undefined1 *
FUN_1079d483c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9218;
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



/* Entry: 1079d48e8; end: 1079d490b; -[SCDiscoverFeedSendStoryActionDataModel copyWithZone:] */

undefined8 FUN_1079d48e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d490c; end: 1079d496b; -[SCDiscoverFeedSendStoryActionDataModel encodeWithCoder:] */

void FUN_1079d490c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e9c0b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110ea89b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079d496c; end: 1079d49df; -[SCDiscoverFeedSendStoryActionDataModel hash] */

undefined8 * FUN_1079d496c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1079d4a60:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1079d4a6c;
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
          goto LAB_1079d4a6c;
        }
        goto LAB_1079d4a60;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1079d4a6c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1079d49e0; end: 1079d4a87; -[SCDiscoverFeedSendStoryActionDataModel isEqual:] */

long FUN_1079d49e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1079d4a60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1079d4a6c;
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
          goto LAB_1079d4a6c;
        }
        goto LAB_1079d4a60;
      }
    }
    lVar3 = 0;
  }
LAB_1079d4a6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1079d4a88; end: 1079d4a8f; -[SCDiscoverFeedSendStoryActionDataModel story] */

undefined8 FUN_1079d4a88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079d4a90; end: 1079d4a97; -[SCDiscoverFeedSendStoryActionDataModel coverImage] */

undefined8 FUN_1079d4a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079d4a98; end: 1079d4ac7; -[SCDiscoverFeedSendStoryActionDataModel .cxx_destruct] */

void FUN_1079d4a98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1079d4ac8; end: 1079d4b7b; -[SCDiscoverFeedSendUserActionDataModel initWithSnapchatter:storyDedupeFp:publicUserStory:] */

undefined1 *
FUN_1079d4ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f9220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079d4b7c; end: 1079d4b9f; -[SCDiscoverFeedSendUserActionDataModel copyWithZone:] */

undefined8 FUN_1079d4b7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1079d4ba0; end: 1079d4c17; -[SCDiscoverFeedSendUserActionDataModel hash] */

undefined8 * FUN_1079d4ba0(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1079d4ca8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1079d4cb4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1079d4cb4;
        }
        goto LAB_1079d4ca8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1079d4cb4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}


