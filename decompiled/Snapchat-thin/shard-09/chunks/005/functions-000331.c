/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e25e78; end: 106e2611b; -[SCGalleryLagunaStoryViewCell setEntry:targetSize:memoriesEntryThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25e78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar5 = (long)_DAT_11275f398;
  if (((*(long *)(param_3 + lVar5) != param_5) || ((*(byte *)(param_3 + _DAT_11275f3bc) & 1) != 0))
     || (*(char *)(param_3 + _DAT_11275f3c0) == '\x01')) {
    func_0x00010bfec280(*(undefined8 *)(param_3 + _DAT_11275f38c));
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)(param_3 + lVar5);
    *(long *)(param_3 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11275f3bc;
    *(undefined1 *)(param_3 + lVar7) = 0;
    lVar6 = (long)_DAT_11275f3a8;
    func_0x00010c18b5e0(*(undefined8 *)(param_3 + lVar6),param_4,0);
    func_0x00010c256060(*(undefined8 *)(param_3 + lVar6));
    uVar2 = *(undefined8 *)(param_3 + lVar6);
    *(undefined8 *)(param_3 + lVar6) = 0;
    _objc_release(uVar2);
    lVar8 = (long)_DAT_11275f3c0;
    *(undefined1 *)(param_3 + lVar8) = 0;
    *(undefined1 *)(param_3 + _DAT_11275f3ac) = 0;
    lVar3 = *(long *)(param_3 + lVar5);
    if ((lVar3 != 0) && ((*(byte *)(param_3 + lVar7) & 1) == 0)) {
      func_0x00010b5fc5e4();
      *(char *)(param_3 + _DAT_11275f3c4) = (char)lVar3;
      func_0x00010beb96a0(param_3,param_4,(uint)lVar3 ^ 1);
      uVar2 = param_6;
      func_0x00010bf23120(param_1,param_2,param_6,param_4,*(undefined8 *)(param_3 + lVar5),0,5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_3 + lVar6);
      *(undefined8 *)(param_3 + lVar6) = uVar2;
      _objc_release(uVar4);
      func_0x00010c18b5e0(*(undefined8 *)(param_3 + lVar6),param_4,param_3);
      func_0x00010c24eda0(*(undefined8 *)(param_3 + lVar6));
      uVar2 = param_7;
      func_0x00010bf23100(param_7,param_4,*(undefined8 *)(param_3 + lVar5),
                          *(undefined1 *)(param_3 + lVar8));
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)_DAT_11275f3b4;
      uVar4 = *(undefined8 *)(param_3 + lVar3);
      *(undefined8 *)(param_3 + lVar3) = uVar2;
      _objc_release(uVar4);
      func_0x00010c24eda0(*(undefined8 *)(param_3 + lVar3));
      lVar5 = param_3;
      func_0x00010bf4dce0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_3 + lVar3);
      func_0x00010c2666e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(lVar5,param_4,uVar2);
      _objc_release(uVar2);
      _objc_release(lVar5);
      uVar2 = *(undefined8 *)(param_3 + lVar3);
      func_0x00010c2666e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106e2611c;
      puStack_80 = &UNK_1108471b0;
      lStack_78 = param_3;
      func_0x00010c0bbfc0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      puStack_c0 = puVar1;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_106e2620c;
      puStack_a8 = &UNK_1108471b0;
      lStack_a0 = param_3;
      func_0x00010c0bbfe0(*(undefined8 *)(param_3 + _DAT_11275f388),param_4,&puStack_c0);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106e2611c; end: 106e2620b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2611c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e2620c; end: 106e262eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2620c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c23d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e262ec; end: 106e262ef; -[SCGalleryLagunaStoryViewCell roundCorner:] */

void FUN_106e262ec(void)

{
  return;
}



/* Entry: 106e262f0; end: 106e26327; -[SCGalleryLagunaStoryViewCell startGeneratingUpdates] */

/* WARNING: Possible PIC construction at 0x000106e26310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e26314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e262f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24edb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f3a8),PTR_s_startGeneratingUpdates_112671590);
  return;
}



/* Entry: 106e26328; end: 106e2635f; -[SCGalleryLagunaStoryViewCell stopGeneratingUpdates] */

/* WARNING: Possible PIC construction at 0x000106e26348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e2634c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f3a8),PTR_s_stopGeneratingUpdates_112673240);
  return;
}



/* Entry: 106e26360; end: 106e26367; -[SCGalleryLagunaStoryViewCell interactionMode] */

undefined8 FUN_106e26360(void)

{
  return 3;
}



/* Entry: 106e26368; end: 106e266b7; -[SCGalleryLagunaStoryViewCell setSelected:selectOverlayImage:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26368(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(byte *)(param_1 + _DAT_11275f3b0) != param_3) {
    *(char *)(param_1 + _DAT_11275f3b0) = (char)param_3;
    if ((param_3 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + _DAT_11275f3b4);
      func_0x00010c2666e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f3a4),param_2,1);
      puVar2 = PTR__CGAffineTransformIdentity_110347008;
      puVar1 = (undefined8 *)(param_1 + _DAT_11275f390);
      uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      puVar1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      *puVar1 = uVar6;
      puVar1[3] = uVar9;
      puVar1[2] = uVar8;
      uVar6 = *(undefined8 *)(puVar2 + 0x20);
      puVar1[5] = *(undefined8 *)(puVar2 + 0x28);
      puVar1[4] = uVar6;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_106e266b8;
      puStack_80 = &UNK_110842e18;
      ppuVar5 = &puStack_98;
      lStack_78 = param_1;
    }
    else {
      lVar7 = (long)_DAT_11275f3a4;
      if (*(long *)(param_1 + lVar7) == 0) {
        puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
        _objc_alloc();
        lVar3 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        func_0x00010c013de0();
        uVar6 = *(undefined8 *)(param_1 + lVar7);
        *(undefined **)(param_1 + lVar7) = puVar2;
        _objc_release(uVar6);
        _objc_release(lVar3);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41680(0x3ff0000000000000,0x3fe0000000000000,
                            PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7),param_2,puVar2);
        _objc_release(puVar2);
        lVar3 = param_1;
        func_0x00010bf4dce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066f80();
        _objc_release(lVar3);
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_106e26710;
        puStack_a8 = &UNK_1108471b0;
        lStack_a0 = param_1;
        func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar7),param_2,&puStack_c0);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,1);
        puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
        func_0x00010c01bf60();
        func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7),param_2,puVar4);
        puStack_e8 = puVar2;
        uStack_e0 = 0xc2000000;
        uStack_d8 = 0x106e26798;
        puStack_d0 = &UNK_1108471b0;
        lStack_c8 = param_1;
        func_0x00010c0bbfc0(puVar4,param_2,&puStack_e8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar4);
      }
      uVar6 = *(undefined8 *)(param_1 + _DAT_11275f3b4);
      func_0x00010c2666e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar6);
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7),param_2,0);
      puVar1 = (undefined8 *)(param_1 + _DAT_11275f390);
      _CGAffineTransformMakeScale(&uStack_118,0x3fee666666666666,0x3fee666666666666);
      puVar1[1] = uStack_110;
      *puVar1 = uStack_118;
      puVar1[3] = uStack_100;
      puVar1[2] = uStack_108;
      puVar1[5] = uStack_f0;
      puVar1[4] = uStack_f8;
      puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_140 = 0xc2000000;
      pcStack_138 = FUN_106e2680c;
      puStack_130 = &UNK_110845ce0;
      ppuVar5 = &puStack_148;
      lStack_128 = param_1;
      uStack_120 = (char)param_3;
    }
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106e266b8; end: 106e2670f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e266b8(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bdf8160(&uStack_50,*(undefined8 *)(param_1 + 0x20));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275f388),param_2,
                      &uStack_80);
  return;
}



/* Entry: 106e26710; end: 106e2680b;  */

void FUN_106e26710(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e2680c; end: 106e2686f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2680c(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010bdf8160(&uStack_50,*(undefined8 *)(param_1 + 0x20));
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11275f388),param_2,
                        &uStack_80);
  }
  return;
}



