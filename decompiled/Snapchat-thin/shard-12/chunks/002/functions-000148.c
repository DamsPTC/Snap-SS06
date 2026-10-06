/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ea1e90; end: 108ea1ffb; -[SCStoryInviteStoryStickerCarouselCell _fetchBitmojiImageWithStoryParticipants:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea1e90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (((lVar1 != 0) && (*(long *)(param_1 + _DAT_11277d03c) != 0)) &&
     ((*(byte *)(param_1 + _DAT_11277d02c) & 1) == 0)) {
    *(undefined1 *)(param_1 + _DAT_11277d02c) = 1;
    lVar1 = param_3;
    func_0x000107c31908(param_3,&PTR___NSConcreteGlobalBlock_110ac8278);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277d024);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c244ea0(uVar2);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108ea1ffc; end: 108ea2003;  */

void FUN_108ea1ffc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108ea2004; end: 108ea2227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108ea2004(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_3 == 0) && (param_1 != 0)) &&
     (lVar1 = param_2, func_0x00010bf529e0(), puVar4 = PTR_PTR_1126b4858, lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b19f8;
    func_0x00010c2545e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1bb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126bd8f0;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29e6c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277d048);
    _objc_retain(puVar4);
    _objc_retain(uVar5);
    _objc_retain(puVar2);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_108ea22f8;
    puStack_80 = &UNK_110ac8298;
    puStack_78 = puVar4;
    uStack_70 = uVar5;
    puStack_68 = puVar2;
    _objc_retain(uVar5);
    lVar1 = param_2;
    func_0x000107c31908(param_2,&puStack_98);
    _objc_release(puStack_68);
    _objc_release(uStack_70);
    _objc_release(puStack_78);
    _objc_release(uVar5);
    func_0x00010c222980(*(undefined8 *)(param_1 + _DAT_11277d040));
    _objc_release(lVar1);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_2;
  }
  ___stack_chk_fail();
  return *(long *)(param_2 + _DAT_11277d028);
}



/* Entry: 108ea2228; end: 108ea2237; -[SCStoryInviteStoryStickerCarouselCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ea2228(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d028);
}



/* Entry: 108ea2238; end: 108ea2247; -[SCStoryInviteStoryStickerCarouselCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ea2238(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d03c);
}



/* Entry: 108ea2248; end: 108ea22f7; -[SCStoryInviteStoryStickerCarouselCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea2248(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d03c,0);
  _objc_storeStrong(param_1 + _DAT_11277d028,0);
  _objc_storeStrong(param_1 + _DAT_11277d024,0);
  _objc_storeStrong(param_1 + _DAT_11277d034,0);
  _objc_storeStrong(param_1 + _DAT_11277d030,0);
  _objc_storeStrong(param_1 + _DAT_11277d048,0);
  _objc_storeStrong(param_1 + _DAT_11277d038,0);
  _objc_storeStrong(param_1 + _DAT_11277d040,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d044,0);
  return;
}



/* Entry: 108ea22f8; end: 108ea24af;  */

void FUN_108ea22f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126b4860;
    if (lVar5 != 0) {
      lVar1 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bf1bae0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1aee0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_108ea2460;
    }
  }
  puVar6 = PTR_PTR_1126b4860;
  func_0x00010bfe94a0(PTR_PTR_1126b4860);
  _objc_retainAutoreleasedReturnValue();
LAB_108ea2460:
  puVar7 = PTR_PTR_1126bd8e8;
  func_0x00010bfe9660(PTR_PTR_1126bd8e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108ea24b0; end: 108ea2527;  */

void FUN_108ea24b0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110efdad8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110efdad8,
                      &PTR____CFConstantStringClassReference_110efdaf8,0);
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



/* Entry: 108ea2528; end: 108ea263b; -[SCStoryInviteStoryStickerCarouselCellViewModel initWithPublicationId:storyTitle:memberText:storyType:storyParticipants:] */

undefined1 *
FUN_108ea2528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126feef0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea263c; end: 108ea265f; -[SCStoryInviteStoryStickerCarouselCellViewModel copyWithZone:] */

undefined8 FUN_108ea263c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ea2660; end: 108ea26ef; -[SCStoryInviteStoryStickerCarouselCellViewModel hash] */

