/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f431e8; end: 106f43457; -[SCSnapRendererSnapDocTranscodingImpl _snapDocWithVideoUrl:overlayImage:attachments:isAnimatedImage:] */

void FUN_106f431e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar1 = PTR_PTR_1126b25c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new();
  uVar3 = param_5;
  func_0x00010bf51e00(param_5);
  _objc_release(param_5);
  func_0x00010c16b420(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  if (param_6 != 0) {
    puVar2 = PTR_PTR_1126cf390;
    _objc_opt_new(PTR_PTR_1126cf390);
    func_0x00010c185a40(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf5aee0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181ae0();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf5aee0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1ba0();
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010bf8cb40(uVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae558;
  lVar4 = param_1;
  func_0x00010bdc6060(param_1,param_2,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lStack_68 = lVar4;
  func_0x00010bdc7b80(param_1,param_2,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_60 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_68,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffb40(puVar2,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106f43458;
  puStack_78 = &UNK_1108fe270;
  uStack_70 = uVar3;
  _objc_retain(uVar3);
  puVar6 = puVar2;
  func_0x00010c0b8600(puVar2,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126b3068;
    _objc_opt_new(PTR_PTR_1126b3068);
    puVar5 = PTR_PTR_1126b25e8;
    _objc_opt_new(PTR_PTR_1126b25e8);
    func_0x00010c1ac2a0(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bcd68;
    func_0x00010bfdc700(PTR_PTR_1126bcd68,param_2,*(undefined8 *)(puVar1 + 0x20));
    func_0x00010c1a6de0(puVar2,param_2,puVar5);
    func_0x00010c1dd500(*(undefined8 *)(puVar1 + 0x20),param_2,puVar2);
    puVar6 = *(undefined **)(puVar1 + 0x20);
    _objc_retain(puVar6);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f43458; end: 106f434ef;  */

void FUN_106f43458(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3068;
  _objc_opt_new(PTR_PTR_1126b3068);
  puVar2 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  func_0x00010c1ac2a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bcd68;
  func_0x00010bfdc700(PTR_PTR_1126bcd68,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a6de0(puVar1,param_2,puVar2);
  func_0x00010c1dd500(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f434f0; end: 106f435fb; -[SCSnapRendererSnapDocTranscodingImpl _addBaseMediaWithVideoURL:editor:] */

void FUN_106f434f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b3080;
  func_0x00010bfad3e0(PTR_PTR_1126b3080,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bef9c20(param_4,param_2,puVar1,3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106f435fc;
  puStack_58 = &UNK_110984508;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106f435fc; end: 106f438c3;  */

void FUN_106f435fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  puVar1 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  _objc_retain(param_2);
  func_0x00010bf0b9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c279200();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c0d5d20(puVar3);
  if (puVar3 != (undefined *)0x0) {
    func_0x00010c106f40(&uStack_a0,puVar3);
  }
  puVar2 = PTR_PTR_1126b25d0;
  _objc_opt_new(PTR_PTR_1126b25d0);
  puVar4 = puVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880();
  _objc_release(param_2);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0c3fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16a960();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0c3fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21acc0();
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0c3fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf7ee20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2256c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar2;
  func_0x00010c0c3fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf7ee20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (puVar1 == (undefined *)0x0) {
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_a0,puVar1);
  }
  _CMTimeGetSeconds(&uStack_a0);
  puVar4 = puVar2;
  func_0x00010c0c3fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c45e0();
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa9a0(uVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f438c4; end: 106f43bdf; -[SCSnapRendererSnapDocTranscodingImpl _addOverlayImage:editor:] */

void FUN_106f438c4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = PTR_PTR_1126ae558;
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_3;
    _UIImagePNGRepresentation(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010bef9c20(param_4,param_2,puVar1,2);
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x106f43a34;
    puStack_58 = &UNK_110984508;
    _objc_retain(param_3);
    puStack_50 = param_3;
    _objc_retain(param_4);
    puVar4 = puVar2;
    puStack_48 = param_4;
    func_0x00010c0b8600(puVar2,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_48);
    _objc_release(puStack_50);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106f43be0; end: 106f43cdb; -[SCSnapRendererSnapDocTranscodingImpl .cxx_destruct] */

void FUN_106f43be0(long param_1)

{
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



/* Entry: 106f43cdc; end: 106f43d3b; -[SCSnapVideoFilterParams initWithMediaDestination:respectSnapOrientation:isExporting:] */

void FUN_106f43cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f7e08;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 106f43d3c; end: 106f43d43; -[SCSnapVideoFilterParams mediaDestination] */

undefined8 FUN_106f43d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f43d44; end: 106f43d4b; -[SCSnapVideoFilterParams respectSnapOrientation] */

undefined1 FUN_106f43d44(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106f43d4c; end: 106f43d53; -[SCSnapVideoFilterParams isExporting] */

undefined1 FUN_106f43d4c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106f43d54; end: 106f43e17; +[SCSnapRendererTranscodingMedia imageWithImage:trackID:timeRange:] */

void FUN_106f43d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d34a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f43e18; end: 106f43f1b; +[SCSnapRendererTranscodingMedia videoWithAsset:staticOverlay:videoDurationMs:trackID:timeRange:] */

void FUN_106f43e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126d34a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106f43f1c; end: 106f43f3f; -[SCSnapRendererTranscodingMedia copyWithZone:] */

undefined8 FUN_106f43f1c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106f43f40; end: 106f43ff7; -[SCSnapRendererTranscodingMedia hash] */

void FUN_106f43f40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1126f7e10;
  puStack_a0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f43ff8; end: 106f4403b; -[SCSnapRendererTranscodingMedia internalInit] */

void FUN_106f43ff8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f7e10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f4403c; end: 106f4417b; -[SCSnapRendererTranscodingMedia isEqual:] */

long FUN_106f4403c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106f44154:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106f44160;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_106f44160;
                  }
                  goto LAB_106f44154;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106f44160:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106f4417c; end: 106f4420f; -[SCSnapRendererTranscodingMedia matchImage:video:] */

void FUN_106f4417c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f44210; end: 106f4427b; -[SCSnapRendererTranscodingMedia .cxx_destruct] */

void FUN_106f44210(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f4427c; end: 106f442ef; -[SCGrapheneSnapRendererMetric2 init] */

undefined1 * FUN_106f4427c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7e18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106f442f0; end: 106f4451f;  */

void FUN_106f442f0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3e98bd;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3e98bd;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110984538;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110984538,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar5 = auStack_78;
    uVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f44520;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3e98bd;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f3e98bd;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_110984588;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110984588,puVar8,uVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar10 = 0;
    puVar5 = auStack_118;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106f44750;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f3e98bd;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_1109845d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109845d8,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1e8 = (undefined1 *)&uStack_200;
  pcStack_1c8 = FUN_106f448c4;
  if (puVar3 != (undefined *)0x0) {
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar1;
    puStack_1d8 = puVar7;
    pppuStack_1d0 = &ppuStack_150;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110984628,&uStack_200,puVar4);
    func_0x00010007e5dc(&puStack_1e8);
  }
  return;
}



/* Entry: 106f44520; end: 106f4474f;  */

void FUN_106f44520(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3e98bd;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f3e98bd;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110984588;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110984588,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f44750;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f3e98bd;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_1109845d8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109845d8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_106f448c4;
  if (puVar4 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar3;
    puStack_138 = puVar1;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110984628,&uStack_160,puVar5);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 106f44750; end: 106f448c3;  */

void FUN_106f44750(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f3e98bd;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109845d8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109845d8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106f448c4;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110984628,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106f448c4; end: 106f4493b;  */

void FUN_106f448c4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110984628,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106f4493c; end: 106f44943; -[SCSnapDocOverlayImageGenerationServices overlayImageGenerator] */

undefined8 FUN_106f4493c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f44944; end: 106f4494f; -[SCSnapDocOverlayImageGenerationServices .cxx_destruct] */

void FUN_106f44944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f44950; end: 106f449a7; -[SCSnapEditorGLCompositor init] */

void FUN_106f44950(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f7e28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x50) = 0;
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    *(undefined4 *)((long)puVar1 + 0x60) = 0x3f800000;
    *(undefined1 *)((long)puVar1 + 0x1c) = 0;
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
  }
  return;
}



/* Entry: 106f449a8; end: 106f449eb; -[SCSnapEditorGLCompositor dealloc] */

void FUN_106f449a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c280a20();
  puStack_28 = PTR_PTR_1126f7e28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106f449ec; end: 106f44a03; -[SCSnapEditorGLCompositor setInputFrameZoom:] */

void FUN_106f449ec(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 != 0.0) {
    fVar1 = 1.0 / param_1;
  }
  *(float *)(param_2 + 0x60) = fVar1;
  return;
}



/* Entry: 106f44a04; end: 106f44dd7; -[SCSnapEditorGLCompositor prepareOverlayWidth:height:error:] */

void FUN_106f44a04(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar14 = (int *)(param_1 + 9);
  uVar12 = (uint)param_3;
  uVar13 = (uint)param_4;
  puVar9 = param_5;
  if (((*piVar14 != 0) && (*(uint *)((long)param_1 + 0x4c) == uVar12)) &&
     (puVar7 = param_3, *(uint *)(param_1 + 10) == uVar13)) {
LAB_106f44d9c:
    lVar5 = 1;
    goto LAB_106f44da0;
  }
  if (((int)uVar12 < 1) || ((int)uVar13 < 1)) {
    if (param_5 != (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined8 *)0x0;
LAB_106f44c9c:
      param_3 = param_1;
      puVar9 = puVar7;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar6;
      _objc_release(puVar7);
      _objc_release(puVar4);
LAB_106f44cc8:
      _objc_release(param_1);
    }
  }
  else {
    puVar15 = (uint *)((long)param_1 + 0x54);
    uVar10 = *puVar15;
    puVar7 = param_3;
    puVar8 = param_4;
    if (uVar10 == 0) {
      _glGetIntegerv(0xd33,puVar15);
      uVar10 = *puVar15;
    }
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (((int)uVar10 < 1) || ((uVar12 <= uVar10 && (uVar13 <= uVar10)))) {
      if (*piVar14 != 0) {
        _glDeleteTextures(1,piVar14);
        *piVar14 = 0;
      }
      _glGenTextures(1,piVar14);
      _glActiveTexture(0x84c2);
      _glBindTexture(0xde1,*piVar14);
      _glTexParameteri(0xde1,0x2801,0x2601);
      _glTexParameteri(0xde1,0x2800,0x2601);
      _glTexParameteri(0xde1,0x2802,0x812f);
      _glTexParameteri(0xde1,0x2803,0x812f);
      uVar2 = 0xcf5;
      _glPixelStorei(0xcf5,1);
      do {
        _glGetError();
      } while ((int)uVar2 != 0);
      uVar3 = 0xde1;
      puVar7 = (undefined8 *)0x1908;
      param_6 = 0;
      _glTexImage2D(0xde1,0);
      puVar9 = param_4;
      _glGetError();
      param_4 = param_3;
      if ((int)uVar3 == 0) {
        *(uint *)((long)param_1 + 0x4c) = uVar12;
        *(uint *)(param_1 + 10) = uVar13;
        goto LAB_106f44d9c;
      }
      _glDeleteTextures(1,piVar14);
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      param_3 = puVar7;
      if (param_5 != (undefined8 *)0x0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        param_4 = (undefined8 *)(uVar3 & 0xffffffff);
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106f44c9c;
      }
    }
    else {
      param_3 = puVar7;
      param_4 = puVar8;
      if (param_5 != (undefined8 *)0x0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        param_4 = (undefined8 *)0x0;
        param_3 = param_1;
        puVar9 = puVar7;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_5 = puVar6;
        _objc_release(puVar7);
        _objc_release(puVar4);
        goto LAB_106f44cc8;
      }
    }
  }
  lVar5 = 0;
  puVar7 = param_3;
LAB_106f44da0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  if (((*(int *)(lVar5 + 0x48) != 0) && ((int)param_4 == *(int *)(lVar5 + 0x4c))) &&
     ((int)puVar9 == *(int *)(lVar5 + 0x50))) {
    _glActiveTexture(0x84c2);
    _glBindTexture(0xde1,*(undefined4 *)(lVar5 + 0x48));
    _glPixelStorei(0xcf5,1);
    iVar1 = param_6 + 3;
    if (-1 < param_6) {
      iVar1 = param_6;
    }
    _glPixelStorei(0xcf2,iVar1 >> 2);
    _glPixelStorei(0xcf4,0);
    _glPixelStorei(0xcf3,0);
    _glTexSubImage2D(0xde1,0,0,0,param_4,puVar9,0x80e1,0x1401,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glPixelStorei_11034b738)(0xcf2,0);
    return;
  }
  return;
}



/* Entry: 106f44dd8; end: 106f44ed3; -[SCSnapEditorGLCompositor uploadOverlayFullBitmap:width:height:bytesPerRow:] */

void FUN_106f44dd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x48) != 0) && ((int)param_4 == *(int *)(param_1 + 0x4c))) &&
     ((int)param_5 == *(int *)(param_1 + 0x50))) {
    _glActiveTexture(0x84c2);
    _glBindTexture(0xde1,*(undefined4 *)(param_1 + 0x48));
    _glPixelStorei(0xcf5,1);
    iVar1 = param_6 + 3;
    if (-1 < param_6) {
      iVar1 = param_6;
    }
    _glPixelStorei(0xcf2,iVar1 >> 2);
    _glPixelStorei(0xcf4,0);
    _glPixelStorei(0xcf3,0);
    _glTexSubImage2D(0xde1,0,0,0,param_4,param_5,0x80e1,0x1401,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glPixelStorei_11034b738)(0xcf2,0);
    return;
  }
  return;
}



/* Entry: 106f44ed4; end: 106f45013; -[SCSnapEditorGLCompositor uploadOverlayDirtyRectX:y:width:height:fromBitmap:bytesPerRow:] */

undefined8
FUN_106f44ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (((0 < (int)param_6) && (0 < (int)param_5)) && (*(int *)(param_1 + 0x48) != 0)) {
    if ((((int)((uint)param_4 | (uint)param_3) < 0) ||
        (*(int *)(param_1 + 0x4c) < (int)((int)param_5 + (uint)param_3))) ||
       (*(int *)(param_1 + 0x50) < (int)((int)param_6 + (uint)param_4))) {
      uVar2 = 0;
    }
    else {
      _glActiveTexture(0x84c2);
      _glBindTexture(0xde1,*(undefined4 *)(param_1 + 0x48));
      _glPixelStorei(0xcf5,1);
      iVar1 = param_8 + 3;
      if (-1 < param_8) {
        iVar1 = param_8;
      }
      _glPixelStorei(0xcf2,iVar1 >> 2);
      _glPixelStorei(0xcf4,param_3);
      _glPixelStorei(0xcf3,param_4);
      _glTexSubImage2D(0xde1,0,param_3,param_4,param_5,param_6,0x80e1,0x1401,param_7);
      _glPixelStorei(0xcf2,0);
      _glPixelStorei(0xcf4,0);
      _glPixelStorei(0xcf3,0);
    }
  }
  return uVar2;
}



/* Entry: 106f45014; end: 106f4525f; -[SCSnapEditorGLCompositor compositeBGRAVideoOnUnit0WithOutputSize:error:] */

undefined8 *
FUN_106f45014(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5,undefined *param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  int *piVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  long lStack_d0;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_1;
  puVar7 = param_5;
  lVar9 = param_4;
  puVar10 = param_5;
  func_0x00010be0a3e0();
  puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar2 != 0) {
    if ((*(byte *)((long)param_1 + 0x1c) & 1) == 0) {
      if (param_5 != (undefined8 *)0x0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
LAB_106f451e4:
        puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = 0;
        puVar7 = param_1;
        puVar10 = puVar2;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_5 = puVar13;
        _objc_release(puVar2);
        _objc_release(param_1);
      }
    }
    else {
      if (*(int *)(param_1 + 9) != 0) {
        _glActiveTexture(0x84c2);
        _glBindTexture(0xde1,*(undefined4 *)(param_1 + 9));
        _glViewport(0,0,param_3,param_4);
        _glUseProgram(*(undefined4 *)(param_1 + 1));
        _glUniform1i(*(undefined4 *)((long)param_1 + 0x14),0);
        _glUniform1i(*(undefined4 *)(param_1 + 3),2);
        _glUniform1f(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((long)param_1 + 0x44));
        _glDisable(0xbe2);
        _glDisable(0xb71);
        _glDisable(0xb44);
        _glEnableVertexAttribArray(*(undefined4 *)((long)param_1 + 0xc));
        _glVertexAttribPointer(*(undefined4 *)((long)param_1 + 0xc),4,0x1406,0,0,&UNK_10de18ca8);
        _glEnableVertexAttribArray(*(undefined4 *)(param_1 + 2));
        param_6 = &UNK_10de18ce8;
        lVar9 = 0;
        puVar10 = (undefined8 *)0x0;
        _glVertexAttribPointer(*(undefined4 *)(param_1 + 2),2,0x1406,0,0,&UNK_10de18ce8);
        puVar7 = (undefined8 *)0x4;
        _glDrawArrays(5,0);
        _glDisableVertexAttribArray(*(undefined4 *)((long)param_1 + 0xc));
        _glDisableVertexAttribArray(*(undefined4 *)(param_1 + 2));
        puVar2 = (undefined8 *)0x1;
        goto LAB_106f45230;
      }
      if (param_5 != (undefined8 *)0x0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106f451e4;
      }
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_106f45230:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  if (puVar7 == (undefined8 *)0x0) {
    if (param_7 != (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_e0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110e8ed18;
      puVar6 = puVar2;
LAB_106f45474:
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = puVar13;
LAB_106f454b0:
      _objc_release(puVar8);
LAB_106f454b8:
      _objc_release();
    }
  }
  else {
    func_0x00010be0a780();
    puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar6 != 0) {
      if (*(int *)(puVar2 + 9) == 0) {
        if (param_7 != (undefined8 *)0x0) {
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uStack_f0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_e8 = &PTR____CFConstantStringClassReference_110e8ecf8;
          puVar6 = puVar2;
          goto LAB_106f45474;
        }
      }
      else {
        plVar15 = puVar2 + 0xb;
        if (*plVar15 == 0) {
          puVar6 = (undefined8 *)PTR__OBJC_CLASS___EAGLContext_1126d34e8;
          func_0x00010bf5e500();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (puVar6 == (undefined8 *)0x0) {
            if (param_7 != (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uStack_100 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_f8 = &PTR____CFConstantStringClassReference_110e8ed38;
              puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
LAB_106f4587c:
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_7 = puVar13;
              _objc_release(puVar8);
              _objc_release(puVar2);
            }
          }
          else {
            puVar16 = *(undefined8 **)PTR__kCFAllocatorDefault_11034ab78;
            puVar4 = puVar16;
            _CVOpenGLESTextureCacheCreate(puVar16,0,puVar6,0,plVar15);
            puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
            if (((int)puVar4 == 0) && (*plVar15 != 0)) {
              _objc_release(puVar6);
              goto LAB_106f452e0;
            }
            if (param_7 != (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uStack_110 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_108 = &PTR____CFConstantStringClassReference_110e8ed58;
              puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_106f4587c;
            }
          }
          goto LAB_106f454b8;
        }
        puVar16 = *(undefined8 **)PTR__kCFAllocatorDefault_11034ab78;
LAB_106f452e0:
        puVar4 = puVar7;
        _CVPixelBufferGetWidth(puVar7);
        puVar3 = puVar7;
        _CVPixelBufferGetHeight(puVar7);
        puStack_138 = (undefined8 *)0x0;
        puVar6 = puVar16;
        _CVOpenGLESTextureCacheCreateTextureFromImage
                  (puVar16,*plVar15,puVar7,0,0xde1,0x1909,puVar4,puVar3,0x140100001909,0,
                   &puStack_138);
        puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((int)puVar6 == 0 && puStack_138 != (undefined8 *)0x0) {
          lStack_140 = 0;
          _CVOpenGLESTextureCacheCreateTextureFromImage
                    (puVar16,*plVar15,puVar7,0,0xde1,0x190a,(ulong)puVar4 >> 1,(ulong)puVar3 >> 1,
                     0x14010000190a,1,&lStack_140);
          bVar1 = (int)puVar16 != 0;
          puVar7 = (undefined8 *)(ulong)(!bVar1 && lStack_140 != 0);
          if (bVar1 || lStack_140 == 0) {
            puVar6 = puStack_138;
            _CFRelease();
            puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
            if (param_7 != (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uStack_130 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_128 = &PTR____CFConstantStringClassReference_110e8ed98;
              puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_7 = puVar13;
              _objc_release(puVar8);
              _objc_release();
              puVar6 = puVar2;
            }
          }
          else {
            _glActiveTexture(0x84c0);
            puVar6 = puStack_138;
            _CVOpenGLESTextureGetTarget(puStack_138);
            puVar4 = puStack_138;
            _CVOpenGLESTextureGetName(puStack_138);
            _glBindTexture(puVar6,puVar4);
            _glTexParameteri(0xde1,0x2801,0x2601);
            _glTexParameteri(0xde1,0x2800,0x2601);
            _glTexParameteri(0xde1,0x2802,0x812f);
            _glTexParameteri(0xde1,0x2803,0x812f);
            _glActiveTexture(0x84c1);
            lVar11 = lStack_140;
            _CVOpenGLESTextureGetTarget(lStack_140);
            lVar5 = lStack_140;
            _CVOpenGLESTextureGetName(lStack_140);
            _glBindTexture(lVar11,lVar5);
            _glTexParameteri(0xde1,0x2801,0x2601);
            _glTexParameteri(0xde1,0x2800,0x2601);
            _glTexParameteri(0xde1,0x2802,0x812f);
            _glTexParameteri(0xde1,0x2803,0x812f);
            _glActiveTexture(0x84c2);
            _glBindTexture(0xde1,*(undefined4 *)(puVar2 + 9));
            _glViewport(0,0,puVar10,param_6);
            _glUseProgram(*(undefined4 *)(puVar2 + 4));
            _glUniform1i(*(undefined4 *)((long)puVar2 + 0x2c),0);
            _glUniform1i(*(undefined4 *)(puVar2 + 6),1);
            _glUniform1i(*(undefined4 *)((long)puVar2 + 0x34),2);
            _glUniform1f(*(undefined4 *)(puVar2 + 0xc),*(undefined4 *)((long)puVar2 + 0x44));
            uVar12 = lVar9 - 1;
            if (uVar12 < 3) {
              puVar8 = (&PTR_DAT_1109846c8)[uVar12];
              puVar13 = (&PTR_DAT_1109846e0)[uVar12];
            }
            else {
              puVar13 = &UNK_10de18d14;
              puVar8 = &UNK_10de18d08;
            }
            _glUniform3fv(*(undefined4 *)(puVar2 + 7),1,puVar8);
            _glUniformMatrix3fv(*(undefined4 *)((long)puVar2 + 0x3c),1,0,puVar13);
            _glDisable(0xbe2);
            _glDisable(0xb71);
            _glDisable(0xb44);
            _glEnableVertexAttribArray(*(undefined4 *)((long)puVar2 + 0x24));
            _glVertexAttribPointer(*(undefined4 *)((long)puVar2 + 0x24),4,0x1406,0,0,&UNK_10de18dc8)
            ;
            _glEnableVertexAttribArray(*(undefined4 *)(puVar2 + 5));
            _glVertexAttribPointer(*(undefined4 *)(puVar2 + 5),2,0x1406,0,0,&UNK_10de18e08);
            _glDrawArrays(5,0,4);
            _glDisableVertexAttribArray(*(undefined4 *)((long)puVar2 + 0x24));
            _glDisableVertexAttribArray(*(undefined4 *)(puVar2 + 5));
            _CFRelease(puStack_138);
            _CFRelease(lStack_140);
            puVar6 = (undefined8 *)puVar2[0xb];
            _CVOpenGLESTextureCacheFlush(puVar6,0);
          }
          goto LAB_106f454c0;
        }
        if (param_7 != (undefined8 *)0x0) {
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uStack_120 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_118 = &PTR____CFConstantStringClassReference_110e8ed78;
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_7 = puVar13;
          puVar6 = puVar2;
          goto LAB_106f454b0;
        }
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_106f454c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d0) {
    return puVar7;
  }
  ___stack_chk_fail();
  if (puVar6[0xb] != 0) {
    _CVOpenGLESTextureCacheFlush(puVar6[0xb],0);
    _CFRelease(puVar6[0xb]);
    puVar6[0xb] = 0;
  }
  piVar14 = (int *)(puVar6 + 9);
  if (*piVar14 != 0) {
    _glDeleteTextures(1,piVar14);
    *piVar14 = 0;
  }
  if (*(int *)(puVar6 + 1) != 0) {
    _glDeleteProgram();
    *(undefined4 *)(puVar6 + 1) = 0;
  }
  puVar2 = (undefined8 *)(ulong)*(uint *)(puVar6 + 4);
  if (*(uint *)(puVar6 + 4) != 0) {
    _glDeleteProgram();
    *(undefined4 *)(puVar6 + 4) = 0;
  }
  *(undefined1 *)((long)puVar6 + 0x1c) = 0;
  *(undefined1 *)(puVar6 + 8) = 0;
  *(undefined4 *)((long)puVar6 + 0x4c) = 0;
  *(undefined4 *)(puVar6 + 10) = 0;
  return puVar2;
}



/* Entry: 106f45260; end: 106f4599f; -[SCSnapEditorGLCompositor compositeYUVVideoPixelBuffer:colorMatrix:outputSize:error:] */

ulong FUN_106f45260(undefined *param_1,undefined8 param_2,ulong param_3,long param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  int *piVar8;
  ulong uVar9;
  long *plVar10;
  undefined *puVar11;
  long lStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1;
  if (param_3 == 0) {
    if (param_7 != (undefined8 *)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e8ed18;
      puVar5 = param_1;
LAB_106f45474:
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_7 = puVar7;
LAB_106f454b0:
      _objc_release(puVar2);
LAB_106f454b8:
      _objc_release();
    }
  }
  else {
    func_0x00010be0a780(param_1,param_2,param_7);
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((int)puVar5 != 0) {
      if (*(int *)(param_1 + 0x48) == 0) {
        if (param_7 != (undefined8 *)0x0) {
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_88 = &PTR____CFConstantStringClassReference_110e8ecf8;
          puVar5 = param_1;
          goto LAB_106f45474;
        }
      }
      else {
        plVar10 = (long *)(param_1 + 0x58);
        if (*plVar10 == 0) {
          puVar5 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
          func_0x00010bf5e500();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (puVar5 == (undefined *)0x0) {
            if (param_7 != (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uStack_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_98 = &PTR____CFConstantStringClassReference_110e8ed38;
              puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
LAB_106f4587c:
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_7 = puVar7;
              _objc_release(puVar2);
              _objc_release(param_1);
            }
          }
          else {
            puVar11 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
            puVar2 = puVar11;
            _CVOpenGLESTextureCacheCreate(puVar11,0,puVar5,0,plVar10);
            puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
            if (((int)puVar2 == 0) && (*plVar10 != 0)) {
              _objc_release(puVar5);
              goto LAB_106f452e0;
            }
            if (param_7 != (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uStack_b0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_a8 = &PTR____CFConstantStringClassReference_110e8ed58;
              puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_106f4587c;
            }
          }
          goto LAB_106f454b8;
        }
        puVar11 = *(undefined **)PTR__kCFAllocatorDefault_11034ab78;
LAB_106f452e0:
        uVar9 = param_3;
        _CVPixelBufferGetWidth(param_3);
        uVar6 = param_3;
        _CVPixelBufferGetHeight(param_3);
        puStack_d8 = (undefined *)0x0;
        puVar5 = puVar11;
        _CVOpenGLESTextureCacheCreateTextureFromImage
                  (puVar11,*plVar10,param_3,0,0xde1,0x1909,uVar9,uVar6,0x140100001909,0,&puStack_d8)
        ;
        puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((int)puVar5 == 0 && puStack_d8 != (undefined *)0x0) {
          lStack_e0 = 0;
          _CVOpenGLESTextureCacheCreateTextureFromImage
                    (puVar11,*plVar10,param_3,0,0xde1,0x190a,uVar9 >> 1,uVar6 >> 1,0x14010000190a,1,
                     &lStack_e0);
          bVar1 = (int)puVar11 != 0;
          uVar9 = (ulong)(!bVar1 && lStack_e0 != 0);
          if (bVar1 || lStack_e0 == 0) {
            puVar5 = puStack_d8;
            _CFRelease();
            puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
            if (param_7 != (undefined8 *)0x0) {
              _objc_opt_class();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uStack_d0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_c8 = &PTR____CFConstantStringClassReference_110e8ed98;
              puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *param_7 = puVar7;
              _objc_release(puVar5);
              _objc_release();
              puVar5 = param_1;
            }
          }
          else {
            _glActiveTexture(0x84c0);
            puVar7 = puStack_d8;
            _CVOpenGLESTextureGetTarget(puStack_d8);
            puVar5 = puStack_d8;
            _CVOpenGLESTextureGetName(puStack_d8);
            _glBindTexture(puVar7,puVar5);
            _glTexParameteri(0xde1,0x2801,0x2601);
            _glTexParameteri(0xde1,0x2800,0x2601);
            _glTexParameteri(0xde1,0x2802,0x812f);
            _glTexParameteri(0xde1,0x2803,0x812f);
            _glActiveTexture(0x84c1);
            lVar3 = lStack_e0;
            _CVOpenGLESTextureGetTarget(lStack_e0);
            lVar4 = lStack_e0;
            _CVOpenGLESTextureGetName(lStack_e0);
            _glBindTexture(lVar3,lVar4);
            _glTexParameteri(0xde1,0x2801,0x2601);
            _glTexParameteri(0xde1,0x2800,0x2601);
            _glTexParameteri(0xde1,0x2802,0x812f);
            _glTexParameteri(0xde1,0x2803,0x812f);
            _glActiveTexture(0x84c2);
            _glBindTexture(0xde1,*(undefined4 *)(param_1 + 0x48));
            _glViewport(0,0,param_5,param_6);
            _glUseProgram(*(undefined4 *)(param_1 + 0x20));
            _glUniform1i(*(undefined4 *)(param_1 + 0x2c),0);
            _glUniform1i(*(undefined4 *)(param_1 + 0x30),1);
            _glUniform1i(*(undefined4 *)(param_1 + 0x34),2);
            _glUniform1f(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x44));
            uVar6 = param_4 - 1;
            if (uVar6 < 3) {
              puVar5 = (&PTR_DAT_1109846c8)[uVar6];
              puVar7 = (&PTR_DAT_1109846e0)[uVar6];
            }
            else {
              puVar7 = &UNK_10de18d14;
              puVar5 = &UNK_10de18d08;
            }
            _glUniform3fv(*(undefined4 *)(param_1 + 0x38),1,puVar5);
            _glUniformMatrix3fv(*(undefined4 *)(param_1 + 0x3c),1,0,puVar7);
            _glDisable(0xbe2);
            _glDisable(0xb71);
            _glDisable(0xb44);
            _glEnableVertexAttribArray(*(undefined4 *)(param_1 + 0x24));
            _glVertexAttribPointer(*(undefined4 *)(param_1 + 0x24),4,0x1406,0,0,&UNK_10de18dc8);
            _glEnableVertexAttribArray(*(undefined4 *)(param_1 + 0x28));
            _glVertexAttribPointer(*(undefined4 *)(param_1 + 0x28),2,0x1406,0,0,&UNK_10de18e08);
            _glDrawArrays(5,0,4);
            _glDisableVertexAttribArray(*(undefined4 *)(param_1 + 0x24));
            _glDisableVertexAttribArray(*(undefined4 *)(param_1 + 0x28));
            _CFRelease(puStack_d8);
            _CFRelease(lStack_e0);
            puVar5 = *(undefined **)(param_1 + 0x58);
            _CVOpenGLESTextureCacheFlush(puVar5,0);
          }
          goto LAB_106f454c0;
        }
        if (param_7 != (undefined8 *)0x0) {
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uStack_c0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_b8 = &PTR____CFConstantStringClassReference_110e8ed78;
          puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_7 = puVar7;
          puVar5 = param_1;
          goto LAB_106f454b0;
        }
      }
    }
  }
  uVar9 = 0;
LAB_106f454c0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar9;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar5 + 0x58) != 0) {
    _CVOpenGLESTextureCacheFlush(*(long *)(puVar5 + 0x58),0);
    _CFRelease(*(undefined8 *)(puVar5 + 0x58));
    *(undefined8 *)(puVar5 + 0x58) = 0;
  }
  piVar8 = (int *)(puVar5 + 0x48);
  if (*piVar8 != 0) {
    _glDeleteTextures(1,piVar8);
    *piVar8 = 0;
  }
  if (*(int *)(puVar5 + 8) != 0) {
    _glDeleteProgram();
    *(undefined4 *)(puVar5 + 8) = 0;
  }
  uVar9 = (ulong)*(uint *)(puVar5 + 0x20);
  if (*(uint *)(puVar5 + 0x20) != 0) {
    _glDeleteProgram();
    *(undefined4 *)(puVar5 + 0x20) = 0;
  }
  puVar5[0x1c] = 0;
  puVar5[0x40] = 0;
  *(undefined4 *)(puVar5 + 0x4c) = 0;
  *(undefined4 *)(puVar5 + 0x50) = 0;
  return uVar9;
}



/* Entry: 106f459a0; end: 106f45a1f; -[SCSnapEditorGLCompositor unload] */

void FUN_106f459a0(long param_1)

{
  int *piVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    _CVOpenGLESTextureCacheFlush(*(long *)(param_1 + 0x58),0);
    _CFRelease(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar1 = (int *)(param_1 + 0x48);
  if (*piVar1 != 0) {
    _glDeleteTextures(1,piVar1);
    *piVar1 = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    _glDeleteProgram();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    _glDeleteProgram();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 106f45a20; end: 106f45eb7; -[SCSnapEditorGLCompositor _ensureBGRAProgramLoadedWithError:] */

undefined8 ******
FUN_106f45a20(undefined8 ******param_1,undefined **param_2,undefined8 ******param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *****pppppuVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******unaff_x19;
  undefined8 ******unaff_x20;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  undefined8 ******unaff_x22;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  uint uStack_f0;
  int iStack_ec;
  undefined8 *****pppppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 *****pppppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 uStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 uStack_68;
  undefined8 *****pppppuStack_60;
  long lStack_58;
  
  ppppppuVar9 = (undefined8 ******)auStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
    ppppppuVar9 = (undefined8 ******)0x1;
    goto LAB_106f45e7c;
  }
  pppppuStack_a0 = (undefined8 ******)0x0;
  param_2 = &PTR____CFConstantStringClassReference_110e8ec18;
  ppppppuVar8 = &pppppuStack_a0;
  uVar3 = 0x8b31;
  FUN_106f45eb8();
  unaff_x19 = (undefined8 ******)pppppuStack_a0;
  _objc_retain(pppppuStack_a0);
  pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)uVar3 == 0) {
    ppppppuVar9 = param_3;
    unaff_x22 = param_1;
    if (param_3 != (undefined8 ******)0x0) {
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      pppppuStack_60 = (undefined8 *****)&PTR____CFConstantStringClassReference_110e8edb8;
      if (unaff_x19 != (undefined8 ******)0x0) {
        pppppuStack_60 = unaff_x19;
      }
      ppppppuVar12 = (undefined8 ******)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppppppuVar8 = param_1;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_3 = pppppuVar5;
      unaff_x20 = param_1;
      param_1 = ppppppuVar12;
      goto LAB_106f45e64;
    }
  }
  else {
    pppppuStack_a8 = (undefined8 ******)0x0;
    param_2 = &PTR____CFConstantStringClassReference_110e8ec38;
    ppppppuVar8 = &pppppuStack_a8;
    uVar4 = 0x8b30;
    FUN_106f45eb8();
    unaff_x20 = (undefined8 ******)pppppuStack_a8;
    ppppppuVar12 = (undefined8 ******)pppppuStack_a8;
    _objc_retain();
    uVar1 = SUB84(ppppppuVar12,0);
    if ((int)uVar4 == 0) {
      _glDeleteShader(uVar3);
      pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSError_1126ae858;
      if (param_3 != (undefined8 ******)0x0) {
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        pppppuStack_70 = (undefined8 *****)&PTR____CFConstantStringClassReference_110e8edd8;
        ppppppuVar12 = param_1;
        if (unaff_x20 != (undefined8 ******)0x0) {
          pppppuStack_70 = unaff_x20;
        }
LAB_106f45d6c:
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        ppppppuVar8 = ppppppuVar12;
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = pppppuVar5;
        _objc_release(puVar6);
        param_1 = ppppppuVar12;
        goto LAB_106f45e64;
      }
    }
    else {
      _glCreateProgram();
      *(undefined4 *)(param_1 + 1) = uVar1;
      _glAttachShader();
      _glAttachShader(*(undefined4 *)(param_1 + 1),uVar4);
      _glLinkProgram(*(undefined4 *)(param_1 + 1));
      auStack_b0._4_4_ = 1;
      ppppppuVar8 = (undefined8 ******)(auStack_b0 + 4);
      _glGetProgramiv(*(undefined4 *)(param_1 + 1),0x8b82);
      _glDetachShader(*(undefined4 *)(param_1 + 1),uVar3);
      _glDetachShader(*(undefined4 *)(param_1 + 1),uVar4);
      _glDeleteShader(uVar3);
      _glDeleteShader(uVar4);
      if (auStack_b0._4_4_ == 1) {
        uVar1 = *(undefined4 *)(param_1 + 1);
        _glGetAttribLocation(uVar1,&DAT_10f68f20c);
        *(undefined4 *)((long)param_1 + 0xc) = uVar1;
        uVar1 = *(undefined4 *)(param_1 + 1);
        _glGetAttribLocation(uVar1,&UNK_10f3e9fc9);
        *(undefined4 *)(param_1 + 2) = uVar1;
        uVar1 = *(undefined4 *)(param_1 + 1);
        _glGetUniformLocation(uVar1,&UNK_10f3e9fe0);
        *(undefined4 *)((long)param_1 + 0x14) = uVar1;
        uVar1 = *(undefined4 *)(param_1 + 1);
        _glGetUniformLocation(uVar1,&UNK_10f3e9fee);
        *(undefined4 *)(param_1 + 3) = uVar1;
        iVar2 = *(int *)(param_1 + 1);
        param_2 = (undefined **)&UNK_10f3e9ffe;
        _glGetUniformLocation();
        *(int *)((long)param_1 + 0x44) = iVar2;
        if ((((*(int *)((long)param_1 + 0xc) < 0) || (*(int *)(param_1 + 2) < 0)) ||
            (*(int *)((long)param_1 + 0x14) < 0)) || ((*(int *)(param_1 + 3) < 0 || (iVar2 < 0)))) {
          _glDeleteProgram(*(undefined4 *)(param_1 + 1));
          *(undefined4 *)(param_1 + 1) = 0;
          pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSError_1126ae858;
          if (param_3 != (undefined8 ******)0x0) {
            _objc_opt_class();
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuStack_90 = &PTR____CFConstantStringClassReference_110e8ee18;
            ppppppuVar12 = param_1;
            goto LAB_106f45d6c;
          }
        }
        else {
          param_3 = (undefined8 ******)0x1;
          *(undefined1 *)((long)param_1 + 0x1c) = 1;
        }
      }
      else {
        auStack_b0._0_4_ = 0;
        param_2 = (undefined **)0x8b84;
        _glGetProgramiv(*(undefined4 *)(param_1 + 1));
        ppppppuVar11 = (undefined8 ******)(ulong)(uint)auStack_b0._0_4_;
        if ((int)auStack_b0._0_4_ < 1) {
          ppppppuVar12 = (undefined8 ******)0x0;
          ppppppuVar8 = ppppppuVar9;
        }
        else {
          ppppppuVar9 = ppppppuVar11;
          _malloc();
          _glGetProgramInfoLog(*(undefined4 *)(param_1 + 1),ppppppuVar11,auStack_b0,ppppppuVar9);
          ppppppuVar12 = (undefined8 ******)PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc();
          ppppppuVar8 = ppppppuVar9;
          func_0x00010c057e20();
          _free(ppppppuVar9);
          param_2 = (undefined **)ppppppuVar11;
        }
        _glDeleteProgram(*(undefined4 *)(param_1 + 1));
        *(undefined4 *)(param_1 + 1) = 0;
        pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSError_1126ae858;
        if (param_3 != (undefined8 ******)0x0) {
          _objc_opt_class();
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          pppppuStack_80 = (undefined8 *****)&PTR____CFConstantStringClassReference_110e8edf8;
          if (ppppppuVar12 != (undefined8 ******)0x0) {
            pppppuStack_80 = ppppppuVar12;
          }
          puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          ppppppuVar8 = param_1;
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_3 = pppppuVar5;
          _objc_release(puVar6);
          _objc_release(param_1);
        }
LAB_106f45e64:
        _objc_release(ppppppuVar12);
        param_3 = (undefined8 ******)0x0;
      }
    }
    _objc_release(unaff_x20);
    ppppppuVar9 = param_3;
    unaff_x22 = param_1;
  }
  param_3 = ppppppuVar8;
  param_1 = unaff_x19;
  _objc_release(unaff_x19);
LAB_106f45e7c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_106f45eb8;
    pppppuStack_e0 = unaff_x22;
    pppppuStack_d8 = ppppppuVar9;
    pppppuStack_d0 = unaff_x20;
    pppppuStack_c8 = unaff_x19;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(param_2);
    _glCreateShader(param_1);
    ppppppuVar9 = (undefined8 ******)param_2;
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _objc_release(param_2);
    pppppuStack_e8 = ppppppuVar9;
    _glShaderSource(param_1,1,&pppppuStack_e8,0);
    _glCompileShader(param_1);
    iStack_ec = 1;
    _glGetShaderiv(param_1,0x8b81,&iStack_ec);
    if (iStack_ec != 1) {
      uStack_f0 = 0;
      _glGetShaderiv(param_1,0x8b84,&uStack_f0);
      uVar10 = (ulong)uStack_f0;
      if (0 < (int)uStack_f0) {
        uVar7 = uVar10;
        _malloc(uVar10);
        _glGetShaderInfoLog(param_1,uVar10,&uStack_f0,uVar7);
        pppppuVar5 = (undefined8 *****)PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        func_0x00010c057e20();
        _objc_autorelease();
        *param_3 = pppppuVar5;
        _free(uVar7);
      }
      _glDeleteShader(param_1);
      param_1 = (undefined8 ******)0x0;
    }
    return param_1;
  }
  return ppppppuVar9;
}



/* Entry: 106f45eb8; end: 106f45fcf;  */

undefined8 FUN_106f45eb8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _glCreateShader(param_1);
  uVar1 = param_2;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  _objc_release(param_2);
  uStack_38 = uVar1;
  _glShaderSource(param_1,1,&uStack_38,0);
  _glCompileShader(param_1);
  iStack_3c = 1;
  _glGetShaderiv(param_1,0x8b81,&iStack_3c);
  if (iStack_3c != 1) {
    uStack_40 = 0;
    _glGetShaderiv(param_1,0x8b84,&uStack_40);
    uVar4 = (ulong)uStack_40;
    if (0 < (int)uStack_40) {
      uVar2 = uVar4;
      _malloc(uVar4);
      _glGetShaderInfoLog(param_1,uVar4,&uStack_40,uVar2);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c057e20();
      _objc_autorelease();
      *param_3 = puVar3;
      _free(uVar2);
    }
    _glDeleteShader(param_1);
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 106f45fd0; end: 106f464bb; -[SCSnapEditorGLCompositor _ensureYUVProgramLoadedWithError:] */

undefined ** FUN_106f45fd0(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  uint uStack_b0;
  int iStack_ac;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)param_1[8] & 1) != 0) {
    param_3 = (undefined **)0x1;
    goto LAB_106f46480;
  }
  ppuStack_a0 = (undefined **)0x0;
  uVar4 = 0x8b31;
  FUN_106f45eb8(0x8b31,&PTR____CFConstantStringClassReference_110e8ec18,&ppuStack_a0);
  ppuVar1 = ppuStack_a0;
  _objc_retain(ppuStack_a0);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)uVar4 == 0) {
    if (param_3 != (undefined **)0x0) {
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e8ee38;
      if (ppuVar1 != (undefined **)0x0) {
        ppuStack_60 = ppuVar1;
      }
      ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_3 = puVar6;
      ppuVar9 = param_1;
      goto LAB_106f46468;
    }
  }
  else {
    ppuStack_a8 = (undefined **)0x0;
    uVar5 = 0x8b30;
    FUN_106f45eb8(0x8b30,&PTR____CFConstantStringClassReference_110e8ec58,&ppuStack_a8);
    ppuVar9 = ppuStack_a8;
    ppuVar11 = ppuStack_a8;
    _objc_retain();
    uVar2 = SUB84(ppuVar11,0);
    if ((int)uVar5 == 0) {
      _glDeleteShader(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (param_3 != (undefined **)0x0) {
        _objc_opt_class(param_1);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuVar11 = param_1;
        ppuStack_70 = &PTR____CFConstantStringClassReference_110e8ee58;
        if (ppuVar9 != (undefined **)0x0) {
          ppuStack_70 = ppuVar9;
        }
LAB_106f46370:
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *param_3 = puVar6;
        _objc_release(puVar8);
        goto LAB_106f46468;
      }
    }
    else {
      _glCreateProgram();
      *(undefined4 *)(param_1 + 4) = uVar2;
      _glAttachShader();
      _glAttachShader(*(undefined4 *)(param_1 + 4),uVar5);
      _glLinkProgram(*(undefined4 *)(param_1 + 4));
      iStack_ac = 1;
      _glGetProgramiv(*(undefined4 *)(param_1 + 4),0x8b82,&iStack_ac);
      _glDetachShader(*(undefined4 *)(param_1 + 4),uVar4);
      _glDetachShader(*(undefined4 *)(param_1 + 4),uVar5);
      _glDeleteShader(uVar4);
      _glDeleteShader(uVar5);
      if (iStack_ac == 1) {
        uVar2 = *(undefined4 *)(param_1 + 4);
        _glGetAttribLocation(uVar2,&DAT_10f68f20c);
        *(undefined4 *)((long)param_1 + 0x24) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + 4);
        _glGetAttribLocation(uVar2,&UNK_10f3e9fc9);
        *(undefined4 *)(param_1 + 5) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + 4);
        _glGetUniformLocation(uVar2,&UNK_10f3ea074);
        *(undefined4 *)((long)param_1 + 0x2c) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + 4);
        _glGetUniformLocation(uVar2,&UNK_10f3e9ffe);
        *(undefined4 *)((long)param_1 + 0x44) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + 4);
        _glGetUniformLocation(uVar2,&UNK_10f3ea081);
        *(undefined4 *)(param_1 + 6) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + 4);
        _glGetUniformLocation(uVar2,&UNK_10f3e9fee);
        *(undefined4 *)((long)param_1 + 0x34) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + 4);
        _glGetUniformLocation(uVar2,&UNK_10f3ea090);
        *(undefined4 *)(param_1 + 7) = uVar2;
        iVar3 = *(int *)(param_1 + 4);
        _glGetUniformLocation(iVar3,&UNK_10f3ea099);
        *(int *)((long)param_1 + 0x3c) = iVar3;
        if (((((*(int *)((long)param_1 + 0x24) < 0) || (*(int *)(param_1 + 5) < 0)) ||
             (*(int *)((long)param_1 + 0x2c) < 0)) ||
            ((*(int *)(param_1 + 6) < 0 || (*(int *)((long)param_1 + 0x34) < 0)))) ||
           ((*(int *)(param_1 + 7) < 0 || ((iVar3 < 0 || (*(int *)((long)param_1 + 0x44) < 0)))))) {
          _glDeleteProgram(*(undefined4 *)(param_1 + 4));
          *(undefined4 *)(param_1 + 4) = 0;
          puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (param_3 != (undefined **)0x0) {
            _objc_opt_class(param_1);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuStack_90 = &PTR____CFConstantStringClassReference_110e8ee98;
            ppuVar11 = param_1;
            goto LAB_106f46370;
          }
        }
        else {
          param_3 = (undefined **)0x1;
          *(undefined1 *)(param_1 + 8) = 1;
        }
      }
      else {
        uStack_b0 = 0;
        _glGetProgramiv(*(undefined4 *)(param_1 + 4),0x8b84,&uStack_b0);
        uVar10 = (ulong)uStack_b0;
        if ((int)uStack_b0 < 1) {
          ppuVar11 = (undefined **)0x0;
        }
        else {
          uVar7 = uVar10;
          _malloc(uVar10);
          _glGetProgramInfoLog(*(undefined4 *)(param_1 + 4),uVar10,&uStack_b0,uVar7);
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc();
          func_0x00010c057e20();
          _free(uVar7);
        }
        _glDeleteProgram(*(undefined4 *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (param_3 != (undefined **)0x0) {
          _objc_opt_class(param_1);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_80 = &PTR____CFConstantStringClassReference_110e8ee78;
          if (ppuVar11 != (undefined **)0x0) {
            ppuStack_80 = ppuVar11;
          }
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *param_3 = puVar6;
          _objc_release(puVar8);
          _objc_release(param_1);
        }
LAB_106f46468:
        _objc_release(ppuVar11);
        param_3 = (undefined **)0x0;
      }
    }
    _objc_release(ppuVar9);
  }
  _objc_release(ppuVar1);
LAB_106f46480:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    return &PTR____CFConstantStringClassReference_110e8eeb8;
  }
  return param_3;
}



/* Entry: 106f464bc; end: 106f464c7; +[SCCRepostRendererCreateRepostRenderer modulePath] */

undefined ** FUN_106f464bc(void)

{
  return &PTR____CFConstantStringClassReference_110e8eeb8;
}



/* Entry: 106f464c8; end: 106f464cf; +[SCCRepostRendererCreateRepostRenderer asyncStrictMode] */

undefined8 FUN_106f464c8(void)

{
  return 0;
}



/* Entry: 106f464d0; end: 106f4653f; -[SCCRepostRendererCreateRepostRenderer createRepostRendererWithOptions:] */

void FUN_106f464d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106f46540; end: 106f466af; +[SCCRepostRendererCreateRepostRenderer invokeWithJSRuntimeProvider:options:completionHandler:] */

void FUN_106f46540(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106f46624;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f466b0; end: 106f466d3; +[SCCRepostRendererCreateRepostRenderer valdiMarshallableObjectDescriptor] */

void FUN_106f466b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109846f8;
  param_1[1] = &PTR_DAT_110984728;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 106f466d4; end: 106f4679f; -[SCCRepostRendererIRepostRenderer initWithRender:dispose:setGradientColors:] */

undefined8 *
FUN_106f466d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126f7e30;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 106f467a0; end: 106f467e7; +[SCCRepostRendererIRepostRenderer valdiMarshallableObjectDescriptor] */

void FUN_106f467a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110984770;
  param_1[1] = &PTR_DAT_1109847d0;
  param_1[2] = &PTR_DAT_110984740;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106f467e8; end: 106f46867;  */

void FUN_106f467e8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106f468e0;
  puStack_30 = &UNK_1109848b8;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106f46868; end: 106f4688b; -[SCCRepostRendererRepostRenderResult init] */

void FUN_106f46868(void)

{
  FUN_106f46918(PTR_PTR_1126f7e38);
  return;
}



/* Entry: 106f4688c; end: 106f468a7; +[SCCRepostRendererRepostRenderResult valdiMarshallableObjectDescriptor] */

void FUN_106f4688c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109847e8;
  param_1[1] = &PTR_DAT_110984818;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106f468a8; end: 106f468cb; -[SCCRepostRendererRepostRendererOptions init] */

void FUN_106f468a8(void)

{
  FUN_106f46918(PTR_PTR_1126f7e40);
  return;
}



/* Entry: 106f468cc; end: 106f468df; +[SCCRepostRendererRepostRendererOptions valdiMarshallableObjectDescriptor] */

void FUN_106f468cc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110984828;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106f468e0; end: 106f46917;  */

void FUN_106f468e0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106f46918; end: 106f46933;  */

void FUN_106f46918(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 106f46934; end: 106f4693b; -[SCRepostOverlayParams profileImageRGBA] */

undefined8 FUN_106f46934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f4693c; end: 106f4696b; -[SCRepostOverlayParams setProfileImageRGBA:] */

void FUN_106f4693c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f4696c; end: 106f46973; -[SCRepostOverlayParams profileImageWidth] */

undefined8 FUN_106f4696c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f46974; end: 106f4697b; -[SCRepostOverlayParams setProfileImageWidth:] */

void FUN_106f46974(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106f4697c; end: 106f46983; -[SCRepostOverlayParams profileImageHeight] */

undefined8 FUN_106f4697c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f46984; end: 106f4698b; -[SCRepostOverlayParams setProfileImageHeight:] */

void FUN_106f46984(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106f4698c; end: 106f46993; -[SCRepostOverlayParams gradientTopColorARGB] */

undefined4 FUN_106f4698c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106f46994; end: 106f4699b; -[SCRepostOverlayParams setGradientTopColorARGB:] */

void FUN_106f46994(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106f4699c; end: 106f469a3; -[SCRepostOverlayParams gradientBottomColorARGB] */

undefined4 FUN_106f4699c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 106f469a4; end: 106f469ab; -[SCRepostOverlayParams setGradientBottomColorARGB:] */

void FUN_106f469a4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 106f469ac; end: 106f469b7; -[SCRepostOverlayParams .cxx_destruct] */

void FUN_106f469ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106f469b8; end: 106f47127;  */

void FUN_106f469b8(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 *puStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  byte bStack_1ba;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  ulong uStack_16c;
  long *plStack_160;
  int *piStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  byte bStack_10a;
  int *piStack_108;
  long lStack_100;
  int *piStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  int *piStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _CVPixelBufferLockBaseAddress(param_1,0);
  piVar4 = param_1;
  _CVPixelBufferGetBaseAddress(param_1);
  piVar11 = param_1;
  _CVPixelBufferGetWidth();
  piVar5 = param_1;
  _CVPixelBufferGetHeight();
  piVar6 = param_1;
  _CVPixelBufferGetBytesPerRow(param_1);
  uStack_148 = (ulong)piVar11 & 0xffffffff | (long)piVar5 << 0x20;
  piStack_158 = (int *)0x0;
  uStack_150 = 0x200000006;
  func_0x0001083b9920(&plStack_160,&piStack_158,piVar4,piVar6,0,0,0);
  plVar9 = plStack_160;
  if (plStack_160 == (long *)0x0) {
    _CVPixelBufferUnlockBaseAddress(param_1,0);
  }
  else {
    plVar10 = (long *)plStack_160[5];
    if (plVar10 == (long *)0x0) {
      plVar10 = plStack_160;
      (**(code **)(*plStack_160 + 0x40))();
      plVar7 = (long *)plVar9[5];
      plVar9[5] = (long)plVar10;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
        plVar10 = (long *)plVar9[5];
      }
      if (plVar10 != (long *)0x0) {
        plVar10[0x18e] = (long)plVar9;
      }
    }
    piVar4 = param_2;
    func_0x00010bfcda20();
    piVar6 = param_2;
    func_0x00010bfcd880();
    uStack_17c = 0;
    uStack_180 = 0;
    uVar13 = NEON_scvtf(CONCAT44((int)piVar5,(int)piVar11),4);
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_190 = 0;
    plStack_1a8 = (long *)0x0;
    uStack_1b0 = 0;
    uStack_174 = 0x3f800000;
    fVar14 = (float)((ulong)uVar13 >> 0x20);
    uStack_16c = 0x40800000;
    uStack_d8 = 0;
    lStack_e0 = (ulong)(uint)fVar14 << 0x20;
    piStack_90 = (int *)CONCAT44((int)piVar6,(int)piVar4);
    func_0x0001083c1ad4(&uStack_1b8,&lStack_e0,&piStack_90,0,2,0,0,0);
    plVar9 = plStack_1a8;
    plStack_1a8 = (long *)uStack_1b8;
    uStack_1b8 = 0;
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 1;
      do {
        iVar12 = (int)*plVar7 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *(int *)plVar7 = iVar12;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    FUN_106f47224(&uStack_1b8);
    uStack_16c = uStack_16c | 0x100000000;
    puVar8 = &uStack_1b0;
    func_0x0001083762f4(puVar8,4);
    fVar15 = (float)uVar13;
    fVar16 = fVar14;
    if (fVar15 <= fVar14) {
      fVar16 = fVar15;
    }
    func_0x00010837e150();
    uStack_1c0 = 0xffffffff;
    uStack_1bc = 2;
    uStack_1bb = 2;
    bStack_1ba = bStack_1ba & 0xf8 | 1;
    lStack_e0 = 0;
    puStack_1c8 = puVar8;
    uStack_d8 = uVar13;
    func_0x000108377f20(&puStack_1c8,&lStack_e0,0,0);
    piStack_90 = (int *)CONCAT44(fVar14 * 0.1,fVar15 * 0.111);
    uStack_88 = CONCAT44(fVar14 * 0.1 + fVar14 * 0.778,fVar15 * 0.111 + fVar15 * 0.778);
    uStack_d8 = 0;
    lStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    func_0x000108384d8c(fVar16 * 0.04,fVar16 * 0.04,&lStack_e0,&piStack_90);
    func_0x00010837817c(&puStack_1c8,&lStack_e0,0,6);
    (**(code **)(*plVar10 + 0xe0))(plVar10,&puStack_1c8,&uStack_1b0);
    piVar4 = param_2;
    func_0x00010c116b00();
    _objc_retainAutoreleasedReturnValue();
    piVar11 = (int *)(ulong)(piVar4 == (int *)0x0);
    _objc_release();
    if (piVar4 != (int *)0x0) {
      piVar11 = param_2;
      func_0x00010c116b00();
      _objc_retainAutoreleasedReturnValue();
      piVar4 = param_2;
      func_0x00010c116be0();
      piVar5 = param_2;
      func_0x00010c116ac0();
      uStack_f0 = CONCAT44(fVar14 * 0.12,fVar15 * 0.14);
      uStack_e8 = CONCAT44(fVar14 * 0.12 + fVar14 * 0.045,fVar15 * 0.14 + fVar15 * 0.08);
      _objc_retain(piVar11);
      piVar6 = piVar11;
      func_0x00010c08fa60();
      if (((0 < (int)piVar5) && (0 < (int)piVar4)) && (piVar6 != (int *)0x0)) {
        piVar6 = piVar11;
        func_0x00010c08fa60();
        lVar3 = ((ulong)piVar4 & 0x7fffffff) * 4;
        if ((int *)(((ulong)piVar5 & 0x7fffffff) * lVar3) <= piVar6) {
          uStack_80 = (ulong)piVar4 & 0x7fffffff | (long)piVar5 << 0x20;
          piStack_90 = (int *)0x0;
          uStack_88 = 0x200000004;
          _objc_retainAutorelease(piVar11);
          piVar4 = piVar11;
          func_0x00010bf25f00(piVar11);
          piVar5 = piVar11;
          func_0x00010c08fa60(piVar11);
          func_0x000108346318(&piStack_f8,piVar4,piVar5);
          piVar4 = piStack_f8;
          if (piStack_f8 != (int *)0x0) {
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piStack_f8,0x10);
              if (bVar2) {
                *piStack_f8 = *piStack_f8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          piStack_108 = piStack_f8;
          func_0x0001083b81f0(&lStack_100,&piStack_90,&piStack_108,lVar3);
          if (piStack_108 != (int *)0x0) {
            FUN_106f47128();
          }
          if (lStack_100 != 0) {
            uStack_ac = 0;
            uStack_b0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            uStack_b8 = 0;
            uStack_b4 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            lStack_e0 = 0;
            uStack_a4 = 0x3f800000;
            uStack_9c = 0x40800000;
            plVar9 = &lStack_e0;
            func_0x0001083762f4(plVar9,4);
            func_0x00010837e150();
            uStack_110 = 0xffffffff;
            uStack_10c = 2;
            uStack_10b = 2;
            bStack_10a = bStack_10a & 0xf8;
            plStack_118 = plVar9;
            func_0x000108378418(&plStack_118,&uStack_f0,0,1);
            iVar12 = (int)plVar10[0x18c];
            *(int *)(plVar10 + 0x18c) = iVar12 + 1;
            *(int *)(plVar10[0x188] + 0x58) = *(int *)(plVar10[0x188] + 0x58) + 1;
            func_0x00010833e5a4(plVar10,&plStack_118,1,1);
            uStack_120 = NEON_scvtf(*(undefined8 *)(lStack_100 + 0x20),4);
            uStack_128 = 0;
            uStack_140 = 0;
            uStack_13c = 0;
            uStack_138 = 0;
            uStack_130 = 1;
            func_0x00010833ed1c(plVar10,lStack_100,&uStack_128,&uStack_f0,&uStack_140,&lStack_e0,1);
            if (iVar12 < 2) {
              iVar12 = 1;
            }
            iVar12 = (int)plVar10[0x18c] - iVar12;
            if (0 < iVar12) {
              do {
                func_0x00010833c334(plVar10);
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            if (plStack_118 != (long *)0x0) {
              func_0x00010837ca68();
            }
            func_0x000108375e94(&lStack_e0);
            piVar4 = piStack_f8;
          }
          FUN_106f47184(&lStack_100);
          if (piVar4 != (int *)0x0) {
            FUN_106f47128(piVar4);
          }
          if (piStack_90 != (int *)0x0) {
            do {
              iVar12 = *piStack_90;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piStack_90,0x10);
              if (bVar2) {
                *piStack_90 = iVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar12 + -1 == 0) {
              __ZdlPv();
            }
          }
        }
      }
      _objc_release(piVar11);
      _objc_release(piVar11);
    }
    plVar9 = plStack_160;
    plStack_160 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
      do {
        iVar12 = (int)*plVar10 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *(int *)plVar10 = iVar12;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    _CVPixelBufferUnlockBaseAddress(param_1,0);
    if (puStack_1c8 != (undefined8 *)0x0) {
      func_0x00010837ca68();
    }
    func_0x000108375e94(&uStack_1b0);
  }
  FUN_106f471d4(&plStack_160);
  if (piStack_158 != (int *)0x0) {
    do {
      iVar12 = *piStack_158;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_158,0x10);
      if (bVar2) {
        *piStack_158 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      __ZdlPv();
    }
  }
  piVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_118 != (long *)0x0) {
    func_0x00010837ca68();
  }
  func_0x000108375e94(&lStack_e0);
  FUN_106f47184(&lStack_100);
  if (piStack_f8 != (int *)0x0) {
    FUN_106f47128(piStack_f8);
  }
  if (piStack_90 != (int *)0x0) {
    do {
      iVar12 = *piStack_90;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_90,0x10);
      if (bVar2) {
        *piStack_90 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      __ZdlPv();
    }
  }
  _objc_release(piVar11);
  _objc_release(piVar11);
  if (puStack_1c8 != (undefined8 *)0x0) {
    func_0x00010837ca68();
  }
  func_0x000108375e94(&uStack_1b0);
  FUN_106f471d4(&plStack_160);
  if (piStack_158 != (int *)0x0) {
    do {
      iVar12 = *piStack_158;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_158,0x10);
      if (bVar2) {
        *piStack_158 = iVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar12 + -1 == 0) {
      __ZdlPv();
    }
  }
  _objc_release(param_2);
  __Unwind_Resume();
  do {
    iVar12 = *piVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = iVar12 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((piVar4 != (int *)0x0) && (iVar12 == 1)) {
    if (*(code **)(piVar4 + 2) != (code *)0x0) {
      (**(code **)(piVar4 + 2))(*(undefined8 *)(piVar4 + 6),*(undefined8 *)(piVar4 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(piVar4);
    return;
  }
  return;
}



/* Entry: 106f47128; end: 106f47183;  */

void FUN_106f47128(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 106f47184; end: 106f471d3;  */

long * FUN_106f47184(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 106f471d4; end: 106f47223;  */

long * FUN_106f471d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 106f47224; end: 106f47273;  */

long * FUN_106f47224(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 106f47274; end: 106f472eb;  */

void FUN_106f47274(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109848e8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106f472ec; end: 106f4751b;  */

void FUN_106f472ec(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  uVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110984938,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    uVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f4751c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if ((int)pcVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar1 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_100,pcVar1);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110984988,&uStack_138,uVar6);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar7 = 0;
    do {
      if ((&cStack_e9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_106f47708;
  if (pcVar2 != (char *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    pcStack_160 = pcVar1;
    pcStack_158 = pcVar5;
    ppuStack_150 = &puStack_b0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_1109849d8,&uStack_180,pcVar4);
    func_0x00010007e5dc(&puStack_168);
  }
  return;
}



/* Entry: 106f4751c; end: 106f47707;  */

void FUN_106f4751c(long param_1,undefined *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_2;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar3 = &UNK_110984988;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110984988,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  pcVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_106f47708;
  if (pcVar2 != (char *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    pcStack_c0 = pcVar1;
    pcStack_b8 = param_3;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_1109849d8,&uStack_e0,puVar3);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 106f47708; end: 106f4777f;  */

void FUN_106f47708(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109849d8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106f47780; end: 106f479af;  */

void FUN_106f47780(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_4f8 [24];
  char *pcStack_4e0;
  undefined8 auStack_4d8 [2];
  char cStack_4c1;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  char *pcStack_498;
  undefined8 *puStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar7 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar7 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984a28,pcVar7,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f479b0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar9 = pcVar7;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar7);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar6 = "";
    unaff_x23 = acStack_138;
    pcVar9 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984ad8,pcVar9,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106f47be0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar6;
  pcVar8 = pcVar9;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar8 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984b28,pcVar8,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106f47e10;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar4;
  pcVar3 = pcVar8;
  uVar11 = uVar10;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar9;
  pcStack_1f8 = pcVar6;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar7 = "";
    unaff_x23 = acStack_278;
    pcVar3 = acStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984b78,pcVar3,uVar10);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar12 = 0;
    puVar14 = auStack_258;
    uVar11 = uVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_106f48040;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar7;
  pcVar9 = pcVar3;
  uVar10 = uVar11;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar14;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar8;
  pcStack_298 = pcVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar3);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar2);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar6 = "";
    unaff_x23 = acStack_318;
    pcVar9 = acStack_318;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984bc8,pcVar9,uVar11);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar12 = 0;
    puVar14 = auStack_2f8;
    uVar10 = uVar11;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar7);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_328 = FUN_106f48270;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar6;
  pcVar8 = pcVar9;
  uVar11 = uVar10;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar14;
  pcStack_348 = pcVar2;
  pcStack_340 = pcVar3;
  pcStack_338 = pcVar7;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_380,pcVar2);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
    pcVar4 = "";
    unaff_x23 = acStack_3b8;
    pcVar8 = acStack_3b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c18,pcVar8,uVar10);
    pcStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar12 = 0;
    puVar14 = auStack_398;
    uVar11 = uVar10;
    do {
      if ((&cStack_369)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106f484a0;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar4;
  pcVar7 = pcVar8;
  uVar10 = uVar11;
  puStack_400 = unaff_x24;
  pcStack_3f8 = unaff_x23;
  puStack_3f0 = puVar14;
  pcStack_3e8 = pcVar2;
  pcStack_3e0 = pcVar9;
  pcStack_3d8 = pcVar6;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(pcVar4);
  iVar1 = (int)pcVar5;
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_438;
    func_0x00010002b838(auStack_438,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_420,pcVar2);
    acStack_458[0] = '\0';
    acStack_458[1] = '\0';
    acStack_458[2] = '\0';
    acStack_458[3] = '\0';
    acStack_458[4] = '\0';
    acStack_458[5] = '\0';
    acStack_458[6] = '\0';
    acStack_458[7] = '\0';
    acStack_458[8] = '\0';
    acStack_458[9] = '\0';
    acStack_458[10] = '\0';
    acStack_458[0xb] = '\0';
    acStack_458[0xc] = '\0';
    acStack_458[0xd] = '\0';
    acStack_458[0xe] = '\0';
    acStack_458[0xf] = '\0';
    acStack_458[0x10] = '\0';
    acStack_458[0x11] = '\0';
    acStack_458[0x12] = '\0';
    acStack_458[0x13] = '\0';
    acStack_458[0x14] = '\0';
    acStack_458[0x15] = '\0';
    acStack_458[0x16] = '\0';
    acStack_458[0x17] = '\0';
    func_0x00010007e1e8(acStack_458,auStack_438,&lStack_408,2);
    puVar15 = &UNK_110984c68;
    unaff_x23 = acStack_458;
    pcVar7 = acStack_458;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c68,pcVar7,uVar11);
    pcStack_440 = unaff_x23;
    func_0x00010007e5dc(&pcStack_440);
    lVar12 = 0;
    puVar14 = auStack_438;
    uVar10 = uVar11;
    do {
      if ((&cStack_409)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar12));
      }
      iVar1 = (int)puVar15;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_468 = FUN_106f486d0;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  puStack_4a0 = unaff_x24;
  pcStack_498 = unaff_x23;
  puStack_490 = puVar14;
  pcStack_488 = pcVar2;
  pcStack_480 = pcVar8;
  pcStack_478 = pcVar4;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(pcVar7);
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
    pcVar2 = "true";
    if (iVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_4d8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_4c0,pcVar2);
    acStack_4f8[0] = '\0';
    acStack_4f8[1] = '\0';
    acStack_4f8[2] = '\0';
    acStack_4f8[3] = '\0';
    acStack_4f8[4] = '\0';
    acStack_4f8[5] = '\0';
    acStack_4f8[6] = '\0';
    acStack_4f8[7] = '\0';
    acStack_4f8[8] = '\0';
    acStack_4f8[9] = '\0';
    acStack_4f8[10] = '\0';
    acStack_4f8[0xb] = '\0';
    acStack_4f8[0xc] = '\0';
    acStack_4f8[0xd] = '\0';
    acStack_4f8[0xe] = '\0';
    acStack_4f8[0xf] = '\0';
    acStack_4f8[0x10] = '\0';
    acStack_4f8[0x11] = '\0';
    acStack_4f8[0x12] = '\0';
    acStack_4f8[0x13] = '\0';
    acStack_4f8[0x14] = '\0';
    acStack_4f8[0x15] = '\0';
    acStack_4f8[0x16] = '\0';
    acStack_4f8[0x17] = '\0';
    func_0x00010007e1e8(acStack_4f8,auStack_4d8,&lStack_4a8,2);
    pcVar3 = acStack_4f8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984cb8,pcVar3,uVar10);
    pcStack_4e0 = acStack_4f8;
    func_0x00010007e5dc(&pcStack_4e0);
    lVar12 = 0;
    do {
      if ((&cStack_4a9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4c0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_4c1 < '\0') {
    __ZdlPv(auStack_4d8[0]);
  }
  _objc_release(pcVar7);
  __Unwind_Resume(pcVar2);
  _objc_retain(pcVar3);
  pcVar7 = pcVar3;
  func_0x00010c0c6c20();
  puVar15 = (undefined *)0x0;
  iVar1 = (int)pcVar7;
  pcVar7 = pcVar3;
  pcVar6 = pcVar3;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar15 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar9 = pcVar3;
      func_0x00010bdc3540(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      func_0x00010bf6fd20(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar8;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar2);
      func_0x00010bf258e0(pcVar3);
      func_0x00010be801a0(pcVar2);
      func_0x00010c029680(puVar15);
      _objc_release(pcVar5);
      _objc_release(pcVar8);
      _objc_release(pcVar4);
      pcVar2 = pcVar9;
    }
    else if (iVar1 == 5) {
      puVar15 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar2 = pcVar3;
      func_0x00010bdc3540(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar15);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar7;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar15);
    }
LAB_106f48bcc:
    _objc_release(pcVar6);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar6;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar15);
      _objc_release(pcVar9);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar15 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar2 = pcVar3;
    func_0x00010bdc3540(pcVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar3);
    func_0x00010c029640(puVar15);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
LAB_106f48be0:
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106f479b0; end: 106f47bdf;  */

void FUN_106f479b0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_458 [24];
  char *pcStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  char *pcStack_3f8;
  undefined8 *puStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar9 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar9 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984ad8,pcVar9,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f47be0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar8 = pcVar9;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar3 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984b28,pcVar8,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106f47e10;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar7;
  pcVar6 = pcVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar9;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar6 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984b78,pcVar6,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106f48040;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar4;
  pcVar3 = pcVar6;
  uVar11 = uVar10;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar9 = "";
    unaff_x23 = acStack_278;
    pcVar3 = acStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984bc8,pcVar3,uVar10);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar12 = 0;
    puVar14 = auStack_258;
    uVar11 = uVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_106f48270;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar9;
  pcVar8 = pcVar3;
  uVar10 = uVar11;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar14;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar6;
  pcStack_298 = pcVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar3);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar2);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar7 = "";
    unaff_x23 = acStack_318;
    pcVar8 = acStack_318;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c18,pcVar8,uVar11);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar12 = 0;
    puVar14 = auStack_2f8;
    uVar10 = uVar11;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar9);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_328 = FUN_106f484a0;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar7;
  pcVar4 = pcVar8;
  uVar11 = uVar10;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar14;
  pcStack_348 = pcVar2;
  pcStack_340 = pcVar3;
  pcStack_338 = pcVar9;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar7);
  iVar1 = (int)pcVar5;
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = auStack_398;
    func_0x00010002b838(auStack_398,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_380,pcVar2);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
    puVar15 = &UNK_110984c68;
    unaff_x23 = acStack_3b8;
    pcVar4 = acStack_3b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c68,pcVar4,uVar10);
    pcStack_3a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar12 = 0;
    puVar14 = auStack_398;
    uVar11 = uVar10;
    do {
      if ((&cStack_369)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar12));
      }
      iVar1 = (int)puVar15;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_3c8 = FUN_106f486d0;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar4;
  puStack_400 = unaff_x24;
  pcStack_3f8 = unaff_x23;
  puStack_3f0 = puVar14;
  pcStack_3e8 = pcVar2;
  pcStack_3e0 = pcVar8;
  pcStack_3d8 = pcVar7;
  pppuStack_3d0 = &pppuStack_330;
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if (iVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_438,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_420,pcVar2);
    acStack_458[0] = '\0';
    acStack_458[1] = '\0';
    acStack_458[2] = '\0';
    acStack_458[3] = '\0';
    acStack_458[4] = '\0';
    acStack_458[5] = '\0';
    acStack_458[6] = '\0';
    acStack_458[7] = '\0';
    acStack_458[8] = '\0';
    acStack_458[9] = '\0';
    acStack_458[10] = '\0';
    acStack_458[0xb] = '\0';
    acStack_458[0xc] = '\0';
    acStack_458[0xd] = '\0';
    acStack_458[0xe] = '\0';
    acStack_458[0xf] = '\0';
    acStack_458[0x10] = '\0';
    acStack_458[0x11] = '\0';
    acStack_458[0x12] = '\0';
    acStack_458[0x13] = '\0';
    acStack_458[0x14] = '\0';
    acStack_458[0x15] = '\0';
    acStack_458[0x16] = '\0';
    acStack_458[0x17] = '\0';
    func_0x00010007e1e8(acStack_458,auStack_438,&lStack_408,2);
    pcVar9 = acStack_458;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984cb8,pcVar9,uVar11);
    pcStack_440 = acStack_458;
    func_0x00010007e5dc(&pcStack_440);
    lVar12 = 0;
    do {
      if ((&cStack_409)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(pcVar4);
  __Unwind_Resume(pcVar2);
  _objc_retain(pcVar9);
  pcVar3 = pcVar9;
  func_0x00010c0c6c20();
  puVar15 = (undefined *)0x0;
  iVar1 = (int)pcVar3;
  pcVar3 = pcVar9;
  pcVar7 = pcVar9;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar15 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar8 = pcVar9;
      func_0x00010bdc3540(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar9;
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar6;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar2);
      func_0x00010bf258e0(pcVar9);
      func_0x00010be801a0(pcVar2);
      func_0x00010c029680(puVar15);
      _objc_release(pcVar5);
      _objc_release(pcVar6);
      _objc_release(pcVar4);
      pcVar2 = pcVar8;
    }
    else if (iVar1 == 5) {
      puVar15 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar2 = pcVar9;
      func_0x00010bdc3540(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar15);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar3;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar15);
    }
LAB_106f48bcc:
    _objc_release(pcVar7);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar7;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar15);
      _objc_release(pcVar8);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar15 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar2 = pcVar9;
    func_0x00010bdc3540(pcVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar9);
    func_0x00010c029640(puVar15);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
LAB_106f48be0:
  _objc_release(pcVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106f47be0; end: 106f47e0f;  */

void FUN_106f47be0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_3b8 [24];
  char *pcStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  char *pcStack_358;
  undefined8 *puStack_350;
  char *pcStack_348;
  char *pcStack_340;
  char *pcStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar7 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar7 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984b28,pcVar7,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f47e10;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar6 = pcVar7;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar7);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar9 = "";
    unaff_x23 = acStack_138;
    pcVar6 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984b78,pcVar6,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106f48040;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar9;
  pcVar8 = pcVar6;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar9);
  _objc_retain(pcVar6);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar8 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984bc8,pcVar8,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar9);
  pcVar5 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106f48270;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar4;
  pcVar3 = pcVar8;
  uVar11 = uVar10;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar6;
  pcStack_1f8 = pcVar9;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar7 = "";
    unaff_x23 = acStack_278;
    pcVar3 = acStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c18,pcVar3,uVar10);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar12 = 0;
    puVar14 = auStack_258;
    uVar11 = uVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_106f484a0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar7;
  pcVar9 = pcVar3;
  uVar10 = uVar11;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar14;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar8;
  pcStack_298 = pcVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar7);
  iVar1 = (int)pcVar5;
  _objc_retain(pcVar3);
  puVar14 = (undefined8 *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = auStack_2f8;
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar2);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    puVar15 = &UNK_110984c68;
    unaff_x23 = acStack_318;
    pcVar9 = acStack_318;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c68,pcVar9,uVar11);
    pcStack_300 = unaff_x23;
    func_0x00010007e5dc(&pcStack_300);
    lVar12 = 0;
    puVar14 = auStack_2f8;
    uVar10 = uVar11;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      iVar1 = (int)puVar15;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar7);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  pcStack_328 = FUN_106f486d0;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar9;
  puStack_360 = unaff_x24;
  pcStack_358 = unaff_x23;
  puStack_350 = puVar14;
  pcStack_348 = pcVar2;
  pcStack_340 = pcVar3;
  pcStack_338 = pcVar7;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(pcVar9);
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    pcVar2 = "true";
    if (iVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_398,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_380,pcVar2);
    acStack_3b8[0] = '\0';
    acStack_3b8[1] = '\0';
    acStack_3b8[2] = '\0';
    acStack_3b8[3] = '\0';
    acStack_3b8[4] = '\0';
    acStack_3b8[5] = '\0';
    acStack_3b8[6] = '\0';
    acStack_3b8[7] = '\0';
    acStack_3b8[8] = '\0';
    acStack_3b8[9] = '\0';
    acStack_3b8[10] = '\0';
    acStack_3b8[0xb] = '\0';
    acStack_3b8[0xc] = '\0';
    acStack_3b8[0xd] = '\0';
    acStack_3b8[0xe] = '\0';
    acStack_3b8[0xf] = '\0';
    acStack_3b8[0x10] = '\0';
    acStack_3b8[0x11] = '\0';
    acStack_3b8[0x12] = '\0';
    acStack_3b8[0x13] = '\0';
    acStack_3b8[0x14] = '\0';
    acStack_3b8[0x15] = '\0';
    acStack_3b8[0x16] = '\0';
    acStack_3b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_3b8,auStack_398,&lStack_368,2);
    pcVar6 = acStack_3b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984cb8,pcVar6,uVar10);
    pcStack_3a0 = acStack_3b8;
    func_0x00010007e5dc(&pcStack_3a0);
    lVar12 = 0;
    do {
      if ((&cStack_369)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_380 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar2 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_381 < '\0') {
    __ZdlPv(auStack_398[0]);
  }
  _objc_release(pcVar9);
  __Unwind_Resume(pcVar2);
  _objc_retain(pcVar6);
  pcVar7 = pcVar6;
  func_0x00010c0c6c20();
  puVar15 = (undefined *)0x0;
  iVar1 = (int)pcVar7;
  pcVar7 = pcVar6;
  pcVar3 = pcVar6;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar15 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar9 = pcVar6;
      func_0x00010bdc3540(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar6;
      func_0x00010bf6fd20(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar8;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar2);
      func_0x00010bf258e0(pcVar6);
      func_0x00010be801a0(pcVar2);
      func_0x00010c029680(puVar15);
      _objc_release(pcVar5);
      _objc_release(pcVar8);
      _objc_release(pcVar4);
      pcVar2 = pcVar9;
    }
    else if (iVar1 == 5) {
      puVar15 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar2 = pcVar6;
      func_0x00010bdc3540(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar15);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar7;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar15);
    }