/* Entry: 106e26870; end: 106e26873; -[SCGalleryLagunaStoryViewCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_106e26870(void)

{
  return;
}



/* Entry: 106e26874; end: 106e26983; -[SCGalleryLagunaStoryViewCell animateLongTapForTouchLocation:reverse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26874(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR__CGAffineTransformIdentity_110347008;
  puVar1 = (undefined8 *)(param_1 + _DAT_11275f394);
  if (param_3 == 0) {
    _CGAffineTransformMakeScale(&uStack_50,0x3fee666666666666,0x3fee666666666666);
    puVar1[1] = uStack_48;
    *puVar1 = uStack_50;
    puVar1[3] = uStack_38;
    puVar1[2] = uStack_40;
  }
  else {
    uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    uStack_28 = *(undefined8 *)(puVar2 + 0x28);
    uStack_30 = *(undefined8 *)(puVar2 + 0x20);
  }
  puVar1[5] = uStack_28;
  puVar1[4] = uStack_30;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x106e2692c;
  puStack_60 = &UNK_110842e18;
  lStack_58 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_78);
  return;
}



/* Entry: 106e26984; end: 106e269b3; -[SCGalleryLagunaStoryViewCell setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26984(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275f3c0) = param_3;
  if ((*(byte *)(param_1 + _DAT_11275f3bc) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f3b4),PTR_s_setSelectMode__11265c558);
  return;
}



/* Entry: 106e269b4; end: 106e26b53; -[SCGalleryLagunaStoryViewCell thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e269b4(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(long *)(param_3 + _DAT_11275f3a8) == param_5) {
    func_0x00010bec31a0(param_3);
    func_0x00010c23d0a0(param_6);
    func_0x00010c23d0a0(param_6);
    lVar3 = param_6;
    func_0x00010bf5c840(param_1 + -2.0,param_2 + -2.0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    param_6 = lVar3;
    if (lVar3 != 0) {
      lVar5 = (long)_DAT_11275f388;
      lVar4 = *(long *)(param_3 + lVar5);
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)_DAT_11275f3ac;
      if ((lVar4 == 0) ||
         (cVar1 = *(char *)(param_3 + lVar7), _objc_release(),
         puVar2 = PTR__OBJC_CLASS___UIView_1126aec20, cVar1 != '\x01')) {
        *(undefined1 *)(param_3 + lVar7) = 1;
        func_0x00010bea41c0(param_3,param_4,lVar3,param_7);
      }
      else {
        uVar6 = *(undefined8 *)(param_3 + lVar5);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_106e26b54;
        puStack_70 = &UNK_110848ba8;
        lStack_68 = param_3;
        _objc_retain(lVar3);
        lStack_60 = lVar3;
        _objc_retain(param_7);
        uStack_58 = param_7;
        func_0x00010c27ac60(0x3fd3333333333333,puVar2,param_4,uVar6,0x500000,&puStack_88,0);
        _objc_release(uStack_58);
        _objc_release(lStack_60);
      }
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 106e26b54; end: 106e26b63;  */

void FUN_106e26b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setFullImage_forSnap__112586a18,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106e26b64; end: 106e26b7f; -[SCGalleryLagunaStoryViewCell thumbnailGenerator:didFailToUpdateStoryThumbnailForSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26b64(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11275f3a8) != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec31b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopLoading_11258e610);
  return;
}



/* Entry: 106e26b80; end: 106e26b83; -[SCGalleryLagunaStoryViewCell thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:] */

void FUN_106e26b80(void)

{
  return;
}



/* Entry: 106e26b84; end: 106e26be7; -[SCGalleryLagunaStoryViewCell thumbnailGenerator:didLoadMiniThumbnail:snap:duration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26b84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_11275f388);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010bdce2a0(param_1,param_2,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e26be8; end: 106e26beb; -[SCGalleryLagunaStoryViewCell thumbnailGeneratorHasDelayedLoading:] */

void FUN_106e26be8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoading_11258daa8);
  return;
}



