/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f421b0; end: 108f421c3;  */

void FUN_108f421b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e2c0f8,0,0);
  return;
}



/* Entry: 108f421c4; end: 108f421eb;  */

long FUN_108f421c4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a338,0xffffffff,0)
  ;
  return (long)(int)param_1;
}



/* Entry: 108f421ec; end: 108f42233;  */

undefined8 FUN_108f421ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a358,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f42234; end: 108f42247;  */

void FUN_108f42234(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0a378,0,0);
  return;
}



/* Entry: 108f42248; end: 108f42363;  */

bool FUN_108f42248(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0a398,0,0);
  _objc_release(param_1);
  return (int)uVar1 != 0;
}



/* Entry: 108f42364; end: 108f423af;  */

undefined8 FUN_108f42364(void)

{
  return 0;
}



/* Entry: 108f423b0; end: 108f4242b; +[SCStoriesVOperaV2IOSConfig descriptor] */

undefined * FUN_108f423b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9420,
                        &PTR____CFConstantStringClassReference_110f0a418,&PTR_DAT_1132b0750,
                        &PTR_DAT_1132b0768,0x16,0x10,0x1c);
    func_0x00010c2289e0();
    puRam0000000113730318 = puVar1;
  }
  return puRam0000000113730318;
}



/* Entry: 108f4242c; end: 108f4262f;  */

void FUN_108f4242c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108f42630;
  uStack_40 = 0x108f42640;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108f42630;
  uStack_70 = 0x108f42640;
  uStack_68 = 0;
  func_0x00010c0bee40(param_1);
  puVar1 = PTR_PTR_1126b3558;
  _objc_alloc(PTR_PTR_1126b3558);
  func_0x00010c03d4e0();
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f42630; end: 108f42647;  */

void FUN_108f42630(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f42648; end: 108f42747;  */

void FUN_108f42648(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_4 < 3) {
    puVar3 = (undefined8 *)(&PTR_PTR_110acd7e8)[param_4];
    uVar2 = *(undefined8 *)(&PTR_PTR_110acd7d0)[param_4];
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar1);
    uVar2 = *puVar3;
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(uVar2);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f42748; end: 108f42953;  */

void FUN_108f42748(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110f52d58);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined ***)(lVar1 + 0x28) = &PTR____CFConstantStringClassReference_110f52d58;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f42954; end: 108f429d3;  */