LAB_106f48bcc:
    _objc_release(pcVar3);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar6);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar3;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar15);
      _objc_release(pcVar9);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar15 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar2 = pcVar6;
    func_0x00010bdc3540(pcVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar6);
    func_0x00010c029640(puVar15);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
LAB_106f48be0:
  _objc_release(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106f47e10; end: 106f4803f;  */

void FUN_106f47e10(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_318 [24];
  char *pcStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  char *pcStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar7 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar7 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984b78,pcVar7,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f48040;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar2;
  pcVar9 = pcVar7;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar7);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar6 = "";
    unaff_x23 = acStack_138;
    pcVar9 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984bc8,pcVar9,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106f48270;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar6;
  pcVar8 = pcVar9;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar7;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = "";
    unaff_x23 = acStack_1d8;
    pcVar8 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c18,pcVar8,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar2 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106f484a0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar4;
  pcVar7 = pcVar8;
  uVar11 = uVar10;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar9;
  pcStack_1f8 = pcVar6;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  iVar1 = (int)pcVar5;
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    unaff_x24 = auStack_258;
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    puVar15 = &UNK_110984c68;
    unaff_x23 = acStack_278;
    pcVar7 = acStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c68,pcVar7,uVar10);
    pcStack_260 = unaff_x23;
    func_0x00010007e5dc(&pcStack_260);
    lVar12 = 0;
    puVar14 = auStack_258;
    uVar11 = uVar10;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      iVar1 = (int)puVar15;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar4);
  pcVar6 = pcVar2;
  __Unwind_Resume();
  pcStack_288 = FUN_106f486d0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar7;
  puStack_2c0 = unaff_x24;
  pcStack_2b8 = unaff_x23;
  puStack_2b0 = puVar14;
  pcStack_2a8 = pcVar2;
  pcStack_2a0 = pcVar8;
  pcStack_298 = pcVar4;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar7);
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
    pcVar2 = "true";
    if (iVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_2f8,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_2e0,pcVar2);
    acStack_318[0] = '\0';
    acStack_318[1] = '\0';
    acStack_318[2] = '\0';
    acStack_318[3] = '\0';
    acStack_318[4] = '\0';
    acStack_318[5] = '\0';
    acStack_318[6] = '\0';
    acStack_318[7] = '\0';
    acStack_318[8] = '\0';
    acStack_318[9] = '\0';
    acStack_318[10] = '\0';
    acStack_318[0xb] = '\0';
    acStack_318[0xc] = '\0';
    acStack_318[0xd] = '\0';
    acStack_318[0xe] = '\0';
    acStack_318[0xf] = '\0';
    acStack_318[0x10] = '\0';
    acStack_318[0x11] = '\0';
    acStack_318[0x12] = '\0';
    acStack_318[0x13] = '\0';
    acStack_318[0x14] = '\0';
    acStack_318[0x15] = '\0';
    acStack_318[0x16] = '\0';
    acStack_318[0x17] = '\0';
    func_0x00010007e1e8(acStack_318,auStack_2f8,&lStack_2c8,2);
    pcVar3 = acStack_318;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984cb8,pcVar3,uVar11);
    pcStack_300 = acStack_318;
    func_0x00010007e5dc(&pcStack_300);
    lVar12 = 0;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(pcVar7);
  __Unwind_Resume(pcVar2);
  _objc_retain(pcVar3);
  pcVar7 = pcVar3;
  func_0x00010c0c6c20();
  puVar15 = (undefined *)0x0;
  iVar1 = (int)pcVar7;
  pcVar7 = pcVar3;
  pcVar6 = pcVar3;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar15 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar9 = pcVar3;
      func_0x00010bdc3540(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      func_0x00010bf6fd20(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar8;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar2);
      func_0x00010bf258e0(pcVar3);
      func_0x00010be801a0(pcVar2);
      func_0x00010c029680(puVar15);
      _objc_release(pcVar5);
      _objc_release(pcVar8);
      _objc_release(pcVar4);
      pcVar2 = pcVar9;
    }
    else if (iVar1 == 5) {
      puVar15 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar2 = pcVar3;
      func_0x00010bdc3540(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar15);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar7;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar15);
    }