/* Entry: 106e26bec; end: 106e26caf; -[SCGalleryLagunaStoryViewCell _startLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26bec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275f39c;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1677c0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11275f380));
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 106e26cb0; end: 106e26d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26cb0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e26d24; end: 106e26d5f; -[SCGalleryLagunaStoryViewCell _stopLoading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26d24(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f39c;
  func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e26d60; end: 106e26db7; -[SCGalleryLagunaStoryViewCell _dayStoryImageViewTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26d60(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_11275f390);
  puVar2 = (undefined8 *)(param_1 + _DAT_11275f394);
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  uStack_18 = puVar1[5];
  uStack_20 = puVar1[4];
  uStack_68 = puVar2[1];
  uStack_70 = *puVar2;
  uStack_58 = puVar2[3];
  uStack_60 = puVar2[2];
  uStack_48 = puVar2[5];
  uStack_50 = puVar2[4];
  _CGAffineTransformConcat(&uStack_40,&uStack_70);
  return;
}



/* Entry: 106e26db8; end: 106e26e7b; -[SCGalleryLagunaStoryViewCell _showIncompatibleIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26db8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275f3c8;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126cfb28;
    _objc_alloc();
    func_0x00010c01afa0();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11275f380));
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,param_3 ^ 1);
  return;
}



/* Entry: 106e26e7c; end: 106e26fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26e7c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e26fc0; end: 106e26fcf; -[SCGalleryLagunaStoryViewCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e26fc0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f378);
}



/* Entry: 106e26fd0; end: 106e26fdf; -[SCGalleryLagunaStoryViewCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26fd0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275f378) = param_3;
  return;
}



/* Entry: 106e26fe0; end: 106e270bf; -[SCGalleryLagunaStoryViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e26fe0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f3a0,0);
  _objc_storeStrong(param_1 + _DAT_11275f3a8,0);
  _objc_storeStrong(param_1 + _DAT_11275f38c,0);
  _objc_storeStrong(param_1 + _DAT_11275f3c8,0);
  _objc_storeStrong(param_1 + _DAT_11275f3b4,0);
  _objc_storeStrong(param_1 + _DAT_11275f39c,0);
  _objc_storeStrong(param_1 + _DAT_11275f3cc,0);
  _objc_storeStrong(param_1 + _DAT_11275f398,0);
  _objc_storeStrong(param_1 + _DAT_11275f388,0);
  _objc_storeStrong(param_1 + _DAT_11275f384,0);
  _objc_storeStrong(param_1 + _DAT_11275f3a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f380,0);
  return;
}



/* Entry: 106e270c0; end: 106e2737b; -[SCGallerySpectaclesSnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e270c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 unaff_x20;
  long lVar13;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126f7110;
  puVar1 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  lVar5 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = puVar2;
    func_0x000106e3f464();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar13 = (long)_DAT_11275f3d0;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar12);
    _objc_release(puVar3);
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar4);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    puStack_c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar5 = *(long *)((long)puVar1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    lStack_a8 = lVar5;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar4;
    func_0x00010bf493c0(0x4014000000000000);
    _objc_retainAutoreleasedReturnValue();
    lStack_88 = lVar5;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar13);
    lStack_b8 = lVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar6;
    func_0x00010bf493c0(0xc014000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_80 = uVar12;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = uVar8;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = unaff_x20;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar13);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf49420(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar10;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_c0);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(unaff_x20);
    _objc_release(uVar8);
    _objc_release(uVar12);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(lStack_b8);
    _objc_release(puStack_b0);
    _objc_release(puStack_a0);
    lVar5 = lStack_a8;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  plVar11 = &lStack_f0;
  pcStack_c8 = FUN_106e2737c;
  lVar13 = (long)_DAT_11275f3d4;
  uStack_e0 = unaff_x20;
  puStack_d8 = puVar1;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010c12cd40(*(undefined8 *)(lVar5 + lVar13));
  uVar12 = *(undefined8 *)(lVar5 + lVar13);
  *(undefined8 *)(lVar5 + lVar13) = 0;
  _objc_release(uVar12);
  puStack_e8 = PTR_PTR_1126f7110;
  lStack_f0 = lVar5;
  _objc_msgSendSuper2(&lStack_f0,PTR_s_dealloc_112525b20);
  return plVar11;
}



/* Entry: 106e2737c; end: 106e273db; -[SCGallerySpectaclesSnapCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2737c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_11275f3d4;
  func_0x00010c12cd40(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f7110;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e273dc; end: 106e27477; -[SCGallerySpectaclesSnapCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e273dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f7110;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  lVar2 = (long)_DAT_11275f3d4;
  func_0x00010c12cd40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + _DAT_11275f3d8) = 0;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11275f3d0));
  lVar2 = (long)_DAT_11275f3dc;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  return;
}



/* Entry: 106e27478; end: 106e27583; -[SCGallerySpectaclesSnapCell bindViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e27478(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7110;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_bindViewModel__1125a42c8,param_3);
  puVar1 = PTR_PTR_1126cfb60;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if ((uVar2 == 0) || (uVar3 = uVar2, func_0x00010b5fa760(), (int)uVar3 == 0)) {
    func_0x000106e3f464();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_106e3f450();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f3d0));
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106e27584; end: 106e275eb; -[SCGallerySpectaclesSnapCell subscribeSpectaclesTransferStateWithContentLoader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e27584(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275f3d4;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bef9660(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateState_112595c08);
  return;
}



/* Entry: 106e275ec; end: 106e27693; -[SCGallerySpectaclesSnapCell _updateState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e275ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010bdf7400();
  if (lVar1 == *(long *)(param_1 + _DAT_11275f3d8)) {
    return;
  }
  *(long *)(param_1 + _DAT_11275f3d8) = lVar1;
  if (lVar1 != 2) {
    if (lVar1 == 1) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275f3d0);
      uVar3 = 0x3fe0000000000000;
    }
    else {
      if (lVar1 != 0) {
        return;
      }
      uVar2 = *(undefined8 *)(param_1 + _DAT_11275f3d0);
      uVar3 = 0x3ff0000000000000;
    }
    func_0x00010c1677c0(uVar3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bec31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopLoadingAnimation_11258e618);
    return;
  }
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + _DAT_11275f3d0));
                    /* WARNING: Could not recover jumptable at 0x00010bec0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoadingAnimation_11258dab0);
  return;
}



/* Entry: 106e27694; end: 106e27743; -[SCGallerySpectaclesSnapCell _currentTransferState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e27694(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11275f3d4;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf4dbc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + lVar4);
    func_0x00010c06ce00(uVar2,param_2,2);
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_1 + lVar4);
      func_0x00010c06ce00(uVar2,param_2,1);
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_1 + lVar4);
        func_0x00010c06eea0(uVar2,param_2,4);
        if ((uVar2 & 1) == 0) {
          uVar2 = *(ulong *)(param_1 + lVar4);
          func_0x00010c06eea0(uVar2,param_2,8);
          if ((uVar2 & 1) == 0) {
            uVar3 = *(undefined8 *)(param_1 + lVar4);
            func_0x00010c06eea0(uVar3,param_2,0x10);
            if ((int)uVar3 == 0) {
              return 1;
            }
            return 2;
          }
        }
        return 2;
      }
    }
  }
  return 0;
}



/* Entry: 106e27744; end: 106e27a0f; -[SCGallerySpectaclesSnapCell _startLoadingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e27744(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_11275f3dc;
  lVar1 = *(long *)(param_1 + lVar17);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126afd30;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffb60();
    uVar16 = *(undefined8 *)(param_1 + lVar17);
    *(undefined **)(param_1 + lVar17) = puVar2;
    _objc_release(uVar16);
    _objc_release(puVar3);
    lVar1 = param_1;
    func_0x00010bf4dce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar1);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar17));
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = (long)_DAT_11275f3d0;
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010c2793a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + lVar1);
    func_0x00010bf1ff80(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar16);
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + lVar17);
  }
  func_0x00010c24dbc0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(lVar1 + _DAT_11275f3dc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(lVar1 + _DAT_11275f3dc),PTR_s_stopAnimating_112673058);
    return;
  }
  return;
}



/* Entry: 106e27a10; end: 106e27a27; -[SCGallerySpectaclesSnapCell _stopLoadingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e27a10(long param_1)

{
  if (*(long *)(param_1 + _DAT_11275f3dc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2558d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11275f3dc),PTR_s_stopAnimating_112673058);
    return;
  }
  return;
}



/* Entry: 106e27a28; end: 106e27a7f; -[SCGallerySpectaclesSnapCell didReceiveDataForContentComponent:forContent:] */

