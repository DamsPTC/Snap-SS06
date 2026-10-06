/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cf6bf0; end: 105cf6c4b; -[SCSearchAttachmentsWebViewViewModel encodeWithFasterCoder:] */

void FUN_105cf6bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf6c4c; end: 105cf6cdf; -[SCSearchAttachmentsWebViewViewModel decodeWithFasterDecoder:] */

void FUN_105cf6c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cf6ce0; end: 105cf6d87; -[SCSearchAttachmentsWebViewViewModel setObject:forUInt64Key:] */

void FUN_105cf6ce0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 == 0x12ba0ab55a86dc) {
    lVar2 = 0x18;
  }
  else if (param_4 == 0x203ab1269b00b8) {
    lVar2 = 8;
  }
  else {
    if (param_4 != 0x3e87f94b53fccc) goto LAB_105cf6d74;
    lVar2 = 0x10;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_105cf6d74:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf6d88; end: 105cf6d9b; +[SCSearchAttachmentsWebViewViewModel fasterCodingVersion] */

undefined8 FUN_105cf6d88(void)

{
  return 0x51931017968a2de5;
}



/* Entry: 105cf6d9c; end: 105cf6da7; +[SCSearchAttachmentsWebViewViewModel fasterCodingKeys] */

undefined8 FUN_105cf6d9c(void)

{
  return 0x113128968;
}



/* Entry: 105cf6da8; end: 105cf6dc3; -[SCSearchAttachmentsWebViewViewModel isEqual:] */

undefined8 * FUN_105cf6da8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x1136c2250;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 3;
  lVar5 = 3;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam00000001136c2248 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x1136c2250) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam00000001136c2248 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 105cf6dc4; end: 105cf6dd7; -[SCSearchAttachmentsWebViewViewModel hash] */

ulong FUN_105cf6dc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x1136c2250;
  if ((bRam00000001136c2248 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 3;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x1136c2250) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam00000001136c2248 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam00000001136c2250);
  func_0x00010bfde980(uVar3);
  lVar7 = 2;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 105cf6dd8; end: 105cf6ddf; -[SCSearchAttachmentsWebViewViewModel displayText] */

undefined8 FUN_105cf6dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105cf6de0; end: 105cf6de7; -[SCSearchAttachmentsWebViewViewModel contentURL] */

undefined8 FUN_105cf6de0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105cf6de8; end: 105cf6def; -[SCSearchAttachmentsWebViewViewModel attachButtonModel] */

undefined8 FUN_105cf6de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105cf6df0; end: 105cf6e2b; -[SCSearchAttachmentsWebViewViewModel .cxx_destruct] */

void FUN_105cf6df0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cf6e2c; end: 105cf6f0b; +[SCSearchAttachmentsWebViewViewModelBuilder withSearchAttachmentsWebViewViewModel:] */

void FUN_105cf6e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c3eb0;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf86660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf0c5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cf6f0c; end: 105cf6f3f; -[SCSearchAttachmentsWebViewViewModelBuilder build] */

void FUN_105cf6f0c(void)