undefined8 * FUN_108ea2660(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_108ea27b0:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108ea27bc;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20)))
    {
      lVar6 = *(long *)((long)puVar4 + 8);
      if ((lVar6 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x18);
          if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = *(undefined1 **)((long)puVar4 + 0x28);
            if (puVar7 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108ea27bc;
            }
            goto LAB_108ea27b0;
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_108ea27bc:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 108ea26f0; end: 108ea27d7; -[SCStoryInviteStoryStickerCarouselCellViewModel isEqual:] */

long FUN_108ea26f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ea27b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ea27bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108ea27bc;
            }
            goto LAB_108ea27b0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ea27bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ea27d8; end: 108ea27df; -[SCStoryInviteStoryStickerCarouselCellViewModel publicationId] */

undefined8 FUN_108ea27d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ea27e0; end: 108ea27e7; -[SCStoryInviteStoryStickerCarouselCellViewModel storyTitle] */

undefined8 FUN_108ea27e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ea27e8; end: 108ea27ef; -[SCStoryInviteStoryStickerCarouselCellViewModel memberText] */

undefined8 FUN_108ea27e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ea27f0; end: 108ea27f7; -[SCStoryInviteStoryStickerCarouselCellViewModel storyType] */

undefined8 FUN_108ea27f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ea27f8; end: 108ea27ff; -[SCStoryInviteStoryStickerCarouselCellViewModel storyParticipants] */

undefined8 FUN_108ea27f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ea2800; end: 108ea2847; -[SCStoryInviteStoryStickerCarouselCellViewModel .cxx_destruct] */

void FUN_108ea2800(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ea2848; end: 108ea2913; -[SCContextModalContainerViewController initWithStyle:backgroundColor:sheetHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108ea2848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126feef8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d064) = param_4;
    lVar3 = (long)_DAT_11277d068;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d06c) = param_1;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11277d070) = 1;
    func_0x00010c1c8b80(puVar1);
    func_0x00010c219b20(puVar1);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108ea2914; end: 108ea2917; -[SCContextModalContainerViewController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_108ea2914(void)

{
  return;
}



/* Entry: 108ea2918; end: 108ea291b; -[SCContextModalContainerViewController animationControllerForDismissedController:] */

void FUN_108ea2918(void)

{
  return;
}



/* Entry: 108ea291c; end: 108ea2973; -[SCContextModalContainerViewController transitionDuration:] */

undefined8 FUN_108ea291c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar1 = 0x3fe0000000000000;
  if (param_3 != param_1) {
    uVar1 = 0x3fd3333333333333;
  }
  return uVar1;
}



/* Entry: 108ea2974; end: 108ea2c8b; -[SCContextModalContainerViewController animateTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea2974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_7);
  lVar2 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010c27a940(param_5,param_6,param_7);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar2 == param_5) {
    lVar2 = param_7;
    uVar4 = param_1;
    func_0x00010bf4b2a0(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2,param_6,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bfaef80(param_7,param_6,param_5);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(uVar4,param_2,param_3,param_4);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    _CGAffineTransformMakeTranslation(&uStack_a0,0,uVar4);
    lVar3 = (long)_DAT_11277d074;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    func_0x00010c219960(*(undefined8 *)(param_5 + lVar3),param_6,&uStack_d0);
    _objc_release(lVar2);
    if (*(long *)(param_5 + lVar3) == 0) {
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
    }
    else {
      func_0x00010c27a460(&uStack_100);
    }
    uStack_c8 = uStack_f8;
    uStack_d0 = uStack_100;
    uStack_b8 = uStack_e8;
    uStack_c0 = uStack_f0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    func_0x00010c219960(*(undefined8 *)(param_5 + _DAT_11277d078),param_6,&uStack_d0);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar4 = 0x3ff0000000000000;
    if (*(long *)(param_5 + _DAT_11277d064) != 2) {
      uVar4 = 0x3fe999999999999a;
    }
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_108ea2c8c;
    puStack_110 = &UNK_110842e18;
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_108ea2d24;
    puStack_138 = &UNK_110841f20;
    lStack_130 = param_7;
    lStack_108 = param_5;
    _objc_retain(param_7);
    func_0x00010bf03460(param_1,0,uVar4,0x3fb999999999999a,puVar1,param_6,0,&puStack_128,
                        &puStack_150);
    lVar2 = lStack_130;
  }
  else {
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108ea2d30;
    puStack_160 = &UNK_110842e18;
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_108ea2e18;
    puStack_190 = &UNK_110848bd8;
    lStack_188 = param_5;
    lStack_180 = param_7;
    lStack_158 = param_5;
    _objc_retain(param_7);
    func_0x00010bf03440(param_1,0,puVar1,param_6,0x10000,&puStack_178,&puStack_1a8);
    lVar2 = lStack_180;
  }
  _objc_release(lVar2);
  _objc_release(param_7);
  return;
}



/* Entry: 108ea2c8c; end: 108ea2d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea2c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277d074),param_2,
                      &uStack_50);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277d078),param_2,
                      &uStack_50);
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277d07c));
  return;
}



/* Entry: 108ea2d24; end: 108ea2d2f;  */