LAB_106f48bcc:
    _objc_release(pcVar6);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar6;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar15);
      _objc_release(pcVar9);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar15 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar2 = pcVar3;
    func_0x00010bdc3540(pcVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar3);
    func_0x00010c029640(puVar15);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar2);
LAB_106f48be0:
  _objc_release(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106f48040; end: 106f4826f;  */

void FUN_106f48040(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_278 [24];
  char *pcStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  char *pcStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar9 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar9 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984bc8,pcVar9,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f48270;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar2;
  pcVar8 = pcVar9;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  _objc_retain(pcVar9);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar3 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar7 = "";
    unaff_x23 = acStack_138;
    pcVar8 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c18,pcVar8,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar9);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106f484a0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar7;
  pcVar4 = pcVar8;
  uVar10 = uVar11;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar9;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar7);
  iVar1 = (int)pcVar6;
  _objc_retain(pcVar8);
  puVar14 = (undefined8 *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar2 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    puVar15 = &UNK_110984c68;
    unaff_x23 = acStack_1d8;
    pcVar4 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c68,pcVar4,uVar11);
    pcStack_1c0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    puVar14 = auStack_1b8;
    uVar10 = uVar11;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      iVar1 = (int)puVar15;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar2 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar7);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_106f486d0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar4;
  puStack_220 = unaff_x24;
  pcStack_218 = unaff_x23;
  puStack_210 = puVar14;
  pcStack_208 = pcVar2;
  pcStack_200 = pcVar8;
  pcStack_1f8 = pcVar7;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar4);
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    pcVar2 = "true";
    if (iVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_258,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_240,pcVar2);
    acStack_278[0] = '\0';
    acStack_278[1] = '\0';
    acStack_278[2] = '\0';
    acStack_278[3] = '\0';
    acStack_278[4] = '\0';
    acStack_278[5] = '\0';
    acStack_278[6] = '\0';
    acStack_278[7] = '\0';
    acStack_278[8] = '\0';
    acStack_278[9] = '\0';
    acStack_278[10] = '\0';
    acStack_278[0xb] = '\0';
    acStack_278[0xc] = '\0';
    acStack_278[0xd] = '\0';
    acStack_278[0xe] = '\0';
    acStack_278[0xf] = '\0';
    acStack_278[0x10] = '\0';
    acStack_278[0x11] = '\0';
    acStack_278[0x12] = '\0';
    acStack_278[0x13] = '\0';
    acStack_278[0x14] = '\0';
    acStack_278[0x15] = '\0';
    acStack_278[0x16] = '\0';
    acStack_278[0x17] = '\0';
    func_0x00010007e1e8(acStack_278,auStack_258,&lStack_228,2);
    pcVar9 = acStack_278;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984cb8,pcVar9,uVar10);
    pcStack_260 = acStack_278;
    func_0x00010007e5dc(&pcStack_260);
    lVar12 = 0;
    do {
      if ((&cStack_229)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(pcVar4);
  __Unwind_Resume(pcVar2);
  _objc_retain(pcVar9);
  pcVar3 = pcVar9;
  func_0x00010c0c6c20();
  puVar15 = (undefined *)0x0;
  iVar1 = (int)pcVar3;
  pcVar3 = pcVar9;
  pcVar7 = pcVar9;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar15 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar8 = pcVar9;
      func_0x00010bdc3540(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar9;
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar2);
      func_0x00010bf258e0(pcVar9);
      func_0x00010be801a0(pcVar2);
      func_0x00010c029680(puVar15);
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      pcVar2 = pcVar8;
    }
    else if (iVar1 == 5) {
      puVar15 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar2 = pcVar9;
      func_0x00010bdc3540(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar15);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar3;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar15);
    }