{
  _objc_alloc(PTR_PTR_1126c3e98);
  func_0x00010c00d680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf6f40; end: 105cf6f77; -[SCSearchAttachmentsWebViewViewModelBuilder setDisplayText:] */

long FUN_105cf6f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105cf6f78; end: 105cf6faf; -[SCSearchAttachmentsWebViewViewModelBuilder setContentURL:] */

long FUN_105cf6f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105cf6fb0; end: 105cf6fe7; -[SCSearchAttachmentsWebViewViewModelBuilder setAttachButtonModel:] */

long FUN_105cf6fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105cf6fe8; end: 105cf7023; -[SCSearchAttachmentsWebViewViewModelBuilder .cxx_destruct] */

void FUN_105cf6fe8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cf7024; end: 105cf70c3;  */

void FUN_105cf7024(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfda7c0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e28298);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_1);
    puVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cf70c4; end: 105cf71e3; -[SCSearchAttachmentIntroCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105cf70c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ecd70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e8e0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(puVar2);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112734534);
    *(undefined **)((long)puVar1 + (long)_DAT_112734534) = puVar2;
    _objc_release(uVar4);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bf31be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105cf71e4; end: 105cf72af; -[SCSearchAttachmentIntroCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf71e4(double param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126ecd70;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_112734534;
  uVar1 = *(undefined8 *)(param_3 + lVar2);
  func_0x00010bfe6ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar3 = param_1;
  _objc_release(uVar1);
  func_0x00010bf20c00(param_3);
  _CGRectGetWidth();
  dVar3 = dVar3 - param_1;
  dVar4 = dVar3 * 0.5;
  func_0x00010bf20c00(param_3);
  _CGRectGetMinY();
  func_0x00010c19f0e0(dVar4,dVar3 + 92.5,param_1,param_2,*(undefined8 *)(param_3 + lVar2));
  return;
}



/* Entry: 105cf72b0; end: 105cf72bb; +[SCSearchAttachmentIntroCell sizeWithViewModel:constrainedToSize:] */

void FUN_105cf72b0(void)

{
  return;
}



/* Entry: 105cf72bc; end: 105cf72c3; -[SCSearchAttachmentIntroCell backgroundShapeViewShadowOpacity] */

undefined8 FUN_105cf72bc(void)

{
  return 0;
}



/* Entry: 105cf72c4; end: 105cf72cb; -[SCSearchAttachmentIntroCell searchCollectionViewCellShouldChangeBackgroundColorOnHighlight] */

undefined8 FUN_105cf72c4(void)

{
  return 0;
}



/* Entry: 105cf72cc; end: 105cf72df; -[SCSearchAttachmentIntroCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf72cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734534,0);
  return;
}



/* Entry: 105cf72e0; end: 105cf7353; -[SCSearchAttachmentsIntroSection initWithDataProvider:] */

undefined1 * FUN_105cf72e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ecd78;
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



/* Entry: 105cf7354; end: 105cf735f; -[SCSearchAttachmentsIntroSection setUp] */

void FUN_105cf7354(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addAttachmentsListener__11259b568,param_1);
  return;
}



/* Entry: 105cf7360; end: 105cf736b; -[SCSearchAttachmentsIntroSection tearDown] */

void FUN_105cf7360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAttachmentsListener__112628708,param_1);
  return;
}



/* Entry: 105cf736c; end: 105cf744b; -[SCSearchAttachmentsIntroSection applyConfiguration:] */

void FUN_105cf736c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  *(undefined8 *)(param_1 + 0x28) = 1;
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105cf744c;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105cf744c; end: 105cf7477;  */

void FUN_105cf744c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfde0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf7478; end: 105cf74f7; -[SCSearchAttachmentsIntroSection reuseCellClassesByIdentifiers] */

undefined * FUN_105cf7478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e28398;
  puVar1 = PTR_PTR_1126c3eb8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(byte)puVar2[0x10];
}



/* Entry: 105cf74f8; end: 105cf74ff; -[SCSearchAttachmentsIntroSection numberOfCellsInSection] */

undefined1 FUN_105cf74f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105cf7500; end: 105cf758f; -[SCSearchAttachmentsIntroSection cellForItemAtIndexInSection:] */

void FUN_105cf7500(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c3eb8;
  _objc_opt_class(PTR_PTR_1126c3eb8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cf7590; end: 105cf75b3; -[SCSearchAttachmentsIntroSection sizeForItemAtIndexInSection:withWidth:] */

void FUN_105cf7590(double param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + -16.0 + -16.0,0x7fefffffffffffff,PTR_PTR_1126c3eb8,
             PTR_s_sizeWithViewModel_constrainedToS_11266cfe0,0);
  return;
}



/* Entry: 105cf75b4; end: 105cf75b7; -[SCSearchAttachmentsIntroSection attachmentDataDidUpdate:] */

void FUN_105cf75b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedfdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateShouldShow_112595920);
  return;
}



/* Entry: 105cf75b8; end: 105cf76c3; -[SCSearchAttachmentsIntroSection _updateShouldShow] */