void FUN_108ea2d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 108ea2d30; end: 108ea2e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea2d30(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
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
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c60();
  _CGAffineTransformMakeTranslation(&uStack_60,0,param_1);
  lVar3 = (long)_DAT_11277d074;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar3),param_3,&uStack_90);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar2 + lVar3) == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_c0);
    lVar2 = *(long *)(param_2 + 0x20);
  }
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  func_0x00010c219960(*(undefined8 *)(lVar2 + _DAT_11277d078),param_3,&uStack_90);
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_2 + 0x20) + (long)_DAT_11277d07c));
  return;
}



/* Entry: 108ea2e18; end: 108ea2e5b;  */

void FUN_108ea2e18(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_completeTransition__1125ae898,1);
  return;
}



/* Entry: 108ea2e5c; end: 108ea30bf; -[SCContextModalContainerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea2e5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126feef8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277d07c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41680(0,0x3fe51eb851eb851f,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4));
  _objc_release(puVar1);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  _objc_alloc_init();
  lVar4 = (long)_DAT_11277d080;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c181fc0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1d8be0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1738c0(*(undefined8 *)(param_1 + lVar4));
  lVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_11277d084;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  lVar3 = (long)_DAT_11277d078;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277d074);
  *(undefined **)(param_1 + _DAT_11277d074) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c167760(param_1);
  return;
}



/* Entry: 108ea30c0; end: 108ea30eb; -[SCContextModalContainerViewController contentContainerClipsSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea30c0(long param_1)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bf3d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d074),PTR_s_clipsToBounds_1125acfe0);
  return;
}



/* Entry: 108ea30ec; end: 108ea3127; -[SCContextModalContainerViewController updateSheetHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea30ec(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11277d06c) = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108ea3128; end: 108ea315b; -[SCContextModalContainerViewController setContentContainerClipsSubviews:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea3128(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c09c7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c17d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d074),PTR_s_setClipsToBounds__11263cf50,param_3);
  return;
}



/* Entry: 108ea315c; end: 108ea31ab; -[SCContextModalContainerViewController setAllowsSwipeToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea315c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(char *)(param_1 + _DAT_11277d088) = (char)param_3;
  func_0x00010c195460(*(undefined8 *)(param_1 + _DAT_11277d084));
                    /* WARNING: Could not recover jumptable at 0x00010c1f7b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d080),PTR_s_setScrollEnabled__11265b8f0,param_3);
  return;
}



/* Entry: 108ea31ac; end: 108ea31b3; -[SCContextModalContainerViewController setContentView:] */

void FUN_108ea31ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c182b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setContentView_animated__11263e4e8,param_3,1)
  ;
  return;
}



/* Entry: 108ea31b4; end: 108ea3343; -[SCContextModalContainerViewController setContentView:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea31b4(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277d08c;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = param_3;
  _objc_release(uVar3);
  func_0x00010c09c7a0(param_1);
  if (*(long *)(param_1 + lVar6) != 0) {
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277d074));
  }
  uVar3 = 0x3fc3333333333333;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(lVar4);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108ea3344;
  puStack_68 = &UNK_110841f80;
  _objc_retain(uVar5);
  puStack_a8 = puVar1;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108ea3380;
  puStack_90 = &UNK_110841f20;
  uStack_88 = uVar5;
  uStack_60 = uVar5;
  lStack_58 = param_1;
  _objc_retain(uVar5);
  func_0x00010bf03420(uVar3,puVar2,param_2,&puStack_80,&puStack_a8);
  _objc_release(uStack_88);
  _objc_release(uStack_60);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 108ea3344; end: 108ea337f;  */

/* WARNING: Possible PIC construction at 0x000108ea335c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108ea3360) */

void FUN_108ea3344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108ea3380; end: 108ea3387;  */

void FUN_108ea3380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 108ea3388; end: 108ea3417; -[SCContextModalContainerViewController _scrollDismissalProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_108ea3388(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c60();
  dVar3 = param_1;
  func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_11277d080));
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c60();
  dVar3 = (param_1 - param_2) / dVar3;
  _objc_release(param_3);
  _objc_release(lVar1);
  dVar2 = 1.0;
  if (dVar3 <= 1.0) {
    dVar2 = dVar3;
  }
  return dVar2;
}



