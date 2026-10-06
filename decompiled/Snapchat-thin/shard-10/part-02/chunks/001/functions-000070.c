/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107afc88c; end: 107afc89b;  */

void FUN_107afc88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107afc898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 107afc89c; end: 107afcaa7;  */

void FUN_107afc89c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b58e0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c2bae20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107afcaa8;
  puStack_88 = &UNK_11084aaa8;
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_5);
  ppuVar2 = &puStack_a0;
  uStack_78 = param_5;
  _objc_retainBlock();
  lVar3 = param_2;
  func_0x00010c08fa60();
  _objc_release(param_2);
  if ((lVar3 == 0) || (lVar3 = param_1, func_0x00010c08fa60(), lVar3 == 0)) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    puVar4 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(ppuVar2);
    func_0x00010bfa5420(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuVar2);
    _objc_release(param_5);
  }
  _objc_release(ppuVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 107afcaa8; end: 107afcb9b;  */

void FUN_107afcaa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_PTR_1126bd8f0;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x9c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29e6c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x000108feaf80(puVar4,1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107afcb9c;
  puStack_40 = &UNK_11085b810;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  FUN_107afc610(puVar3,uVar1,&puStack_58,0);
  _objc_release(uStack_38);
  _objc_release(puVar3);
  _objc_release(puVar4);
  return;
}



/* Entry: 107afcb9c; end: 107afcbaf;  */

void FUN_107afcb9c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000107afcbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0,0);
  return;
}



/* Entry: 107afcbb0; end: 107afccb7;  */

void FUN_107afcbb0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3,param_4);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12fbe0(0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),puVar2,param_3,param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107afccb8; end: 107afcd37;  */

void FUN_107afccb8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x9c);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 1;
  func_0x000108ffef38(1,puVar1,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107afcd38; end: 107afce43;  */

void FUN_107afcd38(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,param_3,param_4);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12fbe0(0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(puVar1);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),puVar2,param_3,param_4);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107afce44; end: 107afd017;  */