void FUN_106e27a28(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e27a80;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106e27a80; end: 106e27a87;  */

void FUN_106e27a80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateState_112595c08);
  return;
}



/* Entry: 106e27a88; end: 106e27adf; -[SCGallerySpectaclesSnapCell didFinishDownloadForContentComponent:forContent:] */

void FUN_106e27a88(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e27ae0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106e27ae0; end: 106e27ae7;  */

void FUN_106e27ae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateState_112595c08);
  return;
}



/* Entry: 106e27ae8; end: 106e27b3f; -[SCGallerySpectaclesSnapCell didPauseForContentComponent:forContent:] */

void FUN_106e27ae8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e27b40;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106e27b40; end: 106e27b47;  */

void FUN_106e27b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateState_112595c08);
  return;
}



/* Entry: 106e27b48; end: 106e27b9f; -[SCGallerySpectaclesSnapCell didInterruptDownloadForContentComponent:forContent:] */

void FUN_106e27b48(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e27ba0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106e27ba0; end: 106e27ba7;  */

void FUN_106e27ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateState_112595c08);
  return;
}



/* Entry: 106e27ba8; end: 106e27bff; -[SCGallerySpectaclesSnapCell didCancelDownloadForContentComponent:forContent:] */

void FUN_106e27ba8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e27c00;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106e27c00; end: 106e27c07;  */

void FUN_106e27c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee0990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateState_112595c08);
  return;
}



/* Entry: 106e27c08; end: 106e27c1f; -[SCGallerySpectaclesSnapCell syncStatusGenerator:didUpdateStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e27c08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f3d0),PTR_s_setHidden__1126479f8,param_4 != 0);
  return;
}



/* Entry: 106e27c20; end: 106e27c6f; -[SCGallerySpectaclesSnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e27c20(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f3dc,0);
  _objc_storeStrong(param_1 + _DAT_11275f3d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f3d0,0);
  return;
}



/* Entry: 106e27c70; end: 106e27e4b; -[SCSpectaclesStatusController initWithSpectaclesServices:spectaclesAppStatusServices:spectaclesContentStatusProvider:dataObjectContext:mergedDataSource:memoriesProfile:] */

undefined1 *
FUN_106e27c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f7118;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_4;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c249020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bfe3fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar3);
    func_0x00010bdc7420(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e27e4c; end: 106e27e7b; -[SCSpectaclesStatusController setTabFocused:] */

void FUN_106e27e4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  func_0x00010c207980(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c219890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setTransferPriorityContentIds__112664048,*(undefined8 *)(param_1 + 0x40))
  ;
  return;
}



/* Entry: 106e27e7c; end: 106e27ecb; -[SCSpectaclesStatusController setTransferPriorityContentIds:] */

void FUN_106e27e7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  func_0x00010c2198a0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined1 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e27ecc; end: 106e27ed7; -[SCSpectaclesStatusController _connectedDevice] */

void FUN_106e27ecc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf486f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_connectedDeviceAtIndex__1125afb60,0);
  return;
}



/* Entry: 106e27ed8; end: 106e28023; -[SCSpectaclesStatusController _addListeners] */

void FUN_106e27ed8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 0x18));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  _objc_initWeak(auStack_28,param_1);
  uVar2 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x106e27fd4;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar2,&puStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106e28024; end: 106e2826f; -[SCSpectaclesStatusController spectaclesDevice:didReceiveLastCloudUploadTime:] */

void FUN_106e28024(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c088d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf64e40(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(ulong *)(param_1 + 0x48);
  func_0x00010c071ce0();
  if (((uVar4 & 1) == 0) && (lVar2 = lVar3, func_0x00010bf433a0(), lVar2 == -1)) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c2a5200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = param_4;
      _objc_release(uVar5);
      func_0x000100162d98("APPSTORE",&PTR___NSConcreteGlobalBlock_11097eb98);
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e28270; end: 106e282c7; -[SCSpectaclesStatusController lagunaOnShareWifiCredentialsUpdate:device:wifiSsid:] */

void FUN_106e28270(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106e282c8;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106e282c8; end: 106e282d3;  */

void FUN_106e282c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c265d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),PTR_s_syncCurrentStatus_112677180);
  return;
}



/* Entry: 106e282d4; end: 106e282d7; -[SCSpectaclesStatusController dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_106e282d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__markHomeWifiTransferredContentA_112574ed0);
  return;
}



/* Entry: 106e282d8; end: 106e282db; -[SCSpectaclesStatusController dataSource:didFinalizeEntries:] */

void FUN_106e282d8(void)

{
  return;
}



/* Entry: 106e282dc; end: 106e28683; -[SCSpectaclesStatusController _markHomeWifiTransferredContentAsSynced] */

void FUN_106e282dc(long param_1,undefined **param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bde6320();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar1;
  func_0x00010c263800();
  if ((int)lVar13 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf5e4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar2;
    func_0x00010c282be0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar13;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar11;
    func_0x00010bfb27a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar13);
    _objc_release(lVar2);
    lVar13 = lVar3;
    func_0x00010bf529e0();
    if (lVar13 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      _objc_retain(lVar3);
      lVar13 = lVar3;
      func_0x00010bf52a60();
      if (lVar13 != 0) {
        lVar11 = *plStack_1b0;
        do {
          lVar2 = 0;
          do {
            if (*plStack_1b0 != lVar11) {
              _objc_enumerationMutation(lVar3);
            }
            uVar10 = *(undefined8 *)(lStack_1b8 + lVar2 * 8);
            func_0x00010bdc3540(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(uVar10);
            lVar2 = lVar2 + 1;
          } while (lVar13 != lVar2);
          lVar13 = lVar3;
          func_0x00010bf52a60();
        } while (lVar13 != 0);
      }
      _objc_release(lVar3);
      puVar6 = PTR_PTR_1126af4d0;
      puVar5 = puVar4;
      func_0x00010bf002e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010bf529e0();
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        lStack_1f8 = 0;
        uStack_200 = 0;
        uStack_1e8 = 0;
        plStack_1f0 = (long *)0x0;
        uStack_1d8 = 0;
        uStack_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        _objc_retain(puVar6);
        puVar7 = puVar6;
        func_0x00010bf52a60();
        if (puVar7 != (undefined *)0x0) {
          lVar13 = *plStack_1f0;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_1f0 != lVar13) {
                _objc_enumerationMutation(puVar6);
              }
              uVar12 = *(undefined8 *)(lStack_1f8 + (long)puVar9 * 8);
              uVar10 = uVar12;
              func_0x00010bfdd120();
              if ((int)uVar10 != 0) {
                func_0x00010c0c5180(uVar12);
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar4;
                func_0x00010c0e00e0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar5);
                _objc_release(puVar8);
                _objc_release(uVar12);
              }
              puVar9 = puVar9 + 1;
            } while (puVar7 != puVar9);
            puVar7 = puVar6;
            func_0x00010bf52a60();
          } while (puVar7 != (undefined *)0x0);
        }
        _objc_release(puVar6);
        func_0x00010c0bb3c0(*(undefined8 *)(param_1 + 0x10));
        puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_220 = 0xc2000000;
        uStack_218 = 0x106e2868c;
        puStack_210 = &UNK_110842e18;
        param_2 = &puStack_228;
        lStack_208 = param_1;
        func_0x0001000d76cc("APPSTORE",param_2);
        _objc_release(puVar5);
      }
      _objc_release(puVar6);
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf4bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_content_1125b08c0);
  return;
}