void FUN_108f42954(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_108f4242c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c122b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f429d4; end: 108f42a4f;  */

void FUN_108f429d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(&PTR____CFConstantStringClassReference_110f52ef8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined ***)(lVar1 + 0x28) = &PTR____CFConstantStringClassReference_110f52ef8;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f42a50; end: 108f42c97;  */

void FUN_108f42a50(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108f42630;
  uStack_40 = 0x108f42640;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108f42630;
  uStack_70 = 0x108f42640;
  uStack_68 = 0;
  func_0x00010c0bee40(param_1);
  puVar1 = PTR_PTR_1126b3560;
  _objc_alloc(PTR_PTR_1126b3560);
  uVar2 = param_1;
  FUN_108f4242c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bce0(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b3568;
  _objc_alloc(PTR_PTR_1126b3568);
  func_0x00010c03d400();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f42c98; end: 108f42d23;  */

void FUN_108f42c98(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x7;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = in_x7;
  _objc_retain();
  func_0x000108f5923c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = in_x7;
  func_0x00010bf62820();
  _objc_release(in_x7);
  FUN_108f42d24();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f42d24; end: 108f42d8f;  */

void FUN_108f42d24(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126dc9d0);
    func_0x00010c0080a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f42d90; end: 108f42e63;  */

void FUN_108f42d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  char in_stack_00000018;
  
  _objc_retain(param_3);
  if (in_stack_00000018 == '\0') {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    _objc_retain(in_stack_00000008);
  }
  else {
    uVar2 = in_stack_00000008;
    _objc_retain();
    func_0x000108f591dc();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
  }
  _objc_release(uVar3);
  uVar3 = in_stack_00000008;
  func_0x00010bf62820();
  _objc_release(in_stack_00000008);
  FUN_108f42d24();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f42e64; end: 108f42eff;  */

void FUN_108f42e64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000000;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_retain(in_stack_00000000);
  _objc_release(uVar3);
  uVar3 = in_stack_00000000;
  func_0x00010bf62820();
  _objc_release(in_stack_00000000);
  FUN_108f42d24();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f42f00; end: 108f42f73;  */

void FUN_108f42f00(long param_1)

{
  undefined8 uVar1;
  undefined8 in_x5;
  long lVar2;
  
  _objc_retain(in_x5);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = in_x5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f42f74; end: 108f4353f;  */

void FUN_108f42f74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_3;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_6 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_3;
  }
  else {
    func_0x000108f57dfc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc7218);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f43540; end: 108f435c7;  */

ulong FUN_108f43540(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010befcf80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126dc9d0;
  _objc_opt_class(PTR_PTR_1126dc9d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf62820(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108f435c8; end: 108f4363b; -[SCSelectionMyStoryAdditionalData initWithCoder:] */

undefined1 * FUN_108f435c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff4a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f4363c; end: 108f43683; -[SCSelectionMyStoryAdditionalData initWithCustomTTL:] */

void FUN_108f4363c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff4a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108f43684; end: 108f436a7; -[SCSelectionMyStoryAdditionalData copyWithZone:] */

undefined8 FUN_108f43684(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f436a8; end: 108f436bf; -[SCSelectionMyStoryAdditionalData encodeWithCoder:] */

void FUN_108f436a8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_encodeInteger_forKey__1125c2598,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f0a438);
  return;
}



/* Entry: 108f436c0; end: 108f436cf; -[SCSelectionMyStoryAdditionalData hash] */

long FUN_108f436c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 108f436d0; end: 108f43757; -[SCSelectionMyStoryAdditionalData isEqual:] */

bool FUN_108f436d0(ulong param_1,undefined8 param_2,ulong param_3)

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



/* Entry: 108f43758; end: 108f4375f; -[SCSelectionMyStoryAdditionalData customTTL] */

undefined8 FUN_108f43758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f43760; end: 108f43c57; -[SCSelectionStoryCarouselCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108f43760(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_1b0 [8];
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puStack_80 = PTR_PTR_1126ff4b0;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126dc9d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfc8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfc8) = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108f43c58;
    puStack_a0 = &UNK_110acd830;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfcc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfcc) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x108f43c98;
    puStack_c8 = &UNK_110858d90;
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfd0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfd0) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    puStack_108 = puVar2;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x108f43cd8;
    puStack_f0 = &UNK_110acd860;
    _objc_copyWeak(auStack_e8,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfd4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfd4) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    puStack_130 = puVar2;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x108f43d18;
    puStack_118 = &UNK_110acd890;
    _objc_copyWeak(auStack_110,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfd8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfd8) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfdc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfdc) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    puStack_158 = puVar2;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_108f43d74;
    puStack_140 = &UNK_110912388;
    _objc_copyWeak(auStack_138,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfe0);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfe0) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    puStack_180 = puVar2;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x108f43db4;
    puStack_168 = &UNK_110912388;
    _objc_copyWeak(auStack_160,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfe4);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfe4) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126ae720;
    puStack_1a8 = puVar2;
    uStack_1a0 = 0xc2000000;
    uStack_198 = 0x108f43df4;
    puStack_190 = &UNK_11085c2d0;
    _objc_copyWeak(auStack_188,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfe8);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfe8) = puVar3;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_1b0,auStack_90);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277dfec);
    *(undefined **)((long)puVar1 + (long)_DAT_11277dfec) = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_1b0);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  return puVar1;
}



/* Entry: 108f43c58; end: 108f43d57;  */