/* Entry: 108ea3418; end: 108ea35a7; -[SCContextModalContainerViewController scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea3418(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lVar5 = (long)_DAT_11277d080;
  if (param_4 == *(long *)(param_2 + lVar5)) {
    func_0x00010be9bea0();
    dVar7 = (1.0 - param_1) * 0.66;
    dVar6 = 0.0;
    func_0x00010bf41680(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + _DAT_11277d07c),param_3,puVar1);
    _objc_release(puVar1);
    if (*(long *)(param_2 + _DAT_11277d064) == 2) {
      lVar2 = param_2;
      func_0x00010c29bf00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c60();
      func_0x00010bf4cdc0(*(undefined8 *)(param_2 + lVar5));
      dVar6 = (dVar6 - dVar7) / 20.0;
      _objc_release(lVar2);
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      dVar7 = 1.0;
      if (dVar6 <= 1.0) {
        dVar7 = dVar6;
      }
      dVar7 = dVar7 * 16.0;
      lVar5 = (long)_DAT_11277d074;
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar7);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_2 + lVar5);
      func_0x00010c08c0e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf525a0();
      uVar4 = *(undefined8 *)(param_2 + _DAT_11277d078);
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(dVar7);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 108ea35a8; end: 108ea363b; -[SCContextModalContainerViewController scrollViewDidEndDecelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea35a8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  if (param_5 == *(long *)(param_3 + _DAT_11277d080)) {
    func_0x00010bf4cdc0(param_5);
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    _objc_release(lVar1);
    if (param_2 < param_1) {
      func_0x00010bf75380(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_3,PTR_s_dismissViewControllerAnimated_co_1125bec68,0,0);
      return;
    }
  }
  return;
}



/* Entry: 108ea363c; end: 108ea36e3; -[SCContextModalContainerViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea363c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  
  _objc_retain(param_5);
  if (((param_6 & 1) == 0) && (param_5 == *(long *)(param_3 + _DAT_11277d080))) {
    func_0x00010bf4cdc0(param_5);
    lVar1 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    _objc_release(lVar1);
    if (param_2 < param_1) {
      func_0x00010bf75380(param_3);
      func_0x00010bf84b00(param_3,param_4,0,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108ea36e4; end: 108ea3723; -[SCContextModalContainerViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_108ea36e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d074);
  func_0x00010c09ef00(param_4,param_2,uVar1);
  func_0x00010c102b20(uVar1,param_2,0);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108ea3724; end: 108ea372f; -[SCContextModalContainerViewController _tappedToDismiss] */

void FUN_108ea3724(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 108ea3730; end: 108ea3d17; -[SCContextModalContainerViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea3730(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  ulong uStack_90;
  undefined *puStack_88;
  
  uVar6 = param_5;
  func_0x00010c06d1a0();
  if ((uVar6 & 1) != 0) {
    return;
  }
  puStack_88 = PTR_PTR_1126feef8;
  uStack_90 = param_5;
  _objc_msgSendSuper2(&uStack_90,PTR_s_viewDidLayoutSubviews_112684cc8);
  lVar8 = (long)_DAT_11277d064;
  lVar7 = *(long *)(param_5 + lVar8);
  uVar6 = param_5;
  uVar2 = param_5;
  if (lVar7 == 0) {
    uVar1 = param_5;
    func_0x00010bf4c120();
    param_2 = 0.0;
    if ((uVar1 & 1) == 0) {
      func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
      param_2 = param_3;
    }
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    lVar7 = (long)_DAT_11277d06c;
    param_3 = param_1 * 2.0 - *(double *)(param_5 + lVar7);
    param_2 = param_3 - param_2;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ca0();
    param_4 = *(double *)(param_5 + lVar7);
    lVar7 = (long)_DAT_11277d074;
    func_0x00010c19f0e0(0,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar7));
LAB_108ea3954:
    _objc_release(uVar2);
    _objc_release(uVar6);
    uVar6 = *(ulong *)(param_5 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = 16.0;
    func_0x00010c1842e0(0x4030000000000000);
  }
  else {
    if (lVar7 == 1) {
      uVar1 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20ca0();
      param_3 = (double)(long)(param_1 * 0.75);
      param_4 = *(double *)(param_5 + (long)_DAT_11277d06c);
      lVar7 = (long)_DAT_11277d074;
      dVar10 = 0.0;
      func_0x00010c1739e0(0,0,param_3,param_4,*(undefined8 *)(param_5 + lVar7));
      _objc_release(uVar1);
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20ca0();
      dVar10 = dVar10 * 0.5;
      lVar9 = (long)dVar10;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c60();
      param_2 = (double)(long)(dVar10 * 1.5);
      func_0x00010c17a6a0(lVar9,param_2,*(undefined8 *)(param_5 + lVar7));
      goto LAB_108ea3954;
    }
    if (lVar7 != 2) {
      lVar7 = (long)_DAT_11277d074;
      goto LAB_108ea3994;
    }
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    param_3 = param_1;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20ca0();
    uVar1 = param_5;
    param_4 = param_3;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    lVar7 = (long)_DAT_11277d074;
    dVar10 = 0.0;
    func_0x00010c19f0e0(0,param_1,param_3,param_4,*(undefined8 *)(param_5 + lVar7));
    _objc_release(uVar1);
    _objc_release(uVar2);
    param_2 = param_1;
  }
  _objc_release(uVar6);
  param_1 = dVar10;
LAB_108ea3994:
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar7));
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + (long)_DAT_11277d08c));
  uVar3 = *(undefined8 *)(param_5 + lVar7);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  lVar9 = (long)_DAT_11277d078;
  uVar4 = *(undefined8 *)(param_5 + lVar9);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar7));
  dVar10 = 0.0;
  if (*(long *)(param_5 + lVar8) == 0) {
    uVar6 = param_5;
    dVar10 = param_1;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c60();
    _objc_release(uVar6);
  }
  param_4 = param_4 + dVar10;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar9));
  puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if (*(char *)(param_5 + (long)_DAT_11277d070) == '\x01') {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar9));
    uVar3 = *(undefined8 *)(param_5 + lVar7);
    dVar10 = param_1;
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    func_0x00010bf19a00(param_1,param_2,param_3,param_4,dVar10,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar4 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar3 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar3);
    _objc_release(puVar5);
    uVar3 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3e4ccccd);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4024000000000000);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = 20.0;
    func_0x00010c1fe840(0x4034000000000000);
  }
  else {
    uVar3 = *(undefined8 *)(param_5 + lVar9);
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    dVar10 = 0.0;
    func_0x00010c1fe800(0);
  }
  _objc_release(uVar3);
  uVar6 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  lVar7 = (long)_DAT_11277d080;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  _objc_release(uVar6);
  uVar6 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20ca0();
  uVar2 = param_5;
  dVar11 = dVar10;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c60();
  func_0x00010c1827c0(dVar10,dVar11 + dVar11,*(undefined8 *)(param_5 + lVar7));
  _objc_release(uVar2);
  _objc_release(uVar6);
  uVar6 = *(ulong *)(param_5 + lVar7);
  func_0x00010c070ea0();
  if ((uVar6 & 1) == 0) {
    uVar6 = *(ulong *)(param_5 + lVar7);
    func_0x00010c070400();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c60();
      func_0x00010c1822e0(0,dVar10,*(undefined8 *)(param_5 + lVar7));
      _objc_release(uVar6);
    }
  }
  uVar6 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + (long)_DAT_11277d07c));
  _objc_release(uVar6);
  return;
}