/* Entry: 106e28684; end: 106e28697;  */

void FUN_106e28684(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_content_1125b08c0);
  return;
}



/* Entry: 106e28698; end: 106e2869f; -[SCSpectaclesStatusController tabFocused] */

undefined1 FUN_106e28698(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 106e286a0; end: 106e28723; -[SCSpectaclesStatusController .cxx_destruct] */

void FUN_106e286a0(long param_1)

{
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



/* Entry: 106e28724; end: 106e28753; -[SCMemoriesStoryViewModel initWithCellViewModels:page:] */

void FUN_106e28724(void)

{
  func_0x00010be3aac0();
  return;
}



/* Entry: 106e28754; end: 106e287c7; -[SCMemoriesStoryViewModel initWithSubscreenStoryThumbnailSnaps:subscreenStoryCellTitle:subscreenStoryCellSubtitle:consolidatedStoriesLatestEntry:type:] */

undefined8
FUN_106e28754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010be3aac0(param_1,param_2,0,0,param_7,param_3,param_4,param_5,param_6);
    _objc_retain();
    uVar1 = param_1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106e287c8; end: 106e28a2b; -[SCMemoriesStoryViewModel _initWithCellViewModels:page:type:subscreenStoryThumbnailSnaps:subscreenStoryCellTitle:subscreenStoryCellSubtitle:consolidatedStoriesLatestEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_106e287c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = param_4;
  uStack_158 = param_5;
  uStack_150 = param_1;
  _objc_retain(param_3);
  lStack_148 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      param_6 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        puVar3 = PTR_PTR_1126cfc28;
        func_0x00010c23f7a0(PTR_PTR_1126cfc28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        param_6 = param_6 + 1;
      } while (lVar2 != param_6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  uStack_140 = uStack_150;
  puStack_138 = PTR_PTR_1126f7120;
  puVar5 = &uStack_140;
  _objc_msgSendSuper2(puVar5,PTR_s_initWithTitle_cellViewModels_kin_1125f2578,0,puVar1,0);
  lVar2 = lStack_148;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar5 + (long)_DAT_11275f40c) = uStack_160;
    *(undefined8 *)((long)puVar5 + (long)_DAT_11275f410) = uStack_158;
    lVar6 = (long)_DAT_11275f414;
    _objc_retain(lStack_148);
    uVar4 = *(undefined8 *)((long)puVar5 + lVar6);
    *(long *)((long)puVar5 + lVar6) = lVar2;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11275f418;
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)((long)puVar5 + lVar6);
    *(undefined8 *)((long)puVar5 + lVar6) = param_7;
    _objc_release(uVar4);
    lVar6 = (long)_DAT_11275f41c;
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar5 + lVar6);
    *(undefined8 *)((long)puVar5 + lVar6) = param_8;
    _objc_release(uVar4);
    param_6 = (long)_DAT_11275f420;
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar5 + param_6);
    *(undefined8 *)((long)puVar5 + param_6) = param_9;
    _objc_release(uVar4);
  }
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(lVar2);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar5;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_106e28a2c;
  lStack_180 = param_6;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar2 + _DAT_11275f410) == 0) {
    puStack_1a8 = &uStack_1b0;
    uStack_1b0 = 0;
    uStack_1a0 = 0x3032000000;
    pcStack_198 = FUN_106e28b64;
    uStack_190 = 0x106e28b74;
    uStack_188 = 0;
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bff00();
    _objc_release(lVar6);
    _objc_release(lVar2);
    puVar5 = (undefined8 *)puStack_1a8[5];
    _objc_retain(puVar5);
    __Block_object_dispose(&uStack_1b0,8);
    _objc_release(uStack_188);
  }
  else if (*(long *)(lVar2 + _DAT_11275f410) == 2) {
    puVar5 = *(undefined8 **)(lVar2 + _DAT_11275f420);
    _objc_retain(puVar5);
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 106e28a2c; end: 106e28b63; -[SCMemoriesStoryViewModel entry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e28a2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + _DAT_11275f410) == 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_106e28b64;
    uStack_30 = 0x106e28b74;
    uStack_28 = 0;
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bff00();
    _objc_release(lVar1);
    _objc_release(param_1);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else if (*(long *)(param_1 + _DAT_11275f410) == 2) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11275f420);
    _objc_retain(uVar2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e28b64; end: 106e28b7b;  */

void FUN_106e28b64(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e28b7c; end: 106e28bbb;  */

void FUN_106e28b7c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e28bbc; end: 106e28bbf;  */

void FUN_106e28bbc(void)

{
  return;
}



/* Entry: 106e28bc0; end: 106e28d63; -[SCMemoriesStoryViewModel allSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e28bc0(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + _DAT_11275f410) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)((long)puVar6 * 8);
        _objc_retain(puVar2);
        func_0x00010c0bff00(uVar4);
        _objc_release(puVar2);
        puVar6 = puVar6 + 1;
      } while (puVar5 != puVar6);
      puVar5 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar5 = puVar2;
    func_0x00010bf51e00();
    _objc_release();
  }
  else {
    puVar5 = (undefined *)0x0;
    puVar2 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e28d64; end: 106e28da3;  */

void FUN_106e28d64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c245680(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e28da4; end: 106e28da7;  */

void FUN_106e28da4(void)

{
  return;
}



/* Entry: 106e28da8; end: 106e28dd7; -[SCMemoriesStoryViewModel toggleExpand] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e28da8(long param_1)

{
  if (*(long *)(param_1 + _DAT_11275f410) != 0) {
    return;
  }
  *(ulong *)(param_1 + _DAT_11275f40c) = (ulong)(*(long *)(param_1 + _DAT_11275f40c) == 0);
  return;
}



/* Entry: 106e28dd8; end: 106e28e07; -[SCMemoriesStoryViewModel isExpanded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106e28dd8(long param_1)

{
  if (*(long *)(param_1 + _DAT_11275f410) != 0) {
    return false;
  }
  return 0 < *(long *)(param_1 + _DAT_11275f40c);
}



/* Entry: 106e28e08; end: 106e28e7f; -[SCMemoriesStoryViewModel hasMore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106e28e08(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  if (*(long *)(param_1 + (long)_DAT_11275f410) == 0) {
    uVar1 = param_1;
    func_0x00010bf343c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    bVar3 = (ulong)(*(long *)(param_1 + (long)_DAT_11275f40c) * param_3) < uVar2;
    _objc_release(uVar1);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



/* Entry: 106e28e80; end: 106e2909b; -[SCMemoriesStoryViewModel isCompatible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106e28e80(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  if (*(long *)((long)param_1 + (long)_DAT_11275f410) == 0) {
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010b5fc5e4();
    _objc_release();
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
    else {
      puStack_118 = &uStack_120;
      uStack_120 = 0;
      uStack_110 = 0x2020000000;
      uStack_108 = 0;
      puVar4 = param_1;
      func_0x00010bf343c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar2 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar4);
          }
          func_0x00010c0bff00(*(undefined8 *)((long)puVar5 * 8));
          puVar5 = (undefined8 *)((long)puVar5 + 1);
        } while (puVar2 != puVar5);
        puVar2 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
      puVar4 = (undefined8 *)puStack_118[3];
      func_0x00010bf343c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_1;
      func_0x00010bf529e0();
      uVar3 = (ulong)(puVar4 < puVar2);
      _objc_release(param_1);
      puVar2 = &uStack_120;
      param_2 = 8;
      __Block_object_dispose();
    }
  }
  else {
    uVar3 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010c06ece0();
  if ((param_2 & 1) == 0) {
    *(long *)(*(long *)(puVar2[4] + 8) + 0x18) = *(long *)(*(long *)(puVar2[4] + 8) + 0x18) + 1;
  }
  return param_2;
}



/* Entry: 106e2909c; end: 106e290d7;  */

void FUN_106e2909c(long param_1,ulong param_2)

{
  long lVar1;
  
  func_0x00010c06ece0();
  if ((param_2 & 1) == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + 1;
  }
  return;
}



/* Entry: 106e290d8; end: 106e290db;  */

void FUN_106e290d8(void)

{
  return;
}



/* Entry: 106e290dc; end: 106e2914b; -[SCMemoriesStoryViewModel subscreenStoryThumbnailSnapsHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e290dc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (*(long *)(param_1 + _DAT_11275f410) != 0) {
    ppuVar1 = *(undefined ***)(param_1 + _DAT_11275f414);
    if (ppuVar1 != (undefined **)0x0) {
      func_0x000100504554(ppuVar1,&PTR___NSConcreteGlobalBlock_11097ec58);
      ppuVar2 = ppuVar1;
      func_0x00010b7043dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar1);
      goto LAB_106e2913c;
    }
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_106e2913c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 106e2914c; end: 106e29153;  */

void FUN_106e2914c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 106e29154; end: 106e29163; -[SCMemoriesStoryViewModel page] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e29154(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f40c);
}



/* Entry: 106e29164; end: 106e29173; -[SCMemoriesStoryViewModel setPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e29164(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11275f40c) = param_3;
  return;
}



/* Entry: 106e29174; end: 106e29183; -[SCMemoriesStoryViewModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e29174(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f410);
}



/* Entry: 106e29184; end: 106e29193; -[SCMemoriesStoryViewModel subscreenStoryThumbnailSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e29184(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f414);
}



/* Entry: 106e29194; end: 106e291a3; -[SCMemoriesStoryViewModel subscreenStoryCellTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e29194(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f418);
}



/* Entry: 106e291a4; end: 106e291b3; -[SCMemoriesStoryViewModel subscreenStoryCellSubtitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e291a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f41c);
}



/* Entry: 106e291b4; end: 106e29213; -[SCMemoriesStoryViewModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e291b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f41c,0);
  _objc_storeStrong(param_1 + _DAT_11275f418,0);
  _objc_storeStrong(param_1 + _DAT_11275f414,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f420,0);
  return;
}



/* Entry: 106e29214; end: 106e29287; -[SCMemoriesDiffableStoryViewModel initWithViewModel:] */

undefined1 * FUN_106e29214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7128;
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



/* Entry: 106e29288; end: 106e292f7; -[SCMemoriesDiffableStoryViewModel diffIdentifier] */

void FUN_106e29288(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c27dd80();
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (lVar1 == 0) {
    func_0x00010bf97060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    func_0x00010c25fc40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106e292f8; end: 106e295ff; -[SCMemoriesDiffableStoryViewModel isEqualToDiffableObject:] */

bool FUN_106e292f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e295c0:
    bVar14 = true;
  }
  else {
    puVar3 = PTR_PTR_1126cfba0;
    _objc_opt_class(PTR_PTR_1126cfba0);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar4 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c072360();
      iVar2 = (int)*(undefined8 *)(param_3 + 8);
      func_0x00010c072360();
      if (iVar1 == iVar2) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf97060();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c245780();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_3 + 8);
        func_0x00010bf97060(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar7;
        func_0x00010c245780();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar6;
        func_0x00010c071ae0();
        _objc_release(uVar12);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((int)uVar13 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 8);
          func_0x00010bf97060();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_3 + 8);
          func_0x00010bf97060(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar7;
          func_0x00010c245800();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar6;
          func_0x00010c071ae0();
          _objc_release(uVar12);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          if ((int)uVar13 != 0) {
            lVar8 = *(long *)(param_1 + 8);
            func_0x00010bf343c0();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010bf529e0();
            lVar10 = *(long *)(param_3 + 8);
            func_0x00010bf343c0();
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010bf529e0();
            _objc_release(lVar10);
            _objc_release(lVar8);
            if (lVar9 == lVar11) {
              uVar5 = *(undefined8 *)(param_1 + 8);
              func_0x00010bf97060();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar5;
              func_0x00010c0e0160();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(param_3 + 8);
              func_0x00010bf97060(uVar7);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar7;
              func_0x00010c0e0160();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar6;
              func_0x00010c071ae0();
              _objc_release(uVar12);
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar5);
              if ((int)uVar13 != 0) {
                uVar12 = *(undefined8 *)(param_1 + 8);
                func_0x00010c25fc40();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = *(undefined8 *)(param_3 + 8);
                func_0x00010c25fc40(uVar13);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar12;
                func_0x00010c071ae0();
                _objc_release(uVar13);
                _objc_release(uVar12);
                if ((int)uVar6 != 0) {
                  uVar12 = *(undefined8 *)(param_1 + 8);
                  func_0x00010bf97060();
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar12;
                  func_0x00010c0f7a20();
                  _objc_release(uVar12);
                  uVar13 = *(undefined8 *)(param_3 + 8);
                  func_0x00010bf97060();
                  _objc_retainAutoreleasedReturnValue();
                  uVar12 = uVar13;
                  func_0x00010c0f7a20();
                  _objc_release(uVar13);
                  if ((int)uVar6 != (int)uVar12) {
                    bVar14 = (int)uVar12 != 0 && (int)uVar6 != 0;
                    goto LAB_106e295cc;
                  }
                  goto LAB_106e295c0;
                }
              }
            }
          }
        }
      }
    }
    bVar14 = false;
  }