void FUN_105cf75b8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  *(undefined8 *)(param_1 + 0x28) = 2;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf0ce20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c1223a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105cf76c4;
  puStack_50 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = bVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cf76c4; end: 105cf76f7;  */

void FUN_105cf76c4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea78c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf76f8; end: 105cf7753; -[SCSearchAttachmentsIntroSection _setShouldShowIntro:] */

void FUN_105cf76f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x10) = param_3;
  puVar1 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf7754; end: 105cf775b; -[SCSearchAttachmentsIntroSection sectionUpdateModel] */

undefined8 FUN_105cf7754(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105cf775c; end: 105cf7763; -[SCSearchAttachmentsIntroSection setSectionUpdateModel:] */

void FUN_105cf775c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105cf7764; end: 105cf777b; -[SCSearchAttachmentsIntroSection delegate] */

void FUN_105cf7764(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf777c; end: 105cf7787; -[SCSearchAttachmentsIntroSection setDelegate:] */

void FUN_105cf777c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105cf7788; end: 105cf778f; -[SCSearchAttachmentsIntroSection dataLoadingStatus] */

undefined8 FUN_105cf7788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105cf7790; end: 105cf7797; -[SCSearchAttachmentsIntroSection setDataLoadingStatus:] */

void FUN_105cf7790(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105cf7798; end: 105cf77cf; -[SCSearchAttachmentsIntroSection .cxx_destruct] */

void FUN_105cf7798(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cf77d0; end: 105cf77db; +[SCSearchAttachmentsSection announcerIdentifier] */

undefined ** FUN_105cf77d0(void)

{
  return &PTR____CFConstantStringClassReference_110e283d8;
}



/* Entry: 105cf77dc; end: 105cf77e3; -[SCSearchAttachmentsSection addListener:] */

void FUN_105cf77dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cf77e4; end: 105cf77eb; -[SCSearchAttachmentsSection removeListener:] */

void FUN_105cf77e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cf77ec; end: 105cf78c7; -[SCSearchAttachmentsSection initWithDataProvider:userSession:] */

undefined1 *
FUN_105cf77ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecd80;
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
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3ec0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf78c8; end: 105cf78ef; -[SCSearchAttachmentsSection supplementaryViewProvider] */

void FUN_105cf78c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cf78f0; end: 105cf78fb; -[SCSearchAttachmentsSection setUp] */

void FUN_105cf78f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef6f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_addAttachmentsListener__11259b568,param_1);
  return;
}



/* Entry: 105cf78fc; end: 105cf7907; -[SCSearchAttachmentsSection tearDown] */

void FUN_105cf78fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeAttachmentsListener__112628708,param_1);
  return;
}



/* Entry: 105cf7908; end: 105cf7aeb; -[SCSearchAttachmentsSection applyConfiguration:] */