/* Entry: 108ea3d18; end: 108ea3d1b; -[SCContextModalContainerViewController didDismissViaGesture] */

void FUN_108ea3d18(void)

{
  return;
}



/* Entry: 108ea3d1c; end: 108ea3d2b; -[SCContextModalContainerViewController contentView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ea3d1c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d08c);
}



/* Entry: 108ea3d2c; end: 108ea3d3b; -[SCContextModalContainerViewController allowsSwipeToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ea3d2c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d088);
}



/* Entry: 108ea3d3c; end: 108ea3d4b; -[SCContextModalContainerViewController contentContainerIgnoresBottomSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ea3d3c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d060);
}



/* Entry: 108ea3d4c; end: 108ea3d5b; -[SCContextModalContainerViewController setContentContainerIgnoresBottomSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea3d4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d060) = param_3;
  return;
}



/* Entry: 108ea3d5c; end: 108ea3d6b; -[SCContextModalContainerViewController hasShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ea3d5c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d070);
}



/* Entry: 108ea3d6c; end: 108ea3d7b; -[SCContextModalContainerViewController setHasShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea3d6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d070) = param_3;
  return;
}



/* Entry: 108ea3d7c; end: 108ea3e0b; -[SCContextModalContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ea3d7c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d08c,0);
  _objc_storeStrong(param_1 + _DAT_11277d07c,0);
  _objc_storeStrong(param_1 + _DAT_11277d078,0);
  _objc_storeStrong(param_1 + _DAT_11277d074,0);
  _objc_storeStrong(param_1 + _DAT_11277d084,0);
  _objc_storeStrong(param_1 + _DAT_11277d080,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d068,0);
  return;
}



/* Entry: 108ea3e0c; end: 108ea3e17; +[SCStoryInviteSheetView componentPath] */

undefined ** FUN_108ea3e0c(void)

{
  return &PTR____CFConstantStringClassReference_110efdbd8;
}



/* Entry: 108ea3e18; end: 108ea3e4b; -[SCStoryInviteSheetView initWithViewModel:componentContext:runtime:] */

void FUN_108ea3e18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fef00;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 108ea3e4c; end: 108ea3e9b; -[SCStoryInviteSheetView setViewModel:] */

void FUN_108ea3e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ea3e9c; end: 108ea3edf; -[SCStoryInviteSheetView viewModel] */

void FUN_108ea3e9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ea3ee0; end: 108ea3f7b; -[SCStoryInviteSheetStoryType__Enum init] */