void FUN_108f43c58(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd1ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f43d58; end: 108f43d73;  */

void FUN_108f43d58(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___UIImageView_1126aec28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f43d74; end: 108f43e73;  */

void FUN_108f43d74(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010becc520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108f43e74; end: 108f4439b; -[SCSelectionStoryCarouselCollectionViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f43e74(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126ff4b0;
  lStack_80 = param_2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  puVar2 = PTR_PTR_1126c51a0;
  uVar6 = *(ulong *)(param_2 + _DAT_11277dff0);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  func_0x00010c2583c0(uVar1);
  if ((float)param_1 == 0.0) {
    dVar11 = 50.0;
  }
  else {
    dVar11 = 0.20999999344348907;
    func_0x00010b8169fc();
    dVar12 = (double)(float)param_1;
    param_1 = dVar12 * dVar11 + -18.0;
    dVar12 = dVar12 * 72.0;
    dVar11 = param_1;
    if (dVar12 <= param_1) {
      dVar11 = dVar12;
    }
  }
  dVar15 = dVar11 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  lVar8 = (long)_DAT_11277dfcc;
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,dVar11,dVar11);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,dVar15);
  _objc_release(uVar4);
  lVar9 = (long)_DAT_11277dfd4;
  uVar4 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,dVar11,dVar11);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar9);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1,dVar15);
  _objc_release(uVar4);
  lVar7 = (long)_DAT_11277dfd8;
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1739e0(0,0,dVar11,dVar11);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = param_1;
  func_0x00010c17a6a0(param_1,dVar15);
  _objc_release(uVar4);
  func_0x00010c2583c0(uVar1);
  dVar12 = 17.0;
  if ((float)dVar11 != 0.0) {
    dVar12 = (double)(float)dVar11 * 24.0;
  }
  lVar10 = (long)_DAT_11277dfdc;
  uVar4 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar11 = dVar12;
  dVar14 = dVar12;
  func_0x00010c1739e0(0,0,dVar12);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(dVar12 * 0.5);
  _objc_release(uVar4);
  _objc_release(uVar5);
  lVar7 = param_2;
  func_0x00010b8166c0();
  dVar12 = -1.0;
  if ((int)lVar7 == 0) {
    dVar12 = 1.0;
  }
  uVar4 = *(undefined8 *)(param_2 + lVar10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(param_1 + (dVar15 / 1.4142135623730951) * dVar12,
                      dVar15 + dVar15 / 1.4142135623730951);
  _objc_release(uVar4);
  lVar7 = (long)_DAT_11277dfe0;
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_2);
  func_0x00010c23d5a0(dVar11,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar13 = 0.0;
  dVar15 = dVar14;
  func_0x00010c1739e0(0,0,dVar11);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  dVar12 = dVar13;
  _objc_release(uVar4);
  if (dVar13 == 0.0) {
    uVar4 = *(undefined8 *)(param_2 + lVar9);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    _objc_release(uVar4);
    dVar13 = dVar12;
  }
  dVar12 = dVar14 * 0.5 + dVar13 + 4.0;
  func_0x00010bf20c00(param_2);
  dVar14 = dVar15 - dVar14 * 0.5;
  if (dVar14 <= dVar12) {
    dVar12 = dVar14;
  }
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar14,dVar12);
  _objc_release(uVar4);
  lVar8 = (long)_DAT_11277dfe4;
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_2);
  func_0x00010c23d5a0(dVar11,dVar15,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  dVar12 = 0.0;
  func_0x00010c1739e0(0,0,dVar11,dVar15);
  _objc_release(uVar4);
  func_0x00010bf20c00(param_2);
  _CGRectGetMidX();
  uVar4 = *(undefined8 *)(param_2 + lVar7);
  dVar11 = dVar12;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  uVar5 = *(undefined8 *)(param_2 + lVar8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar12,dVar15 * 0.5 + dVar11 + 2.0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 108f4439c; end: 108f44443; -[SCSelectionStoryCarouselCollectionViewCell setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f4439c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dff4);
  *(undefined8 *)(param_1 + _DAT_11277dff4) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dfcc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277dfd4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f44444; end: 108f44cbb; -[SCSelectionStoryCarouselCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f44444(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  lVar11 = (long)_DAT_11277dff0;
  uVar8 = *(ulong *)(param_1 + lVar11);
  _objc_retain(uVar8);
  _objc_retain(param_3);
  uVar7 = param_3;
  if (uVar8 != param_3) {
    if (param_3 == 0) {
      _objc_release(uVar8);
    }
    else {
      uVar2 = uVar8;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar8);
      if ((uVar2 & 1) != 0) goto LAB_108f44c7c;
    }
    puVar3 = PTR_PTR_1126c51a0;
    uVar9 = *(ulong *)(param_1 + lVar11);
    _objc_retain(uVar9);
    _objc_opt_class(puVar3);
    uVar2 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar3);
    uVar8 = uVar9;
    if ((uVar2 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    puVar3 = PTR_PTR_1126c51a0;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_3);
    uVar2 = uVar7;
    func_0x00010c141300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = uVar8;
      func_0x00010c141300();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c141300(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c071ae0();
      _objc_release(uVar9);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        uVar2 = uVar7;
        func_0x00010c141300(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedebc0(param_1);
        _objc_release(uVar2);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277dfd8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    uVar2 = uVar7;
    func_0x00010bf13300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = uVar8;
      func_0x00010bf13300();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010bf13300();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar2);
      _objc_retain(uVar9);
      if (uVar2 == uVar9) {
        _objc_release(uVar9);
        _objc_release(uVar2);
        _objc_release(uVar9);
      }
      else {
        if (uVar9 == 0) {
          _objc_release();
          _objc_release(uVar2);
        }
        else {
          uVar4 = uVar2;
          func_0x00010c071ae0();
          _objc_release(uVar9);
          _objc_release(uVar2);
          _objc_release(uVar9);
          _objc_release(uVar2);
          if ((uVar4 & 1) != 0) goto LAB_108f446f8;
        }
        uVar2 = uVar7;
        func_0x00010bf13300(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bed3900(param_1);
      }
      _objc_release(uVar2);
    }
LAB_108f446f8:
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277dfcc);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    uVar2 = uVar7;
    func_0x00010c111340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = uVar8;
      func_0x00010c111340();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c111340();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar2);
      _objc_retain(uVar9);
      if (uVar2 == uVar9) {
        _objc_release(uVar9);
        _objc_release(uVar2);
        _objc_release(uVar9);
      }
      else {
        if (uVar9 == 0) {
          _objc_release();
          _objc_release(uVar2);
        }
        else {
          uVar4 = uVar2;
          func_0x00010c071ae0();
          _objc_release(uVar9);
          _objc_release(uVar2);
          _objc_release(uVar9);
          _objc_release(uVar2);
          if ((uVar4 & 1) != 0) goto LAB_108f44814;
        }
        uVar2 = uVar7;
        func_0x00010c111340(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beddc60(param_1);
      }
      _objc_release(uVar2);
    }
LAB_108f44814:
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277dfd4);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    uVar2 = uVar7;
    func_0x00010beed1a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = uVar7;
      func_0x00010beed1a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bed25e0(param_1);
      _objc_release(uVar2);
    }
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277dfdc);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    uVar2 = uVar8;
    func_0x00010c279320();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c279320(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c071ae0();
    if ((uVar4 & 1) == 0) {
      _objc_release(uVar9);
      _objc_release(uVar2);
LAB_108f449c4:
      uVar2 = uVar7;
      func_0x00010c279320(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee28a0(param_1);
      _objc_release(uVar2);
    }
    else {
      uVar4 = uVar7;
      func_0x00010c279320(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x2020000000;
      uStack_68 = 0;
      func_0x00010c0bda40(uVar4);
      cVar1 = *(char *)(puStack_78 + 3);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uVar4);
      _objc_release(uVar4);
      _objc_release(uVar9);
      _objc_release(uVar2);
      if (cVar1 == '\x01') goto LAB_108f449c4;
    }
    uVar2 = uVar8;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c2711a0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar9);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = uVar7;
      func_0x00010c2711a0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee2320(param_1);
      _objc_release(uVar2);
    }
    uVar2 = uVar7;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = uVar8;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c260dc0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar9);
      _objc_release(uVar2);
      if ((uVar4 & 1) == 0) {
        uVar2 = uVar7;
        func_0x00010c260dc0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee14c0(param_1);
        _objc_release(uVar2);
      }
    }
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277dfe4);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar5);
    uVar2 = uVar7;
    func_0x00010c23cf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      lVar10 = (long)_DAT_11277dfe8;
      lVar6 = *(long *)(param_1 + lVar10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040(param_1);
        _objc_release(uVar5);
      }
    }
    uVar2 = uVar7;
    func_0x00010c0b4d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      lVar10 = (long)_DAT_11277dfec;
      lVar6 = *(long *)(param_1 + lVar10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar6 == 0) {
        func_0x00010bf57500(*(undefined8 *)(param_1 + lVar10));
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + lVar10);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9040(param_1);
        _objc_release(uVar5);
      }
    }
    func_0x00010bf01b40(uVar7);
    func_0x00010c1677c0(param_1);
    uVar2 = uVar7;
    func_0x00010bf33820(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(param_1);
    _objc_release(uVar2);
    uVar2 = uVar7;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(param_1 + lVar11);
    *(ulong *)(param_1 + lVar11) = uVar2;
    _objc_release(uVar5);
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(uVar7);
  _objc_release(uVar8);
LAB_108f44c7c:
  _objc_release(param_3);
  return;
}