LAB_106e295cc:
  _objc_release(param_3);
  return bVar14;
}



/* Entry: 106e29600; end: 106e2960b; -[SCMemoriesDiffableStoryViewModel .cxx_destruct] */

void FUN_106e29600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e2960c; end: 106e2aa8b; -[SCGalleryBaseStoryCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e2960c(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_168 = PTR_PTR_1126f7130;
  puVar1 = &uStack_170;
  uStack_170 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar21 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar24 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    func_0x00010c182220();
    puVar3 = puVar1;
    func_0x00010be5da80(param_1 * 94.0,param_1 * 94.0,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(puVar2);
    _objc_release(puVar5);
    puVar3 = puVar1;
    func_0x00010bfe90c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(puVar2);
    puStack_1b8 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_188 = puVar5;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    puStack_198 = puVar5;
    puStack_c0 = puVar5;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_1a8 = puVar6;
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_1c0 = puVar6;
    puStack_178 = puVar2;
    puStack_b8 = puVar6;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfe90c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar6;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bfe90c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b8);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    _objc_release(puStack_180);
    _objc_release(puStack_188);
    puVar2 = PTR__OBJC_CLASS___UITextField_1126af060;
    _objc_alloc();
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    lVar19 = (long)_DAT_11275f428;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar18);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar19));
    _objc_release(puVar2);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar19));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar19));
    _objc_release(puVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c16d0a0(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c1edbe0(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar19));
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60(puVar2);
    func_0x00010c1ee2a0(*(undefined8 *)((long)puVar1 + lVar19));
    _objc_release(puVar2);
    _objc_release(puVar5);
    func_0x00010c1ee2c0(*(undefined8 *)((long)puVar1 + lVar19));
    puVar3 = puVar1;
    func_0x00010c0879a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puStack_1b8 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_188 = (undefined *)uVar18;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar18;
    uVar11 = *(undefined8 *)((long)puVar1 + lVar19);
    puStack_198 = (undefined *)uVar18;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_1a8 = (undefined *)uVar11;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar19);
    puStack_1c0 = (undefined *)uVar11;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar11;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_c8 = uVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b8);
    _objc_release(puVar2);
    _objc_release(uVar18);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(puVar7);
    _objc_release(puVar8);
    _objc_release(uVar12);
    _objc_release(puStack_1c0);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    _objc_release(puStack_180);
    _objc_release(puStack_188);
    func_0x00010bedd160(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    lVar19 = (long)_DAT_11275f42c;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar18);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar19));
    _objc_release(puVar2);
    func_0x00010c1677c0(0,*(undefined8 *)((long)puVar1 + lVar19));
    puVar3 = puVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar19));
    puStack_1b0 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_188 = (undefined *)uVar18;
    func_0x00010bfdf3c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar18;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar19);
    puStack_198 = (undefined *)uVar18;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_1a8 = (undefined *)uVar12;
    func_0x00010bfdf3c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar12;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfdf3c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar11;
    uVar14 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar14;
    func_0x00010bf49420(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_e8 = uVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1b0);
    _objc_release(puVar2);
    _objc_release(uVar18);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1a0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    _objc_release(puStack_180);
    _objc_release(puStack_188);
    puVar16 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar16);
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c219b60(puVar16);
    puStack_1a0 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar2 = puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    puStack_188 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_190 = (undefined8 *)uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar16;
    puStack_198 = puVar2;
    puStack_120 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar16;
    puStack_180 = (undefined8 *)puVar16;
    puStack_118 = puVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)((long)puVar1 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = puVar6;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar16;
    func_0x00010bf49420(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_108 = puVar5;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1a0);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar16);
    _objc_release(puVar6);
    _objc_release(uVar11);
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(uVar18);
    _objc_release(puVar15);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    _objc_release(puStack_188);
    puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
    _objc_alloc();
    func_0x00010c013de0(uVar21,uVar22,uVar23,uVar24);
    lVar20 = (long)_DAT_11275f430;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar18);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar20));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar20));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c271420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(uVar18);
    _objc_release(puVar2);
    func_0x00010c2163a0(0x4024000000000000,0,0,0,*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010befbd60(*(undefined8 *)((long)puVar1 + lVar20));
    uVar18 = *(undefined8 *)((long)puVar1 + lVar20);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(uVar18);
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    uVar18 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar18;
    func_0x00010bf493c0(0xc028000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar18);
    puStack_188 = (undefined *)uVar11;
    func_0x00010c1e3380(0x437a0000,uVar11);
    uVar12 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar12;
    func_0x00010bf49420(0);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11275f434;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined8 *)((long)puVar1 + lVar19) = uVar18;
    _objc_release(uVar13);
    _objc_release(uVar12);
    puStack_1a0 = (undefined8 *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar20);
    puStack_198 = (undefined *)lVar20;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    puStack_190 = (undefined8 *)uVar12;
    func_0x00010bfdf3c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_140 = uVar12;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010bfdf3c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar13;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uVar18;
    uStack_130 = *(undefined8 *)((long)puVar1 + lVar19);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_128 = uVar11;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1a0);
    _objc_release(puVar2);
    _objc_release(uVar18);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puStack_190);
    puVar2 = PTR_PTR_1126d2c10;
    _objc_alloc_init();
    func_0x00010c1c8300(0x4000000000000000);
    func_0x00010c1c82c0(0x4000000000000000,puVar2);
    func_0x00010c1f93e0(0x4022000000000000,0x402a000000000000,0x4022000000000000,0x402a000000000000,
                        puVar2);
    _objc_opt_class(puVar1);
    func_0x00010bddc3a0();
    puStack_190 = (undefined8 *)puVar2;
    func_0x00010c1b6260(puVar2);
    puVar2 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
    _objc_alloc();
    func_0x00010c014040(uVar21,uVar22,uVar23,uVar24);
    lVar20 = (long)_DAT_11275f438;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar20);
    *(undefined **)((long)puVar1 + lVar20) = puVar2;
    _objc_release(uVar18);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar20));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar20));
    _objc_release(puVar2);
    func_0x00010c1f7e20(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c2025c0(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c2026e0(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar20));
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar20));
    puVar4 = puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bfdf3c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
    uVar11 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar11;
    func_0x00010bf493c0(0x405d000000000000);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = (long)_DAT_11275f43c;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined8 *)((long)puVar1 + lVar19) = uVar18;
    _objc_release(uVar12);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar11);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar20));
    puStack_1c0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uStack_160 = *(undefined8 *)((long)puVar1 + lVar19);
    uVar18 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_1a8 = (undefined *)uVar18;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = uVar18;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar20);
    puStack_1b8 = (undefined8 *)uVar18;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_150 = uVar11;
    uVar13 = *(undefined8 *)((long)puVar1 + lVar20);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)((long)puVar1 + (long)puStack_198);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar13;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_148 = uVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_1c0);
    _objc_release(puVar2);
    _objc_release(uVar18);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar11);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar12);
    _objc_release(puStack_1b8);
    _objc_release(puStack_1b0);
    _objc_release(puStack_1a0);
    _objc_release(puStack_1a8);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar19 = (long)_DAT_11275f440;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar18);
    func_0x00010c1c8340(0,*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar20));
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    lVar19 = (long)_DAT_11275f444;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined **)((long)puVar1 + lVar19) = puVar2;
    _objc_release(uVar18);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar19));
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar20));
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    unaff_x22 = (long)_DAT_11275f448;
    uVar18 = *(undefined8 *)((long)puVar1 + unaff_x22);
    *(undefined **)((long)puVar1 + unaff_x22) = puVar2;
    _objc_release(uVar18);
    func_0x00010c1c8340(0,*(undefined8 *)((long)puVar1 + unaff_x22));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + unaff_x22));
    puVar3 = puVar1;
    func_0x00010bfe9900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_alloc();
    func_0x00010c050900();
    unaff_x21 = (long)_DAT_11275f44c;
    uVar18 = *(undefined8 *)((long)puVar1 + unaff_x21);
    *(undefined **)((long)puVar1 + unaff_x21) = puVar2;
    _objc_release(uVar18);
    func_0x00010c1c8340(0x3fd3333333333333,*(undefined8 *)((long)puVar1 + unaff_x21));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + unaff_x21));
    unaff_x20 = puVar1;
    func_0x00010bfe9900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(unaff_x20);
    _objc_release(puStack_190);
    _objc_release(puStack_188);
    _objc_release(puStack_180);
    puVar2 = puStack_178;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_200;
  pcStack_1c8 = FUN_106e2aa8c;
  lVar19 = (long)_DAT_11275f450;
  lStack_1f0 = unaff_x22;
  lStack_1e8 = unaff_x21;
  puStack_1e0 = unaff_x20;
  puStack_1d8 = puVar1;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x00010c256060(*(undefined8 *)(puVar2 + lVar19));
  uVar18 = *(undefined8 *)(puVar2 + lVar19);
  *(undefined8 *)(puVar2 + lVar19) = 0;
  _objc_release(uVar18);
  lVar19 = (long)_DAT_11275f454;
  func_0x00010c137fe0(*(undefined8 *)(puVar2 + lVar19));
  uVar18 = *(undefined8 *)(puVar2 + lVar19);
  *(undefined8 *)(puVar2 + lVar19) = 0;
  _objc_release(uVar18);
  puStack_1f8 = PTR_PTR_1126f7130;
  puStack_200 = puVar2;
  _objc_msgSendSuper2(&puStack_200,PTR_s_dealloc_112525b20);
  return ppuVar17;
}