undefined8 FUN_108ea3ee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_38 = PTR_PTR_11329afc0;
  puStack_30 = PTR_PTR_11329afc8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1,param_2,puVar1);
  uVar2 = param_1;
  func_0x000108ea4664();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000108ea468c();
  func_0x000108ea4648();
  return uVar2;
}



/* Entry: 108ea3f7c; end: 108ea3fa7; -[SCStoryInviteSheetBitmojiAvatar initWithBitmojiAvatarId:bitmojiSelfieId:userId:] */

void FUN_108ea3f7c(void)

{
  func_0x000108ea468c();
  func_0x000108ea4648();
  return;
}



/* Entry: 108ea3fa8; end: 108ea3fbb; +[SCStoryInviteSheetBitmojiAvatar valdiMarshallableObjectDescriptor] */

void FUN_108ea3fa8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_bitmojiAvatarId_110ac8300;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 108ea3fbc; end: 108ea40bf; -[SCStoryInviteSheetContext initWithButtonTapped:joinButtonTapped:addToStoryButtonTapped:dismiss:joinButtonTappedWithStoryThumbnailData:storyThumbnailTapped:] */

undefined8 * FUN_108ea3fbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 auStack_60 [2];
  
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_retain();
  func_0x000108ea4698();
  _objc_retainBlock();
  func_0x000108ea46a0();
  _objc_retainBlock();
  _objc_release(in_x4);
  _objc_retainBlock();
  func_0x000108ea46dc();
  _objc_retainBlock();
  func_0x000108ea46a8();
  func_0x000108ea4720();
  func_0x000108ea46cc();
  func_0x000108ea4714();
  auStack_60[0] = param_1;
  func_0x000108ea468c();
  puVar1 = auStack_60;
  func_0x000108ea465c(puVar1);
  func_0x000108ea46a8();
  func_0x000108ea46dc();
  _objc_release(in_x5);
  func_0x000108ea46a0();
  func_0x000108ea4664();
  func_0x000108ea466c();
  return puVar1;
}



/* Entry: 108ea40c0; end: 108ea419f; -[SCStoryInviteSheetContext initWithButtonTapped:joinButtonTapped:addToStoryButtonTapped:dismiss:joinButtonTappedWithStoryThumbnailData:] */

undefined8 * FUN_108ea40c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 auStack_60 [2];
  
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_retain();
  func_0x000108ea4698();
  _objc_retainBlock();
  func_0x000108ea46dc();
  _objc_retainBlock();
  func_0x000108ea46a8();
  _objc_retainBlock();
  func_0x000108ea46a0();
  _objc_retainBlock();
  func_0x000108ea46e4();
  func_0x000108ea4714();
  auStack_60[0] = param_1;
  func_0x000108ea468c();
  puVar1 = auStack_60;
  func_0x000108ea465c(puVar1);
  func_0x000108ea46a0();
  func_0x000108ea46a8();
  func_0x000108ea46dc();
  func_0x000108ea4664();
  func_0x000108ea466c();
  return puVar1;
}



/* Entry: 108ea41a0; end: 108ea4253; -[SCStoryInviteSheetContext initWithButtonTapped:joinButtonTapped:addToStoryButtonTapped:dismiss:] */

undefined8 * FUN_108ea41a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 auStack_50 [2];
  
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  _objc_retain();
  func_0x000108ea4698();
  _objc_retainBlock();
  func_0x000108ea46e4();
  func_0x000108ea4720();
  func_0x000108ea46cc();
  func_0x000108ea4728();
  func_0x000108ea4664();
  func_0x000108ea4714();
  auStack_50[0] = param_1;
  func_0x000108ea468c();
  puVar1 = auStack_50;
  func_0x000108ea465c(puVar1);
  func_0x000108ea46cc();
  func_0x000108ea46e4();
  func_0x000108ea46a8();
  func_0x000108ea466c();
  return puVar1;
}



/* Entry: 108ea4254; end: 108ea42e7; -[SCStoryInviteSheetContext initWithButtonTapped:joinButtonTapped:dismiss:] */

undefined8 * FUN_108ea4254(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 auStack_50 [2];
  
  _objc_retain(in_x4);
  _objc_retain();
  func_0x000108ea4720();
  func_0x000108ea4728();
  func_0x000108ea4664();
  func_0x000108ea4698();
  func_0x000108ea466c();
  func_0x000108ea4714();
  auStack_50[0] = param_1;
  func_0x000108ea468c();
  puVar1 = auStack_50;
  func_0x000108ea465c(puVar1);
  func_0x000108ea4664();
  func_0x000108ea46a0();
  func_0x000108ea46cc();
  return puVar1;
}



/* Entry: 108ea42e8; end: 108ea436b; -[SCStoryInviteSheetContext initWithButtonTapped:dismiss:] */