LAB_106f48bcc:
    _objc_release(pcVar7);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar7;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar15);
      _objc_release(pcVar8);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar15 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar2 = pcVar9;
    func_0x00010bdc3540(pcVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar9);
    func_0x00010c029640(puVar15);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar2);
LAB_106f48be0:
  _objc_release(pcVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106f48270; end: 106f4849f;  */

void FUN_106f48270(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_1d8 [24];
  char *pcStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  char *pcStack_178;
  undefined8 *puStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_2;
  pcVar6 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar14 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = "";
    unaff_x23 = acStack_98;
    pcVar6 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c18,pcVar6,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    puVar14 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f484a0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar9 = pcVar6;
  uVar11 = uVar10;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar14;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  iVar1 = (int)pcVar5;
  _objc_retain(pcVar6);
  puVar14 = (undefined8 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar13 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar3 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    puVar15 = &UNK_110984c68;
    unaff_x23 = acStack_138;
    pcVar9 = acStack_138;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984c68,pcVar9,uVar10);
    pcStack_120 = unaff_x23;
    func_0x00010007e5dc(&pcStack_120);
    lVar12 = 0;
    puVar14 = auStack_118;
    uVar11 = uVar10;
    do {
      if ((&cStack_e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar12));
      }
      iVar1 = (int)puVar15;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
  pcVar5 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_106f486d0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar9;
  puStack_180 = unaff_x24;
  pcStack_178 = unaff_x23;
  puStack_170 = puVar14;
  pcStack_168 = pcVar3;
  pcStack_160 = pcVar6;
  pcStack_158 = pcVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar9);
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    pcVar2 = "true";
    if (iVar1 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_1b8,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_1a0,pcVar2);
    acStack_1d8[0] = '\0';
    acStack_1d8[1] = '\0';
    acStack_1d8[2] = '\0';
    acStack_1d8[3] = '\0';
    acStack_1d8[4] = '\0';
    acStack_1d8[5] = '\0';
    acStack_1d8[6] = '\0';
    acStack_1d8[7] = '\0';
    acStack_1d8[8] = '\0';
    acStack_1d8[9] = '\0';
    acStack_1d8[10] = '\0';
    acStack_1d8[0xb] = '\0';
    acStack_1d8[0xc] = '\0';
    acStack_1d8[0xd] = '\0';
    acStack_1d8[0xe] = '\0';
    acStack_1d8[0xf] = '\0';
    acStack_1d8[0x10] = '\0';
    acStack_1d8[0x11] = '\0';
    acStack_1d8[0x12] = '\0';
    acStack_1d8[0x13] = '\0';
    acStack_1d8[0x14] = '\0';
    acStack_1d8[0x15] = '\0';
    acStack_1d8[0x16] = '\0';
    acStack_1d8[0x17] = '\0';
    func_0x00010007e1e8(acStack_1d8,auStack_1b8,&lStack_188,2);
    pcVar4 = acStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_110984cb8,pcVar4,uVar11);
    pcStack_1c0 = acStack_1d8;
    func_0x00010007e5dc(&pcStack_1c0);
    lVar12 = 0;
    do {
      if ((&cStack_189)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  pcVar2 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(pcVar9);
  __Unwind_Resume(pcVar2);
  _objc_retain(pcVar4);
  pcVar6 = pcVar4;
  func_0x00010c0c6c20();
  puVar15 = (undefined *)0x0;
  iVar1 = (int)pcVar6;
  pcVar6 = pcVar4;
  pcVar3 = pcVar4;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar15 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar9 = pcVar4;
      func_0x00010bdc3540(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      func_0x00010bf6fd20(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar5;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar7;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar2);
      func_0x00010bf258e0(pcVar4);
      func_0x00010be801a0(pcVar2);
      func_0x00010c029680(puVar15);
      _objc_release(pcVar8);
      _objc_release(pcVar7);
      _objc_release(pcVar5);
      pcVar2 = pcVar9;
    }
    else if (iVar1 == 5) {
      puVar15 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar2 = pcVar4;
      func_0x00010bdc3540(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar15);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar6;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar15);
    }
LAB_106f48bcc:
    _objc_release(pcVar3);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar15 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar3;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar15);
      _objc_release(pcVar9);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar15 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar2 = pcVar4;
    func_0x00010bdc3540(pcVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar4);
    func_0x00010c029640(puVar15);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar2);