/* Entry: 106e2aa8c; end: 106e2ab0b; -[SCGalleryBaseStoryCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2aa8c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = (long)_DAT_11275f450;
  func_0x00010c256060(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11275f454;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1126f7130;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e2ab0c; end: 106e2ac7b; -[SCGalleryBaseStoryCell _handleImageViewLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ab0c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c252440();
  if (lVar1 < 3) {
    if (lVar1 == 0) goto LAB_106e2abcc;
    if (lVar1 != 1) {
      if (lVar1 == 2) {
        lVar1 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09ef00(param_5,param_4,lVar1);
        _objc_release(lVar1);
        param_1 = param_1 - *(double *)(param_3 + _DAT_11275f458);
        param_2 = param_2 - ((double *)(param_3 + _DAT_11275f458))[1];
        if (2.0 < SQRT(param_2 * param_2 + param_1 * param_1)) {
          func_0x00010c14c8a0(param_5);
        }
      }
      goto LAB_106e2ac64;
    }
    lVar3 = (long)_DAT_11275f458;
    lVar1 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_5,param_4,lVar1);
    *(double *)(param_3 + lVar3) = param_1;
    ((double *)(param_3 + lVar3))[1] = param_2;
    _objc_release(lVar1);
    uVar2 = 0;
  }
  else {
    if (1 < lVar1 - 4U) {
      if (lVar1 == 3) {
        func_0x00010bdcad40(param_3,param_4,1);
        param_3 = param_3 + _DAT_11275f45c;
        _objc_loadWeakRetained(param_3);
        func_0x00010c259400();
        _objc_release(param_3);
      }
      goto LAB_106e2ac64;
    }
LAB_106e2abcc:
    uVar2 = 1;
  }
  func_0x00010bdcad40(param_3,param_4,uVar2);
LAB_106e2ac64:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106e2ac7c; end: 106e2ad1b; -[SCGalleryBaseStoryCell _handleImageViewActionMenuLongPressGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ac7c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c068780();
  if (((uint)lVar1 >> 1 & 1) != 0) {
    lVar1 = param_3;
    func_0x00010c252440();
    if (2 < lVar1 - 2U) {
      if (lVar1 != 1) goto LAB_106e2ad08;
      func_0x00010c14c8a0(*(undefined8 *)(param_1 + _DAT_11275f448));
    }
    param_1 = param_1 + _DAT_11275f45c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c259420();
    _objc_release(param_1);
  }
LAB_106e2ad08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e2ad1c; end: 106e2ad83; -[SCGalleryBaseStoryCell _animateImageView:] */

void FUN_106e2ad1c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106e2ad84;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  return;
}



/* Entry: 106e2ad84; end: 106e2ae17;  */

void FUN_106e2ad84(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    _CGAffineTransformMakeScale(&uStack_50,0x3fee666666666666,0x3fee666666666666);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe9900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 106e2ae18; end: 106e2af6b; -[SCGalleryBaseStoryCell _updatePlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2ae18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar2 = puVar1;
  func_0x000107e90aa4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7440(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar1);
  puVar6 = puVar1;
  func_0x00010c16b680(*(undefined8 *)(param_1 + _DAT_11275f428));
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar6,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}