undefined8 * FUN_108ea42e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_40 [2];
  
  _objc_retain();
  func_0x000108ea4728();
  func_0x000108ea4698();
  func_0x000108ea466c();
  func_0x000108ea4714();
  auStack_40[0] = param_1;
  func_0x000108ea468c();
  puVar1 = auStack_40;
  func_0x000108ea465c(puVar1);
  func_0x000108ea46e4();
  func_0x000108ea4664();
  return puVar1;
}



/* Entry: 108ea436c; end: 108ea438f; +[SCStoryInviteSheetContext valdiMarshallableObjectDescriptor] */

void FUN_108ea436c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ac83a8;
  param_1[1] = &PTR_DAT_110ac8450;
  param_1[2] = &PTR_s_ob_v_110ac8360;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 108ea4390; end: 108ea43b7;  */

undefined8 FUN_108ea4390(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 108ea43b8; end: 108ea4417;  */

void FUN_108ea43b8(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000108ea46ec(FUN_108ea45e8);
  _objc_retainBlock(&puStack_48);
  func_0x000108ea4730();
  func_0x000108ea466c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea4418; end: 108ea4443;  */

undefined8 FUN_108ea4418(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1,param_2[2]);
  return 0;
}



/* Entry: 108ea4444; end: 108ea44a3;  */

void FUN_108ea4444(void)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x000108ea46ec(0x108ea4618);
  _objc_retainBlock(&puStack_48);
  func_0x000108ea4730();
  func_0x000108ea466c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea44a4; end: 108ea44df; -[SCStoryInviteSheetViewModel initWithBitmojiStickerId:bitmojiAvatarId:storyTitle:storyType:userFirstName:alreadyJoinedStory:nonBitmojiProfileIconSrc:bitmojiAvatars:storyThumbnailData:] */

void FUN_108ea44a4(void)

{
  undefined8 in_stack_00000010;
  undefined1 auStack_20 [16];
  
  func_0x000108ea46fc(in_stack_00000010);
  func_0x000108ea465c(auStack_20);
  return;
}



/* Entry: 108ea44e0; end: 108ea451b; -[SCStoryInviteSheetViewModel initWithBitmojiStickerId:bitmojiAvatarId:storyTitle:storyType:userFirstName:alreadyJoinedStory:nonBitmojiProfileIconSrc:bitmojiAvatars:] */

void FUN_108ea44e0(undefined8 param_1)

{
  FUN_108ea4648(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 108ea451c; end: 108ea4547; -[SCStoryInviteSheetViewModel initWithBitmojiStickerId:bitmojiAvatarId:storyTitle:storyType:userFirstName:alreadyJoinedStory:nonBitmojiProfileIconSrc:] */

void FUN_108ea451c(void)

{
  undefined8 in_stack_00000000;
  
  func_0x000108ea46fc(in_stack_00000000);
  func_0x000108ea4648();
  return;
}



/* Entry: 108ea4548; end: 108ea457b; -[SCStoryInviteSheetViewModel initWithBitmojiStickerId:bitmojiAvatarId:storyTitle:userFirstName:alreadyJoinedStory:nonBitmojiProfileIconSrc:] */

void FUN_108ea4548(void)

{
  func_0x000108ea468c();
  func_0x000108ea4648();
  return;
}



/* Entry: 108ea457c; end: 108ea4597; +[SCStoryInviteSheetViewModel valdiMarshallableObjectDescriptor] */

void FUN_108ea457c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ac8460;
  param_1[1] = &PTR_DAT_110ac8550;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 108ea4598; end: 108ea45d3; -[SCStoryInviteStoryThumbnailData initWithKey:iv:url:originalMediaId:largeThumbnailUrl:clientId:] */

void FUN_108ea4598(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fef20;
  uStack_20 = param_1;
  func_0x000108ea468c();
  func_0x000108ea465c(&uStack_20);
  return;
}



/* Entry: 108ea45d4; end: 108ea45e7; +[SCStoryInviteStoryThumbnailData valdiMarshallableObjectDescriptor] */

void FUN_108ea45d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_key_110ac8570;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 108ea45e8; end: 108ea4647;  */

void FUN_108ea45e8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108ea4648; end: 108ea4747;  */

void FUN_108ea4648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_3;
  uStack0000000000000008 = param_4;
  uStack0000000000000010 = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)(unaff_x29 + -0x10,param_2,0);
  return;
}



/* Entry: 108ea4748; end: 108ea4753; +[SCCStoryInviteV2SheetView componentPath] */

undefined ** FUN_108ea4748(void)

{
  return &PTR____CFConstantStringClassReference_110efdbf8;
}



/* Entry: 108ea4754; end: 108ea4787; -[SCCStoryInviteV2SheetView initWithViewModel:componentContext:runtime:] */

void FUN_108ea4754(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fef28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 108ea4788; end: 108ea47d7; -[SCCStoryInviteV2SheetView setViewModel:] */

void FUN_108ea4788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108ea47d8; end: 108ea481b; -[SCCStoryInviteV2SheetView viewModel] */

void FUN_108ea47d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ea481c; end: 108ea483f; +[SCContextCardsViewContextMigrated valdiMarshallableObjectDescriptor] */

void FUN_108ea481c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ac8660;
  param_1[1] = &PTR_DAT_110ac88d0;
  param_1[2] = &PTR_s_ob_v_110ac8618;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108ea4840; end: 108ea4867;  */

undefined8 FUN_108ea4840(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 108ea4868; end: 108ea48b7;  */

void FUN_108ea4868(void)

{
  func_0x000108ea4d68();
  func_0x000108ea4d58();
  func_0x000108ea4cf0(FUN_108ea4c3c);
  func_0x000108ea4d80();
  func_0x000108ea4d30();
  func_0x000108ea4d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea48b8; end: 108ea48e7;  */

undefined8 FUN_108ea48b8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1);
  return 0;
}



/* Entry: 108ea48e8; end: 108ea4937;  */

void FUN_108ea48e8(void)

{
  func_0x000108ea4d68();
  func_0x000108ea4d58();
  func_0x000108ea4cf0(0x108ea4c6c);
  func_0x000108ea4d80();
  func_0x000108ea4d30();
  func_0x000108ea4d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea4938; end: 108ea497b;  */

undefined8 FUN_108ea4938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc528;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000108ea4d48();
  func_0x000108ea4ce4();
  return param_1;
}



/* Entry: 108ea497c; end: 108ea498f; +[SCContextValdiActionHandler valdiMarshallableObjectDescriptor] */

void FUN_108ea497c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_handleAction_110ac8958;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108ea4990; end: 108ea49d3;  */

undefined8 FUN_108ea4990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dc530;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x000108ea4d48();
  func_0x000108ea4ce4();
  return param_1;
}



/* Entry: 108ea49d4; end: 108ea49f7; +[SCSuggestedFriendsService valdiMarshallableObjectDescriptor] */

void FUN_108ea49d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ac89b8;
  param_1[1] = &PTR_DAT_110ac8a48;
  param_1[2] = &PTR_DAT_110ac8988;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 108ea49f8; end: 108ea4a23;  */

undefined8 FUN_108ea49f8(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[3],*param_2,param_2[1],param_2[2]);
  return 0;
}