void FUN_107afce44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  puVar4 = PTR_PTR_1126b85a0;
  puVar3 = puVar2;
  func_0x00010bf220e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  func_0x00010c011b80();
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf00(puVar5);
  _objc_release(puVar6);
  _objc_retain(param_3);
  func_0x00010bfa7900(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107afd018; end: 107afd14f;  */

void FUN_107afd018(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x107afd0b8;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = param_2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x0001000d76cc(&UNK_10f443dca,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 107afd150; end: 107afd157;  */

void FUN_107afd150(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_image_1125d7478);
  return;
}



/* Entry: 107afd158; end: 107afd233;  */

void FUN_107afd158(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  func_0x00010c23d0a0(param_4);
  func_0x00010c23d0a0(param_4);
  uVar1 = param_4;
  func_0x00010c14e6c0(param_2,param_1,0x3ff0000000000000,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fbe0(0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107afd234; end: 107afd427;  */

void FUN_107afd234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c0d3c80(param_1);
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(puVar1);
  func_0x00010c1d0640(param_1);
  puVar2 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  uVar3 = param_1;
  func_0x00010bf51e00(param_1);
  func_0x00010c030320(puVar2);
  _objc_release(uVar3);
  ppuVar5 = &PTR____CFConstantStringClassReference_110eaceb8;
  ppuVar4 = ppuVar5;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eaceb8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eaceb8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar6 = &PTR____CFConstantStringClassReference_110eaced8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eaced8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = puVar2;
  func_0x000107afc4d0(puVar2,param_2,ppuVar4,ppuVar5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  FUN_107afd428(puVar7,param_4);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107afd428; end: 107afd54b;  */

void FUN_107afd428(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bf38cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107afed24();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_1;
    func_0x00010bf38cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000108f51d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf52680(uVar2);
    func_0x000107b018f8(4,uVar1,param_2);
    _objc_release(uVar2);
  }
  else {
    func_0x000107b018f8(4,0x1a,param_2);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107aff30c;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  _objc_retain(param_1);
  func_0x000100162d98(&UNK_10f443dca,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 107afd54c; end: 107afd6fb;  */

void FUN_107afd54c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c11b6c0();
  if (lVar1 == 2) {
    if ((param_2 != (undefined *)0x0) &&
       (puVar2 = param_2, func_0x00010c08fa60(), puVar2 != (undefined *)0x0)) {
LAB_107afd60c:
      _objc_retain(param_2);
      puVar2 = param_2;
      goto LAB_107afd6d0;
    }
    lVar1 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
    if (lVar1 == 0) goto LAB_107afd6d0;
    lVar3 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110eacf18;
LAB_107afd674:
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bcbeaa8(ppuVar5,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(ppuVar5);
      goto LAB_107afd6d0;
    }
  }
  else if (lVar1 == 1) {
    if ((param_2 != (undefined *)0x0) &&
       (puVar2 = param_2, func_0x00010c08fa60(), puVar2 != (undefined *)0x0)) goto LAB_107afd60c;
    lVar1 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined *)0x0;
    if (lVar1 == 0) goto LAB_107afd6d0;
    lVar3 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110eacef8;
      goto LAB_107afd674;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_107afd6d0:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107afd6fc; end: 107afd857;  */

void FUN_107afd6fc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c11b6c0();
  if (lVar1 == 2) {
    lVar1 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x0;
    if (lVar1 == 0) goto LAB_107afd838;
    lVar2 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110eacf18;
LAB_107afd7d4:
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bcbeaa8(ppuVar4,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(ppuVar4);
      goto LAB_107afd838;
    }
  }
  else if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x0;
    if (lVar1 == 0) goto LAB_107afd838;
    lVar2 = param_1;
    func_0x00010bfb57e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110eacef8;
      goto LAB_107afd7d4;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_107afd838:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107afd858; end: 107afdaef;  */

void FUN_107afd858(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  if ((param_2 != 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_1;
    func_0x00010c11b6c0();
    if (lVar1 == 2) {
      lVar1 = param_1;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)0x0;
      if (lVar1 == 0) goto LAB_107afd9b4;
      lVar2 = param_1;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110eacf18;
LAB_107afd950:
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bcbeaa8(ppuVar4,0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1;
        func_0x00010bfb57e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(ppuVar4);
        goto LAB_107afd9b4;
      }
    }
    else if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)0x0;
      if (lVar1 == 0) goto LAB_107afd9b4;
      lVar2 = param_1;
      func_0x00010bfb57e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 != 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110eacef8;
        goto LAB_107afd950;
      }
    }
  }
  puVar5 = (undefined *)0x0;
LAB_107afd9b4:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107afdaf0; end: 107afdafb;  */

void FUN_107afdaf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107afdaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107afdafc; end: 107afdc1f;  */

void FUN_107afdafc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cffa0;
  _objc_alloc(PTR_PTR_1126cffa0);
  puVar3 = PTR_PTR_1126b1118;
  _objc_alloc(PTR_PTR_1126b1118);
  func_0x000108f53fe8(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043160(puVar3);
  func_0x00010c04aca0(puVar2);
  func_0x00010c2b4e80(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(param_2);
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107afdc20; end: 107afdebf;  */

/* WARNING: Possible PIC construction at 0x000107afdcf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107afdcf8) */
/* WARNING: Removing unreachable block (ram,0x000107afddec) */
/* WARNING: Removing unreachable block (ram,0x000107afdd2c) */
/* WARNING: Removing unreachable block (ram,0x000107afdd60) */
/* WARNING: Removing unreachable block (ram,0x000107afdde4) */
/* WARNING: Removing unreachable block (ram,0x000107afde5c) */
/* WARNING: Removing unreachable block (ram,0x000107afdebc) */
/* WARNING: Removing unreachable block (ram,0x000107afde9c) */

void FUN_107afdc20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf009e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    FUN_107b08fcc(param_6,1);
  }
  func_0x000100504554(lVar2,&PTR___NSConcreteGlobalBlock_1109fa9e0);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_1)
  ;
  return;
}



/* Entry: 107afdec0; end: 107afdeef;  */

void FUN_107afdec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 107afdef0; end: 107afe08f;  */

void FUN_107afdef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x107afdfa8;
  puStack_58 = &UNK_110844fe0;
  uStack_50 = param_2;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_1);
  _objc_retain(param_2);
  func_0x000100162d98(&UNK_10f443dca,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 107afe090; end: 107afe2db;  */

void FUN_107afe090(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_107afe29c;
  lVar1 = param_1;
  func_0x00010c25b720();
  if (lVar1 < 0xb) {
    if (lVar1 == 2) {
LAB_107afe1f8:
      lVar1 = param_1;
      FUN_107afc3c4(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_107afc610();
    }
    else {
      if (lVar1 != 3) goto LAB_107afe29c;
      lVar2 = param_1;
      func_0x00010c259560(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar1;
      func_0x00010bf1ade0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf1acc0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_107afe2dc;
      puStack_70 = &UNK_11086d950;
      _objc_retain(param_4);
      lStack_68 = param_4;
      FUN_107afc89c(lVar2,lVar3,uVar4,param_2,&puStack_88,param_5);
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lStack_68);
    }
  }
  else {
    if (lVar1 != 0xe) {
      if (lVar1 != 0xb) goto LAB_107afe29c;
      goto LAB_107afe1f8;
    }
    uVar4 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x107afe2e8;
    puStack_98 = &UNK_11086d950;
    _objc_retain(param_4);
    lStack_90 = param_4;
    FUN_107afc89c(0,0,uVar4,param_2,&puStack_b0,param_5);
    _objc_release(uVar4);
    lVar1 = lStack_90;
  }
  _objc_release(lVar1);
LAB_107afe29c:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107afe2dc; end: 107afe2f3;  */

void FUN_107afe2dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107afe2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107afe2f4; end: 107afec2b;  */

void FUN_107afe2f4(undefined **param_1,undefined **param_2,long param_3,int param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar7 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar7);
  if (ppuVar6 == (undefined **)0x0) {
    _objc_retain(param_2);
    ppuVar6 = param_2;
    func_0x00010c25b720();
    ppuVar7 = (undefined **)0x0;
    if ((long)ppuVar6 < 0xb) {
      if (ppuVar6 == (undefined **)0x2) {
        ppuVar7 = param_2;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar7;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar6;
        func_0x00010c11af80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar7;
        func_0x00010c11b6c0();
        _objc_release(ppuVar7);
        if ((long)ppuVar2 - 1U < 2) {
          ppuVar7 = ppuVar6;
          func_0x00010bfe0440(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          ppuVar7 = (undefined **)0x0;
          if (ppuVar2 != (undefined **)0x0) {
            _objc_release(ppuVar6);
            goto LAB_107afe400;
          }
        }
        goto LAB_107afe550;
      }
      if (ppuVar6 == (undefined **)0x3) {
LAB_107afe400:
        ppuVar7 = param_2;
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar7;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        if (param_4 == 0) {
LAB_107afe498:
          ppuVar7 = (undefined **)0x0;
        }
        else {
          ppuVar7 = ppuVar6;
          func_0x00010bf85d80(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_107afe550;
      }
    }
    else {
      if (ppuVar6 == (undefined **)0xb) {
        ppuVar6 = param_2;
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar6;
        func_0x00010afefbe8();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar2;
        func_0x00010bfe0440();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
      }
      else {
        if (ppuVar6 != (undefined **)0xe) goto LAB_107afe558;
        ppuVar7 = param_2;
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar7;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        if (param_4 == 0) goto LAB_107afe498;
        ppuVar7 = ppuVar6;
        func_0x00010c291e80(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
      }
LAB_107afe550:
      _objc_release(ppuVar6);
    }
LAB_107afe558:
    _objc_release(param_2);
    func_0x00010c14da80(puVar1);
    _objc_release(ppuVar7);
    _objc_retain(param_2);
    ppuVar7 = param_2;
    func_0x00010c25b720();
    ppuVar6 = param_2;
    if (ppuVar7 == (undefined **)0xb) {
      func_0x00010c259560(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar6;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
LAB_107afe674:
      _objc_release(ppuVar6);
      ppuVar2 = ppuVar7;
      func_0x00010c11af80(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar7;
      func_0x00010bfe0440(ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar2;
      FUN_107afd54c(ppuVar2,ppuVar3);
      _objc_retainAutoreleasedReturnValue();
LAB_107afe6bc:
      _objc_release(ppuVar3);
      _objc_release(ppuVar2);
LAB_107afe6d0:
      _objc_release(ppuVar7);
    }
    else {
      if (ppuVar7 == (undefined **)0x3) {
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar6);
        ppuVar2 = ppuVar7;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = (undefined **)0x0;
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar6 = ppuVar7;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar6;
          func_0x00010c08fa60();
          _objc_release(ppuVar6);
          _objc_release(ppuVar2);
          ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (ppuVar3 == (undefined **)0x0) {
            ppuVar6 = (undefined **)0x0;
          }
          else {
            if (param_4 == 0) {
              ppuVar2 = &PTR____CFConstantStringClassReference_110eacf78;
              func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacf78,0);
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = ppuVar7;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00(ppuVar6);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_107afe6bc;
            }
            ppuVar6 = ppuVar7;
            func_0x00010bf85d80(ppuVar7);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        goto LAB_107afe6d0;
      }
      if (ppuVar7 == (undefined **)0x2) {
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107afe674;
      }
      ppuVar6 = (undefined **)0x0;
    }
    _objc_release(param_2);
    func_0x00010c14da80(puVar1);
  }
  else {
    ppuVar6 = param_1;
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar6);
  ppuVar7 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar7);
  if (ppuVar6 == (undefined **)0x0) {
    _objc_retain(param_2);
    ppuVar6 = param_2;
    func_0x00010c25b720();
    ppuVar7 = (undefined **)0x0;
    ppuVar2 = param_2;
    if ((long)ppuVar6 < 0xb) {
      if (ppuVar6 == (undefined **)0x2) {
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar2;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
LAB_107afe8cc:
        _objc_release(ppuVar2);
        ppuVar2 = ppuVar6;
        func_0x00010c11af80(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar2;
        FUN_107afd6fc();
        _objc_retainAutoreleasedReturnValue();
LAB_107afe95c:
        _objc_release(ppuVar2);
        goto LAB_107afe964;
      }
      if (ppuVar6 == (undefined **)0x3) {
        ppuVar7 = param_2;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar7;
        func_0x00010afef4dc();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar7);
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (param_4 != 0) goto LAB_107afe868;
        ppuVar2 = &PTR____CFConstantStringClassReference_110eacf78;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacf78,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar6;
        func_0x00010bf85d80();
        _objc_retainAutoreleasedReturnValue();
LAB_107afe934:
        func_0x00010c14de00(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        goto LAB_107afe95c;
      }
    }
    else {
      if (ppuVar6 == (undefined **)0xb) {
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar2;
        func_0x00010afefbe8();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107afe8cc;
      }
      if (ppuVar6 != (undefined **)0xe) goto LAB_107afe96c;
      ppuVar7 = param_2;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar7;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (param_4 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110eacf78;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacf78,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar6;
        func_0x00010c291e80();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107afe934;
      }
LAB_107afe868:
      ppuVar7 = &PTR____CFConstantStringClassReference_110eacf38;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacf38,0);
      _objc_retainAutoreleasedReturnValue();
LAB_107afe964:
      _objc_release(ppuVar6);
    }
LAB_107afe96c:
    _objc_release(param_2);
    func_0x00010c14da80(puVar1);
    _objc_release(ppuVar7);
    _objc_retain(param_2);
    ppuVar6 = param_2;
    func_0x00010c25b720();
    ppuVar7 = (undefined **)0x0;
    ppuVar2 = param_2;
    if ((long)ppuVar6 < 0xb) {
      if (ppuVar6 == (undefined **)0x2) {
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar2;
        func_0x00010afef61c();
        _objc_retainAutoreleasedReturnValue();
LAB_107afea3c:
        _objc_release(ppuVar2);
        ppuVar2 = ppuVar6;
        func_0x00010c11af80(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar6;
        func_0x00010bfe0440(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar2;
        FUN_107afd858(ppuVar2,ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        _objc_release(ppuVar2);
        _objc_release(ppuVar6);
      }
      else if (ppuVar6 == (undefined **)0x3) {
        if (param_4 != 0) goto LAB_107afe9d8;
LAB_107afe9bc:
        ppuVar7 = (undefined **)0x0;
      }
    }
    else {
      if (ppuVar6 == (undefined **)0xb) {
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar2;
        func_0x00010afefbe8();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107afea3c;
      }
      if (ppuVar6 == (undefined **)0xe) {
        if (param_4 == 0) goto LAB_107afe9bc;
LAB_107afe9d8:
        ppuVar7 = &PTR____CFConstantStringClassReference_110eacf38;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacf38,0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(param_2);
    func_0x00010c14da80(puVar1);
  }
  else {
    ppuVar7 = param_1;
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar7);
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_107afeb44;
  }
  else {
    if (param_4 == 0) {
      func_0x00010c14da80(puVar1);
      goto LAB_107afeb44;
    }
    func_0x00010c14da80(puVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14da80(puVar1);
  _objc_release(puVar4);
LAB_107afeb44:
  puVar4 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c037e60(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107afec2c; end: 107afed23;  */

void FUN_107afec2c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  if (param_2 != 0) {
    func_0x00010c14da80(puVar1);
    func_0x00010c14da80(puVar1);
  }
  func_0x00010c14da80(puVar1);
  puVar2 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c037e60(puVar2);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107afed24; end: 107afed57;  */

bool FUN_107afed24(long param_1)

{
  FUN_107b011a4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 107afed58; end: 107aff30b;  */

void FUN_107afed58(undefined **param_1,undefined **param_2,int param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  ppuVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14da80(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14da80(puVar1);
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar2);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar2 = param_2;
    func_0x00010901d7c4(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
  }
  else {
    ppuVar2 = param_1;
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
    _objc_release(ppuVar3);
  }
  _objc_release(ppuVar2);
  ppuVar2 = param_1;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar2);
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eacf38;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacf38,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
    _objc_release(ppuVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar2 = &PTR____CFConstantStringClassReference_110eacf58;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eacf58,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_2;
    func_0x00010901d7c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
    _objc_release(puVar4);
  }
  else {
    ppuVar2 = param_1;
    func_0x00010c292820(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  if (param_3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14da80(puVar1);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c037e60(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107aff30c; end: 107aff3b3;  */

void FUN_107aff30c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7568;
  _objc_opt_class(PTR_PTR_1126b7568);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_1109faa00);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa0a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107aff3b4; end: 107aff3bb;  */

void FUN_107aff3b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dc6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_notificationProcessingManager_112614bd0);
  return;
}



/* Entry: 107aff3bc; end: 107aff5bf;  */

void FUN_107aff3bc(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c6d78;
  func_0x00010bf82080(PTR_PTR_1126c6d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b17c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b0e20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010c25a160();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126c22b0;
    if (lVar4 != 0) {
      lVar2 = param_1;
      func_0x00010c25a160(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c11fd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf81ce0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      func_0x00010c2b17c0(puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126c2140;
      lVar2 = param_1;
      func_0x00010c25a160(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf82100(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar7 = puVar5;
      func_0x00010bf21f60(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b67e0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = puVar6;
      func_0x00010bf21f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ba4e0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
  }
  if (param_2 != 0) {
    func_0x00010c2ba420(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107aff5c0; end: 107aff65f;  */

void FUN_107aff5c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_107aff3bc(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107aff660; end: 107aff837;  */

void FUN_107aff660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined4 uStack_144;
  
  puVar1 = PTR_PTR_1126b02a8;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_2);
  uVar9 = param_5;
  puVar10 = puVar5;
  func_0x00010c01b460();
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(uVar9);
  _objc_retain(puVar10);
  puVar1 = puVar2;
  func_0x00010c25b720();
  puVar3 = puVar2;
  if (puVar1 == (undefined *)0x2) {
    func_0x00010c259560(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
LAB_107aff8b4:
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c11af80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c11b1e0();
    puVar4 = puVar3;
    func_0x00010bfb57e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfad760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010bf012c0(puVar3);
    FUN_107affab4(puVar7,puVar4,puVar5,puVar6,param_3,puVar10);
  }
  else {
    puVar1 = puVar2;
    func_0x00010c25b720();
    if (puVar1 != (undefined *)0x3) {
      puVar1 = puVar2;
      func_0x00010c25b720();
      if (puVar1 != (undefined *)0xb) goto LAB_107affa78;
      func_0x00010c259560(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107aff8b4;
    }
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf85d80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c07a6a0();
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = puVar1;
      func_0x00010c078f60();
      uStack_144 = SUB84(puVar5,0);
    }
    else {
      uStack_144 = 1;
    }
    puVar5 = puVar1;
    func_0x00010bf1ade0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1acc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    FUN_107affbc8(puVar3,puVar4,uStack_144,puVar5,puVar7,param_3,uVar8,puVar10);
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
LAB_107affa78:
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107aff838; end: 107affab3;  */

void FUN_107aff838(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uStack_64;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c25b720();
  uVar5 = param_1;
  if (uVar1 == 2) {
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
LAB_107aff8b4:
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c11af80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c11b1e0();
    uVar3 = uVar5;
    func_0x00010bfb57e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bfad760(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bf012c0(uVar5);
    FUN_107affab4(uVar6,uVar3,uVar4,uVar2,param_2,param_4);
  }
  else {
    uVar1 = param_1;
    func_0x00010c25b720();
    if (uVar1 != 3) {
      uVar1 = param_1;
      func_0x00010c25b720();
      if (uVar1 != 0xb) goto LAB_107affa78;
      func_0x00010c259560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107aff8b4;
    }
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar1;
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf85d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c07a6a0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar1;
      func_0x00010c078f60();
      uStack_64 = (undefined4)uVar4;
    }
    else {
      uStack_64 = 1;
    }
    uVar4 = uVar1;
    func_0x00010bf1ade0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bf1acc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_107affbc8(uVar5,uVar3,uStack_64,uVar4,uVar6,param_2,uVar7,param_4);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
LAB_107affa78:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107affab4; end: 107affbc7;  */

void FUN_107affab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b4860;
  if (param_4 != 0) {
    _objc_retain(param_5);
    func_0x00010c0fde60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b006d4;
    puStack_60 = &UNK_110987b18;
    uStack_48 = param_1;
    _objc_retain(param_2);
    uStack_58 = param_2;
    _objc_retain(param_6);
    uStack_50 = param_6;
    FUN_107afc610(puVar1,param_5,&puStack_78,1);
    _objc_release(param_5);
    _objc_release(puVar1);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_2);
  return;
}



/* Entry: 107affbc8; end: 107affcd3;  */

void FUN_107affbc8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_8);
  if (param_3 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x107b007bc;
    puStack_70 = &UNK_1109faa20;
    _objc_retain(param_1);
    uStack_68 = param_1;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_retain(param_8);
    uStack_58 = param_8;
    FUN_107afc89c(param_4,param_5,param_7,param_6,&puStack_88,1);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(param_8);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107affcd4; end: 107b0025b;  */

void FUN_107affcd4(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uStack_ac;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    FUN_107aff838(param_1,param_2,param_4,param_5);
    goto LAB_107b00050;
  }
  uVar1 = param_1;
  func_0x00010c25b720();
  uVar4 = param_1;
  if (uVar1 == 2) {
    func_0x00010c259560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
LAB_107affda8:
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c11af80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c11b1e0();
    uVar6 = uVar4;
    func_0x00010bfb57e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfad760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf012c0(uVar4);
    FUN_107affab4(uVar5,uVar6,uVar7,uVar3,param_2,param_5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  else {
    uVar1 = param_1;
    func_0x00010c25b720();
    if (uVar1 == 0xb) {
      func_0x00010c259560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107affda8;
    }
    uVar1 = param_1;
    func_0x00010c25b720();
    if (uVar1 == 3) {
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar6 = uVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c07a6a0();
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar1;
        func_0x00010c078f60();
        uStack_ac = (undefined4)uVar5;
      }
      else {
        uStack_ac = 1;
      }
      uVar5 = uVar1;
      func_0x00010bf1ade0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010bf1acc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf24fc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_4;
      func_0x00010c269d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      FUN_107b0025c(uVar6,uVar4,uStack_ac,uVar5,uVar7,uVar3,param_3,uVar2,param_5);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar1 = param_1;
      func_0x00010c25b720();
      if (uVar1 == 0xe) {
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar6 = uVar1;
        func_0x00010c2923e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c291e80(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c078f60();
        uVar7 = uVar1;
        func_0x00010bf24fc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        func_0x00010c269d40(param_4);
        _objc_retainAutoreleasedReturnValue();
        FUN_107b0025c(uVar6,uVar4,uVar5 & 0xffffffff,0,0,uVar7,param_3,uVar2,param_5);
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(uVar4);
      }
      else {
        uVar1 = param_1;
        func_0x00010c25b720();
        if (uVar1 != 0xd) goto LAB_107b00050;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010afef86c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = uVar1;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf5b480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar4 = uVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        _objc_release(uVar4);
        if (uVar5 != 0) {
          uVar4 = uVar1;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 == 0) {
            uVar5 = uVar6;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(uVar4);
            uVar5 = uVar4;
          }
          _objc_release(uVar4);
          uVar4 = uVar1;
          func_0x00010bf24fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c08fa60();
          if (uVar7 == 0) {
            uVar7 = uVar6;
            func_0x00010c2923e0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            FUN_107b004f8();
          }
          else {
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0xc2000000;
            pcStack_88 = FUN_107b00498;
            puStack_80 = &UNK_1108497e0;
            _objc_retain(uVar6);
            uStack_78 = uVar6;
            _objc_retain(uVar5);
            uStack_70 = uVar5;
            _objc_retain(param_5);
            uStack_68 = param_5;
            FUN_107afce44(uVar4,param_3,&puStack_98);
            _objc_release(uStack_68);
            _objc_release(uStack_70);
            uVar7 = uStack_78;
          }
          _objc_release(uVar7);
          _objc_release(uVar4);
          _objc_release(uVar5);
        }
      }
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
LAB_107b00050:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107b0025c; end: 107b00497;  */

void FUN_107b0025c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_3 != 0) {
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_107b00878;
    puStack_b0 = &UNK_110868f80;
    _objc_retain(param_4);
    uStack_a8 = param_4;
    _objc_retain(param_5);
    uStack_a0 = param_5;
    _objc_retain(param_8);
    uStack_98 = param_8;
    _objc_retain(param_1);
    uStack_90 = param_1;
    _objc_retain(param_2);
    uStack_88 = param_2;
    _objc_retain(param_9);
    uStack_80 = param_9;
    ppuVar2 = &puStack_c8;
    _objc_retainBlock();
    lVar3 = param_6;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2);
    }
    else {
      puStack_108 = puVar1;
      uStack_100 = 0xc2000000;
      uStack_f8 = 0x107b00b78;
      puStack_f0 = &UNK_11097ded0;
      _objc_retain(param_1);
      uStack_e8 = param_1;
      _objc_retain(param_2);
      uStack_e0 = param_2;
      _objc_retain(param_9);
      uStack_d8 = param_9;
      _objc_retain(ppuVar2);
      ppuStack_d0 = ppuVar2;
      FUN_107afce44(param_6,param_7,&puStack_108);
      _objc_release(ppuStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_e8);
    }
    _objc_release(ppuVar2);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 107b00498; end: 107b004f7;  */

void FUN_107b00498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c2923e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107b004f8();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b004f8; end: 107b006d3;  */

void FUN_107b004f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined *)0x0;
    func_0x000108ffef38(0,puVar4,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23d0a0(param_5);
    func_0x00010c23d0a0(param_5);
    puVar4 = param_5;
    func_0x00010c14e6c0(param_2,param_1,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12fbe0(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  puVar4 = puVar5;
  FUN_107afd234(puVar2,puVar5,param_4,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar4;
  FUN_107afd234(puVar5,puVar4,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  FUN_107afd234();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  lVar9 = *(long *)(puVar5 + 0x20);
  lVar8 = *(long *)(puVar5 + 0x28);
  puStack_218 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_107b00abc;
  puStack_200 = &UNK_1109faa20;
  uVar1 = *(undefined8 *)(puVar5 + 0x30);
  uVar10 = *(undefined8 *)(puVar5 + 0x38);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(puVar5 + 0x40);
  uStack_1f8 = uVar10;
  _objc_retain(uVar11);
  uVar10 = *(undefined8 *)(puVar5 + 0x48);
  uStack_1f0 = uVar11;
  _objc_retain(uVar10);
  uStack_1e8 = uVar10;
  _objc_retain(lVar9);
  _objc_retain(uVar1);
  _objc_retain(&puStack_218);
  puVar5 = PTR_PTR_1126b58e0;
  _objc_retain(lVar8);
  _objc_opt_new(puVar5);
  func_0x00010c2bae20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_1a8 = puVar2;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_107afccb8;
  puStack_190 = &UNK_110849530;
  _objc_retain(&puStack_218);
  ppuVar6 = &puStack_1a8;
  ppuStack_188 = &puStack_218;
  _objc_retainBlock();
  lVar7 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  if ((lVar7 == 0) || (lVar8 = lVar9, func_0x00010c08fa60(), lVar8 == 0)) {
    (*(code *)ppuVar6[2])(ppuVar6);
  }
  else {
    puVar4 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_1e0 = puVar2;
    uStack_1d8 = 0xc2000000;
    pcStack_1d0 = FUN_107afcd38;
    puStack_1c8 = &UNK_1109fa990;
    _objc_retain(&puStack_218);
    uStack_1b0 = 1;
    ppuStack_1c0 = &puStack_218;
    _objc_retain(ppuVar6);
    ppuStack_1b8 = ppuVar6;
    func_0x00010bfa5420(uVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(ppuStack_1b8);
    _objc_release(ppuStack_1c0);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuStack_188);
  _objc_release(puVar5);
  _objc_release(&puStack_218);
  _objc_release(uVar1);
  _objc_release(lVar9);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1f8);
  return;
}



/* Entry: 107b006d4; end: 107b00877;  */

void FUN_107b006d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar7 = param_2;
  FUN_107afd234(puVar2,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar7);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  FUN_107afd234();
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  lVar8 = *(long *)(puVar1 + 0x20);
  lVar5 = *(long *)(puVar1 + 0x28);
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_107b00abc;
  puStack_180 = &UNK_1109faa20;
  uVar7 = *(undefined8 *)(puVar1 + 0x30);
  uVar9 = *(undefined8 *)(puVar1 + 0x38);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(puVar1 + 0x40);
  uStack_178 = uVar9;
  _objc_retain(uVar10);
  uVar9 = *(undefined8 *)(puVar1 + 0x48);
  uStack_170 = uVar10;
  _objc_retain(uVar9);
  uStack_168 = uVar9;
  _objc_retain(lVar8);
  _objc_retain(uVar7);
  _objc_retain(&puStack_198);
  puVar1 = PTR_PTR_1126b58e0;
  _objc_retain(lVar5);
  _objc_opt_new(puVar1);
  func_0x00010c2bae20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_128 = puVar2;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_107afccb8;
  puStack_110 = &UNK_110849530;
  _objc_retain(&puStack_198);
  ppuVar3 = &puStack_128;
  ppuStack_108 = &puStack_198;
  _objc_retainBlock();
  lVar4 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if ((lVar4 == 0) || (lVar5 = lVar8, func_0x00010c08fa60(), lVar5 == 0)) {
    (*(code *)ppuVar3[2])(ppuVar3);
  }
  else {
    puVar6 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar2;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_107afcd38;
    puStack_148 = &UNK_1109fa990;
    _objc_retain(&puStack_198);
    uStack_130 = 1;
    ppuStack_140 = &puStack_198;
    _objc_retain(ppuVar3);
    ppuStack_138 = ppuVar3;
    func_0x00010bfa5420(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuStack_138);
    _objc_release(ppuStack_140);
  }
  _objc_release(ppuVar3);
  _objc_release(ppuStack_108);
  _objc_release(puVar1);
  _objc_release(&puStack_198);
  _objc_release(uVar7);
  _objc_release(lVar8);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  return;
}



/* Entry: 107b00878; end: 107b00abb;  */

void FUN_107b00878(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar7 = *(long *)(param_1 + 0x28);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_107b00abc;
  puStack_e0 = &UNK_1109faa20;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uStack_d8 = uVar9;
  _objc_retain(uVar10);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = uVar10;
  _objc_retain(uVar9);
  uStack_c8 = uVar9;
  _objc_retain(lVar1);
  _objc_retain(uVar2);
  _objc_retain(&puStack_f8);
  puVar4 = PTR_PTR_1126b58e0;
  _objc_retain(lVar7);
  _objc_opt_new(puVar4);
  func_0x00010c2bae20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8ea0(puVar4,param_2,lVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puStack_88 = puVar3;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107afccb8;
  puStack_70 = &UNK_110849530;
  _objc_retain(&puStack_f8);
  ppuVar5 = &puStack_88;
  ppuStack_68 = &puStack_f8;
  _objc_retainBlock();
  lVar6 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  if ((lVar6 == 0) || (lVar7 = lVar1, func_0x00010c08fa60(), lVar7 == 0)) {
    (*(code *)ppuVar5[2])(ppuVar5);
  }
  else {
    puVar8 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = puVar3;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107afcd38;
    puStack_a8 = &UNK_1109fa990;
    _objc_retain(&puStack_f8);
    uStack_90 = 1;
    ppuStack_a0 = &puStack_f8;
    _objc_retain(ppuVar5);
    ppuStack_98 = ppuVar5;
    func_0x00010bfa5420(uVar2,param_2,puVar8,0,0x13,PTR___dispatch_main_q_11034be20,&puStack_c0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(ppuStack_98);
    _objc_release(ppuStack_a0);
  }
  _objc_release(ppuVar5);
  _objc_release(ppuStack_68);
  _objc_release(puVar4);
  _objc_release(&puStack_f8);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  return;
}



/* Entry: 107b00abc; end: 107b00c43;  */

void FUN_107b00abc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = param_2;
  FUN_107afd234();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = lVar3;
  _objc_retain(lVar3);
  iVar10 = (int)lVar12;
  if (lVar3 == 0) {
    (**(code **)(*(long *)(puVar1 + 0x38) + 0x10))();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(puVar1 + 0x28);
    lVar12 = lVar3;
    FUN_107afd234();
    iVar10 = (int)lVar12;
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  _objc_retain(uVar11);
  lVar12 = lVar3;
  func_0x00010c08fa60();
  if (lVar12 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    uVar5 = 0;
    func_0x000107fcbeb0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar5);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
    puVar1 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    puVar6 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c030320(puVar1);
    _objc_release(puVar6);
    ppuVar8 = &PTR____CFConstantStringClassReference_110eacff8;
    if (iVar10 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110ead018;
    }
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bcbeaa8(ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    puVar9 = puVar1;
    func_0x000107afc4d0(puVar1,puVar7,puVar6,puVar6,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_107afd428();
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 107b00c44; end: 107b00ecf;  */

void FUN_107b00c44(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    uVar4 = 0;
    func_0x000107fcbeb0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c030320(puVar6);
    _objc_release(puVar5);
    ppuVar8 = &PTR____CFConstantStringClassReference_110eacff8;
    if (param_2 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110ead018;
    }
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bcbeaa8(ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    puVar9 = puVar6;
    func_0x000107afc4d0(puVar6,puVar7,puVar5,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_107afd428();
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b00ed0; end: 107b01147;  */

undefined8 FUN_107b00ed0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain();
  func_0x00010c079e00();
  if ((int)param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x00010c24d8e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1f3c0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126aed70;
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010c135f60(param_1);
    }
    else {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dad758;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      puVar2 = PTR_PTR_1126aed70;
      ppuVar4 = &PTR____CFConstantStringClassReference_110daf8b8;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      puVar3 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      ppuVar4 = &PTR____CFConstantStringClassReference_110ead038;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ead038,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &PTR____CFConstantStringClassReference_110e5f7f8;
      uVar9 = 0;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f7f8,0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052ec0(puVar3);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
      _objc_release(ppuVar4);
      uVar7 = 0;
      func_0x0001008cd514(0);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c1417c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      func_0x00010c10eda0(uVar8);
      _objc_release(uVar8);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_2;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar9,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1109faa70);
  return uVar9;
}



/* Entry: 107b01148; end: 107b0115b;  */

void FUN_107b01148(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,
             &PTR___NSConcreteGlobalBlock_1109faa70);
  return;
}



/* Entry: 107b0115c; end: 107b01193;  */

void FUN_107b0115c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b01194; end: 107b011a3;  */

void FUN_107b01194(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 107b011a4; end: 107b011e7;  */

void FUN_107b011a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000108f51e78();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b011e8; end: 107b0129b;  */

undefined1 FUN_107b011e8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0f8240(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107b0129c; end: 107b01323;  */

void FUN_107b0129c(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88360();
  dVar2 = param_1;
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0882a0();
  *(bool *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1 != dVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b01324; end: 107b013db;  */

undefined1 FUN_107b01324(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0f8240(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107b013dc; end: 107b01433;  */

void FUN_107b013dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c067f80();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
       puVar2 < *(undefined **)(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b01434; end: 107b014ab;  */

void FUN_107b01434(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f80();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b014ac; end: 107b0153f;  */

void FUN_107b014ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0882a0();
  func_0x00010c191020(puVar1,param_2,&PTR____CFConstantStringClassReference_110eace38);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b01540; end: 107b015a3;  */

undefined8 FUN_107b01540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107b015a4; end: 107b01803;  */

void FUN_107b015a4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d6738;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  func_0x00010c21e620();
  _objc_release(param_1);
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126d6730;
  _objc_opt_new(PTR_PTR_1126d6730);
  lVar3 = param_2;
  func_0x00010c25b720();
  lVar6 = param_2;
  if (lVar3 == 2) {
    func_0x00010c259560(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar6;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
LAB_107b01644:
    puVar4 = PTR_PTR_1126d6720;
    _objc_retain();
    _objc_opt_new(puVar4);
    lVar5 = lVar3;
    func_0x00010c11af80(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c11b1e0(lVar5);
    func_0x00010c1e5b60(puVar4);
    _objc_release(lVar5);
    func_0x00010c1e5c00(puVar2);
  }
  else {
    lVar3 = param_2;
    func_0x00010c25b720();
    if (lVar3 == 3) {
      func_0x00010c259560(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = param_2;
      func_0x00010c25b720();
      if (lVar3 != 0xe) {
        lVar3 = param_2;
        func_0x00010c25b720();
        if (lVar3 != 0xb) goto LAB_107b0177c;
        func_0x00010c259560(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar6;
        func_0x00010afefbe8();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107b01644;
      }
      func_0x00010c259560(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126d6728;
    _objc_retain();
    _objc_opt_new(puVar4);
    lVar5 = lVar3;
    func_0x00010c2923e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c21e620(puVar4);
    _objc_release(lVar5);
    func_0x00010c21f4a0(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
LAB_107b0177c:
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x00010c196620(puVar1);
  _objc_release(puVar2);
  func_0x00010c216900(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b01804; end: 107b01d17;  */

void FUN_107b01804(undefined8 param_1,int param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_1126c6d78;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf82080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b1080();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c28a480(param_1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_2 == 0x10) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110ead058;
  if (param_2 != 0x11) {
    ppuVar6 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e10178;
  if (param_2 != 0x1a) {
    ppuVar1 = ppuVar6;
  }
  ppuVar6 = ppuVar1;
  func_0x00010c0720c0();
  iVar2 = (int)ppuVar6;
  switch(puVar3) {
  case (undefined *)0x0:
    if (iVar2 == 0) {
      FUN_107b0881c(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b08990(puVar7,1);
    }
    break;
  case (undefined *)0x1:
    if (iVar2 == 0) {
      FUN_107b08a08(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b08b7c(puVar7,1);
    }
    break;
  case (undefined *)0x2:
    if (iVar2 == 0) {
      FUN_107b08bf4(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b08d68(puVar7,1);
    }
    break;
  case (undefined *)0x3:
    if (iVar2 == 0) {
      FUN_107b07094(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b07208(puVar7,1);
    }
    break;
  case (undefined *)0x4:
    if (iVar2 == 0) {
      FUN_107b081e0(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b08354(puVar7,1);
    }
    break;
  case (undefined *)0x5:
    if (iVar2 == 0) {
      FUN_107b0806c(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b07ff4(puVar7,1);
    }
    break;
  case (undefined *)0x6:
    if (iVar2 == 0) {
      FUN_107b06ad0(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b06c44(puVar7,1);
    }
    break;
  case (undefined *)0x7:
    if (iVar2 == 0) {
      FUN_107b06cbc(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b06e30(puVar7,1);
    }
    break;
  case (undefined *)0x8:
    if (iVar2 == 0) {
      FUN_107b07658(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b077cc(puVar7,1);
    }
    break;
  case (undefined *)0x9:
    if (iVar2 != 0) {
      FUN_107b06494(puVar7,1);
      break;
    }
    goto code_r0x000107b01a10;
  case (undefined *)0xa:
    if (iVar2 == 0) {
      FUN_107b07844(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b079b8(puVar7,1);
    }
    break;
  case (undefined *)0xb:
    if (iVar2 == 0) {
      FUN_107b0650c(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b06680(puVar7,1);
    }
    break;
  case (undefined *)0xc:
    if (iVar2 == 0) {
      FUN_107b07c1c(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b07d90(puVar7,1);
    }
    break;
  case (undefined *)0xd:
    if (iVar2 == 0) {
      FUN_107b066f8(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b0686c(puVar7,1);
    }
    break;
  case (undefined *)0xe:
    if (iVar2 != 0) {
      FUN_107b062a8(puVar7,1);
      break;
    }
code_r0x000107b01a10:
    FUN_107b06320(puVar7,ppuVar1,1);
    break;
  case (undefined *)0xf:
    if (iVar2 == 0) {
      FUN_107b068e4(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b06a58(puVar7,1);
    }
    break;
  case (undefined *)0x10:
    if (iVar2 == 0) {
      FUN_107b07a30(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b07ba4(puVar7,1);
    }
    break;
  case (undefined *)0x11:
    if (iVar2 == 0) {
      FUN_107b083cc(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b08540(puVar7,1);
    }
    break;
  case (undefined *)0x12:
    if (iVar2 == 0) {
      FUN_107b07e08(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b07f7c(puVar7,1);
    }
    break;
  case (undefined *)0x13:
    if (iVar2 == 0) {
      FUN_107b0746c(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b075e0(puVar7,1);
    }
    break;
  case (undefined *)0x14:
    if (iVar2 == 0) {
      FUN_107b06ea8(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b0701c(puVar7,1);
    }
    break;
  case (undefined *)0x15:
    if (iVar2 == 0) {
      FUN_107b07280(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b073f4(puVar7,1);
    }
    break;
  case (undefined *)0x16:
    if (iVar2 == 0) {
      FUN_107b08630(puVar7,ppuVar1,1);
    }
    else {
      FUN_107b085b8(puVar7,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107b01d18; end: 107b01e27; -[SCNotificationOptInRequestManager initWithDataStoreMutating:dataStoreFetching:requestManager:userId:creatorsSettingsRequestMananger:circumstanceEngine:] */

undefined1 *
FUN_107b01d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9d28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b01e28; end: 107b01f9f; -[SCNotificationOptInRequestManager updateStoryWithDedupeFp:toState:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_107b01e28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107b01fa0;
  puStack_98 = &UNK_1109faaf0;
  _objc_copyWeak(auStack_70,auStack_58);
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_7;
  uStack_78 = param_8;
  uStack_68 = param_3;
  uStack_60 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010007380c(uVar1,&puStack_b0);
  _objc_release(uVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 107b01fa0; end: 107b01fdb;  */

void FUN_107b01fa0(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b01fdc; end: 107b020c3; -[SCNotificationOptInRequestManager _updateStoryWithDedupeFp:toState:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_107b01fdc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c25bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010007380c(in_x5,in_x7);
  }
  func_0x00010c28a500(param_1);
  _objc_release(lVar2);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 107b020c4; end: 107b021af; -[SCNotificationOptInRequestManager updateStory:toState:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_107b020c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_107b015a4(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f9a0(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b021b0; end: 107b022c3; -[SCNotificationOptInRequestManager updatePublisherWithPublisherId:toState:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_107b021b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010846c3a0(uVar3,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c25bb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be9f9a0(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107b022c4; end: 107b023e7; -[SCNotificationOptInRequestManager updateUserWithUserId:toState:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_107b022c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010846c464(uVar3,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c25bc60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  func_0x00010be9f9a0(param_1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107b023e8; end: 107b026bb; -[SCNotificationOptInRequestManager _sendOptInRequest:story:toState:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_107b023e8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((param_4 != 0) && (lVar1 != 0)) {
    _objc_initWeak(auStack_80,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 9;
    func_0x0001000819a8(9,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_107b026bc;
    puStack_c0 = &UNK_1109fab20;
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_4);
    lStack_b8 = param_4;
    uStack_88 = param_5;
    _objc_retain(param_6);
    uStack_b0 = param_6;
    _objc_retain(param_7);
    uStack_a8 = param_7;
    _objc_retain(param_8);
    uStack_a0 = param_8;
    _objc_retain(param_9);
    uStack_98 = param_9;
    _objc_copyWeak(auStack_e0,auStack_80);
    _objc_retain(param_4);
    _objc_retain(param_7);
    _objc_retain(param_9);
    func_0x00010c15c760(uVar2);
    _objc_release(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_9);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_e0);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(lStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b026bc; end: 107b02727;  */

void FUN_107b026bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc800();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b02728; end: 107b0275f;  */

void FUN_107b02728(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b02760; end: 107b027cb; -[SCNotificationOptInRequestManager _updateStoryInDataStore:optedIn:] */

void FUN_107b02760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  FUN_107b01804();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107b027cc; end: 107b0299b; -[SCNotificationOptInRequestManager _updateOptInSuccessWithData:story:toState:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_107b027cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126d6740;
  _objc_retain(param_3);
  _objc_alloc();
  lStack_68 = 0;
  func_0x00010c008360();
  _objc_release(param_3);
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  if ((lVar1 == 0) && (puVar3 = puVar2, func_0x00010c252d60(), (int)puVar3 == 1)) {
    if (param_4 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010bee0f20();
      _objc_retainAutoreleasedReturnValue();
    }
    if ((param_6 != 0) && (param_8 != 0)) {
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_107b0299c;
      puStack_80 = &UNK_11084aaa8;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      _objc_retain(param_8);
      lStack_70 = param_8;
      _objc_retain(param_1);
      uStack_78 = param_1;
      func_0x00010007380c(param_6,&puStack_98);
      _objc_release(uStack_78);
      _objc_release(lStack_70);
    }
    _objc_release(param_1);
  }
  else if ((param_7 != 0) && (param_9 != 0)) {
    func_0x00010007380c(param_7,param_9);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107b0299c; end: 107b029ab;  */

void FUN_107b0299c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107b029a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107b029ac; end: 107b029c3; -[SCNotificationOptInRequestManager _updateOptInFailedForStory:failureQueue:failureBlock:] */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */

void FUN_107b029ac(void)

{
  int iVar1;
  code *pcVar2;
  long in_x3;
  long in_x4;
  
  if ((in_x3 != 0) && (in_x4 != 0)) {
    func_0x000107c61174();
    func_0x000107c61174(in_x4);
    if ((bRam0000000113817cd8 & 1) == 0) {
      iVar1 = 0x13817cd8;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        pcVar2 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
        pcRam0000000113817cd0 = pcVar2;
        func_0x000107c60e4c(0x113817cd8);
      }
    }
    pcVar2 = pcRam0000000113817cd0;
    func_0x00010002a3a8(in_x4);
    func_0x000107c61180();
    (*pcVar2)(in_x3,in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x4);
    return;
  }
  return;
}



/* Entry: 107b029c4; end: 107b02a0b; -[SCNotificationOptInRequestManager .cxx_destruct] */

void FUN_107b029c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 107b02a0c; end: 107b02ba3; -[SCDiscoverFeedNotificationPromptHandler initWithImageDownloader:notificationsPermissionRequester:notificationOSSettingsRetriever:bitmojiImageFetcher:grapheneRegistry:storiesConfigProvider:imageFetchingService:] */

undefined1 *
FUN_107b02a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f9d30;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b02ba4; end: 107b02bb7; -[SCDiscoverFeedNotificationPromptHandler displayOptInNotificationPromptWithName:optedIn:] */

void FUN_107b02ba4(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(uVar10);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1370;
    func_0x00010c25d500();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    func_0x00010c1d0640(puVar2);
    uVar4 = 0;
    func_0x000107fcbeb0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126b1370;
    _objc_alloc(PTR_PTR_1126b1370);
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c030320(puVar6);
    _objc_release(puVar5);
    ppuVar8 = &PTR____CFConstantStringClassReference_110eacff8;
    if (param_4 == 0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110ead018;
    }
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bcbeaa8(ppuVar8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    puVar9 = puVar6;
    func_0x000107afc4d0(puVar6,puVar7,puVar5,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_107afd428();
    _objc_release(puVar9);
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b02bb8; end: 107b02bd3; -[SCDiscoverFeedNotificationPromptHandler displayOptInNotificationPromptForStoryIfNecessary:] */

void FUN_107b02bb8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uStack_ac;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  lVar9 = *(long *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain();
  _objc_retain(uVar8);
  _objc_retain(lVar9);
  _objc_retain(uVar10);
  _objc_retain(uVar11);
  if (lVar9 == 0) {
    FUN_107aff838(param_3,uVar8,uVar10,uVar11);
    goto LAB_107b00050;
  }
  uVar1 = param_3;
  func_0x00010c25b720();
  uVar4 = param_3;
  if (uVar1 == 2) {
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010afef61c();
    _objc_retainAutoreleasedReturnValue();
LAB_107affda8:
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010c11af80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c11b1e0();
    uVar6 = uVar4;
    func_0x00010bfb57e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bfad760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf012c0(uVar4);
    FUN_107affab4(uVar5,uVar6,uVar7,uVar3,uVar8,uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
  }
  else {
    uVar1 = param_3;
    func_0x00010c25b720();
    if (uVar1 == 0xb) {
      func_0x00010c259560(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010afefbe8();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107affda8;
    }
    uVar1 = param_3;
    func_0x00010c25b720();
    if (uVar1 == 3) {
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar6 = uVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      func_0x00010c07a6a0();
      if ((uVar5 & 1) == 0) {
        uVar5 = uVar1;
        func_0x00010c078f60();
        uStack_ac = (undefined4)uVar5;
      }
      else {
        uStack_ac = 1;
      }
      uVar5 = uVar1;
      func_0x00010bf1ade0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00010bf1acc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf24fc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar10;
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      FUN_107b0025c(uVar6,uVar4,uStack_ac,uVar5,uVar7,uVar3,lVar9,uVar2,uVar11);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    else {
      uVar1 = param_3;
      func_0x00010c25b720();
      if (uVar1 == 0xe) {
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010afefd10();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar6 = uVar1;
        func_0x00010c2923e0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c291e80(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar1;
        func_0x00010c078f60();
        uVar7 = uVar1;
        func_0x00010bf24fc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        func_0x00010c269d40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        FUN_107b0025c(uVar6,uVar4,uVar5 & 0xffffffff,0,0,uVar7,lVar9,uVar2,uVar11);
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(uVar4);
      }
      else {
        uVar1 = param_3;
        func_0x00010c25b720();
        if (uVar1 != 0xd) goto LAB_107b00050;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010afef86c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = uVar1;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010bf5b480();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar4 = uVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        _objc_release(uVar4);
        if (uVar5 != 0) {
          uVar4 = uVar1;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          if (uVar4 == 0) {
            uVar5 = uVar6;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(uVar4);
            uVar5 = uVar4;
          }
          _objc_release(uVar4);
          uVar4 = uVar1;
          func_0x00010bf24fc0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010c08fa60();
          if (uVar7 == 0) {
            uVar7 = uVar6;
            func_0x00010c2923e0(uVar6);
            _objc_retainAutoreleasedReturnValue();
            FUN_107b004f8();
          }
          else {
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0xc2000000;
            pcStack_88 = FUN_107b00498;
            puStack_80 = &UNK_1108497e0;
            _objc_retain(uVar6);
            uStack_78 = uVar6;
            _objc_retain(uVar5);
            uStack_70 = uVar5;
            _objc_retain(uVar11);
            uStack_68 = uVar11;
            FUN_107afce44(uVar4,lVar9,&puStack_98);
            _objc_release(uStack_68);
            _objc_release(uStack_70);
            uVar7 = uStack_78;
          }
          _objc_release(uVar7);
          _objc_release(uVar4);
          _objc_release(uVar5);
        }
      }
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar1);
LAB_107b00050:
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(param_3);
  return;
}



/* Entry: 107b02bd4; end: 107b02bdb; -[SCDiscoverFeedNotificationPromptHandler shouldDisplayBitmojiInAppForOptInStoryNotificationReceived:] */

bool FUN_107b02bd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_107b011a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 107b02bdc; end: 107b02c23; -[SCDiscoverFeedNotificationPromptHandler shouldDisplayStoryNotificationsPermissionsPromptIfNecessary] */

undefined8 FUN_107b02bdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107b00ed0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107b02c24; end: 107b02c9b; -[SCDiscoverFeedNotificationPromptHandler .cxx_destruct] */

void FUN_107b02c24(long param_1)

{
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



/* Entry: 107b02c9c; end: 107b03177; -[SCDiscoverFeedOptedInStoryNotificationProcessor initWithUserSession:circumstanceEngine:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:collectionPrefetcher:adConfigProvider:lazyNetworkRequester:lazySnapchattersDataFetcher:lazyStoriesDataCoordinator:storiesThumbnailCoordinator:storiesSyncNetworkRequester:lazyUserPreferences:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:imageDownloader:grapheneRegistry:networkConnectivityMonitor:locationProvider:adRenderDataParser:storiesConfigProvider:] */

undefined8 *
FUN_107b02c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126f9d38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[10];
    puVar1[10] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[4];
    puVar1[4] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d6748;
    _objc_alloc();
    func_0x00010c05e820();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_20;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_24;
    _objc_release(uVar2);
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 107b03178; end: 107b031f3; -[SCDiscoverFeedOptedInStoryNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_107b03178(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x73) {
    lVar1 = param_3;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar2 = 1;
      goto LAB_107b031dc;
    }
    lVar1 = param_3;
    func_0x00010c07c5e0();
    if ((int)lVar1 == 0) {
      uVar2 = 4;
      goto LAB_107b031dc;
    }
  }
  uVar2 = 0;
LAB_107b031dc:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107b031f4; end: 107b0336f; -[SCDiscoverFeedOptedInStoryNotificationProcessor processNotification:] */

void FUN_107b031f4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107aff0b4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf38cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c07c5e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar2;
    func_0x00010bf52680(uVar2);
    func_0x000107b018f8(5,uVar1,*(undefined8 *)(param_1 + 0x80));
  }
  uVar1 = param_3;
  func_0x00010c11c420();
  if ((uVar1 == 0x73) || (uVar1 = param_3, func_0x00010c11c420(), uVar1 == 0x16)) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107b03370;
    puStack_60 = &UNK_110850cf8;
    _objc_retain(uVar2);
    uStack_58 = uVar2;
    _objc_retain(param_3);
    uStack_50 = param_3;
    lStack_48 = param_1;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010007380c(uVar3,&puStack_78);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107b03370; end: 107b033d7;  */

void FUN_107b03370(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    return;
  }
  func_0x00010bf52680();
  if (lVar1 == 0x1a) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18),
               PTR_s_handleOptInFriendStoryNotificati_1125d20f8,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b033d8; end: 107b0370b; -[SCDiscoverFeedOptedInStoryNotificationProcessor _processDiscoverFeedNotification:] */

void FUN_107b033d8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf38cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000108f51d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c25baa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  lVar3 = lVar6;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c07c5e0();
  if (((int)uVar4 == 0) || (lVar6 != 0)) {
    if (lVar6 != 0) {
      uVar7 = param_1;
      func_0x00010bec4ac0();
      if ((uVar7 & 1) == 0) goto LAB_107b034d0;
      uVar4 = param_3;
      func_0x00010c07c5e0();
      if ((int)uVar4 != 0) {
        FUN_107afdef0(lVar6,*(undefined8 *)(param_1 + 0x50),1,1);
        goto LAB_107b03698;
      }
    }
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = &uStack_98;
    uStack_98 = 0;
    uStack_88 = 0x2020000000;
    uStack_80 = 0;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107b0370c;
    puStack_a8 = &UNK_110847658;
    puStack_90 = puStack_a0;
    func_0x00010bcbe2c4("APPSTORE",&puStack_c0);
    if ((*(byte *)(puStack_90 + 3) & 1) == 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      FUN_107b011e8();
      if (iVar2 != 0) {
        func_0x00010c0f9420(*(undefined8 *)(param_1 + 0x10));
      }
    }
    _objc_initWeak(auStack_c8,param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = param_3;
    func_0x00010bf38cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_107b0375c;
    puStack_f0 = &UNK_1109fab80;
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(param_3);
    puStack_d8 = &uStack_98;
    uStack_e8 = param_3;
    _objc_retain(lVar3);
    lStack_e0 = lVar3;
    func_0x00010846f16c(uVar9,3,&PTR____CFConstantStringClassReference_110e1c6f8,uVar4,uVar5,uVar10,
                        0,uVar11,&puStack_108,*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                        *(undefined8 *)(param_1 + 0x98));
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lStack_e0);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    __Block_object_dispose(&uStack_98,8);
  }
  else {
LAB_107b034d0:
    lVar8 = lVar3;
    func_0x00010bf52680(lVar3);
    func_0x000107b018f8(7,lVar8,*(undefined8 *)(param_1 + 0x80));
  }
LAB_107b03698:
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(param_3);
  return;
}



/* Entry: 107b0370c; end: 107b0375b;  */

void FUN_107b0370c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = puVar2 == (undefined *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b0375c; end: 107b037e3;  */

void FUN_107b0375c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010bf52680(*(undefined8 *)(param_1 + 0x28));
      func_0x00010be6dfc0(lVar1);
    }
    else {
      func_0x00010be2bd80(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b037e4; end: 107b037f3; -[SCDiscoverFeedOptedInStoryNotificationProcessor _optInNotificationGrapheneIncrementStoryCorpus:metricType:] */

void FUN_107b037e4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 == 0x10) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2038;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ead058;
  if (param_3 != 0x11) {
    ppuVar3 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e10178;
  if (param_3 != 0x1a) {
    ppuVar1 = ppuVar3;
  }
  ppuVar3 = ppuVar1;
  func_0x00010c0720c0();
  iVar2 = (int)ppuVar3;
  switch(param_4) {
  case 0:
    if (iVar2 == 0) {
      FUN_107b0881c(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b08990(uVar4,1);
    }
    break;
  case 1:
    if (iVar2 == 0) {
      FUN_107b08a08(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b08b7c(uVar4,1);
    }
    break;
  case 2:
    if (iVar2 == 0) {
      FUN_107b08bf4(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b08d68(uVar4,1);
    }
    break;
  case 3:
    if (iVar2 == 0) {
      FUN_107b07094(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b07208(uVar4,1);
    }
    break;
  case 4:
    if (iVar2 == 0) {
      FUN_107b081e0(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b08354(uVar4,1);
    }
    break;
  case 5:
    if (iVar2 == 0) {
      FUN_107b0806c(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b07ff4(uVar4,1);
    }
    break;
  case 6:
    if (iVar2 == 0) {
      FUN_107b06ad0(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b06c44(uVar4,1);
    }
    break;
  case 7:
    if (iVar2 == 0) {
      FUN_107b06cbc(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b06e30(uVar4,1);
    }
    break;
  case 8:
    if (iVar2 == 0) {
      FUN_107b07658(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b077cc(uVar4,1);
    }
    break;
  case 9:
    if (iVar2 != 0) {
      FUN_107b06494(uVar4,1);
      break;
    }
    goto code_r0x000107b01a10;
  case 10:
    if (iVar2 == 0) {
      FUN_107b07844(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b079b8(uVar4,1);
    }
    break;
  case 0xb:
    if (iVar2 == 0) {
      FUN_107b0650c(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b06680(uVar4,1);
    }
    break;
  case 0xc:
    if (iVar2 == 0) {
      FUN_107b07c1c(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b07d90(uVar4,1);
    }
    break;
  case 0xd:
    if (iVar2 == 0) {
      FUN_107b066f8(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b0686c(uVar4,1);
    }
    break;
  case 0xe:
    if (iVar2 != 0) {
      FUN_107b062a8(uVar4,1);
      break;
    }
code_r0x000107b01a10:
    FUN_107b06320(uVar4,ppuVar1,1);
    break;
  case 0xf:
    if (iVar2 == 0) {
      FUN_107b068e4(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b06a58(uVar4,1);
    }
    break;
  case 0x10:
    if (iVar2 == 0) {
      FUN_107b07a30(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b07ba4(uVar4,1);
    }
    break;
  case 0x11:
    if (iVar2 == 0) {
      FUN_107b083cc(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b08540(uVar4,1);
    }
    break;
  case 0x12:
    if (iVar2 == 0) {
      FUN_107b07e08(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b07f7c(uVar4,1);
    }
    break;
  case 0x13:
    if (iVar2 == 0) {
      FUN_107b0746c(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b075e0(uVar4,1);
    }
    break;
  case 0x14:
    if (iVar2 == 0) {
      FUN_107b06ea8(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b0701c(uVar4,1);
    }
    break;
  case 0x15:
    if (iVar2 == 0) {
      FUN_107b07280(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b073f4(uVar4,1);
    }
    break;
  case 0x16:
    if (iVar2 == 0) {
      FUN_107b08630(uVar4,ppuVar1,1);
    }
    else {
      FUN_107b085b8(uVar4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107b037f4; end: 107b03847; -[SCDiscoverFeedOptedInStoryNotificationProcessor _storyIsOptedIn:] */

long FUN_107b037f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010c080120(), (int)lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0794a0(param_3);
  }
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 107b03848; end: 107b03957; -[SCDiscoverFeedOptedInStoryNotificationProcessor _handleLookupStoryResponse:notification:isForegrounded:] */

void FUN_107b03848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107b03958;
  puStack_70 = &UNK_110844dd0;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_68 = param_3;
  _objc_retain(param_4);
  uStack_60 = param_4;
  uStack_50 = param_5;
  func_0x000107afd9e0(uVar1,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b03958; end: 107b0398f;  */

void FUN_107b03958(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdde380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b03990; end: 107b03afb; -[SCDiscoverFeedOptedInStoryNotificationProcessor _checkStoryValidInsertAndNotify:notification:isForegrounded:] */

void FUN_107b03990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740(param_3);
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  func_0x00010c25bae0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b03afc; end: 107b03b53;  */

void FUN_107b03afc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdde360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b03b54; end: 107b03f37; -[SCDiscoverFeedOptedInStoryNotificationProcessor _checkStoryValidInsertAndNotify:groudTruthStory:notification:isForegrounded:] */

void FUN_107b03b54(undefined **param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined1 *puStack_150;
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_3;
  if (param_4 == (undefined1 *)0x0) {
    param_2 = (undefined1 *)0x0;
    func_0x000107aff608();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  else {
    puVar1 = param_4;
    func_0x00010c0741a0();
    if ((int)puVar1 != 0) {
      func_0x00010bf454e0();
      _objc_retainAutoreleasedReturnValue();
      param_2 = param_3;
      func_0x00010bf52680();
      func_0x000107b018f8(9,param_2,param_1[0x10]);
      _objc_release(param_3);
      goto LAB_107b03ec0;
    }
    puVar2 = param_4;
    func_0x00010c25b720();
    if (puVar2 == (undefined1 *)0x2) {
      puVar2 = param_3;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar2;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar2 = puVar1;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 != (undefined1 *)0x0) {
        lVar5 = *plStack_120;
        do {
          puVar6 = (undefined1 *)0x0;
          do {
            if (*plStack_120 != lVar5) {
              _objc_enumerationMutation(puVar2);
            }
            func_0x00010c29ea60(*(undefined8 *)(lStack_128 + (long)puVar6 * 8));
            puVar6 = puVar6 + 1;
          } while (puVar3 != puVar6);
          puVar3 = puVar2;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined1 *)0x0);
      }
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    _objc_retain(param_4);
    _objc_release(param_3);
    puVar2 = param_4;
  }
  puVar1 = puVar2;
  func_0x00010c25b720();
  if ((puVar1 == (undefined1 *)0x3) ||
     (puVar1 = puVar2, func_0x00010c25b720(), puVar1 == (undefined1 *)0xe)) {
    puVar1 = puVar2;
    func_0x00010c25b720();
    puVar3 = puVar2;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    if (puVar1 == (undefined1 *)0x3) {
      func_0x00010afef4dc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010afefd10();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    puVar1 = puVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar4 = param_1[5];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar4 == (undefined *)0x0) || (puVar1 == (undefined1 *)0x0)) {
      param_2 = (undefined1 *)0x11;
      func_0x000107b018f8(0xb,0x11,param_1[0x10]);
      func_0x00010be3c2e0(param_1);
    }
    else {
      _objc_initWeak(auStack_138,param_1);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_107b03f38;
      puStack_160 = &UNK_1109fabb0;
      param_1 = &puStack_178;
      param_2 = auStack_138;
      _objc_copyWeak(auStack_148);
      _objc_retain(param_5);
      uStack_158 = param_5;
      _objc_retain(puVar2);
      puStack_150 = puVar2;
      uStack_140 = param_6;
      func_0x00010c2448c0(puVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puStack_150);
      _objc_release(uStack_158);
      _objc_destroyWeak(auStack_148);
      _objc_destroyWeak(auStack_138);
    }
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
  else {
    func_0x00010be3c2e0(param_1);
  }
LAB_107b03ec0:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_1 + 6);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(param_2);
  puVar2 = puVar2 + 0x30;
  _objc_loadWeakRetained();
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = param_2;
    func_0x000100bf119c();
    if ((int)puVar1 == 0) {
      func_0x00010be3c2e0(puVar2);
    }
    else {
      func_0x00010be6dfc0(puVar2);
    }
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b03f38; end: 107b03fb3;  */

void FUN_107b03f38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x000100bf119c();
    if ((int)uVar1 == 0) {
      func_0x00010be3c2e0(param_1);
    }
    else {
      func_0x00010be6dfc0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b03fb4; end: 107b040eb; -[SCDiscoverFeedOptedInStoryNotificationProcessor _insertAndPrefetchStory:andPostNewNotification:isForegrounded:] */

void FUN_107b03fb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_4;
  func_0x00010c11c420();
  uVar6 = 2;
  if (lVar3 < 0x98) {
    if (lVar3 == 0x71) {
LAB_107b04024:
      uVar6 = 3;
      goto LAB_107b04030;
    }
    if (lVar3 == 0x73) goto LAB_107b04030;
  }
  else {
    if (lVar3 == 0x98) goto LAB_107b04030;
    if (lVar3 == 0x9a) goto LAB_107b04024;
  }
  uVar6 = 0;
LAB_107b04030:
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf82760();
  FUN_107afdc20(param_3,uVar6,uVar1,uVar2,uVar5,*(undefined8 *)(param_1 + 0x80));
  _objc_release(uVar4);
  if (param_5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14b1a0();
    _objc_release(uVar6);
  }
  else {
    FUN_107afdef0(param_3,*(undefined8 *)(param_1 + 0x50),1,1);
  }
  func_0x00010be76600(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b040ec; end: 107b04213; -[SCDiscoverFeedOptedInStoryNotificationProcessor _postNewNotification:forStory:isForegrounded:] */

void FUN_107b040ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_107b04214;
  puStack_88 = &UNK_1109fabe0;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_80 = param_4;
  _objc_retain(param_3);
  uStack_60 = (undefined1)param_5;
  uStack_78 = param_3;
  lStack_70 = param_1;
  FUN_107afe090(param_4,uVar1,uVar2,&puStack_a0,param_5);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b04214; end: 107b0435f;  */

void FUN_107b04214(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_107b04340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf454e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52680();
  func_0x00010be6dfc0(lVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_107afe2f4(uVar2,*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x10);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xa0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2609e0();
    FUN_107b01324(uVar5,uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) != 0) goto LAB_107b042d8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf454e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52680();
    func_0x00010be6dfc0(lVar1);
    _objc_release(uVar4);
  }
  else {
LAB_107b042d8:
    FUN_107afd428(uVar2,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x80));
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
      func_0x00010c0f9420(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10));
    }
  }
  _objc_release(uVar2);
LAB_107b04340:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107b04360; end: 107b04467; -[SCDiscoverFeedOptedInStoryNotificationProcessor .cxx_destruct] */

void FUN_107b04360(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 107b04468; end: 107b04837; -[SCDiscoverFeedStoryNotificationProcessor initWithUserSession:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:bitmojiImageFetcher:collectionPrefetcher:networkRequester:adConfigProvider:circumstanceEngine:discoverFeedDataFetcher:discoverFeedDataMutator:snapchattersDataFetcher:imageDownloader:grapheneRegistry:networkConnectivityMonitor:locationProvider:adRenderDataParser:storiesConfigProvider:] */

undefined8 *
FUN_107b04468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126f9d40;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c2120;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 107b04838; end: 107b048b3; -[SCDiscoverFeedStoryNotificationProcessor shouldFilterNotification:] */

undefined8 FUN_107b04838(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x71) {
    lVar1 = param_3;
    func_0x00010bf38cc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      uVar2 = 1;
      goto LAB_107b0489c;
    }
    lVar1 = param_3;
    func_0x00010c07c5e0();
    if ((int)lVar1 == 0) {
      uVar2 = 4;
      goto LAB_107b0489c;
    }
  }
  uVar2 = 0;
LAB_107b0489c:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107b048b4; end: 107b0499b; -[SCDiscoverFeedStoryNotificationProcessor processNotification:] */

void FUN_107b048b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x71) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107b0499c;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010007380c(uVar2,&puStack_68);
    _objc_release(uVar2);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}