/* Entry: 108f44cbc; end: 108f44daf; +[SCSelectionStoryCarouselCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16] FUN_108f44cbc(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c51a0;
  _objc_opt_class(PTR_PTR_1126c51a0);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c2583c0(uVar1);
  _objc_release(uVar1);
  if (param_1 == 0.0) {
    dVar5 = 87.0;
    dVar4 = 75.0;
  }
  else {
    if ((float)param_1 == 0.0) {
      dVar5 = 50.0;
    }
    else {
      dVar5 = 0.20999999344348907;
      func_0x00010b8169fc();
      dVar4 = (double)(float)param_1;
      dVar5 = dVar4 * dVar5 + -18.0;
      dVar4 = dVar4 * 72.0;
      if (dVar4 <= dVar5) {
        dVar5 = dVar4;
      }
    }
    dVar4 = dVar5 + 18.0;
    dVar5 = dVar5 + 4.0 + 33.0;
  }
  _objc_release(param_4);
  auVar6._8_8_ = dVar5;
  auVar6._0_8_ = dVar4;
  return auVar6;
}



/* Entry: 108f44db0; end: 108f44e5b; -[SCSelectionStoryCarouselCollectionViewCell _updateRingViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f44db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dfd8;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(param_1,param_2,uVar1,0);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f44e5c; end: 108f44f03; -[SCSelectionStoryCarouselCollectionViewCell _updateAvatarViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f44e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dfcc;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f44f04; end: 108f44faf; -[SCSelectionStoryCarouselCollectionViewCell _updatePreviewImageViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f44f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dfd4;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fa0(param_1,param_2,uVar1,0);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc200();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f44fb0; end: 108f44ff7; -[SCSelectionStoryCarouselCollectionViewCell _updatePreviewImageViewModelURL:] */