/* Entry: 108ea4a24; end: 108ea4a73;  */

void FUN_108ea4a24(void)

{
  func_0x000108ea4d68();
  func_0x000108ea4d58();
  func_0x000108ea4cf0(0x108ea4ca0);
  func_0x000108ea4d80();
  func_0x000108ea4d30();
  func_0x000108ea4d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea4a74; end: 108ea4a7f; +[SCContextCardsValdiViewMigrated componentPath] */

undefined ** FUN_108ea4a74(void)

{
  return &PTR____CFConstantStringClassReference_110efdc18;
}



/* Entry: 108ea4a80; end: 108ea4a9f; -[SCContextCardsValdiViewMigrated initWithViewModel:componentContext:runtime:] */

void FUN_108ea4a80(void)

{
  FUN_108ea4cd0(PTR_PTR_1126fef30);
  return;
}



/* Entry: 108ea4aa0; end: 108ea4ad3; -[SCContextCardsValdiViewMigrated setViewModel:] */

void FUN_108ea4aa0(void)

{
  func_0x000108ea4d00();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ea4d3c();
  func_0x000108ea4d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108ea4ad4; end: 108ea4b0b; -[SCContextCardsValdiViewMigrated viewModel] */

void FUN_108ea4ad4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ea4ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ea4b0c; end: 108ea4b17; +[SCContextV2ErrorCardView componentPath] */

undefined ** FUN_108ea4b0c(void)

{
  return &PTR____CFConstantStringClassReference_110efdc38;
}



/* Entry: 108ea4b18; end: 108ea4b37; -[SCContextV2ErrorCardView initWithViewModel:componentContext:runtime:] */

void FUN_108ea4b18(void)

{
  FUN_108ea4cd0(PTR_PTR_1126fef38);
  return;
}



/* Entry: 108ea4b38; end: 108ea4b6b; -[SCContextV2ErrorCardView setViewModel:] */

void FUN_108ea4b38(void)

{
  func_0x000108ea4d00();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ea4d3c();
  func_0x000108ea4d10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108ea4b6c; end: 108ea4ba3; -[SCContextV2ErrorCardView viewModel] */

void FUN_108ea4b6c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ea4ce4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


