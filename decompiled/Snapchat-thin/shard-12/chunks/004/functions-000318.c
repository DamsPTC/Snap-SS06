/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091635f0; end: 109163617; -[SCEmojiSticker toCTItemInstance] */

void FUN_1091635f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109163618; end: 10916361f; -[SCEmojiSticker type] */

undefined8 FUN_109163618(void)

{
  return 1;
}



/* Entry: 109163620; end: 10916364f; -[SCEmojiSticker packId] */

void FUN_109163620(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e540b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e540b8);
  return;
}



/* Entry: 109163650; end: 109163677; -[SCEmojiSticker stickerId] */

void FUN_109163650(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109163678; end: 10916369f; -[SCEmojiSticker text] */

void FUN_109163678(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091636a0; end: 10916376f; -[SCEmojiSticker loggingParameters] */

void FUN_1091636a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dad058;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110dbf1f8;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e550b8;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f27fb8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_38,&ppuStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    puVar2 = *(undefined **)(puVar1 + 8);
    _objc_retain(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109163770; end: 109163797; -[SCEmojiSticker shortLoggingName] */

void FUN_109163770(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109163798; end: 1091638a7; -[SCEmojiSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

void FUN_109163798(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1091638a8; end: 109163937; -[SCEmojiSticker isEqual:] */

undefined8 FUN_1091638a8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0d08;
  _objc_opt_class(PTR_PTR_1126b0d08);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 109163938; end: 10916399b; -[SCEmojiSticker hash] */

undefined * FUN_109163938(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f27d38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfde980();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10916399c; end: 109163a43; -[SCEmojiSticker initWithCoder:] */

undefined1 * FUN_10916399c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112700970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    FUN_109163c84();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109163a44; end: 109163a5b; -[SCEmojiSticker encodeWithCoder:] */

void FUN_109163a44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf93030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeObject_forKey__1125c25b0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f27fd8);
  return;
}



/* Entry: 109163a5c; end: 109163a7f; -[SCEmojiSticker copyWithZone:] */

undefined8 FUN_109163a5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109163a80; end: 109163c3b; -[SCEmojiSticker _itemInstanceFromCTPItem] */

void FUN_109163a80(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126ba858;
  _objc_opt_class(PTR_PTR_1126ba858);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar10);
  uVar1 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126b0cc0;
    _objc_opt_new(PTR_PTR_1126b0cc0);
    puVar4 = PTR_PTR_1126b0cb8;
    _objc_opt_new(PTR_PTR_1126b0cb8);
    puVar5 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar6 = PTR_PTR_1126ba850;
    _objc_opt_new(PTR_PTR_1126ba850);
    func_0x00010bfe1140(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f40(puVar6);
    _objc_release(uVar2);
    func_0x00010c194460(puVar5);
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0844e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    _objc_release(uVar7);
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (((ulong)puVar8 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c0844e0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar4);
      _objc_release(puVar9);
      _objc_release(uVar7);
    }
    func_0x00010c196600(puVar4);
    func_0x00010c1b5d40(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 109163c3c; end: 109163c83; -[SCEmojiSticker .cxx_destruct] */

void FUN_109163c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109163c84; end: 109163e6b;  */

void FUN_109163c84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf64920(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  _objc_retain();
  func_0x00010bf97b40(uVar1);
  if ((*(char *)(puStack_78 + 3) == '\x01') && ((*(byte *)(puStack_58 + 3) & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfaea40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  else {
    puVar5 = puVar2;
    func_0x00010bf446e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109163e6c; end: 109163fc3;  */

void FUN_109163e6c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_4 != 0) {
    uVar6 = 0;
    do {
      puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25d900();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = 0;
      do {
        func_0x00010bf06ba0(puVar1);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
      puVar2 = puVar1;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      pcVar4 = puVar2 + -1;
      do {
        pcVar4 = pcVar4 + 1;
      } while (*pcVar4 == '0');
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0720c0();
      if (((ulong)puVar3 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      }
      puVar3 = puVar2;
      func_0x00010c0720c0();
      if ((int)puVar3 != 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
      }
      puVar3 = puVar2;
      func_0x00010c0720c0();
      if ((int)puVar3 != 0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
      uVar6 = uVar6 + 4;
    } while (uVar6 < param_4);
  }
  return;
}



/* Entry: 109163fc4; end: 109164213;  */

void FUN_109163fc4(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  undefined *puVar7;
  uint auStack_60 [2];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_1;
  func_0x00010bf529e0();
  puVar5 = param_1;
  if ((undefined *)0x1 < puVar7) {
    puVar7 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar7;
    func_0x00010c0720c0();
    if ((int)puVar2 != 0) {
      puVar2 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c067fc0();
      if (0x1d < (long)puVar3) {
        puVar3 = param_1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c067fc0();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar7);
        if (0x27 < (long)puVar4) goto LAB_1091640dc;
        puVar7 = param_1;
        func_0x00010c0d3c80();
        func_0x00010c066b00();
        puVar5 = puVar7;
        func_0x00010bf51e00();
        puVar2 = param_1;
      }
      _objc_release(puVar2);
    }
    _objc_release(puVar7);
  }
LAB_1091640dc:
  puVar7 = puVar5;
  func_0x00010bf529e0(puVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)puVar7 * 4 + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar5;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
      puVar3 = puVar5;
      func_0x00010c0dfd40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14f820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      func_0x00010c14ec80(puVar2);
      uVar1 = *(uint *)((long)auStack_60 + (long)puVar7 * 4 + (-0x60 - extraout_x8) + 0x60);
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      *(uint *)((long)auStack_60 + (long)puVar7 * 4 + (-0x60 - extraout_x8) + 0x60) =
           uVar1 >> 0x10 | uVar1 << 0x10;
      _objc_release(puVar2);
      puVar7 = puVar7 + 1;
      puVar2 = puVar5;
      func_0x00010bf529e0();
    } while (puVar7 < puVar2);
  }
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010bf529e0(puVar5);
  func_0x00010bffa180();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  FUN_109163fc4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c08fa60();
  puVar7 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar7 = puVar5;
    func_0x00010bf35920();
    if ((puVar2 != (undefined *)0x1) && (((uint)puVar7 & 0xfc00) == 0xdc00)) {
      func_0x00010bf35920();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d920();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0720c0();
    puVar7 = puVar5;
    if (((ulong)puVar3 & 1) == 0) {
      if (lRam0000000113730ba0 != -1) {
        func_0x000107c27d9c(0x113730ba0,&PTR___NSConcreteGlobalBlock_110ade9b0);
      }
      uVar6 = uRam0000000113730b98;
      func_0x00010bf4b900();
      if ((uVar6 & 1) == 0) goto LAB_109164310;
      func_0x00010c25ce40(puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_109164310:
      _objc_retain(puVar5);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 109164214; end: 10916435b;  */

void FUN_109164214(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  
  FUN_109163fc4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  lVar2 = 0;
  if (lVar1 == 0) goto LAB_109164324;
  lVar2 = param_1;
  func_0x00010bf35920();
  if ((lVar1 != 1) && (((uint)lVar2 & 0xfc00) == 0xdc00)) {
    func_0x00010bf35920();
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0720c0();
  lVar2 = param_1;
  if (((ulong)puVar4 & 1) == 0) {
    if (lRam0000000113730ba0 != -1) {
      func_0x000107c27d9c(0x113730ba0,&PTR___NSConcreteGlobalBlock_110ade9b0);
    }
    uVar5 = uRam0000000113730b98;
    func_0x00010bf4b900();
    if ((uVar5 & 1) == 0) goto LAB_109164310;
    func_0x00010c25ce40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
LAB_109164310:
    _objc_retain(param_1);
  }
  _objc_release(puVar3);
LAB_109164324:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10916435c; end: 1091644af;  */

void FUN_10916435c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar2 = PTR_PTR_1126b61c0;
  func_0x00010bf8e820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = *plStack_110;
    do {
      puVar6 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        uVar4 = *(undefined8 *)(lStack_118 + (long)puVar6 * 8);
        func_0x00010c26b700(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar4);
        _objc_release(uVar4);
        puVar6 = puVar6 + 1;
      } while (puVar3 != puVar6);
      puVar3 = puVar2;
      func_0x00010bf52a60(puVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf51e00();
  uVar4 = puRam0000000113730b98;
  puRam0000000113730b98 = puVar2;
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1091644b0; end: 1091644d7; -[CTPGfycatPresentationModelProvider presentationModel] */

void FUN_1091644b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091644d8; end: 10916453b; -[CTPGfycatPresentationModelProvider updateCTPItemImageSize:] */

void FUN_1091644d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfe8ba0();
  if (param_3 == lVar1) {
    return;
  }
  puVar2 = PTR_PTR_1126dd8a0;
  _objc_alloc(PTR_PTR_1126dd8a0);
  func_0x00010c01ce40();
  func_0x00010bedbba0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10916453c; end: 10916456b; -[CTPGfycatPresentationModelProvider .cxx_destruct] */

void FUN_10916453c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10916456c; end: 109164623; -[CTPInfoStickerPresentationModelProvider initWithRenderingContext:infoStickerDataProvider:] */

undefined1 *
FUN_10916456c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112700980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dd8a8;
    _objc_alloc();
    func_0x00010c03e2e0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109164624; end: 10916464b; -[CTPInfoStickerPresentationModelProvider getLatestModel] */

void FUN_109164624(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10916464c; end: 109164673; -[CTPInfoStickerPresentationModelProvider presentationModel] */

void FUN_10916464c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109164674; end: 109164677; -[CTPInfoStickerPresentationModelProvider updateCTPItemImageSize:] */

void FUN_109164674(void)

{
  return;
}



/* Entry: 109164678; end: 1091646a7; -[CTPInfoStickerPresentationModelProvider .cxx_destruct] */

void FUN_109164678(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091646a8; end: 1091646cf; -[CTPStickerPresentationModelProvider presentationModel] */

void FUN_1091646a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091646d0; end: 109164733; -[CTPStickerPresentationModelProvider updateCTPItemImageSize:] */

void FUN_1091646d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bfe8ba0();
  if (param_3 == lVar1) {
    return;
  }
  puVar2 = PTR_PTR_1126bb2d8;
  _objc_alloc(PTR_PTR_1126bb2d8);
  func_0x00010c01ce40();
  func_0x00010bedbba0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 109164734; end: 109164763; -[CTPStickerPresentationModelProvider .cxx_destruct] */

void FUN_109164734(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109164764; end: 10916483b; -[SCLyricsStickerPresentationModelProvider initWithLottieJSON:snapSegmentDuration:currentTimeObservable:] */

undefined1 *
FUN_109164764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112700990;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126dd8b0;
    _objc_alloc(PTR_PTR_1126dd8b0);
    func_0x00010c027d40(param_1);
    func_0x00010bedbba0(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10916483c; end: 109164863; -[SCLyricsStickerPresentationModelProvider getLatestModel] */

void FUN_10916483c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109164864; end: 10916489f; -[SCLyricsStickerPresentationModelProvider _updateModel:] */

void FUN_109164864(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091648a0; end: 1091648c7; -[SCLyricsStickerPresentationModelProvider presentationModel] */

void FUN_1091648a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091648c8; end: 1091648cb; -[SCLyricsStickerPresentationModelProvider updateCTPItemImageSize:] */

void FUN_1091648c8(void)

{
  return;
}



/* Entry: 1091648cc; end: 109164943; -[SCLyricsStickerPresentationModelProvider .cxx_destruct] */

void FUN_1091648cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109164944; end: 109164aef; -[SCStickerItemBitmojiPresentationModelProvider initWithBitmojiStickerMetadata:imageSize:feature:isReaction:] */

undefined8 * FUN_109164944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_112700998;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar7 = param_3;
    func_0x00010bfd8f20();
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar6 = param_3;
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf4db80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
    }
    puVar2 = PTR_PTR_1126bb278;
    _objc_alloc(PTR_PTR_1126bb278);
    uVar6 = param_3;
    func_0x00010bf12ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bfb7be0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf62920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130200();
    func_0x00010bff6080(puVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar6 = puVar1[1];
    puVar1[1] = puVar5;
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar7);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109164af0; end: 109164b37; -[SCStickerItemBitmojiPresentationModelProvider currentFriendAvatarId] */

void FUN_109164af0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109164b38; end: 109164cb7; -[SCStickerItemBitmojiPresentationModelProvider updateFriendAvatarId:] */

void FUN_109164b38(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb7be0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,uVar2);
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar12 = *(undefined8 *)(param_1 + 8);
    puVar4 = PTR_PTR_1126bb278;
    _objc_alloc(PTR_PTR_1126bb278);
    uVar2 = uVar1;
    func_0x00010bf12ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf63000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfe8ba0(uVar1);
    uVar7 = uVar1;
    func_0x00010bfa1820(uVar1);
    uVar8 = uVar1;
    func_0x00010c07bbc0(uVar1);
    uVar9 = uVar1;
    func_0x00010c10a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c130220();
    uVar11 = uVar1;
    func_0x00010bf122a0();
    func_0x00010bff6080(puVar4,param_2,uVar2,param_3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    func_0x00010c0d9840(uVar12,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109164cb8; end: 109164e17; -[SCStickerItemBitmojiPresentationModelProvider updateImageSize:] */

void FUN_109164cb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe8ba0();
  if (param_3 != lVar2) {
    uVar11 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR_PTR_1126bb278;
    _objc_alloc(PTR_PTR_1126bb278);
    lVar2 = lVar1;
    func_0x00010bf12ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfb7be0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf63000(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bfa1820(lVar1);
    lVar7 = lVar1;
    func_0x00010c07bbc0(lVar1);
    lVar8 = lVar1;
    func_0x00010c10a7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010c130220();
    lVar10 = lVar1;
    func_0x00010bf122a0();
    func_0x00010bff6080(puVar3,param_2,lVar2,lVar4,lVar5,param_3,lVar6,lVar7,lVar8,lVar9,lVar10);
    func_0x00010c0d9840(uVar11,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109164e18; end: 109164f77; -[SCStickerItemBitmojiPresentationModelProvider updateAutosuggestContext:] */

void FUN_109164e18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf122a0();
  if (param_3 != lVar2) {
    uVar11 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR_PTR_1126bb278;
    _objc_alloc(PTR_PTR_1126bb278);
    lVar2 = lVar1;
    func_0x00010bf12ea0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfb7be0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bf63000(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bfe8ba0(lVar1);
    lVar7 = lVar1;
    func_0x00010bfa1820(lVar1);
    lVar8 = lVar1;
    func_0x00010c07bbc0(lVar1);
    lVar9 = lVar1;
    func_0x00010c10a7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010c130220();
    func_0x00010bff6080(puVar3,param_2,lVar2,lVar4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,param_3);
    func_0x00010c0d9840(uVar11,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar9);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 109164f78; end: 10916506b; -[SCStickerItemBitmojiPresentationModelProvider setSearchQueryObservable:] */

void FUN_109164f78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    lVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10916506c; end: 1091651d7;  */

void FUN_10916506c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126bb278;
    _objc_alloc();
    uVar3 = uVar1;
    func_0x00010bf12ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfb7be0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8ba0(uVar1);
    func_0x00010bfa1820(uVar1);
    func_0x00010c07bbc0(uVar1);
    uVar5 = uVar1;
    func_0x00010c10a7c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c130220();
    func_0x00010bf122a0();
    func_0x00010bff6080(puVar2);
    func_0x00010c0d9840(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1091651d8; end: 10916533f; -[SCStickerItemBitmojiPresentationModelProvider _avatarUpdated:] */

void FUN_1091651d8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126bb278;
  _objc_alloc();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  uVar3 = uVar12;
  func_0x00010bfb7be0(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar12;
  func_0x00010bf63000(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bfe8ba0(uVar12);
  uVar6 = uVar12;
  func_0x00010bfa1820(uVar12);
  uVar7 = uVar12;
  func_0x00010c07bbc0(uVar12);
  uVar8 = uVar12;
  func_0x00010c10a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar12;
  func_0x00010c130220();
  uVar10 = uVar12;
  func_0x00010bf122a0();
  func_0x00010bff6080(puVar2,param_2,ppuVar1,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  _objc_release(param_3);
  func_0x00010c0d9840(uVar11,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 109165340; end: 10916534f; -[SCStickerItemBitmojiPresentationModelProvider presentationModel] */

void FUN_109165340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfad7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_filter__1125c8f90,
             &PTR___NSConcreteGlobalBlock_110ade9f0);
  return;
}



/* Entry: 109165350; end: 109165393;  */

bool FUN_109165350(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf12ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  return lVar1 != 0;
}



/* Entry: 109165394; end: 109165397; -[SCStickerItemBitmojiPresentationModelProvider updateCTPItemImageSize:] */

void FUN_109165394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c286670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateImageSize__11267f3c0);
  return;
}



/* Entry: 109165398; end: 1091654f7; -[SCStickerItemBitmojiPresentationModelProvider updateCTPItemFeature:] */

void FUN_109165398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  if ((int)param_3 != (int)uVar2) {
    uVar11 = *(undefined8 *)(param_1 + 8);
    puVar3 = PTR_PTR_1126bb278;
    _objc_alloc(PTR_PTR_1126bb278);
    uVar2 = uVar1;
    func_0x00010bf12ea0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfb7be0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bf63000(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfe8ba0(uVar1);
    uVar7 = uVar1;
    func_0x00010c07bbc0(uVar1);
    uVar8 = uVar1;
    func_0x00010c10a7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010c130220();
    uVar10 = uVar1;
    func_0x00010bf122a0();
    func_0x00010bff6080(puVar3,param_2,uVar2,uVar4,uVar5,uVar6,param_3,uVar7,uVar8,uVar9,uVar10);
    func_0x00010c0d9840(uVar11,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar8);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091654f8; end: 109165547; -[SCStickerItemBitmojiPresentationModelProvider dealloc] */

void FUN_1091654f8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_112700998;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109165548; end: 10916554f; -[SCStickerItemBitmojiPresentationModelProvider ctpTarget] */

undefined8 FUN_109165548(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109165550; end: 109165557; -[SCStickerItemBitmojiPresentationModelProvider setCtpTarget:] */

void FUN_109165550(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 109165558; end: 1091655ab; -[SCStickerItemBitmojiPresentationModelProvider .cxx_destruct] */

void FUN_109165558(long param_1)

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



/* Entry: 1091655ac; end: 10916564f; -[SCStickerItemPresentationModelProvider presentationModelProviderForItem:] */

void FUN_1091655ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf96f00(param_3);
  _objc_release(param_3);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 109165650; end: 10916565b; -[SCStickerItemPresentationModelProvider .cxx_destruct] */

void FUN_109165650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10916565c; end: 109165763; -[SCStickerItemStaticBitmojiPresentationModelProvider initWithBitmojiAvatarId:friendAvatarId:imageSize:feature:] */

undefined8 *
FUN_10916565c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127009a8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bb278;
    _objc_alloc();
    func_0x00010bff6080();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_retain();
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar4 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar4);
    func_0x00010c0d9840(puVar1[2]);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 109165764; end: 10916578b; -[SCStickerItemStaticBitmojiPresentationModelProvider presentationModel] */

void FUN_109165764(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10916578c; end: 1091658e3; -[SCStickerItemStaticBitmojiPresentationModelProvider updateCTPItemImageSize:] */

void FUN_10916578c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfe8ba0();
  if (param_3 == lVar1) {
    return;
  }
  puVar2 = PTR_PTR_1126bb278;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf12ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb7be0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf63000(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa1820(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c10a7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf122a0();
  func_0x00010bff6080(puVar2,param_2,uVar3,uVar4,uVar5,param_3,uVar6,0,uVar7,0xffffffffffffffff,
                      uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1091658e4; end: 109165913; -[SCStickerItemStaticBitmojiPresentationModelProvider .cxx_destruct] */

void FUN_1091658e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109165914; end: 1091659ef; -[CTPItem isAnimated] */

ulong FUN_109165914(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010bf96f00();
  uVar2 = 1;
  if (uVar1 < 0x12) {
    if ((1L << (uVar1 & 0x3f) & 0x3fab9U) == 0) {
      if (uVar1 == 1) {
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126babc8;
      }
      else {
        if (uVar1 != 2) {
          return 1;
        }
        func_0x00010bf96da0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126ba800;
      }
      _objc_opt_class(puVar3);
      uVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar3);
      uVar1 = param_1;
      if ((uVar2 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(param_1);
      uVar2 = uVar1;
      func_0x00010c06c000(uVar1);
      _objc_release(uVar1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Entry: 1091659f0; end: 1091659fb; -[SCStickerImageLoadRequest cancel] */

void FUN_1091659f0(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1091659fc; end: 109165a03; -[SCStickerImageLoadRequest isCancelled] */

undefined1 FUN_1091659fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109165a04; end: 109165a07; -[SCMetaSticker encodeWithCoder:] */

void FUN_109165a04(void)

{
  return;
}



/* Entry: 109165a08; end: 109165a3b; -[SCMetaSticker initWithCoder:] */

void FUN_109165a08(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127009b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 109165a3c; end: 109165ae7; -[SCMetaSticker initWithType:stickerId:packId:] */

undefined1 *
FUN_109165a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127009b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 109165ae8; end: 109165b0b; -[SCMetaSticker copyWithZone:] */

undefined8 FUN_109165ae8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109165b0c; end: 109165b17; -[SCMetaSticker loggingParameters] */

undefined ** FUN_109165b0c(void)

{
  return &PTR__OBJC_CLASS___NSConstantDictionary_1111754e0;
}



/* Entry: 109165b18; end: 109165b23; -[SCMetaSticker shortLoggingName] */

undefined ** FUN_109165b18(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 109165b24; end: 109165b2b; -[SCMetaSticker toCTPItem] */

undefined8 FUN_109165b24(void)

{
  return 0;
}



/* Entry: 109165b2c; end: 109165b33; -[SCMetaSticker toCTItemInstance] */

undefined8 FUN_109165b2c(void)

{
  return 0;
}



/* Entry: 109165b34; end: 109165b3b; -[SCMetaSticker type] */

undefined8 FUN_109165b34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109165b3c; end: 109165b43; -[SCMetaSticker setType:] */

void FUN_109165b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 109165b44; end: 109165b4b; -[SCMetaSticker packId] */

undefined8 FUN_109165b44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109165b4c; end: 109165b53; -[SCMetaSticker setPackId:] */

void FUN_109165b4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 109165b54; end: 109165b5b; -[SCMetaSticker stickerId] */

undefined8 FUN_109165b54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109165b5c; end: 109165b8b; -[SCMetaSticker setStickerId:] */

void FUN_109165b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109165b8c; end: 109165bbb; -[SCMetaSticker .cxx_destruct] */

void FUN_109165b8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109165bbc; end: 109165cdb; +[SCStickerURL stickersStorageBucketStickersSubfolder:] */

void FUN_109165bbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bdc3460(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    func_0x00010bf44780();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(ppuVar3);
      ppuVar3 = &PTR____CFConstantStringClassReference_110dacf38;
    }
    ppuVar4 = ppuVar3;
    func_0x00010c25ce00(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820(ppuVar2);
    _objc_release(ppuVar4);
    ppuVar4 = ppuVar2;
    func_0x00010bdc2b80(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,ppuVar4);
    _objc_release(param_3);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 109165cdc; end: 109165ef3; -[SCStickerFromCTPTransformer sojuStickerSectionsFromCTPSearchResults:avatarId:friendAvatarId:searchQuery:] */

void FUN_109165cdc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puVar15;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_6;
  _objc_retain(param_3);
  lStack_138 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = &uStack_130;
  puVar5 = auStack_f0;
  uVar9 = 0x10;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  uVar10 = param_6;
  if (param_3 != 0) {
    lVar13 = *plStack_120;
    do {
      param_4 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(lStack_140);
        }
        uVar9 = *(undefined8 *)(lStack_128 + param_4 * 8);
        uVar10 = uVar9;
        func_0x00010c084fc0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = param_1;
        uVar11 = param_6;
        func_0x00010c246740(param_1,param_2,uVar10,lStack_138,param_5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar10);
        unaff_x27 = PTR_PTR_1126dd8b8;
        _objc_alloc();
        func_0x00010c1554e0(uVar9);
        unaff_x26 = unaff_x27;
        func_0x00010c042d80(unaff_x27,param_2,uVar9,unaff_x28);
        func_0x00010befa120(puVar1,param_2,unaff_x26);
        _objc_release(unaff_x26);
        _objc_release(unaff_x28);
        param_4 = param_4 + 1;
      } while (param_3 != param_4);
      puVar7 = &uStack_130;
      puVar5 = auStack_f0;
      uVar9 = 0x10;
      param_3 = lStack_140;
      func_0x00010bf52a60();
      uVar10 = 0;
    } while (param_3 != 0);
  }
  lVar13 = lStack_140;
  _objc_release(lStack_140);
  puVar14 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lStack_138);
  lVar2 = lVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar15 = &uStack_270;
  lStack_158 = lVar13;
  pcStack_148 = FUN_109165ef4;
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = uVar11;
  uStack_1a0 = unaff_x28;
  puStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  uStack_188 = uVar10;
  puStack_180 = puVar1;
  puStack_178 = puVar14;
  uStack_170 = param_5;
  uStack_168 = param_6;
  lStack_160 = param_4;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  _objc_retain(uVar9);
  _objc_retain(uVar11);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  _objc_retain(puVar7);
  puVar8 = auStack_230;
  uVar10 = 0x10;
  puVar3 = puVar7;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar13 = *plStack_260;
    do {
      puVar15 = (undefined8 *)0x0;
      do {
        if (*plStack_260 != lVar13) {
          _objc_enumerationMutation(puVar7);
        }
        lVar4 = lVar2;
        uVar12 = uVar11;
        func_0x00010c2466c0(lVar2,param_2,*(undefined8 *)(lStack_268 + (long)puVar15 * 8),puVar5,
                            uVar9,uVar11);
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010befa120(puVar14,param_2,lVar4);
        }
        _objc_release(lVar4);
        puVar15 = (undefined8 *)((long)puVar15 + 1);
      } while (puVar3 != puVar15);
      puVar8 = auStack_230;
      uVar10 = 0x10;
      puVar3 = puVar7;
      puVar15 = &uStack_270;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b0) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(puVar8);
  _objc_retain(uVar10);
  _objc_retain(uVar12);
  puVar5 = (undefined1 *)puVar15;
  func_0x00010bf96f00();
  puVar1 = PTR_PTR_1126d4e60;
  puVar14 = (undefined *)0x0;
  puVar6 = (undefined1 *)puVar15;
  if ((long)puVar5 < 6) {
    if (puVar5 == (undefined1 *)0x1) {
      func_0x00010bf96da0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246720(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110dbddd8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109166284;
    }
    if (puVar5 == (undefined1 *)0x2) {
      func_0x00010bf96da0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2466a0(puVar1,param_2,puVar6,puVar8,uVar10,
                          &PTR____CFConstantStringClassReference_110dc7978,uVar12,0xffffffffffffffff
                         );
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109166284;
    }
    if (puVar5 == (undefined1 *)0x5) {
      func_0x00010bf96da0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebde40(puVar1,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109166284;
    }
  }
  else {
    if (puVar5 == (undefined1 *)0x6) {
      func_0x00010bf96da0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2466e0(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110ef29f8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar5 == (undefined1 *)0x8) {
      func_0x00010bf96da0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebde20(puVar1,param_2,puVar6,uVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar5 != (undefined1 *)0xd) goto LAB_109166290;
      func_0x00010bf96da0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246700(puVar1,param_2,puVar6,&PTR____CFConstantStringClassReference_110e85278);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_109166284:
    _objc_release(puVar6);
    puVar14 = puVar1;
  }
LAB_109166290:
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar15);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 109165ef4; end: 109166093; -[SCStickerFromCTPTransformer sojuStickersFromCTPModels:avatarId:friendAvatarId:searchQuery:] */

void FUN_109165ef4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar6 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = param_1;
        uVar9 = param_6;
        func_0x00010c2466c0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar12 * 8),param_4,param_5
                            ,param_6);
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          func_0x00010befa120(puVar10,param_2,lVar2);
        }
        _objc_release(lVar2);
        lVar12 = lVar12 + 1;
      } while (lVar1 != lVar12);
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      lVar1 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  _objc_retain(uVar9);
  puVar3 = (undefined1 *)puVar6;
  func_0x00010bf96f00();
  puVar5 = PTR_PTR_1126d4e60;
  puVar10 = (undefined *)0x0;
  puVar4 = (undefined1 *)puVar6;
  if ((long)puVar3 < 6) {
    if (puVar3 == (undefined1 *)0x1) {
      func_0x00010bf96da0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246720(puVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110dbddd8);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109166284;
    }
    if (puVar3 == (undefined1 *)0x2) {
      func_0x00010bf96da0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2466a0(puVar5,param_2,puVar4,puVar7,uVar8,
                          &PTR____CFConstantStringClassReference_110dc7978,uVar9,0xffffffffffffffff)
      ;
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109166284;
    }
    if (puVar3 == (undefined1 *)0x5) {
      func_0x00010bf96da0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebde40(puVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_109166284;
    }
  }
  else {
    if (puVar3 == (undefined1 *)0x6) {
      func_0x00010bf96da0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2466e0(puVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110ef29f8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar3 == (undefined1 *)0x8) {
      func_0x00010bf96da0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebde20(puVar5,param_2,puVar4,uVar9);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar3 != (undefined1 *)0xd) goto LAB_109166290;
      func_0x00010bf96da0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246700(puVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110e85278);
      _objc_retainAutoreleasedReturnValue();
    }
LAB_109166284:
    _objc_release(puVar4);
    puVar10 = puVar5;
  }
LAB_109166290:
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 109166094; end: 1091662c7; -[SCStickerFromCTPTransformer sojuStickerFromCTPModel:avatarId:friendAvatarId:searchQuery:] */

void FUN_109166094(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf96f00();
  puVar3 = PTR_PTR_1126d4e60;
  puVar4 = (undefined *)0x0;
  lVar2 = param_3;
  if (lVar1 < 6) {
    if (lVar1 == 1) {
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246720(puVar3,param_2,lVar2,&PTR____CFConstantStringClassReference_110dbddd8);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar1 == 2) {
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2466a0(puVar3,param_2,lVar2,param_4,param_5,
                          &PTR____CFConstantStringClassReference_110dc7978,param_6,
                          0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 5) goto LAB_109166290;
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bebde40(puVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (lVar1 == 6) {
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2466e0(puVar3,param_2,lVar2,&PTR____CFConstantStringClassReference_110ef29f8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 8) {
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bebde20(puVar3,param_2,lVar2,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (lVar1 != 0xd) goto LAB_109166290;
    func_0x00010bf96da0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246700(puVar3,param_2,lVar2,&PTR____CFConstantStringClassReference_110e85278);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  puVar4 = puVar3;
LAB_109166290:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091662c8; end: 10916648f; +[SCStickerFromCTPTransformer sojuStickerFromSnapSticker:packId:] */

void FUN_1091662c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4008;
  _objc_alloc_init(PTR_PTR_1126c4008);
  func_0x00010c1d7da0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2434e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c20bac0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c06c000(param_3);
  func_0x00010c1af2c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_109166490;
  uStack_50 = 0x1091664a0;
  uStack_48 = 0;
  uVar2 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1100();
  _objc_release(uVar2);
  func_0x00010c199840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109166490; end: 1091664a7;  */

void FUN_109166490(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1091664a8; end: 1091664df;  */

void FUN_1091664a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1091664e0; end: 1091664e3;  */

void FUN_1091664e0(void)

{
  return;
}



/* Entry: 1091664e4; end: 1091666db; +[SCStickerFromCTPTransformer sojuStickerFromShoppingSticker:packId:] */

void FUN_1091664e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4008;
  _objc_alloc_init(PTR_PTR_1126c4008);
  func_0x00010c1d7da0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241860();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c257800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188dc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c20bac0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_109166490;
  uStack_50 = 0x1091664a0;
  uStack_48 = 0;
  uVar3 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1100();
  _objc_release(uVar3);
  func_0x00010c199840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091666dc; end: 109166713;  */

void FUN_1091666dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109166714; end: 109166717;  */

void FUN_109166714(void)

{
  return;
}



/* Entry: 109166718; end: 1091668d7; +[SCStickerFromCTPTransformer sojuStickerFromGiphy:packId:] */

void FUN_109166718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4008;
  _objc_alloc_init(PTR_PTR_1126c4008);
  func_0x00010c1d7da0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfccae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c20bac0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1af2c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_109166490;
  uStack_50 = 0x1091664a0;
  uStack_48 = 0;
  uVar2 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1100();
  _objc_release(uVar2);
  func_0x00010c199840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1091668d8; end: 10916690f;  */

void FUN_1091668d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109166910; end: 109166913;  */

void FUN_109166910(void)

{
  return;
}



/* Entry: 109166914; end: 109166b7b; +[SCStickerFromCTPTransformer sojuStickerFromBitmoji:avatarId:friendAvatarId:packId:searchQuery:renderStyle:] */

void FUN_109166914(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,int param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  func_0x00010bf1c500();
  if (lVar2 == 2) {
    if (param_5 == 0) {
      puVar9 = (undefined *)0x0;
      goto LAB_109166b24;
    }
    uVar3 = 0x706d575;
    func_0x000109167908(0x706d575);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(uVar3);
  }
  lVar4 = param_3;
  func_0x00010bf62ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (lVar4 != 0) {
    lVar8 = param_7;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      _objc_retain(param_7);
      lVar8 = param_7;
    }
  }
  lVar5 = param_3;
  func_0x00010bf41a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c06c000(param_3);
  lVar4 = param_5;
  if (lVar2 != 2) {
    lVar4 = 0;
  }
  lVar2 = lVar5;
  func_0x00010b0e4c28(lVar5,lVar6,param_4,lVar4,(long)param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126c4008;
  _objc_alloc_init(PTR_PTR_1126c4008);
  func_0x00010c1d7da0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c20bac0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c178400(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  func_0x00010c06c000(param_3);
  func_0x00010c1af2c0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c188dc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar2);
  _objc_release(lVar8);
LAB_109166b24:
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 109166b7c; end: 109166c3f; +[SCStickerFromCTPTransformer _sojuStickerFromEmoji:] */

void FUN_109166b7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c4008;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d7da0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfe1140(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c20b0e0(puVar1,param_2,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010c20bac0(puVar1,param_2,0x3f08826);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109166c40; end: 109166e4b; +[SCStickerFromCTPTransformer _sojuStickerFromCameo:searchQuery:] */

void FUN_109166c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c4008;
  _objc_alloc_init(PTR_PTR_1126c4008);
  func_0x00010c1d7da0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf28b00();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20b0e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c20bac0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_109166490;
  uStack_50 = 0x1091664a0;
  uStack_48 = 0;
  uVar3 = param_3;
  func_0x00010c0c45e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1100();
  _objc_release(uVar3);
  func_0x00010c199840(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bdd9060(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178400(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109166e4c; end: 109166e83;  */

void FUN_109166e4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109166e84; end: 109166e87;  */

void FUN_109166e84(void)

{
  return;
}



/* Entry: 109166e88; end: 109167647; +[SCStickerFromCTPTransformer _cameoStickerCapabilitiesFromCameoEntity:searchQuery:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_109166e88(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long alStack_228 [3];
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [128];
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010bf62940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = lVar2;
  func_0x00010bf2fa80(lVar2);
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110f280d8);
  _objc_release(puVar5);
  lVar4 = lVar2;
  func_0x00010bf6a6a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,lVar4,&PTR____CFConstantStringClassReference_110f280f8);
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = lVar2;
  func_0x00010bf6a720(lVar2);
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110f28118);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar4 = lVar2;
  func_0x00010c081fe0(lVar2);
  func_0x00010c0df6e0(puVar5,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110f28138);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  lVar4 = lVar2;
  func_0x00010bfb3fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar16 = *plStack_1d0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_1d0 != lVar16) {
          _objc_enumerationMutation(lVar4);
        }
        uVar15 = *(undefined8 *)(lStack_1d8 + lVar17 * 8);
        puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        uVar14 = uVar15;
        func_0x00010c0d4f60(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7,param_2,uVar14,&PTR____CFConstantStringClassReference_110dbf1b8);
        _objc_release(uVar14);
        func_0x00010bdc2b80(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar7,param_2,uVar15,&PTR____CFConstantStringClassReference_110ddd938);
        _objc_release(uVar15);
        func_0x00010befa120(puVar5,param_2,puVar7);
        _objc_release(puVar7);
        lVar17 = lVar17 + 1;
      } while (lVar6 != lVar17);
      lVar6 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_1e0,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar4);
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f28158;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_f8 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f8,&ppuStack_100,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar3,param_2,puVar7,&PTR____CFConstantStringClassReference_110f28178);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  alStack_228[2] = 0;
  alStack_228[1] = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lVar4 = lVar2;
  func_0x00010c26b840();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar16 = *plStack_210;
    do {
      lVar17 = 0;
      do {
        if (*plStack_210 != lVar16) {
          _objc_enumerationMutation(lVar4);
        }
        uVar15 = *(undefined8 *)(alStack_228[2] + lVar17 * 8);
        puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar14 = uVar15;
        func_0x00010c0c34a0(uVar15);
        func_0x00010c0df760(puVar10,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110f28198)
        ;
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar14 = uVar15;
        func_0x00010c0c3540(uVar15);
        func_0x00010c0df760(puVar10,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110f281b8)
        ;
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar14 = uVar15;
        func_0x00010c0c3560(uVar15);
        func_0x00010c0df760(puVar10,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110f281d8)
        ;
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar14 = uVar15;
        func_0x00010c0c36e0(uVar15);
        func_0x00010c0df760(puVar10,param_2,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110f281f8)
        ;
        _objc_release(puVar10);
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c24a060(uVar15);
        func_0x00010c0df760(puVar10,param_2,uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9,param_2,puVar10,&PTR____CFConstantStringClassReference_110f28218)
        ;
        _objc_release(puVar10);
        func_0x00010befa120(puVar8,param_2,puVar9);
        _objc_release(puVar9);
        lVar17 = lVar17 + 1;
      } while (lVar6 != lVar17);
      lVar6 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,alStack_228 + 1,auStack_180,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar4);
  func_0x00010c1d0640(puVar3,param_2,puVar8,&PTR____CFConstantStringClassReference_110f28238);
  alStack_228[0] = 0;
  uVar14 = 0;
  puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar9 = puVar3;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar3,0,alStack_228);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = alStack_228[0];
  _objc_retain(alStack_228[0]);
  puVar11 = PTR____NSArray0__struct_11034ab48;
  if (lVar4 == 0) {
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    uVar14 = 4;
    puVar9 = puVar10;
    func_0x00010c008340();
    puVar13 = puVar11;
    if (((puVar11 != (undefined *)0x0) &&
        (puVar12 = puVar8, func_0x00010bf529e0(), puVar12 != (undefined *)0x0)) &&
       (puVar12 = puVar7, func_0x00010bf529e0(), puVar12 != (undefined *)0x0)) {
      ppuStack_190 = &PTR____CFConstantStringClassReference_110f28258;
      uVar14 = 2;
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_188 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_190,2);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar9;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar9);
      puVar9 = puVar13;
      func_0x00010befa120(puVar1,param_2,puVar13);
    }
    if (param_4 != 0) {
      ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f28298;
      uVar14 = 2;
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_198 = param_4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1a0,2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      puVar9 = puVar11;
      func_0x00010befa120(puVar1,param_2,puVar11);
      _objc_release(puVar11);
    }
    lVar6 = param_3;
    func_0x00010bfbec20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar16 != 0) {
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                          &PTR____CFConstantStringClassReference_110f28278);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bfbec20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar11,param_2,lVar6);
      _objc_release(lVar6);
      puVar12 = puVar11;
      func_0x00010bf446e0(puVar11,param_2,&PTR____CFConstantStringClassReference_110dc1338);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar12;
      func_0x00010befa120(puVar1,param_2,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar11);
    }
    _objc_retain(puVar1);
    _objc_release(puVar13);
    puVar11 = puVar1;
  }
  _objc_release(puVar10);
  _objc_release(lVar4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(uVar14);
    func_0x00010c2540c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c278980(param_3,param_2,puVar9,uVar14);
    _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 109167648; end: 1091676ab; +[SCStickerTracker trackSticker:inRequest:] */

void FUN_109167648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278980(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1091676ac; end: 1091676c7; +[SCStickerTracker trackStickerWithID:inRequest:] */

void FUN_1091676ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2193b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_4,PTR_s_setTrackingInfoWithId_type_media_112663f10,param_3,
             &PTR____CFConstantStringClassReference_110f60138,0,1);
  return;
}



/* Entry: 1091676c8; end: 10916771b; +[SCStickerTracker recordConsumptionOfStickerWithID:] */

void FUN_1091676c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f68;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf49920();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