void FUN_108f44fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4860;
  func_0x00010c0fde60(PTR_PTR_1126b4860,param_2,param_3,5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beddc40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f44ff8; end: 108f4509f; -[SCSelectionStoryCarouselCollectionViewCell _updateAccessoryImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f44ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dfdc;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f450a0; end: 108f451bb; -[SCSelectionStoryCarouselCollectionViewCell _updateAccessoryImageName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f450a0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c08fa60(), uVar1 == 0)) {
    func_0x00010bed25c0(param_1,param_2,0);
  }
  else {
    lVar2 = param_1 + _DAT_11277dff8;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bfe6f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c0dff20(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar1 = param_3;
      func_0x00010c067ec0();
      if ((int)uVar1 - 1U < 4) {
        puVar4 = (undefined *)(uVar1 & 0xffffffff);
        FUN_108f470a4(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bed25c0(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
    else {
      func_0x00010bed25c0(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f451bc; end: 108f452cf; -[SCSelectionStoryCarouselCollectionViewCell _updateTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f451bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dfe0;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ad00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f452d0; end: 108f45377; -[SCSelectionStoryCarouselCollectionViewCell _updateSubtitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f452d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277dfe4;
  uVar2 = *(ulong *)(param_1 + lVar3);
  _objc_retain(param_3);
  func_0x00010c06f880();
  if ((uVar2 & 1) == 0) {
    func_0x00010bf57500(*(undefined8 *)(param_1 + lVar3));
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f45378; end: 108f453c3; -[SCSelectionStoryCarouselCollectionViewCell _avatarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1a08;
  _objc_opt_new(PTR_PTR_1126b1a08);
  func_0x00010c1aa200();
  func_0x00010c21e900(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f453c4; end: 108f4544f; -[SCSelectionStoryCarouselCollectionViewCell _selectionTintOverlayView] */

void FUN_108f453c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c21e900();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf414e0(0x3fd999999999999a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f45450; end: 108f45687; -[SCSelectionStoryCarouselCollectionViewCell _previewImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45450(double param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  
  puVar2 = PTR_PTR_1126b48f0;
  _objc_opt_new(PTR_PTR_1126b48f0);
  func_0x00010c1ec940();
  func_0x00010c1aa200(puVar2);
  puVar3 = PTR_PTR_1126c51a0;
  uVar9 = *(ulong *)(param_2 + _DAT_11277dff0);
  _objc_retain(uVar9);
  _objc_opt_class(puVar3);
  uVar4 = uVar9;
  _objc_opt_isKindOfClass(uVar9,puVar3);
  uVar1 = uVar9;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar9);
  func_0x00010c2583c0(uVar1);
  _objc_release(uVar1);
  if ((float)param_1 == 0.0) {
    dVar10 = 50.0;
  }
  else {
    dVar10 = 0.20999999344348907;
    func_0x00010b8169fc();
    dVar11 = (double)(float)param_1;
    dVar10 = dVar11 * dVar10 + -18.0;
    dVar11 = dVar11 * 72.0;
    if (dVar11 <= dVar10) {
      dVar10 = dVar11;
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)(param_2 + _DAT_11277dff8);
  _objc_loadWeakRetained();
  puVar6 = puVar3;
  func_0x00010bfe6f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar7 = puVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cfe0(dVar10,dVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010bf5c7e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar8);
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c1d0560(puVar6);
    }
  }
  func_0x00010c1bec20(puVar2);
  func_0x00010c1e0040(dVar10,dVar10,puVar2);
  func_0x00010c1842e0(dVar10 * 0.5,puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f45688; end: 108f456a3; -[SCSelectionStoryCarouselCollectionViewCell _ringView] */

void FUN_108f45688(void)

{
  _objc_opt_new(PTR_PTR_1126c2eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f456a4; end: 108f4572b; -[SCSelectionStoryCarouselCollectionViewCell _titleLabel] */

void FUN_108f456a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  func_0x00010c1bdb00();
  func_0x00010c213040(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c165e20(puVar1,param_2,0);
  func_0x00010c1c83a0(0x3fe8000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f4572c; end: 108f457cb; -[SCSelectionStoryCarouselCollectionViewCell _subtitleLabel] */

void FUN_108f4572c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new(PTR_PTR_1126aea58);
  func_0x00010c1bdb00();
  func_0x00010c1cfce0(puVar1,param_2,1);
  func_0x00010c213040(puVar1,param_2,1);
  func_0x00010c21ad00(puVar1,param_2,0x19);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c165e20(puVar1,param_2,0);
  func_0x00010c1c83a0(0x3fe8000000000000,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f457cc; end: 108f45a93; -[SCSelectionStoryCarouselCollectionViewCell _updateTrailingAccessoryWithViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f457cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277dffc;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar3));
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108f45a94;
  uStack_70 = 0x108f45aa4;
  uStack_68 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108f45ab4;
  puStack_a0 = &UNK_110acd990;
  puStack_88 = puStack_98;
  func_0x00010c0bda40(param_3);
  puStack_e0 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_108f45a94;
  uStack_c8 = 0x108f45aa4;
  uStack_c0 = 0;
  func_0x00010c0bd2e0(puStack_88[5]);
  uVar2 = puStack_e0[5];
  lVar4 = (long)_DAT_11277e000;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar2;
  _objc_release(uVar1);
  lVar4 = (long)_DAT_11277dfc8;
  func_0x00010c161280(*(undefined8 *)(param_1 + lVar4));
  uVar1 = puStack_88[5];
  func_0x00010beeecc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010beed360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1619c0(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c219b60();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf34860(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf34860(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf493a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162480();
    _objc_release(uVar1);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 108f45a94; end: 108f45ab3;  */

void FUN_108f45a94(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f45ab4; end: 108f45aeb;  */

void FUN_108f45ab4(long param_1,undefined8 param_2)

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



/* Entry: 108f45aec; end: 108f45af3;  */

void FUN_108f45aec(void)

{
  return;
}



/* Entry: 108f45af4; end: 108f45b2f;  */

void FUN_108f45af4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126dc9e0;
  _objc_opt_new();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f45b30; end: 108f45b33;  */

void FUN_108f45b30(void)

{
  return;
}



/* Entry: 108f45b34; end: 108f45bfb; -[SCSelectionStoryCarouselCollectionViewCell _didSingleTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45b34(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126c51a0;
  uVar4 = *(ulong *)(param_1 + _DAT_11277dff0);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar3 = uVar1;
  func_0x00010c23cf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11277e004);
    uVar3 = uVar1;
    func_0x00010c23cf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0140(uVar5);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f45bfc; end: 108f45c4f; -[SCSelectionStoryCarouselCollectionViewCell _singleTapGestureRecognizer] */

void FUN_108f45bfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010c1d0120(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f45c50; end: 108f45d37; -[SCSelectionStoryCarouselCollectionViewCell _didLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45c50(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  func_0x00010c252440();
  puVar2 = PTR_PTR_1126c51a0;
  if (param_3 == 1) {
    uVar4 = *(ulong *)(param_1 + _DAT_11277dff0);
    _objc_retain(uVar4);
    _objc_opt_class(puVar2);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar2);
    uVar1 = uVar4;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar3 = uVar1;
    func_0x00010c0b4d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_11277e004);
      uVar3 = uVar1;
      func_0x00010c0b4d20(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar5);
      _objc_release(uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108f45d38; end: 108f45d8f; -[SCSelectionStoryCarouselCollectionViewCell _longPressGestureRecognizer] */

void FUN_108f45d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  _objc_alloc(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x00010c050900();
  func_0x00010c1c8340(0x3fd3333333333333);
  func_0x00010c178280(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f45d90; end: 108f45dcf; -[SCSelectionStoryCarouselCollectionViewCell gestureRecognizer:shouldReceiveTouch:] */

uint FUN_108f45d90(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  func_0x00010c29bf00(in_x3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_x3;
  func_0x00010c0722e0();
  _objc_release(in_x3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108f45dd0; end: 108f45dd3; -[SCSelectionStoryCarouselCollectionViewCell setSelected:] */

void FUN_108f45dd0(void)

{
  return;
}



/* Entry: 108f45dd4; end: 108f45def; -[SCSelectionStoryCarouselCollectionViewCell handleActionWithActionModel:fromSourceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277e004),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,param_3,param_4);
  return;
}



/* Entry: 108f45df0; end: 108f45dff; -[SCSelectionStoryCarouselCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f45df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dff0);
}



/* Entry: 108f45e00; end: 108f45e0f; -[SCSelectionStoryCarouselCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f45e00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e004);
}



/* Entry: 108f45e10; end: 108f45e4f; -[SCSelectionStoryCarouselCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e004;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f45e50; end: 108f45e5f; -[SCSelectionStoryCarouselCollectionViewCell imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f45e50(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277dff4);
}



/* Entry: 108f45e60; end: 108f45e7f; -[SCSelectionStoryCarouselCollectionViewCell cacheDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45e60(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277dff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f45e80; end: 108f45e93; -[SCSelectionStoryCarouselCollectionViewCell setCacheDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45e80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277dff8,param_3);
  return;
}



/* Entry: 108f45e94; end: 108f45fdf; -[SCSelectionStoryCarouselCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f45e94(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277dff8);
  _objc_storeStrong(param_1 + _DAT_11277dff4,0);
  _objc_storeStrong(param_1 + _DAT_11277e004,0);
  _objc_storeStrong(param_1 + _DAT_11277dff0,0);
  _objc_storeStrong(param_1 + _DAT_11277dfd0,0);
  _objc_storeStrong(param_1 + _DAT_11277dfec,0);
  _objc_storeStrong(param_1 + _DAT_11277dfe8,0);
  _objc_storeStrong(param_1 + _DAT_11277dfe4,0);
  _objc_storeStrong(param_1 + _DAT_11277dfe0,0);
  _objc_storeStrong(param_1 + _DAT_11277dffc,0);
  _objc_storeStrong(param_1 + _DAT_11277dfc8,0);
  _objc_storeStrong(param_1 + _DAT_11277e000,0);
  _objc_storeStrong(param_1 + _DAT_11277dfdc,0);
  _objc_storeStrong(param_1 + _DAT_11277dfd8,0);
  _objc_storeStrong(param_1 + _DAT_11277dfd4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277dfcc,0);
  return;
}



/* Entry: 108f45fe0; end: 108f46043; -[SCSelectionStoryImageCache init] */

undefined1 * FUN_108f45fe0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff4b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f46044; end: 108f4606b; -[SCSelectionStoryImageCache imageCache] */

void FUN_108f46044(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f4606c; end: 108f46077; -[SCSelectionStoryImageCache .cxx_destruct] */

void FUN_108f4606c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f46078; end: 108f46103; -[SCSelectionStoryViewMoreCell initWithFrame:] */

undefined1 * FUN_108f46078(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff4c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c160fc0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108f46104; end: 108f462cb; -[SCSelectionStoryViewMoreCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f46104(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11277e00c;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_108f462b4;
    }
    puVar2 = PTR_PTR_1126c51a8;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = 0;
    if (uVar1 != 0) {
      func_0x00010c20eaa0(param_1);
      uVar5 = param_3;
      func_0x00010c2716a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216540();
      _objc_release(lVar3);
      _objc_release(uVar5);
      lVar3 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213780();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a880();
      _objc_release(lVar3);
      lVar3 = param_1;
      func_0x00010c27f7a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165ea0();
      _objc_release(lVar3);
      uVar5 = param_3;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(ulong *)(param_1 + lVar6) = uVar5;
      _objc_release(uVar4);
      func_0x00010c1cbe20(param_1);
      uVar5 = param_3;
    }
  }
  _objc_release(uVar5);
LAB_108f462b4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f462cc; end: 108f462d7; +[SCSelectionStoryViewMoreCell sizeWithViewModel:constrainedToSize:] */

void FUN_108f462cc(void)

{
  return;
}



/* Entry: 108f462d8; end: 108f4630f; -[SCSelectionStoryViewMoreCell setOnTapViewMoreAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f462d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e010);
  *(undefined8 *)(param_1 + _DAT_11277e010) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f46310; end: 108f4632b; -[SCSelectionStoryViewMoreCell _onTapViewMore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f46310(long param_1)

{
  if (*(long *)(param_1 + _DAT_11277e010) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108f46324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_11277e010) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108f4632c; end: 108f4633b; -[SCSelectionStoryViewMoreCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f4632c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e00c);
}



/* Entry: 108f4633c; end: 108f4639b; -[SCSelectionStoryViewMoreCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f4633c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e010,0);
  _objc_storeStrong(param_1 + _DAT_11277e014,0);
  _objc_storeStrong(param_1 + _DAT_11277e018,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e00c,0);
  return;
}



/* Entry: 108f4639c; end: 108f46613; -[SCSelectionStoryCarouselCollectionViewCellViewModel initWithAvatarViewModel:ringViewModel:title:subtitle:previewImageURL:accessoryImageName:trailingAccessoryViewModel:singleTapActionModel:longPressActionModel:alpha:identifier:cellAccessibilityIdentifier:storiesCarouselInSendToSizeMultiplier:] */

undefined8 *
FUN_108f4639c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
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
  puStack_78 = PTR_PTR_1126ff4c8;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_1;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    puVar1[0xd] = param_2;
  }
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
  return puVar1;
}



/* Entry: 108f46614; end: 108f46637; -[SCSelectionStoryCarouselCollectionViewCellViewModel copyWithZone:] */

undefined8 FUN_108f46614(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f46638; end: 108f4675b; -[SCSelectionStoryCarouselCollectionViewCellViewModel hash] */

undefined8 * FUN_108f46638(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar8 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uStack_50 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar3;
  func_0x000107c3191c(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_108f4691c:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f46928;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x50) - *(double *)(param_3 + 0x50));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x50) + *(double *)(param_3 + 0x50)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (bVar1) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x68) - *(double *)(param_3 + 0x68));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x68) + *(double *)(param_3 + 0x68)) *
                 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar1 = dVar11 < dVar10;
        }
        if ((((bVar1) &&
             ((lVar7 = *(long *)((long)puVar5 + 8), lVar7 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            (((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
             ((((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
               ((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))))) &&
           (((lVar7 = *(long *)((long)puVar5 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
            ((((lVar7 = *(long *)((long)puVar5 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x40), lVar7 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
             (((lVar7 = *(long *)((long)puVar5 + 0x48), lVar7 == *(long *)(param_3 + 0x48) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
              ((lVar7 = *(long *)((long)puVar5 + 0x58), lVar7 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar7 != 0)))))))))) {
          puVar9 = *(undefined1 **)((long)puVar5 + 0x60);
          if (puVar9 != *(undefined1 **)(param_3 + 0x60)) {
            func_0x00010c071ae0();
            goto LAB_108f46928;
          }
          goto LAB_108f4691c;
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_108f46928:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 108f4675c; end: 108f46943; -[SCSelectionStoryCarouselCollectionViewCellViewModel isEqual:] */

long FUN_108f4675c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f4691c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f46928;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
      dVar5 = ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
        dVar5 = ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if ((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            (((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
               ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
              ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) &&
           (((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             (((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))) {
          lVar4 = *(long *)(param_1 + 0x60);
          if (lVar4 != *(long *)(param_3 + 0x60)) {
            func_0x00010c071ae0();
            goto LAB_108f46928;
          }
          goto LAB_108f4691c;
        }
      }
    }
    lVar4 = 0;
  }
LAB_108f46928:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108f46944; end: 108f4694b; -[SCSelectionStoryCarouselCollectionViewCellViewModel avatarViewModel] */

undefined8 FUN_108f46944(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f4694c; end: 108f46953; -[SCSelectionStoryCarouselCollectionViewCellViewModel ringViewModel] */

undefined8 FUN_108f4694c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f46954; end: 108f4695b; -[SCSelectionStoryCarouselCollectionViewCellViewModel title] */

undefined8 FUN_108f46954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f4695c; end: 108f46963; -[SCSelectionStoryCarouselCollectionViewCellViewModel subtitle] */

undefined8 FUN_108f4695c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f46964; end: 108f4696b; -[SCSelectionStoryCarouselCollectionViewCellViewModel previewImageURL] */

undefined8 FUN_108f46964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f4696c; end: 108f46973; -[SCSelectionStoryCarouselCollectionViewCellViewModel accessoryImageName] */

undefined8 FUN_108f4696c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f46974; end: 108f4697b; -[SCSelectionStoryCarouselCollectionViewCellViewModel trailingAccessoryViewModel] */

undefined8 FUN_108f46974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f4697c; end: 108f46983; -[SCSelectionStoryCarouselCollectionViewCellViewModel singleTapActionModel] */

undefined8 FUN_108f4697c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f46984; end: 108f4698b; -[SCSelectionStoryCarouselCollectionViewCellViewModel longPressActionModel] */

undefined8 FUN_108f46984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f4698c; end: 108f46993; -[SCSelectionStoryCarouselCollectionViewCellViewModel alpha] */

undefined8 FUN_108f4698c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f46994; end: 108f4699b; -[SCSelectionStoryCarouselCollectionViewCellViewModel identifier] */

undefined8 FUN_108f46994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f4699c; end: 108f469a3; -[SCSelectionStoryCarouselCollectionViewCellViewModel cellAccessibilityIdentifier] */

undefined8 FUN_108f4699c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 108f469a4; end: 108f469ab; -[SCSelectionStoryCarouselCollectionViewCellViewModel storiesCarouselInSendToSizeMultiplier] */

undefined8 FUN_108f469a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 108f469ac; end: 108f46a47; -[SCSelectionStoryCarouselCollectionViewCellViewModel .cxx_destruct] */

void FUN_108f469ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 108f46a48; end: 108f46ab3; +[SCSelectionStoryCellViewModel carouselCellWithViewModel:] */

void FUN_108f46a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b52f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f46ab4; end: 108f46b17; +[SCSelectionStoryCellViewModel listCellWithViewModel:] */

void FUN_108f46ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b52f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