LAB_106f48be0:
  _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106f484a0; end: 106f486cf;  */

void FUN_106f484a0(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char acStack_138 [24];
  char *pcStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = param_2;
  pcVar2 = param_3;
  uVar10 = param_4;
  _objc_retain(param_2);
  iVar1 = (int)pcVar3;
  _objc_retain(param_3);
  puVar13 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    puVar14 = &UNK_110984c68;
    unaff_x23 = acStack_98;
    pcVar2 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110984c68,pcVar2,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    puVar13 = auStack_78;
    uVar10 = param_4;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      iVar1 = (int)puVar14;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_106f486d0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar13;
  pcStack_c8 = pcVar3;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    pcVar3 = "true";
    if (iVar1 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_118,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_100,pcVar3);
    acStack_138[0] = '\0';
    acStack_138[1] = '\0';
    acStack_138[2] = '\0';
    acStack_138[3] = '\0';
    acStack_138[4] = '\0';
    acStack_138[5] = '\0';
    acStack_138[6] = '\0';
    acStack_138[7] = '\0';
    acStack_138[8] = '\0';
    acStack_138[9] = '\0';
    acStack_138[10] = '\0';
    acStack_138[0xb] = '\0';
    acStack_138[0xc] = '\0';
    acStack_138[0xd] = '\0';
    acStack_138[0xe] = '\0';
    acStack_138[0xf] = '\0';
    acStack_138[0x10] = '\0';
    acStack_138[0x11] = '\0';
    acStack_138[0x12] = '\0';
    acStack_138[0x13] = '\0';
    acStack_138[0x14] = '\0';
    acStack_138[0x15] = '\0';
    acStack_138[0x16] = '\0';
    acStack_138[0x17] = '\0';
    func_0x00010007e1e8(acStack_138,auStack_118,&lStack_e8,2);
    pcVar9 = acStack_138;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110984cb8,pcVar9,uVar10);
    pcStack_120 = acStack_138;
    func_0x00010007e5dc(&pcStack_120);
    lVar11 = 0;
    do {
      if ((&cStack_e9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(pcVar2);
  __Unwind_Resume(pcVar3);
  _objc_retain(pcVar9);
  pcVar2 = pcVar9;
  func_0x00010c0c6c20();
  puVar14 = (undefined *)0x0;
  iVar1 = (int)pcVar2;
  pcVar2 = pcVar9;
  pcVar4 = pcVar9;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar14 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar8 = pcVar9;
      func_0x00010bdc3540(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar9;
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar3);
      func_0x00010bf258e0(pcVar9);
      func_0x00010be801a0(pcVar3);
      func_0x00010c029680(puVar14);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      pcVar3 = pcVar8;
    }
    else if (iVar1 == 5) {
      puVar14 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar3 = pcVar9;
      func_0x00010bdc3540(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar14);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar14);
    }
LAB_106f48bcc:
    _objc_release(pcVar4);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar14 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar9);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar14);
      _objc_release(pcVar8);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar14 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar3 = pcVar9;
    func_0x00010bdc3540(pcVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar9);
    func_0x00010c029640(puVar14);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar3);