void FUN_105cf7908(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x18);
    _objc_retain(param_3);
    _objc_retain(uVar6);
    if (param_3 == uVar6) {
      _objc_release(uVar6);
      _objc_release(param_3);
    }
    else {
      if (uVar6 == 0) {
        _objc_release();
      }
      else {
        uVar2 = param_3;
        func_0x00010c071ae0();
        _objc_release(uVar6);
        _objc_release(param_3);
        if ((uVar2 & 1) != 0) goto LAB_105cf7ab4;
      }
      uVar6 = param_3;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(ulong *)(param_1 + 0x18) = uVar6;
      _objc_release(uVar5);
      *(undefined8 *)(param_1 + 0x48) = 1;
      iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
      func_0x00010c073a60();
      puVar3 = PTR_PTR_1126c3ec8;
      _objc_alloc(PTR_PTR_1126c3ec8);
      ppuVar4 = &PTR____CFConstantStringClassReference_110e283f8;
      if (iVar1 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110e28418;
      }
      func_0x00010bcbeaa8(ppuVar4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00d660(puVar3);
      func_0x00010c1f92e0(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar3);
      _objc_release(ppuVar4);
      _objc_initWeak(auStack_38,param_1);
      uVar5 = 0;
      func_0x0001000819a8(0,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_105cf7aec;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010007380c(uVar5,&puStack_60);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
LAB_105cf7ab4:
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 105cf7aec; end: 105cf7b17;  */

void FUN_105cf7aec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf7b18; end: 105cf7b97; -[SCSearchAttachmentsSection reuseCellClassesByIdentifiers] */

void FUN_105cf7b18(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105cf7b98; end: 105cf7b9f; -[SCSearchAttachmentsSection numberOfCellsInSection] */

void FUN_105cf7b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105cf7ba0; end: 105cf7cdb; -[SCSearchAttachmentsSection cellForItemAtIndexInSection:] */

void FUN_105cf7ba0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c3ed0;
  _objc_opt_class(PTR_PTR_1126c3ed0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bf529e0();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfe7580(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar5);
  func_0x00010c161980(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0(uVar1);
  _objc_release(uVar5);
  func_0x00010c1ee980(uVar1);
  func_0x00010c1fce20(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cf7cdc; end: 105cf7ee3; -[SCSearchAttachmentsSection collectionView:willDisplayCell:atIndexInSection:] */

undefined1  [16]
FUN_105cf7cdc(double param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126c3ed0;
  _objc_opt_class(PTR_PTR_1126c3ed0);
  uVar3 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar2);
  uVar1 = param_6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = param_6;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c3ea0;
    _objc_opt_class(PTR_PTR_1126c3ea0);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c28f9a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010c073a60();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar8 = *(undefined8 *)(param_3 + 0x28);
    _objc_opt_class(param_3);
    func_0x00010bf04780();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010bf7dbc0(uVar8);
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = param_1;
    return auVar11;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c3ed0;
  dVar10 = param_1 + -16.0 + -16.0;
  uVar8 = *(undefined8 *)(param_6 + 0x20);
  func_0x00010c0dfd40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0x7fefffffffffffff;
  func_0x00010c23d6e0(dVar10,0x7fefffffffffffff,puVar2);
  _objc_release(uVar8);
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = dVar10;
  return auVar12;
}



/* Entry: 105cf7ee4; end: 105cf7f5b; -[SCSearchAttachmentsSection sizeForItemAtIndexInSection:withWidth:] */

undefined1  [16] FUN_105cf7ee4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_PTR_1126c3ed0;
  dVar4 = param_1 + -16.0 + -16.0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x7fefffffffffffff;
  func_0x00010c23d6e0(dVar4,0x7fefffffffffffff,puVar1,param_3,uVar2);
  _objc_release(uVar2);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = dVar4;
  return auVar5;
}



/* Entry: 105cf7f5c; end: 105cf7f63; -[SCSearchAttachmentsSection minimumSectionLineSpacing] */

undefined8 FUN_105cf7f5c(void)

{
  return 0;
}



/* Entry: 105cf7f64; end: 105cf7f6b; -[SCSearchAttachmentsSection minimumSectionInteritemSpacing] */

undefined8 FUN_105cf7f64(void)

{
  return 0;
}



/* Entry: 105cf7f6c; end: 105cf825f; -[SCSearchAttachmentsSection _updateSearchResult] */

void FUN_105cf7f6c(long param_1,undefined **param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  ppuVar8 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x48) = 2;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c073a60();
  puVar2 = *(undefined **)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x00010c1223a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105cf8260;
    puStack_70 = &UNK_1108e5320;
    param_2 = &puStack_88;
    puVar11 = puVar2;
    lStack_68 = param_1;
    func_0x000100504554();
    _objc_release(puVar2);
  }
  else {
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000105cf9c40();
    _objc_release(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf0ce20();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010c081d20();
    _objc_release(uVar4);
    puVar11 = (undefined *)0x0;
    if (((int)uVar12 != 0) && (puVar3 == (undefined *)0x1)) {
      puVar2 = PTR_PTR_1126c3ea0;
      _objc_alloc();
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf0ce20();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar5;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf0ce20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf0d660();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c053c80();
      _objc_release(uVar7);
      _objc_release(uVar4);
      _objc_release(uVar6);
      _objc_release(uVar12);
      _objc_release(uVar5);
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = puVar2;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
  }
  puVar2 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar11);
  _objc_retain(puVar2);
  if (puVar11 == puVar2) {
    _objc_release(puVar2);
    _objc_release(puVar11);
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      _objc_release(puVar11);
    }
    else {
      puVar3 = puVar11;
      func_0x00010c071ae0();
      _objc_release(puVar2);
      _objc_release(puVar11);
      if (((ulong)puVar3 & 1) != 0) goto LAB_105cf821c;
    }
    _objc_initWeak(auStack_90,param_1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105cf836c;
    puStack_a8 = &UNK_110841fb0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(puVar11);
    puStack_a0 = puVar11;
    func_0x000100162d98("APPSTORE",&puStack_c0);
    _objc_release(puStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    param_2 = ppuVar8;
  }
LAB_105cf821c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar12 = *(undefined8 *)(*(long *)(puVar11 + 0x20) + 8);
    _objc_retain(param_2);
    func_0x00010c1223a0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126c3ea0;
    _objc_alloc(PTR_PTR_1126c3ea0);
    ppuVar8 = param_2;
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = param_2;
    func_0x00010bf0d660(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar9;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf341e0(param_2);
    _objc_release(param_2);
    func_0x00010c053c80(puVar2);
    _objc_release(ppuVar10);
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105cf8260; end: 105cf836b;  */

void FUN_105cf8260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c1223a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126c3ea0;
  _objc_alloc(PTR_PTR_1126c3ea0);
  uVar4 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf0d660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf341e0(param_2);
  _objc_release(param_2);
  func_0x00010c053c80(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105cf836c; end: 105cf839f;  */

void FUN_105cf836c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf83a0; end: 105cf8477; -[SCSearchAttachmentsSection attachmentDataDidUpdate:] */

void FUN_105cf83a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105cf8478;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105cf8478; end: 105cf84a3;  */

void FUN_105cf8478(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf84a4; end: 105cf8513; -[SCSearchAttachmentsSection _updateViewModels:] */

void FUN_105cf84a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126b48b0;
  func_0x00010c128f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf40a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf8514; end: 105cf851b; -[SCSearchAttachmentsSection sectionUpdateModel] */

undefined8 FUN_105cf8514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105cf851c; end: 105cf8523; -[SCSearchAttachmentsSection setSectionUpdateModel:] */

void FUN_105cf851c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105cf8524; end: 105cf853b; -[SCSearchAttachmentsSection delegate] */

void FUN_105cf8524(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf853c; end: 105cf8547; -[SCSearchAttachmentsSection setDelegate:] */

void FUN_105cf853c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105cf8548; end: 105cf854f; -[SCSearchAttachmentsSection dataLoadingStatus] */

undefined8 FUN_105cf8548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105cf8550; end: 105cf8557; -[SCSearchAttachmentsSection setDataLoadingStatus:] */

void FUN_105cf8550(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 105cf8558; end: 105cf855f; -[SCSearchAttachmentsSection actionHandler] */

undefined8 FUN_105cf8558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105cf8560; end: 105cf858f; -[SCSearchAttachmentsSection setActionHandler:] */

void FUN_105cf8560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf8590; end: 105cf860f; -[SCSearchAttachmentsSection .cxx_destruct] */

void FUN_105cf8590(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 105cf8610; end: 105cf86db; -[SCSearchAttachmentSectionCreator initWithUserSession:dataProvider:actionHandler:] */

undefined1 *
FUN_105cf8610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ecd88;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf86dc; end: 105cf886b; -[SCSearchAttachmentSectionCreator sectionForDescriptor:] */

void FUN_105cf86dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_3;
    func_0x00010c27dd80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_3;
      func_0x00010c27dd80();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        puVar4 = PTR_PTR_1126b1108;
        _objc_alloc(PTR_PTR_1126b1108);
        puVar3 = PTR_PTR_1126c3ec0;
        _objc_opt_new(PTR_PTR_1126c3ec0);
        func_0x00010c04f820(puVar4,param_2,puVar3);
        _objc_release(puVar3);
        puVar3 = PTR_PTR_1126c3ee8;
        _objc_alloc(PTR_PTR_1126c3ee8);
        func_0x00010c008c60();
        func_0x00010c1f9240(puVar4,param_2,puVar3);
        func_0x00010c161980(puVar4,param_2,*(undefined8 *)(param_1 + 0x18));
        _objc_release(puVar3);
      }
    }
    else {
      puVar4 = PTR_PTR_1126c3ee0;
      _objc_alloc(PTR_PTR_1126c3ee0);
      func_0x00010c008ac0();
    }
  }
  else {
    puVar4 = PTR_PTR_1126c3ed8;
    _objc_alloc(PTR_PTR_1126c3ed8);
    func_0x00010c008c60();
    func_0x00010c161980();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105cf886c; end: 105cf88a7; -[SCSearchAttachmentSectionCreator .cxx_destruct] */

void FUN_105cf886c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cf88a8; end: 105cf898b; -[SCSearchAttachmentsConfirmationCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105cf88a8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ecd90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e8e0(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c3ef0;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_112734580;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar5));
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105cf898c; end: 105cf8a2f; -[SCSearchAttachmentsConfirmationCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf898c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ecd90;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  lVar1 = param_5;
  func_0x00010bf4dce0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(lVar1);
  func_0x00010c19f0e0(param_1 + 0.0,param_2 + 0.0,param_3,param_4,
                      *(undefined8 *)(param_5 + _DAT_112734580));
  return;
}



/* Entry: 105cf8a30; end: 105cf8ba3; -[SCSearchAttachmentsConfirmationCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf8a30(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c3ef8;
  _objc_opt_class(PTR_PTR_1126c3ef8);
  uVar6 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar7 = (long)_DAT_112734584;
  uVar6 = *(ulong *)(param_1 + lVar7);
  _objc_retain(uVar1);
  _objc_retain(uVar6);
  if (uVar1 == uVar6) {
    _objc_release(uVar6);
    _objc_release(uVar1);
  }
  else {
    if (uVar6 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar6);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_105cf8b84;
    }
    uVar6 = uVar1;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(ulong *)(param_1 + lVar7) = uVar6;
    _objc_release(uVar5);
    puVar2 = PTR_PTR_1126c3f00;
    _objc_alloc(PTR_PTR_1126c3f00);
    uVar6 = uVar1;
    func_0x00010c2711a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e28538;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e28538,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053c40(puVar2);
    func_0x00010c2226c0(*(undefined8 *)(param_1 + _DAT_112734580));
    _objc_release(puVar2);
    _objc_release(ppuVar4);
    _objc_release(uVar6);
    func_0x00010c1cbe20(param_1);
  }
LAB_105cf8b84:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cf8ba4; end: 105cf8ca7; +[SCSearchAttachmentsConfirmationCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105cf8ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c3ef8;
  _objc_opt_class(PTR_PTR_1126c3ef8);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126c3f00;
  _objc_alloc(PTR_PTR_1126c3f00);
  uVar3 = uVar1;
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  ppuVar4 = &PTR____CFConstantStringClassReference_110e28538;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e28538,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053c40(puVar2);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  func_0x00010c23d6e0(param_1,param_2,PTR_PTR_1126c3ef0);
  _objc_release(puVar2);
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 105cf8ca8; end: 105cf8caf; -[SCSearchAttachmentsConfirmationCell backgroundShapeViewShadowOpacity] */

undefined8 FUN_105cf8ca8(void)

{
  return 0;
}



/* Entry: 105cf8cb0; end: 105cf8de7; -[SCSearchAttachmentsConfirmationCell confirmationView:didSelect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105cf8cb0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 1;
  if (param_4 == 0) {
    uVar1 = 2;
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_112734588);
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc(PTR_PTR_1126b02a8);
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e284d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e284b8,puVar4);
  func_0x00010bfd0140(uVar5,param_2,param_1,puVar2,*(undefined8 *)(param_1 + _DAT_112734580));
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar3 + _DAT_112734584);
}



/* Entry: 105cf8de8; end: 105cf8df7; -[SCSearchAttachmentsConfirmationCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cf8de8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734584);
}



/* Entry: 105cf8df8; end: 105cf8e07; -[SCSearchAttachmentsConfirmationCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cf8df8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112734588);
}



/* Entry: 105cf8e08; end: 105cf8e47; -[SCSearchAttachmentsConfirmationCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf8e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112734588;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cf8e48; end: 105cf8e97; -[SCSearchAttachmentsConfirmationCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cf8e48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112734588,0);
  _objc_storeStrong(param_1 + _DAT_112734584,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112734580,0);
  return;
}



/* Entry: 105cf8e98; end: 105cf8ea3; +[SCSearchAttachmentsConfirmationSectionDataProvider announcerIdentifier] */

undefined ** FUN_105cf8e98(void)

{
  return &PTR____CFConstantStringClassReference_110e28578;
}



/* Entry: 105cf8ea4; end: 105cf8eab; -[SCSearchAttachmentsConfirmationSectionDataProvider addListener:] */

void FUN_105cf8ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105cf8eac; end: 105cf8eb3; -[SCSearchAttachmentsConfirmationSectionDataProvider removeListener:] */

void FUN_105cf8eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105cf8eb4; end: 105cf8f7f; -[SCSearchAttachmentsConfirmationSectionDataProvider initWithDataProvider:userSession:] */

undefined1 *
FUN_105cf8eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecd98;
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
    func_0x00010bef6f00(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cf8f80; end: 105cf8fd7; -[SCSearchAttachmentsConfirmationSectionDataProvider setSectionDataModel:] */

void FUN_105cf8f80(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 8);
  FUN_105cf8fd8();
  if (*(byte *)(param_1 + 0x20) == uVar1) {
    return;
  }
  *(char *)(param_1 + 0x20) = (char)uVar1;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c155aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cf8fd8; end: 105cf9053;  */

bool FUN_105cf8fd8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf0ce20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010bfa2b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000105cf9c40();
    _objc_release(lVar2);
    bVar1 = lVar3 == 0;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105cf9054; end: 105cf915f; -[SCSearchAttachmentsConfirmationSectionDataProvider containerCellViewModelsForIndexPaths:] */

undefined * FUN_105cf9054(undefined **param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 4) == '\x01') {
    puVar1 = PTR_PTR_1126aea98;
    _objc_alloc();
    puVar2 = PTR_PTR_1126c3ef8;
    _objc_alloc(PTR_PTR_1126c3ef8);
    param_1 = &PTR____CFConstantStringClassReference_110e28598;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e28598,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052bc0(puVar2);
    func_0x00010bffd260();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release();
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)*(byte *)(param_1 + 4);
}



/* Entry: 105cf9160; end: 105cf9167; -[SCSearchAttachmentsConfirmationSectionDataProvider numberOfItemsInSection:] */

undefined1 FUN_105cf9160(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 105cf9168; end: 105cf91e7; -[SCSearchAttachmentsConfirmationSectionDataProvider contentCellClassesByReuseIdentifier] */

void FUN_105cf9168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e28558;
  puVar1 = PTR_PTR_1126c3f08;
  _objc_opt_class();
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    pcStack_38 = FUN_105cf91e8;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e28558;
    ppuStack_50 = &PTR___NSConcreteGlobalBlock_1108e53b0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1
                       );
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
      ___stack_chk_fail();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cf91e8; end: 105cf925f; -[SCSearchAttachmentsConfirmationSectionDataProvider configurationBlocksByReuseIdentifier] */

void FUN_105cf91e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e28558;
  ppuStack_20 = &PTR___NSConcreteGlobalBlock_1108e53b0;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105cf9260; end: 105cf9263;  */

void FUN_105cf9260(void)

{
  return;
}



/* Entry: 105cf9264; end: 105cf926b; -[SCSearchAttachmentsConfirmationSectionDataProvider dataLoadingStatus] */

undefined8 FUN_105cf9264(void)

{
  return 2;
}