LAB_106f48be0:
  _objc_release(pcVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 106f486d0; end: 106f488bb;  */

void FUN_106f486d0(long param_1,int param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    pcVar2 = "true";
    if (param_2 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110984cb8,pcVar2,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  pcVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  __Unwind_Resume(pcVar3);
  _objc_retain(pcVar2);
  pcVar4 = pcVar2;
  func_0x00010c0c6c20();
  puVar12 = (undefined *)0x0;
  iVar1 = (int)pcVar4;
  pcVar4 = pcVar2;
  pcVar8 = pcVar2;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar12 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      pcVar9 = pcVar2;
      func_0x00010bdc3540(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar2;
      func_0x00010bf6fd20(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = pcVar6;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(pcVar3);
      func_0x00010bf258e0(pcVar2);
      func_0x00010be801a0(pcVar3);
      func_0x00010c029680(puVar12);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      _objc_release(pcVar5);
      pcVar3 = pcVar9;
    }
    else if (iVar1 == 5) {
      puVar12 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      pcVar3 = pcVar2;
      func_0x00010bdc3540(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar12);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar4;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar12);
    }
LAB_106f48bcc:
    _objc_release(pcVar8);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar12 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar9 = pcVar8;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar12);
      _objc_release(pcVar9);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar12 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    pcVar3 = pcVar2;
    func_0x00010bdc3540(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(pcVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(pcVar2);
    func_0x00010c029640(puVar12);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar3);
LAB_106f48be0:
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106f488bc; end: 106f48c07; +[SCSpectaclesAssetMetadata assetMetadataForContent:] */

void FUN_106f488bc(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c0c6c20();
  puVar9 = (undefined *)0x0;
  iVar1 = (int)puVar2;
  puVar2 = param_3;
  puVar7 = param_3;
  if (iVar1 < 10) {
    if (iVar1 - 7U < 2) {
      puVar9 = PTR_PTR_1126d34f8;
      _objc_alloc(PTR_PTR_1126d34f8);
      puVar8 = param_3;
      func_0x00010bdc3540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(param_3,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf27c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(param_1);
      puVar6 = param_3;
      func_0x00010bf258e0(param_3);
      func_0x00010be801a0(param_1,param_2,puVar6);
      func_0x00010c029680(puVar9,param_2,puVar8,puVar2,puVar7,puVar5,param_1);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      param_1 = puVar8;
    }
    else if (iVar1 == 5) {
      puVar9 = PTR_PTR_1126d3500;
      _objc_alloc(PTR_PTR_1126d3500);
      param_1 = param_3;
      func_0x00010bdc3540(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1202e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63a60(param_3,param_2,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029660(puVar9,param_2,param_1,puVar2,puVar7);
    }
    else {
      if (iVar1 != 9) goto LAB_106f48be0;
      func_0x00010be85e60(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01c660(puVar9,param_2,param_1,puVar7);
    }
LAB_106f48bcc:
    _objc_release(puVar7);
  }
  else {
    if (iVar1 == 10) {
      func_0x00010be85e60(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c0082a0();
      puVar9 = PTR_PTR_1126d3508;
      _objc_alloc(PTR_PTR_1126d3508);
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c15e740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff42c0(puVar9,param_2,puVar2,puVar8);
      _objc_release(puVar8);
      goto LAB_106f48bcc;
    }
    if ((iVar1 != 0xb) && (iVar1 != 0xc)) goto LAB_106f48be0;
    puVar9 = PTR_PTR_1126d3510;
    _objc_alloc(PTR_PTR_1126d3510);
    param_1 = param_3;
    func_0x00010bdc3540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1202e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2960(param_3);
    func_0x00010c029640(puVar9,param_2,param_1,puVar2,puVar7);
  }
  _objc_release(puVar2);
  _objc_release(param_1);
LAB_106f48be0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106f48c08; end: 106f48c17; +[SCSpectaclesAssetMetadata _primaryCameraForButtonSide:] */

undefined8 FUN_106f48c08(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 != 2) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106f48c18; end: 106f48cab; +[SCSpectaclesAssetMetadata _rawMediaDataForContent:] */

void FUN_106f48c18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfc0e20(param_3,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010c137620(param_3);
    func_0x00010bf63a60(param_3,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf63ae0(param_3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106f48cac; end: 106f48d8b; -[SCSpectaclesAssetMetadata initWithAsset:serialNumber:] */

undefined8
FUN_106f48cac(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b0010;
  if (param_3 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uStack_38 = 0;
    _objc_retain(param_4);
    func_0x00010c266c80(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantArray_111181418,param_3,
                        &uStack_38);
    if ((int)puVar1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    }
    else {
      puVar1 = param_3;
      func_0x00010c0cc0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bff5e00(param_1,param_2,puVar1,param_4);
    _objc_release(param_4);
    _objc_retain(param_1);
    _objc_release(puVar1);
    uVar2 = param_1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f48d8c; end: 106f48e33; -[SCSpectaclesAssetMetadata initWithImageData:serialNumber:] */

undefined8 FUN_106f48d8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _CGImageSourceCreateWithData(param_3,0);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_3;
    _CGImageSourceCopyMetadataAtIndex();
    _CFRelease(param_3);
    uVar2 = 0;
    if (lVar1 != 0) {
      func_0x00010c01cb20(param_1);
      _CFRelease(lVar1);
      _objc_retain(param_1);
      uVar2 = param_1;
    }
  }
  _objc_release(param_4);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106f48e34; end: 106f48e9f; -[SCSpectaclesAssetMetadata initWithAvMetadataItems:serialNumber:] */

void FUN_106f48e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
  _objc_retain(param_5);
  _objc_retain(uVar6);
  _objc_retain(uVar5);
  _objc_alloc_init(puVar1);
  func_0x00010c1b6b40();
  _objc_release(uVar5);
  func_0x00010c1b6ce0(puVar1);
  puVar4 = PTR__OBJC_CLASS___AVMetadataItem_1126d3520;
  puVar2 = puVar1;
  func_0x00010c086560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c086a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ee0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99e0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c189920(puVar1);
  _objc_release(param_5);
  func_0x00010c220160(puVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f48ea0; end: 106f48fbf; -[SCSpectaclesAssetMetadata _itemWithKey:value:type:] */

void FUN_106f48ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___AVMutableMetadataItem_1126d3518;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1b6b40();
  _objc_release(param_3);
  func_0x00010c1b6ce0(puVar1,param_2,
                      *(undefined8 *)PTR__AVMetadataKeySpaceQuickTimeMetadata_1103480b0);
  puVar4 = PTR__OBJC_CLASS___AVMetadataItem_1126d3520;
  puVar2 = puVar1;
  func_0x00010c086560(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c086a80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ee0(puVar4,param_2,puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99e0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c189920(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c220160(puVar1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f48fc0; end: 106f49013; -[SCSpectaclesAssetMetadata avMetadataItems] */

void FUN_106f48fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _CGImageMetadataCopyStringValueWithPath(param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f49014; end: 106f4902f; -[SCSpectaclesAssetMetadata _valueForPath:metadata:] */

void FUN_106f49014(void)

{
  undefined8 in_x3;
  
  _CGImageMetadataCopyStringValueWithPath(in_x3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f49030; end: 106f4908f; -[SCSpectaclesAssetMetadata initWithImageMetadata:serialNumber:] */

undefined *
FUN_106f49030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  
  uVar2 = param_2;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  puVar4 = puVar1;
  _CGImageMetadataCreateMutable();
  puVar3 = puVar4;
  _CGImageMetadataRegisterNamespaceForPrefix();
  if (((ulong)puVar3 & 1) == 0) {
    if (puVar4 != (undefined *)0x0) {
      _CFRelease(puVar4);
    }
    _objc_release(uStack_68);
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010bdc7120(puVar1);
  }
  return puVar4;
}



/* Entry: 106f49090; end: 106f490e3; -[SCSpectaclesAssetMetadata _addImageMetadata:] */

undefined * FUN_106f49090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  puVar3 = puVar1;
  _CGImageMetadataCreateMutable();
  puVar2 = puVar3;
  _CGImageMetadataRegisterNamespaceForPrefix();
  if (((ulong)puVar2 & 1) == 0) {
    if (puVar3 != (undefined *)0x0) {
      _CFRelease(puVar3);
    }
    _objc_release(uStack_48);
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bdc7120(puVar1);
  }
  return puVar3;
}



/* Entry: 106f490e4; end: 106f49153; -[SCSpectaclesAssetMetadata _createImageMetadata] */

ulong FUN_106f490e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  _CGImageMetadataCreateMutable();
  uVar1 = uVar2;
  _CGImageMetadataRegisterNamespaceForPrefix();
  if ((uVar1 & 1) == 0) {
    if (uVar2 != 0) {
      _CFRelease(uVar2);
    }
    _objc_release(uStack_28);
    uVar2 = 0;
  }
  else {
    func_0x00010bdc7120(param_1);
  }
  return uVar2;
}



/* Entry: 106f49154; end: 106f492cb; -[SCSpectaclesAssetMetadata imageDataWithJPEGData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f49154(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar8 = &uStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bdee9e0();
  puVar10 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  _CGImageSourceCreateWithData(param_3,0);
  _objc_release(param_3);
  lVar5 = *(long *)PTR__kUTTypeJPEG_11034b1d8;
  puVar7 = (undefined1 *)0x0;
  puVar2 = puVar10;
  _CGImageDestinationCreateWithData(puVar10,lVar5,1);
  if ((puVar2 == (undefined *)0x0 || lVar1 == 0) || param_1 == 0) {
    if (lVar1 == 0) goto joined_r0x000106f492c0;
  }
  else {
    uStack_58 = *(undefined8 *)PTR__kCGImageDestinationMetadata_110349c88;
    param_5 = 1;
    unaff_x23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_50 = param_1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uStack_60 = 0;
    puVar3 = puVar2;
    lVar5 = lVar1;
    _CGImageDestinationCopyImageSource(puVar2,lVar1,unaff_x23);
    uVar9 = uStack_60;
    puVar7 = (undefined1 *)puVar8;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_release(puVar10);
      _objc_release(uVar9);
      puVar10 = (undefined *)0x0;
      puVar7 = (undefined1 *)puVar8;
      unaff_x24 = uVar9;
    }
    _objc_release(unaff_x23);
  }
  _CFRelease(lVar1);
joined_r0x000106f492c0:
  if (puVar2 != (undefined *)0x0) {
    _CFRelease(puVar2);
  }
  if (param_1 != 0) {
    _CFRelease(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
    pcStack_68 = FUN_106f492cc;
    puStack_80 = puVar10;
    lStack_78 = param_1;
    puStack_70 = &stack0xfffffffffffffff0;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2803a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_release(lVar5);
    puVar10 = puVar3;
    _objc_exception_throw();
    ppuVar4 = &puStack_d0;
    pcStack_88 = FUN_106f49320;
    uStack_c0 = unaff_x24;
    puStack_b8 = unaff_x23;
    puStack_b0 = puVar2;
    lStack_a8 = lVar1;
    lStack_a0 = lVar5;
    puStack_98 = puVar3;
    ppuStack_90 = &puStack_70;
    _objc_retain(lVar6);
    _objc_retain(puVar7);
    puStack_c8 = PTR_PTR_1126f7e58;
    puStack_d0 = puVar10;
    _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
    if (ppuVar4 != (undefined **)0x0) {
      lVar5 = lVar6;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)((long)ppuVar4 + (long)_DAT_112761780);
      *(long *)((long)ppuVar4 + (long)_DAT_112761780) = lVar5;
      _objc_release(uVar9);
      lVar5 = (long)_DAT_112761784;
      _objc_retain(puVar7);
      uVar9 = *(undefined8 *)((long)ppuVar4 + lVar5);
      *(undefined1 **)((long)ppuVar4 + lVar5) = puVar7;
      _objc_release(uVar9);
      *(undefined8 *)((long)ppuVar4 + (long)_DAT_112761788) = param_5;
    }
    _objc_release(puVar7);
    _objc_release(lVar6);
    return (undefined1 *)ppuVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 106f492cc; end: 106f4931f; -[SCSpectaclesAssetMetadata isCorrupt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f492cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  ppuVar2 = &puStack_70;
  _objc_retain(uVar4);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126f7e58;
  puStack_70 = puVar1;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    uVar3 = uVar4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)ppuVar2 + (long)_DAT_112761780);
    *(undefined8 *)((long)ppuVar2 + (long)_DAT_112761780) = uVar3;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112761784;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)ppuVar2 + lVar6);
    *(undefined8 *)((long)ppuVar2 + lVar6) = param_4;
    _objc_release(uVar3);
    *(undefined8 *)((long)ppuVar2 + (long)_DAT_112761788) = param_5;
  }
  _objc_release(param_4);
  _objc_release(uVar4);
  return (undefined1 *)ppuVar2;
}



/* Entry: 106f49320; end: 106f493eb; -[SCSpectaclesAssetMetadataCheerios initWithMediaId:metadata:flightMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f49320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f7e58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112761780);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112761780) = uVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112761784;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112761788) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f493ec; end: 106f49403; -[SCSpectaclesAssetMetadataCheerios isCorrupt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106f493ec(long param_1)

{
  return *(long *)(param_1 + _DAT_112761788) == 0;
}



/* Entry: 106f49404; end: 106f496cf; -[SCSpectaclesAssetMetadataCheerios initWithAvMetadataItems:serialNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f49404(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uStack_148;
  undefined8 uStack_138;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  if (lVar1 == 0) {
    uVar12 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
  }
  else {
    uVar12 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    do {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lVar14 * 8);
        uVar2 = uVar11;
        func_0x00010c086a80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((int)uVar3 != 0) {
          uVar2 = uVar11;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c071ae0();
          _objc_release(uVar2);
          if ((int)uVar3 == 0) {
            uVar2 = uVar11;
            func_0x00010c086560();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c071ae0();
            _objc_release(uVar2);
            if ((int)uVar3 == 0) {
              uVar2 = uVar11;
              func_0x00010c086560();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              func_0x00010c071ae0();
              _objc_release(uVar2);
              if ((int)uVar3 == 0) goto LAB_106f495fc;
              func_0x00010c0df6a0();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uStack_148;
              uStack_148 = uVar11;
            }
            else {
              func_0x00010bf64960();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uStack_138;
              uStack_138 = uVar11;
            }
          }
          else {
            func_0x00010c25d700();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar12;
            uVar12 = uVar11;
          }
          _objc_release(uVar2);
        }
LAB_106f495fc:
        lVar14 = lVar14 + 1;
      } while (lVar1 != lVar14);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  func_0x00010c2827c0(uStack_148);
  func_0x00010c029640();
  _objc_retain();
  _objc_release(uStack_148);
  _objc_release(uStack_138);
  _objc_release(uVar12);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = *(undefined **)(param_3 + _DAT_112761780);
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46120();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar6 = puVar4;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c067fc0();
    puVar13 = (undefined *)0x0;
    if (puVar9 != (undefined *)0x0) {
      if (puVar7 == (undefined *)0x0) {
        func_0x00010c029640(puVar4);
        _objc_retain();
        puVar13 = puVar4;
      }
      else {
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029640(puVar4);
        _objc_retain();
        _objc_release(puVar9);
        puVar13 = puVar4;
      }
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    return puVar13;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return puVar7;
}



/* Entry: 106f496d0; end: 106f49863; -[SCSpectaclesAssetMetadataCheerios avMetadataItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f496d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar9 = &lStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + _DAT_112761780);
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8ef18,puVar1,
                      *(undefined8 *)PTR__kCMMetadataBaseDataType_UTF8_1103485c0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_60 = lVar2;
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8ef38,
                      *(undefined8 *)(param_1 + _DAT_112761784),
                      *(undefined8 *)PTR__kCMMetadataBaseDataType_RawData_1103485b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_58 = lVar3;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112761788));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be46120(param_1,param_2,&PTR____CFConstantStringClassReference_110e8eff8,puVar4,
                      *(undefined8 *)PTR__kCMMetadataBaseDataType_UInt8_1103485b8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar4 = puVar1;
    func_0x00010bee7e80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bee7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f078,plVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bee7e80(puVar1,param_2,&PTR____CFConstantStringClassReference_110e8f0f8,plVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c067fc0();
    puVar8 = (undefined *)0x0;
    if (puVar7 != (undefined *)0x0) {
      if (puVar5 == (undefined *)0x0) {
        func_0x00010c029640(puVar1,param_2,puVar4,0,puVar7);
        _objc_retain();
        puVar8 = puVar1;
      }
      else {
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c029640(puVar1,param_2,puVar4,puVar8,puVar7);
        _objc_retain();
        _objc_release(puVar8);
        puVar8 = puVar1;
      }
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    return puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 106f49864; end: 106f49993; -[SCSpectaclesAssetMetadataCheerios initWithImageMetadata:serialNumber:] */

long FUN_106f49864(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f058,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f078,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bee7e80(param_1,param_2,&PTR____CFConstantStringClassReference_110e8f0f8,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c067fc0();
  lVar6 = 0;
  if (lVar4 != 0) {
    if (lVar2 == 0) {
      func_0x00010c029640(param_1,param_2,lVar1,0,lVar4);
      _objc_retain();
      lVar6 = param_1;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029640(param_1,param_2,lVar1,puVar5,lVar4);
      _objc_retain();
      _objc_release(puVar5);
      lVar6 = param_1;
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar6;
}



/* Entry: 106f49994; end: 106f49a67; -[SCSpectaclesAssetMetadataCheerios _addImageMetadata:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f49994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761780);
  func_0x00010c28ed80(uVar1);
  _CGImageMetadataSetValueWithPath(param_3,0,&PTR____CFConstantStringClassReference_110e8f058,uVar1)
  ;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112761784);
  func_0x00010bf15da0(uVar1);
  _CGImageMetadataSetValueWithPath(param_3,0,&PTR____CFConstantStringClassReference_110e8f078,uVar1)
  ;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _CGImageMetadataSetValueWithPath
            (param_3,0,&PTR____CFConstantStringClassReference_110e8f0f8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f49a68; end: 106f49a77; -[SCSpectaclesAssetMetadataCheerios mediaId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f49a68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761780);
}


